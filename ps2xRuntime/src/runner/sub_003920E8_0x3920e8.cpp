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

// Function: sub_003920E8
// Address: 0x3920e8 - 0x392d08
void sub_003920E8_0x3920e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003920E8_0x3920e8");
#endif

    switch (ctx->pc) {
        case 0x3920e8u: goto label_3920e8;
        case 0x3920ecu: goto label_3920ec;
        case 0x3920f0u: goto label_3920f0;
        case 0x3920f4u: goto label_3920f4;
        case 0x3920f8u: goto label_3920f8;
        case 0x3920fcu: goto label_3920fc;
        case 0x392100u: goto label_392100;
        case 0x392104u: goto label_392104;
        case 0x392108u: goto label_392108;
        case 0x39210cu: goto label_39210c;
        case 0x392110u: goto label_392110;
        case 0x392114u: goto label_392114;
        case 0x392118u: goto label_392118;
        case 0x39211cu: goto label_39211c;
        case 0x392120u: goto label_392120;
        case 0x392124u: goto label_392124;
        case 0x392128u: goto label_392128;
        case 0x39212cu: goto label_39212c;
        case 0x392130u: goto label_392130;
        case 0x392134u: goto label_392134;
        case 0x392138u: goto label_392138;
        case 0x39213cu: goto label_39213c;
        case 0x392140u: goto label_392140;
        case 0x392144u: goto label_392144;
        case 0x392148u: goto label_392148;
        case 0x39214cu: goto label_39214c;
        case 0x392150u: goto label_392150;
        case 0x392154u: goto label_392154;
        case 0x392158u: goto label_392158;
        case 0x39215cu: goto label_39215c;
        case 0x392160u: goto label_392160;
        case 0x392164u: goto label_392164;
        case 0x392168u: goto label_392168;
        case 0x39216cu: goto label_39216c;
        case 0x392170u: goto label_392170;
        case 0x392174u: goto label_392174;
        case 0x392178u: goto label_392178;
        case 0x39217cu: goto label_39217c;
        case 0x392180u: goto label_392180;
        case 0x392184u: goto label_392184;
        case 0x392188u: goto label_392188;
        case 0x39218cu: goto label_39218c;
        case 0x392190u: goto label_392190;
        case 0x392194u: goto label_392194;
        case 0x392198u: goto label_392198;
        case 0x39219cu: goto label_39219c;
        case 0x3921a0u: goto label_3921a0;
        case 0x3921a4u: goto label_3921a4;
        case 0x3921a8u: goto label_3921a8;
        case 0x3921acu: goto label_3921ac;
        case 0x3921b0u: goto label_3921b0;
        case 0x3921b4u: goto label_3921b4;
        case 0x3921b8u: goto label_3921b8;
        case 0x3921bcu: goto label_3921bc;
        case 0x3921c0u: goto label_3921c0;
        case 0x3921c4u: goto label_3921c4;
        case 0x3921c8u: goto label_3921c8;
        case 0x3921ccu: goto label_3921cc;
        case 0x3921d0u: goto label_3921d0;
        case 0x3921d4u: goto label_3921d4;
        case 0x3921d8u: goto label_3921d8;
        case 0x3921dcu: goto label_3921dc;
        case 0x3921e0u: goto label_3921e0;
        case 0x3921e4u: goto label_3921e4;
        case 0x3921e8u: goto label_3921e8;
        case 0x3921ecu: goto label_3921ec;
        case 0x3921f0u: goto label_3921f0;
        case 0x3921f4u: goto label_3921f4;
        case 0x3921f8u: goto label_3921f8;
        case 0x3921fcu: goto label_3921fc;
        case 0x392200u: goto label_392200;
        case 0x392204u: goto label_392204;
        case 0x392208u: goto label_392208;
        case 0x39220cu: goto label_39220c;
        case 0x392210u: goto label_392210;
        case 0x392214u: goto label_392214;
        case 0x392218u: goto label_392218;
        case 0x39221cu: goto label_39221c;
        case 0x392220u: goto label_392220;
        case 0x392224u: goto label_392224;
        case 0x392228u: goto label_392228;
        case 0x39222cu: goto label_39222c;
        case 0x392230u: goto label_392230;
        case 0x392234u: goto label_392234;
        case 0x392238u: goto label_392238;
        case 0x39223cu: goto label_39223c;
        case 0x392240u: goto label_392240;
        case 0x392244u: goto label_392244;
        case 0x392248u: goto label_392248;
        case 0x39224cu: goto label_39224c;
        case 0x392250u: goto label_392250;
        case 0x392254u: goto label_392254;
        case 0x392258u: goto label_392258;
        case 0x39225cu: goto label_39225c;
        case 0x392260u: goto label_392260;
        case 0x392264u: goto label_392264;
        case 0x392268u: goto label_392268;
        case 0x39226cu: goto label_39226c;
        case 0x392270u: goto label_392270;
        case 0x392274u: goto label_392274;
        case 0x392278u: goto label_392278;
        case 0x39227cu: goto label_39227c;
        case 0x392280u: goto label_392280;
        case 0x392284u: goto label_392284;
        case 0x392288u: goto label_392288;
        case 0x39228cu: goto label_39228c;
        case 0x392290u: goto label_392290;
        case 0x392294u: goto label_392294;
        case 0x392298u: goto label_392298;
        case 0x39229cu: goto label_39229c;
        case 0x3922a0u: goto label_3922a0;
        case 0x3922a4u: goto label_3922a4;
        case 0x3922a8u: goto label_3922a8;
        case 0x3922acu: goto label_3922ac;
        case 0x3922b0u: goto label_3922b0;
        case 0x3922b4u: goto label_3922b4;
        case 0x3922b8u: goto label_3922b8;
        case 0x3922bcu: goto label_3922bc;
        case 0x3922c0u: goto label_3922c0;
        case 0x3922c4u: goto label_3922c4;
        case 0x3922c8u: goto label_3922c8;
        case 0x3922ccu: goto label_3922cc;
        case 0x3922d0u: goto label_3922d0;
        case 0x3922d4u: goto label_3922d4;
        case 0x3922d8u: goto label_3922d8;
        case 0x3922dcu: goto label_3922dc;
        case 0x3922e0u: goto label_3922e0;
        case 0x3922e4u: goto label_3922e4;
        case 0x3922e8u: goto label_3922e8;
        case 0x3922ecu: goto label_3922ec;
        case 0x3922f0u: goto label_3922f0;
        case 0x3922f4u: goto label_3922f4;
        case 0x3922f8u: goto label_3922f8;
        case 0x3922fcu: goto label_3922fc;
        case 0x392300u: goto label_392300;
        case 0x392304u: goto label_392304;
        case 0x392308u: goto label_392308;
        case 0x39230cu: goto label_39230c;
        case 0x392310u: goto label_392310;
        case 0x392314u: goto label_392314;
        case 0x392318u: goto label_392318;
        case 0x39231cu: goto label_39231c;
        case 0x392320u: goto label_392320;
        case 0x392324u: goto label_392324;
        case 0x392328u: goto label_392328;
        case 0x39232cu: goto label_39232c;
        case 0x392330u: goto label_392330;
        case 0x392334u: goto label_392334;
        case 0x392338u: goto label_392338;
        case 0x39233cu: goto label_39233c;
        case 0x392340u: goto label_392340;
        case 0x392344u: goto label_392344;
        case 0x392348u: goto label_392348;
        case 0x39234cu: goto label_39234c;
        case 0x392350u: goto label_392350;
        case 0x392354u: goto label_392354;
        case 0x392358u: goto label_392358;
        case 0x39235cu: goto label_39235c;
        case 0x392360u: goto label_392360;
        case 0x392364u: goto label_392364;
        case 0x392368u: goto label_392368;
        case 0x39236cu: goto label_39236c;
        case 0x392370u: goto label_392370;
        case 0x392374u: goto label_392374;
        case 0x392378u: goto label_392378;
        case 0x39237cu: goto label_39237c;
        case 0x392380u: goto label_392380;
        case 0x392384u: goto label_392384;
        case 0x392388u: goto label_392388;
        case 0x39238cu: goto label_39238c;
        case 0x392390u: goto label_392390;
        case 0x392394u: goto label_392394;
        case 0x392398u: goto label_392398;
        case 0x39239cu: goto label_39239c;
        case 0x3923a0u: goto label_3923a0;
        case 0x3923a4u: goto label_3923a4;
        case 0x3923a8u: goto label_3923a8;
        case 0x3923acu: goto label_3923ac;
        case 0x3923b0u: goto label_3923b0;
        case 0x3923b4u: goto label_3923b4;
        case 0x3923b8u: goto label_3923b8;
        case 0x3923bcu: goto label_3923bc;
        case 0x3923c0u: goto label_3923c0;
        case 0x3923c4u: goto label_3923c4;
        case 0x3923c8u: goto label_3923c8;
        case 0x3923ccu: goto label_3923cc;
        case 0x3923d0u: goto label_3923d0;
        case 0x3923d4u: goto label_3923d4;
        case 0x3923d8u: goto label_3923d8;
        case 0x3923dcu: goto label_3923dc;
        case 0x3923e0u: goto label_3923e0;
        case 0x3923e4u: goto label_3923e4;
        case 0x3923e8u: goto label_3923e8;
        case 0x3923ecu: goto label_3923ec;
        case 0x3923f0u: goto label_3923f0;
        case 0x3923f4u: goto label_3923f4;
        case 0x3923f8u: goto label_3923f8;
        case 0x3923fcu: goto label_3923fc;
        case 0x392400u: goto label_392400;
        case 0x392404u: goto label_392404;
        case 0x392408u: goto label_392408;
        case 0x39240cu: goto label_39240c;
        case 0x392410u: goto label_392410;
        case 0x392414u: goto label_392414;
        case 0x392418u: goto label_392418;
        case 0x39241cu: goto label_39241c;
        case 0x392420u: goto label_392420;
        case 0x392424u: goto label_392424;
        case 0x392428u: goto label_392428;
        case 0x39242cu: goto label_39242c;
        case 0x392430u: goto label_392430;
        case 0x392434u: goto label_392434;
        case 0x392438u: goto label_392438;
        case 0x39243cu: goto label_39243c;
        case 0x392440u: goto label_392440;
        case 0x392444u: goto label_392444;
        case 0x392448u: goto label_392448;
        case 0x39244cu: goto label_39244c;
        case 0x392450u: goto label_392450;
        case 0x392454u: goto label_392454;
        case 0x392458u: goto label_392458;
        case 0x39245cu: goto label_39245c;
        case 0x392460u: goto label_392460;
        case 0x392464u: goto label_392464;
        case 0x392468u: goto label_392468;
        case 0x39246cu: goto label_39246c;
        case 0x392470u: goto label_392470;
        case 0x392474u: goto label_392474;
        case 0x392478u: goto label_392478;
        case 0x39247cu: goto label_39247c;
        case 0x392480u: goto label_392480;
        case 0x392484u: goto label_392484;
        case 0x392488u: goto label_392488;
        case 0x39248cu: goto label_39248c;
        case 0x392490u: goto label_392490;
        case 0x392494u: goto label_392494;
        case 0x392498u: goto label_392498;
        case 0x39249cu: goto label_39249c;
        case 0x3924a0u: goto label_3924a0;
        case 0x3924a4u: goto label_3924a4;
        case 0x3924a8u: goto label_3924a8;
        case 0x3924acu: goto label_3924ac;
        case 0x3924b0u: goto label_3924b0;
        case 0x3924b4u: goto label_3924b4;
        case 0x3924b8u: goto label_3924b8;
        case 0x3924bcu: goto label_3924bc;
        case 0x3924c0u: goto label_3924c0;
        case 0x3924c4u: goto label_3924c4;
        case 0x3924c8u: goto label_3924c8;
        case 0x3924ccu: goto label_3924cc;
        case 0x3924d0u: goto label_3924d0;
        case 0x3924d4u: goto label_3924d4;
        case 0x3924d8u: goto label_3924d8;
        case 0x3924dcu: goto label_3924dc;
        case 0x3924e0u: goto label_3924e0;
        case 0x3924e4u: goto label_3924e4;
        case 0x3924e8u: goto label_3924e8;
        case 0x3924ecu: goto label_3924ec;
        case 0x3924f0u: goto label_3924f0;
        case 0x3924f4u: goto label_3924f4;
        case 0x3924f8u: goto label_3924f8;
        case 0x3924fcu: goto label_3924fc;
        case 0x392500u: goto label_392500;
        case 0x392504u: goto label_392504;
        case 0x392508u: goto label_392508;
        case 0x39250cu: goto label_39250c;
        case 0x392510u: goto label_392510;
        case 0x392514u: goto label_392514;
        case 0x392518u: goto label_392518;
        case 0x39251cu: goto label_39251c;
        case 0x392520u: goto label_392520;
        case 0x392524u: goto label_392524;
        case 0x392528u: goto label_392528;
        case 0x39252cu: goto label_39252c;
        case 0x392530u: goto label_392530;
        case 0x392534u: goto label_392534;
        case 0x392538u: goto label_392538;
        case 0x39253cu: goto label_39253c;
        case 0x392540u: goto label_392540;
        case 0x392544u: goto label_392544;
        case 0x392548u: goto label_392548;
        case 0x39254cu: goto label_39254c;
        case 0x392550u: goto label_392550;
        case 0x392554u: goto label_392554;
        case 0x392558u: goto label_392558;
        case 0x39255cu: goto label_39255c;
        case 0x392560u: goto label_392560;
        case 0x392564u: goto label_392564;
        case 0x392568u: goto label_392568;
        case 0x39256cu: goto label_39256c;
        case 0x392570u: goto label_392570;
        case 0x392574u: goto label_392574;
        case 0x392578u: goto label_392578;
        case 0x39257cu: goto label_39257c;
        case 0x392580u: goto label_392580;
        case 0x392584u: goto label_392584;
        case 0x392588u: goto label_392588;
        case 0x39258cu: goto label_39258c;
        case 0x392590u: goto label_392590;
        case 0x392594u: goto label_392594;
        case 0x392598u: goto label_392598;
        case 0x39259cu: goto label_39259c;
        case 0x3925a0u: goto label_3925a0;
        case 0x3925a4u: goto label_3925a4;
        case 0x3925a8u: goto label_3925a8;
        case 0x3925acu: goto label_3925ac;
        case 0x3925b0u: goto label_3925b0;
        case 0x3925b4u: goto label_3925b4;
        case 0x3925b8u: goto label_3925b8;
        case 0x3925bcu: goto label_3925bc;
        case 0x3925c0u: goto label_3925c0;
        case 0x3925c4u: goto label_3925c4;
        case 0x3925c8u: goto label_3925c8;
        case 0x3925ccu: goto label_3925cc;
        case 0x3925d0u: goto label_3925d0;
        case 0x3925d4u: goto label_3925d4;
        case 0x3925d8u: goto label_3925d8;
        case 0x3925dcu: goto label_3925dc;
        case 0x3925e0u: goto label_3925e0;
        case 0x3925e4u: goto label_3925e4;
        case 0x3925e8u: goto label_3925e8;
        case 0x3925ecu: goto label_3925ec;
        case 0x3925f0u: goto label_3925f0;
        case 0x3925f4u: goto label_3925f4;
        case 0x3925f8u: goto label_3925f8;
        case 0x3925fcu: goto label_3925fc;
        case 0x392600u: goto label_392600;
        case 0x392604u: goto label_392604;
        case 0x392608u: goto label_392608;
        case 0x39260cu: goto label_39260c;
        case 0x392610u: goto label_392610;
        case 0x392614u: goto label_392614;
        case 0x392618u: goto label_392618;
        case 0x39261cu: goto label_39261c;
        case 0x392620u: goto label_392620;
        case 0x392624u: goto label_392624;
        case 0x392628u: goto label_392628;
        case 0x39262cu: goto label_39262c;
        case 0x392630u: goto label_392630;
        case 0x392634u: goto label_392634;
        case 0x392638u: goto label_392638;
        case 0x39263cu: goto label_39263c;
        case 0x392640u: goto label_392640;
        case 0x392644u: goto label_392644;
        case 0x392648u: goto label_392648;
        case 0x39264cu: goto label_39264c;
        case 0x392650u: goto label_392650;
        case 0x392654u: goto label_392654;
        case 0x392658u: goto label_392658;
        case 0x39265cu: goto label_39265c;
        case 0x392660u: goto label_392660;
        case 0x392664u: goto label_392664;
        case 0x392668u: goto label_392668;
        case 0x39266cu: goto label_39266c;
        case 0x392670u: goto label_392670;
        case 0x392674u: goto label_392674;
        case 0x392678u: goto label_392678;
        case 0x39267cu: goto label_39267c;
        case 0x392680u: goto label_392680;
        case 0x392684u: goto label_392684;
        case 0x392688u: goto label_392688;
        case 0x39268cu: goto label_39268c;
        case 0x392690u: goto label_392690;
        case 0x392694u: goto label_392694;
        case 0x392698u: goto label_392698;
        case 0x39269cu: goto label_39269c;
        case 0x3926a0u: goto label_3926a0;
        case 0x3926a4u: goto label_3926a4;
        case 0x3926a8u: goto label_3926a8;
        case 0x3926acu: goto label_3926ac;
        case 0x3926b0u: goto label_3926b0;
        case 0x3926b4u: goto label_3926b4;
        case 0x3926b8u: goto label_3926b8;
        case 0x3926bcu: goto label_3926bc;
        case 0x3926c0u: goto label_3926c0;
        case 0x3926c4u: goto label_3926c4;
        case 0x3926c8u: goto label_3926c8;
        case 0x3926ccu: goto label_3926cc;
        case 0x3926d0u: goto label_3926d0;
        case 0x3926d4u: goto label_3926d4;
        case 0x3926d8u: goto label_3926d8;
        case 0x3926dcu: goto label_3926dc;
        case 0x3926e0u: goto label_3926e0;
        case 0x3926e4u: goto label_3926e4;
        case 0x3926e8u: goto label_3926e8;
        case 0x3926ecu: goto label_3926ec;
        case 0x3926f0u: goto label_3926f0;
        case 0x3926f4u: goto label_3926f4;
        case 0x3926f8u: goto label_3926f8;
        case 0x3926fcu: goto label_3926fc;
        case 0x392700u: goto label_392700;
        case 0x392704u: goto label_392704;
        case 0x392708u: goto label_392708;
        case 0x39270cu: goto label_39270c;
        case 0x392710u: goto label_392710;
        case 0x392714u: goto label_392714;
        case 0x392718u: goto label_392718;
        case 0x39271cu: goto label_39271c;
        case 0x392720u: goto label_392720;
        case 0x392724u: goto label_392724;
        case 0x392728u: goto label_392728;
        case 0x39272cu: goto label_39272c;
        case 0x392730u: goto label_392730;
        case 0x392734u: goto label_392734;
        case 0x392738u: goto label_392738;
        case 0x39273cu: goto label_39273c;
        case 0x392740u: goto label_392740;
        case 0x392744u: goto label_392744;
        case 0x392748u: goto label_392748;
        case 0x39274cu: goto label_39274c;
        case 0x392750u: goto label_392750;
        case 0x392754u: goto label_392754;
        case 0x392758u: goto label_392758;
        case 0x39275cu: goto label_39275c;
        case 0x392760u: goto label_392760;
        case 0x392764u: goto label_392764;
        case 0x392768u: goto label_392768;
        case 0x39276cu: goto label_39276c;
        case 0x392770u: goto label_392770;
        case 0x392774u: goto label_392774;
        case 0x392778u: goto label_392778;
        case 0x39277cu: goto label_39277c;
        case 0x392780u: goto label_392780;
        case 0x392784u: goto label_392784;
        case 0x392788u: goto label_392788;
        case 0x39278cu: goto label_39278c;
        case 0x392790u: goto label_392790;
        case 0x392794u: goto label_392794;
        case 0x392798u: goto label_392798;
        case 0x39279cu: goto label_39279c;
        case 0x3927a0u: goto label_3927a0;
        case 0x3927a4u: goto label_3927a4;
        case 0x3927a8u: goto label_3927a8;
        case 0x3927acu: goto label_3927ac;
        case 0x3927b0u: goto label_3927b0;
        case 0x3927b4u: goto label_3927b4;
        case 0x3927b8u: goto label_3927b8;
        case 0x3927bcu: goto label_3927bc;
        case 0x3927c0u: goto label_3927c0;
        case 0x3927c4u: goto label_3927c4;
        case 0x3927c8u: goto label_3927c8;
        case 0x3927ccu: goto label_3927cc;
        case 0x3927d0u: goto label_3927d0;
        case 0x3927d4u: goto label_3927d4;
        case 0x3927d8u: goto label_3927d8;
        case 0x3927dcu: goto label_3927dc;
        case 0x3927e0u: goto label_3927e0;
        case 0x3927e4u: goto label_3927e4;
        case 0x3927e8u: goto label_3927e8;
        case 0x3927ecu: goto label_3927ec;
        case 0x3927f0u: goto label_3927f0;
        case 0x3927f4u: goto label_3927f4;
        case 0x3927f8u: goto label_3927f8;
        case 0x3927fcu: goto label_3927fc;
        case 0x392800u: goto label_392800;
        case 0x392804u: goto label_392804;
        case 0x392808u: goto label_392808;
        case 0x39280cu: goto label_39280c;
        case 0x392810u: goto label_392810;
        case 0x392814u: goto label_392814;
        case 0x392818u: goto label_392818;
        case 0x39281cu: goto label_39281c;
        case 0x392820u: goto label_392820;
        case 0x392824u: goto label_392824;
        case 0x392828u: goto label_392828;
        case 0x39282cu: goto label_39282c;
        case 0x392830u: goto label_392830;
        case 0x392834u: goto label_392834;
        case 0x392838u: goto label_392838;
        case 0x39283cu: goto label_39283c;
        case 0x392840u: goto label_392840;
        case 0x392844u: goto label_392844;
        case 0x392848u: goto label_392848;
        case 0x39284cu: goto label_39284c;
        case 0x392850u: goto label_392850;
        case 0x392854u: goto label_392854;
        case 0x392858u: goto label_392858;
        case 0x39285cu: goto label_39285c;
        case 0x392860u: goto label_392860;
        case 0x392864u: goto label_392864;
        case 0x392868u: goto label_392868;
        case 0x39286cu: goto label_39286c;
        case 0x392870u: goto label_392870;
        case 0x392874u: goto label_392874;
        case 0x392878u: goto label_392878;
        case 0x39287cu: goto label_39287c;
        case 0x392880u: goto label_392880;
        case 0x392884u: goto label_392884;
        case 0x392888u: goto label_392888;
        case 0x39288cu: goto label_39288c;
        case 0x392890u: goto label_392890;
        case 0x392894u: goto label_392894;
        case 0x392898u: goto label_392898;
        case 0x39289cu: goto label_39289c;
        case 0x3928a0u: goto label_3928a0;
        case 0x3928a4u: goto label_3928a4;
        case 0x3928a8u: goto label_3928a8;
        case 0x3928acu: goto label_3928ac;
        case 0x3928b0u: goto label_3928b0;
        case 0x3928b4u: goto label_3928b4;
        case 0x3928b8u: goto label_3928b8;
        case 0x3928bcu: goto label_3928bc;
        case 0x3928c0u: goto label_3928c0;
        case 0x3928c4u: goto label_3928c4;
        case 0x3928c8u: goto label_3928c8;
        case 0x3928ccu: goto label_3928cc;
        case 0x3928d0u: goto label_3928d0;
        case 0x3928d4u: goto label_3928d4;
        case 0x3928d8u: goto label_3928d8;
        case 0x3928dcu: goto label_3928dc;
        case 0x3928e0u: goto label_3928e0;
        case 0x3928e4u: goto label_3928e4;
        case 0x3928e8u: goto label_3928e8;
        case 0x3928ecu: goto label_3928ec;
        case 0x3928f0u: goto label_3928f0;
        case 0x3928f4u: goto label_3928f4;
        case 0x3928f8u: goto label_3928f8;
        case 0x3928fcu: goto label_3928fc;
        case 0x392900u: goto label_392900;
        case 0x392904u: goto label_392904;
        case 0x392908u: goto label_392908;
        case 0x39290cu: goto label_39290c;
        case 0x392910u: goto label_392910;
        case 0x392914u: goto label_392914;
        case 0x392918u: goto label_392918;
        case 0x39291cu: goto label_39291c;
        case 0x392920u: goto label_392920;
        case 0x392924u: goto label_392924;
        case 0x392928u: goto label_392928;
        case 0x39292cu: goto label_39292c;
        case 0x392930u: goto label_392930;
        case 0x392934u: goto label_392934;
        case 0x392938u: goto label_392938;
        case 0x39293cu: goto label_39293c;
        case 0x392940u: goto label_392940;
        case 0x392944u: goto label_392944;
        case 0x392948u: goto label_392948;
        case 0x39294cu: goto label_39294c;
        case 0x392950u: goto label_392950;
        case 0x392954u: goto label_392954;
        case 0x392958u: goto label_392958;
        case 0x39295cu: goto label_39295c;
        case 0x392960u: goto label_392960;
        case 0x392964u: goto label_392964;
        case 0x392968u: goto label_392968;
        case 0x39296cu: goto label_39296c;
        case 0x392970u: goto label_392970;
        case 0x392974u: goto label_392974;
        case 0x392978u: goto label_392978;
        case 0x39297cu: goto label_39297c;
        case 0x392980u: goto label_392980;
        case 0x392984u: goto label_392984;
        case 0x392988u: goto label_392988;
        case 0x39298cu: goto label_39298c;
        case 0x392990u: goto label_392990;
        case 0x392994u: goto label_392994;
        case 0x392998u: goto label_392998;
        case 0x39299cu: goto label_39299c;
        case 0x3929a0u: goto label_3929a0;
        case 0x3929a4u: goto label_3929a4;
        case 0x3929a8u: goto label_3929a8;
        case 0x3929acu: goto label_3929ac;
        case 0x3929b0u: goto label_3929b0;
        case 0x3929b4u: goto label_3929b4;
        case 0x3929b8u: goto label_3929b8;
        case 0x3929bcu: goto label_3929bc;
        case 0x3929c0u: goto label_3929c0;
        case 0x3929c4u: goto label_3929c4;
        case 0x3929c8u: goto label_3929c8;
        case 0x3929ccu: goto label_3929cc;
        case 0x3929d0u: goto label_3929d0;
        case 0x3929d4u: goto label_3929d4;
        case 0x3929d8u: goto label_3929d8;
        case 0x3929dcu: goto label_3929dc;
        case 0x3929e0u: goto label_3929e0;
        case 0x3929e4u: goto label_3929e4;
        case 0x3929e8u: goto label_3929e8;
        case 0x3929ecu: goto label_3929ec;
        case 0x3929f0u: goto label_3929f0;
        case 0x3929f4u: goto label_3929f4;
        case 0x3929f8u: goto label_3929f8;
        case 0x3929fcu: goto label_3929fc;
        case 0x392a00u: goto label_392a00;
        case 0x392a04u: goto label_392a04;
        case 0x392a08u: goto label_392a08;
        case 0x392a0cu: goto label_392a0c;
        case 0x392a10u: goto label_392a10;
        case 0x392a14u: goto label_392a14;
        case 0x392a18u: goto label_392a18;
        case 0x392a1cu: goto label_392a1c;
        case 0x392a20u: goto label_392a20;
        case 0x392a24u: goto label_392a24;
        case 0x392a28u: goto label_392a28;
        case 0x392a2cu: goto label_392a2c;
        case 0x392a30u: goto label_392a30;
        case 0x392a34u: goto label_392a34;
        case 0x392a38u: goto label_392a38;
        case 0x392a3cu: goto label_392a3c;
        case 0x392a40u: goto label_392a40;
        case 0x392a44u: goto label_392a44;
        case 0x392a48u: goto label_392a48;
        case 0x392a4cu: goto label_392a4c;
        case 0x392a50u: goto label_392a50;
        case 0x392a54u: goto label_392a54;
        case 0x392a58u: goto label_392a58;
        case 0x392a5cu: goto label_392a5c;
        case 0x392a60u: goto label_392a60;
        case 0x392a64u: goto label_392a64;
        case 0x392a68u: goto label_392a68;
        case 0x392a6cu: goto label_392a6c;
        case 0x392a70u: goto label_392a70;
        case 0x392a74u: goto label_392a74;
        case 0x392a78u: goto label_392a78;
        case 0x392a7cu: goto label_392a7c;
        case 0x392a80u: goto label_392a80;
        case 0x392a84u: goto label_392a84;
        case 0x392a88u: goto label_392a88;
        case 0x392a8cu: goto label_392a8c;
        case 0x392a90u: goto label_392a90;
        case 0x392a94u: goto label_392a94;
        case 0x392a98u: goto label_392a98;
        case 0x392a9cu: goto label_392a9c;
        case 0x392aa0u: goto label_392aa0;
        case 0x392aa4u: goto label_392aa4;
        case 0x392aa8u: goto label_392aa8;
        case 0x392aacu: goto label_392aac;
        case 0x392ab0u: goto label_392ab0;
        case 0x392ab4u: goto label_392ab4;
        case 0x392ab8u: goto label_392ab8;
        case 0x392abcu: goto label_392abc;
        case 0x392ac0u: goto label_392ac0;
        case 0x392ac4u: goto label_392ac4;
        case 0x392ac8u: goto label_392ac8;
        case 0x392accu: goto label_392acc;
        case 0x392ad0u: goto label_392ad0;
        case 0x392ad4u: goto label_392ad4;
        case 0x392ad8u: goto label_392ad8;
        case 0x392adcu: goto label_392adc;
        case 0x392ae0u: goto label_392ae0;
        case 0x392ae4u: goto label_392ae4;
        case 0x392ae8u: goto label_392ae8;
        case 0x392aecu: goto label_392aec;
        case 0x392af0u: goto label_392af0;
        case 0x392af4u: goto label_392af4;
        case 0x392af8u: goto label_392af8;
        case 0x392afcu: goto label_392afc;
        case 0x392b00u: goto label_392b00;
        case 0x392b04u: goto label_392b04;
        case 0x392b08u: goto label_392b08;
        case 0x392b0cu: goto label_392b0c;
        case 0x392b10u: goto label_392b10;
        case 0x392b14u: goto label_392b14;
        case 0x392b18u: goto label_392b18;
        case 0x392b1cu: goto label_392b1c;
        case 0x392b20u: goto label_392b20;
        case 0x392b24u: goto label_392b24;
        case 0x392b28u: goto label_392b28;
        case 0x392b2cu: goto label_392b2c;
        case 0x392b30u: goto label_392b30;
        case 0x392b34u: goto label_392b34;
        case 0x392b38u: goto label_392b38;
        case 0x392b3cu: goto label_392b3c;
        case 0x392b40u: goto label_392b40;
        case 0x392b44u: goto label_392b44;
        case 0x392b48u: goto label_392b48;
        case 0x392b4cu: goto label_392b4c;
        case 0x392b50u: goto label_392b50;
        case 0x392b54u: goto label_392b54;
        case 0x392b58u: goto label_392b58;
        case 0x392b5cu: goto label_392b5c;
        case 0x392b60u: goto label_392b60;
        case 0x392b64u: goto label_392b64;
        case 0x392b68u: goto label_392b68;
        case 0x392b6cu: goto label_392b6c;
        case 0x392b70u: goto label_392b70;
        case 0x392b74u: goto label_392b74;
        case 0x392b78u: goto label_392b78;
        case 0x392b7cu: goto label_392b7c;
        case 0x392b80u: goto label_392b80;
        case 0x392b84u: goto label_392b84;
        case 0x392b88u: goto label_392b88;
        case 0x392b8cu: goto label_392b8c;
        case 0x392b90u: goto label_392b90;
        case 0x392b94u: goto label_392b94;
        case 0x392b98u: goto label_392b98;
        case 0x392b9cu: goto label_392b9c;
        case 0x392ba0u: goto label_392ba0;
        case 0x392ba4u: goto label_392ba4;
        case 0x392ba8u: goto label_392ba8;
        case 0x392bacu: goto label_392bac;
        case 0x392bb0u: goto label_392bb0;
        case 0x392bb4u: goto label_392bb4;
        case 0x392bb8u: goto label_392bb8;
        case 0x392bbcu: goto label_392bbc;
        case 0x392bc0u: goto label_392bc0;
        case 0x392bc4u: goto label_392bc4;
        case 0x392bc8u: goto label_392bc8;
        case 0x392bccu: goto label_392bcc;
        case 0x392bd0u: goto label_392bd0;
        case 0x392bd4u: goto label_392bd4;
        case 0x392bd8u: goto label_392bd8;
        case 0x392bdcu: goto label_392bdc;
        case 0x392be0u: goto label_392be0;
        case 0x392be4u: goto label_392be4;
        case 0x392be8u: goto label_392be8;
        case 0x392becu: goto label_392bec;
        case 0x392bf0u: goto label_392bf0;
        case 0x392bf4u: goto label_392bf4;
        case 0x392bf8u: goto label_392bf8;
        case 0x392bfcu: goto label_392bfc;
        case 0x392c00u: goto label_392c00;
        case 0x392c04u: goto label_392c04;
        case 0x392c08u: goto label_392c08;
        case 0x392c0cu: goto label_392c0c;
        case 0x392c10u: goto label_392c10;
        case 0x392c14u: goto label_392c14;
        case 0x392c18u: goto label_392c18;
        case 0x392c1cu: goto label_392c1c;
        case 0x392c20u: goto label_392c20;
        case 0x392c24u: goto label_392c24;
        case 0x392c28u: goto label_392c28;
        case 0x392c2cu: goto label_392c2c;
        case 0x392c30u: goto label_392c30;
        case 0x392c34u: goto label_392c34;
        case 0x392c38u: goto label_392c38;
        case 0x392c3cu: goto label_392c3c;
        case 0x392c40u: goto label_392c40;
        case 0x392c44u: goto label_392c44;
        case 0x392c48u: goto label_392c48;
        case 0x392c4cu: goto label_392c4c;
        case 0x392c50u: goto label_392c50;
        case 0x392c54u: goto label_392c54;
        case 0x392c58u: goto label_392c58;
        case 0x392c5cu: goto label_392c5c;
        case 0x392c60u: goto label_392c60;
        case 0x392c64u: goto label_392c64;
        case 0x392c68u: goto label_392c68;
        case 0x392c6cu: goto label_392c6c;
        case 0x392c70u: goto label_392c70;
        case 0x392c74u: goto label_392c74;
        case 0x392c78u: goto label_392c78;
        case 0x392c7cu: goto label_392c7c;
        case 0x392c80u: goto label_392c80;
        case 0x392c84u: goto label_392c84;
        case 0x392c88u: goto label_392c88;
        case 0x392c8cu: goto label_392c8c;
        case 0x392c90u: goto label_392c90;
        case 0x392c94u: goto label_392c94;
        case 0x392c98u: goto label_392c98;
        case 0x392c9cu: goto label_392c9c;
        case 0x392ca0u: goto label_392ca0;
        case 0x392ca4u: goto label_392ca4;
        case 0x392ca8u: goto label_392ca8;
        case 0x392cacu: goto label_392cac;
        case 0x392cb0u: goto label_392cb0;
        case 0x392cb4u: goto label_392cb4;
        case 0x392cb8u: goto label_392cb8;
        case 0x392cbcu: goto label_392cbc;
        case 0x392cc0u: goto label_392cc0;
        case 0x392cc4u: goto label_392cc4;
        case 0x392cc8u: goto label_392cc8;
        case 0x392cccu: goto label_392ccc;
        case 0x392cd0u: goto label_392cd0;
        case 0x392cd4u: goto label_392cd4;
        case 0x392cd8u: goto label_392cd8;
        case 0x392cdcu: goto label_392cdc;
        case 0x392ce0u: goto label_392ce0;
        case 0x392ce4u: goto label_392ce4;
        case 0x392ce8u: goto label_392ce8;
        case 0x392cecu: goto label_392cec;
        case 0x392cf0u: goto label_392cf0;
        case 0x392cf4u: goto label_392cf4;
        case 0x392cf8u: goto label_392cf8;
        case 0x392cfcu: goto label_392cfc;
        case 0x392d00u: goto label_392d00;
        case 0x392d04u: goto label_392d04;
        default: break;
    }

    ctx->pc = 0x3920e8u;

label_3920e8:
    // 0x3920e8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x3920e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_3920ec:
    // 0x3920ec: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x3920ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_3920f0:
    // 0x3920f0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x3920f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_3920f4:
    // 0x3920f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3920f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3920f8:
    // 0x3920f8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x3920f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_3920fc:
    // 0x3920fc: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x3920fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_392100:
    // 0x392100: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x392100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_392104:
    // 0x392104: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x392104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_392108:
    // 0x392108: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x392108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39210c:
    // 0x39210c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x39210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_392110:
    // 0x392110: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x392110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_392114:
    // 0x392114: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x392114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_392118:
    // 0x392118: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x392118u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39211c:
    // 0x39211c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x39211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_392120:
    // 0x392120: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x392120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_392124:
    // 0x392124: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x392124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_392128:
    // 0x392128: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x392128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_39212c:
    // 0x39212c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x39212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_392130:
    // 0x392130: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x392130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_392134:
    // 0x392134: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x392134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_392138:
    // 0x392138: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x392138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_39213c:
    // 0x39213c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x39213cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_392140:
    // 0x392140: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x392140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_392144:
    // 0x392144: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x392144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_392148:
    // 0x392148: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x392148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_39214c:
    // 0x39214c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x39214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_392150:
    // 0x392150: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x392150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_392154:
    // 0x392154: 0xc0e423c  jal         func_3908F0
label_392158:
    if (ctx->pc == 0x392158u) {
        ctx->pc = 0x392158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392154u;
        // 0x392158: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39215Cu;
        goto label_39215c;
    }
    ctx->pc = 0x392154u;
    SET_GPR_U32(ctx, 31, 0x39215Cu);
    ctx->pc = 0x392158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392154u;
    // 0x392158: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3908F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3908F0u, 0x392154u, 0x39215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39215Cu;
label_39215c:
    // 0x39215c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x39215cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_392160:
    // 0x392160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x392160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392164:
    // 0x392164: 0x12c00092  beqz        $s6, . + 4 + (0x92 << 2)
label_392168:
    if (ctx->pc == 0x392168u) {
        ctx->pc = 0x392168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392164u;
        // 0x392168: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39216Cu;
        goto label_39216c;
    }
    ctx->pc = 0x392164u;
    {
        const bool branch_taken_0x392164 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x392168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392164u;
        // 0x392168: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392164) {
            ctx->pc = 0x3923B0u;
            goto label_3923b0;
        }
    }
    ctx->pc = 0x39216Cu;
label_39216c:
    // 0x39216c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39216cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392170:
    // 0x392170: 0x1ac00031  blez        $s6, . + 4 + (0x31 << 2)
label_392174:
    if (ctx->pc == 0x392174u) {
        ctx->pc = 0x392174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392170u;
        // 0x392174: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392178u;
        goto label_392178;
    }
    ctx->pc = 0x392170u;
    {
        const bool branch_taken_0x392170 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x392174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392170u;
        // 0x392174: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392170) {
            ctx->pc = 0x392238u;
            goto label_392238;
        }
    }
    ctx->pc = 0x392178u;
label_392178:
    // 0x392178: 0x50600046  beql        $v1, $zero, . + 4 + (0x46 << 2)
label_39217c:
    if (ctx->pc == 0x39217Cu) {
        ctx->pc = 0x39217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392178u;
        // 0x39217c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392180u;
        goto label_392180;
    }
    ctx->pc = 0x392178u;
    {
        const bool branch_taken_0x392178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x392178) {
            ctx->pc = 0x39217Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392178u;
            // 0x39217c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392294u;
            goto label_392294;
        }
    }
    ctx->pc = 0x392180u;
label_392180:
    // 0x392180: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x392180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_392184:
    // 0x392184: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_392188:
    if (ctx->pc == 0x392188u) {
        ctx->pc = 0x392188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392184u;
        // 0x392188: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39218Cu;
        goto label_39218c;
    }
    ctx->pc = 0x392184u;
    {
        const bool branch_taken_0x392184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392184u;
        // 0x392188: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392184) {
            ctx->pc = 0x39223Cu;
            goto label_39223c;
        }
    }
    ctx->pc = 0x39218Cu;
label_39218c:
    // 0x39218c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x39218cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_392190:
    // 0x392190: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_392194:
    if (ctx->pc == 0x392194u) {
        ctx->pc = 0x392198u;
        goto label_392198;
    }
    ctx->pc = 0x392190u;
    {
        const bool branch_taken_0x392190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392190) {
            ctx->pc = 0x3921F0u;
            goto label_3921f0;
        }
    }
    ctx->pc = 0x392198u;
label_392198:
    // 0x392198: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x392198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_39219c:
    // 0x39219c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39219cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3921a0:
    // 0x3921a0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3921a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3921a4:
    // 0x3921a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3921a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3921a8:
    // 0x3921a8: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x3921a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_3921ac:
    // 0x3921ac: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x3921acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3921b0:
    // 0x3921b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3921b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3921b4:
    // 0x3921b4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3921b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3921b8:
    // 0x3921b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3921bc:
    if (ctx->pc == 0x3921BCu) {
        ctx->pc = 0x3921BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3921B8u;
        // 0x3921bc: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3921C0u;
        goto label_3921c0;
    }
    ctx->pc = 0x3921B8u;
    {
        const bool branch_taken_0x3921b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3921b8) {
            ctx->pc = 0x3921BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3921B8u;
            // 0x3921bc: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3921C0u;
            goto label_3921c0;
        }
    }
    ctx->pc = 0x3921C0u;
label_3921c0:
    // 0x3921c0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x3921c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3921c4:
    // 0x3921c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3921c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3921c8:
    // 0x3921c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3921c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3921cc:
    // 0x3921cc: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x3921ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3921d0:
    // 0x3921d0: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x3921d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_3921d4:
    // 0x3921d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3921d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3921d8:
    // 0x3921d8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3921d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3921dc:
    // 0x3921dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3921dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3921e0:
    // 0x3921e0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3921e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3921e4:
    // 0x3921e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3921e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3921e8:
    // 0x3921e8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3921e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_3921ec:
    // 0x3921ec: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3921ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3921f0:
    // 0x3921f0: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x3921f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_3921f4:
    // 0x3921f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3921f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3921f8:
    // 0x3921f8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3921f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3921fc:
    // 0x3921fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3921fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_392200:
    // 0x392200: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x392200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_392204:
    // 0x392204: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x392204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_392208:
    // 0x392208: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x392208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_39220c:
    // 0x39220c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_392210:
    if (ctx->pc == 0x392210u) {
        ctx->pc = 0x392210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39220Cu;
        // 0x392210: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392214u;
        goto label_392214;
    }
    ctx->pc = 0x39220Cu;
    {
        const bool branch_taken_0x39220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39220c) {
            ctx->pc = 0x392210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39220Cu;
            // 0x392210: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392214u;
            goto label_392214;
        }
    }
    ctx->pc = 0x392214u;
label_392214:
    // 0x392214: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x392214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_392218:
    // 0x392218: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x392218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_39221c:
    // 0x39221c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x39221cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_392220:
    // 0x392220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_392224:
    // 0x392224: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x392224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_392228:
    // 0x392228: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x392228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_39222c:
    // 0x39222c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_392230:
    // 0x392230: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x392230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_392234:
    // 0x392234: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x392234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_392238:
    // 0x392238: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x392238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_39223c:
    // 0x39223c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x39223cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_392240:
    // 0x392240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_392244:
    // 0x392244: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x392244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_392248:
    // 0x392248: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x392248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39224c:
    // 0x39224c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x39224cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_392250:
    // 0x392250: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x392250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_392254:
    // 0x392254: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x392254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_392258:
    // 0x392258: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39225c:
    if (ctx->pc == 0x39225Cu) {
        ctx->pc = 0x39225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392258u;
        // 0x39225c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392260u;
        goto label_392260;
    }
    ctx->pc = 0x392258u;
    {
        const bool branch_taken_0x392258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392258) {
            ctx->pc = 0x39225Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392258u;
            // 0x39225c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392260u;
            goto label_392260;
        }
    }
    ctx->pc = 0x392260u;
label_392260:
    // 0x392260: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x392260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_392264:
    // 0x392264: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x392264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_392268:
    // 0x392268: 0xf6282b  sltu        $a1, $a3, $s6
    ctx->pc = 0x392268u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_39226c:
    // 0x39226c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x39226cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_392270:
    // 0x392270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_392274:
    // 0x392274: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x392274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_392278:
    // 0x392278: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x392278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_39227c:
    // 0x39227c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x39227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_392280:
    // 0x392280: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x392280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_392284:
    // 0x392284: 0x10a0004a  beqz        $a1, . + 4 + (0x4A << 2)
label_392288:
    if (ctx->pc == 0x392288u) {
        ctx->pc = 0x392288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392284u;
        // 0x392288: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39228Cu;
        goto label_39228c;
    }
    ctx->pc = 0x392284u;
    {
        const bool branch_taken_0x392284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x392288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392284u;
        // 0x392288: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392284) {
            ctx->pc = 0x3923B0u;
            goto label_3923b0;
        }
    }
    ctx->pc = 0x39228Cu;
label_39228c:
    // 0x39228c: 0x0  nop
    ctx->pc = 0x39228cu;
    // NOP
label_392290:
    // 0x392290: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x392290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_392294:
    // 0x392294: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x392294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_392298:
    // 0x392298: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39229c:
    // 0x39229c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x39229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3922a0:
    // 0x3922a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3922a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3922a4:
    // 0x3922a4: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x3922a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_3922a8:
    // 0x3922a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3922a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3922ac:
    // 0x3922ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3922acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3922b0:
    // 0x3922b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3922b4:
    if (ctx->pc == 0x3922B4u) {
        ctx->pc = 0x3922B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922B0u;
        // 0x3922b4: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3922B8u;
        goto label_3922b8;
    }
    ctx->pc = 0x3922B0u;
    {
        const bool branch_taken_0x3922b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3922b0) {
            ctx->pc = 0x3922B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3922B0u;
            // 0x3922b4: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3922B8u;
            goto label_3922b8;
        }
    }
    ctx->pc = 0x3922B8u;
label_3922b8:
    // 0x3922b8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3922b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3922bc:
    // 0x3922bc: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x3922bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_3922c0:
    // 0x3922c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3922c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3922c4:
    // 0x3922c4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3922c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3922c8:
    // 0x3922c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3922c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3922cc:
    // 0x3922cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3922ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3922d0:
    // 0x3922d0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x3922d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_3922d4:
    // 0x3922d4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3922d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3922d8:
    // 0x3922d8: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x3922d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_3922dc:
    // 0x3922dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3922dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3922e0:
    // 0x3922e0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3922e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3922e4:
    // 0x3922e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3922e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3922e8:
    // 0x3922e8: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x3922e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_3922ec:
    // 0x3922ec: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3922ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3922f0:
    // 0x3922f0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3922f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3922f4:
    // 0x3922f4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_3922f8:
    if (ctx->pc == 0x3922F8u) {
        ctx->pc = 0x3922F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3922F4u;
        // 0x3922f8: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3922FCu;
        goto label_3922fc;
    }
    ctx->pc = 0x3922F4u;
    {
        const bool branch_taken_0x3922f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3922f4) {
            ctx->pc = 0x3922F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3922F4u;
            // 0x3922f8: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3922FCu;
            goto label_3922fc;
        }
    }
    ctx->pc = 0x3922FCu;
label_3922fc:
    // 0x3922fc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x3922fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_392300:
    // 0x392300: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x392300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_392304:
    // 0x392304: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_392308:
    // 0x392308: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x392308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_39230c:
    // 0x39230c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39230cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_392310:
    // 0x392310: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x392310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_392314:
    // 0x392314: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x392314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_392318:
    // 0x392318: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x392318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_39231c:
    // 0x39231c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x39231cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_392320:
    // 0x392320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_392324:
    // 0x392324: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x392324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_392328:
    // 0x392328: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x392328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39232c:
    // 0x39232c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x39232cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_392330:
    // 0x392330: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x392330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_392334:
    // 0x392334: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x392334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_392338:
    // 0x392338: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_39233c:
    if (ctx->pc == 0x39233Cu) {
        ctx->pc = 0x39233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392338u;
        // 0x39233c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392340u;
        goto label_392340;
    }
    ctx->pc = 0x392338u;
    {
        const bool branch_taken_0x392338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392338) {
            ctx->pc = 0x39233Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392338u;
            // 0x39233c: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392340u;
            goto label_392340;
        }
    }
    ctx->pc = 0x392340u;
label_392340:
    // 0x392340: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x392340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_392344:
    // 0x392344: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x392344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_392348:
    // 0x392348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_39234c:
    // 0x39234c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x39234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_392350:
    // 0x392350: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x392350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_392354:
    // 0x392354: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x392354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_392358:
    // 0x392358: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x392358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_39235c:
    // 0x39235c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x39235cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_392360:
    // 0x392360: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x392360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_392364:
    // 0x392364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_392368:
    // 0x392368: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x392368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_39236c:
    // 0x39236c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_392370:
    // 0x392370: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x392370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_392374:
    // 0x392374: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x392374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_392378:
    // 0x392378: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x392378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_39237c:
    // 0x39237c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_392380:
    if (ctx->pc == 0x392380u) {
        ctx->pc = 0x392380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39237Cu;
        // 0x392380: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392384u;
        goto label_392384;
    }
    ctx->pc = 0x39237Cu;
    {
        const bool branch_taken_0x39237c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39237c) {
            ctx->pc = 0x392380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39237Cu;
            // 0x392380: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392384u;
            goto label_392384;
        }
    }
    ctx->pc = 0x392384u;
label_392384:
    // 0x392384: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x392384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_392388:
    // 0x392388: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x392388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_39238c:
    // 0x39238c: 0xf6282b  sltu        $a1, $a3, $s6
    ctx->pc = 0x39238cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_392390:
    // 0x392390: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x392390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_392394:
    // 0x392394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x392394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_392398:
    // 0x392398: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x392398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_39239c:
    // 0x39239c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39239cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3923a0:
    // 0x3923a0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x3923a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3923a4:
    // 0x3923a4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3923a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3923a8:
    // 0x3923a8: 0x14a0ffb9  bnez        $a1, . + 4 + (-0x47 << 2)
label_3923ac:
    if (ctx->pc == 0x3923ACu) {
        ctx->pc = 0x3923ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923A8u;
        // 0x3923ac: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3923B0u;
        goto label_3923b0;
    }
    ctx->pc = 0x3923A8u;
    {
        const bool branch_taken_0x3923a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3923ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923A8u;
        // 0x3923ac: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3923a8) {
            ctx->pc = 0x392290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392290;
        }
    }
    ctx->pc = 0x3923B0u;
label_3923b0:
    // 0x3923b0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3923b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3923b4:
    // 0x3923b4: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x3923b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_3923b8:
    // 0x3923b8: 0x24d2e880  addiu       $s2, $a2, -0x1780
    ctx->pc = 0x3923b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_3923bc:
    // 0x3923bc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3923bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3923c0:
    // 0x3923c0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3923c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_3923c4:
    // 0x3923c4: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x3923c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_3923c8:
    // 0x3923c8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3923c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3923cc:
    // 0x3923cc: 0x40f809  jalr        $v0
label_3923d0:
    if (ctx->pc == 0x3923D0u) {
        ctx->pc = 0x3923D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923CCu;
        // 0x3923d0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3923D4u;
        goto label_3923d4;
    }
    ctx->pc = 0x3923CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3923D4u);
        ctx->pc = 0x3923D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923CCu;
        // 0x3923d0: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3923CCu, 0x3923D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3923D4u;
label_3923d4:
    // 0x3923d4: 0x168040  sll         $s0, $s6, 1
    ctx->pc = 0x3923d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_3923d8:
    // 0x3923d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3923d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3923dc:
    // 0x3923dc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x3923dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_3923e0:
    // 0x3923e0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x3923e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_3923e4:
    // 0x3923e4: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x3923e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3923e8:
    // 0x3923e8: 0xae900008  sw          $s0, 0x8($s4)
    ctx->pc = 0x3923e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 16));
label_3923ec:
    // 0x3923ec: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x3923ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_3923f0:
    // 0x3923f0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3923f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3923f4:
    // 0x3923f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3923f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3923f8:
    // 0x3923f8: 0x40f809  jalr        $v0
label_3923fc:
    if (ctx->pc == 0x3923FCu) {
        ctx->pc = 0x3923FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923F8u;
        // 0x3923fc: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392400u;
        goto label_392400;
    }
    ctx->pc = 0x3923F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392400u);
        ctx->pc = 0x3923FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3923F8u;
        // 0x3923fc: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3923F8u, 0x392400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392400u;
label_392400:
    // 0x392400: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x392400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_392404:
    // 0x392404: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x392404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_392408:
    // 0x392408: 0x8e460118  lw          $a2, 0x118($s2)
    ctx->pc = 0x392408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_39240c:
    // 0x39240c: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x39240cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_392410:
    // 0x392410: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x392410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_392414:
    // 0x392414: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x392414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_392418:
    // 0x392418: 0xc0f809  jalr        $a2
label_39241c:
    if (ctx->pc == 0x39241Cu) {
        ctx->pc = 0x39241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392418u;
        // 0x39241c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392420u;
        goto label_392420;
    }
    ctx->pc = 0x392418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x392420u);
        ctx->pc = 0x39241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392418u;
        // 0x39241c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392418u, 0x392420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392420u;
label_392420:
    // 0x392420: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x392420u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392424:
    // 0x392424: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x392424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_392428:
    // 0x392428: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x392428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_39242c:
    // 0x39242c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392430:
    // 0x392430: 0xaef00008  sw          $s0, 0x8($s7)
    ctx->pc = 0x392430u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 16));
label_392434:
    // 0x392434: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x392434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_392438:
    // 0x392438: 0x40f809  jalr        $v0
label_39243c:
    if (ctx->pc == 0x39243Cu) {
        ctx->pc = 0x39243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392438u;
        // 0x39243c: 0xaee00004  sw          $zero, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392440u;
        goto label_392440;
    }
    ctx->pc = 0x392438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392440u);
        ctx->pc = 0x39243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392438u;
        // 0x39243c: 0xaee00004  sw          $zero, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392438u, 0x392440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392440u;
label_392440:
    // 0x392440: 0x12c001b4  beqz        $s6, . + 4 + (0x1B4 << 2)
label_392444:
    if (ctx->pc == 0x392444u) {
        ctx->pc = 0x392444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392440u;
        // 0x392444: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392448u;
        goto label_392448;
    }
    ctx->pc = 0x392440u;
    {
        const bool branch_taken_0x392440 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x392444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392440u;
        // 0x392444: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392440) {
            ctx->pc = 0x392B14u;
            goto label_392b14;
        }
    }
    ctx->pc = 0x392448u;
label_392448:
    // 0x392448: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x392448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39244c:
    // 0x39244c: 0x0  nop
    ctx->pc = 0x39244cu;
    // NOP
label_392450:
    // 0x392450: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_392454:
    if (ctx->pc == 0x392454u) {
        ctx->pc = 0x392454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392450u;
        // 0x392454: 0x8f83bd50  lw          $v1, -0x42B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392458u;
        goto label_392458;
    }
    ctx->pc = 0x392450u;
    {
        const bool branch_taken_0x392450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392450u;
        // 0x392454: 0x8f83bd50  lw          $v1, -0x42B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392450) {
            ctx->pc = 0x392508u;
            goto label_392508;
        }
    }
    ctx->pc = 0x392458u;
label_392458:
    // 0x392458: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x392458u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_39245c:
    // 0x39245c: 0x24e7e880  addiu       $a3, $a3, -0x1780
    ctx->pc = 0x39245cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_392460:
    // 0x392460: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x392460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_392464:
    // 0x392464: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x392464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_392468:
    // 0x392468: 0x8ce20118  lw          $v0, 0x118($a3)
    ctx->pc = 0x392468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 280)));
label_39246c:
    // 0x39246c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x39246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_392470:
    // 0x392470: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x392470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_392474:
    // 0x392474: 0x40f809  jalr        $v0
label_392478:
    if (ctx->pc == 0x392478u) {
        ctx->pc = 0x392478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392474u;
        // 0x392478: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39247Cu;
        goto label_39247c;
    }
    ctx->pc = 0x392474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39247Cu);
        ctx->pc = 0x392478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392474u;
        // 0x392478: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392474u, 0x39247Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39247Cu;
label_39247c:
    // 0x39247c: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x39247cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_392480:
    // 0x392480: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x392480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392484:
    // 0x392484: 0x3c0b0062  lui         $t3, 0x62
    ctx->pc = 0x392484u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)98 << 16));
label_392488:
    // 0x392488: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x392488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39248c:
    // 0x39248c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x39248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_392490:
    // 0x392490: 0x256be880  addiu       $t3, $t3, -0x1780
    ctx->pc = 0x392490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961280));
label_392494:
    // 0x392494: 0xae2a0008  sw          $t2, 0x8($s1)
    ctx->pc = 0x392494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 10));
label_392498:
    // 0x392498: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x392498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_39249c:
    // 0x39249c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x39249cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_3924a0:
    // 0x3924a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3924a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3924a4:
    // 0x3924a4: 0xad310000  sw          $s1, 0x0($t1)
    ctx->pc = 0x3924a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 17));
label_3924a8:
    // 0x3924a8: 0xae2a0004  sw          $t2, 0x4($s1)
    ctx->pc = 0x3924a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 10));
label_3924ac:
    // 0x3924ac: 0x8d620108  lw          $v0, 0x108($t3)
    ctx->pc = 0x3924acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 264)));
label_3924b0:
    // 0x3924b0: 0x40f809  jalr        $v0
label_3924b4:
    if (ctx->pc == 0x3924B4u) {
        ctx->pc = 0x3924B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924B0u;
        // 0x3924b4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3924B8u;
        goto label_3924b8;
    }
    ctx->pc = 0x3924B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3924B8u);
        ctx->pc = 0x3924B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924B0u;
        // 0x3924b4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3924B0u, 0x3924B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3924B8u;
label_3924b8:
    // 0x3924b8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3924b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3924bc:
    // 0x3924bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3924bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3924c0:
    // 0x3924c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3924c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3924c4:
    // 0x3924c4: 0x600013  mtlo        $v1
    ctx->pc = 0x3924c4u;
    ctx->lo = GPR_U64(ctx, 3);
label_3924c8:
    // 0x3924c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3924c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3924cc:
    // 0x3924cc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3924ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3924d0:
    // 0x3924d0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3924d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3924d4:
    // 0x3924d4: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x3924d4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_3924d8:
    // 0x3924d8: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x3924d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
label_3924dc:
    // 0x3924dc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x3924dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3924e0:
    // 0x3924e0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3924e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3924e4:
    // 0x3924e4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3924e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_3924e8:
    // 0x3924e8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3924e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_3924ec:
    // 0x3924ec: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x3924ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_3924f0:
    // 0x3924f0: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x3924f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3924f4:
    // 0x3924f4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_3924f8:
    if (ctx->pc == 0x3924F8u) {
        ctx->pc = 0x3924F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924F4u;
        // 0x3924f8: 0xa4440004  sh          $a0, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3924FCu;
        goto label_3924fc;
    }
    ctx->pc = 0x3924F4u;
    {
        const bool branch_taken_0x3924f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3924F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3924F4u;
        // 0x3924f8: 0xa4440004  sh          $a0, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3924f4) {
            ctx->pc = 0x392500u;
            goto label_392500;
        }
    }
    ctx->pc = 0x3924FCu;
label_3924fc:
    // 0x3924fc: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x3924fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_392500:
    // 0x392500: 0x10000181  b           . + 4 + (0x181 << 2)
label_392504:
    if (ctx->pc == 0x392504u) {
        ctx->pc = 0x392504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392500u;
        // 0x392504: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392508u;
        goto label_392508;
    }
    ctx->pc = 0x392500u;
    {
        const bool branch_taken_0x392500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392500u;
        // 0x392504: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392500) {
            ctx->pc = 0x392B08u;
            goto label_392b08;
        }
    }
    ctx->pc = 0x392508u;
label_392508:
    // 0x392508: 0x2a0702d  daddu       $t6, $s5, $zero
    ctx->pc = 0x392508u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_39250c:
    // 0x39250c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x39250cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392510:
    // 0x392510: 0x25cf0001  addiu       $t7, $t6, 0x1
    ctx->pc = 0x392510u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_392514:
    // 0x392514: 0x3c198000  lui         $t9, 0x8000
    ctx->pc = 0x392514u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)32768 << 16));
label_392518:
    // 0x392518: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x392518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39251c:
    // 0x39251c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x39251cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_392520:
    // 0x392520: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x392520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_392524:
    // 0x392524: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x392524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_392528:
    // 0x392528: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x392528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
label_39252c:
    // 0x39252c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39252cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_392530:
    // 0x392530: 0x120000a7  beqz        $s0, . + 4 + (0xA7 << 2)
label_392534:
    if (ctx->pc == 0x392534u) {
        ctx->pc = 0x392534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392530u;
        // 0x392534: 0x8fa7003c  lw          $a3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392538u;
        goto label_392538;
    }
    ctx->pc = 0x392530u;
    {
        const bool branch_taken_0x392530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392530u;
        // 0x392534: 0x8fa7003c  lw          $a3, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392530) {
            ctx->pc = 0x3927D0u;
            goto label_3927d0;
        }
    }
    ctx->pc = 0x392538u;
label_392538:
    // 0x392538: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x392538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39253c:
    // 0x39253c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x39253cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392540:
    // 0x392540: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x392540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392544:
    // 0x392544: 0x0  nop
    ctx->pc = 0x392544u;
    // NOP
label_392548:
    // 0x392548: 0x260d0004  addiu       $t5, $s0, 0x4
    ctx->pc = 0x392548u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_39254c:
    // 0x39254c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x39254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_392550:
    // 0x392550: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_392554:
    if (ctx->pc == 0x392554u) {
        ctx->pc = 0x392554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392550u;
        // 0x392554: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392558u;
        goto label_392558;
    }
    ctx->pc = 0x392550u;
    {
        const bool branch_taken_0x392550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x392550) {
            ctx->pc = 0x392554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392550u;
            // 0x392554: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x392558u;
            goto label_392558;
        }
    }
    ctx->pc = 0x392558u;
label_392558:
    // 0x392558: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x392558u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_39255c:
    // 0x39255c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39255cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392560:
    // 0x392560: 0x1810  mfhi        $v1
    ctx->pc = 0x392560u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_392564:
    // 0x392564: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x392564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_392568:
    // 0x392568: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x392568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_39256c:
    // 0x39256c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_392570:
    // 0x392570: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x392570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_392574:
    // 0x392574: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_392578:
    if (ctx->pc == 0x392578u) {
        ctx->pc = 0x392578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392574u;
        // 0x392578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39257Cu;
        goto label_39257c;
    }
    ctx->pc = 0x392574u;
    {
        const bool branch_taken_0x392574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392574u;
        // 0x392578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392574) {
            ctx->pc = 0x392590u;
            goto label_392590;
        }
    }
    ctx->pc = 0x39257Cu;
label_39257c:
    // 0x39257c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_392580:
    if (ctx->pc == 0x392580u) {
        ctx->pc = 0x392580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39257Cu;
        // 0x392580: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392584u;
        goto label_392584;
    }
    ctx->pc = 0x39257Cu;
    {
        const bool branch_taken_0x39257c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39257c) {
            ctx->pc = 0x392580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39257Cu;
            // 0x392580: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x392584u;
            goto label_392584;
        }
    }
    ctx->pc = 0x392584u;
label_392584:
    // 0x392584: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x392584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_392588:
    // 0x392588: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x392588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_39258c:
    // 0x39258c: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x39258cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_392590:
    // 0x392590: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_392594:
    if (ctx->pc == 0x392594u) {
        ctx->pc = 0x392594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392590u;
        // 0x392594: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392598u;
        goto label_392598;
    }
    ctx->pc = 0x392590u;
    {
        const bool branch_taken_0x392590 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x392590) {
            ctx->pc = 0x392594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392590u;
            // 0x392594: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x392598u;
            goto label_392598;
        }
    }
    ctx->pc = 0x392598u;
label_392598:
    // 0x392598: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x392598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_39259c:
    // 0x39259c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_3925a0:
    if (ctx->pc == 0x3925A0u) {
        ctx->pc = 0x3925A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39259Cu;
        // 0x3925a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925A4u;
        goto label_3925a4;
    }
    ctx->pc = 0x39259Cu;
    {
        const bool branch_taken_0x39259c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3925A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39259Cu;
        // 0x3925a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39259c) {
            ctx->pc = 0x3925B8u;
            goto label_3925b8;
        }
    }
    ctx->pc = 0x3925A4u;
label_3925a4:
    // 0x3925a4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_3925a8:
    if (ctx->pc == 0x3925A8u) {
        ctx->pc = 0x3925A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925A4u;
        // 0x3925a8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925ACu;
        goto label_3925ac;
    }
    ctx->pc = 0x3925A4u;
    {
        const bool branch_taken_0x3925a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3925a4) {
            ctx->pc = 0x3925A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3925A4u;
            // 0x3925a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3925ACu;
            goto label_3925ac;
        }
    }
    ctx->pc = 0x3925ACu;
label_3925ac:
    // 0x3925ac: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x3925acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3925b0:
    // 0x3925b0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3925b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3925b4:
    // 0x3925b4: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x3925b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_3925b8:
    // 0x3925b8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3925b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3925bc:
    // 0x3925bc: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_3925c0:
    if (ctx->pc == 0x3925C0u) {
        ctx->pc = 0x3925C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925BCu;
        // 0x3925c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925C4u;
        goto label_3925c4;
    }
    ctx->pc = 0x3925BCu;
    {
        const bool branch_taken_0x3925bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3925C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925BCu;
        // 0x3925c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925bc) {
            ctx->pc = 0x3927B0u;
            goto label_3927b0;
        }
    }
    ctx->pc = 0x3925C4u;
label_3925c4:
    // 0x3925c4: 0x12c0002c  beqz        $s6, . + 4 + (0x2C << 2)
label_3925c8:
    if (ctx->pc == 0x3925C8u) {
        ctx->pc = 0x3925C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925C4u;
        // 0x3925c8: 0x26470002  addiu       $a3, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925CCu;
        goto label_3925cc;
    }
    ctx->pc = 0x3925C4u;
    {
        const bool branch_taken_0x3925c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3925C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925C4u;
        // 0x3925c8: 0x26470002  addiu       $a3, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925c4) {
            ctx->pc = 0x392678u;
            goto label_392678;
        }
    }
    ctx->pc = 0x3925CCu;
label_3925cc:
    // 0x3925cc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3925ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3925d0:
    // 0x3925d0: 0x1ac00011  blez        $s6, . + 4 + (0x11 << 2)
label_3925d4:
    if (ctx->pc == 0x3925D4u) {
        ctx->pc = 0x3925D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925D0u;
        // 0x3925d4: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925D8u;
        goto label_3925d8;
    }
    ctx->pc = 0x3925D0u;
    {
        const bool branch_taken_0x3925d0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3925D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925D0u;
        // 0x3925d4: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925d0) {
            ctx->pc = 0x392618u;
            goto label_392618;
        }
    }
    ctx->pc = 0x3925D8u;
label_3925d8:
    // 0x3925d8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_3925dc:
    if (ctx->pc == 0x3925DCu) {
        ctx->pc = 0x3925DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925D8u;
        // 0x3925dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925E0u;
        goto label_3925e0;
    }
    ctx->pc = 0x3925D8u;
    {
        const bool branch_taken_0x3925d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3925DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925D8u;
        // 0x3925dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925d8) {
            ctx->pc = 0x392634u;
            goto label_392634;
        }
    }
    ctx->pc = 0x3925E0u;
label_3925e0:
    // 0x3925e0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3925e4:
    if (ctx->pc == 0x3925E4u) {
        ctx->pc = 0x3925E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925E0u;
        // 0x3925e4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925E8u;
        goto label_3925e8;
    }
    ctx->pc = 0x3925E0u;
    {
        const bool branch_taken_0x3925e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3925e0) {
            ctx->pc = 0x3925E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3925E0u;
            // 0x3925e4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39261Cu;
            goto label_39261c;
        }
    }
    ctx->pc = 0x3925E8u;
label_3925e8:
    // 0x3925e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3925e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3925ec:
    // 0x3925ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3925f0:
    if (ctx->pc == 0x3925F0u) {
        ctx->pc = 0x3925F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925ECu;
        // 0x3925f0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3925F4u;
        goto label_3925f4;
    }
    ctx->pc = 0x3925ECu;
    {
        const bool branch_taken_0x3925ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3925F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3925ECu;
        // 0x3925f0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3925ec) {
            ctx->pc = 0x392608u;
            goto label_392608;
        }
    }
    ctx->pc = 0x3925F4u;
label_3925f4:
    // 0x3925f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3925f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3925f8:
    // 0x3925f8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3925f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3925fc:
    // 0x3925fc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3925fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_392600:
    // 0x392600: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x392600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_392604:
    // 0x392604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x392604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_392608:
    // 0x392608: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x392608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_39260c:
    // 0x39260c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x39260cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_392610:
    // 0x392610: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x392610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_392614:
    // 0x392614: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x392614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_392618:
    // 0x392618: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x392618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39261c:
    // 0x39261c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x39261cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_392620:
    // 0x392620: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x392620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_392624:
    // 0x392624: 0x136502b  sltu        $t2, $t1, $s6
    ctx->pc = 0x392624u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_392628:
    // 0x392628: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x392628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39262c:
    // 0x39262c: 0x11400012  beqz        $t2, . + 4 + (0x12 << 2)
label_392630:
    if (ctx->pc == 0x392630u) {
        ctx->pc = 0x392630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39262Cu;
        // 0x392630: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392634u;
        goto label_392634;
    }
    ctx->pc = 0x39262Cu;
    {
        const bool branch_taken_0x39262c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x392630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39262Cu;
        // 0x392630: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39262c) {
            ctx->pc = 0x392678u;
            goto label_392678;
        }
    }
    ctx->pc = 0x392634u;
label_392634:
    // 0x392634: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x392634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392638:
    // 0x392638: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x392638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_39263c:
    // 0x39263c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x39263cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_392640:
    // 0x392640: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x392640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_392644:
    // 0x392644: 0x136502b  sltu        $t2, $t1, $s6
    ctx->pc = 0x392644u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_392648:
    // 0x392648: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x392648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39264c:
    // 0x39264c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x39264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_392650:
    // 0x392650: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x392650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_392654:
    // 0x392654: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x392654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_392658:
    // 0x392658: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x392658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_39265c:
    // 0x39265c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x39265cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_392660:
    // 0x392660: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x392660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_392664:
    // 0x392664: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x392664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_392668:
    // 0x392668: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x392668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_39266c:
    // 0x39266c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x39266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_392670:
    // 0x392670: 0x1540fff1  bnez        $t2, . + 4 + (-0xF << 2)
label_392674:
    if (ctx->pc == 0x392674u) {
        ctx->pc = 0x392674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392670u;
        // 0x392674: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392678u;
        goto label_392678;
    }
    ctx->pc = 0x392670u;
    {
        const bool branch_taken_0x392670 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x392674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392670u;
        // 0x392674: 0xaca3001c  sw          $v1, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392670) {
            ctx->pc = 0x392638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392638;
        }
    }
    ctx->pc = 0x392678u;
label_392678:
    // 0x392678: 0x524c000c  beql        $s2, $t4, . + 4 + (0xC << 2)
label_39267c:
    if (ctx->pc == 0x39267Cu) {
        ctx->pc = 0x39267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392678u;
        // 0x39267c: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392680u;
        goto label_392680;
    }
    ctx->pc = 0x392678u;
    {
        const bool branch_taken_0x392678 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 12));
        if (branch_taken_0x392678) {
            ctx->pc = 0x39267Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392678u;
            // 0x39267c: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3926ACu;
            goto label_3926ac;
        }
    }
    ctx->pc = 0x392680u;
label_392680:
    // 0x392680: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_392684:
    if (ctx->pc == 0x392684u) {
        ctx->pc = 0x392684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392680u;
        // 0x392684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392688u;
        goto label_392688;
    }
    ctx->pc = 0x392680u;
    {
        const bool branch_taken_0x392680 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x392684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392680u;
        // 0x392684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392680) {
            ctx->pc = 0x392698u;
            goto label_392698;
        }
    }
    ctx->pc = 0x392688u;
label_392688:
    // 0x392688: 0x5242000c  beql        $s2, $v0, . + 4 + (0xC << 2)
label_39268c:
    if (ctx->pc == 0x39268Cu) {
        ctx->pc = 0x39268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392688u;
        // 0x39268c: 0x8e0a0004  lw          $t2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392690u;
        goto label_392690;
    }
    ctx->pc = 0x392688u;
    {
        const bool branch_taken_0x392688 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x392688) {
            ctx->pc = 0x39268Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392688u;
            // 0x39268c: 0x8e0a0004  lw          $t2, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3926BCu;
            goto label_3926bc;
        }
    }
    ctx->pc = 0x392690u;
label_392690:
    // 0x392690: 0x1000000e  b           . + 4 + (0xE << 2)
label_392694:
    if (ctx->pc == 0x392694u) {
        ctx->pc = 0x392694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392690u;
        // 0x392694: 0x251001b  divu        $zero, $s2, $s1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x392698u;
        goto label_392698;
    }
    ctx->pc = 0x392690u;
    {
        const bool branch_taken_0x392690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392690u;
        // 0x392694: 0x251001b  divu        $zero, $s2, $s1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392690) {
            ctx->pc = 0x3926CCu;
            goto label_3926cc;
        }
    }
    ctx->pc = 0x392698u;
label_392698:
    // 0x392698: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x392698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39269c:
    // 0x39269c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x39269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_3926a0:
    // 0x3926a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3926a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3926a4:
    // 0x3926a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3926a8:
    if (ctx->pc == 0x3926A8u) {
        ctx->pc = 0x3926A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926A4u;
        // 0x3926a8: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3926ACu;
        goto label_3926ac;
    }
    ctx->pc = 0x3926A4u;
    {
        const bool branch_taken_0x3926a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3926A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926A4u;
        // 0x3926a8: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3926a4) {
            ctx->pc = 0x3926C8u;
            goto label_3926c8;
        }
    }
    ctx->pc = 0x3926ACu;
label_3926ac:
    // 0x3926ac: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x3926acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_3926b0:
    // 0x3926b0: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x3926b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3926b4:
    // 0x3926b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3926b8:
    if (ctx->pc == 0x3926B8u) {
        ctx->pc = 0x3926B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926B4u;
        // 0x3926b8: 0xafa90034  sw          $t1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3926BCu;
        goto label_3926bc;
    }
    ctx->pc = 0x3926B4u;
    {
        const bool branch_taken_0x3926b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3926B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926B4u;
        // 0x3926b8: 0xafa90034  sw          $t1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3926b4) {
            ctx->pc = 0x3926C8u;
            goto label_3926c8;
        }
    }
    ctx->pc = 0x3926BCu;
label_3926bc:
    // 0x3926bc: 0xafaa0030  sw          $t2, 0x30($sp)
    ctx->pc = 0x3926bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 10));
label_3926c0:
    // 0x3926c0: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x3926c0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3926c4:
    // 0x3926c4: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x3926c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
label_3926c8:
    // 0x3926c8: 0x251001b  divu        $zero, $s2, $s1
    ctx->pc = 0x3926c8u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_3926cc:
    // 0x3926cc: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
label_3926d0:
    if (ctx->pc == 0x3926D0u) {
        ctx->pc = 0x3926D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926CCu;
        // 0x3926d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3926D4u;
        goto label_3926d4;
    }
    ctx->pc = 0x3926CCu;
    {
        const bool branch_taken_0x3926cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3926cc) {
            ctx->pc = 0x3926D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3926CCu;
            // 0x3926d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3926D4u;
            goto label_3926d4;
        }
    }
    ctx->pc = 0x3926D4u;
label_3926d4:
    // 0x3926d4: 0x8faa0024  lw          $t2, 0x24($sp)
    ctx->pc = 0x3926d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3926d8:
    // 0x3926d8: 0x1e0a82d  daddu       $s5, $t7, $zero
    ctx->pc = 0x3926d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_3926dc:
    // 0x3926dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3926dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3926e0:
    // 0x3926e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3926e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3926e4:
    // 0x3926e4: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x3926e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3926e8:
    // 0x3926e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3926e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3926ec:
    // 0x3926ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3926ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3926f0:
    // 0x3926f0: 0x1810  mfhi        $v1
    ctx->pc = 0x3926f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3926f4:
    // 0x3926f4: 0x271001b  divu        $zero, $s3, $s1
    ctx->pc = 0x3926f4u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
label_3926f8:
    // 0x3926f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3926f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3926fc:
    // 0x3926fc: 0x4010  mfhi        $t0
    ctx->pc = 0x3926fcu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_392700:
    // 0x392700: 0xf1001b  divu        $zero, $a3, $s1
    ctx->pc = 0x392700u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_392704:
    // 0x392704: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x392704u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_392708:
    // 0x392708: 0x1400013  mtlo        $t2
    ctx->pc = 0x392708u;
    ctx->lo = GPR_U64(ctx, 10);
label_39270c:
    // 0x39270c: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x39270cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_392710:
    // 0x392710: 0x3810  mfhi        $a3
    ctx->pc = 0x392710u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_392714:
    // 0x392714: 0x704a5800  madd        $t3, $v0, $t2
    ctx->pc = 0x392714u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_392718:
    // 0x392718: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x392718u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_39271c:
    // 0x39271c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x39271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_392720:
    // 0x392720: 0x1684021  addu        $t0, $t3, $t0
    ctx->pc = 0x392720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_392724:
    // 0x392724: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x392724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_392728:
    // 0x392728: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x392728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_39272c:
    // 0x39272c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x39272cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
label_392730:
    // 0x392730: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x392730u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_392734:
    // 0x392734: 0xa5220002  sh          $v0, 0x2($t1)
    ctx->pc = 0x392734u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 2));
label_392738:
    // 0x392738: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x392738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_39273c:
    // 0x39273c: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x39273cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
label_392740:
    // 0x392740: 0xa5220004  sh          $v0, 0x4($t1)
    ctx->pc = 0x392740u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 2));
label_392744:
    // 0x392744: 0x7fac0040  sq          $t4, 0x40($sp)
    ctx->pc = 0x392744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 12));
label_392748:
    // 0x392748: 0x7fad0050  sq          $t5, 0x50($sp)
    ctx->pc = 0x392748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 13));
label_39274c:
    // 0x39274c: 0x7fae0060  sq          $t6, 0x60($sp)
    ctx->pc = 0x39274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 14));
label_392750:
    // 0x392750: 0x7faf0070  sq          $t7, 0x70($sp)
    ctx->pc = 0x392750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 15));
label_392754:
    // 0x392754: 0xc0e4322  jal         func_390C88
label_392758:
    if (ctx->pc == 0x392758u) {
        ctx->pc = 0x392758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392754u;
        // 0x392758: 0x7fb90080  sq          $t9, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39275Cu;
        goto label_39275c;
    }
    ctx->pc = 0x392754u;
    SET_GPR_U32(ctx, 31, 0x39275Cu);
    ctx->pc = 0x392758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392754u;
    // 0x392758: 0x7fb90080  sq          $t9, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390C88u, 0x392754u, 0x39275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39275Cu;
label_39275c:
    // 0x39275c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x39275cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_392760:
    // 0x392760: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x392760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_392764:
    // 0x392764: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x392764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_392768:
    // 0x392768: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x392768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39276c:
    // 0x39276c: 0xc0e4388  jal         func_390E20
label_392770:
    if (ctx->pc == 0x392770u) {
        ctx->pc = 0x392770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39276Cu;
        // 0x392770: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392774u;
        goto label_392774;
    }
    ctx->pc = 0x39276Cu;
    SET_GPR_U32(ctx, 31, 0x392774u);
    ctx->pc = 0x392770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39276Cu;
    // 0x392770: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390E20u, 0x39276Cu, 0x392774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392774u;
label_392774:
    // 0x392774: 0x7bae0060  lq          $t6, 0x60($sp)
    ctx->pc = 0x392774u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_392778:
    // 0x392778: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x392778u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_39277c:
    // 0x39277c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x39277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_392780:
    // 0x392780: 0x2ae2023  subu        $a0, $s5, $t6
    ctx->pc = 0x392780u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 14)));
label_392784:
    // 0x392784: 0x7bb90080  lq          $t9, 0x80($sp)
    ctx->pc = 0x392784u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_392788:
    // 0x392788: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x392788u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_39278c:
    // 0x39278c: 0x7bac0040  lq          $t4, 0x40($sp)
    ctx->pc = 0x39278cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_392790:
    // 0x392790: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x392790u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_392794:
    // 0x392794: 0x7bad0050  lq          $t5, 0x50($sp)
    ctx->pc = 0x392794u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_392798:
    // 0x392798: 0x324102a  slt         $v0, $t9, $a0
    ctx->pc = 0x392798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_39279c:
    // 0x39279c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3927a0:
    if (ctx->pc == 0x3927A0u) {
        ctx->pc = 0x3927A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39279Cu;
        // 0x3927a0: 0x7baf0070  lq          $t7, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927A4u;
        goto label_3927a4;
    }
    ctx->pc = 0x39279Cu;
    {
        const bool branch_taken_0x39279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3927A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39279Cu;
        // 0x3927a0: 0x7baf0070  lq          $t7, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39279c) {
            ctx->pc = 0x3927B0u;
            goto label_3927b0;
        }
    }
    ctx->pc = 0x3927A4u;
label_3927a4:
    // 0x3927a4: 0xafb20038  sw          $s2, 0x38($sp)
    ctx->pc = 0x3927a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 18));
label_3927a8:
    // 0x3927a8: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x3927a8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3927ac:
    // 0x3927ac: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x3927acu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3927b0:
    // 0x3927b0: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x3927b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3927b4:
    // 0x3927b4: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x3927b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3927b8:
    // 0x3927b8: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
label_3927bc:
    if (ctx->pc == 0x3927BCu) {
        ctx->pc = 0x3927BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927B8u;
        // 0x3927bc: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927C0u;
        goto label_3927c0;
    }
    ctx->pc = 0x3927B8u;
    {
        const bool branch_taken_0x3927b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3927BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927B8u;
        // 0x3927bc: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3927b8) {
            ctx->pc = 0x392550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392550;
        }
    }
    ctx->pc = 0x3927C0u;
label_3927c0:
    // 0x3927c0: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x3927c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3927c4:
    // 0x3927c4: 0x5600ff60  bnel        $s0, $zero, . + 4 + (-0xA0 << 2)
label_3927c8:
    if (ctx->pc == 0x3927C8u) {
        ctx->pc = 0x3927C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927C4u;
        // 0x3927c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927CCu;
        goto label_3927cc;
    }
    ctx->pc = 0x3927C4u;
    {
        const bool branch_taken_0x3927c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3927c4) {
            ctx->pc = 0x3927C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3927C4u;
            // 0x3927c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392548;
        }
    }
    ctx->pc = 0x3927CCu;
label_3927cc:
    // 0x3927cc: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x3927ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3927d0:
    // 0x3927d0: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x3927d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3927d4:
    // 0x3927d4: 0x1440ff52  bnez        $v0, . + 4 + (-0xAE << 2)
label_3927d8:
    if (ctx->pc == 0x3927D8u) {
        ctx->pc = 0x3927D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927D4u;
        // 0x3927d8: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927DCu;
        goto label_3927dc;
    }
    ctx->pc = 0x3927D4u;
    {
        const bool branch_taken_0x3927d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3927D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927D4u;
        // 0x3927d8: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3927d4) {
            ctx->pc = 0x392520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392520;
        }
    }
    ctx->pc = 0x3927DCu;
label_3927dc:
    // 0x3927dc: 0x8fab0038  lw          $t3, 0x38($sp)
    ctx->pc = 0x3927dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3927e0:
    // 0x3927e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3927e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3927e4:
    // 0x3927e4: 0x5162000c  beql        $t3, $v0, . + 4 + (0xC << 2)
label_3927e8:
    if (ctx->pc == 0x3927E8u) {
        ctx->pc = 0x3927E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927E4u;
        // 0x3927e8: 0x8fc7000c  lw          $a3, 0xC($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927ECu;
        goto label_3927ec;
    }
    ctx->pc = 0x3927E4u;
    {
        const bool branch_taken_0x3927e4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        if (branch_taken_0x3927e4) {
            ctx->pc = 0x3927E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3927E4u;
            // 0x3927e8: 0x8fc7000c  lw          $a3, 0xC($fp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392818u;
            goto label_392818;
        }
    }
    ctx->pc = 0x3927ECu;
label_3927ec:
    // 0x3927ec: 0x11600005  beqz        $t3, . + 4 + (0x5 << 2)
label_3927f0:
    if (ctx->pc == 0x3927F0u) {
        ctx->pc = 0x3927F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927ECu;
        // 0x3927f0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927F4u;
        goto label_3927f4;
    }
    ctx->pc = 0x3927ECu;
    {
        const bool branch_taken_0x3927ec = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3927F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927ECu;
        // 0x3927f0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3927ec) {
            ctx->pc = 0x392804u;
            goto label_392804;
        }
    }
    ctx->pc = 0x3927F4u;
label_3927f4:
    // 0x3927f4: 0x1163000c  beq         $t3, $v1, . + 4 + (0xC << 2)
label_3927f8:
    if (ctx->pc == 0x3927F8u) {
        ctx->pc = 0x3927F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927F4u;
        // 0x3927f8: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927FCu;
        goto label_3927fc;
    }
    ctx->pc = 0x3927F4u;
    {
        const bool branch_taken_0x3927f4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        ctx->pc = 0x3927F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927F4u;
        // 0x3927f8: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3927f4) {
            ctx->pc = 0x392828u;
            goto label_392828;
        }
    }
    ctx->pc = 0x3927FCu;
label_3927fc:
    // 0x3927fc: 0x10000010  b           . + 4 + (0x10 << 2)
label_392800:
    if (ctx->pc == 0x392800u) {
        ctx->pc = 0x392800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927FCu;
        // 0x392800: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392804u;
        goto label_392804;
    }
    ctx->pc = 0x3927FCu;
    {
        const bool branch_taken_0x3927fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927FCu;
        // 0x392800: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3927fc) {
            ctx->pc = 0x392840u;
            goto label_392840;
        }
    }
    ctx->pc = 0x392804u;
label_392804:
    // 0x392804: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x392804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_392808:
    // 0x392808: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x392808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_39280c:
    // 0x39280c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x39280cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_392810:
    // 0x392810: 0x10000009  b           . + 4 + (0x9 << 2)
label_392814:
    if (ctx->pc == 0x392814u) {
        ctx->pc = 0x392814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392810u;
        // 0x392814: 0xafa60034  sw          $a2, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392818u;
        goto label_392818;
    }
    ctx->pc = 0x392810u;
    {
        const bool branch_taken_0x392810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392810u;
        // 0x392814: 0xafa60034  sw          $a2, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392810) {
            ctx->pc = 0x392838u;
            goto label_392838;
        }
    }
    ctx->pc = 0x392818u;
label_392818:
    // 0x392818: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x392818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_39281c:
    // 0x39281c: 0x8fc90008  lw          $t1, 0x8($fp)
    ctx->pc = 0x39281cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_392820:
    // 0x392820: 0x10000005  b           . + 4 + (0x5 << 2)
label_392824:
    if (ctx->pc == 0x392824u) {
        ctx->pc = 0x392824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392820u;
        // 0x392824: 0xafa90034  sw          $t1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392828u;
        goto label_392828;
    }
    ctx->pc = 0x392820u;
    {
        const bool branch_taken_0x392820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392820u;
        // 0x392824: 0xafa90034  sw          $t1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392820) {
            ctx->pc = 0x392838u;
            goto label_392838;
        }
    }
    ctx->pc = 0x392828u;
label_392828:
    // 0x392828: 0x8fca0004  lw          $t2, 0x4($fp)
    ctx->pc = 0x392828u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_39282c:
    // 0x39282c: 0xafaa0030  sw          $t2, 0x30($sp)
    ctx->pc = 0x39282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 10));
label_392830:
    // 0x392830: 0x8fcb000c  lw          $t3, 0xC($fp)
    ctx->pc = 0x392830u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_392834:
    // 0x392834: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x392834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
label_392838:
    // 0x392838: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x392838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_39283c:
    // 0x39283c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_392840:
    // 0x392840: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_392844:
    if (ctx->pc == 0x392844u) {
        ctx->pc = 0x392844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392840u;
        // 0x392844: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392848u;
        goto label_392848;
    }
    ctx->pc = 0x392840u;
    {
        const bool branch_taken_0x392840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x392840) {
            ctx->pc = 0x392844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392840u;
            // 0x392844: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x392848u;
            goto label_392848;
        }
    }
    ctx->pc = 0x392848u;
label_392848:
    // 0x392848: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x392848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39284c:
    // 0x39284c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x39284cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_392850:
    // 0x392850: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x392850u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_392854:
    // 0x392854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x392854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_392858:
    // 0x392858: 0x1e0a82d  daddu       $s5, $t7, $zero
    ctx->pc = 0x392858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_39285c:
    // 0x39285c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x39285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_392860:
    // 0x392860: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x392860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_392864:
    // 0x392864: 0x3810  mfhi        $a3
    ctx->pc = 0x392864u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_392868:
    // 0x392868: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x392868u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_39286c:
    // 0x39286c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x39286cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_392870:
    // 0x392870: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x392870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_392874:
    // 0x392874: 0x24490002  addiu       $t1, $v0, 0x2
    ctx->pc = 0x392874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_392878:
    // 0x392878: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x392878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_39287c:
    // 0x39287c: 0x4010  mfhi        $t0
    ctx->pc = 0x39287cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_392880:
    // 0x392880: 0x123001b  divu        $zero, $t1, $v1
    ctx->pc = 0x392880u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
label_392884:
    // 0x392884: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x392884u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_392888:
    // 0x392888: 0x8fa90024  lw          $t1, 0x24($sp)
    ctx->pc = 0x392888u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_39288c:
    // 0x39288c: 0x1200013  mtlo        $t1
    ctx->pc = 0x39288cu;
    ctx->lo = GPR_U64(ctx, 9);
label_392890:
    // 0x392890: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x392890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_392894:
    // 0x392894: 0x1810  mfhi        $v1
    ctx->pc = 0x392894u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_392898:
    // 0x392898: 0x70495800  madd        $t3, $v0, $t1
    ctx->pc = 0x392898u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_39289c:
    // 0x39289c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x39289cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3928a0:
    // 0x3928a0: 0x1673821  addu        $a3, $t3, $a3
    ctx->pc = 0x3928a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_3928a4:
    // 0x3928a4: 0x1684021  addu        $t0, $t3, $t0
    ctx->pc = 0x3928a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_3928a8:
    // 0x3928a8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x3928a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_3928ac:
    // 0x3928ac: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x3928acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3928b0:
    // 0x3928b0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3928b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3928b4:
    // 0x3928b4: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x3928b4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
label_3928b8:
    // 0x3928b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3928b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3928bc:
    // 0x3928bc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x3928bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_3928c0:
    // 0x3928c0: 0xa5420002  sh          $v0, 0x2($t2)
    ctx->pc = 0x3928c0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 2));
label_3928c4:
    // 0x3928c4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3928c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3928c8:
    // 0x3928c8: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x3928c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
label_3928cc:
    // 0x3928cc: 0xc0e4322  jal         func_390C88
label_3928d0:
    if (ctx->pc == 0x3928D0u) {
        ctx->pc = 0x3928D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928CCu;
        // 0x3928d0: 0xa5420004  sh          $v0, 0x4($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928D4u;
        goto label_3928d4;
    }
    ctx->pc = 0x3928CCu;
    SET_GPR_U32(ctx, 31, 0x3928D4u);
    ctx->pc = 0x3928D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3928CCu;
    // 0x3928d0: 0xa5420004  sh          $v0, 0x4($t2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390C88u, 0x3928CCu, 0x3928D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3928D4u;
label_3928d4:
    // 0x3928d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3928d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3928d8:
    // 0x3928d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3928d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3928dc:
    // 0x3928dc: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x3928dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3928e0:
    // 0x3928e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3928e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3928e4:
    // 0x3928e4: 0xc0e4388  jal         func_390E20
label_3928e8:
    if (ctx->pc == 0x3928E8u) {
        ctx->pc = 0x3928E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928E4u;
        // 0x3928e8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3928ECu;
        goto label_3928ec;
    }
    ctx->pc = 0x3928E4u;
    SET_GPR_U32(ctx, 31, 0x3928ECu);
    ctx->pc = 0x3928E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3928E4u;
    // 0x3928e8: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390E20u, 0x3928E4u, 0x3928ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3928ECu;
label_3928ec:
    // 0x3928ec: 0x8fa90034  lw          $t1, 0x34($sp)
    ctx->pc = 0x3928ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3928f0:
    // 0x3928f0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x3928f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3928f4:
    // 0x3928f4: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x3928f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_3928f8:
    // 0x3928f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3928fc:
    if (ctx->pc == 0x3928FCu) {
        ctx->pc = 0x3928FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928F8u;
        // 0x3928fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392900u;
        goto label_392900;
    }
    ctx->pc = 0x3928F8u;
    {
        const bool branch_taken_0x3928f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3928FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3928F8u;
        // 0x3928fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3928f8) {
            ctx->pc = 0x39290Cu;
            goto label_39290c;
        }
    }
    ctx->pc = 0x392900u;
label_392900:
    // 0x392900: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x392900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_392904:
    // 0x392904: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x392904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392908:
    // 0x392908: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x392908u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_39290c:
    // 0x39290c: 0x8faa0034  lw          $t2, 0x34($sp)
    ctx->pc = 0x39290cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_392910:
    // 0x392910: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x392910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_392914:
    // 0x392914: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_392918:
    if (ctx->pc == 0x392918u) {
        ctx->pc = 0x392918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392914u;
        // 0x392918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39291Cu;
        goto label_39291c;
    }
    ctx->pc = 0x392914u;
    {
        const bool branch_taken_0x392914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392914u;
        // 0x392918: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392914) {
            ctx->pc = 0x392928u;
            goto label_392928;
        }
    }
    ctx->pc = 0x39291Cu;
label_39291c:
    // 0x39291c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x39291cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_392920:
    // 0x392920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392924:
    // 0x392924: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x392924u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_392928:
    // 0x392928: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x392928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_39292c:
    // 0x39292c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_392930:
    if (ctx->pc == 0x392930u) {
        ctx->pc = 0x392930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39292Cu;
        // 0x392930: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392934u;
        goto label_392934;
    }
    ctx->pc = 0x39292Cu;
    {
        const bool branch_taken_0x39292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39292Cu;
        // 0x392930: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39292c) {
            ctx->pc = 0x392A88u;
            goto label_392a88;
        }
    }
    ctx->pc = 0x392934u;
label_392934:
    // 0x392934: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x392934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_392938:
    // 0x392938: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x392938u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_39293c:
    // 0x39293c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x39293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_392940:
    // 0x392940: 0xaeeb0004  sw          $t3, 0x4($s7)
    ctx->pc = 0x392940u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 11));
label_392944:
    // 0x392944: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x392944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_392948:
    // 0x392948: 0x95220002  lhu         $v0, 0x2($t1)
    ctx->pc = 0x392948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
label_39294c:
    // 0x39294c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x39294cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_392950:
    // 0x392950: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x392950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_392954:
    // 0x392954: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x392954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_392958:
    // 0x392958: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x392958u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_39295c:
    // 0x39295c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x39295cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_392960:
    // 0x392960: 0xc0e4388  jal         func_390E20
label_392964:
    if (ctx->pc == 0x392964u) {
        ctx->pc = 0x392964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392960u;
        // 0x392964: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392968u;
        goto label_392968;
    }
    ctx->pc = 0x392960u;
    SET_GPR_U32(ctx, 31, 0x392968u);
    ctx->pc = 0x392964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392960u;
    // 0x392964: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390E20u, 0x392960u, 0x392968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392968u;
label_392968:
    // 0x392968: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x392968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_39296c:
    // 0x39296c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x39296cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_392970:
    // 0x392970: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x392970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_392974:
    // 0x392974: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_392978:
    if (ctx->pc == 0x392978u) {
        ctx->pc = 0x392978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392974u;
        // 0x392978: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39297Cu;
        goto label_39297c;
    }
    ctx->pc = 0x392974u;
    {
        const bool branch_taken_0x392974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392974u;
        // 0x392978: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392974) {
            ctx->pc = 0x392994u;
            goto label_392994;
        }
    }
    ctx->pc = 0x39297Cu;
label_39297c:
    // 0x39297c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x39297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_392980:
    // 0x392980: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x392980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_392984:
    // 0x392984: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x392984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_392988:
    // 0x392988: 0xaee40004  sw          $a0, 0x4($s7)
    ctx->pc = 0x392988u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 4));
label_39298c:
    // 0x39298c: 0x9462fffc  lhu         $v0, -0x4($v1)
    ctx->pc = 0x39298cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_392990:
    // 0x392990: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x392990u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_392994:
    // 0x392994: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x392994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_392998:
    // 0x392998: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x392998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_39299c:
    // 0x39299c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x39299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3929a0:
    // 0x3929a0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3929a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3929a4:
    // 0x3929a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3929a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3929a8:
    // 0x3929a8: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x3929a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_3929ac:
    // 0x3929ac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3929acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3929b0:
    // 0x3929b0: 0x40f809  jalr        $v0
label_3929b4:
    if (ctx->pc == 0x3929B4u) {
        ctx->pc = 0x3929B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929B0u;
        // 0x3929b4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3929B8u;
        goto label_3929b8;
    }
    ctx->pc = 0x3929B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3929B8u);
        ctx->pc = 0x3929B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929B0u;
        // 0x3929b4: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3929B0u, 0x3929B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3929B8u;
label_3929b8:
    // 0x3929b8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x3929b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3929bc:
    // 0x3929bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3929bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3929c0:
    // 0x3929c0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3929c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_3929c4:
    // 0x3929c4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3929c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3929c8:
    // 0x3929c8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3929c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3929cc:
    // 0x3929cc: 0x24e7e880  addiu       $a3, $a3, -0x1780
    ctx->pc = 0x3929ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_3929d0:
    // 0x3929d0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3929d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3929d4:
    // 0x3929d4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3929d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3929d8:
    // 0x3929d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3929d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3929dc:
    // 0x3929dc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3929dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3929e0:
    // 0x3929e0: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x3929e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_3929e4:
    // 0x3929e4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3929e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_3929e8:
    // 0x3929e8: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x3929e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
label_3929ec:
    // 0x3929ec: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x3929ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_3929f0:
    // 0x3929f0: 0x8ce20108  lw          $v0, 0x108($a3)
    ctx->pc = 0x3929f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 264)));
label_3929f4:
    // 0x3929f4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3929f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3929f8:
    // 0x3929f8: 0x40f809  jalr        $v0
label_3929fc:
    if (ctx->pc == 0x3929FCu) {
        ctx->pc = 0x3929FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929F8u;
        // 0x3929fc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A00u;
        goto label_392a00;
    }
    ctx->pc = 0x3929F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392A00u);
        ctx->pc = 0x3929FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929F8u;
        // 0x3929fc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3929F8u, 0x392A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392A00u;
label_392a00:
    // 0x392a00: 0x8ee50004  lw          $a1, 0x4($s7)
    ctx->pc = 0x392a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_392a04:
    // 0x392a04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x392a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392a08:
    // 0x392a08: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x392a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_392a0c:
    // 0x392a0c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_392a10:
    if (ctx->pc == 0x392A10u) {
        ctx->pc = 0x392A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A0Cu;
        // 0x392a10: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A14u;
        goto label_392a14;
    }
    ctx->pc = 0x392A0Cu;
    {
        const bool branch_taken_0x392a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A0Cu;
        // 0x392a10: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a0c) {
            ctx->pc = 0x392A5Cu;
            goto label_392a5c;
        }
    }
    ctx->pc = 0x392A14u;
label_392a14:
    // 0x392a14: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x392a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_392a18:
    // 0x392a18: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x392a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_392a1c:
    // 0x392a1c: 0x0  nop
    ctx->pc = 0x392a1cu;
    // NOP
label_392a20:
    // 0x392a20: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x392a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_392a24:
    // 0x392a24: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x392a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_392a28:
    // 0x392a28: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x392a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_392a2c:
    // 0x392a2c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x392a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_392a30:
    // 0x392a30: 0x9445fffe  lhu         $a1, -0x2($v0)
    ctx->pc = 0x392a30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
label_392a34:
    // 0x392a34: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x392a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_392a38:
    // 0x392a38: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x392a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_392a3c:
    // 0x392a3c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x392a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_392a40:
    // 0x392a40: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x392a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_392a44:
    // 0x392a44: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x392a44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_392a48:
    // 0x392a48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x392a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_392a4c:
    // 0x392a4c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x392a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_392a50:
    // 0x392a50: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x392a50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_392a54:
    // 0x392a54: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_392a58:
    if (ctx->pc == 0x392A58u) {
        ctx->pc = 0x392A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A54u;
        // 0x392a58: 0xaee30004  sw          $v1, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A5Cu;
        goto label_392a5c;
    }
    ctx->pc = 0x392A54u;
    {
        const bool branch_taken_0x392a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A54u;
        // 0x392a58: 0xaee30004  sw          $v1, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a54) {
            ctx->pc = 0x392A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392a20;
        }
    }
    ctx->pc = 0x392A5Cu;
label_392a5c:
    // 0x392a5c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x392a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_392a60:
    // 0x392a60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x392a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_392a64:
    // 0x392a64: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x392a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_392a68:
    // 0x392a68: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x392a68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_392a6c:
    // 0x392a6c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x392a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_392a70:
    // 0x392a70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x392a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_392a74:
    // 0x392a74: 0xc0bb778  jal         func_2EDDE0
label_392a78:
    if (ctx->pc == 0x392A78u) {
        ctx->pc = 0x392A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A74u;
        // 0x392a78: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A7Cu;
        goto label_392a7c;
    }
    ctx->pc = 0x392A74u;
    SET_GPR_U32(ctx, 31, 0x392A7Cu);
    ctx->pc = 0x392A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392A74u;
    // 0x392a78: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x392A74u, 0x392A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392A7Cu;
label_392a7c:
    // 0x392a7c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x392a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_392a80:
    // 0x392a80: 0x10000021  b           . + 4 + (0x21 << 2)
label_392a84:
    if (ctx->pc == 0x392A84u) {
        ctx->pc = 0x392A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A80u;
        // 0x392a84: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392A88u;
        goto label_392a88;
    }
    ctx->pc = 0x392A80u;
    {
        const bool branch_taken_0x392a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A80u;
        // 0x392a84: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a80) {
            ctx->pc = 0x392B08u;
            goto label_392b08;
        }
    }
    ctx->pc = 0x392A88u;
label_392a88:
    // 0x392a88: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x392a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_392a8c:
    // 0x392a8c: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x392a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_392a90:
    // 0x392a90: 0x2529e880  addiu       $t1, $t1, -0x1780
    ctx->pc = 0x392a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
label_392a94:
    // 0x392a94: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x392a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_392a98:
    // 0x392a98: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x392a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_392a9c:
    // 0x392a9c: 0x8d220118  lw          $v0, 0x118($t1)
    ctx->pc = 0x392a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 280)));
label_392aa0:
    // 0x392aa0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x392aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_392aa4:
    // 0x392aa4: 0x40f809  jalr        $v0
label_392aa8:
    if (ctx->pc == 0x392AA8u) {
        ctx->pc = 0x392AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AA4u;
        // 0x392aa8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AACu;
        goto label_392aac;
    }
    ctx->pc = 0x392AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392AACu);
        ctx->pc = 0x392AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AA4u;
        // 0x392aa8: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392AA4u, 0x392AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392AACu;
label_392aac:
    // 0x392aac: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x392aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_392ab0:
    // 0x392ab0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x392ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392ab4:
    // 0x392ab4: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x392ab4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_392ab8:
    // 0x392ab8: 0x3c0b0062  lui         $t3, 0x62
    ctx->pc = 0x392ab8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)98 << 16));
label_392abc:
    // 0x392abc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x392abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_392ac0:
    // 0x392ac0: 0x256be880  addiu       $t3, $t3, -0x1780
    ctx->pc = 0x392ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961280));
label_392ac4:
    // 0x392ac4: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x392ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_392ac8:
    // 0x392ac8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x392ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_392acc:
    // 0x392acc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x392accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_392ad0:
    // 0x392ad0: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x392ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_392ad4:
    // 0x392ad4: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x392ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
label_392ad8:
    // 0x392ad8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x392ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_392adc:
    // 0x392adc: 0xad510000  sw          $s1, 0x0($t2)
    ctx->pc = 0x392adcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 17));
label_392ae0:
    // 0x392ae0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x392ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_392ae4:
    // 0x392ae4: 0x8d620108  lw          $v0, 0x108($t3)
    ctx->pc = 0x392ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 264)));
label_392ae8:
    // 0x392ae8: 0x40f809  jalr        $v0
label_392aec:
    if (ctx->pc == 0x392AECu) {
        ctx->pc = 0x392AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AE8u;
        // 0x392aec: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AF0u;
        goto label_392af0;
    }
    ctx->pc = 0x392AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392AF0u);
        ctx->pc = 0x392AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AE8u;
        // 0x392aec: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392AE8u, 0x392AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392AF0u;
label_392af0:
    // 0x392af0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x392af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_392af4:
    // 0x392af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x392af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392af8:
    // 0x392af8: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x392af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_392afc:
    // 0x392afc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x392afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_392b00:
    // 0x392b00: 0xc0bb778  jal         func_2EDDE0
label_392b04:
    if (ctx->pc == 0x392B04u) {
        ctx->pc = 0x392B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B00u;
        // 0x392b04: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B08u;
        goto label_392b08;
    }
    ctx->pc = 0x392B00u;
    SET_GPR_U32(ctx, 31, 0x392B08u);
    ctx->pc = 0x392B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392B00u;
    // 0x392b04: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x392B00u, 0x392B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392B08u;
label_392b08:
    // 0x392b08: 0x2b6102b  sltu        $v0, $s5, $s6
    ctx->pc = 0x392b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_392b0c:
    // 0x392b0c: 0x1440fe50  bnez        $v0, . + 4 + (-0x1B0 << 2)
label_392b10:
    if (ctx->pc == 0x392B10u) {
        ctx->pc = 0x392B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B0Cu;
        // 0x392b10: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B14u;
        goto label_392b14;
    }
    ctx->pc = 0x392B0Cu;
    {
        const bool branch_taken_0x392b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B0Cu;
        // 0x392b10: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392b0c) {
            ctx->pc = 0x392450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392450;
        }
    }
    ctx->pc = 0x392B14u;
label_392b14:
    // 0x392b14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x392b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_392b18:
    // 0x392b18: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x392b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_392b1c:
    // 0x392b1c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x392b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_392b20:
    // 0x392b20: 0x40f809  jalr        $v0
label_392b24:
    if (ctx->pc == 0x392B24u) {
        ctx->pc = 0x392B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B20u;
        // 0x392b24: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B28u;
        goto label_392b28;
    }
    ctx->pc = 0x392B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392B28u);
        ctx->pc = 0x392B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B20u;
        // 0x392b24: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B20u, 0x392B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392B28u;
label_392b28:
    // 0x392b28: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x392b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_392b2c:
    // 0x392b2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x392b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_392b30:
    // 0x392b30: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x392b30u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_392b34:
    // 0x392b34: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x392b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_392b38:
    // 0x392b38: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x392b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_392b3c:
    // 0x392b3c: 0x40f809  jalr        $v0
label_392b40:
    if (ctx->pc == 0x392B40u) {
        ctx->pc = 0x392B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B3Cu;
        // 0x392b40: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B44u;
        goto label_392b44;
    }
    ctx->pc = 0x392B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392B44u);
        ctx->pc = 0x392B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B3Cu;
        // 0x392b40: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B3Cu, 0x392B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392B44u;
label_392b44:
    // 0x392b44: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x392b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_392b48:
    // 0x392b48: 0x40f809  jalr        $v0
label_392b4c:
    if (ctx->pc == 0x392B4Cu) {
        ctx->pc = 0x392B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B48u;
        // 0x392b4c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B50u;
        goto label_392b50;
    }
    ctx->pc = 0x392B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392B50u);
        ctx->pc = 0x392B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B48u;
        // 0x392b4c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B48u, 0x392B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392B50u;
label_392b50:
    // 0x392b50: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x392b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
label_392b54:
    // 0x392b54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x392b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_392b58:
    // 0x392b58: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x392b58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_392b5c:
    // 0x392b5c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x392b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_392b60:
    // 0x392b60: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x392b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_392b64:
    // 0x392b64: 0x40f809  jalr        $v0
label_392b68:
    if (ctx->pc == 0x392B68u) {
        ctx->pc = 0x392B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B64u;
        // 0x392b68: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B6Cu;
        goto label_392b6c;
    }
    ctx->pc = 0x392B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392B6Cu);
        ctx->pc = 0x392B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B64u;
        // 0x392b68: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B64u, 0x392B6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392B6Cu;
label_392b6c:
    // 0x392b6c: 0x8fb00020  lw          $s0, 0x20($sp)
    ctx->pc = 0x392b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_392b70:
    // 0x392b70: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_392b74:
    if (ctx->pc == 0x392B74u) {
        ctx->pc = 0x392B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B70u;
        // 0x392b74: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B78u;
        goto label_392b78;
    }
    ctx->pc = 0x392B70u;
    {
        const bool branch_taken_0x392b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x392B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B70u;
        // 0x392b74: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392b70) {
            ctx->pc = 0x392B9Cu;
            goto label_392b9c;
        }
    }
    ctx->pc = 0x392B78u;
label_392b78:
    // 0x392b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x392b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392b7c:
    // 0x392b7c: 0x0  nop
    ctx->pc = 0x392b7cu;
    // NOP
label_392b80:
    // 0x392b80: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x392b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_392b84:
    // 0x392b84: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x392b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_392b88:
    // 0x392b88: 0x40f809  jalr        $v0
label_392b8c:
    if (ctx->pc == 0x392B8Cu) {
        ctx->pc = 0x392B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B88u;
        // 0x392b8c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B90u;
        goto label_392b90;
    }
    ctx->pc = 0x392B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392B90u);
        ctx->pc = 0x392B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B88u;
        // 0x392b8c: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B88u, 0x392B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392B90u;
label_392b90:
    // 0x392b90: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
label_392b94:
    if (ctx->pc == 0x392B94u) {
        ctx->pc = 0x392B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B90u;
        // 0x392b94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B98u;
        goto label_392b98;
    }
    ctx->pc = 0x392B90u;
    {
        const bool branch_taken_0x392b90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x392B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B90u;
        // 0x392b94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392b90) {
            ctx->pc = 0x392B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392b80;
        }
    }
    ctx->pc = 0x392B98u;
label_392b98:
    // 0x392b98: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x392b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_392b9c:
    // 0x392b9c: 0xc104284  jal         func_410A10
label_392ba0:
    if (ctx->pc == 0x392BA0u) {
        ctx->pc = 0x392BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B9Cu;
        // 0x392ba0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BA4u;
        goto label_392ba4;
    }
    ctx->pc = 0x392B9Cu;
    SET_GPR_U32(ctx, 31, 0x392BA4u);
    ctx->pc = 0x392BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392B9Cu;
    // 0x392ba0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x392B9Cu, 0x392BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392BA4u;
label_392ba4:
    // 0x392ba4: 0x12c00042  beqz        $s6, . + 4 + (0x42 << 2)
label_392ba8:
    if (ctx->pc == 0x392BA8u) {
        ctx->pc = 0x392BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BA4u;
        // 0x392ba8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BACu;
        goto label_392bac;
    }
    ctx->pc = 0x392BA4u;
    {
        const bool branch_taken_0x392ba4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x392BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BA4u;
        // 0x392ba8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ba4) {
            ctx->pc = 0x392CB0u;
            goto label_392cb0;
        }
    }
    ctx->pc = 0x392BACu;
label_392bac:
    // 0x392bac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x392bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_392bb0:
    // 0x392bb0: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x392bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_392bb4:
    // 0x392bb4: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x392bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_392bb8:
    // 0x392bb8: 0x1ac00019  blez        $s6, . + 4 + (0x19 << 2)
label_392bbc:
    if (ctx->pc == 0x392BBCu) {
        ctx->pc = 0x392BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BB8u;
        // 0x392bbc: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BC0u;
        goto label_392bc0;
    }
    ctx->pc = 0x392BB8u;
    {
        const bool branch_taken_0x392bb8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x392BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BB8u;
        // 0x392bbc: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392bb8) {
            ctx->pc = 0x392C20u;
            goto label_392c20;
        }
    }
    ctx->pc = 0x392BC0u;
label_392bc0:
    // 0x392bc0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_392bc4:
    if (ctx->pc == 0x392BC4u) {
        ctx->pc = 0x392BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BC0u;
        // 0x392bc4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BC8u;
        goto label_392bc8;
    }
    ctx->pc = 0x392BC0u;
    {
        const bool branch_taken_0x392bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x392BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BC0u;
        // 0x392bc4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392bc0) {
            ctx->pc = 0x392C4Cu;
            goto label_392c4c;
        }
    }
    ctx->pc = 0x392BC8u;
label_392bc8:
    // 0x392bc8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x392bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_392bcc:
    // 0x392bcc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_392bd0:
    if (ctx->pc == 0x392BD0u) {
        ctx->pc = 0x392BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BCCu;
        // 0x392bd0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BD4u;
        goto label_392bd4;
    }
    ctx->pc = 0x392BCCu;
    {
        const bool branch_taken_0x392bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392bcc) {
            ctx->pc = 0x392BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392BCCu;
            // 0x392bd0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392C24u;
            goto label_392c24;
        }
    }
    ctx->pc = 0x392BD4u;
label_392bd4:
    // 0x392bd4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x392bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_392bd8:
    // 0x392bd8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_392bdc:
    if (ctx->pc == 0x392BDCu) {
        ctx->pc = 0x392BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BD8u;
        // 0x392bdc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BE0u;
        goto label_392be0;
    }
    ctx->pc = 0x392BD8u;
    {
        const bool branch_taken_0x392bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392bd8) {
            ctx->pc = 0x392BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392BD8u;
            // 0x392bdc: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392C08u;
            goto label_392c08;
        }
    }
    ctx->pc = 0x392BE0u;
label_392be0:
    // 0x392be0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x392be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_392be4:
    // 0x392be4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x392be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_392be8:
    // 0x392be8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x392be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_392bec:
    // 0x392bec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x392becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392bf0:
    // 0x392bf0: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392bf4:
    // 0x392bf4: 0x40f809  jalr        $v0
label_392bf8:
    if (ctx->pc == 0x392BF8u) {
        ctx->pc = 0x392BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BF4u;
        // 0x392bf8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BFCu;
        goto label_392bfc;
    }
    ctx->pc = 0x392BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392BFCu);
        ctx->pc = 0x392BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BF4u;
        // 0x392bf8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392BF4u, 0x392BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392BFCu;
label_392bfc:
    // 0x392bfc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x392bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_392c00:
    // 0x392c00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x392c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_392c04:
    // 0x392c04: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x392c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392c08:
    // 0x392c08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x392c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_392c0c:
    // 0x392c0c: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392c10:
    // 0x392c10: 0x40f809  jalr        $v0
label_392c14:
    if (ctx->pc == 0x392C14u) {
        ctx->pc = 0x392C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C10u;
        // 0x392c14: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C18u;
        goto label_392c18;
    }
    ctx->pc = 0x392C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392C18u);
        ctx->pc = 0x392C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C10u;
        // 0x392c14: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C10u, 0x392C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392C18u;
label_392c18:
    // 0x392c18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x392c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_392c1c:
    // 0x392c1c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x392c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_392c20:
    // 0x392c20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x392c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392c24:
    // 0x392c24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x392c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_392c28:
    // 0x392c28: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392c2c:
    // 0x392c2c: 0x40f809  jalr        $v0
label_392c30:
    if (ctx->pc == 0x392C30u) {
        ctx->pc = 0x392C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C2Cu;
        // 0x392c30: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C34u;
        goto label_392c34;
    }
    ctx->pc = 0x392C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392C34u);
        ctx->pc = 0x392C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C2Cu;
        // 0x392c30: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C2Cu, 0x392C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392C34u;
label_392c34:
    // 0x392c34: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x392c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_392c38:
    // 0x392c38: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x392c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_392c3c:
    // 0x392c3c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_392c40:
    if (ctx->pc == 0x392C40u) {
        ctx->pc = 0x392C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C3Cu;
        // 0x392c40: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C44u;
        goto label_392c44;
    }
    ctx->pc = 0x392C3Cu;
    {
        const bool branch_taken_0x392c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C3Cu;
        // 0x392c40: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c3c) {
            ctx->pc = 0x392CB0u;
            goto label_392cb0;
        }
    }
    ctx->pc = 0x392C44u;
label_392c44:
    // 0x392c44: 0x0  nop
    ctx->pc = 0x392c44u;
    // NOP
label_392c48:
    // 0x392c48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x392c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_392c4c:
    // 0x392c4c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x392c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_392c50:
    // 0x392c50: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392c54:
    // 0x392c54: 0x40f809  jalr        $v0
label_392c58:
    if (ctx->pc == 0x392C58u) {
        ctx->pc = 0x392C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C54u;
        // 0x392c58: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C5Cu;
        goto label_392c5c;
    }
    ctx->pc = 0x392C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392C5Cu);
        ctx->pc = 0x392C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C54u;
        // 0x392c58: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C54u, 0x392C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392C5Cu;
label_392c5c:
    // 0x392c5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x392c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_392c60:
    // 0x392c60: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x392c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392c64:
    // 0x392c64: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x392c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_392c68:
    // 0x392c68: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392c6c:
    // 0x392c6c: 0x40f809  jalr        $v0
label_392c70:
    if (ctx->pc == 0x392C70u) {
        ctx->pc = 0x392C74u;
        goto label_392c74;
    }
    ctx->pc = 0x392C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392C74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C6Cu, 0x392C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392C74u;
label_392c74:
    // 0x392c74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x392c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_392c78:
    // 0x392c78: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x392c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_392c7c:
    // 0x392c7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x392c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_392c80:
    // 0x392c80: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392c84:
    // 0x392c84: 0x40f809  jalr        $v0
label_392c88:
    if (ctx->pc == 0x392C88u) {
        ctx->pc = 0x392C8Cu;
        goto label_392c8c;
    }
    ctx->pc = 0x392C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392C8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C84u, 0x392C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392C8Cu;
label_392c8c:
    // 0x392c8c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x392c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_392c90:
    // 0x392c90: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x392c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_392c94:
    // 0x392c94: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x392c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_392c98:
    // 0x392c98: 0x40f809  jalr        $v0
label_392c9c:
    if (ctx->pc == 0x392C9Cu) {
        ctx->pc = 0x392C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C98u;
        // 0x392c9c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CA0u;
        goto label_392ca0;
    }
    ctx->pc = 0x392C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392CA0u);
        ctx->pc = 0x392C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C98u;
        // 0x392c9c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C98u, 0x392CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392CA0u;
label_392ca0:
    // 0x392ca0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x392ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_392ca4:
    // 0x392ca4: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x392ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_392ca8:
    // 0x392ca8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_392cac:
    if (ctx->pc == 0x392CACu) {
        ctx->pc = 0x392CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CA8u;
        // 0x392cac: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CB0u;
        goto label_392cb0;
    }
    ctx->pc = 0x392CA8u;
    {
        const bool branch_taken_0x392ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CA8u;
        // 0x392cac: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ca8) {
            ctx->pc = 0x392C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392c48;
        }
    }
    ctx->pc = 0x392CB0u;
label_392cb0:
    // 0x392cb0: 0xc104284  jal         func_410A10
label_392cb4:
    if (ctx->pc == 0x392CB4u) {
        ctx->pc = 0x392CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CB0u;
        // 0x392cb4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CB8u;
        goto label_392cb8;
    }
    ctx->pc = 0x392CB0u;
    SET_GPR_U32(ctx, 31, 0x392CB8u);
    ctx->pc = 0x392CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392CB0u;
    // 0x392cb4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x392CB0u, 0x392CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392CB8u;
label_392cb8:
    // 0x392cb8: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x392cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_392cbc:
    // 0x392cbc: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x392cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_392cc0:
    // 0x392cc0: 0x24c3e880  addiu       $v1, $a2, -0x1780
    ctx->pc = 0x392cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_392cc4:
    // 0x392cc4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x392cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_392cc8:
    // 0x392cc8: 0x40f809  jalr        $v0
label_392ccc:
    if (ctx->pc == 0x392CCCu) {
        ctx->pc = 0x392CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CC8u;
        // 0x392ccc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CD0u;
        goto label_392cd0;
    }
    ctx->pc = 0x392CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392CD0u);
        ctx->pc = 0x392CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CC8u;
        // 0x392ccc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392CC8u, 0x392CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392CD0u;
label_392cd0:
    // 0x392cd0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x392cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_392cd4:
    // 0x392cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x392cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392cd8:
    // 0x392cd8: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x392cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_392cdc:
    // 0x392cdc: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x392cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_392ce0:
    // 0x392ce0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x392ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_392ce4:
    // 0x392ce4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x392ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_392ce8:
    // 0x392ce8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x392ce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_392cec:
    // 0x392cec: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x392cecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_392cf0:
    // 0x392cf0: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x392cf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_392cf4:
    // 0x392cf4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x392cf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_392cf8:
    // 0x392cf8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x392cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_392cfc:
    // 0x392cfc: 0x3e00008  jr          $ra
label_392d00:
    if (ctx->pc == 0x392D00u) {
        ctx->pc = 0x392D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CFCu;
        // 0x392d00: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392D04u;
        goto label_392d04;
    }
    ctx->pc = 0x392CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CFCu;
        // 0x392d00: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392D04u;
label_392d04:
    // 0x392d04: 0x0  nop
    ctx->pc = 0x392d04u;
    // NOP
    ctx->pc = 0x392d08u;
}
