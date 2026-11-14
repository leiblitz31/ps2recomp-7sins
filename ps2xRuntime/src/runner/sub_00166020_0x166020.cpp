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

// Function: sub_00166020
// Address: 0x166020 - 0x1667a0
void sub_00166020_0x166020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166020_0x166020");
#endif

    switch (ctx->pc) {
        case 0x166020u: goto label_166020;
        case 0x166024u: goto label_166024;
        case 0x166028u: goto label_166028;
        case 0x16602cu: goto label_16602c;
        case 0x166030u: goto label_166030;
        case 0x166034u: goto label_166034;
        case 0x166038u: goto label_166038;
        case 0x16603cu: goto label_16603c;
        case 0x166040u: goto label_166040;
        case 0x166044u: goto label_166044;
        case 0x166048u: goto label_166048;
        case 0x16604cu: goto label_16604c;
        case 0x166050u: goto label_166050;
        case 0x166054u: goto label_166054;
        case 0x166058u: goto label_166058;
        case 0x16605cu: goto label_16605c;
        case 0x166060u: goto label_166060;
        case 0x166064u: goto label_166064;
        case 0x166068u: goto label_166068;
        case 0x16606cu: goto label_16606c;
        case 0x166070u: goto label_166070;
        case 0x166074u: goto label_166074;
        case 0x166078u: goto label_166078;
        case 0x16607cu: goto label_16607c;
        case 0x166080u: goto label_166080;
        case 0x166084u: goto label_166084;
        case 0x166088u: goto label_166088;
        case 0x16608cu: goto label_16608c;
        case 0x166090u: goto label_166090;
        case 0x166094u: goto label_166094;
        case 0x166098u: goto label_166098;
        case 0x16609cu: goto label_16609c;
        case 0x1660a0u: goto label_1660a0;
        case 0x1660a4u: goto label_1660a4;
        case 0x1660a8u: goto label_1660a8;
        case 0x1660acu: goto label_1660ac;
        case 0x1660b0u: goto label_1660b0;
        case 0x1660b4u: goto label_1660b4;
        case 0x1660b8u: goto label_1660b8;
        case 0x1660bcu: goto label_1660bc;
        case 0x1660c0u: goto label_1660c0;
        case 0x1660c4u: goto label_1660c4;
        case 0x1660c8u: goto label_1660c8;
        case 0x1660ccu: goto label_1660cc;
        case 0x1660d0u: goto label_1660d0;
        case 0x1660d4u: goto label_1660d4;
        case 0x1660d8u: goto label_1660d8;
        case 0x1660dcu: goto label_1660dc;
        case 0x1660e0u: goto label_1660e0;
        case 0x1660e4u: goto label_1660e4;
        case 0x1660e8u: goto label_1660e8;
        case 0x1660ecu: goto label_1660ec;
        case 0x1660f0u: goto label_1660f0;
        case 0x1660f4u: goto label_1660f4;
        case 0x1660f8u: goto label_1660f8;
        case 0x1660fcu: goto label_1660fc;
        case 0x166100u: goto label_166100;
        case 0x166104u: goto label_166104;
        case 0x166108u: goto label_166108;
        case 0x16610cu: goto label_16610c;
        case 0x166110u: goto label_166110;
        case 0x166114u: goto label_166114;
        case 0x166118u: goto label_166118;
        case 0x16611cu: goto label_16611c;
        case 0x166120u: goto label_166120;
        case 0x166124u: goto label_166124;
        case 0x166128u: goto label_166128;
        case 0x16612cu: goto label_16612c;
        case 0x166130u: goto label_166130;
        case 0x166134u: goto label_166134;
        case 0x166138u: goto label_166138;
        case 0x16613cu: goto label_16613c;
        case 0x166140u: goto label_166140;
        case 0x166144u: goto label_166144;
        case 0x166148u: goto label_166148;
        case 0x16614cu: goto label_16614c;
        case 0x166150u: goto label_166150;
        case 0x166154u: goto label_166154;
        case 0x166158u: goto label_166158;
        case 0x16615cu: goto label_16615c;
        case 0x166160u: goto label_166160;
        case 0x166164u: goto label_166164;
        case 0x166168u: goto label_166168;
        case 0x16616cu: goto label_16616c;
        case 0x166170u: goto label_166170;
        case 0x166174u: goto label_166174;
        case 0x166178u: goto label_166178;
        case 0x16617cu: goto label_16617c;
        case 0x166180u: goto label_166180;
        case 0x166184u: goto label_166184;
        case 0x166188u: goto label_166188;
        case 0x16618cu: goto label_16618c;
        case 0x166190u: goto label_166190;
        case 0x166194u: goto label_166194;
        case 0x166198u: goto label_166198;
        case 0x16619cu: goto label_16619c;
        case 0x1661a0u: goto label_1661a0;
        case 0x1661a4u: goto label_1661a4;
        case 0x1661a8u: goto label_1661a8;
        case 0x1661acu: goto label_1661ac;
        case 0x1661b0u: goto label_1661b0;
        case 0x1661b4u: goto label_1661b4;
        case 0x1661b8u: goto label_1661b8;
        case 0x1661bcu: goto label_1661bc;
        case 0x1661c0u: goto label_1661c0;
        case 0x1661c4u: goto label_1661c4;
        case 0x1661c8u: goto label_1661c8;
        case 0x1661ccu: goto label_1661cc;
        case 0x1661d0u: goto label_1661d0;
        case 0x1661d4u: goto label_1661d4;
        case 0x1661d8u: goto label_1661d8;
        case 0x1661dcu: goto label_1661dc;
        case 0x1661e0u: goto label_1661e0;
        case 0x1661e4u: goto label_1661e4;
        case 0x1661e8u: goto label_1661e8;
        case 0x1661ecu: goto label_1661ec;
        case 0x1661f0u: goto label_1661f0;
        case 0x1661f4u: goto label_1661f4;
        case 0x1661f8u: goto label_1661f8;
        case 0x1661fcu: goto label_1661fc;
        case 0x166200u: goto label_166200;
        case 0x166204u: goto label_166204;
        case 0x166208u: goto label_166208;
        case 0x16620cu: goto label_16620c;
        case 0x166210u: goto label_166210;
        case 0x166214u: goto label_166214;
        case 0x166218u: goto label_166218;
        case 0x16621cu: goto label_16621c;
        case 0x166220u: goto label_166220;
        case 0x166224u: goto label_166224;
        case 0x166228u: goto label_166228;
        case 0x16622cu: goto label_16622c;
        case 0x166230u: goto label_166230;
        case 0x166234u: goto label_166234;
        case 0x166238u: goto label_166238;
        case 0x16623cu: goto label_16623c;
        case 0x166240u: goto label_166240;
        case 0x166244u: goto label_166244;
        case 0x166248u: goto label_166248;
        case 0x16624cu: goto label_16624c;
        case 0x166250u: goto label_166250;
        case 0x166254u: goto label_166254;
        case 0x166258u: goto label_166258;
        case 0x16625cu: goto label_16625c;
        case 0x166260u: goto label_166260;
        case 0x166264u: goto label_166264;
        case 0x166268u: goto label_166268;
        case 0x16626cu: goto label_16626c;
        case 0x166270u: goto label_166270;
        case 0x166274u: goto label_166274;
        case 0x166278u: goto label_166278;
        case 0x16627cu: goto label_16627c;
        case 0x166280u: goto label_166280;
        case 0x166284u: goto label_166284;
        case 0x166288u: goto label_166288;
        case 0x16628cu: goto label_16628c;
        case 0x166290u: goto label_166290;
        case 0x166294u: goto label_166294;
        case 0x166298u: goto label_166298;
        case 0x16629cu: goto label_16629c;
        case 0x1662a0u: goto label_1662a0;
        case 0x1662a4u: goto label_1662a4;
        case 0x1662a8u: goto label_1662a8;
        case 0x1662acu: goto label_1662ac;
        case 0x1662b0u: goto label_1662b0;
        case 0x1662b4u: goto label_1662b4;
        case 0x1662b8u: goto label_1662b8;
        case 0x1662bcu: goto label_1662bc;
        case 0x1662c0u: goto label_1662c0;
        case 0x1662c4u: goto label_1662c4;
        case 0x1662c8u: goto label_1662c8;
        case 0x1662ccu: goto label_1662cc;
        case 0x1662d0u: goto label_1662d0;
        case 0x1662d4u: goto label_1662d4;
        case 0x1662d8u: goto label_1662d8;
        case 0x1662dcu: goto label_1662dc;
        case 0x1662e0u: goto label_1662e0;
        case 0x1662e4u: goto label_1662e4;
        case 0x1662e8u: goto label_1662e8;
        case 0x1662ecu: goto label_1662ec;
        case 0x1662f0u: goto label_1662f0;
        case 0x1662f4u: goto label_1662f4;
        case 0x1662f8u: goto label_1662f8;
        case 0x1662fcu: goto label_1662fc;
        case 0x166300u: goto label_166300;
        case 0x166304u: goto label_166304;
        case 0x166308u: goto label_166308;
        case 0x16630cu: goto label_16630c;
        case 0x166310u: goto label_166310;
        case 0x166314u: goto label_166314;
        case 0x166318u: goto label_166318;
        case 0x16631cu: goto label_16631c;
        case 0x166320u: goto label_166320;
        case 0x166324u: goto label_166324;
        case 0x166328u: goto label_166328;
        case 0x16632cu: goto label_16632c;
        case 0x166330u: goto label_166330;
        case 0x166334u: goto label_166334;
        case 0x166338u: goto label_166338;
        case 0x16633cu: goto label_16633c;
        case 0x166340u: goto label_166340;
        case 0x166344u: goto label_166344;
        case 0x166348u: goto label_166348;
        case 0x16634cu: goto label_16634c;
        case 0x166350u: goto label_166350;
        case 0x166354u: goto label_166354;
        case 0x166358u: goto label_166358;
        case 0x16635cu: goto label_16635c;
        case 0x166360u: goto label_166360;
        case 0x166364u: goto label_166364;
        case 0x166368u: goto label_166368;
        case 0x16636cu: goto label_16636c;
        case 0x166370u: goto label_166370;
        case 0x166374u: goto label_166374;
        case 0x166378u: goto label_166378;
        case 0x16637cu: goto label_16637c;
        case 0x166380u: goto label_166380;
        case 0x166384u: goto label_166384;
        case 0x166388u: goto label_166388;
        case 0x16638cu: goto label_16638c;
        case 0x166390u: goto label_166390;
        case 0x166394u: goto label_166394;
        case 0x166398u: goto label_166398;
        case 0x16639cu: goto label_16639c;
        case 0x1663a0u: goto label_1663a0;
        case 0x1663a4u: goto label_1663a4;
        case 0x1663a8u: goto label_1663a8;
        case 0x1663acu: goto label_1663ac;
        case 0x1663b0u: goto label_1663b0;
        case 0x1663b4u: goto label_1663b4;
        case 0x1663b8u: goto label_1663b8;
        case 0x1663bcu: goto label_1663bc;
        case 0x1663c0u: goto label_1663c0;
        case 0x1663c4u: goto label_1663c4;
        case 0x1663c8u: goto label_1663c8;
        case 0x1663ccu: goto label_1663cc;
        case 0x1663d0u: goto label_1663d0;
        case 0x1663d4u: goto label_1663d4;
        case 0x1663d8u: goto label_1663d8;
        case 0x1663dcu: goto label_1663dc;
        case 0x1663e0u: goto label_1663e0;
        case 0x1663e4u: goto label_1663e4;
        case 0x1663e8u: goto label_1663e8;
        case 0x1663ecu: goto label_1663ec;
        case 0x1663f0u: goto label_1663f0;
        case 0x1663f4u: goto label_1663f4;
        case 0x1663f8u: goto label_1663f8;
        case 0x1663fcu: goto label_1663fc;
        case 0x166400u: goto label_166400;
        case 0x166404u: goto label_166404;
        case 0x166408u: goto label_166408;
        case 0x16640cu: goto label_16640c;
        case 0x166410u: goto label_166410;
        case 0x166414u: goto label_166414;
        case 0x166418u: goto label_166418;
        case 0x16641cu: goto label_16641c;
        case 0x166420u: goto label_166420;
        case 0x166424u: goto label_166424;
        case 0x166428u: goto label_166428;
        case 0x16642cu: goto label_16642c;
        case 0x166430u: goto label_166430;
        case 0x166434u: goto label_166434;
        case 0x166438u: goto label_166438;
        case 0x16643cu: goto label_16643c;
        case 0x166440u: goto label_166440;
        case 0x166444u: goto label_166444;
        case 0x166448u: goto label_166448;
        case 0x16644cu: goto label_16644c;
        case 0x166450u: goto label_166450;
        case 0x166454u: goto label_166454;
        case 0x166458u: goto label_166458;
        case 0x16645cu: goto label_16645c;
        case 0x166460u: goto label_166460;
        case 0x166464u: goto label_166464;
        case 0x166468u: goto label_166468;
        case 0x16646cu: goto label_16646c;
        case 0x166470u: goto label_166470;
        case 0x166474u: goto label_166474;
        case 0x166478u: goto label_166478;
        case 0x16647cu: goto label_16647c;
        case 0x166480u: goto label_166480;
        case 0x166484u: goto label_166484;
        case 0x166488u: goto label_166488;
        case 0x16648cu: goto label_16648c;
        case 0x166490u: goto label_166490;
        case 0x166494u: goto label_166494;
        case 0x166498u: goto label_166498;
        case 0x16649cu: goto label_16649c;
        case 0x1664a0u: goto label_1664a0;
        case 0x1664a4u: goto label_1664a4;
        case 0x1664a8u: goto label_1664a8;
        case 0x1664acu: goto label_1664ac;
        case 0x1664b0u: goto label_1664b0;
        case 0x1664b4u: goto label_1664b4;
        case 0x1664b8u: goto label_1664b8;
        case 0x1664bcu: goto label_1664bc;
        case 0x1664c0u: goto label_1664c0;
        case 0x1664c4u: goto label_1664c4;
        case 0x1664c8u: goto label_1664c8;
        case 0x1664ccu: goto label_1664cc;
        case 0x1664d0u: goto label_1664d0;
        case 0x1664d4u: goto label_1664d4;
        case 0x1664d8u: goto label_1664d8;
        case 0x1664dcu: goto label_1664dc;
        case 0x1664e0u: goto label_1664e0;
        case 0x1664e4u: goto label_1664e4;
        case 0x1664e8u: goto label_1664e8;
        case 0x1664ecu: goto label_1664ec;
        case 0x1664f0u: goto label_1664f0;
        case 0x1664f4u: goto label_1664f4;
        case 0x1664f8u: goto label_1664f8;
        case 0x1664fcu: goto label_1664fc;
        case 0x166500u: goto label_166500;
        case 0x166504u: goto label_166504;
        case 0x166508u: goto label_166508;
        case 0x16650cu: goto label_16650c;
        case 0x166510u: goto label_166510;
        case 0x166514u: goto label_166514;
        case 0x166518u: goto label_166518;
        case 0x16651cu: goto label_16651c;
        case 0x166520u: goto label_166520;
        case 0x166524u: goto label_166524;
        case 0x166528u: goto label_166528;
        case 0x16652cu: goto label_16652c;
        case 0x166530u: goto label_166530;
        case 0x166534u: goto label_166534;
        case 0x166538u: goto label_166538;
        case 0x16653cu: goto label_16653c;
        case 0x166540u: goto label_166540;
        case 0x166544u: goto label_166544;
        case 0x166548u: goto label_166548;
        case 0x16654cu: goto label_16654c;
        case 0x166550u: goto label_166550;
        case 0x166554u: goto label_166554;
        case 0x166558u: goto label_166558;
        case 0x16655cu: goto label_16655c;
        case 0x166560u: goto label_166560;
        case 0x166564u: goto label_166564;
        case 0x166568u: goto label_166568;
        case 0x16656cu: goto label_16656c;
        case 0x166570u: goto label_166570;
        case 0x166574u: goto label_166574;
        case 0x166578u: goto label_166578;
        case 0x16657cu: goto label_16657c;
        case 0x166580u: goto label_166580;
        case 0x166584u: goto label_166584;
        case 0x166588u: goto label_166588;
        case 0x16658cu: goto label_16658c;
        case 0x166590u: goto label_166590;
        case 0x166594u: goto label_166594;
        case 0x166598u: goto label_166598;
        case 0x16659cu: goto label_16659c;
        case 0x1665a0u: goto label_1665a0;
        case 0x1665a4u: goto label_1665a4;
        case 0x1665a8u: goto label_1665a8;
        case 0x1665acu: goto label_1665ac;
        case 0x1665b0u: goto label_1665b0;
        case 0x1665b4u: goto label_1665b4;
        case 0x1665b8u: goto label_1665b8;
        case 0x1665bcu: goto label_1665bc;
        case 0x1665c0u: goto label_1665c0;
        case 0x1665c4u: goto label_1665c4;
        case 0x1665c8u: goto label_1665c8;
        case 0x1665ccu: goto label_1665cc;
        case 0x1665d0u: goto label_1665d0;
        case 0x1665d4u: goto label_1665d4;
        case 0x1665d8u: goto label_1665d8;
        case 0x1665dcu: goto label_1665dc;
        case 0x1665e0u: goto label_1665e0;
        case 0x1665e4u: goto label_1665e4;
        case 0x1665e8u: goto label_1665e8;
        case 0x1665ecu: goto label_1665ec;
        case 0x1665f0u: goto label_1665f0;
        case 0x1665f4u: goto label_1665f4;
        case 0x1665f8u: goto label_1665f8;
        case 0x1665fcu: goto label_1665fc;
        case 0x166600u: goto label_166600;
        case 0x166604u: goto label_166604;
        case 0x166608u: goto label_166608;
        case 0x16660cu: goto label_16660c;
        case 0x166610u: goto label_166610;
        case 0x166614u: goto label_166614;
        case 0x166618u: goto label_166618;
        case 0x16661cu: goto label_16661c;
        case 0x166620u: goto label_166620;
        case 0x166624u: goto label_166624;
        case 0x166628u: goto label_166628;
        case 0x16662cu: goto label_16662c;
        case 0x166630u: goto label_166630;
        case 0x166634u: goto label_166634;
        case 0x166638u: goto label_166638;
        case 0x16663cu: goto label_16663c;
        case 0x166640u: goto label_166640;
        case 0x166644u: goto label_166644;
        case 0x166648u: goto label_166648;
        case 0x16664cu: goto label_16664c;
        case 0x166650u: goto label_166650;
        case 0x166654u: goto label_166654;
        case 0x166658u: goto label_166658;
        case 0x16665cu: goto label_16665c;
        case 0x166660u: goto label_166660;
        case 0x166664u: goto label_166664;
        case 0x166668u: goto label_166668;
        case 0x16666cu: goto label_16666c;
        case 0x166670u: goto label_166670;
        case 0x166674u: goto label_166674;
        case 0x166678u: goto label_166678;
        case 0x16667cu: goto label_16667c;
        case 0x166680u: goto label_166680;
        case 0x166684u: goto label_166684;
        case 0x166688u: goto label_166688;
        case 0x16668cu: goto label_16668c;
        case 0x166690u: goto label_166690;
        case 0x166694u: goto label_166694;
        case 0x166698u: goto label_166698;
        case 0x16669cu: goto label_16669c;
        case 0x1666a0u: goto label_1666a0;
        case 0x1666a4u: goto label_1666a4;
        case 0x1666a8u: goto label_1666a8;
        case 0x1666acu: goto label_1666ac;
        case 0x1666b0u: goto label_1666b0;
        case 0x1666b4u: goto label_1666b4;
        case 0x1666b8u: goto label_1666b8;
        case 0x1666bcu: goto label_1666bc;
        case 0x1666c0u: goto label_1666c0;
        case 0x1666c4u: goto label_1666c4;
        case 0x1666c8u: goto label_1666c8;
        case 0x1666ccu: goto label_1666cc;
        case 0x1666d0u: goto label_1666d0;
        case 0x1666d4u: goto label_1666d4;
        case 0x1666d8u: goto label_1666d8;
        case 0x1666dcu: goto label_1666dc;
        case 0x1666e0u: goto label_1666e0;
        case 0x1666e4u: goto label_1666e4;
        case 0x1666e8u: goto label_1666e8;
        case 0x1666ecu: goto label_1666ec;
        case 0x1666f0u: goto label_1666f0;
        case 0x1666f4u: goto label_1666f4;
        case 0x1666f8u: goto label_1666f8;
        case 0x1666fcu: goto label_1666fc;
        case 0x166700u: goto label_166700;
        case 0x166704u: goto label_166704;
        case 0x166708u: goto label_166708;
        case 0x16670cu: goto label_16670c;
        case 0x166710u: goto label_166710;
        case 0x166714u: goto label_166714;
        case 0x166718u: goto label_166718;
        case 0x16671cu: goto label_16671c;
        case 0x166720u: goto label_166720;
        case 0x166724u: goto label_166724;
        case 0x166728u: goto label_166728;
        case 0x16672cu: goto label_16672c;
        case 0x166730u: goto label_166730;
        case 0x166734u: goto label_166734;
        case 0x166738u: goto label_166738;
        case 0x16673cu: goto label_16673c;
        case 0x166740u: goto label_166740;
        case 0x166744u: goto label_166744;
        case 0x166748u: goto label_166748;
        case 0x16674cu: goto label_16674c;
        case 0x166750u: goto label_166750;
        case 0x166754u: goto label_166754;
        case 0x166758u: goto label_166758;
        case 0x16675cu: goto label_16675c;
        case 0x166760u: goto label_166760;
        case 0x166764u: goto label_166764;
        case 0x166768u: goto label_166768;
        case 0x16676cu: goto label_16676c;
        case 0x166770u: goto label_166770;
        case 0x166774u: goto label_166774;
        case 0x166778u: goto label_166778;
        case 0x16677cu: goto label_16677c;
        case 0x166780u: goto label_166780;
        case 0x166784u: goto label_166784;
        case 0x166788u: goto label_166788;
        case 0x16678cu: goto label_16678c;
        case 0x166790u: goto label_166790;
        case 0x166794u: goto label_166794;
        case 0x166798u: goto label_166798;
        case 0x16679cu: goto label_16679c;
        default: break;
    }

    ctx->pc = 0x166020u;

label_166020:
    // 0x166020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x166020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_166024:
    // 0x166024: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x166024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_166028:
    // 0x166028: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x166028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16602c:
    // 0x16602c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16602cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_166030:
    // 0x166030: 0x3e00008  jr          $ra
label_166034:
    if (ctx->pc == 0x166034u) {
        ctx->pc = 0x166038u;
        goto label_166038;
    }
    ctx->pc = 0x166030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166038u;
label_166038:
    // 0x166038: 0x0  nop
    ctx->pc = 0x166038u;
    // NOP
label_16603c:
    // 0x16603c: 0x0  nop
    ctx->pc = 0x16603cu;
    // NOP
label_166040:
    // 0x166040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x166040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_166044:
    // 0x166044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_166048:
    // 0x166048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16604c:
    // 0x16604c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16604cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_166050:
    // 0x166050: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x166050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_166054:
    // 0x166054: 0xc0559dc  jal         func_156770
label_166058:
    if (ctx->pc == 0x166058u) {
        ctx->pc = 0x16605Cu;
        goto label_16605c;
    }
    ctx->pc = 0x166054u;
    SET_GPR_U32(ctx, 31, 0x16605Cu);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x166054u, 0x16605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16605Cu;
label_16605c:
    // 0x16605c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16605cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_166060:
    // 0x166060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x166060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166064:
    // 0x166064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_166068:
    // 0x166068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16606c:
    // 0x16606c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16606cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_166070:
    // 0x166070: 0x3e00008  jr          $ra
label_166074:
    if (ctx->pc == 0x166074u) {
        ctx->pc = 0x166078u;
        goto label_166078;
    }
    ctx->pc = 0x166070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166078u;
label_166078:
    // 0x166078: 0x0  nop
    ctx->pc = 0x166078u;
    // NOP
label_16607c:
    // 0x16607c: 0x0  nop
    ctx->pc = 0x16607cu;
    // NOP
label_166080:
    // 0x166080: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_166084:
    // 0x166084: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x166084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_166088:
    // 0x166088: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x166088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_16608c:
    // 0x16608c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_166090:
    // 0x166090: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x166090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_166094:
    // 0x166094: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_166098:
    // 0x166098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16609c:
    // 0x16609c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1660a0:
    // 0x1660a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1660a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1660a4:
    // 0x1660a4: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1660a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_1660a8:
    // 0x1660a8: 0xa3a500e0  sb          $a1, 0xE0($sp)
    ctx->pc = 0x1660a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 5));
label_1660ac:
    // 0x1660ac: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1660acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1660b0:
    // 0x1660b0: 0x93a500e0  lbu         $a1, 0xE0($sp)
    ctx->pc = 0x1660b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_1660b4:
    // 0x1660b4: 0xc055a78  jal         func_1569E0
label_1660b8:
    if (ctx->pc == 0x1660B8u) {
        ctx->pc = 0x1660BCu;
        goto label_1660bc;
    }
    ctx->pc = 0x1660B4u;
    SET_GPR_U32(ctx, 31, 0x1660BCu);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x1660B4u, 0x1660BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1660BCu;
label_1660bc:
    // 0x1660bc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1660bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1660c0:
    // 0x1660c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1660c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1660c4:
    // 0x1660c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1660c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1660c8:
    // 0x1660c8: 0x320f809  jalr        $t9
label_1660cc:
    if (ctx->pc == 0x1660CCu) {
        ctx->pc = 0x1660D0u;
        goto label_1660d0;
    }
    ctx->pc = 0x1660C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1660D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1660C8u, 0x1660D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1660D0u;
label_1660d0:
    // 0x1660d0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1660d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1660d4:
    // 0x1660d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1660d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1660d8:
    // 0x1660d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1660d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1660dc:
    // 0x1660dc: 0x320f809  jalr        $t9
label_1660e0:
    if (ctx->pc == 0x1660E0u) {
        ctx->pc = 0x1660E4u;
        goto label_1660e4;
    }
    ctx->pc = 0x1660DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1660E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1660DCu, 0x1660E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1660E4u;
label_1660e4:
    // 0x1660e4: 0x93a500e0  lbu         $a1, 0xE0($sp)
    ctx->pc = 0x1660e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_1660e8:
    // 0x1660e8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1660e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1660ec:
    // 0x1660ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1660ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1660f0:
    // 0x1660f0: 0x14430180  bne         $v0, $v1, . + 4 + (0x180 << 2)
label_1660f4:
    if (ctx->pc == 0x1660F4u) {
        ctx->pc = 0x1660F8u;
        goto label_1660f8;
    }
    ctx->pc = 0x1660F0u;
    {
        const bool branch_taken_0x1660f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1660f0) {
            ctx->pc = 0x1666F4u;
            goto label_1666f4;
        }
    }
    ctx->pc = 0x1660F8u;
label_1660f8:
    // 0x1660f8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1660f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1660fc:
    // 0x1660fc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1660fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_166100:
    // 0x166100: 0x24a53eb0  addiu       $a1, $a1, 0x3EB0
    ctx->pc = 0x166100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16048));
label_166104:
    // 0x166104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x166104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_166108:
    // 0x166108: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x166108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_16610c:
    // 0x16610c: 0x320f809  jalr        $t9
label_166110:
    if (ctx->pc == 0x166110u) {
        ctx->pc = 0x166114u;
        goto label_166114;
    }
    ctx->pc = 0x16610Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x166114u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16610Cu, 0x166114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166114u;
label_166114:
    // 0x166114: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x166114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_166118:
    // 0x166118: 0xc119b68  jal         func_466DA0
label_16611c:
    if (ctx->pc == 0x16611Cu) {
        ctx->pc = 0x166120u;
        goto label_166120;
    }
    ctx->pc = 0x166118u;
    SET_GPR_U32(ctx, 31, 0x166120u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x166118u, 0x166120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166120u;
label_166120:
    // 0x166120: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x166120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_166124:
    // 0x166124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x166124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166128:
    // 0x166128: 0xc0400e0  jal         func_100380
label_16612c:
    if (ctx->pc == 0x16612Cu) {
        ctx->pc = 0x166130u;
        goto label_166130;
    }
    ctx->pc = 0x166128u;
    SET_GPR_U32(ctx, 31, 0x166130u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x166128u, 0x166130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166130u;
label_166130:
    // 0x166130: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x166130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166134:
    // 0x166134: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_166138:
    if (ctx->pc == 0x166138u) {
        ctx->pc = 0x16613Cu;
        goto label_16613c;
    }
    ctx->pc = 0x166134u;
    {
        const bool branch_taken_0x166134 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x166134) {
            ctx->pc = 0x16614Cu;
            goto label_16614c;
        }
    }
    ctx->pc = 0x16613Cu;
label_16613c:
    // 0x16613c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_166140:
    // 0x166140: 0xc059ad8  jal         func_166B60
label_166144:
    if (ctx->pc == 0x166144u) {
        ctx->pc = 0x166148u;
        goto label_166148;
    }
    ctx->pc = 0x166140u;
    SET_GPR_U32(ctx, 31, 0x166148u);
    ctx->pc = 0x166B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166B60u, 0x166140u, 0x166148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166148u;
label_166148:
    // 0x166148: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x166148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16614c:
    // 0x16614c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16614cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166150:
    // 0x166150: 0xac530050  sw          $s3, 0x50($v0)
    ctx->pc = 0x166150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 19));
label_166154:
    // 0x166154: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166158:
    // 0x166158: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16615c:
    // 0x16615c: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x16615cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_166160:
    // 0x166160: 0xc059a10  jal         func_166840
label_166164:
    if (ctx->pc == 0x166164u) {
        ctx->pc = 0x166168u;
        goto label_166168;
    }
    ctx->pc = 0x166160u;
    SET_GPR_U32(ctx, 31, 0x166168u);
    ctx->pc = 0x166840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166840u, 0x166160u, 0x166168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166168u;
label_166168:
    // 0x166168: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16616c:
    // 0x16616c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166170:
    // 0x166170: 0x0  nop
    ctx->pc = 0x166170u;
    // NOP
label_166174:
    // 0x166174: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x166174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_166178:
    // 0x166178: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16617c:
    // 0x16617c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16617cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166180:
    // 0x166180: 0x0  nop
    ctx->pc = 0x166180u;
    // NOP
label_166184:
    // 0x166184: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x166184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_166188:
    // 0x166188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x166188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16618c:
    // 0x16618c: 0xaf82bab4  sw          $v0, -0x454C($gp)
    ctx->pc = 0x16618cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 2));
label_166190:
    // 0x166190: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x166190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_166194:
    // 0x166194: 0xdf828e80  ld          $v0, -0x7180($gp)
    ctx->pc = 0x166194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_166198:
    // 0x166198: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x166198u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_16619c:
    // 0x16619c: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x16619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1661a0:
    // 0x1661a0: 0xdf828e88  ld          $v0, -0x7178($gp)
    ctx->pc = 0x1661a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938248)));
label_1661a4:
    // 0x1661a4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1661a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_1661a8:
    // 0x1661a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1661a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1661ac:
    // 0x1661ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1661acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1661b0:
    // 0x1661b0: 0x10000093  b           . + 4 + (0x93 << 2)
label_1661b4:
    if (ctx->pc == 0x1661B4u) {
        ctx->pc = 0x1661B8u;
        goto label_1661b8;
    }
    ctx->pc = 0x1661B0u;
    {
        const bool branch_taken_0x1661b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661b0) {
            ctx->pc = 0x166400u;
            goto label_166400;
        }
    }
    ctx->pc = 0x1661B8u;
label_1661b8:
    // 0x1661b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1661b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1661bc:
    // 0x1661bc: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x1661bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1661c0:
    // 0x1661c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1661c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1661c4:
    // 0x1661c4: 0xc0599f8  jal         func_1667E0
label_1661c8:
    if (ctx->pc == 0x1661C8u) {
        ctx->pc = 0x1661CCu;
        goto label_1661cc;
    }
    ctx->pc = 0x1661C4u;
    SET_GPR_U32(ctx, 31, 0x1661CCu);
    ctx->pc = 0x1667E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667E0u, 0x1661C4u, 0x1661CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661CCu;
label_1661cc:
    // 0x1661cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1661ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1661d0:
    // 0x1661d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1661d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1661d4:
    // 0x1661d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1661d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1661d8:
    // 0x1661d8: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0
    ctx->pc = 0x1661d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
label_1661dc:
    // 0x1661dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1661dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1661e0:
    // 0x1661e0: 0xc0bc3e2  jal         func_2F0F88
label_1661e4:
    if (ctx->pc == 0x1661E4u) {
        ctx->pc = 0x1661E8u;
        goto label_1661e8;
    }
    ctx->pc = 0x1661E0u;
    SET_GPR_U32(ctx, 31, 0x1661E8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1661E0u, 0x1661E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661E8u;
label_1661e8:
    // 0x1661e8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1661e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1661ec:
    // 0x1661ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1661ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1661f0:
    // 0x1661f0: 0xc05621c  jal         func_158870
label_1661f4:
    if (ctx->pc == 0x1661F4u) {
        ctx->pc = 0x1661F8u;
        goto label_1661f8;
    }
    ctx->pc = 0x1661F0u;
    SET_GPR_U32(ctx, 31, 0x1661F8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1661F0u, 0x1661F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1661F8u;
label_1661f8:
    // 0x1661f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1661f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1661fc:
    // 0x1661fc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1661fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_166200:
    // 0x166200: 0xc041b40  jal         func_106D00
label_166204:
    if (ctx->pc == 0x166204u) {
        ctx->pc = 0x166208u;
        goto label_166208;
    }
    ctx->pc = 0x166200u;
    SET_GPR_U32(ctx, 31, 0x166208u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x166200u, 0x166208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166208u;
label_166208:
    // 0x166208: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x166208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_16620c:
    // 0x16620c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x16620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_166210:
    // 0x166210: 0x24633e10  addiu       $v1, $v1, 0x3E10
    ctx->pc = 0x166210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15888));
label_166214:
    // 0x166214: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x166214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_166218:
    // 0x166218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16621c:
    // 0x16621c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16621cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_166220:
    // 0x166220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166224:
    // 0x166224: 0xc047970  jal         func_11E5C0
label_166228:
    if (ctx->pc == 0x166228u) {
        ctx->pc = 0x16622Cu;
        goto label_16622c;
    }
    ctx->pc = 0x166224u;
    SET_GPR_U32(ctx, 31, 0x16622Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x166224u, 0x16622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16622Cu;
label_16622c:
    // 0x16622c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16622cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_166230:
    // 0x166230: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x166230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_166234:
    // 0x166234: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x166234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_166238:
    // 0x166238: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_16623c:
    if (ctx->pc == 0x16623Cu) {
        ctx->pc = 0x166240u;
        goto label_166240;
    }
    ctx->pc = 0x166238u;
    {
        const bool branch_taken_0x166238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166238) {
            ctx->pc = 0x166244u;
            goto label_166244;
        }
    }
    ctx->pc = 0x166240u;
label_166240:
    // 0x166240: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_166244:
    // 0x166244: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x166244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166248:
    // 0x166248: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_16624c:
    if (ctx->pc == 0x16624Cu) {
        ctx->pc = 0x166250u;
        goto label_166250;
    }
    ctx->pc = 0x166248u;
    {
        const bool branch_taken_0x166248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166248) {
            ctx->pc = 0x166298u;
            goto label_166298;
        }
    }
    ctx->pc = 0x166250u;
label_166250:
    // 0x166250: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166254:
    // 0x166254: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x166254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166258:
    // 0x166258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x166258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16625c:
    // 0x16625c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16625cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_166260:
    // 0x166260: 0xc08c434  jal         func_2310D0
label_166264:
    if (ctx->pc == 0x166264u) {
        ctx->pc = 0x166268u;
        goto label_166268;
    }
    ctx->pc = 0x166260u;
    SET_GPR_U32(ctx, 31, 0x166268u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x166260u, 0x166268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166268u;
label_166268:
    // 0x166268: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x166268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_16626c:
    // 0x16626c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x16626cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166270:
    // 0x166270: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x166270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_166274:
    // 0x166274: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x166274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_166278:
    // 0x166278: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x166278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16627c:
    // 0x16627c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16627cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_166280:
    // 0x166280: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x166280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_166284:
    // 0x166284: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x166284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166288:
    // 0x166288: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16628c:
    // 0x16628c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16628cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166290:
    // 0x166290: 0xc08b9fc  jal         func_22E7F0
label_166294:
    if (ctx->pc == 0x166294u) {
        ctx->pc = 0x166298u;
        goto label_166298;
    }
    ctx->pc = 0x166290u;
    SET_GPR_U32(ctx, 31, 0x166298u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x166290u, 0x166298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166298u;
label_166298:
    // 0x166298: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x166298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_16629c:
    // 0x16629c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16629cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1662a0:
    // 0x1662a0: 0x24a53ee0  addiu       $a1, $a1, 0x3EE0
    ctx->pc = 0x1662a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16096));
label_1662a4:
    // 0x1662a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1662a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1662a8:
    // 0x1662a8: 0xc0bc3e2  jal         func_2F0F88
label_1662ac:
    if (ctx->pc == 0x1662ACu) {
        ctx->pc = 0x1662B0u;
        goto label_1662b0;
    }
    ctx->pc = 0x1662A8u;
    SET_GPR_U32(ctx, 31, 0x1662B0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1662A8u, 0x1662B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662B0u;
label_1662b0:
    // 0x1662b0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1662b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1662b4:
    // 0x1662b4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1662b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1662b8:
    // 0x1662b8: 0xc05621c  jal         func_158870
label_1662bc:
    if (ctx->pc == 0x1662BCu) {
        ctx->pc = 0x1662C0u;
        goto label_1662c0;
    }
    ctx->pc = 0x1662B8u;
    SET_GPR_U32(ctx, 31, 0x1662C0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1662B8u, 0x1662C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1662C0u;
label_1662c0:
    // 0x1662c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1662c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1662c4:
    // 0x1662c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1662c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1662c8:
    // 0x1662c8: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_1662cc:
    if (ctx->pc == 0x1662CCu) {
        ctx->pc = 0x1662D0u;
        goto label_1662d0;
    }
    ctx->pc = 0x1662C8u;
    {
        const bool branch_taken_0x1662c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1662c8) {
            ctx->pc = 0x1663ECu;
            goto label_1663ec;
        }
    }
    ctx->pc = 0x1662D0u;
label_1662d0:
    // 0x1662d0: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1662d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_1662d4:
    // 0x1662d4: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_1662d8:
    if (ctx->pc == 0x1662D8u) {
        ctx->pc = 0x1662DCu;
        goto label_1662dc;
    }
    ctx->pc = 0x1662D4u;
    {
        const bool branch_taken_0x1662d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1662d4) {
            ctx->pc = 0x166374u;
            goto label_166374;
        }
    }
    ctx->pc = 0x1662DCu;
label_1662dc:
    // 0x1662dc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1662dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1662e0:
    // 0x1662e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1662e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1662e4:
    // 0x1662e4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1662e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1662e8:
    // 0x1662e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1662e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1662ec:
    // 0x1662ec: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1662ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1662f0:
    // 0x1662f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1662f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1662f4:
    // 0x1662f4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1662f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1662f8:
    // 0x1662f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1662f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1662fc:
    // 0x1662fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1662fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166300:
    // 0x166300: 0xc08c544  jal         func_231510
label_166304:
    if (ctx->pc == 0x166304u) {
        ctx->pc = 0x166308u;
        goto label_166308;
    }
    ctx->pc = 0x166300u;
    SET_GPR_U32(ctx, 31, 0x166308u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x166300u, 0x166308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166308u;
label_166308:
    // 0x166308: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x166308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_16630c:
    // 0x16630c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x16630cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_166310:
    // 0x166310: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_166314:
    // 0x166314: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x166314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_166318:
    // 0x166318: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x166318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16631c:
    // 0x16631c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166320:
    // 0x166320: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x166320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_166324:
    // 0x166324: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x166324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_166328:
    // 0x166328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16632c:
    // 0x16632c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16632cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166330:
    // 0x166330: 0xc08b9fc  jal         func_22E7F0
label_166334:
    if (ctx->pc == 0x166334u) {
        ctx->pc = 0x166338u;
        goto label_166338;
    }
    ctx->pc = 0x166330u;
    SET_GPR_U32(ctx, 31, 0x166338u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x166330u, 0x166338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166338u;
label_166338:
    // 0x166338: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x166338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_16633c:
    // 0x16633c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x16633cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_166340:
    // 0x166340: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x166340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_166344:
    // 0x166344: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166348:
    // 0x166348: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x166348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16634c:
    // 0x16634c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x16634cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_166350:
    // 0x166350: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x166350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166354:
    // 0x166354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x166354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166358:
    // 0x166358: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x166358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_16635c:
    // 0x16635c: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x16635cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_166360:
    // 0x166360: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x166360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166364:
    // 0x166364: 0xc08bbf4  jal         func_22EFD0
label_166368:
    if (ctx->pc == 0x166368u) {
        ctx->pc = 0x16636Cu;
        goto label_16636c;
    }
    ctx->pc = 0x166364u;
    SET_GPR_U32(ctx, 31, 0x16636Cu);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x166364u, 0x16636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16636Cu;
label_16636c:
    // 0x16636c: 0x1000000d  b           . + 4 + (0xD << 2)
label_166370:
    if (ctx->pc == 0x166370u) {
        ctx->pc = 0x166374u;
        goto label_166374;
    }
    ctx->pc = 0x16636Cu;
    {
        const bool branch_taken_0x16636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16636c) {
            ctx->pc = 0x1663A4u;
            goto label_1663a4;
        }
    }
    ctx->pc = 0x166374u;
label_166374:
    // 0x166374: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x166374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166378:
    // 0x166378: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x166378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_16637c:
    // 0x16637c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16637cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_166380:
    // 0x166380: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x166380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_166384:
    // 0x166384: 0x24423e10  addiu       $v0, $v0, 0x3E10
    ctx->pc = 0x166384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15888));
label_166388:
    // 0x166388: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x166388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16638c:
    // 0x16638c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16638cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_166390:
    // 0x166390: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x166390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_166394:
    // 0x166394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x166394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166398:
    // 0x166398: 0xc08c800  jal         func_232000
label_16639c:
    if (ctx->pc == 0x16639Cu) {
        ctx->pc = 0x1663A0u;
        goto label_1663a0;
    }
    ctx->pc = 0x166398u;
    SET_GPR_U32(ctx, 31, 0x1663A0u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x166398u, 0x1663A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663A0u;
label_1663a0:
    // 0x1663a0: 0xaf91bab4  sw          $s1, -0x454C($gp)
    ctx->pc = 0x1663a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949556), GPR_U32(ctx, 17));
label_1663a4:
    // 0x1663a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1663a8:
    // 0x1663a8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1663a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1663ac:
    // 0x1663ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1663acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1663b0:
    // 0x1663b0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1663b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1663b4:
    // 0x1663b4: 0xc08c434  jal         func_2310D0
label_1663b8:
    if (ctx->pc == 0x1663B8u) {
        ctx->pc = 0x1663BCu;
        goto label_1663bc;
    }
    ctx->pc = 0x1663B4u;
    SET_GPR_U32(ctx, 31, 0x1663BCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1663B4u, 0x1663BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663BCu;
label_1663bc:
    // 0x1663bc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1663bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1663c0:
    // 0x1663c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1663c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1663c4:
    // 0x1663c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1663c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1663c8:
    // 0x1663c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1663c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1663cc:
    // 0x1663cc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1663ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1663d0:
    // 0x1663d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1663d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1663d4:
    // 0x1663d4: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x1663d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1663d8:
    // 0x1663d8: 0xc7ac00cc  lwc1        $f12, 0xCC($sp)
    ctx->pc = 0x1663d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1663dc:
    // 0x1663dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1663dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1663e0:
    // 0x1663e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1663e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1663e4:
    // 0x1663e4: 0xc08b9fc  jal         func_22E7F0
label_1663e8:
    if (ctx->pc == 0x1663E8u) {
        ctx->pc = 0x1663ECu;
        goto label_1663ec;
    }
    ctx->pc = 0x1663E4u;
    SET_GPR_U32(ctx, 31, 0x1663ECu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1663E4u, 0x1663ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663ECu;
label_1663ec:
    // 0x1663ec: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x1663ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1663f0:
    // 0x1663f0: 0xc7808428  lwc1        $f0, -0x7BD8($gp)
    ctx->pc = 0x1663f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1663f4:
    // 0x1663f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1663f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1663f8:
    // 0x1663f8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1663f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1663fc:
    // 0x1663fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1663fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_166400:
    // 0x166400: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166404:
    // 0x166404: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x166404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_166408:
    // 0x166408: 0xc0599e8  jal         func_1667A0
label_16640c:
    if (ctx->pc == 0x16640Cu) {
        ctx->pc = 0x166410u;
        goto label_166410;
    }
    ctx->pc = 0x166408u;
    SET_GPR_U32(ctx, 31, 0x166410u);
    ctx->pc = 0x1667A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667A0u, 0x166408u, 0x166410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166410u;
label_166410:
    // 0x166410: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x166410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_166414:
    // 0x166414: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
label_166418:
    if (ctx->pc == 0x166418u) {
        ctx->pc = 0x16641Cu;
        goto label_16641c;
    }
    ctx->pc = 0x166414u;
    {
        const bool branch_taken_0x166414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166414) {
            ctx->pc = 0x1661B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1661b8;
        }
    }
    ctx->pc = 0x16641Cu;
label_16641c:
    // 0x16641c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x16641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166420:
    // 0x166420: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x166420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_166424:
    // 0x166424: 0x24a53ef0  addiu       $a1, $a1, 0x3EF0
    ctx->pc = 0x166424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16112));
label_166428:
    // 0x166428: 0xc0552e4  jal         func_154B90
label_16642c:
    if (ctx->pc == 0x16642Cu) {
        ctx->pc = 0x166430u;
        goto label_166430;
    }
    ctx->pc = 0x166428u;
    SET_GPR_U32(ctx, 31, 0x166430u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x166428u, 0x166430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166430u;
label_166430:
    // 0x166430: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x166430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166434:
    // 0x166434: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x166434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_166438:
    // 0x166438: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x166438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_16643c:
    // 0x16643c: 0xc059c8c  jal         func_167230
label_166440:
    if (ctx->pc == 0x166440u) {
        ctx->pc = 0x166444u;
        goto label_166444;
    }
    ctx->pc = 0x16643Cu;
    SET_GPR_U32(ctx, 31, 0x166444u);
    ctx->pc = 0x167230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167230u, 0x16643Cu, 0x166444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166444u;
label_166444:
    // 0x166444: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166448:
    // 0x166448: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_16644c:
    // 0x16644c: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x16644cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_166450:
    // 0x166450: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x166450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_166454:
    // 0x166454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x166454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_166458:
    // 0x166458: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x166458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_16645c:
    // 0x16645c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16645cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_166460:
    // 0x166460: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x166460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166464:
    // 0x166464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166468:
    // 0x166468: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x166468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16646c:
    // 0x16646c: 0xc08c544  jal         func_231510
label_166470:
    if (ctx->pc == 0x166470u) {
        ctx->pc = 0x166474u;
        goto label_166474;
    }
    ctx->pc = 0x16646Cu;
    SET_GPR_U32(ctx, 31, 0x166474u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x16646Cu, 0x166474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166474u;
label_166474:
    // 0x166474: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x166474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_166478:
    // 0x166478: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x166478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_16647c:
    // 0x16647c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16647cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166480:
    // 0x166480: 0x0  nop
    ctx->pc = 0x166480u;
    // NOP
label_166484:
    // 0x166484: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x166484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_166488:
    // 0x166488: 0xc7828428  lwc1        $f2, -0x7BD8($gp)
    ctx->pc = 0x166488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16648c:
    // 0x16648c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_166490:
    // 0x166490: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x166490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166494:
    // 0x166494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x166494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166498:
    // 0x166498: 0x0  nop
    ctx->pc = 0x166498u;
    // NOP
label_16649c:
    // 0x16649c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x16649cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1664a0:
    // 0x1664a0: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x1664a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1664a4:
    // 0x1664a4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1664a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1664a8:
    // 0x1664a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1664a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1664ac:
    // 0x1664ac: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1664acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1664b0:
    // 0x1664b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1664b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1664b4:
    // 0x1664b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1664b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1664b8:
    // 0x1664b8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1664b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1664bc:
    // 0x1664bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1664bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1664c0:
    // 0x1664c0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1664c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1664c4:
    // 0x1664c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1664c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1664c8:
    // 0x1664c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1664c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1664cc:
    // 0x1664cc: 0xc08b9fc  jal         func_22E7F0
label_1664d0:
    if (ctx->pc == 0x1664D0u) {
        ctx->pc = 0x1664D4u;
        goto label_1664d4;
    }
    ctx->pc = 0x1664CCu;
    SET_GPR_U32(ctx, 31, 0x1664D4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1664CCu, 0x1664D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664D4u;
label_1664d4:
    // 0x1664d4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1664d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1664d8:
    // 0x1664d8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1664d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1664dc:
    // 0x1664dc: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1664dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1664e0:
    // 0x1664e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1664e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1664e4:
    // 0x1664e4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1664e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1664e8:
    // 0x1664e8: 0xc08c434  jal         func_2310D0
label_1664ec:
    if (ctx->pc == 0x1664ECu) {
        ctx->pc = 0x1664F0u;
        goto label_1664f0;
    }
    ctx->pc = 0x1664E8u;
    SET_GPR_U32(ctx, 31, 0x1664F0u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1664E8u, 0x1664F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664F0u;
label_1664f0:
    // 0x1664f0: 0x8f82bab4  lw          $v0, -0x454C($gp)
    ctx->pc = 0x1664f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949556)));
label_1664f4:
    // 0x1664f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1664f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1664f8:
    // 0x1664f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1664f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1664fc:
    // 0x1664fc: 0x0  nop
    ctx->pc = 0x1664fcu;
    // NOP
label_166500:
    // 0x166500: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x166500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_166504:
    // 0x166504: 0xc7828428  lwc1        $f2, -0x7BD8($gp)
    ctx->pc = 0x166504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_166508:
    // 0x166508: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x166508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16650c:
    // 0x16650c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16650cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_166510:
    // 0x166510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x166510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_166514:
    // 0x166514: 0x0  nop
    ctx->pc = 0x166514u;
    // NOP
label_166518:
    // 0x166518: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x166518u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_16651c:
    // 0x16651c: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x16651cu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_166520:
    // 0x166520: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x166520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166524:
    // 0x166524: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166528:
    // 0x166528: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x166528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_16652c:
    // 0x16652c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_166530:
    // 0x166530: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x166530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_166534:
    // 0x166534: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x166534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166538:
    // 0x166538: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x166538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16653c:
    // 0x16653c: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x16653cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_166540:
    // 0x166540: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x166540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166544:
    // 0x166544: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x166544u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166548:
    // 0x166548: 0xc08b9fc  jal         func_22E7F0
label_16654c:
    if (ctx->pc == 0x16654Cu) {
        ctx->pc = 0x166550u;
        goto label_166550;
    }
    ctx->pc = 0x166548u;
    SET_GPR_U32(ctx, 31, 0x166550u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x166548u, 0x166550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166550u;
label_166550:
    // 0x166550: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x166550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_166554:
    // 0x166554: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166558:
    // 0x166558: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x166558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_16655c:
    // 0x16655c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x16655cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166560:
    // 0x166560: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x166560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_166564:
    // 0x166564: 0x24a53f00  addiu       $a1, $a1, 0x3F00
    ctx->pc = 0x166564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16128));
label_166568:
    // 0x166568: 0xc0552e4  jal         func_154B90
label_16656c:
    if (ctx->pc == 0x16656Cu) {
        ctx->pc = 0x166570u;
        goto label_166570;
    }
    ctx->pc = 0x166568u;
    SET_GPR_U32(ctx, 31, 0x166570u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x166568u, 0x166570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166570u;
label_166570:
    // 0x166570: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x166570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166574:
    // 0x166574: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x166574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_166578:
    // 0x166578: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x166578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_16657c:
    // 0x16657c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16657cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_166580:
    // 0x166580: 0x24a53f10  addiu       $a1, $a1, 0x3F10
    ctx->pc = 0x166580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16144));
label_166584:
    // 0x166584: 0xc0552e4  jal         func_154B90
label_166588:
    if (ctx->pc == 0x166588u) {
        ctx->pc = 0x16658Cu;
        goto label_16658c;
    }
    ctx->pc = 0x166584u;
    SET_GPR_U32(ctx, 31, 0x16658Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x166584u, 0x16658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16658Cu;
label_16658c:
    // 0x16658c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x16658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166590:
    // 0x166590: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x166590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_166594:
    // 0x166594: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x166594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166598:
    // 0x166598: 0xc059cb4  jal         func_1672D0
label_16659c:
    if (ctx->pc == 0x16659Cu) {
        ctx->pc = 0x1665A0u;
        goto label_1665a0;
    }
    ctx->pc = 0x166598u;
    SET_GPR_U32(ctx, 31, 0x1665A0u);
    ctx->pc = 0x1672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672D0u, 0x166598u, 0x1665A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665A0u;
label_1665a0:
    // 0x1665a0: 0x16a00073  bnez        $s5, . + 4 + (0x73 << 2)
label_1665a4:
    if (ctx->pc == 0x1665A4u) {
        ctx->pc = 0x1665A8u;
        goto label_1665a8;
    }
    ctx->pc = 0x1665A0u;
    {
        const bool branch_taken_0x1665a0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1665a0) {
            ctx->pc = 0x166770u;
            goto label_166770;
        }
    }
    ctx->pc = 0x1665A8u;
label_1665a8:
    // 0x1665a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1665ac:
    // 0x1665ac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1665acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1665b0:
    // 0x1665b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1665b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1665b4:
    // 0x1665b4: 0xc08c910  jal         func_232440
label_1665b8:
    if (ctx->pc == 0x1665B8u) {
        ctx->pc = 0x1665BCu;
        goto label_1665bc;
    }
    ctx->pc = 0x1665B4u;
    SET_GPR_U32(ctx, 31, 0x1665BCu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x1665B4u, 0x1665BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665BCu;
label_1665bc:
    // 0x1665bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1665bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1665c0:
    // 0x1665c0: 0x10000043  b           . + 4 + (0x43 << 2)
label_1665c4:
    if (ctx->pc == 0x1665C4u) {
        ctx->pc = 0x1665C8u;
        goto label_1665c8;
    }
    ctx->pc = 0x1665C0u;
    {
        const bool branch_taken_0x1665c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1665c0) {
            ctx->pc = 0x1666D0u;
            goto label_1666d0;
        }
    }
    ctx->pc = 0x1665C8u;
label_1665c8:
    // 0x1665c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1665c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1665cc:
    // 0x1665cc: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x1665ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1665d0:
    // 0x1665d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1665d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1665d4:
    // 0x1665d4: 0xc0599f8  jal         func_1667E0
label_1665d8:
    if (ctx->pc == 0x1665D8u) {
        ctx->pc = 0x1665DCu;
        goto label_1665dc;
    }
    ctx->pc = 0x1665D4u;
    SET_GPR_U32(ctx, 31, 0x1665DCu);
    ctx->pc = 0x1667E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667E0u, 0x1665D4u, 0x1665DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1665DCu;
label_1665dc:
    // 0x1665dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1665dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1665e0:
    // 0x1665e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1665e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1665e4:
    // 0x1665e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1665e8:
    if (ctx->pc == 0x1665E8u) {
        ctx->pc = 0x1665ECu;
        goto label_1665ec;
    }
    ctx->pc = 0x1665E4u;
    {
        const bool branch_taken_0x1665e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1665e4) {
            ctx->pc = 0x166604u;
            goto label_166604;
        }
    }
    ctx->pc = 0x1665ECu;
label_1665ec:
    // 0x1665ec: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1665ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1665f0:
    // 0x1665f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1665f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1665f4:
    // 0x1665f4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1665f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1665f8:
    // 0x1665f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1665f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1665fc:
    // 0x1665fc: 0xc08c8dc  jal         func_232370
label_166600:
    if (ctx->pc == 0x166600u) {
        ctx->pc = 0x166604u;
        goto label_166604;
    }
    ctx->pc = 0x1665FCu;
    SET_GPR_U32(ctx, 31, 0x166604u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1665FCu, 0x166604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166604u;
label_166604:
    // 0x166604: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x166604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_166608:
    // 0x166608: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_16660c:
    if (ctx->pc == 0x16660Cu) {
        ctx->pc = 0x166610u;
        goto label_166610;
    }
    ctx->pc = 0x166608u;
    {
        const bool branch_taken_0x166608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166608) {
            ctx->pc = 0x166628u;
            goto label_166628;
        }
    }
    ctx->pc = 0x166610u;
label_166610:
    // 0x166610: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166614:
    // 0x166614: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x166614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_166618:
    // 0x166618: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x166618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_16661c:
    // 0x16661c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16661cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166620:
    // 0x166620: 0xc08c8dc  jal         func_232370
label_166624:
    if (ctx->pc == 0x166624u) {
        ctx->pc = 0x166628u;
        goto label_166628;
    }
    ctx->pc = 0x166620u;
    SET_GPR_U32(ctx, 31, 0x166628u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x166620u, 0x166628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166628u;
label_166628:
    // 0x166628: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x166628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_16662c:
    // 0x16662c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166630:
    // 0x166630: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x166630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_166634:
    // 0x166634: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x166634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_166638:
    // 0x166638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16663c:
    // 0x16663c: 0xc08c8dc  jal         func_232370
label_166640:
    if (ctx->pc == 0x166640u) {
        ctx->pc = 0x166644u;
        goto label_166644;
    }
    ctx->pc = 0x16663Cu;
    SET_GPR_U32(ctx, 31, 0x166644u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16663Cu, 0x166644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166644u;
label_166644:
    // 0x166644: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x166644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166648:
    // 0x166648: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x166648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16664c:
    // 0x16664c: 0x24a53f20  addiu       $a1, $a1, 0x3F20
    ctx->pc = 0x16664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16160));
label_166650:
    // 0x166650: 0xc0552e4  jal         func_154B90
label_166654:
    if (ctx->pc == 0x166654u) {
        ctx->pc = 0x166658u;
        goto label_166658;
    }
    ctx->pc = 0x166650u;
    SET_GPR_U32(ctx, 31, 0x166658u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x166650u, 0x166658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166658u;
label_166658:
    // 0x166658: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x166658u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16665c:
    // 0x16665c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x16665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166660:
    // 0x166660: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x166660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_166664:
    // 0x166664: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x166664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_166668:
    // 0x166668: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x166668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16666c:
    // 0x16666c: 0xc08c6c8  jal         func_231B20
label_166670:
    if (ctx->pc == 0x166670u) {
        ctx->pc = 0x166674u;
        goto label_166674;
    }
    ctx->pc = 0x16666Cu;
    SET_GPR_U32(ctx, 31, 0x166674u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x16666Cu, 0x166674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166674u;
label_166674:
    // 0x166674: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x166674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_166678:
    // 0x166678: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_16667c:
    // 0x16667c: 0x24a53f38  addiu       $a1, $a1, 0x3F38
    ctx->pc = 0x16667cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16184));
label_166680:
    // 0x166680: 0xc08e57c  jal         func_2395F0
label_166684:
    if (ctx->pc == 0x166684u) {
        ctx->pc = 0x166688u;
        goto label_166688;
    }
    ctx->pc = 0x166680u;
    SET_GPR_U32(ctx, 31, 0x166688u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x166680u, 0x166688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166688u;
label_166688:
    // 0x166688: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x166688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16668c:
    // 0x16668c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166690:
    // 0x166690: 0xc0406d0  jal         func_101B40
label_166694:
    if (ctx->pc == 0x166694u) {
        ctx->pc = 0x166698u;
        goto label_166698;
    }
    ctx->pc = 0x166690u;
    SET_GPR_U32(ctx, 31, 0x166698u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x166690u, 0x166698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166698u;
label_166698:
    // 0x166698: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x166698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16669c:
    // 0x16669c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16669cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1666a0:
    // 0x1666a0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1666a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1666a4:
    // 0x1666a4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1666a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1666a8:
    // 0x1666a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1666a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1666ac:
    // 0x1666ac: 0x24a53f48  addiu       $a1, $a1, 0x3F48
    ctx->pc = 0x1666acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16200));
label_1666b0:
    // 0x1666b0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1666b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1666b4:
    // 0x1666b4: 0xc055fb0  jal         func_157EC0
label_1666b8:
    if (ctx->pc == 0x1666B8u) {
        ctx->pc = 0x1666BCu;
        goto label_1666bc;
    }
    ctx->pc = 0x1666B4u;
    SET_GPR_U32(ctx, 31, 0x1666BCu);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x1666B4u, 0x1666BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666BCu;
label_1666bc:
    // 0x1666bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1666bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1666c0:
    // 0x1666c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1666c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1666c4:
    // 0x1666c4: 0xc0406a0  jal         func_101A80
label_1666c8:
    if (ctx->pc == 0x1666C8u) {
        ctx->pc = 0x1666CCu;
        goto label_1666cc;
    }
    ctx->pc = 0x1666C4u;
    SET_GPR_U32(ctx, 31, 0x1666CCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1666C4u, 0x1666CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666CCu;
label_1666cc:
    // 0x1666cc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1666ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1666d0:
    // 0x1666d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1666d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1666d4:
    // 0x1666d4: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x1666d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1666d8:
    // 0x1666d8: 0xc0599e8  jal         func_1667A0
label_1666dc:
    if (ctx->pc == 0x1666DCu) {
        ctx->pc = 0x1666E0u;
        goto label_1666e0;
    }
    ctx->pc = 0x1666D8u;
    SET_GPR_U32(ctx, 31, 0x1666E0u);
    ctx->pc = 0x1667A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1667A0u, 0x1666D8u, 0x1666E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1666E0u;
label_1666e0:
    // 0x1666e0: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x1666e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1666e4:
    // 0x1666e4: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_1666e8:
    if (ctx->pc == 0x1666E8u) {
        ctx->pc = 0x1666ECu;
        goto label_1666ec;
    }
    ctx->pc = 0x1666E4u;
    {
        const bool branch_taken_0x1666e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1666e4) {
            ctx->pc = 0x1665C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1665c8;
        }
    }
    ctx->pc = 0x1666ECu;
label_1666ec:
    // 0x1666ec: 0x10000020  b           . + 4 + (0x20 << 2)
label_1666f0:
    if (ctx->pc == 0x1666F0u) {
        ctx->pc = 0x1666F4u;
        goto label_1666f4;
    }
    ctx->pc = 0x1666ECu;
    {
        const bool branch_taken_0x1666ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666ec) {
            ctx->pc = 0x166770u;
            goto label_166770;
        }
    }
    ctx->pc = 0x1666F4u;
label_1666f4:
    // 0x1666f4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1666f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1666f8:
    // 0x1666f8: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1666f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_1666fc:
    // 0x1666fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_166700:
    if (ctx->pc == 0x166700u) {
        ctx->pc = 0x166704u;
        goto label_166704;
    }
    ctx->pc = 0x1666FCu;
    {
        const bool branch_taken_0x1666fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1666fc) {
            ctx->pc = 0x16672Cu;
            goto label_16672c;
        }
    }
    ctx->pc = 0x166704u;
label_166704:
    // 0x166704: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166708:
    // 0x166708: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x166708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16670c:
    // 0x16670c: 0xc059768  jal         func_165DA0
label_166710:
    if (ctx->pc == 0x166710u) {
        ctx->pc = 0x166714u;
        goto label_166714;
    }
    ctx->pc = 0x16670Cu;
    SET_GPR_U32(ctx, 31, 0x166714u);
    ctx->pc = 0x165DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165DA0u, 0x16670Cu, 0x166714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166714u;
label_166714:
    // 0x166714: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166718:
    // 0x166718: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x166718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_16671c:
    // 0x16671c: 0xc119c5c  jal         func_467170
label_166720:
    if (ctx->pc == 0x166720u) {
        ctx->pc = 0x166724u;
        goto label_166724;
    }
    ctx->pc = 0x16671Cu;
    SET_GPR_U32(ctx, 31, 0x166724u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x16671Cu, 0x166724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166724u;
label_166724:
    // 0x166724: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x166724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_166728:
    // 0x166728: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x166728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_16672c:
    // 0x16672c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x16672cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_166730:
    // 0x166730: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x166730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_166734:
    // 0x166734: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x166734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_166738:
    // 0x166738: 0x27828e90  addiu       $v0, $gp, -0x7170
    ctx->pc = 0x166738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938256));
label_16673c:
    // 0x16673c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16673cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166740:
    // 0x166740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166744:
    // 0x166744: 0xc047314  jal         func_11CC50
label_166748:
    if (ctx->pc == 0x166748u) {
        ctx->pc = 0x16674Cu;
        goto label_16674c;
    }
    ctx->pc = 0x166744u;
    SET_GPR_U32(ctx, 31, 0x16674Cu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x166744u, 0x16674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16674Cu;
label_16674c:
    // 0x16674c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166750:
    // 0x166750: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x166750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_166754:
    // 0x166754: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x166754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_166758:
    // 0x166758: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x166758u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16675c:
    // 0x16675c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x16675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_166760:
    // 0x166760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166764:
    // 0x166764: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x166764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_166768:
    // 0x166768: 0xc041bc4  jal         func_106F10
label_16676c:
    if (ctx->pc == 0x16676Cu) {
        ctx->pc = 0x166770u;
        goto label_166770;
    }
    ctx->pc = 0x166768u;
    SET_GPR_U32(ctx, 31, 0x166770u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x166768u, 0x166770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166770u;
label_166770:
    // 0x166770: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x166770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_166774:
    // 0x166774: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x166774u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_166778:
    // 0x166778: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x166778u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16677c:
    // 0x16677c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16677cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_166780:
    // 0x166780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_166784:
    // 0x166784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_166788:
    // 0x166788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16678c:
    // 0x16678c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16678cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_166790:
    // 0x166790: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x166790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_166794:
    // 0x166794: 0x3e00008  jr          $ra
label_166798:
    if (ctx->pc == 0x166798u) {
        ctx->pc = 0x16679Cu;
        goto label_16679c;
    }
    ctx->pc = 0x166794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16679Cu;
label_16679c:
    // 0x16679c: 0x0  nop
    ctx->pc = 0x16679cu;
    // NOP
    ctx->pc = 0x1667a0u;
}
