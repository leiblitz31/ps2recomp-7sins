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

// Function: sub_00105210
// Address: 0x105210 - 0x105f30
void sub_00105210_0x105210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105210_0x105210");
#endif

    switch (ctx->pc) {
        case 0x105210u: goto label_105210;
        case 0x105214u: goto label_105214;
        case 0x105218u: goto label_105218;
        case 0x10521cu: goto label_10521c;
        case 0x105220u: goto label_105220;
        case 0x105224u: goto label_105224;
        case 0x105228u: goto label_105228;
        case 0x10522cu: goto label_10522c;
        case 0x105230u: goto label_105230;
        case 0x105234u: goto label_105234;
        case 0x105238u: goto label_105238;
        case 0x10523cu: goto label_10523c;
        case 0x105240u: goto label_105240;
        case 0x105244u: goto label_105244;
        case 0x105248u: goto label_105248;
        case 0x10524cu: goto label_10524c;
        case 0x105250u: goto label_105250;
        case 0x105254u: goto label_105254;
        case 0x105258u: goto label_105258;
        case 0x10525cu: goto label_10525c;
        case 0x105260u: goto label_105260;
        case 0x105264u: goto label_105264;
        case 0x105268u: goto label_105268;
        case 0x10526cu: goto label_10526c;
        case 0x105270u: goto label_105270;
        case 0x105274u: goto label_105274;
        case 0x105278u: goto label_105278;
        case 0x10527cu: goto label_10527c;
        case 0x105280u: goto label_105280;
        case 0x105284u: goto label_105284;
        case 0x105288u: goto label_105288;
        case 0x10528cu: goto label_10528c;
        case 0x105290u: goto label_105290;
        case 0x105294u: goto label_105294;
        case 0x105298u: goto label_105298;
        case 0x10529cu: goto label_10529c;
        case 0x1052a0u: goto label_1052a0;
        case 0x1052a4u: goto label_1052a4;
        case 0x1052a8u: goto label_1052a8;
        case 0x1052acu: goto label_1052ac;
        case 0x1052b0u: goto label_1052b0;
        case 0x1052b4u: goto label_1052b4;
        case 0x1052b8u: goto label_1052b8;
        case 0x1052bcu: goto label_1052bc;
        case 0x1052c0u: goto label_1052c0;
        case 0x1052c4u: goto label_1052c4;
        case 0x1052c8u: goto label_1052c8;
        case 0x1052ccu: goto label_1052cc;
        case 0x1052d0u: goto label_1052d0;
        case 0x1052d4u: goto label_1052d4;
        case 0x1052d8u: goto label_1052d8;
        case 0x1052dcu: goto label_1052dc;
        case 0x1052e0u: goto label_1052e0;
        case 0x1052e4u: goto label_1052e4;
        case 0x1052e8u: goto label_1052e8;
        case 0x1052ecu: goto label_1052ec;
        case 0x1052f0u: goto label_1052f0;
        case 0x1052f4u: goto label_1052f4;
        case 0x1052f8u: goto label_1052f8;
        case 0x1052fcu: goto label_1052fc;
        case 0x105300u: goto label_105300;
        case 0x105304u: goto label_105304;
        case 0x105308u: goto label_105308;
        case 0x10530cu: goto label_10530c;
        case 0x105310u: goto label_105310;
        case 0x105314u: goto label_105314;
        case 0x105318u: goto label_105318;
        case 0x10531cu: goto label_10531c;
        case 0x105320u: goto label_105320;
        case 0x105324u: goto label_105324;
        case 0x105328u: goto label_105328;
        case 0x10532cu: goto label_10532c;
        case 0x105330u: goto label_105330;
        case 0x105334u: goto label_105334;
        case 0x105338u: goto label_105338;
        case 0x10533cu: goto label_10533c;
        case 0x105340u: goto label_105340;
        case 0x105344u: goto label_105344;
        case 0x105348u: goto label_105348;
        case 0x10534cu: goto label_10534c;
        case 0x105350u: goto label_105350;
        case 0x105354u: goto label_105354;
        case 0x105358u: goto label_105358;
        case 0x10535cu: goto label_10535c;
        case 0x105360u: goto label_105360;
        case 0x105364u: goto label_105364;
        case 0x105368u: goto label_105368;
        case 0x10536cu: goto label_10536c;
        case 0x105370u: goto label_105370;
        case 0x105374u: goto label_105374;
        case 0x105378u: goto label_105378;
        case 0x10537cu: goto label_10537c;
        case 0x105380u: goto label_105380;
        case 0x105384u: goto label_105384;
        case 0x105388u: goto label_105388;
        case 0x10538cu: goto label_10538c;
        case 0x105390u: goto label_105390;
        case 0x105394u: goto label_105394;
        case 0x105398u: goto label_105398;
        case 0x10539cu: goto label_10539c;
        case 0x1053a0u: goto label_1053a0;
        case 0x1053a4u: goto label_1053a4;
        case 0x1053a8u: goto label_1053a8;
        case 0x1053acu: goto label_1053ac;
        case 0x1053b0u: goto label_1053b0;
        case 0x1053b4u: goto label_1053b4;
        case 0x1053b8u: goto label_1053b8;
        case 0x1053bcu: goto label_1053bc;
        case 0x1053c0u: goto label_1053c0;
        case 0x1053c4u: goto label_1053c4;
        case 0x1053c8u: goto label_1053c8;
        case 0x1053ccu: goto label_1053cc;
        case 0x1053d0u: goto label_1053d0;
        case 0x1053d4u: goto label_1053d4;
        case 0x1053d8u: goto label_1053d8;
        case 0x1053dcu: goto label_1053dc;
        case 0x1053e0u: goto label_1053e0;
        case 0x1053e4u: goto label_1053e4;
        case 0x1053e8u: goto label_1053e8;
        case 0x1053ecu: goto label_1053ec;
        case 0x1053f0u: goto label_1053f0;
        case 0x1053f4u: goto label_1053f4;
        case 0x1053f8u: goto label_1053f8;
        case 0x1053fcu: goto label_1053fc;
        case 0x105400u: goto label_105400;
        case 0x105404u: goto label_105404;
        case 0x105408u: goto label_105408;
        case 0x10540cu: goto label_10540c;
        case 0x105410u: goto label_105410;
        case 0x105414u: goto label_105414;
        case 0x105418u: goto label_105418;
        case 0x10541cu: goto label_10541c;
        case 0x105420u: goto label_105420;
        case 0x105424u: goto label_105424;
        case 0x105428u: goto label_105428;
        case 0x10542cu: goto label_10542c;
        case 0x105430u: goto label_105430;
        case 0x105434u: goto label_105434;
        case 0x105438u: goto label_105438;
        case 0x10543cu: goto label_10543c;
        case 0x105440u: goto label_105440;
        case 0x105444u: goto label_105444;
        case 0x105448u: goto label_105448;
        case 0x10544cu: goto label_10544c;
        case 0x105450u: goto label_105450;
        case 0x105454u: goto label_105454;
        case 0x105458u: goto label_105458;
        case 0x10545cu: goto label_10545c;
        case 0x105460u: goto label_105460;
        case 0x105464u: goto label_105464;
        case 0x105468u: goto label_105468;
        case 0x10546cu: goto label_10546c;
        case 0x105470u: goto label_105470;
        case 0x105474u: goto label_105474;
        case 0x105478u: goto label_105478;
        case 0x10547cu: goto label_10547c;
        case 0x105480u: goto label_105480;
        case 0x105484u: goto label_105484;
        case 0x105488u: goto label_105488;
        case 0x10548cu: goto label_10548c;
        case 0x105490u: goto label_105490;
        case 0x105494u: goto label_105494;
        case 0x105498u: goto label_105498;
        case 0x10549cu: goto label_10549c;
        case 0x1054a0u: goto label_1054a0;
        case 0x1054a4u: goto label_1054a4;
        case 0x1054a8u: goto label_1054a8;
        case 0x1054acu: goto label_1054ac;
        case 0x1054b0u: goto label_1054b0;
        case 0x1054b4u: goto label_1054b4;
        case 0x1054b8u: goto label_1054b8;
        case 0x1054bcu: goto label_1054bc;
        case 0x1054c0u: goto label_1054c0;
        case 0x1054c4u: goto label_1054c4;
        case 0x1054c8u: goto label_1054c8;
        case 0x1054ccu: goto label_1054cc;
        case 0x1054d0u: goto label_1054d0;
        case 0x1054d4u: goto label_1054d4;
        case 0x1054d8u: goto label_1054d8;
        case 0x1054dcu: goto label_1054dc;
        case 0x1054e0u: goto label_1054e0;
        case 0x1054e4u: goto label_1054e4;
        case 0x1054e8u: goto label_1054e8;
        case 0x1054ecu: goto label_1054ec;
        case 0x1054f0u: goto label_1054f0;
        case 0x1054f4u: goto label_1054f4;
        case 0x1054f8u: goto label_1054f8;
        case 0x1054fcu: goto label_1054fc;
        case 0x105500u: goto label_105500;
        case 0x105504u: goto label_105504;
        case 0x105508u: goto label_105508;
        case 0x10550cu: goto label_10550c;
        case 0x105510u: goto label_105510;
        case 0x105514u: goto label_105514;
        case 0x105518u: goto label_105518;
        case 0x10551cu: goto label_10551c;
        case 0x105520u: goto label_105520;
        case 0x105524u: goto label_105524;
        case 0x105528u: goto label_105528;
        case 0x10552cu: goto label_10552c;
        case 0x105530u: goto label_105530;
        case 0x105534u: goto label_105534;
        case 0x105538u: goto label_105538;
        case 0x10553cu: goto label_10553c;
        case 0x105540u: goto label_105540;
        case 0x105544u: goto label_105544;
        case 0x105548u: goto label_105548;
        case 0x10554cu: goto label_10554c;
        case 0x105550u: goto label_105550;
        case 0x105554u: goto label_105554;
        case 0x105558u: goto label_105558;
        case 0x10555cu: goto label_10555c;
        case 0x105560u: goto label_105560;
        case 0x105564u: goto label_105564;
        case 0x105568u: goto label_105568;
        case 0x10556cu: goto label_10556c;
        case 0x105570u: goto label_105570;
        case 0x105574u: goto label_105574;
        case 0x105578u: goto label_105578;
        case 0x10557cu: goto label_10557c;
        case 0x105580u: goto label_105580;
        case 0x105584u: goto label_105584;
        case 0x105588u: goto label_105588;
        case 0x10558cu: goto label_10558c;
        case 0x105590u: goto label_105590;
        case 0x105594u: goto label_105594;
        case 0x105598u: goto label_105598;
        case 0x10559cu: goto label_10559c;
        case 0x1055a0u: goto label_1055a0;
        case 0x1055a4u: goto label_1055a4;
        case 0x1055a8u: goto label_1055a8;
        case 0x1055acu: goto label_1055ac;
        case 0x1055b0u: goto label_1055b0;
        case 0x1055b4u: goto label_1055b4;
        case 0x1055b8u: goto label_1055b8;
        case 0x1055bcu: goto label_1055bc;
        case 0x1055c0u: goto label_1055c0;
        case 0x1055c4u: goto label_1055c4;
        case 0x1055c8u: goto label_1055c8;
        case 0x1055ccu: goto label_1055cc;
        case 0x1055d0u: goto label_1055d0;
        case 0x1055d4u: goto label_1055d4;
        case 0x1055d8u: goto label_1055d8;
        case 0x1055dcu: goto label_1055dc;
        case 0x1055e0u: goto label_1055e0;
        case 0x1055e4u: goto label_1055e4;
        case 0x1055e8u: goto label_1055e8;
        case 0x1055ecu: goto label_1055ec;
        case 0x1055f0u: goto label_1055f0;
        case 0x1055f4u: goto label_1055f4;
        case 0x1055f8u: goto label_1055f8;
        case 0x1055fcu: goto label_1055fc;
        case 0x105600u: goto label_105600;
        case 0x105604u: goto label_105604;
        case 0x105608u: goto label_105608;
        case 0x10560cu: goto label_10560c;
        case 0x105610u: goto label_105610;
        case 0x105614u: goto label_105614;
        case 0x105618u: goto label_105618;
        case 0x10561cu: goto label_10561c;
        case 0x105620u: goto label_105620;
        case 0x105624u: goto label_105624;
        case 0x105628u: goto label_105628;
        case 0x10562cu: goto label_10562c;
        case 0x105630u: goto label_105630;
        case 0x105634u: goto label_105634;
        case 0x105638u: goto label_105638;
        case 0x10563cu: goto label_10563c;
        case 0x105640u: goto label_105640;
        case 0x105644u: goto label_105644;
        case 0x105648u: goto label_105648;
        case 0x10564cu: goto label_10564c;
        case 0x105650u: goto label_105650;
        case 0x105654u: goto label_105654;
        case 0x105658u: goto label_105658;
        case 0x10565cu: goto label_10565c;
        case 0x105660u: goto label_105660;
        case 0x105664u: goto label_105664;
        case 0x105668u: goto label_105668;
        case 0x10566cu: goto label_10566c;
        case 0x105670u: goto label_105670;
        case 0x105674u: goto label_105674;
        case 0x105678u: goto label_105678;
        case 0x10567cu: goto label_10567c;
        case 0x105680u: goto label_105680;
        case 0x105684u: goto label_105684;
        case 0x105688u: goto label_105688;
        case 0x10568cu: goto label_10568c;
        case 0x105690u: goto label_105690;
        case 0x105694u: goto label_105694;
        case 0x105698u: goto label_105698;
        case 0x10569cu: goto label_10569c;
        case 0x1056a0u: goto label_1056a0;
        case 0x1056a4u: goto label_1056a4;
        case 0x1056a8u: goto label_1056a8;
        case 0x1056acu: goto label_1056ac;
        case 0x1056b0u: goto label_1056b0;
        case 0x1056b4u: goto label_1056b4;
        case 0x1056b8u: goto label_1056b8;
        case 0x1056bcu: goto label_1056bc;
        case 0x1056c0u: goto label_1056c0;
        case 0x1056c4u: goto label_1056c4;
        case 0x1056c8u: goto label_1056c8;
        case 0x1056ccu: goto label_1056cc;
        case 0x1056d0u: goto label_1056d0;
        case 0x1056d4u: goto label_1056d4;
        case 0x1056d8u: goto label_1056d8;
        case 0x1056dcu: goto label_1056dc;
        case 0x1056e0u: goto label_1056e0;
        case 0x1056e4u: goto label_1056e4;
        case 0x1056e8u: goto label_1056e8;
        case 0x1056ecu: goto label_1056ec;
        case 0x1056f0u: goto label_1056f0;
        case 0x1056f4u: goto label_1056f4;
        case 0x1056f8u: goto label_1056f8;
        case 0x1056fcu: goto label_1056fc;
        case 0x105700u: goto label_105700;
        case 0x105704u: goto label_105704;
        case 0x105708u: goto label_105708;
        case 0x10570cu: goto label_10570c;
        case 0x105710u: goto label_105710;
        case 0x105714u: goto label_105714;
        case 0x105718u: goto label_105718;
        case 0x10571cu: goto label_10571c;
        case 0x105720u: goto label_105720;
        case 0x105724u: goto label_105724;
        case 0x105728u: goto label_105728;
        case 0x10572cu: goto label_10572c;
        case 0x105730u: goto label_105730;
        case 0x105734u: goto label_105734;
        case 0x105738u: goto label_105738;
        case 0x10573cu: goto label_10573c;
        case 0x105740u: goto label_105740;
        case 0x105744u: goto label_105744;
        case 0x105748u: goto label_105748;
        case 0x10574cu: goto label_10574c;
        case 0x105750u: goto label_105750;
        case 0x105754u: goto label_105754;
        case 0x105758u: goto label_105758;
        case 0x10575cu: goto label_10575c;
        case 0x105760u: goto label_105760;
        case 0x105764u: goto label_105764;
        case 0x105768u: goto label_105768;
        case 0x10576cu: goto label_10576c;
        case 0x105770u: goto label_105770;
        case 0x105774u: goto label_105774;
        case 0x105778u: goto label_105778;
        case 0x10577cu: goto label_10577c;
        case 0x105780u: goto label_105780;
        case 0x105784u: goto label_105784;
        case 0x105788u: goto label_105788;
        case 0x10578cu: goto label_10578c;
        case 0x105790u: goto label_105790;
        case 0x105794u: goto label_105794;
        case 0x105798u: goto label_105798;
        case 0x10579cu: goto label_10579c;
        case 0x1057a0u: goto label_1057a0;
        case 0x1057a4u: goto label_1057a4;
        case 0x1057a8u: goto label_1057a8;
        case 0x1057acu: goto label_1057ac;
        case 0x1057b0u: goto label_1057b0;
        case 0x1057b4u: goto label_1057b4;
        case 0x1057b8u: goto label_1057b8;
        case 0x1057bcu: goto label_1057bc;
        case 0x1057c0u: goto label_1057c0;
        case 0x1057c4u: goto label_1057c4;
        case 0x1057c8u: goto label_1057c8;
        case 0x1057ccu: goto label_1057cc;
        case 0x1057d0u: goto label_1057d0;
        case 0x1057d4u: goto label_1057d4;
        case 0x1057d8u: goto label_1057d8;
        case 0x1057dcu: goto label_1057dc;
        case 0x1057e0u: goto label_1057e0;
        case 0x1057e4u: goto label_1057e4;
        case 0x1057e8u: goto label_1057e8;
        case 0x1057ecu: goto label_1057ec;
        case 0x1057f0u: goto label_1057f0;
        case 0x1057f4u: goto label_1057f4;
        case 0x1057f8u: goto label_1057f8;
        case 0x1057fcu: goto label_1057fc;
        case 0x105800u: goto label_105800;
        case 0x105804u: goto label_105804;
        case 0x105808u: goto label_105808;
        case 0x10580cu: goto label_10580c;
        case 0x105810u: goto label_105810;
        case 0x105814u: goto label_105814;
        case 0x105818u: goto label_105818;
        case 0x10581cu: goto label_10581c;
        case 0x105820u: goto label_105820;
        case 0x105824u: goto label_105824;
        case 0x105828u: goto label_105828;
        case 0x10582cu: goto label_10582c;
        case 0x105830u: goto label_105830;
        case 0x105834u: goto label_105834;
        case 0x105838u: goto label_105838;
        case 0x10583cu: goto label_10583c;
        case 0x105840u: goto label_105840;
        case 0x105844u: goto label_105844;
        case 0x105848u: goto label_105848;
        case 0x10584cu: goto label_10584c;
        case 0x105850u: goto label_105850;
        case 0x105854u: goto label_105854;
        case 0x105858u: goto label_105858;
        case 0x10585cu: goto label_10585c;
        case 0x105860u: goto label_105860;
        case 0x105864u: goto label_105864;
        case 0x105868u: goto label_105868;
        case 0x10586cu: goto label_10586c;
        case 0x105870u: goto label_105870;
        case 0x105874u: goto label_105874;
        case 0x105878u: goto label_105878;
        case 0x10587cu: goto label_10587c;
        case 0x105880u: goto label_105880;
        case 0x105884u: goto label_105884;
        case 0x105888u: goto label_105888;
        case 0x10588cu: goto label_10588c;
        case 0x105890u: goto label_105890;
        case 0x105894u: goto label_105894;
        case 0x105898u: goto label_105898;
        case 0x10589cu: goto label_10589c;
        case 0x1058a0u: goto label_1058a0;
        case 0x1058a4u: goto label_1058a4;
        case 0x1058a8u: goto label_1058a8;
        case 0x1058acu: goto label_1058ac;
        case 0x1058b0u: goto label_1058b0;
        case 0x1058b4u: goto label_1058b4;
        case 0x1058b8u: goto label_1058b8;
        case 0x1058bcu: goto label_1058bc;
        case 0x1058c0u: goto label_1058c0;
        case 0x1058c4u: goto label_1058c4;
        case 0x1058c8u: goto label_1058c8;
        case 0x1058ccu: goto label_1058cc;
        case 0x1058d0u: goto label_1058d0;
        case 0x1058d4u: goto label_1058d4;
        case 0x1058d8u: goto label_1058d8;
        case 0x1058dcu: goto label_1058dc;
        case 0x1058e0u: goto label_1058e0;
        case 0x1058e4u: goto label_1058e4;
        case 0x1058e8u: goto label_1058e8;
        case 0x1058ecu: goto label_1058ec;
        case 0x1058f0u: goto label_1058f0;
        case 0x1058f4u: goto label_1058f4;
        case 0x1058f8u: goto label_1058f8;
        case 0x1058fcu: goto label_1058fc;
        case 0x105900u: goto label_105900;
        case 0x105904u: goto label_105904;
        case 0x105908u: goto label_105908;
        case 0x10590cu: goto label_10590c;
        case 0x105910u: goto label_105910;
        case 0x105914u: goto label_105914;
        case 0x105918u: goto label_105918;
        case 0x10591cu: goto label_10591c;
        case 0x105920u: goto label_105920;
        case 0x105924u: goto label_105924;
        case 0x105928u: goto label_105928;
        case 0x10592cu: goto label_10592c;
        case 0x105930u: goto label_105930;
        case 0x105934u: goto label_105934;
        case 0x105938u: goto label_105938;
        case 0x10593cu: goto label_10593c;
        case 0x105940u: goto label_105940;
        case 0x105944u: goto label_105944;
        case 0x105948u: goto label_105948;
        case 0x10594cu: goto label_10594c;
        case 0x105950u: goto label_105950;
        case 0x105954u: goto label_105954;
        case 0x105958u: goto label_105958;
        case 0x10595cu: goto label_10595c;
        case 0x105960u: goto label_105960;
        case 0x105964u: goto label_105964;
        case 0x105968u: goto label_105968;
        case 0x10596cu: goto label_10596c;
        case 0x105970u: goto label_105970;
        case 0x105974u: goto label_105974;
        case 0x105978u: goto label_105978;
        case 0x10597cu: goto label_10597c;
        case 0x105980u: goto label_105980;
        case 0x105984u: goto label_105984;
        case 0x105988u: goto label_105988;
        case 0x10598cu: goto label_10598c;
        case 0x105990u: goto label_105990;
        case 0x105994u: goto label_105994;
        case 0x105998u: goto label_105998;
        case 0x10599cu: goto label_10599c;
        case 0x1059a0u: goto label_1059a0;
        case 0x1059a4u: goto label_1059a4;
        case 0x1059a8u: goto label_1059a8;
        case 0x1059acu: goto label_1059ac;
        case 0x1059b0u: goto label_1059b0;
        case 0x1059b4u: goto label_1059b4;
        case 0x1059b8u: goto label_1059b8;
        case 0x1059bcu: goto label_1059bc;
        case 0x1059c0u: goto label_1059c0;
        case 0x1059c4u: goto label_1059c4;
        case 0x1059c8u: goto label_1059c8;
        case 0x1059ccu: goto label_1059cc;
        case 0x1059d0u: goto label_1059d0;
        case 0x1059d4u: goto label_1059d4;
        case 0x1059d8u: goto label_1059d8;
        case 0x1059dcu: goto label_1059dc;
        case 0x1059e0u: goto label_1059e0;
        case 0x1059e4u: goto label_1059e4;
        case 0x1059e8u: goto label_1059e8;
        case 0x1059ecu: goto label_1059ec;
        case 0x1059f0u: goto label_1059f0;
        case 0x1059f4u: goto label_1059f4;
        case 0x1059f8u: goto label_1059f8;
        case 0x1059fcu: goto label_1059fc;
        case 0x105a00u: goto label_105a00;
        case 0x105a04u: goto label_105a04;
        case 0x105a08u: goto label_105a08;
        case 0x105a0cu: goto label_105a0c;
        case 0x105a10u: goto label_105a10;
        case 0x105a14u: goto label_105a14;
        case 0x105a18u: goto label_105a18;
        case 0x105a1cu: goto label_105a1c;
        case 0x105a20u: goto label_105a20;
        case 0x105a24u: goto label_105a24;
        case 0x105a28u: goto label_105a28;
        case 0x105a2cu: goto label_105a2c;
        case 0x105a30u: goto label_105a30;
        case 0x105a34u: goto label_105a34;
        case 0x105a38u: goto label_105a38;
        case 0x105a3cu: goto label_105a3c;
        case 0x105a40u: goto label_105a40;
        case 0x105a44u: goto label_105a44;
        case 0x105a48u: goto label_105a48;
        case 0x105a4cu: goto label_105a4c;
        case 0x105a50u: goto label_105a50;
        case 0x105a54u: goto label_105a54;
        case 0x105a58u: goto label_105a58;
        case 0x105a5cu: goto label_105a5c;
        case 0x105a60u: goto label_105a60;
        case 0x105a64u: goto label_105a64;
        case 0x105a68u: goto label_105a68;
        case 0x105a6cu: goto label_105a6c;
        case 0x105a70u: goto label_105a70;
        case 0x105a74u: goto label_105a74;
        case 0x105a78u: goto label_105a78;
        case 0x105a7cu: goto label_105a7c;
        case 0x105a80u: goto label_105a80;
        case 0x105a84u: goto label_105a84;
        case 0x105a88u: goto label_105a88;
        case 0x105a8cu: goto label_105a8c;
        case 0x105a90u: goto label_105a90;
        case 0x105a94u: goto label_105a94;
        case 0x105a98u: goto label_105a98;
        case 0x105a9cu: goto label_105a9c;
        case 0x105aa0u: goto label_105aa0;
        case 0x105aa4u: goto label_105aa4;
        case 0x105aa8u: goto label_105aa8;
        case 0x105aacu: goto label_105aac;
        case 0x105ab0u: goto label_105ab0;
        case 0x105ab4u: goto label_105ab4;
        case 0x105ab8u: goto label_105ab8;
        case 0x105abcu: goto label_105abc;
        case 0x105ac0u: goto label_105ac0;
        case 0x105ac4u: goto label_105ac4;
        case 0x105ac8u: goto label_105ac8;
        case 0x105accu: goto label_105acc;
        case 0x105ad0u: goto label_105ad0;
        case 0x105ad4u: goto label_105ad4;
        case 0x105ad8u: goto label_105ad8;
        case 0x105adcu: goto label_105adc;
        case 0x105ae0u: goto label_105ae0;
        case 0x105ae4u: goto label_105ae4;
        case 0x105ae8u: goto label_105ae8;
        case 0x105aecu: goto label_105aec;
        case 0x105af0u: goto label_105af0;
        case 0x105af4u: goto label_105af4;
        case 0x105af8u: goto label_105af8;
        case 0x105afcu: goto label_105afc;
        case 0x105b00u: goto label_105b00;
        case 0x105b04u: goto label_105b04;
        case 0x105b08u: goto label_105b08;
        case 0x105b0cu: goto label_105b0c;
        case 0x105b10u: goto label_105b10;
        case 0x105b14u: goto label_105b14;
        case 0x105b18u: goto label_105b18;
        case 0x105b1cu: goto label_105b1c;
        case 0x105b20u: goto label_105b20;
        case 0x105b24u: goto label_105b24;
        case 0x105b28u: goto label_105b28;
        case 0x105b2cu: goto label_105b2c;
        case 0x105b30u: goto label_105b30;
        case 0x105b34u: goto label_105b34;
        case 0x105b38u: goto label_105b38;
        case 0x105b3cu: goto label_105b3c;
        case 0x105b40u: goto label_105b40;
        case 0x105b44u: goto label_105b44;
        case 0x105b48u: goto label_105b48;
        case 0x105b4cu: goto label_105b4c;
        case 0x105b50u: goto label_105b50;
        case 0x105b54u: goto label_105b54;
        case 0x105b58u: goto label_105b58;
        case 0x105b5cu: goto label_105b5c;
        case 0x105b60u: goto label_105b60;
        case 0x105b64u: goto label_105b64;
        case 0x105b68u: goto label_105b68;
        case 0x105b6cu: goto label_105b6c;
        case 0x105b70u: goto label_105b70;
        case 0x105b74u: goto label_105b74;
        case 0x105b78u: goto label_105b78;
        case 0x105b7cu: goto label_105b7c;
        case 0x105b80u: goto label_105b80;
        case 0x105b84u: goto label_105b84;
        case 0x105b88u: goto label_105b88;
        case 0x105b8cu: goto label_105b8c;
        case 0x105b90u: goto label_105b90;
        case 0x105b94u: goto label_105b94;
        case 0x105b98u: goto label_105b98;
        case 0x105b9cu: goto label_105b9c;
        case 0x105ba0u: goto label_105ba0;
        case 0x105ba4u: goto label_105ba4;
        case 0x105ba8u: goto label_105ba8;
        case 0x105bacu: goto label_105bac;
        case 0x105bb0u: goto label_105bb0;
        case 0x105bb4u: goto label_105bb4;
        case 0x105bb8u: goto label_105bb8;
        case 0x105bbcu: goto label_105bbc;
        case 0x105bc0u: goto label_105bc0;
        case 0x105bc4u: goto label_105bc4;
        case 0x105bc8u: goto label_105bc8;
        case 0x105bccu: goto label_105bcc;
        case 0x105bd0u: goto label_105bd0;
        case 0x105bd4u: goto label_105bd4;
        case 0x105bd8u: goto label_105bd8;
        case 0x105bdcu: goto label_105bdc;
        case 0x105be0u: goto label_105be0;
        case 0x105be4u: goto label_105be4;
        case 0x105be8u: goto label_105be8;
        case 0x105becu: goto label_105bec;
        case 0x105bf0u: goto label_105bf0;
        case 0x105bf4u: goto label_105bf4;
        case 0x105bf8u: goto label_105bf8;
        case 0x105bfcu: goto label_105bfc;
        case 0x105c00u: goto label_105c00;
        case 0x105c04u: goto label_105c04;
        case 0x105c08u: goto label_105c08;
        case 0x105c0cu: goto label_105c0c;
        case 0x105c10u: goto label_105c10;
        case 0x105c14u: goto label_105c14;
        case 0x105c18u: goto label_105c18;
        case 0x105c1cu: goto label_105c1c;
        case 0x105c20u: goto label_105c20;
        case 0x105c24u: goto label_105c24;
        case 0x105c28u: goto label_105c28;
        case 0x105c2cu: goto label_105c2c;
        case 0x105c30u: goto label_105c30;
        case 0x105c34u: goto label_105c34;
        case 0x105c38u: goto label_105c38;
        case 0x105c3cu: goto label_105c3c;
        case 0x105c40u: goto label_105c40;
        case 0x105c44u: goto label_105c44;
        case 0x105c48u: goto label_105c48;
        case 0x105c4cu: goto label_105c4c;
        case 0x105c50u: goto label_105c50;
        case 0x105c54u: goto label_105c54;
        case 0x105c58u: goto label_105c58;
        case 0x105c5cu: goto label_105c5c;
        case 0x105c60u: goto label_105c60;
        case 0x105c64u: goto label_105c64;
        case 0x105c68u: goto label_105c68;
        case 0x105c6cu: goto label_105c6c;
        case 0x105c70u: goto label_105c70;
        case 0x105c74u: goto label_105c74;
        case 0x105c78u: goto label_105c78;
        case 0x105c7cu: goto label_105c7c;
        case 0x105c80u: goto label_105c80;
        case 0x105c84u: goto label_105c84;
        case 0x105c88u: goto label_105c88;
        case 0x105c8cu: goto label_105c8c;
        case 0x105c90u: goto label_105c90;
        case 0x105c94u: goto label_105c94;
        case 0x105c98u: goto label_105c98;
        case 0x105c9cu: goto label_105c9c;
        case 0x105ca0u: goto label_105ca0;
        case 0x105ca4u: goto label_105ca4;
        case 0x105ca8u: goto label_105ca8;
        case 0x105cacu: goto label_105cac;
        case 0x105cb0u: goto label_105cb0;
        case 0x105cb4u: goto label_105cb4;
        case 0x105cb8u: goto label_105cb8;
        case 0x105cbcu: goto label_105cbc;
        case 0x105cc0u: goto label_105cc0;
        case 0x105cc4u: goto label_105cc4;
        case 0x105cc8u: goto label_105cc8;
        case 0x105cccu: goto label_105ccc;
        case 0x105cd0u: goto label_105cd0;
        case 0x105cd4u: goto label_105cd4;
        case 0x105cd8u: goto label_105cd8;
        case 0x105cdcu: goto label_105cdc;
        case 0x105ce0u: goto label_105ce0;
        case 0x105ce4u: goto label_105ce4;
        case 0x105ce8u: goto label_105ce8;
        case 0x105cecu: goto label_105cec;
        case 0x105cf0u: goto label_105cf0;
        case 0x105cf4u: goto label_105cf4;
        case 0x105cf8u: goto label_105cf8;
        case 0x105cfcu: goto label_105cfc;
        case 0x105d00u: goto label_105d00;
        case 0x105d04u: goto label_105d04;
        case 0x105d08u: goto label_105d08;
        case 0x105d0cu: goto label_105d0c;
        case 0x105d10u: goto label_105d10;
        case 0x105d14u: goto label_105d14;
        case 0x105d18u: goto label_105d18;
        case 0x105d1cu: goto label_105d1c;
        case 0x105d20u: goto label_105d20;
        case 0x105d24u: goto label_105d24;
        case 0x105d28u: goto label_105d28;
        case 0x105d2cu: goto label_105d2c;
        case 0x105d30u: goto label_105d30;
        case 0x105d34u: goto label_105d34;
        case 0x105d38u: goto label_105d38;
        case 0x105d3cu: goto label_105d3c;
        case 0x105d40u: goto label_105d40;
        case 0x105d44u: goto label_105d44;
        case 0x105d48u: goto label_105d48;
        case 0x105d4cu: goto label_105d4c;
        case 0x105d50u: goto label_105d50;
        case 0x105d54u: goto label_105d54;
        case 0x105d58u: goto label_105d58;
        case 0x105d5cu: goto label_105d5c;
        case 0x105d60u: goto label_105d60;
        case 0x105d64u: goto label_105d64;
        case 0x105d68u: goto label_105d68;
        case 0x105d6cu: goto label_105d6c;
        case 0x105d70u: goto label_105d70;
        case 0x105d74u: goto label_105d74;
        case 0x105d78u: goto label_105d78;
        case 0x105d7cu: goto label_105d7c;
        case 0x105d80u: goto label_105d80;
        case 0x105d84u: goto label_105d84;
        case 0x105d88u: goto label_105d88;
        case 0x105d8cu: goto label_105d8c;
        case 0x105d90u: goto label_105d90;
        case 0x105d94u: goto label_105d94;
        case 0x105d98u: goto label_105d98;
        case 0x105d9cu: goto label_105d9c;
        case 0x105da0u: goto label_105da0;
        case 0x105da4u: goto label_105da4;
        case 0x105da8u: goto label_105da8;
        case 0x105dacu: goto label_105dac;
        case 0x105db0u: goto label_105db0;
        case 0x105db4u: goto label_105db4;
        case 0x105db8u: goto label_105db8;
        case 0x105dbcu: goto label_105dbc;
        case 0x105dc0u: goto label_105dc0;
        case 0x105dc4u: goto label_105dc4;
        case 0x105dc8u: goto label_105dc8;
        case 0x105dccu: goto label_105dcc;
        case 0x105dd0u: goto label_105dd0;
        case 0x105dd4u: goto label_105dd4;
        case 0x105dd8u: goto label_105dd8;
        case 0x105ddcu: goto label_105ddc;
        case 0x105de0u: goto label_105de0;
        case 0x105de4u: goto label_105de4;
        case 0x105de8u: goto label_105de8;
        case 0x105decu: goto label_105dec;
        case 0x105df0u: goto label_105df0;
        case 0x105df4u: goto label_105df4;
        case 0x105df8u: goto label_105df8;
        case 0x105dfcu: goto label_105dfc;
        case 0x105e00u: goto label_105e00;
        case 0x105e04u: goto label_105e04;
        case 0x105e08u: goto label_105e08;
        case 0x105e0cu: goto label_105e0c;
        case 0x105e10u: goto label_105e10;
        case 0x105e14u: goto label_105e14;
        case 0x105e18u: goto label_105e18;
        case 0x105e1cu: goto label_105e1c;
        case 0x105e20u: goto label_105e20;
        case 0x105e24u: goto label_105e24;
        case 0x105e28u: goto label_105e28;
        case 0x105e2cu: goto label_105e2c;
        case 0x105e30u: goto label_105e30;
        case 0x105e34u: goto label_105e34;
        case 0x105e38u: goto label_105e38;
        case 0x105e3cu: goto label_105e3c;
        case 0x105e40u: goto label_105e40;
        case 0x105e44u: goto label_105e44;
        case 0x105e48u: goto label_105e48;
        case 0x105e4cu: goto label_105e4c;
        case 0x105e50u: goto label_105e50;
        case 0x105e54u: goto label_105e54;
        case 0x105e58u: goto label_105e58;
        case 0x105e5cu: goto label_105e5c;
        case 0x105e60u: goto label_105e60;
        case 0x105e64u: goto label_105e64;
        case 0x105e68u: goto label_105e68;
        case 0x105e6cu: goto label_105e6c;
        case 0x105e70u: goto label_105e70;
        case 0x105e74u: goto label_105e74;
        case 0x105e78u: goto label_105e78;
        case 0x105e7cu: goto label_105e7c;
        case 0x105e80u: goto label_105e80;
        case 0x105e84u: goto label_105e84;
        case 0x105e88u: goto label_105e88;
        case 0x105e8cu: goto label_105e8c;
        case 0x105e90u: goto label_105e90;
        case 0x105e94u: goto label_105e94;
        case 0x105e98u: goto label_105e98;
        case 0x105e9cu: goto label_105e9c;
        case 0x105ea0u: goto label_105ea0;
        case 0x105ea4u: goto label_105ea4;
        case 0x105ea8u: goto label_105ea8;
        case 0x105eacu: goto label_105eac;
        case 0x105eb0u: goto label_105eb0;
        case 0x105eb4u: goto label_105eb4;
        case 0x105eb8u: goto label_105eb8;
        case 0x105ebcu: goto label_105ebc;
        case 0x105ec0u: goto label_105ec0;
        case 0x105ec4u: goto label_105ec4;
        case 0x105ec8u: goto label_105ec8;
        case 0x105eccu: goto label_105ecc;
        case 0x105ed0u: goto label_105ed0;
        case 0x105ed4u: goto label_105ed4;
        case 0x105ed8u: goto label_105ed8;
        case 0x105edcu: goto label_105edc;
        case 0x105ee0u: goto label_105ee0;
        case 0x105ee4u: goto label_105ee4;
        case 0x105ee8u: goto label_105ee8;
        case 0x105eecu: goto label_105eec;
        case 0x105ef0u: goto label_105ef0;
        case 0x105ef4u: goto label_105ef4;
        case 0x105ef8u: goto label_105ef8;
        case 0x105efcu: goto label_105efc;
        case 0x105f00u: goto label_105f00;
        case 0x105f04u: goto label_105f04;
        case 0x105f08u: goto label_105f08;
        case 0x105f0cu: goto label_105f0c;
        case 0x105f10u: goto label_105f10;
        case 0x105f14u: goto label_105f14;
        case 0x105f18u: goto label_105f18;
        case 0x105f1cu: goto label_105f1c;
        case 0x105f20u: goto label_105f20;
        case 0x105f24u: goto label_105f24;
        case 0x105f28u: goto label_105f28;
        case 0x105f2cu: goto label_105f2c;
        default: break;
    }

    ctx->pc = 0x105210u;

label_105210:
    // 0x105210: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x105210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
label_105214:
    // 0x105214: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x105214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_105218:
    // 0x105218: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x105218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_10521c:
    // 0x10521c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_105220:
    // 0x105220: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x105220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_105224:
    // 0x105224: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x105224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_105228:
    // 0x105228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x105228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10522c:
    // 0x10522c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_105230:
    // 0x105230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x105230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_105234:
    // 0x105234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_105238:
    // 0x105238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10523c:
    // 0x10523c: 0xafa40340  sw          $a0, 0x340($sp)
    ctx->pc = 0x10523cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 4));
label_105240:
    // 0x105240: 0xafa50350  sw          $a1, 0x350($sp)
    ctx->pc = 0x105240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 5));
label_105244:
    // 0x105244: 0xafa60360  sw          $a2, 0x360($sp)
    ctx->pc = 0x105244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 6));
label_105248:
    // 0x105248: 0xafa0033c  sw          $zero, 0x33C($sp)
    ctx->pc = 0x105248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 0));
label_10524c:
    // 0x10524c: 0xc08ef50  jal         func_23BD40
label_105250:
    if (ctx->pc == 0x105250u) {
        ctx->pc = 0x105254u;
        goto label_105254;
    }
    ctx->pc = 0x10524Cu;
    SET_GPR_U32(ctx, 31, 0x105254u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x10524Cu, 0x105254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105254u;
label_105254:
    // 0x105254: 0xafa20338  sw          $v0, 0x338($sp)
    ctx->pc = 0x105254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 2));
label_105258:
    // 0x105258: 0x8fa50338  lw          $a1, 0x338($sp)
    ctx->pc = 0x105258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_10525c:
    // 0x10525c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_105260:
    if (ctx->pc == 0x105260u) {
        ctx->pc = 0x105264u;
        goto label_105264;
    }
    ctx->pc = 0x10525Cu;
    {
        const bool branch_taken_0x10525c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10525c) {
            ctx->pc = 0x1052B4u;
            goto label_1052b4;
        }
    }
    ctx->pc = 0x105264u;
label_105264:
    // 0x105264: 0x8fa40338  lw          $a0, 0x338($sp)
    ctx->pc = 0x105264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_105268:
    // 0x105268: 0xc0406f0  jal         func_101BC0
label_10526c:
    if (ctx->pc == 0x10526Cu) {
        ctx->pc = 0x105270u;
        goto label_105270;
    }
    ctx->pc = 0x105268u;
    SET_GPR_U32(ctx, 31, 0x105270u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x105268u, 0x105270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105270u;
label_105270:
    // 0x105270: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_105274:
    // 0x105274: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_105278:
    if (ctx->pc == 0x105278u) {
        ctx->pc = 0x10527Cu;
        goto label_10527c;
    }
    ctx->pc = 0x105274u;
    {
        const bool branch_taken_0x105274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x105274) {
            ctx->pc = 0x105294u;
            goto label_105294;
        }
    }
    ctx->pc = 0x10527Cu;
label_10527c:
    // 0x10527c: 0x8fa40338  lw          $a0, 0x338($sp)
    ctx->pc = 0x10527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_105280:
    // 0x105280: 0xc0406f0  jal         func_101BC0
label_105284:
    if (ctx->pc == 0x105284u) {
        ctx->pc = 0x105288u;
        goto label_105288;
    }
    ctx->pc = 0x105280u;
    SET_GPR_U32(ctx, 31, 0x105288u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x105280u, 0x105288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105288u;
label_105288:
    // 0x105288: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x105288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_10528c:
    // 0x10528c: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
label_105290:
    if (ctx->pc == 0x105290u) {
        ctx->pc = 0x105294u;
        goto label_105294;
    }
    ctx->pc = 0x10528Cu;
    {
        const bool branch_taken_0x10528c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x10528c) {
            ctx->pc = 0x1052B4u;
            goto label_1052b4;
        }
    }
    ctx->pc = 0x105294u;
label_105294:
    // 0x105294: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x105294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_105298:
    // 0x105298: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x105298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_10529c:
    // 0x10529c: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x10529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_1052a0:
    // 0x1052a0: 0xc78c8044  lwc1        $f12, -0x7FBC($gp)
    ctx->pc = 0x1052a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1052a4:
    // 0x1052a4: 0xc041bc4  jal         func_106F10
label_1052a8:
    if (ctx->pc == 0x1052A8u) {
        ctx->pc = 0x1052ACu;
        goto label_1052ac;
    }
    ctx->pc = 0x1052A4u;
    SET_GPR_U32(ctx, 31, 0x1052ACu);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x1052A4u, 0x1052ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052ACu;
label_1052ac:
    // 0x1052ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1052b0:
    if (ctx->pc == 0x1052B0u) {
        ctx->pc = 0x1052B4u;
        goto label_1052b4;
    }
    ctx->pc = 0x1052ACu;
    {
        const bool branch_taken_0x1052ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1052ac) {
            ctx->pc = 0x1052D0u;
            goto label_1052d0;
        }
    }
    ctx->pc = 0x1052B4u;
label_1052b4:
    // 0x1052b4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1052b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1052b8:
    // 0x1052b8: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x1052b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_1052bc:
    // 0x1052bc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1052bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1052c0:
    // 0x1052c0: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1052c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1052c4:
    // 0x1052c4: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x1052c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_1052c8:
    // 0x1052c8: 0xc041bc4  jal         func_106F10
label_1052cc:
    if (ctx->pc == 0x1052CCu) {
        ctx->pc = 0x1052D0u;
        goto label_1052d0;
    }
    ctx->pc = 0x1052C8u;
    SET_GPR_U32(ctx, 31, 0x1052D0u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x1052C8u, 0x1052D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052D0u;
label_1052d0:
    // 0x1052d0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1052d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1052d4:
    // 0x1052d4: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x1052d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_1052d8:
    // 0x1052d8: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x1052d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1052dc:
    // 0x1052dc: 0xaf84c034  sw          $a0, -0x3FCC($gp)
    ctx->pc = 0x1052dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 4));
label_1052e0:
    // 0x1052e0: 0xc122430  jal         func_4890C0
label_1052e4:
    if (ctx->pc == 0x1052E4u) {
        ctx->pc = 0x1052E8u;
        goto label_1052e8;
    }
    ctx->pc = 0x1052E0u;
    SET_GPR_U32(ctx, 31, 0x1052E8u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x1052E0u, 0x1052E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1052E8u;
label_1052e8:
    // 0x1052e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1052e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1052ec:
    // 0x1052ec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1052ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1052f0:
    // 0x1052f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1052f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1052f4:
    // 0x1052f4: 0x24a513d0  addiu       $a1, $a1, 0x13D0
    ctx->pc = 0x1052f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5072));
label_1052f8:
    // 0x1052f8: 0xc0bc5c6  jal         func_2F1718
label_1052fc:
    if (ctx->pc == 0x1052FCu) {
        ctx->pc = 0x105300u;
        goto label_105300;
    }
    ctx->pc = 0x1052F8u;
    SET_GPR_U32(ctx, 31, 0x105300u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1052F8u, 0x105300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105300u;
label_105300:
    // 0x105300: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x105300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_105304:
    // 0x105304: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x105304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_105308:
    // 0x105308: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x105308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_10530c:
    // 0x10530c: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x10530cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_105310:
    // 0x105310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105314:
    // 0x105314: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x105314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_105318:
    // 0x105318: 0x24e71410  addiu       $a3, $a3, 0x1410
    ctx->pc = 0x105318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5136));
label_10531c:
    // 0x10531c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10531cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105320:
    // 0x105320: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105324:
    // 0x105324: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x105324u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105328:
    // 0x105328: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x105328u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10532c:
    // 0x10532c: 0xc120c08  jal         func_483020
label_105330:
    if (ctx->pc == 0x105330u) {
        ctx->pc = 0x105334u;
        goto label_105334;
    }
    ctx->pc = 0x10532Cu;
    SET_GPR_U32(ctx, 31, 0x105334u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x10532Cu, 0x105334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105334u;
label_105334:
    // 0x105334: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x105334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_105338:
    // 0x105338: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x105338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_10533c:
    // 0x10533c: 0x24a51430  addiu       $a1, $a1, 0x1430
    ctx->pc = 0x10533cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5168));
label_105340:
    // 0x105340: 0xc0bc5c6  jal         func_2F1718
label_105344:
    if (ctx->pc == 0x105344u) {
        ctx->pc = 0x105348u;
        goto label_105348;
    }
    ctx->pc = 0x105340u;
    SET_GPR_U32(ctx, 31, 0x105348u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x105340u, 0x105348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105348u;
label_105348:
    // 0x105348: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x105348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_10534c:
    // 0x10534c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x10534cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_105350:
    // 0x105350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105354:
    // 0x105354: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x105354u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_105358:
    // 0x105358: 0x24e71470  addiu       $a3, $a3, 0x1470
    ctx->pc = 0x105358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5232));
label_10535c:
    // 0x10535c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10535cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105360:
    // 0x105360: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x105360u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105364:
    // 0x105364: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x105364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105368:
    // 0x105368: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x105368u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10536c:
    // 0x10536c: 0xc120c08  jal         func_483020
label_105370:
    if (ctx->pc == 0x105370u) {
        ctx->pc = 0x105374u;
        goto label_105374;
    }
    ctx->pc = 0x10536Cu;
    SET_GPR_U32(ctx, 31, 0x105374u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x10536Cu, 0x105374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105374u;
label_105374:
    // 0x105374: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x105374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_105378:
    // 0x105378: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x105378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_10537c:
    // 0x10537c: 0x24a51490  addiu       $a1, $a1, 0x1490
    ctx->pc = 0x10537cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5264));
label_105380:
    // 0x105380: 0xc0bc5c6  jal         func_2F1718
label_105384:
    if (ctx->pc == 0x105384u) {
        ctx->pc = 0x105388u;
        goto label_105388;
    }
    ctx->pc = 0x105380u;
    SET_GPR_U32(ctx, 31, 0x105388u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x105380u, 0x105388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105388u;
label_105388:
    // 0x105388: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10538c:
    // 0x10538c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_105390:
    // 0x105390: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x105390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_105394:
    // 0x105394: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x105394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_105398:
    // 0x105398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10539c:
    // 0x10539c: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x10539cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_1053a0:
    // 0x1053a0: 0x24e714c8  addiu       $a3, $a3, 0x14C8
    ctx->pc = 0x1053a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5320));
label_1053a4:
    // 0x1053a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1053a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053a8:
    // 0x1053a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1053a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053ac:
    // 0x1053ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1053acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053b0:
    // 0x1053b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1053b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053b4:
    // 0x1053b4: 0xc120c08  jal         func_483020
label_1053b8:
    if (ctx->pc == 0x1053B8u) {
        ctx->pc = 0x1053BCu;
        goto label_1053bc;
    }
    ctx->pc = 0x1053B4u;
    SET_GPR_U32(ctx, 31, 0x1053BCu);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x1053B4u, 0x1053BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1053BCu;
label_1053bc:
    // 0x1053bc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1053bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1053c0:
    // 0x1053c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1053c4:
    // 0x1053c4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1053c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_1053c8:
    // 0x1053c8: 0x24c614e0  addiu       $a2, $a2, 0x14E0
    ctx->pc = 0x1053c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5344));
label_1053cc:
    // 0x1053cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1053ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1053d0:
    // 0x1053d0: 0xc0bc5c6  jal         func_2F1718
label_1053d4:
    if (ctx->pc == 0x1053D4u) {
        ctx->pc = 0x1053D8u;
        goto label_1053d8;
    }
    ctx->pc = 0x1053D0u;
    SET_GPR_U32(ctx, 31, 0x1053D8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1053D0u, 0x1053D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1053D8u;
label_1053d8:
    // 0x1053d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1053d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1053dc:
    // 0x1053dc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1053dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1053e0:
    // 0x1053e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1053e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053e4:
    // 0x1053e4: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x1053e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
label_1053e8:
    // 0x1053e8: 0x24e71518  addiu       $a3, $a3, 0x1518
    ctx->pc = 0x1053e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5400));
label_1053ec:
    // 0x1053ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1053ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053f0:
    // 0x1053f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1053f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053f4:
    // 0x1053f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1053f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053f8:
    // 0x1053f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1053f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1053fc:
    // 0x1053fc: 0xc120c08  jal         func_483020
label_105400:
    if (ctx->pc == 0x105400u) {
        ctx->pc = 0x105404u;
        goto label_105404;
    }
    ctx->pc = 0x1053FCu;
    SET_GPR_U32(ctx, 31, 0x105404u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x1053FCu, 0x105404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105404u;
label_105404:
    // 0x105404: 0xc09a360  jal         func_268D80
label_105408:
    if (ctx->pc == 0x105408u) {
        ctx->pc = 0x10540Cu;
        goto label_10540c;
    }
    ctx->pc = 0x105404u;
    SET_GPR_U32(ctx, 31, 0x10540Cu);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x105404u, 0x10540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10540Cu;
label_10540c:
    // 0x10540c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105410:
    // 0x105410: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x105410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_105414:
    // 0x105414: 0xc09a834  jal         func_26A0D0
label_105418:
    if (ctx->pc == 0x105418u) {
        ctx->pc = 0x10541Cu;
        goto label_10541c;
    }
    ctx->pc = 0x105414u;
    SET_GPR_U32(ctx, 31, 0x10541Cu);
    ctx->pc = 0x26A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A0D0u, 0x105414u, 0x10541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10541Cu;
label_10541c:
    // 0x10541c: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x10541cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_105420:
    // 0x105420: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x105420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_105424:
    // 0x105424: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x105424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_105428:
    // 0x105428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10542c:
    // 0x10542c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
label_105430:
    if (ctx->pc == 0x105430u) {
        ctx->pc = 0x105434u;
        goto label_105434;
    }
    ctx->pc = 0x10542Cu;
    {
        const bool branch_taken_0x10542c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x10542c) {
            ctx->pc = 0x10545Cu;
            goto label_10545c;
        }
    }
    ctx->pc = 0x105434u;
label_105434:
    // 0x105434: 0xc0434e0  jal         func_10D380
label_105438:
    if (ctx->pc == 0x105438u) {
        ctx->pc = 0x10543Cu;
        goto label_10543c;
    }
    ctx->pc = 0x105434u;
    SET_GPR_U32(ctx, 31, 0x10543Cu);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x105434u, 0x10543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10543Cu;
label_10543c:
    // 0x10543c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105440:
    // 0x105440: 0xc0434d8  jal         func_10D360
label_105444:
    if (ctx->pc == 0x105444u) {
        ctx->pc = 0x105448u;
        goto label_105448;
    }
    ctx->pc = 0x105440u;
    SET_GPR_U32(ctx, 31, 0x105448u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x105440u, 0x105448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105448u;
label_105448:
    // 0x105448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10544c:
    // 0x10544c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10544cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105450:
    // 0x105450: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x105450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_105454:
    // 0x105454: 0xc045330  jal         func_114CC0
label_105458:
    if (ctx->pc == 0x105458u) {
        ctx->pc = 0x10545Cu;
        goto label_10545c;
    }
    ctx->pc = 0x105454u;
    SET_GPR_U32(ctx, 31, 0x10545Cu);
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x105454u, 0x10545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10545Cu;
label_10545c:
    // 0x10545c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10545cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105460:
    // 0x105460: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x105460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_105464:
    // 0x105464: 0xc119b68  jal         func_466DA0
label_105468:
    if (ctx->pc == 0x105468u) {
        ctx->pc = 0x10546Cu;
        goto label_10546c;
    }
    ctx->pc = 0x105464u;
    SET_GPR_U32(ctx, 31, 0x10546Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x105464u, 0x10546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10546Cu;
label_10546c:
    // 0x10546c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x10546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_105470:
    // 0x105470: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105474:
    // 0x105474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105478:
    // 0x105478: 0xc0400e0  jal         func_100380
label_10547c:
    if (ctx->pc == 0x10547Cu) {
        ctx->pc = 0x105480u;
        goto label_105480;
    }
    ctx->pc = 0x105478u;
    SET_GPR_U32(ctx, 31, 0x105480u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x105478u, 0x105480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105480u;
label_105480:
    // 0x105480: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x105480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105484:
    // 0x105484: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_105488:
    if (ctx->pc == 0x105488u) {
        ctx->pc = 0x10548Cu;
        goto label_10548c;
    }
    ctx->pc = 0x105484u;
    {
        const bool branch_taken_0x105484 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x105484) {
            ctx->pc = 0x10549Cu;
            goto label_10549c;
        }
    }
    ctx->pc = 0x10548Cu;
label_10548c:
    // 0x10548c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_105490:
    // 0x105490: 0xc041bb4  jal         func_106ED0
label_105494:
    if (ctx->pc == 0x105494u) {
        ctx->pc = 0x105498u;
        goto label_105498;
    }
    ctx->pc = 0x105490u;
    SET_GPR_U32(ctx, 31, 0x105498u);
    ctx->pc = 0x106ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106ED0u, 0x105490u, 0x105498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105498u;
label_105498:
    // 0x105498: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x105498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10549c:
    // 0x10549c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x10549cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1054a0:
    // 0x1054a0: 0x8fa40350  lw          $a0, 0x350($sp)
    ctx->pc = 0x1054a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_1054a4:
    // 0x1054a4: 0x10040036  beq         $zero, $a0, . + 4 + (0x36 << 2)
label_1054a8:
    if (ctx->pc == 0x1054A8u) {
        ctx->pc = 0x1054ACu;
        goto label_1054ac;
    }
    ctx->pc = 0x1054A4u;
    {
        const bool branch_taken_0x1054a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x1054a4) {
            ctx->pc = 0x105580u;
            goto label_105580;
        }
    }
    ctx->pc = 0x1054ACu;
label_1054ac:
    // 0x1054ac: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x1054acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_1054b0:
    // 0x1054b0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1054b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1054b4:
    // 0x1054b4: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x1054b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_1054b8:
    // 0x1054b8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1054b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_1054bc:
    // 0x1054bc: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_1054c0:
    if (ctx->pc == 0x1054C0u) {
        ctx->pc = 0x1054C4u;
        goto label_1054c4;
    }
    ctx->pc = 0x1054BCu;
    {
        const bool branch_taken_0x1054bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1054bc) {
            ctx->pc = 0x105580u;
            goto label_105580;
        }
    }
    ctx->pc = 0x1054C4u;
label_1054c4:
    // 0x1054c4: 0x1010002e  beq         $zero, $s0, . + 4 + (0x2E << 2)
label_1054c8:
    if (ctx->pc == 0x1054C8u) {
        ctx->pc = 0x1054CCu;
        goto label_1054cc;
    }
    ctx->pc = 0x1054C4u;
    {
        const bool branch_taken_0x1054c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1054c4) {
            ctx->pc = 0x105580u;
            goto label_105580;
        }
    }
    ctx->pc = 0x1054CCu;
label_1054cc:
    // 0x1054cc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1054ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1054d0:
    // 0x1054d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1054d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1054d4:
    // 0x1054d4: 0xc08ec7c  jal         func_23B1F0
label_1054d8:
    if (ctx->pc == 0x1054D8u) {
        ctx->pc = 0x1054DCu;
        goto label_1054dc;
    }
    ctx->pc = 0x1054D4u;
    SET_GPR_U32(ctx, 31, 0x1054DCu);
    ctx->pc = 0x23B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1F0u, 0x1054D4u, 0x1054DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054DCu;
label_1054dc:
    // 0x1054dc: 0x27a400e4  addiu       $a0, $sp, 0xE4
    ctx->pc = 0x1054dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1054e0:
    // 0x1054e0: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x1054e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_1054e4:
    // 0x1054e4: 0xc041ba4  jal         func_106E90
label_1054e8:
    if (ctx->pc == 0x1054E8u) {
        ctx->pc = 0x1054ECu;
        goto label_1054ec;
    }
    ctx->pc = 0x1054E4u;
    SET_GPR_U32(ctx, 31, 0x1054ECu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x1054E4u, 0x1054ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054ECu;
label_1054ec:
    // 0x1054ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1054ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1054f0:
    // 0x1054f0: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x1054f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_1054f4:
    // 0x1054f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1054f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1054f8:
    // 0x1054f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1054f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1054fc:
    // 0x1054fc: 0x320f809  jalr        $t9
label_105500:
    if (ctx->pc == 0x105500u) {
        ctx->pc = 0x105504u;
        goto label_105504;
    }
    ctx->pc = 0x1054FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x105504u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1054FCu, 0x105504u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105504u;
label_105504:
    // 0x105504: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x105504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_105508:
    // 0x105508: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x105508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_10550c:
    // 0x10550c: 0x10050018  beq         $zero, $a1, . + 4 + (0x18 << 2)
label_105510:
    if (ctx->pc == 0x105510u) {
        ctx->pc = 0x105514u;
        goto label_105514;
    }
    ctx->pc = 0x10550Cu;
    {
        const bool branch_taken_0x10550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x10550c) {
            ctx->pc = 0x105570u;
            goto label_105570;
        }
    }
    ctx->pc = 0x105514u;
label_105514:
    // 0x105514: 0xafa0033c  sw          $zero, 0x33C($sp)
    ctx->pc = 0x105514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 0));
label_105518:
    // 0x105518: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x105518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_10551c:
    // 0x10551c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_105520:
    // 0x105520: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x105520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_105524:
    // 0x105524: 0x24a51530  addiu       $a1, $a1, 0x1530
    ctx->pc = 0x105524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5424));
label_105528:
    // 0x105528: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x105528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_10552c:
    // 0x10552c: 0xc041b90  jal         func_106E40
label_105530:
    if (ctx->pc == 0x105530u) {
        ctx->pc = 0x105534u;
        goto label_105534;
    }
    ctx->pc = 0x10552Cu;
    SET_GPR_U32(ctx, 31, 0x105534u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x10552Cu, 0x105534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105534u;
label_105534:
    // 0x105534: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x105534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_105538:
    // 0x105538: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10553c:
    // 0x10553c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x10553cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_105540:
    // 0x105540: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x105540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_105544:
    // 0x105544: 0x27a6033c  addiu       $a2, $sp, 0x33C
    ctx->pc = 0x105544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 828));
label_105548:
    // 0x105548: 0xc041e04  jal         func_107810
label_10554c:
    if (ctx->pc == 0x10554Cu) {
        ctx->pc = 0x105550u;
        goto label_105550;
    }
    ctx->pc = 0x105548u;
    SET_GPR_U32(ctx, 31, 0x105550u);
    ctx->pc = 0x107810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107810u, 0x105548u, 0x105550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105550u;
label_105550:
    // 0x105550: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x105550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_105554:
    // 0x105554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105558:
    // 0x105558: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_10555c:
    if (ctx->pc == 0x10555Cu) {
        ctx->pc = 0x105560u;
        goto label_105560;
    }
    ctx->pc = 0x105558u;
    {
        const bool branch_taken_0x105558 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x105558) {
            ctx->pc = 0x105570u;
            goto label_105570;
        }
    }
    ctx->pc = 0x105560u;
label_105560:
    // 0x105560: 0x8fa4033c  lw          $a0, 0x33C($sp)
    ctx->pc = 0x105560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_105564:
    // 0x105564: 0xc08551c  jal         func_215470
label_105568:
    if (ctx->pc == 0x105568u) {
        ctx->pc = 0x10556Cu;
        goto label_10556c;
    }
    ctx->pc = 0x105564u;
    SET_GPR_U32(ctx, 31, 0x10556Cu);
    ctx->pc = 0x215470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215470u, 0x105564u, 0x10556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10556Cu;
label_10556c:
    // 0x10556c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x10556cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105570:
    // 0x105570: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x105570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_105574:
    // 0x105574: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105578:
    // 0x105578: 0xc041b74  jal         func_106DD0
label_10557c:
    if (ctx->pc == 0x10557Cu) {
        ctx->pc = 0x105580u;
        goto label_105580;
    }
    ctx->pc = 0x105578u;
    SET_GPR_U32(ctx, 31, 0x105580u);
    ctx->pc = 0x106DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DD0u, 0x105578u, 0x105580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105580u;
label_105580:
    // 0x105580: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_105584:
    if (ctx->pc == 0x105584u) {
        ctx->pc = 0x105588u;
        goto label_105588;
    }
    ctx->pc = 0x105580u;
    {
        const bool branch_taken_0x105580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x105580) {
            ctx->pc = 0x1055A4u;
            goto label_1055a4;
        }
    }
    ctx->pc = 0x105588u;
label_105588:
    // 0x105588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10558c:
    // 0x10558c: 0xc041b64  jal         func_106D90
label_105590:
    if (ctx->pc == 0x105590u) {
        ctx->pc = 0x105594u;
        goto label_105594;
    }
    ctx->pc = 0x10558Cu;
    SET_GPR_U32(ctx, 31, 0x105594u);
    ctx->pc = 0x106D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D90u, 0x10558Cu, 0x105594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105594u;
label_105594:
    // 0x105594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105598:
    // 0x105598: 0xc119c5c  jal         func_467170
label_10559c:
    if (ctx->pc == 0x10559Cu) {
        ctx->pc = 0x1055A0u;
        goto label_1055a0;
    }
    ctx->pc = 0x105598u;
    SET_GPR_U32(ctx, 31, 0x1055A0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x105598u, 0x1055A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055A0u;
label_1055a0:
    // 0x1055a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1055a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1055a4:
    // 0x1055a4: 0x1e203c  dsll32      $a0, $fp, 0
    ctx->pc = 0x1055a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 0));
label_1055a8:
    // 0x1055a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1055ac:
    // 0x1055ac: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
label_1055b0:
    if (ctx->pc == 0x1055B0u) {
        ctx->pc = 0x1055B4u;
        goto label_1055b4;
    }
    ctx->pc = 0x1055ACu;
    {
        const bool branch_taken_0x1055ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1055ac) {
            ctx->pc = 0x10560Cu;
            goto label_10560c;
        }
    }
    ctx->pc = 0x1055B4u;
label_1055b4:
    // 0x1055b4: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x1055b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_1055b8:
    // 0x1055b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1055b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1055bc:
    // 0x1055bc: 0x8fa50360  lw          $a1, 0x360($sp)
    ctx->pc = 0x1055bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_1055c0:
    // 0x1055c0: 0xc04120c  jal         func_104830
label_1055c4:
    if (ctx->pc == 0x1055C4u) {
        ctx->pc = 0x1055C8u;
        goto label_1055c8;
    }
    ctx->pc = 0x1055C0u;
    SET_GPR_U32(ctx, 31, 0x1055C8u);
    ctx->pc = 0x104830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104830u, 0x1055C0u, 0x1055C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055C8u;
label_1055c8:
    // 0x1055c8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1055c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1055cc:
    // 0x1055cc: 0xc09a360  jal         func_268D80
label_1055d0:
    if (ctx->pc == 0x1055D0u) {
        ctx->pc = 0x1055D4u;
        goto label_1055d4;
    }
    ctx->pc = 0x1055CCu;
    SET_GPR_U32(ctx, 31, 0x1055D4u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x1055CCu, 0x1055D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055D4u;
label_1055d4:
    // 0x1055d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1055d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1055d8:
    // 0x1055d8: 0xc09a8d0  jal         func_26A340
label_1055dc:
    if (ctx->pc == 0x1055DCu) {
        ctx->pc = 0x1055E0u;
        goto label_1055e0;
    }
    ctx->pc = 0x1055D8u;
    SET_GPR_U32(ctx, 31, 0x1055E0u);
    ctx->pc = 0x26A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A340u, 0x1055D8u, 0x1055E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055E0u;
label_1055e0:
    // 0x1055e0: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x1055e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1055e4:
    // 0x1055e4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1055e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1055e8:
    // 0x1055e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1055e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1055ec:
    // 0x1055ec: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1055ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_1055f0:
    // 0x1055f0: 0x24c61530  addiu       $a2, $a2, 0x1530
    ctx->pc = 0x1055f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5424));
label_1055f4:
    // 0x1055f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1055f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1055f8:
    // 0x1055f8: 0x278684c0  addiu       $a2, $gp, -0x7B40
    ctx->pc = 0x1055f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935744));
label_1055fc:
    // 0x1055fc: 0xc041b90  jal         func_106E40
label_105600:
    if (ctx->pc == 0x105600u) {
        ctx->pc = 0x105604u;
        goto label_105604;
    }
    ctx->pc = 0x1055FCu;
    SET_GPR_U32(ctx, 31, 0x105604u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x1055FCu, 0x105604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105604u;
label_105604:
    // 0x105604: 0x10000237  b           . + 4 + (0x237 << 2)
label_105608:
    if (ctx->pc == 0x105608u) {
        ctx->pc = 0x10560Cu;
        goto label_10560c;
    }
    ctx->pc = 0x105604u;
    {
        const bool branch_taken_0x105604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105604) {
            ctx->pc = 0x105EE4u;
            goto label_105ee4;
        }
    }
    ctx->pc = 0x10560Cu;
label_10560c:
    // 0x10560c: 0x8f85bbdc  lw          $a1, -0x4424($gp)
    ctx->pc = 0x10560cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_105610:
    // 0x105610: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105614:
    // 0x105614: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x105614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_105618:
    // 0x105618: 0xc08e668  jal         func_2399A0
label_10561c:
    if (ctx->pc == 0x10561Cu) {
        ctx->pc = 0x105620u;
        goto label_105620;
    }
    ctx->pc = 0x105618u;
    SET_GPR_U32(ctx, 31, 0x105620u);
    ctx->pc = 0x2399A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2399A0u, 0x105618u, 0x105620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105620u;
label_105620:
    // 0x105620: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x105620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_105624:
    // 0x105624: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x105624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_105628:
    // 0x105628: 0x24050545  addiu       $a1, $zero, 0x545
    ctx->pc = 0x105628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1349));
label_10562c:
    // 0x10562c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10562cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105630:
    // 0x105630: 0xc041b54  jal         func_106D50
label_105634:
    if (ctx->pc == 0x105634u) {
        ctx->pc = 0x105638u;
        goto label_105638;
    }
    ctx->pc = 0x105630u;
    SET_GPR_U32(ctx, 31, 0x105638u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x105630u, 0x105638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105638u;
label_105638:
    // 0x105638: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x105638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_10563c:
    // 0x10563c: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x10563cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_105640:
    // 0x105640: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_105644:
    // 0x105644: 0x24a51530  addiu       $a1, $a1, 0x1530
    ctx->pc = 0x105644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5424));
label_105648:
    // 0x105648: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x105648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_10564c:
    // 0x10564c: 0xc041b90  jal         func_106E40
label_105650:
    if (ctx->pc == 0x105650u) {
        ctx->pc = 0x105654u;
        goto label_105654;
    }
    ctx->pc = 0x10564Cu;
    SET_GPR_U32(ctx, 31, 0x105654u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x10564Cu, 0x105654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105654u;
label_105654:
    // 0x105654: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x105654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105658:
    // 0x105658: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x105658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_10565c:
    // 0x10565c: 0xc041b48  jal         func_106D20
label_105660:
    if (ctx->pc == 0x105660u) {
        ctx->pc = 0x105664u;
        goto label_105664;
    }
    ctx->pc = 0x10565Cu;
    SET_GPR_U32(ctx, 31, 0x105664u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x10565Cu, 0x105664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105664u;
label_105664:
    // 0x105664: 0x27a402a8  addiu       $a0, $sp, 0x2A8
    ctx->pc = 0x105664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_105668:
    // 0x105668: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x105668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_10566c:
    // 0x10566c: 0xc040304  jal         func_100C10
label_105670:
    if (ctx->pc == 0x105670u) {
        ctx->pc = 0x105674u;
        goto label_105674;
    }
    ctx->pc = 0x10566Cu;
    SET_GPR_U32(ctx, 31, 0x105674u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x10566Cu, 0x105674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105674u;
label_105674:
    // 0x105674: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x105674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_105678:
    // 0x105678: 0x27a502a8  addiu       $a1, $sp, 0x2A8
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_10567c:
    // 0x10567c: 0xc1190f4  jal         func_4643D0
label_105680:
    if (ctx->pc == 0x105680u) {
        ctx->pc = 0x105684u;
        goto label_105684;
    }
    ctx->pc = 0x10567Cu;
    SET_GPR_U32(ctx, 31, 0x105684u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x10567Cu, 0x105684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105684u;
label_105684:
    // 0x105684: 0x27a402a8  addiu       $a0, $sp, 0x2A8
    ctx->pc = 0x105684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_105688:
    // 0x105688: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10568c:
    // 0x10568c: 0xc0402d4  jal         func_100B50
label_105690:
    if (ctx->pc == 0x105690u) {
        ctx->pc = 0x105694u;
        goto label_105694;
    }
    ctx->pc = 0x10568Cu;
    SET_GPR_U32(ctx, 31, 0x105694u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x10568Cu, 0x105694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105694u;
label_105694:
    // 0x105694: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x105694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_105698:
    // 0x105698: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x105698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10569c:
    // 0x10569c: 0xc041b40  jal         func_106D00
label_1056a0:
    if (ctx->pc == 0x1056A0u) {
        ctx->pc = 0x1056A4u;
        goto label_1056a4;
    }
    ctx->pc = 0x10569Cu;
    SET_GPR_U32(ctx, 31, 0x1056A4u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x10569Cu, 0x1056A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056A4u;
label_1056a4:
    // 0x1056a4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1056a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1056a8:
    // 0x1056a8: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x1056a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_1056ac:
    // 0x1056ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1056acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1056b0:
    // 0x1056b0: 0xc041b38  jal         func_106CE0
label_1056b4:
    if (ctx->pc == 0x1056B4u) {
        ctx->pc = 0x1056B8u;
        goto label_1056b8;
    }
    ctx->pc = 0x1056B0u;
    SET_GPR_U32(ctx, 31, 0x1056B8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1056B0u, 0x1056B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056B8u;
label_1056b8:
    // 0x1056b8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1056b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1056bc:
    // 0x1056bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1056bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1056c0:
    // 0x1056c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1056c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1056c4:
    // 0x1056c4: 0xc041b24  jal         func_106C90
label_1056c8:
    if (ctx->pc == 0x1056C8u) {
        ctx->pc = 0x1056CCu;
        goto label_1056cc;
    }
    ctx->pc = 0x1056C4u;
    SET_GPR_U32(ctx, 31, 0x1056CCu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x1056C4u, 0x1056CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1056CCu;
label_1056cc:
    // 0x1056cc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1056ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1056d0:
    // 0x1056d0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1056d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1056d4:
    // 0x1056d4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1056d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1056d8:
    // 0x1056d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1056d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1056dc:
    // 0x1056dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1056dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1056e0:
    // 0x1056e0: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x1056e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1056e4:
    // 0x1056e4: 0x90440028  lbu         $a0, 0x28($v0)
    ctx->pc = 0x1056e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_1056e8:
    // 0x1056e8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1056e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1056ec:
    // 0x1056ec: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_1056f0:
    if (ctx->pc == 0x1056F0u) {
        ctx->pc = 0x1056F4u;
        goto label_1056f4;
    }
    ctx->pc = 0x1056ECu;
    {
        const bool branch_taken_0x1056ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1056ec) {
            ctx->pc = 0x105708u;
            goto label_105708;
        }
    }
    ctx->pc = 0x1056F4u;
label_1056f4:
    // 0x1056f4: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x1056f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_1056f8:
    // 0x1056f8: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x1056f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1056fc:
    // 0x1056fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1056fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105700:
    // 0x105700: 0xc09fc14  jal         func_27F050
label_105704:
    if (ctx->pc == 0x105704u) {
        ctx->pc = 0x105708u;
        goto label_105708;
    }
    ctx->pc = 0x105700u;
    SET_GPR_U32(ctx, 31, 0x105708u);
    ctx->pc = 0x27F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F050u, 0x105700u, 0x105708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105708u;
label_105708:
    // 0x105708: 0x8fa4033c  lw          $a0, 0x33C($sp)
    ctx->pc = 0x105708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_10570c:
    // 0x10570c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x10570cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_105710:
    // 0x105710: 0xc085538  jal         func_2154E0
label_105714:
    if (ctx->pc == 0x105714u) {
        ctx->pc = 0x105718u;
        goto label_105718;
    }
    ctx->pc = 0x105710u;
    SET_GPR_U32(ctx, 31, 0x105718u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x105710u, 0x105718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105718u;
label_105718:
    // 0x105718: 0xafa20334  sw          $v0, 0x334($sp)
    ctx->pc = 0x105718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 2));
label_10571c:
    // 0x10571c: 0x27a40298  addiu       $a0, $sp, 0x298
    ctx->pc = 0x10571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_105720:
    // 0x105720: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x105720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_105724:
    // 0x105724: 0xc040304  jal         func_100C10
label_105728:
    if (ctx->pc == 0x105728u) {
        ctx->pc = 0x10572Cu;
        goto label_10572c;
    }
    ctx->pc = 0x105724u;
    SET_GPR_U32(ctx, 31, 0x10572Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x105724u, 0x10572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10572Cu;
label_10572c:
    // 0x10572c: 0x8fa40334  lw          $a0, 0x334($sp)
    ctx->pc = 0x10572cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_105730:
    // 0x105730: 0xc0b767c  jal         func_2DD9F0
label_105734:
    if (ctx->pc == 0x105734u) {
        ctx->pc = 0x105738u;
        goto label_105738;
    }
    ctx->pc = 0x105730u;
    SET_GPR_U32(ctx, 31, 0x105738u);
    ctx->pc = 0x2DD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD9F0u, 0x105730u, 0x105738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105738u;
label_105738:
    // 0x105738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10573c:
    // 0x10573c: 0x27a50298  addiu       $a1, $sp, 0x298
    ctx->pc = 0x10573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_105740:
    // 0x105740: 0xc0b9894  jal         func_2E6250
label_105744:
    if (ctx->pc == 0x105744u) {
        ctx->pc = 0x105748u;
        goto label_105748;
    }
    ctx->pc = 0x105740u;
    SET_GPR_U32(ctx, 31, 0x105748u);
    ctx->pc = 0x2E6250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6250u, 0x105740u, 0x105748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105748u;
label_105748:
    // 0x105748: 0x27a40298  addiu       $a0, $sp, 0x298
    ctx->pc = 0x105748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_10574c:
    // 0x10574c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105750:
    // 0x105750: 0xc0402d4  jal         func_100B50
label_105754:
    if (ctx->pc == 0x105754u) {
        ctx->pc = 0x105758u;
        goto label_105758;
    }
    ctx->pc = 0x105750u;
    SET_GPR_U32(ctx, 31, 0x105758u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105750u, 0x105758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105758u;
label_105758:
    // 0x105758: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x105758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_10575c:
    // 0x10575c: 0xc08a648  jal         func_229920
label_105760:
    if (ctx->pc == 0x105760u) {
        ctx->pc = 0x105764u;
        goto label_105764;
    }
    ctx->pc = 0x10575Cu;
    SET_GPR_U32(ctx, 31, 0x105764u);
    ctx->pc = 0x229920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229920u, 0x10575Cu, 0x105764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105764u;
label_105764:
    // 0x105764: 0xc09a360  jal         func_268D80
label_105768:
    if (ctx->pc == 0x105768u) {
        ctx->pc = 0x10576Cu;
        goto label_10576c;
    }
    ctx->pc = 0x105764u;
    SET_GPR_U32(ctx, 31, 0x10576Cu);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x105764u, 0x10576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10576Cu;
label_10576c:
    // 0x10576c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105770:
    // 0x105770: 0xc09a8d0  jal         func_26A340
label_105774:
    if (ctx->pc == 0x105774u) {
        ctx->pc = 0x105778u;
        goto label_105778;
    }
    ctx->pc = 0x105770u;
    SET_GPR_U32(ctx, 31, 0x105778u);
    ctx->pc = 0x26A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A340u, 0x105770u, 0x105778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105778u;
label_105778:
    // 0x105778: 0xc090864  jal         func_242190
label_10577c:
    if (ctx->pc == 0x10577Cu) {
        ctx->pc = 0x105780u;
        goto label_105780;
    }
    ctx->pc = 0x105778u;
    SET_GPR_U32(ctx, 31, 0x105780u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x105778u, 0x105780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105780u;
label_105780:
    // 0x105780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105784:
    // 0x105784: 0xc090590  jal         func_241640
label_105788:
    if (ctx->pc == 0x105788u) {
        ctx->pc = 0x10578Cu;
        goto label_10578c;
    }
    ctx->pc = 0x105784u;
    SET_GPR_U32(ctx, 31, 0x10578Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x105784u, 0x10578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10578Cu;
label_10578c:
    // 0x10578c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105790:
    // 0x105790: 0xc091574  jal         func_2455D0
label_105794:
    if (ctx->pc == 0x105794u) {
        ctx->pc = 0x105798u;
        goto label_105798;
    }
    ctx->pc = 0x105790u;
    SET_GPR_U32(ctx, 31, 0x105798u);
    ctx->pc = 0x2455D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455D0u, 0x105790u, 0x105798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105798u;
label_105798:
    // 0x105798: 0xafa20330  sw          $v0, 0x330($sp)
    ctx->pc = 0x105798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 2));
label_10579c:
    // 0x10579c: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x10579cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_1057a0:
    // 0x1057a0: 0xc040e7c  jal         func_1039F0
label_1057a4:
    if (ctx->pc == 0x1057A4u) {
        ctx->pc = 0x1057A8u;
        goto label_1057a8;
    }
    ctx->pc = 0x1057A0u;
    SET_GPR_U32(ctx, 31, 0x1057A8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1057A0u, 0x1057A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057A8u;
label_1057a8:
    // 0x1057a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1057a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1057ac:
    // 0x1057ac: 0x10000012  b           . + 4 + (0x12 << 2)
label_1057b0:
    if (ctx->pc == 0x1057B0u) {
        ctx->pc = 0x1057B4u;
        goto label_1057b4;
    }
    ctx->pc = 0x1057ACu;
    {
        const bool branch_taken_0x1057ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1057ac) {
            ctx->pc = 0x1057F8u;
            goto label_1057f8;
        }
    }
    ctx->pc = 0x1057B4u;
label_1057b4:
    // 0x1057b4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1057b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1057b8:
    // 0x1057b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1057bc:
    // 0x1057bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1057bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1057c0:
    // 0x1057c0: 0xc0913a0  jal         func_244E80
label_1057c4:
    if (ctx->pc == 0x1057C4u) {
        ctx->pc = 0x1057C8u;
        goto label_1057c8;
    }
    ctx->pc = 0x1057C0u;
    SET_GPR_U32(ctx, 31, 0x1057C8u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x1057C0u, 0x1057C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057C8u;
label_1057c8:
    // 0x1057c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1057c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1057cc:
    // 0x1057cc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1057ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1057d0:
    // 0x1057d0: 0xc085538  jal         func_2154E0
label_1057d4:
    if (ctx->pc == 0x1057D4u) {
        ctx->pc = 0x1057D8u;
        goto label_1057d8;
    }
    ctx->pc = 0x1057D0u;
    SET_GPR_U32(ctx, 31, 0x1057D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1057D0u, 0x1057D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057D8u;
label_1057d8:
    // 0x1057d8: 0xafa2032c  sw          $v0, 0x32C($sp)
    ctx->pc = 0x1057d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 2));
label_1057dc:
    // 0x1057dc: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x1057dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_1057e0:
    // 0x1057e0: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
label_1057e4:
    if (ctx->pc == 0x1057E4u) {
        ctx->pc = 0x1057E8u;
        goto label_1057e8;
    }
    ctx->pc = 0x1057E0u;
    {
        const bool branch_taken_0x1057e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1057e0) {
            ctx->pc = 0x1057F4u;
            goto label_1057f4;
        }
    }
    ctx->pc = 0x1057E8u;
label_1057e8:
    // 0x1057e8: 0x8fa4032c  lw          $a0, 0x32C($sp)
    ctx->pc = 0x1057e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_1057ec:
    // 0x1057ec: 0xc09bbf4  jal         func_26EFD0
label_1057f0:
    if (ctx->pc == 0x1057F0u) {
        ctx->pc = 0x1057F4u;
        goto label_1057f4;
    }
    ctx->pc = 0x1057ECu;
    SET_GPR_U32(ctx, 31, 0x1057F4u);
    ctx->pc = 0x26EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EFD0u, 0x1057ECu, 0x1057F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057F4u;
label_1057f4:
    // 0x1057f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1057f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1057f8:
    // 0x1057f8: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x1057f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_1057fc:
    // 0x1057fc: 0xc04147c  jal         func_1051F0
label_105800:
    if (ctx->pc == 0x105800u) {
        ctx->pc = 0x105804u;
        goto label_105804;
    }
    ctx->pc = 0x1057FCu;
    SET_GPR_U32(ctx, 31, 0x105804u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x1057FCu, 0x105804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105804u;
label_105804:
    // 0x105804: 0x1642ffeb  bne         $s2, $v0, . + 4 + (-0x15 << 2)
label_105808:
    if (ctx->pc == 0x105808u) {
        ctx->pc = 0x10580Cu;
        goto label_10580c;
    }
    ctx->pc = 0x105804u;
    {
        const bool branch_taken_0x105804 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x105804) {
            ctx->pc = 0x1057B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1057b4;
        }
    }
    ctx->pc = 0x10580Cu;
label_10580c:
    // 0x10580c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x10580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_105810:
    // 0x105810: 0xc041a80  jal         func_106A00
label_105814:
    if (ctx->pc == 0x105814u) {
        ctx->pc = 0x105818u;
        goto label_105818;
    }
    ctx->pc = 0x105810u;
    SET_GPR_U32(ctx, 31, 0x105818u);
    ctx->pc = 0x106A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106A00u, 0x105810u, 0x105818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105818u;
label_105818:
    // 0x105818: 0xc09a360  jal         func_268D80
label_10581c:
    if (ctx->pc == 0x10581Cu) {
        ctx->pc = 0x105820u;
        goto label_105820;
    }
    ctx->pc = 0x105818u;
    SET_GPR_U32(ctx, 31, 0x105820u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x105818u, 0x105820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105820u;
label_105820:
    // 0x105820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105824:
    // 0x105824: 0xc09a73c  jal         func_269CF0
label_105828:
    if (ctx->pc == 0x105828u) {
        ctx->pc = 0x10582Cu;
        goto label_10582c;
    }
    ctx->pc = 0x105824u;
    SET_GPR_U32(ctx, 31, 0x10582Cu);
    ctx->pc = 0x269CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269CF0u, 0x105824u, 0x10582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10582Cu;
label_10582c:
    // 0x10582c: 0xafa20328  sw          $v0, 0x328($sp)
    ctx->pc = 0x10582cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 2));
label_105830:
    // 0x105830: 0x8fa40328  lw          $a0, 0x328($sp)
    ctx->pc = 0x105830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_105834:
    // 0x105834: 0xc041a78  jal         func_1069E0
label_105838:
    if (ctx->pc == 0x105838u) {
        ctx->pc = 0x10583Cu;
        goto label_10583c;
    }
    ctx->pc = 0x105834u;
    SET_GPR_U32(ctx, 31, 0x10583Cu);
    ctx->pc = 0x1069E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069E0u, 0x105834u, 0x10583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10583Cu;
label_10583c:
    // 0x10583c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10583cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105840:
    // 0x105840: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_105844:
    if (ctx->pc == 0x105844u) {
        ctx->pc = 0x105848u;
        goto label_105848;
    }
    ctx->pc = 0x105840u;
    {
        const bool branch_taken_0x105840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105840) {
            ctx->pc = 0x105B8Cu;
            goto label_105b8c;
        }
    }
    ctx->pc = 0x105848u;
label_105848:
    // 0x105848: 0x27a402e8  addiu       $a0, $sp, 0x2E8
    ctx->pc = 0x105848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_10584c:
    // 0x10584c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_105850:
    // 0x105850: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_105854:
    if (ctx->pc == 0x105854u) {
        ctx->pc = 0x105858u;
        goto label_105858;
    }
    ctx->pc = 0x105850u;
    {
        const bool branch_taken_0x105850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x105850) {
            ctx->pc = 0x105878u;
            goto label_105878;
        }
    }
    ctx->pc = 0x105858u;
label_105858:
    // 0x105858: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x105858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_10585c:
    // 0x10585c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x10585cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_105860:
    // 0x105860: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x105860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_105864:
    // 0x105864: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x105864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_105868:
    // 0x105868: 0x0  nop
    ctx->pc = 0x105868u;
    // NOP
label_10586c:
    // 0x10586c: 0x0  nop
    ctx->pc = 0x10586cu;
    // NOP
label_105870:
    // 0x105870: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_105874:
    if (ctx->pc == 0x105874u) {
        ctx->pc = 0x105878u;
        goto label_105878;
    }
    ctx->pc = 0x105870u;
    {
        const bool branch_taken_0x105870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x105870) {
            ctx->pc = 0x10585Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10585c;
        }
    }
    ctx->pc = 0x105878u;
label_105878:
    // 0x105878: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x105878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10587c:
    // 0x10587c: 0xc041a70  jal         func_1069C0
label_105880:
    if (ctx->pc == 0x105880u) {
        ctx->pc = 0x105884u;
        goto label_105884;
    }
    ctx->pc = 0x10587Cu;
    SET_GPR_U32(ctx, 31, 0x105884u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x10587Cu, 0x105884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105884u;
label_105884:
    // 0x105884: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x105884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_105888:
    // 0x105888: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x105888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10588c:
    // 0x10588c: 0xc041a68  jal         func_1069A0
label_105890:
    if (ctx->pc == 0x105890u) {
        ctx->pc = 0x105894u;
        goto label_105894;
    }
    ctx->pc = 0x10588Cu;
    SET_GPR_U32(ctx, 31, 0x105894u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x10588Cu, 0x105894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105894u;
label_105894:
    // 0x105894: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x105894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
label_105898:
    // 0x105898: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x105898u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10589c:
    // 0x10589c: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1058a0:
    if (ctx->pc == 0x1058A0u) {
        ctx->pc = 0x1058A4u;
        goto label_1058a4;
    }
    ctx->pc = 0x10589Cu;
    {
        const bool branch_taken_0x10589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10589c) {
            ctx->pc = 0x105A58u;
            goto label_105a58;
        }
    }
    ctx->pc = 0x1058A4u;
label_1058a4:
    // 0x1058a4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1058a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1058a8:
    // 0x1058a8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1058a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1058ac:
    // 0x1058ac: 0x8c4402e8  lw          $a0, 0x2E8($v0)
    ctx->pc = 0x1058acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
label_1058b0:
    // 0x1058b0: 0xc041a60  jal         func_106980
label_1058b4:
    if (ctx->pc == 0x1058B4u) {
        ctx->pc = 0x1058B8u;
        goto label_1058b8;
    }
    ctx->pc = 0x1058B0u;
    SET_GPR_U32(ctx, 31, 0x1058B8u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x1058B0u, 0x1058B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058B8u;
label_1058b8:
    // 0x1058b8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1058b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1058bc:
    // 0x1058bc: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1058c0:
    if (ctx->pc == 0x1058C0u) {
        ctx->pc = 0x1058C4u;
        goto label_1058c4;
    }
    ctx->pc = 0x1058BCu;
    {
        const bool branch_taken_0x1058bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1058bc) {
            ctx->pc = 0x105A34u;
            goto label_105a34;
        }
    }
    ctx->pc = 0x1058C4u;
label_1058c4:
    // 0x1058c4: 0x8ed50000  lw          $s5, 0x0($s6)
    ctx->pc = 0x1058c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1058c8:
    // 0x1058c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1058c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1058cc:
    // 0x1058cc: 0xc09d0b8  jal         func_2742E0
label_1058d0:
    if (ctx->pc == 0x1058D0u) {
        ctx->pc = 0x1058D4u;
        goto label_1058d4;
    }
    ctx->pc = 0x1058CCu;
    SET_GPR_U32(ctx, 31, 0x1058D4u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x1058CCu, 0x1058D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058D4u;
label_1058d4:
    // 0x1058d4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1058d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1058d8:
    // 0x1058d8: 0x14430054  bne         $v0, $v1, . + 4 + (0x54 << 2)
label_1058dc:
    if (ctx->pc == 0x1058DCu) {
        ctx->pc = 0x1058E0u;
        goto label_1058e0;
    }
    ctx->pc = 0x1058D8u;
    {
        const bool branch_taken_0x1058d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1058d8) {
            ctx->pc = 0x105A2Cu;
            goto label_105a2c;
        }
    }
    ctx->pc = 0x1058E0u;
label_1058e0:
    // 0x1058e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1058e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1058e4:
    // 0x1058e4: 0x240504d2  addiu       $a1, $zero, 0x4D2
    ctx->pc = 0x1058e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1234));
label_1058e8:
    // 0x1058e8: 0x278684c0  addiu       $a2, $gp, -0x7B40
    ctx->pc = 0x1058e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935744));
label_1058ec:
    // 0x1058ec: 0xc041a50  jal         func_106940
label_1058f0:
    if (ctx->pc == 0x1058F0u) {
        ctx->pc = 0x1058F4u;
        goto label_1058f4;
    }
    ctx->pc = 0x1058ECu;
    SET_GPR_U32(ctx, 31, 0x1058F4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x1058ECu, 0x1058F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058F4u;
label_1058f4:
    // 0x1058f4: 0xafa20324  sw          $v0, 0x324($sp)
    ctx->pc = 0x1058f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 2));
label_1058f8:
    // 0x1058f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1058f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1058fc:
    // 0x1058fc: 0x240504d3  addiu       $a1, $zero, 0x4D3
    ctx->pc = 0x1058fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1235));
label_105900:
    // 0x105900: 0x278684c0  addiu       $a2, $gp, -0x7B40
    ctx->pc = 0x105900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935744));
label_105904:
    // 0x105904: 0xc041a50  jal         func_106940
label_105908:
    if (ctx->pc == 0x105908u) {
        ctx->pc = 0x10590Cu;
        goto label_10590c;
    }
    ctx->pc = 0x105904u;
    SET_GPR_U32(ctx, 31, 0x10590Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x105904u, 0x10590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10590Cu;
label_10590c:
    // 0x10590c: 0xafa20320  sw          $v0, 0x320($sp)
    ctx->pc = 0x10590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
label_105910:
    // 0x105910: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x105910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_105914:
    // 0x105914: 0x2405056e  addiu       $a1, $zero, 0x56E
    ctx->pc = 0x105914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1390));
label_105918:
    // 0x105918: 0x278684c0  addiu       $a2, $gp, -0x7B40
    ctx->pc = 0x105918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935744));
label_10591c:
    // 0x10591c: 0xc041a50  jal         func_106940
label_105920:
    if (ctx->pc == 0x105920u) {
        ctx->pc = 0x105924u;
        goto label_105924;
    }
    ctx->pc = 0x10591Cu;
    SET_GPR_U32(ctx, 31, 0x105924u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x10591Cu, 0x105924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105924u;
label_105924:
    // 0x105924: 0xafa2031c  sw          $v0, 0x31C($sp)
    ctx->pc = 0x105924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
label_105928:
    // 0x105928: 0x8fa20324  lw          $v0, 0x324($sp)
    ctx->pc = 0x105928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_10592c:
    // 0x10592c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_105930:
    if (ctx->pc == 0x105930u) {
        ctx->pc = 0x105934u;
        goto label_105934;
    }
    ctx->pc = 0x10592Cu;
    {
        const bool branch_taken_0x10592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10592c) {
            ctx->pc = 0x105978u;
            goto label_105978;
        }
    }
    ctx->pc = 0x105934u;
label_105934:
    // 0x105934: 0x8fa20324  lw          $v0, 0x324($sp)
    ctx->pc = 0x105934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_105938:
    // 0x105938: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x105938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10593c:
    // 0x10593c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_105940:
    if (ctx->pc == 0x105940u) {
        ctx->pc = 0x105944u;
        goto label_105944;
    }
    ctx->pc = 0x10593Cu;
    {
        const bool branch_taken_0x10593c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10593c) {
            ctx->pc = 0x105978u;
            goto label_105978;
        }
    }
    ctx->pc = 0x105944u;
label_105944:
    // 0x105944: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x105944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_105948:
    // 0x105948: 0x8fa50324  lw          $a1, 0x324($sp)
    ctx->pc = 0x105948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_10594c:
    // 0x10594c: 0xc040304  jal         func_100C10
label_105950:
    if (ctx->pc == 0x105950u) {
        ctx->pc = 0x105954u;
        goto label_105954;
    }
    ctx->pc = 0x10594Cu;
    SET_GPR_U32(ctx, 31, 0x105954u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x10594Cu, 0x105954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105954u;
label_105954:
    // 0x105954: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x105954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_105958:
    // 0x105958: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x105958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_10595c:
    // 0x10595c: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x10595cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_105960:
    // 0x105960: 0xc041a1c  jal         func_106870
label_105964:
    if (ctx->pc == 0x105964u) {
        ctx->pc = 0x105968u;
        goto label_105968;
    }
    ctx->pc = 0x105960u;
    SET_GPR_U32(ctx, 31, 0x105968u);
    ctx->pc = 0x106870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106870u, 0x105960u, 0x105968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105968u;
label_105968:
    // 0x105968: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x105968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_10596c:
    // 0x10596c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105970:
    // 0x105970: 0xc0402d4  jal         func_100B50
label_105974:
    if (ctx->pc == 0x105974u) {
        ctx->pc = 0x105978u;
        goto label_105978;
    }
    ctx->pc = 0x105970u;
    SET_GPR_U32(ctx, 31, 0x105978u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105970u, 0x105978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105978u;
label_105978:
    // 0x105978: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x105978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_10597c:
    // 0x10597c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_105980:
    if (ctx->pc == 0x105980u) {
        ctx->pc = 0x105984u;
        goto label_105984;
    }
    ctx->pc = 0x10597Cu;
    {
        const bool branch_taken_0x10597c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10597c) {
            ctx->pc = 0x1059D0u;
            goto label_1059d0;
        }
    }
    ctx->pc = 0x105984u;
label_105984:
    // 0x105984: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x105984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_105988:
    // 0x105988: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x105988u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_10598c:
    // 0x10598c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_105990:
    if (ctx->pc == 0x105990u) {
        ctx->pc = 0x105994u;
        goto label_105994;
    }
    ctx->pc = 0x10598Cu;
    {
        const bool branch_taken_0x10598c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10598c) {
            ctx->pc = 0x1059D0u;
            goto label_1059d0;
        }
    }
    ctx->pc = 0x105994u;
label_105994:
    // 0x105994: 0x27a40268  addiu       $a0, $sp, 0x268
    ctx->pc = 0x105994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_105998:
    // 0x105998: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x105998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_10599c:
    // 0x10599c: 0xc040304  jal         func_100C10
label_1059a0:
    if (ctx->pc == 0x1059A0u) {
        ctx->pc = 0x1059A4u;
        goto label_1059a4;
    }
    ctx->pc = 0x10599Cu;
    SET_GPR_U32(ctx, 31, 0x1059A4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x10599Cu, 0x1059A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059A4u;
label_1059a4:
    // 0x1059a4: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x1059a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_1059a8:
    // 0x1059a8: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x1059a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_1059ac:
    // 0x1059ac: 0x27a60268  addiu       $a2, $sp, 0x268
    ctx->pc = 0x1059acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_1059b0:
    // 0x1059b0: 0xc041a1c  jal         func_106870
label_1059b4:
    if (ctx->pc == 0x1059B4u) {
        ctx->pc = 0x1059B8u;
        goto label_1059b8;
    }
    ctx->pc = 0x1059B0u;
    SET_GPR_U32(ctx, 31, 0x1059B8u);
    ctx->pc = 0x106870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106870u, 0x1059B0u, 0x1059B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059B8u;
label_1059b8:
    // 0x1059b8: 0x27a20268  addiu       $v0, $sp, 0x268
    ctx->pc = 0x1059b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
label_1059bc:
    // 0x1059bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1059bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1059c0:
    // 0x1059c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1059c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1059c4:
    // 0x1059c4: 0xc0402d4  jal         func_100B50
label_1059c8:
    if (ctx->pc == 0x1059C8u) {
        ctx->pc = 0x1059CCu;
        goto label_1059cc;
    }
    ctx->pc = 0x1059C4u;
    SET_GPR_U32(ctx, 31, 0x1059CCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1059C4u, 0x1059CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059CCu;
label_1059cc:
    // 0x1059cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1059ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1059d0:
    // 0x1059d0: 0x8fa2031c  lw          $v0, 0x31C($sp)
    ctx->pc = 0x1059d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_1059d4:
    // 0x1059d4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1059d8:
    if (ctx->pc == 0x1059D8u) {
        ctx->pc = 0x1059DCu;
        goto label_1059dc;
    }
    ctx->pc = 0x1059D4u;
    {
        const bool branch_taken_0x1059d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1059d4) {
            ctx->pc = 0x105A2Cu;
            goto label_105a2c;
        }
    }
    ctx->pc = 0x1059DCu;
label_1059dc:
    // 0x1059dc: 0x8fa3031c  lw          $v1, 0x31C($sp)
    ctx->pc = 0x1059dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_1059e0:
    // 0x1059e0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x1059e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1059e4:
    // 0x1059e4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_1059e8:
    if (ctx->pc == 0x1059E8u) {
        ctx->pc = 0x1059ECu;
        goto label_1059ec;
    }
    ctx->pc = 0x1059E4u;
    {
        const bool branch_taken_0x1059e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1059e4) {
            ctx->pc = 0x105A2Cu;
            goto label_105a2c;
        }
    }
    ctx->pc = 0x1059ECu;
label_1059ec:
    // 0x1059ec: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x1059ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1059f0:
    // 0x1059f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1059f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1059f4:
    // 0x1059f4: 0x8fa5031c  lw          $a1, 0x31C($sp)
    ctx->pc = 0x1059f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_1059f8:
    // 0x1059f8: 0xc040304  jal         func_100C10
label_1059fc:
    if (ctx->pc == 0x1059FCu) {
        ctx->pc = 0x105A00u;
        goto label_105a00;
    }
    ctx->pc = 0x1059F8u;
    SET_GPR_U32(ctx, 31, 0x105A00u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1059F8u, 0x105A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A00u;
label_105a00:
    // 0x105a00: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x105a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_105a04:
    // 0x105a04: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x105a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_105a08:
    // 0x105a08: 0x27a20250  addiu       $v0, $sp, 0x250
    ctx->pc = 0x105a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_105a0c:
    // 0x105a0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105a10:
    // 0x105a10: 0xc041a1c  jal         func_106870
label_105a14:
    if (ctx->pc == 0x105A14u) {
        ctx->pc = 0x105A18u;
        goto label_105a18;
    }
    ctx->pc = 0x105A10u;
    SET_GPR_U32(ctx, 31, 0x105A18u);
    ctx->pc = 0x106870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106870u, 0x105A10u, 0x105A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A18u;
label_105a18:
    // 0x105a18: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x105a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_105a1c:
    // 0x105a1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105a20:
    // 0x105a20: 0xc0402d4  jal         func_100B50
label_105a24:
    if (ctx->pc == 0x105A24u) {
        ctx->pc = 0x105A28u;
        goto label_105a28;
    }
    ctx->pc = 0x105A20u;
    SET_GPR_U32(ctx, 31, 0x105A28u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105A20u, 0x105A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A28u;
label_105a28:
    // 0x105a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105a2c:
    // 0x105a2c: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x105a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_105a30:
    // 0x105a30: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x105a30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105a34:
    // 0x105a34: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x105a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_105a38:
    // 0x105a38: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x105a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_105a3c:
    // 0x105a3c: 0x8c4402e8  lw          $a0, 0x2E8($v0)
    ctx->pc = 0x105a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
label_105a40:
    // 0x105a40: 0xc041a14  jal         func_106850
label_105a44:
    if (ctx->pc == 0x105A44u) {
        ctx->pc = 0x105A48u;
        goto label_105a48;
    }
    ctx->pc = 0x105A40u;
    SET_GPR_U32(ctx, 31, 0x105A48u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x105A40u, 0x105A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A48u;
label_105a48:
    // 0x105a48: 0x16c2ff9e  bne         $s6, $v0, . + 4 + (-0x62 << 2)
label_105a4c:
    if (ctx->pc == 0x105A4Cu) {
        ctx->pc = 0x105A50u;
        goto label_105a50;
    }
    ctx->pc = 0x105A48u;
    {
        const bool branch_taken_0x105a48 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x105a48) {
            ctx->pc = 0x1058C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1058c4;
        }
    }
    ctx->pc = 0x105A50u;
label_105a50:
    // 0x105a50: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x105a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_105a54:
    // 0x105a54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x105a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105a58:
    // 0x105a58: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x105a58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_105a5c:
    // 0x105a5c: 0x1420ff91  bnez        $at, . + 4 + (-0x6F << 2)
label_105a60:
    if (ctx->pc == 0x105A60u) {
        ctx->pc = 0x105A64u;
        goto label_105a64;
    }
    ctx->pc = 0x105A5Cu;
    {
        const bool branch_taken_0x105a5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x105a5c) {
            ctx->pc = 0x1058A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1058a4;
        }
    }
    ctx->pc = 0x105A64u;
label_105a64:
    // 0x105a64: 0x27a50318  addiu       $a1, $sp, 0x318
    ctx->pc = 0x105a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_105a68:
    // 0x105a68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105a6c:
    // 0x105a6c: 0x27a202f0  addiu       $v0, $sp, 0x2F0
    ctx->pc = 0x105a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_105a70:
    // 0x105a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105a74:
    // 0x105a74: 0xc0419f4  jal         func_1067D0
label_105a78:
    if (ctx->pc == 0x105A78u) {
        ctx->pc = 0x105A7Cu;
        goto label_105a7c;
    }
    ctx->pc = 0x105A74u;
    SET_GPR_U32(ctx, 31, 0x105A7Cu);
    ctx->pc = 0x1067D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1067D0u, 0x105A74u, 0x105A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A7Cu;
label_105a7c:
    // 0x105a7c: 0x10000036  b           . + 4 + (0x36 << 2)
label_105a80:
    if (ctx->pc == 0x105A80u) {
        ctx->pc = 0x105A84u;
        goto label_105a84;
    }
    ctx->pc = 0x105A7Cu;
    {
        const bool branch_taken_0x105a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105a7c) {
            ctx->pc = 0x105B58u;
            goto label_105b58;
        }
    }
    ctx->pc = 0x105A84u;
label_105a84:
    // 0x105a84: 0xc122470  jal         func_4891C0
label_105a88:
    if (ctx->pc == 0x105A88u) {
        ctx->pc = 0x105A8Cu;
        goto label_105a8c;
    }
    ctx->pc = 0x105A84u;
    SET_GPR_U32(ctx, 31, 0x105A8Cu);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x105A84u, 0x105A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A8Cu;
label_105a8c:
    // 0x105a8c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x105a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_105a90:
    // 0x105a90: 0x27a70318  addiu       $a3, $sp, 0x318
    ctx->pc = 0x105a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_105a94:
    // 0x105a94: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x105a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_105a98:
    // 0x105a98: 0xc0419ec  jal         func_1067B0
label_105a9c:
    if (ctx->pc == 0x105A9Cu) {
        ctx->pc = 0x105AA0u;
        goto label_105aa0;
    }
    ctx->pc = 0x105A98u;
    SET_GPR_U32(ctx, 31, 0x105AA0u);
    ctx->pc = 0x1067B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1067B0u, 0x105A98u, 0x105AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AA0u;
label_105aa0:
    // 0x105aa0: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x105aa0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_105aa4:
    // 0x105aa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105aa8:
    // 0x105aa8: 0xc123980  jal         func_48E600
label_105aac:
    if (ctx->pc == 0x105AACu) {
        ctx->pc = 0x105AB0u;
        goto label_105ab0;
    }
    ctx->pc = 0x105AA8u;
    SET_GPR_U32(ctx, 31, 0x105AB0u);
    ctx->pc = 0x48E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E600u, 0x105AA8u, 0x105AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AB0u;
label_105ab0:
    // 0x105ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105ab4:
    // 0x105ab4: 0x14800023  bnez        $a0, . + 4 + (0x23 << 2)
label_105ab8:
    if (ctx->pc == 0x105AB8u) {
        ctx->pc = 0x105ABCu;
        goto label_105abc;
    }
    ctx->pc = 0x105AB4u;
    {
        const bool branch_taken_0x105ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x105ab4) {
            ctx->pc = 0x105B44u;
            goto label_105b44;
        }
    }
    ctx->pc = 0x105ABCu;
label_105abc:
    // 0x105abc: 0x27a502d8  addiu       $a1, $sp, 0x2D8
    ctx->pc = 0x105abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_105ac0:
    // 0x105ac0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105ac4:
    // 0x105ac4: 0xc041b48  jal         func_106D20
label_105ac8:
    if (ctx->pc == 0x105AC8u) {
        ctx->pc = 0x105ACCu;
        goto label_105acc;
    }
    ctx->pc = 0x105AC4u;
    SET_GPR_U32(ctx, 31, 0x105ACCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x105AC4u, 0x105ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105ACCu;
label_105acc:
    // 0x105acc: 0x27a50318  addiu       $a1, $sp, 0x318
    ctx->pc = 0x105accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_105ad0:
    // 0x105ad0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105ad4:
    // 0x105ad4: 0xc0419e0  jal         func_106780
label_105ad8:
    if (ctx->pc == 0x105AD8u) {
        ctx->pc = 0x105ADCu;
        goto label_105adc;
    }
    ctx->pc = 0x105AD4u;
    SET_GPR_U32(ctx, 31, 0x105ADCu);
    ctx->pc = 0x106780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106780u, 0x105AD4u, 0x105ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105ADCu;
label_105adc:
    // 0x105adc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x105adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105ae0:
    // 0x105ae0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x105ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_105ae4:
    // 0x105ae4: 0xc041b38  jal         func_106CE0
label_105ae8:
    if (ctx->pc == 0x105AE8u) {
        ctx->pc = 0x105AECu;
        goto label_105aec;
    }
    ctx->pc = 0x105AE4u;
    SET_GPR_U32(ctx, 31, 0x105AECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x105AE4u, 0x105AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AECu;
label_105aec:
    // 0x105aec: 0x27a402d8  addiu       $a0, $sp, 0x2D8
    ctx->pc = 0x105aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_105af0:
    // 0x105af0: 0x278584c8  addiu       $a1, $gp, -0x7B38
    ctx->pc = 0x105af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935752));
label_105af4:
    // 0x105af4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x105af4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_105af8:
    // 0x105af8: 0x24c61550  addiu       $a2, $a2, 0x1550
    ctx->pc = 0x105af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5456));
label_105afc:
    // 0x105afc: 0x2407005c  addiu       $a3, $zero, 0x5C
    ctx->pc = 0x105afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_105b00:
    // 0x105b00: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x105b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b04:
    // 0x105b04: 0xc0424a8  jal         func_1092A0
label_105b08:
    if (ctx->pc == 0x105B08u) {
        ctx->pc = 0x105B0Cu;
        goto label_105b0c;
    }
    ctx->pc = 0x105B04u;
    SET_GPR_U32(ctx, 31, 0x105B0Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x105B04u, 0x105B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B0Cu;
label_105b0c:
    // 0x105b0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x105b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b10:
    // 0x105b10: 0xc122470  jal         func_4891C0
label_105b14:
    if (ctx->pc == 0x105B14u) {
        ctx->pc = 0x105B18u;
        goto label_105b18;
    }
    ctx->pc = 0x105B10u;
    SET_GPR_U32(ctx, 31, 0x105B18u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x105B10u, 0x105B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B18u;
label_105b18:
    // 0x105b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b1c:
    // 0x105b1c: 0x27a502d8  addiu       $a1, $sp, 0x2D8
    ctx->pc = 0x105b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_105b20:
    // 0x105b20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x105b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105b24:
    // 0x105b24: 0xc123a28  jal         func_48E8A0
label_105b28:
    if (ctx->pc == 0x105B28u) {
        ctx->pc = 0x105B2Cu;
        goto label_105b2c;
    }
    ctx->pc = 0x105B24u;
    SET_GPR_U32(ctx, 31, 0x105B2Cu);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x105B24u, 0x105B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B2Cu;
label_105b2c:
    // 0x105b2c: 0x27a502d8  addiu       $a1, $sp, 0x2D8
    ctx->pc = 0x105b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_105b30:
    // 0x105b30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105b34:
    // 0x105b34: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x105b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105b38:
    // 0x105b38: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x105b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_105b3c:
    // 0x105b3c: 0xc0402d4  jal         func_100B50
label_105b40:
    if (ctx->pc == 0x105B40u) {
        ctx->pc = 0x105B44u;
        goto label_105b44;
    }
    ctx->pc = 0x105B3Cu;
    SET_GPR_U32(ctx, 31, 0x105B44u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105B3Cu, 0x105B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B44u;
label_105b44:
    // 0x105b44: 0x27a20318  addiu       $v0, $sp, 0x318
    ctx->pc = 0x105b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_105b48:
    // 0x105b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b4c:
    // 0x105b4c: 0xc0419d0  jal         func_106740
label_105b50:
    if (ctx->pc == 0x105B50u) {
        ctx->pc = 0x105B54u;
        goto label_105b54;
    }
    ctx->pc = 0x105B4Cu;
    SET_GPR_U32(ctx, 31, 0x105B54u);
    ctx->pc = 0x106740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106740u, 0x105B4Cu, 0x105B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B54u;
label_105b54:
    // 0x105b54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b58:
    // 0x105b58: 0x27a2030c  addiu       $v0, $sp, 0x30C
    ctx->pc = 0x105b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
label_105b5c:
    // 0x105b5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b60:
    // 0x105b60: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x105b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_105b64:
    // 0x105b64: 0xc0419a4  jal         func_106690
label_105b68:
    if (ctx->pc == 0x105B68u) {
        ctx->pc = 0x105B6Cu;
        goto label_105b6c;
    }
    ctx->pc = 0x105B64u;
    SET_GPR_U32(ctx, 31, 0x105B6Cu);
    ctx->pc = 0x106690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106690u, 0x105B64u, 0x105B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B6Cu;
label_105b6c:
    // 0x105b6c: 0x27a40318  addiu       $a0, $sp, 0x318
    ctx->pc = 0x105b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_105b70:
    // 0x105b70: 0x27a5030c  addiu       $a1, $sp, 0x30C
    ctx->pc = 0x105b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
label_105b74:
    // 0x105b74: 0xc041998  jal         func_106660
label_105b78:
    if (ctx->pc == 0x105B78u) {
        ctx->pc = 0x105B7Cu;
        goto label_105b7c;
    }
    ctx->pc = 0x105B74u;
    SET_GPR_U32(ctx, 31, 0x105B7Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x105B74u, 0x105B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B7Cu;
label_105b7c:
    // 0x105b7c: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_105b80:
    if (ctx->pc == 0x105B80u) {
        ctx->pc = 0x105B84u;
        goto label_105b84;
    }
    ctx->pc = 0x105B7Cu;
    {
        const bool branch_taken_0x105b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105b7c) {
            ctx->pc = 0x105A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105a84;
        }
    }
    ctx->pc = 0x105B84u;
label_105b84:
    // 0x105b84: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x105b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_105b88:
    // 0x105b88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x105b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b8c:
    // 0x105b8c: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x105b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_105b90:
    // 0x105b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105b94:
    // 0x105b94: 0xc041990  jal         func_106640
label_105b98:
    if (ctx->pc == 0x105B98u) {
        ctx->pc = 0x105B9Cu;
        goto label_105b9c;
    }
    ctx->pc = 0x105B94u;
    SET_GPR_U32(ctx, 31, 0x105B9Cu);
    ctx->pc = 0x106640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106640u, 0x105B94u, 0x105B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B9Cu;
label_105b9c:
    // 0x105b9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105ba0:
    // 0x105ba0: 0x1625ff29  bne         $s1, $a1, . + 4 + (-0xD7 << 2)
label_105ba4:
    if (ctx->pc == 0x105BA4u) {
        ctx->pc = 0x105BA8u;
        goto label_105ba8;
    }
    ctx->pc = 0x105BA0u;
    {
        const bool branch_taken_0x105ba0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x105ba0) {
            ctx->pc = 0x105848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105848;
        }
    }
    ctx->pc = 0x105BA8u;
label_105ba8:
    // 0x105ba8: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x105ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_105bac:
    // 0x105bac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x105bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_105bb0:
    // 0x105bb0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x105bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_105bb4:
    // 0x105bb4: 0x24421560  addiu       $v0, $v0, 0x1560
    ctx->pc = 0x105bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5472));
label_105bb8:
    // 0x105bb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105bbc:
    // 0x105bbc: 0xc040304  jal         func_100C10
label_105bc0:
    if (ctx->pc == 0x105BC0u) {
        ctx->pc = 0x105BC4u;
        goto label_105bc4;
    }
    ctx->pc = 0x105BBCu;
    SET_GPR_U32(ctx, 31, 0x105BC4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x105BBCu, 0x105BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BC4u;
label_105bc4:
    // 0x105bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105bc8:
    // 0x105bc8: 0xc122470  jal         func_4891C0
label_105bcc:
    if (ctx->pc == 0x105BCCu) {
        ctx->pc = 0x105BD0u;
        goto label_105bd0;
    }
    ctx->pc = 0x105BC8u;
    SET_GPR_U32(ctx, 31, 0x105BD0u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x105BC8u, 0x105BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BD0u;
label_105bd0:
    // 0x105bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105bd4:
    // 0x105bd4: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x105bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_105bd8:
    // 0x105bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105bdc:
    // 0x105bdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105be0:
    // 0x105be0: 0xc123a28  jal         func_48E8A0
label_105be4:
    if (ctx->pc == 0x105BE4u) {
        ctx->pc = 0x105BE8u;
        goto label_105be8;
    }
    ctx->pc = 0x105BE0u;
    SET_GPR_U32(ctx, 31, 0x105BE8u);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x105BE0u, 0x105BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BE8u;
label_105be8:
    // 0x105be8: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x105be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_105bec:
    // 0x105bec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105bf0:
    // 0x105bf0: 0xc0402d4  jal         func_100B50
label_105bf4:
    if (ctx->pc == 0x105BF4u) {
        ctx->pc = 0x105BF8u;
        goto label_105bf8;
    }
    ctx->pc = 0x105BF0u;
    SET_GPR_U32(ctx, 31, 0x105BF8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105BF0u, 0x105BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BF8u;
label_105bf8:
    // 0x105bf8: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x105bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_105bfc:
    // 0x105bfc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x105bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_105c00:
    // 0x105c00: 0x24a51580  addiu       $a1, $a1, 0x1580
    ctx->pc = 0x105c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5504));
label_105c04:
    // 0x105c04: 0xc040304  jal         func_100C10
label_105c08:
    if (ctx->pc == 0x105C08u) {
        ctx->pc = 0x105C0Cu;
        goto label_105c0c;
    }
    ctx->pc = 0x105C04u;
    SET_GPR_U32(ctx, 31, 0x105C0Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x105C04u, 0x105C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C0Cu;
label_105c0c:
    // 0x105c0c: 0xc122470  jal         func_4891C0
label_105c10:
    if (ctx->pc == 0x105C10u) {
        ctx->pc = 0x105C14u;
        goto label_105c14;
    }
    ctx->pc = 0x105C0Cu;
    SET_GPR_U32(ctx, 31, 0x105C14u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x105C0Cu, 0x105C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C14u;
label_105c14:
    // 0x105c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105c18:
    // 0x105c18: 0x27a50230  addiu       $a1, $sp, 0x230
    ctx->pc = 0x105c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_105c1c:
    // 0x105c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105c20:
    // 0x105c20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105c24:
    // 0x105c24: 0xc123a28  jal         func_48E8A0
label_105c28:
    if (ctx->pc == 0x105C28u) {
        ctx->pc = 0x105C2Cu;
        goto label_105c2c;
    }
    ctx->pc = 0x105C24u;
    SET_GPR_U32(ctx, 31, 0x105C2Cu);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x105C24u, 0x105C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C2Cu;
label_105c2c:
    // 0x105c2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105c30:
    // 0x105c30: 0x27a20230  addiu       $v0, $sp, 0x230
    ctx->pc = 0x105c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_105c34:
    // 0x105c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105c38:
    // 0x105c38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105c3c:
    // 0x105c3c: 0xc0402d4  jal         func_100B50
label_105c40:
    if (ctx->pc == 0x105C40u) {
        ctx->pc = 0x105C44u;
        goto label_105c44;
    }
    ctx->pc = 0x105C3Cu;
    SET_GPR_U32(ctx, 31, 0x105C44u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105C3Cu, 0x105C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C44u;
label_105c44:
    // 0x105c44: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x105c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_105c48:
    // 0x105c48: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x105c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_105c4c:
    // 0x105c4c: 0x24a515a0  addiu       $a1, $a1, 0x15A0
    ctx->pc = 0x105c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5536));
label_105c50:
    // 0x105c50: 0xc040304  jal         func_100C10
label_105c54:
    if (ctx->pc == 0x105C54u) {
        ctx->pc = 0x105C58u;
        goto label_105c58;
    }
    ctx->pc = 0x105C50u;
    SET_GPR_U32(ctx, 31, 0x105C58u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x105C50u, 0x105C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C58u;
label_105c58:
    // 0x105c58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105c5c:
    // 0x105c5c: 0xc122470  jal         func_4891C0
label_105c60:
    if (ctx->pc == 0x105C60u) {
        ctx->pc = 0x105C64u;
        goto label_105c64;
    }
    ctx->pc = 0x105C5Cu;
    SET_GPR_U32(ctx, 31, 0x105C64u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x105C5Cu, 0x105C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C64u;
label_105c64:
    // 0x105c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105c68:
    // 0x105c68: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x105c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_105c6c:
    // 0x105c6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x105c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105c70:
    // 0x105c70: 0xc123a28  jal         func_48E8A0
label_105c74:
    if (ctx->pc == 0x105C74u) {
        ctx->pc = 0x105C78u;
        goto label_105c78;
    }
    ctx->pc = 0x105C70u;
    SET_GPR_U32(ctx, 31, 0x105C78u);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x105C70u, 0x105C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C78u;
label_105c78:
    // 0x105c78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105c7c:
    // 0x105c7c: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x105c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_105c80:
    // 0x105c80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105c84:
    // 0x105c84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105c88:
    // 0x105c88: 0xc0402d4  jal         func_100B50
label_105c8c:
    if (ctx->pc == 0x105C8Cu) {
        ctx->pc = 0x105C90u;
        goto label_105c90;
    }
    ctx->pc = 0x105C88u;
    SET_GPR_U32(ctx, 31, 0x105C90u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105C88u, 0x105C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105C90u;
label_105c90:
    // 0x105c90: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x105c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_105c94:
    // 0x105c94: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x105c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_105c98:
    // 0x105c98: 0x244215c0  addiu       $v0, $v0, 0x15C0
    ctx->pc = 0x105c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5568));
label_105c9c:
    // 0x105c9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105ca0:
    // 0x105ca0: 0xc040304  jal         func_100C10
label_105ca4:
    if (ctx->pc == 0x105CA4u) {
        ctx->pc = 0x105CA8u;
        goto label_105ca8;
    }
    ctx->pc = 0x105CA0u;
    SET_GPR_U32(ctx, 31, 0x105CA8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x105CA0u, 0x105CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CA8u;
label_105ca8:
    // 0x105ca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105cac:
    // 0x105cac: 0xc122470  jal         func_4891C0
label_105cb0:
    if (ctx->pc == 0x105CB0u) {
        ctx->pc = 0x105CB4u;
        goto label_105cb4;
    }
    ctx->pc = 0x105CACu;
    SET_GPR_U32(ctx, 31, 0x105CB4u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x105CACu, 0x105CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CB4u;
label_105cb4:
    // 0x105cb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105cb8:
    // 0x105cb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105cbc:
    // 0x105cbc: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x105cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_105cc0:
    // 0x105cc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105cc4:
    // 0x105cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105cc8:
    // 0x105cc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105ccc:
    // 0x105ccc: 0xc123a28  jal         func_48E8A0
label_105cd0:
    if (ctx->pc == 0x105CD0u) {
        ctx->pc = 0x105CD4u;
        goto label_105cd4;
    }
    ctx->pc = 0x105CCCu;
    SET_GPR_U32(ctx, 31, 0x105CD4u);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x105CCCu, 0x105CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CD4u;
label_105cd4:
    // 0x105cd4: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x105cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_105cd8:
    // 0x105cd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105cdc:
    // 0x105cdc: 0xc0402d4  jal         func_100B50
label_105ce0:
    if (ctx->pc == 0x105CE0u) {
        ctx->pc = 0x105CE4u;
        goto label_105ce4;
    }
    ctx->pc = 0x105CDCu;
    SET_GPR_U32(ctx, 31, 0x105CE4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105CDCu, 0x105CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105CE4u;
label_105ce4:
    // 0x105ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105ce8:
    // 0x105ce8: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x105ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_105cec:
    // 0x105cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105cf0:
    // 0x105cf0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_105cf4:
    // 0x105cf4: 0x244215e0  addiu       $v0, $v0, 0x15E0
    ctx->pc = 0x105cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
label_105cf8:
    // 0x105cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105cfc:
    // 0x105cfc: 0xc040304  jal         func_100C10
label_105d00:
    if (ctx->pc == 0x105D00u) {
        ctx->pc = 0x105D04u;
        goto label_105d04;
    }
    ctx->pc = 0x105CFCu;
    SET_GPR_U32(ctx, 31, 0x105D04u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x105CFCu, 0x105D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D04u;
label_105d04:
    // 0x105d04: 0xc122470  jal         func_4891C0
label_105d08:
    if (ctx->pc == 0x105D08u) {
        ctx->pc = 0x105D0Cu;
        goto label_105d0c;
    }
    ctx->pc = 0x105D04u;
    SET_GPR_U32(ctx, 31, 0x105D0Cu);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x105D04u, 0x105D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D0Cu;
label_105d0c:
    // 0x105d0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105d10:
    // 0x105d10: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x105d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_105d14:
    // 0x105d14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x105d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105d18:
    // 0x105d18: 0xc123a28  jal         func_48E8A0
label_105d1c:
    if (ctx->pc == 0x105D1Cu) {
        ctx->pc = 0x105D20u;
        goto label_105d20;
    }
    ctx->pc = 0x105D18u;
    SET_GPR_U32(ctx, 31, 0x105D20u);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x105D18u, 0x105D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D20u;
label_105d20:
    // 0x105d20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x105d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105d24:
    // 0x105d24: 0x27a20200  addiu       $v0, $sp, 0x200
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_105d28:
    // 0x105d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105d2c:
    // 0x105d2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105d30:
    // 0x105d30: 0xc0402d4  jal         func_100B50
label_105d34:
    if (ctx->pc == 0x105D34u) {
        ctx->pc = 0x105D38u;
        goto label_105d38;
    }
    ctx->pc = 0x105D30u;
    SET_GPR_U32(ctx, 31, 0x105D38u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105D30u, 0x105D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D38u;
label_105d38:
    // 0x105d38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105d3c:
    // 0x105d3c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x105d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_105d40:
    // 0x105d40: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x105d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_105d44:
    // 0x105d44: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x105d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_105d48:
    // 0x105d48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x105d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_105d4c:
    // 0x105d4c: 0x1485005c  bne         $a0, $a1, . + 4 + (0x5C << 2)
label_105d50:
    if (ctx->pc == 0x105D50u) {
        ctx->pc = 0x105D54u;
        goto label_105d54;
    }
    ctx->pc = 0x105D4Cu;
    {
        const bool branch_taken_0x105d4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x105d4c) {
            ctx->pc = 0x105EC0u;
            goto label_105ec0;
        }
    }
    ctx->pc = 0x105D54u;
label_105d54:
    // 0x105d54: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x105d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_105d58:
    // 0x105d58: 0x24c613b0  addiu       $a2, $a2, 0x13B0
    ctx->pc = 0x105d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5040));
label_105d5c:
    // 0x105d5c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x105d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_105d60:
    // 0x105d60: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x105d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_105d64:
    // 0x105d64: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x105d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_105d68:
    // 0x105d68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_105d6c:
    // 0x105d6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x105d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_105d70:
    // 0x105d70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x105d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_105d74:
    // 0x105d74: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x105d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_105d78:
    // 0x105d78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x105d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_105d7c:
    // 0x105d7c: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
label_105d80:
    if (ctx->pc == 0x105D80u) {
        ctx->pc = 0x105D84u;
        goto label_105d84;
    }
    ctx->pc = 0x105D7Cu;
    {
        const bool branch_taken_0x105d7c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x105d7c) {
            ctx->pc = 0x105D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105d68;
        }
    }
    ctx->pc = 0x105D84u;
label_105d84:
    // 0x105d84: 0xc107150  jal         func_41C540
label_105d88:
    if (ctx->pc == 0x105D88u) {
        ctx->pc = 0x105D8Cu;
        goto label_105d8c;
    }
    ctx->pc = 0x105D84u;
    SET_GPR_U32(ctx, 31, 0x105D8Cu);
    ctx->pc = 0x41C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C540u, 0x105D84u, 0x105D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D8Cu;
label_105d8c:
    // 0x105d8c: 0x27a402c8  addiu       $a0, $sp, 0x2C8
    ctx->pc = 0x105d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_105d90:
    // 0x105d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105d94:
    // 0x105d94: 0xc040304  jal         func_100C10
label_105d98:
    if (ctx->pc == 0x105D98u) {
        ctx->pc = 0x105D9Cu;
        goto label_105d9c;
    }
    ctx->pc = 0x105D94u;
    SET_GPR_U32(ctx, 31, 0x105D9Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x105D94u, 0x105D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105D9Cu;
label_105d9c:
    // 0x105d9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105da0:
    // 0x105da0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x105da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_105da4:
    // 0x105da4: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x105da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
label_105da8:
    // 0x105da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105dac:
    // 0x105dac: 0xc107156  jal         func_41C558
label_105db0:
    if (ctx->pc == 0x105DB0u) {
        ctx->pc = 0x105DB4u;
        goto label_105db4;
    }
    ctx->pc = 0x105DACu;
    SET_GPR_U32(ctx, 31, 0x105DB4u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x105DACu, 0x105DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DB4u;
label_105db4:
    // 0x105db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105db8:
    // 0x105db8: 0xafa00314  sw          $zero, 0x314($sp)
    ctx->pc = 0x105db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 0));
label_105dbc:
    // 0x105dbc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_105dc0:
    if (ctx->pc == 0x105DC0u) {
        ctx->pc = 0x105DC4u;
        goto label_105dc4;
    }
    ctx->pc = 0x105DBCu;
    {
        const bool branch_taken_0x105dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105dbc) {
            ctx->pc = 0x105E7Cu;
            goto label_105e7c;
        }
    }
    ctx->pc = 0x105DC4u;
label_105dc4:
    // 0x105dc4: 0x27a502b8  addiu       $a1, $sp, 0x2B8
    ctx->pc = 0x105dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_105dc8:
    // 0x105dc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105dcc:
    // 0x105dcc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x105dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_105dd0:
    // 0x105dd0: 0x24421620  addiu       $v0, $v0, 0x1620
    ctx->pc = 0x105dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5664));
label_105dd4:
    // 0x105dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105dd8:
    // 0x105dd8: 0xc040304  jal         func_100C10
label_105ddc:
    if (ctx->pc == 0x105DDCu) {
        ctx->pc = 0x105DE0u;
        goto label_105de0;
    }
    ctx->pc = 0x105DD8u;
    SET_GPR_U32(ctx, 31, 0x105DE0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x105DD8u, 0x105DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105DE0u;
label_105de0:
    // 0x105de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105de4:
    // 0x105de4: 0x8fa50314  lw          $a1, 0x314($sp)
    ctx->pc = 0x105de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_105de8:
    // 0x105de8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x105de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_105dec:
    // 0x105dec: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x105decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_105df0:
    // 0x105df0: 0x27a202b8  addiu       $v0, $sp, 0x2B8
    ctx->pc = 0x105df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_105df4:
    // 0x105df4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x105df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_105df8:
    // 0x105df8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x105df8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_105dfc:
    // 0x105dfc: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x105dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_105e00:
    // 0x105e00: 0xc0424e8  jal         func_1093A0
label_105e04:
    if (ctx->pc == 0x105E04u) {
        ctx->pc = 0x105E08u;
        goto label_105e08;
    }
    ctx->pc = 0x105E00u;
    SET_GPR_U32(ctx, 31, 0x105E08u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x105E00u, 0x105E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E08u;
label_105e08:
    // 0x105e08: 0x27a602b8  addiu       $a2, $sp, 0x2B8
    ctx->pc = 0x105e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_105e0c:
    // 0x105e0c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x105e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_105e10:
    // 0x105e10: 0x278284d0  addiu       $v0, $gp, -0x7B30
    ctx->pc = 0x105e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935760));
label_105e14:
    // 0x105e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105e18:
    // 0x105e18: 0xc0424e8  jal         func_1093A0
label_105e1c:
    if (ctx->pc == 0x105E1Cu) {
        ctx->pc = 0x105E20u;
        goto label_105e20;
    }
    ctx->pc = 0x105E18u;
    SET_GPR_U32(ctx, 31, 0x105E20u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x105E18u, 0x105E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E20u;
label_105e20:
    // 0x105e20: 0x27a402b8  addiu       $a0, $sp, 0x2B8
    ctx->pc = 0x105e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_105e24:
    // 0x105e24: 0xc041b38  jal         func_106CE0
label_105e28:
    if (ctx->pc == 0x105E28u) {
        ctx->pc = 0x105E2Cu;
        goto label_105e2c;
    }
    ctx->pc = 0x105E24u;
    SET_GPR_U32(ctx, 31, 0x105E2Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x105E24u, 0x105E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E2Cu;
label_105e2c:
    // 0x105e2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105e30:
    // 0x105e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_105e34:
    // 0x105e34: 0xc107fa4  jal         func_41FE90
label_105e38:
    if (ctx->pc == 0x105E38u) {
        ctx->pc = 0x105E3Cu;
        goto label_105e3c;
    }
    ctx->pc = 0x105E34u;
    SET_GPR_U32(ctx, 31, 0x105E3Cu);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x105E34u, 0x105E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E3Cu;
label_105e3c:
    // 0x105e3c: 0xafa20310  sw          $v0, 0x310($sp)
    ctx->pc = 0x105e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 2));
label_105e40:
    // 0x105e40: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x105e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_105e44:
    // 0x105e44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_105e48:
    if (ctx->pc == 0x105E48u) {
        ctx->pc = 0x105E4Cu;
        goto label_105e4c;
    }
    ctx->pc = 0x105E44u;
    {
        const bool branch_taken_0x105e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105e44) {
            ctx->pc = 0x105E60u;
            goto label_105e60;
        }
    }
    ctx->pc = 0x105E4Cu;
label_105e4c:
    // 0x105e4c: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x105e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_105e50:
    // 0x105e50: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x105e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_105e54:
    // 0x105e54: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x105e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_105e58:
    // 0x105e58: 0xc04187c  jal         func_1061F0
label_105e5c:
    if (ctx->pc == 0x105E5Cu) {
        ctx->pc = 0x105E60u;
        goto label_105e60;
    }
    ctx->pc = 0x105E58u;
    SET_GPR_U32(ctx, 31, 0x105E60u);
    ctx->pc = 0x1061F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061F0u, 0x105E58u, 0x105E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E60u;
label_105e60:
    // 0x105e60: 0x27a402b8  addiu       $a0, $sp, 0x2B8
    ctx->pc = 0x105e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_105e64:
    // 0x105e64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105e68:
    // 0x105e68: 0xc0402d4  jal         func_100B50
label_105e6c:
    if (ctx->pc == 0x105E6Cu) {
        ctx->pc = 0x105E70u;
        goto label_105e70;
    }
    ctx->pc = 0x105E68u;
    SET_GPR_U32(ctx, 31, 0x105E70u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105E68u, 0x105E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E70u;
label_105e70:
    // 0x105e70: 0x8fa40314  lw          $a0, 0x314($sp)
    ctx->pc = 0x105e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_105e74:
    // 0x105e74: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x105e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_105e78:
    // 0x105e78: 0xafa50314  sw          $a1, 0x314($sp)
    ctx->pc = 0x105e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 5));
label_105e7c:
    // 0x105e7c: 0x8fa20314  lw          $v0, 0x314($sp)
    ctx->pc = 0x105e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_105e80:
    // 0x105e80: 0x28440007  slti        $a0, $v0, 0x7
    ctx->pc = 0x105e80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_105e84:
    // 0x105e84: 0x1480ffcf  bnez        $a0, . + 4 + (-0x31 << 2)
label_105e88:
    if (ctx->pc == 0x105E88u) {
        ctx->pc = 0x105E8Cu;
        goto label_105e8c;
    }
    ctx->pc = 0x105E84u;
    {
        const bool branch_taken_0x105e84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x105e84) {
            ctx->pc = 0x105DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105dc4;
        }
    }
    ctx->pc = 0x105E8Cu;
label_105e8c:
    // 0x105e8c: 0x27a502c8  addiu       $a1, $sp, 0x2C8
    ctx->pc = 0x105e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_105e90:
    // 0x105e90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x105e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_105e94:
    // 0x105e94: 0xc041874  jal         func_1061D0
label_105e98:
    if (ctx->pc == 0x105E98u) {
        ctx->pc = 0x105E9Cu;
        goto label_105e9c;
    }
    ctx->pc = 0x105E94u;
    SET_GPR_U32(ctx, 31, 0x105E9Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x105E94u, 0x105E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105E9Cu;
label_105e9c:
    // 0x105e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105ea0:
    // 0x105ea0: 0xc107156  jal         func_41C558
label_105ea4:
    if (ctx->pc == 0x105EA4u) {
        ctx->pc = 0x105EA8u;
        goto label_105ea8;
    }
    ctx->pc = 0x105EA0u;
    SET_GPR_U32(ctx, 31, 0x105EA8u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x105EA0u, 0x105EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EA8u;
label_105ea8:
    // 0x105ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105eac:
    // 0x105eac: 0x27a202c8  addiu       $v0, $sp, 0x2C8
    ctx->pc = 0x105eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_105eb0:
    // 0x105eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x105eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105eb4:
    // 0x105eb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105eb8:
    // 0x105eb8: 0xc0402d4  jal         func_100B50
label_105ebc:
    if (ctx->pc == 0x105EBCu) {
        ctx->pc = 0x105EC0u;
        goto label_105ec0;
    }
    ctx->pc = 0x105EB8u;
    SET_GPR_U32(ctx, 31, 0x105EC0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105EB8u, 0x105EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EC0u;
label_105ec0:
    // 0x105ec0: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x105ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_105ec4:
    // 0x105ec4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105ec8:
    // 0x105ec8: 0xc0417cc  jal         func_105F30
label_105ecc:
    if (ctx->pc == 0x105ECCu) {
        ctx->pc = 0x105ED0u;
        goto label_105ed0;
    }
    ctx->pc = 0x105EC8u;
    SET_GPR_U32(ctx, 31, 0x105ED0u);
    ctx->pc = 0x105F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F30u, 0x105EC8u, 0x105ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105ED0u;
label_105ed0:
    // 0x105ed0: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x105ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_105ed4:
    // 0x105ed4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x105ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_105ed8:
    // 0x105ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x105ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_105edc:
    // 0x105edc: 0xc0402d4  jal         func_100B50
label_105ee0:
    if (ctx->pc == 0x105EE0u) {
        ctx->pc = 0x105EE4u;
        goto label_105ee4;
    }
    ctx->pc = 0x105EDCu;
    SET_GPR_U32(ctx, 31, 0x105EE4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x105EDCu, 0x105EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EE4u;
label_105ee4:
    // 0x105ee4: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_105ee8:
    // 0x105ee8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x105ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_105eec:
    // 0x105eec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x105eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_105ef0:
    // 0x105ef0: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x105ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_105ef4:
    // 0x105ef4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x105ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_105ef8:
    // 0x105ef8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x105ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_105efc:
    // 0x105efc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x105efcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_105f00:
    // 0x105f00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x105f00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_105f04:
    // 0x105f04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x105f04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_105f08:
    // 0x105f08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x105f08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_105f0c:
    // 0x105f0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x105f0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_105f10:
    // 0x105f10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x105f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_105f14:
    // 0x105f14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x105f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_105f18:
    // 0x105f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x105f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_105f1c:
    // 0x105f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x105f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_105f20:
    // 0x105f20: 0x27bd0370  addiu       $sp, $sp, 0x370
    ctx->pc = 0x105f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_105f24:
    // 0x105f24: 0x3e00008  jr          $ra
label_105f28:
    if (ctx->pc == 0x105F28u) {
        ctx->pc = 0x105F2Cu;
        goto label_105f2c;
    }
    ctx->pc = 0x105F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105F2Cu;
label_105f2c:
    // 0x105f2c: 0x0  nop
    ctx->pc = 0x105f2cu;
    // NOP
    ctx->pc = 0x105f30u;
}
