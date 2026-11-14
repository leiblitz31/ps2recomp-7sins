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

// Function: sub_00461FC0
// Address: 0x461fc0 - 0x462760
void sub_00461FC0_0x461fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461FC0_0x461fc0");
#endif

    switch (ctx->pc) {
        case 0x461fc0u: goto label_461fc0;
        case 0x461fc4u: goto label_461fc4;
        case 0x461fc8u: goto label_461fc8;
        case 0x461fccu: goto label_461fcc;
        case 0x461fd0u: goto label_461fd0;
        case 0x461fd4u: goto label_461fd4;
        case 0x461fd8u: goto label_461fd8;
        case 0x461fdcu: goto label_461fdc;
        case 0x461fe0u: goto label_461fe0;
        case 0x461fe4u: goto label_461fe4;
        case 0x461fe8u: goto label_461fe8;
        case 0x461fecu: goto label_461fec;
        case 0x461ff0u: goto label_461ff0;
        case 0x461ff4u: goto label_461ff4;
        case 0x461ff8u: goto label_461ff8;
        case 0x461ffcu: goto label_461ffc;
        case 0x462000u: goto label_462000;
        case 0x462004u: goto label_462004;
        case 0x462008u: goto label_462008;
        case 0x46200cu: goto label_46200c;
        case 0x462010u: goto label_462010;
        case 0x462014u: goto label_462014;
        case 0x462018u: goto label_462018;
        case 0x46201cu: goto label_46201c;
        case 0x462020u: goto label_462020;
        case 0x462024u: goto label_462024;
        case 0x462028u: goto label_462028;
        case 0x46202cu: goto label_46202c;
        case 0x462030u: goto label_462030;
        case 0x462034u: goto label_462034;
        case 0x462038u: goto label_462038;
        case 0x46203cu: goto label_46203c;
        case 0x462040u: goto label_462040;
        case 0x462044u: goto label_462044;
        case 0x462048u: goto label_462048;
        case 0x46204cu: goto label_46204c;
        case 0x462050u: goto label_462050;
        case 0x462054u: goto label_462054;
        case 0x462058u: goto label_462058;
        case 0x46205cu: goto label_46205c;
        case 0x462060u: goto label_462060;
        case 0x462064u: goto label_462064;
        case 0x462068u: goto label_462068;
        case 0x46206cu: goto label_46206c;
        case 0x462070u: goto label_462070;
        case 0x462074u: goto label_462074;
        case 0x462078u: goto label_462078;
        case 0x46207cu: goto label_46207c;
        case 0x462080u: goto label_462080;
        case 0x462084u: goto label_462084;
        case 0x462088u: goto label_462088;
        case 0x46208cu: goto label_46208c;
        case 0x462090u: goto label_462090;
        case 0x462094u: goto label_462094;
        case 0x462098u: goto label_462098;
        case 0x46209cu: goto label_46209c;
        case 0x4620a0u: goto label_4620a0;
        case 0x4620a4u: goto label_4620a4;
        case 0x4620a8u: goto label_4620a8;
        case 0x4620acu: goto label_4620ac;
        case 0x4620b0u: goto label_4620b0;
        case 0x4620b4u: goto label_4620b4;
        case 0x4620b8u: goto label_4620b8;
        case 0x4620bcu: goto label_4620bc;
        case 0x4620c0u: goto label_4620c0;
        case 0x4620c4u: goto label_4620c4;
        case 0x4620c8u: goto label_4620c8;
        case 0x4620ccu: goto label_4620cc;
        case 0x4620d0u: goto label_4620d0;
        case 0x4620d4u: goto label_4620d4;
        case 0x4620d8u: goto label_4620d8;
        case 0x4620dcu: goto label_4620dc;
        case 0x4620e0u: goto label_4620e0;
        case 0x4620e4u: goto label_4620e4;
        case 0x4620e8u: goto label_4620e8;
        case 0x4620ecu: goto label_4620ec;
        case 0x4620f0u: goto label_4620f0;
        case 0x4620f4u: goto label_4620f4;
        case 0x4620f8u: goto label_4620f8;
        case 0x4620fcu: goto label_4620fc;
        case 0x462100u: goto label_462100;
        case 0x462104u: goto label_462104;
        case 0x462108u: goto label_462108;
        case 0x46210cu: goto label_46210c;
        case 0x462110u: goto label_462110;
        case 0x462114u: goto label_462114;
        case 0x462118u: goto label_462118;
        case 0x46211cu: goto label_46211c;
        case 0x462120u: goto label_462120;
        case 0x462124u: goto label_462124;
        case 0x462128u: goto label_462128;
        case 0x46212cu: goto label_46212c;
        case 0x462130u: goto label_462130;
        case 0x462134u: goto label_462134;
        case 0x462138u: goto label_462138;
        case 0x46213cu: goto label_46213c;
        case 0x462140u: goto label_462140;
        case 0x462144u: goto label_462144;
        case 0x462148u: goto label_462148;
        case 0x46214cu: goto label_46214c;
        case 0x462150u: goto label_462150;
        case 0x462154u: goto label_462154;
        case 0x462158u: goto label_462158;
        case 0x46215cu: goto label_46215c;
        case 0x462160u: goto label_462160;
        case 0x462164u: goto label_462164;
        case 0x462168u: goto label_462168;
        case 0x46216cu: goto label_46216c;
        case 0x462170u: goto label_462170;
        case 0x462174u: goto label_462174;
        case 0x462178u: goto label_462178;
        case 0x46217cu: goto label_46217c;
        case 0x462180u: goto label_462180;
        case 0x462184u: goto label_462184;
        case 0x462188u: goto label_462188;
        case 0x46218cu: goto label_46218c;
        case 0x462190u: goto label_462190;
        case 0x462194u: goto label_462194;
        case 0x462198u: goto label_462198;
        case 0x46219cu: goto label_46219c;
        case 0x4621a0u: goto label_4621a0;
        case 0x4621a4u: goto label_4621a4;
        case 0x4621a8u: goto label_4621a8;
        case 0x4621acu: goto label_4621ac;
        case 0x4621b0u: goto label_4621b0;
        case 0x4621b4u: goto label_4621b4;
        case 0x4621b8u: goto label_4621b8;
        case 0x4621bcu: goto label_4621bc;
        case 0x4621c0u: goto label_4621c0;
        case 0x4621c4u: goto label_4621c4;
        case 0x4621c8u: goto label_4621c8;
        case 0x4621ccu: goto label_4621cc;
        case 0x4621d0u: goto label_4621d0;
        case 0x4621d4u: goto label_4621d4;
        case 0x4621d8u: goto label_4621d8;
        case 0x4621dcu: goto label_4621dc;
        case 0x4621e0u: goto label_4621e0;
        case 0x4621e4u: goto label_4621e4;
        case 0x4621e8u: goto label_4621e8;
        case 0x4621ecu: goto label_4621ec;
        case 0x4621f0u: goto label_4621f0;
        case 0x4621f4u: goto label_4621f4;
        case 0x4621f8u: goto label_4621f8;
        case 0x4621fcu: goto label_4621fc;
        case 0x462200u: goto label_462200;
        case 0x462204u: goto label_462204;
        case 0x462208u: goto label_462208;
        case 0x46220cu: goto label_46220c;
        case 0x462210u: goto label_462210;
        case 0x462214u: goto label_462214;
        case 0x462218u: goto label_462218;
        case 0x46221cu: goto label_46221c;
        case 0x462220u: goto label_462220;
        case 0x462224u: goto label_462224;
        case 0x462228u: goto label_462228;
        case 0x46222cu: goto label_46222c;
        case 0x462230u: goto label_462230;
        case 0x462234u: goto label_462234;
        case 0x462238u: goto label_462238;
        case 0x46223cu: goto label_46223c;
        case 0x462240u: goto label_462240;
        case 0x462244u: goto label_462244;
        case 0x462248u: goto label_462248;
        case 0x46224cu: goto label_46224c;
        case 0x462250u: goto label_462250;
        case 0x462254u: goto label_462254;
        case 0x462258u: goto label_462258;
        case 0x46225cu: goto label_46225c;
        case 0x462260u: goto label_462260;
        case 0x462264u: goto label_462264;
        case 0x462268u: goto label_462268;
        case 0x46226cu: goto label_46226c;
        case 0x462270u: goto label_462270;
        case 0x462274u: goto label_462274;
        case 0x462278u: goto label_462278;
        case 0x46227cu: goto label_46227c;
        case 0x462280u: goto label_462280;
        case 0x462284u: goto label_462284;
        case 0x462288u: goto label_462288;
        case 0x46228cu: goto label_46228c;
        case 0x462290u: goto label_462290;
        case 0x462294u: goto label_462294;
        case 0x462298u: goto label_462298;
        case 0x46229cu: goto label_46229c;
        case 0x4622a0u: goto label_4622a0;
        case 0x4622a4u: goto label_4622a4;
        case 0x4622a8u: goto label_4622a8;
        case 0x4622acu: goto label_4622ac;
        case 0x4622b0u: goto label_4622b0;
        case 0x4622b4u: goto label_4622b4;
        case 0x4622b8u: goto label_4622b8;
        case 0x4622bcu: goto label_4622bc;
        case 0x4622c0u: goto label_4622c0;
        case 0x4622c4u: goto label_4622c4;
        case 0x4622c8u: goto label_4622c8;
        case 0x4622ccu: goto label_4622cc;
        case 0x4622d0u: goto label_4622d0;
        case 0x4622d4u: goto label_4622d4;
        case 0x4622d8u: goto label_4622d8;
        case 0x4622dcu: goto label_4622dc;
        case 0x4622e0u: goto label_4622e0;
        case 0x4622e4u: goto label_4622e4;
        case 0x4622e8u: goto label_4622e8;
        case 0x4622ecu: goto label_4622ec;
        case 0x4622f0u: goto label_4622f0;
        case 0x4622f4u: goto label_4622f4;
        case 0x4622f8u: goto label_4622f8;
        case 0x4622fcu: goto label_4622fc;
        case 0x462300u: goto label_462300;
        case 0x462304u: goto label_462304;
        case 0x462308u: goto label_462308;
        case 0x46230cu: goto label_46230c;
        case 0x462310u: goto label_462310;
        case 0x462314u: goto label_462314;
        case 0x462318u: goto label_462318;
        case 0x46231cu: goto label_46231c;
        case 0x462320u: goto label_462320;
        case 0x462324u: goto label_462324;
        case 0x462328u: goto label_462328;
        case 0x46232cu: goto label_46232c;
        case 0x462330u: goto label_462330;
        case 0x462334u: goto label_462334;
        case 0x462338u: goto label_462338;
        case 0x46233cu: goto label_46233c;
        case 0x462340u: goto label_462340;
        case 0x462344u: goto label_462344;
        case 0x462348u: goto label_462348;
        case 0x46234cu: goto label_46234c;
        case 0x462350u: goto label_462350;
        case 0x462354u: goto label_462354;
        case 0x462358u: goto label_462358;
        case 0x46235cu: goto label_46235c;
        case 0x462360u: goto label_462360;
        case 0x462364u: goto label_462364;
        case 0x462368u: goto label_462368;
        case 0x46236cu: goto label_46236c;
        case 0x462370u: goto label_462370;
        case 0x462374u: goto label_462374;
        case 0x462378u: goto label_462378;
        case 0x46237cu: goto label_46237c;
        case 0x462380u: goto label_462380;
        case 0x462384u: goto label_462384;
        case 0x462388u: goto label_462388;
        case 0x46238cu: goto label_46238c;
        case 0x462390u: goto label_462390;
        case 0x462394u: goto label_462394;
        case 0x462398u: goto label_462398;
        case 0x46239cu: goto label_46239c;
        case 0x4623a0u: goto label_4623a0;
        case 0x4623a4u: goto label_4623a4;
        case 0x4623a8u: goto label_4623a8;
        case 0x4623acu: goto label_4623ac;
        case 0x4623b0u: goto label_4623b0;
        case 0x4623b4u: goto label_4623b4;
        case 0x4623b8u: goto label_4623b8;
        case 0x4623bcu: goto label_4623bc;
        case 0x4623c0u: goto label_4623c0;
        case 0x4623c4u: goto label_4623c4;
        case 0x4623c8u: goto label_4623c8;
        case 0x4623ccu: goto label_4623cc;
        case 0x4623d0u: goto label_4623d0;
        case 0x4623d4u: goto label_4623d4;
        case 0x4623d8u: goto label_4623d8;
        case 0x4623dcu: goto label_4623dc;
        case 0x4623e0u: goto label_4623e0;
        case 0x4623e4u: goto label_4623e4;
        case 0x4623e8u: goto label_4623e8;
        case 0x4623ecu: goto label_4623ec;
        case 0x4623f0u: goto label_4623f0;
        case 0x4623f4u: goto label_4623f4;
        case 0x4623f8u: goto label_4623f8;
        case 0x4623fcu: goto label_4623fc;
        case 0x462400u: goto label_462400;
        case 0x462404u: goto label_462404;
        case 0x462408u: goto label_462408;
        case 0x46240cu: goto label_46240c;
        case 0x462410u: goto label_462410;
        case 0x462414u: goto label_462414;
        case 0x462418u: goto label_462418;
        case 0x46241cu: goto label_46241c;
        case 0x462420u: goto label_462420;
        case 0x462424u: goto label_462424;
        case 0x462428u: goto label_462428;
        case 0x46242cu: goto label_46242c;
        case 0x462430u: goto label_462430;
        case 0x462434u: goto label_462434;
        case 0x462438u: goto label_462438;
        case 0x46243cu: goto label_46243c;
        case 0x462440u: goto label_462440;
        case 0x462444u: goto label_462444;
        case 0x462448u: goto label_462448;
        case 0x46244cu: goto label_46244c;
        case 0x462450u: goto label_462450;
        case 0x462454u: goto label_462454;
        case 0x462458u: goto label_462458;
        case 0x46245cu: goto label_46245c;
        case 0x462460u: goto label_462460;
        case 0x462464u: goto label_462464;
        case 0x462468u: goto label_462468;
        case 0x46246cu: goto label_46246c;
        case 0x462470u: goto label_462470;
        case 0x462474u: goto label_462474;
        case 0x462478u: goto label_462478;
        case 0x46247cu: goto label_46247c;
        case 0x462480u: goto label_462480;
        case 0x462484u: goto label_462484;
        case 0x462488u: goto label_462488;
        case 0x46248cu: goto label_46248c;
        case 0x462490u: goto label_462490;
        case 0x462494u: goto label_462494;
        case 0x462498u: goto label_462498;
        case 0x46249cu: goto label_46249c;
        case 0x4624a0u: goto label_4624a0;
        case 0x4624a4u: goto label_4624a4;
        case 0x4624a8u: goto label_4624a8;
        case 0x4624acu: goto label_4624ac;
        case 0x4624b0u: goto label_4624b0;
        case 0x4624b4u: goto label_4624b4;
        case 0x4624b8u: goto label_4624b8;
        case 0x4624bcu: goto label_4624bc;
        case 0x4624c0u: goto label_4624c0;
        case 0x4624c4u: goto label_4624c4;
        case 0x4624c8u: goto label_4624c8;
        case 0x4624ccu: goto label_4624cc;
        case 0x4624d0u: goto label_4624d0;
        case 0x4624d4u: goto label_4624d4;
        case 0x4624d8u: goto label_4624d8;
        case 0x4624dcu: goto label_4624dc;
        case 0x4624e0u: goto label_4624e0;
        case 0x4624e4u: goto label_4624e4;
        case 0x4624e8u: goto label_4624e8;
        case 0x4624ecu: goto label_4624ec;
        case 0x4624f0u: goto label_4624f0;
        case 0x4624f4u: goto label_4624f4;
        case 0x4624f8u: goto label_4624f8;
        case 0x4624fcu: goto label_4624fc;
        case 0x462500u: goto label_462500;
        case 0x462504u: goto label_462504;
        case 0x462508u: goto label_462508;
        case 0x46250cu: goto label_46250c;
        case 0x462510u: goto label_462510;
        case 0x462514u: goto label_462514;
        case 0x462518u: goto label_462518;
        case 0x46251cu: goto label_46251c;
        case 0x462520u: goto label_462520;
        case 0x462524u: goto label_462524;
        case 0x462528u: goto label_462528;
        case 0x46252cu: goto label_46252c;
        case 0x462530u: goto label_462530;
        case 0x462534u: goto label_462534;
        case 0x462538u: goto label_462538;
        case 0x46253cu: goto label_46253c;
        case 0x462540u: goto label_462540;
        case 0x462544u: goto label_462544;
        case 0x462548u: goto label_462548;
        case 0x46254cu: goto label_46254c;
        case 0x462550u: goto label_462550;
        case 0x462554u: goto label_462554;
        case 0x462558u: goto label_462558;
        case 0x46255cu: goto label_46255c;
        case 0x462560u: goto label_462560;
        case 0x462564u: goto label_462564;
        case 0x462568u: goto label_462568;
        case 0x46256cu: goto label_46256c;
        case 0x462570u: goto label_462570;
        case 0x462574u: goto label_462574;
        case 0x462578u: goto label_462578;
        case 0x46257cu: goto label_46257c;
        case 0x462580u: goto label_462580;
        case 0x462584u: goto label_462584;
        case 0x462588u: goto label_462588;
        case 0x46258cu: goto label_46258c;
        case 0x462590u: goto label_462590;
        case 0x462594u: goto label_462594;
        case 0x462598u: goto label_462598;
        case 0x46259cu: goto label_46259c;
        case 0x4625a0u: goto label_4625a0;
        case 0x4625a4u: goto label_4625a4;
        case 0x4625a8u: goto label_4625a8;
        case 0x4625acu: goto label_4625ac;
        case 0x4625b0u: goto label_4625b0;
        case 0x4625b4u: goto label_4625b4;
        case 0x4625b8u: goto label_4625b8;
        case 0x4625bcu: goto label_4625bc;
        case 0x4625c0u: goto label_4625c0;
        case 0x4625c4u: goto label_4625c4;
        case 0x4625c8u: goto label_4625c8;
        case 0x4625ccu: goto label_4625cc;
        case 0x4625d0u: goto label_4625d0;
        case 0x4625d4u: goto label_4625d4;
        case 0x4625d8u: goto label_4625d8;
        case 0x4625dcu: goto label_4625dc;
        case 0x4625e0u: goto label_4625e0;
        case 0x4625e4u: goto label_4625e4;
        case 0x4625e8u: goto label_4625e8;
        case 0x4625ecu: goto label_4625ec;
        case 0x4625f0u: goto label_4625f0;
        case 0x4625f4u: goto label_4625f4;
        case 0x4625f8u: goto label_4625f8;
        case 0x4625fcu: goto label_4625fc;
        case 0x462600u: goto label_462600;
        case 0x462604u: goto label_462604;
        case 0x462608u: goto label_462608;
        case 0x46260cu: goto label_46260c;
        case 0x462610u: goto label_462610;
        case 0x462614u: goto label_462614;
        case 0x462618u: goto label_462618;
        case 0x46261cu: goto label_46261c;
        case 0x462620u: goto label_462620;
        case 0x462624u: goto label_462624;
        case 0x462628u: goto label_462628;
        case 0x46262cu: goto label_46262c;
        case 0x462630u: goto label_462630;
        case 0x462634u: goto label_462634;
        case 0x462638u: goto label_462638;
        case 0x46263cu: goto label_46263c;
        case 0x462640u: goto label_462640;
        case 0x462644u: goto label_462644;
        case 0x462648u: goto label_462648;
        case 0x46264cu: goto label_46264c;
        case 0x462650u: goto label_462650;
        case 0x462654u: goto label_462654;
        case 0x462658u: goto label_462658;
        case 0x46265cu: goto label_46265c;
        case 0x462660u: goto label_462660;
        case 0x462664u: goto label_462664;
        case 0x462668u: goto label_462668;
        case 0x46266cu: goto label_46266c;
        case 0x462670u: goto label_462670;
        case 0x462674u: goto label_462674;
        case 0x462678u: goto label_462678;
        case 0x46267cu: goto label_46267c;
        case 0x462680u: goto label_462680;
        case 0x462684u: goto label_462684;
        case 0x462688u: goto label_462688;
        case 0x46268cu: goto label_46268c;
        case 0x462690u: goto label_462690;
        case 0x462694u: goto label_462694;
        case 0x462698u: goto label_462698;
        case 0x46269cu: goto label_46269c;
        case 0x4626a0u: goto label_4626a0;
        case 0x4626a4u: goto label_4626a4;
        case 0x4626a8u: goto label_4626a8;
        case 0x4626acu: goto label_4626ac;
        case 0x4626b0u: goto label_4626b0;
        case 0x4626b4u: goto label_4626b4;
        case 0x4626b8u: goto label_4626b8;
        case 0x4626bcu: goto label_4626bc;
        case 0x4626c0u: goto label_4626c0;
        case 0x4626c4u: goto label_4626c4;
        case 0x4626c8u: goto label_4626c8;
        case 0x4626ccu: goto label_4626cc;
        case 0x4626d0u: goto label_4626d0;
        case 0x4626d4u: goto label_4626d4;
        case 0x4626d8u: goto label_4626d8;
        case 0x4626dcu: goto label_4626dc;
        case 0x4626e0u: goto label_4626e0;
        case 0x4626e4u: goto label_4626e4;
        case 0x4626e8u: goto label_4626e8;
        case 0x4626ecu: goto label_4626ec;
        case 0x4626f0u: goto label_4626f0;
        case 0x4626f4u: goto label_4626f4;
        case 0x4626f8u: goto label_4626f8;
        case 0x4626fcu: goto label_4626fc;
        case 0x462700u: goto label_462700;
        case 0x462704u: goto label_462704;
        case 0x462708u: goto label_462708;
        case 0x46270cu: goto label_46270c;
        case 0x462710u: goto label_462710;
        case 0x462714u: goto label_462714;
        case 0x462718u: goto label_462718;
        case 0x46271cu: goto label_46271c;
        case 0x462720u: goto label_462720;
        case 0x462724u: goto label_462724;
        case 0x462728u: goto label_462728;
        case 0x46272cu: goto label_46272c;
        case 0x462730u: goto label_462730;
        case 0x462734u: goto label_462734;
        case 0x462738u: goto label_462738;
        case 0x46273cu: goto label_46273c;
        case 0x462740u: goto label_462740;
        case 0x462744u: goto label_462744;
        case 0x462748u: goto label_462748;
        case 0x46274cu: goto label_46274c;
        case 0x462750u: goto label_462750;
        case 0x462754u: goto label_462754;
        case 0x462758u: goto label_462758;
        case 0x46275cu: goto label_46275c;
        default: break;
    }

    ctx->pc = 0x461fc0u;

label_461fc0:
    // 0x461fc0: 0x27bdf830  addiu       $sp, $sp, -0x7D0
    ctx->pc = 0x461fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965296));
label_461fc4:
    // 0x461fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x461fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_461fc8:
    // 0x461fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461fcc:
    // 0x461fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x461fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_461fd0:
    // 0x461fd0: 0xafa40790  sw          $a0, 0x790($sp)
    ctx->pc = 0x461fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1936), GPR_U32(ctx, 4));
label_461fd4:
    // 0x461fd4: 0xafa507a0  sw          $a1, 0x7A0($sp)
    ctx->pc = 0x461fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1952), GPR_U32(ctx, 5));
label_461fd8:
    // 0x461fd8: 0xafa607b0  sw          $a2, 0x7B0($sp)
    ctx->pc = 0x461fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1968), GPR_U32(ctx, 6));
label_461fdc:
    // 0x461fdc: 0xafa707c0  sw          $a3, 0x7C0($sp)
    ctx->pc = 0x461fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1984), GPR_U32(ctx, 7));
label_461fe0:
    // 0x461fe0: 0x8fa207c0  lw          $v0, 0x7C0($sp)
    ctx->pc = 0x461fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1984)));
label_461fe4:
    // 0x461fe4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_461fe8:
    if (ctx->pc == 0x461FE8u) {
        ctx->pc = 0x461FECu;
        goto label_461fec;
    }
    ctx->pc = 0x461FE4u;
    {
        const bool branch_taken_0x461fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461fe4) {
            ctx->pc = 0x46201Cu;
            goto label_46201c;
        }
    }
    ctx->pc = 0x461FECu;
label_461fec:
    // 0x461fec: 0x27a406f0  addiu       $a0, $sp, 0x6F0
    ctx->pc = 0x461fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
label_461ff0:
    // 0x461ff0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461ff4:
    // 0x461ff4: 0x24a5f140  addiu       $a1, $a1, -0xEC0
    ctx->pc = 0x461ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
label_461ff8:
    // 0x461ff8: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x461ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_461ffc:
    // 0x461ffc: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x461ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_462000:
    // 0x462000: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x462000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_462004:
    // 0x462004: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x462004u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_462008:
    // 0x462008: 0x25084e7c  addiu       $t0, $t0, 0x4E7C
    ctx->pc = 0x462008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20092));
label_46200c:
    // 0x46200c: 0xc0bc3e2  jal         func_2F0F88
label_462010:
    if (ctx->pc == 0x462010u) {
        ctx->pc = 0x462014u;
        goto label_462014;
    }
    ctx->pc = 0x46200Cu;
    SET_GPR_U32(ctx, 31, 0x462014u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x46200Cu, 0x462014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462014u;
label_462014:
    // 0x462014: 0x10000006  b           . + 4 + (0x6 << 2)
label_462018:
    if (ctx->pc == 0x462018u) {
        ctx->pc = 0x46201Cu;
        goto label_46201c;
    }
    ctx->pc = 0x462014u;
    {
        const bool branch_taken_0x462014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462014) {
            ctx->pc = 0x462030u;
            goto label_462030;
        }
    }
    ctx->pc = 0x46201Cu;
label_46201c:
    // 0x46201c: 0x27a406f0  addiu       $a0, $sp, 0x6F0
    ctx->pc = 0x46201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
label_462020:
    // 0x462020: 0x2785b254  addiu       $a1, $gp, -0x4DAC
    ctx->pc = 0x462020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947412));
label_462024:
    // 0x462024: 0x8fa607c0  lw          $a2, 0x7C0($sp)
    ctx->pc = 0x462024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1984)));
label_462028:
    // 0x462028: 0xc0bc3e2  jal         func_2F0F88
label_46202c:
    if (ctx->pc == 0x46202Cu) {
        ctx->pc = 0x462030u;
        goto label_462030;
    }
    ctx->pc = 0x462028u;
    SET_GPR_U32(ctx, 31, 0x462030u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x462028u, 0x462030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462030u;
label_462030:
    // 0x462030: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x462030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_462034:
    // 0x462034: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x462034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_462038:
    // 0x462038: 0x10830122  beq         $a0, $v1, . + 4 + (0x122 << 2)
label_46203c:
    if (ctx->pc == 0x46203Cu) {
        ctx->pc = 0x462040u;
        goto label_462040;
    }
    ctx->pc = 0x462038u;
    {
        const bool branch_taken_0x462038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x462038) {
            ctx->pc = 0x4624C4u;
            goto label_4624c4;
        }
    }
    ctx->pc = 0x462040u;
label_462040:
    // 0x462040: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x462040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_462044:
    // 0x462044: 0x10830105  beq         $a0, $v1, . + 4 + (0x105 << 2)
label_462048:
    if (ctx->pc == 0x462048u) {
        ctx->pc = 0x46204Cu;
        goto label_46204c;
    }
    ctx->pc = 0x462044u;
    {
        const bool branch_taken_0x462044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x462044) {
            ctx->pc = 0x46245Cu;
            goto label_46245c;
        }
    }
    ctx->pc = 0x46204Cu;
label_46204c:
    // 0x46204c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462050:
    // 0x462050: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
label_462054:
    if (ctx->pc == 0x462054u) {
        ctx->pc = 0x462058u;
        goto label_462058;
    }
    ctx->pc = 0x462050u;
    {
        const bool branch_taken_0x462050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x462050) {
            ctx->pc = 0x46211Cu;
            goto label_46211c;
        }
    }
    ctx->pc = 0x462058u;
label_462058:
    // 0x462058: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_46205c:
    if (ctx->pc == 0x46205Cu) {
        ctx->pc = 0x462060u;
        goto label_462060;
    }
    ctx->pc = 0x462058u;
    {
        const bool branch_taken_0x462058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x462058) {
            ctx->pc = 0x462068u;
            goto label_462068;
        }
    }
    ctx->pc = 0x462060u;
label_462060:
    // 0x462060: 0x1000018f  b           . + 4 + (0x18F << 2)
label_462064:
    if (ctx->pc == 0x462064u) {
        ctx->pc = 0x462068u;
        goto label_462068;
    }
    ctx->pc = 0x462060u;
    {
        const bool branch_taken_0x462060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462060) {
            ctx->pc = 0x4626A0u;
            goto label_4626a0;
        }
    }
    ctx->pc = 0x462068u;
label_462068:
    // 0x462068: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x462068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_46206c:
    // 0x46206c: 0x8c634e2c  lw          $v1, 0x4E2C($v1)
    ctx->pc = 0x46206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20012)));
label_462070:
    // 0x462070: 0xaf83bfd0  sw          $v1, -0x4030($gp)
    ctx->pc = 0x462070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950864), GPR_U32(ctx, 3));
label_462074:
    // 0x462074: 0xaf80bfd4  sw          $zero, -0x402C($gp)
    ctx->pc = 0x462074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950868), GPR_U32(ctx, 0));
label_462078:
    // 0x462078: 0x8f83bfd0  lw          $v1, -0x4030($gp)
    ctx->pc = 0x462078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_46207c:
    // 0x46207c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_462080:
    if (ctx->pc == 0x462080u) {
        ctx->pc = 0x462084u;
        goto label_462084;
    }
    ctx->pc = 0x46207Cu;
    {
        const bool branch_taken_0x46207c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46207c) {
            ctx->pc = 0x462098u;
            goto label_462098;
        }
    }
    ctx->pc = 0x462084u;
label_462084:
    // 0x462084: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x462084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_462088:
    // 0x462088: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x462088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_46208c:
    // 0x46208c: 0xaf80bfd8  sw          $zero, -0x4028($gp)
    ctx->pc = 0x46208cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950872), GPR_U32(ctx, 0));
label_462090:
    // 0x462090: 0x100001ad  b           . + 4 + (0x1AD << 2)
label_462094:
    if (ctx->pc == 0x462094u) {
        ctx->pc = 0x462098u;
        goto label_462098;
    }
    ctx->pc = 0x462090u;
    {
        const bool branch_taken_0x462090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462090) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x462098u;
label_462098:
    // 0x462098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x462098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46209c:
    // 0x46209c: 0xaf82bfd8  sw          $v0, -0x4028($gp)
    ctx->pc = 0x46209cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950872), GPR_U32(ctx, 2));
label_4620a0:
    // 0x4620a0: 0x8f82bfd0  lw          $v0, -0x4030($gp)
    ctx->pc = 0x4620a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_4620a4:
    // 0x4620a4: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x4620a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_4620a8:
    // 0x4620a8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4620ac:
    if (ctx->pc == 0x4620ACu) {
        ctx->pc = 0x4620B0u;
        goto label_4620b0;
    }
    ctx->pc = 0x4620A8u;
    {
        const bool branch_taken_0x4620a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4620a8) {
            ctx->pc = 0x4620B8u;
            goto label_4620b8;
        }
    }
    ctx->pc = 0x4620B0u;
label_4620b0:
    // 0x4620b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4620b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4620b4:
    // 0x4620b4: 0xaf82bfd0  sw          $v0, -0x4030($gp)
    ctx->pc = 0x4620b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950864), GPR_U32(ctx, 2));
label_4620b8:
    // 0x4620b8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4620b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4620bc:
    // 0x4620bc: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x4620bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_4620c0:
    // 0x4620c0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4620c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4620c4:
    // 0x4620c4: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x4620c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_4620c8:
    // 0x4620c8: 0x27a606f0  addiu       $a2, $sp, 0x6F0
    ctx->pc = 0x4620c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
label_4620cc:
    // 0x4620cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4620ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4620d0:
    // 0x4620d0: 0x8f88bfd0  lw          $t0, -0x4030($gp)
    ctx->pc = 0x4620d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_4620d4:
    // 0x4620d4: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x4620d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_4620d8:
    // 0x4620d8: 0x25294ec0  addiu       $t1, $t1, 0x4EC0
    ctx->pc = 0x4620d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20160));
label_4620dc:
    // 0x4620dc: 0xc0c3d52  jal         func_30F548
label_4620e0:
    if (ctx->pc == 0x4620E0u) {
        ctx->pc = 0x4620E4u;
        goto label_4620e4;
    }
    ctx->pc = 0x4620DCu;
    SET_GPR_U32(ctx, 31, 0x4620E4u);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x4620DCu, 0x4620E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4620E4u;
label_4620e4:
    // 0x4620e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4620e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4620e8:
    // 0x4620e8: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_4620ec:
    if (ctx->pc == 0x4620ECu) {
        ctx->pc = 0x4620F0u;
        goto label_4620f0;
    }
    ctx->pc = 0x4620E8u;
    {
        const bool branch_taken_0x4620e8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x4620e8) {
            ctx->pc = 0x46210Cu;
            goto label_46210c;
        }
    }
    ctx->pc = 0x4620F0u;
label_4620f0:
    // 0x4620f0: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x4620f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_4620f4:
    // 0x4620f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4620f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4620f8:
    // 0x4620f8: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x4620f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4620fc:
    // 0x4620fc: 0xc1181ac  jal         func_4606B0
label_462100:
    if (ctx->pc == 0x462100u) {
        ctx->pc = 0x462104u;
        goto label_462104;
    }
    ctx->pc = 0x4620FCu;
    SET_GPR_U32(ctx, 31, 0x462104u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4620FCu, 0x462104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462104u;
label_462104:
    // 0x462104: 0x10000190  b           . + 4 + (0x190 << 2)
label_462108:
    if (ctx->pc == 0x462108u) {
        ctx->pc = 0x46210Cu;
        goto label_46210c;
    }
    ctx->pc = 0x462104u;
    {
        const bool branch_taken_0x462104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462104) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x46210Cu;
label_46210c:
    // 0x46210c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46210cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462110:
    // 0x462110: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x462110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_462114:
    // 0x462114: 0x1000018c  b           . + 4 + (0x18C << 2)
label_462118:
    if (ctx->pc == 0x462118u) {
        ctx->pc = 0x46211Cu;
        goto label_46211c;
    }
    ctx->pc = 0x462114u;
    {
        const bool branch_taken_0x462114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462114) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x46211Cu;
label_46211c:
    // 0x46211c: 0x8fa407b0  lw          $a0, 0x7B0($sp)
    ctx->pc = 0x46211cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1968)));
label_462120:
    // 0x462120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x462120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462124:
    // 0x462124: 0x14830188  bne         $a0, $v1, . + 4 + (0x188 << 2)
label_462128:
    if (ctx->pc == 0x462128u) {
        ctx->pc = 0x46212Cu;
        goto label_46212c;
    }
    ctx->pc = 0x462124u;
    {
        const bool branch_taken_0x462124 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x462124) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x46212Cu;
label_46212c:
    // 0x46212c: 0x8fa30790  lw          $v1, 0x790($sp)
    ctx->pc = 0x46212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1936)));
label_462130:
    // 0x462130: 0x3863000d  xori        $v1, $v1, 0xD
    ctx->pc = 0x462130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
label_462134:
    // 0x462134: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x462134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_462138:
    // 0x462138: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x462138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_46213c:
    // 0x46213c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_462140:
    if (ctx->pc == 0x462140u) {
        ctx->pc = 0x462144u;
        goto label_462144;
    }
    ctx->pc = 0x46213Cu;
    {
        const bool branch_taken_0x46213c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46213c) {
            ctx->pc = 0x4621ECu;
            goto label_4621ec;
        }
    }
    ctx->pc = 0x462144u;
label_462144:
    // 0x462144: 0x8f83b23c  lw          $v1, -0x4DC4($gp)
    ctx->pc = 0x462144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947388)));
label_462148:
    // 0x462148: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_46214c:
    if (ctx->pc == 0x46214Cu) {
        ctx->pc = 0x462150u;
        goto label_462150;
    }
    ctx->pc = 0x462148u;
    {
        const bool branch_taken_0x462148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462148) {
            ctx->pc = 0x4621ECu;
            goto label_4621ec;
        }
    }
    ctx->pc = 0x462150u;
label_462150:
    // 0x462150: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x462150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_462154:
    // 0x462154: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462158:
    // 0x462158: 0x27a60780  addiu       $a2, $sp, 0x780
    ctx->pc = 0x462158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_46215c:
    // 0x46215c: 0xc115ee8  jal         func_457BA0
label_462160:
    if (ctx->pc == 0x462160u) {
        ctx->pc = 0x462164u;
        goto label_462164;
    }
    ctx->pc = 0x46215Cu;
    SET_GPR_U32(ctx, 31, 0x462164u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46215Cu, 0x462164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462164u;
label_462164:
    // 0x462164: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_462168:
    if (ctx->pc == 0x462168u) {
        ctx->pc = 0x46216Cu;
        goto label_46216c;
    }
    ctx->pc = 0x462164u;
    {
        const bool branch_taken_0x462164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462164) {
            ctx->pc = 0x4621ECu;
            goto label_4621ec;
        }
    }
    ctx->pc = 0x46216Cu;
label_46216c:
    // 0x46216c: 0x8fa30788  lw          $v1, 0x788($sp)
    ctx->pc = 0x46216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1928)));
label_462170:
    // 0x462170: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_462174:
    if (ctx->pc == 0x462174u) {
        ctx->pc = 0x462178u;
        goto label_462178;
    }
    ctx->pc = 0x462170u;
    {
        const bool branch_taken_0x462170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462170) {
            ctx->pc = 0x4621ECu;
            goto label_4621ec;
        }
    }
    ctx->pc = 0x462178u;
label_462178:
    // 0x462178: 0x27a405d0  addiu       $a0, $sp, 0x5D0
    ctx->pc = 0x462178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_46217c:
    // 0x46217c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46217cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462180:
    // 0x462180: 0x8fa60784  lw          $a2, 0x784($sp)
    ctx->pc = 0x462180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1924)));
label_462184:
    // 0x462184: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x462184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_462188:
    // 0x462188: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x462188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_46218c:
    // 0x46218c: 0x24080766  addiu       $t0, $zero, 0x766
    ctx->pc = 0x46218cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1894));
label_462190:
    // 0x462190: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x462190u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_462194:
    // 0x462194: 0x2529f150  addiu       $t1, $t1, -0xEB0
    ctx->pc = 0x462194u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963536));
label_462198:
    // 0x462198: 0xc113940  jal         func_44E500
label_46219c:
    if (ctx->pc == 0x46219Cu) {
        ctx->pc = 0x4621A0u;
        goto label_4621a0;
    }
    ctx->pc = 0x462198u;
    SET_GPR_U32(ctx, 31, 0x4621A0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x462198u, 0x4621A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4621A0u;
label_4621a0:
    // 0x4621a0: 0x27a405d0  addiu       $a0, $sp, 0x5D0
    ctx->pc = 0x4621a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_4621a4:
    // 0x4621a4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4621a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4621a8:
    // 0x4621a8: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x4621a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_4621ac:
    // 0x4621ac: 0xc115c24  jal         func_457090
label_4621b0:
    if (ctx->pc == 0x4621B0u) {
        ctx->pc = 0x4621B4u;
        goto label_4621b4;
    }
    ctx->pc = 0x4621ACu;
    SET_GPR_U32(ctx, 31, 0x4621B4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4621ACu, 0x4621B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4621B4u;
label_4621b4:
    // 0x4621b4: 0x27a405d0  addiu       $a0, $sp, 0x5D0
    ctx->pc = 0x4621b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_4621b8:
    // 0x4621b8: 0x8fa20788  lw          $v0, 0x788($sp)
    ctx->pc = 0x4621b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1928)));
label_4621bc:
    // 0x4621bc: 0x40f809  jalr        $v0
label_4621c0:
    if (ctx->pc == 0x4621C0u) {
        ctx->pc = 0x4621C4u;
        goto label_4621c4;
    }
    ctx->pc = 0x4621BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4621C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4621BCu, 0x4621C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4621C4u;
label_4621c4:
    // 0x4621c4: 0xaf82b23c  sw          $v0, -0x4DC4($gp)
    ctx->pc = 0x4621c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947388), GPR_U32(ctx, 2));
label_4621c8:
    // 0x4621c8: 0x8fa205d0  lw          $v0, 0x5D0($sp)
    ctx->pc = 0x4621c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1488)));
label_4621cc:
    // 0x4621cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4621d0:
    if (ctx->pc == 0x4621D0u) {
        ctx->pc = 0x4621D4u;
        goto label_4621d4;
    }
    ctx->pc = 0x4621CCu;
    {
        const bool branch_taken_0x4621cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4621cc) {
            ctx->pc = 0x4621DCu;
            goto label_4621dc;
        }
    }
    ctx->pc = 0x4621D4u;
label_4621d4:
    // 0x4621d4: 0xd  break       0
    ctx->pc = 0x4621d4u;
    runtime->handleBreak(rdram, ctx);
label_4621d8:
    // 0x4621d8: 0x0  nop
    ctx->pc = 0x4621d8u;
    // NOP
label_4621dc:
    // 0x4621dc: 0x27a405d0  addiu       $a0, $sp, 0x5D0
    ctx->pc = 0x4621dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_4621e0:
    // 0x4621e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4621e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4621e4:
    // 0x4621e4: 0xc11392c  jal         func_44E4B0
label_4621e8:
    if (ctx->pc == 0x4621E8u) {
        ctx->pc = 0x4621ECu;
        goto label_4621ec;
    }
    ctx->pc = 0x4621E4u;
    SET_GPR_U32(ctx, 31, 0x4621ECu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4621E4u, 0x4621ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4621ECu;
label_4621ec:
    // 0x4621ec: 0x8fa307a0  lw          $v1, 0x7A0($sp)
    ctx->pc = 0x4621ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
label_4621f0:
    // 0x4621f0: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
label_4621f4:
    if (ctx->pc == 0x4621F4u) {
        ctx->pc = 0x4621F8u;
        goto label_4621f8;
    }
    ctx->pc = 0x4621F0u;
    {
        const bool branch_taken_0x4621f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4621f0) {
            ctx->pc = 0x462218u;
            goto label_462218;
        }
    }
    ctx->pc = 0x4621F8u;
label_4621f8:
    // 0x4621f8: 0x8fa207a0  lw          $v0, 0x7A0($sp)
    ctx->pc = 0x4621f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
label_4621fc:
    // 0x4621fc: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x4621fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_462200:
    // 0x462200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x462200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462204:
    // 0x462204: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x462204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_462208:
    // 0x462208: 0xc1181ac  jal         func_4606B0
label_46220c:
    if (ctx->pc == 0x46220Cu) {
        ctx->pc = 0x462210u;
        goto label_462210;
    }
    ctx->pc = 0x462208u;
    SET_GPR_U32(ctx, 31, 0x462210u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462208u, 0x462210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462210u;
label_462210:
    // 0x462210: 0x1000014d  b           . + 4 + (0x14D << 2)
label_462214:
    if (ctx->pc == 0x462214u) {
        ctx->pc = 0x462218u;
        goto label_462218;
    }
    ctx->pc = 0x462210u;
    {
        const bool branch_taken_0x462210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462210) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x462218u;
label_462218:
    // 0x462218: 0x8fb107a0  lw          $s1, 0x7A0($sp)
    ctx->pc = 0x462218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
label_46221c:
    // 0x46221c: 0x8f83bfd0  lw          $v1, -0x4030($gp)
    ctx->pc = 0x46221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_462220:
    // 0x462220: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x462220u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_462224:
    // 0x462224: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x462224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_462228:
    // 0x462228: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x462228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_46222c:
    // 0x46222c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_462230:
    if (ctx->pc == 0x462230u) {
        ctx->pc = 0x462234u;
        goto label_462234;
    }
    ctx->pc = 0x46222Cu;
    {
        const bool branch_taken_0x46222c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46222c) {
            ctx->pc = 0x4622DCu;
            goto label_4622dc;
        }
    }
    ctx->pc = 0x462234u;
label_462234:
    // 0x462234: 0x8f83b240  lw          $v1, -0x4DC0($gp)
    ctx->pc = 0x462234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947392)));
label_462238:
    // 0x462238: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_46223c:
    if (ctx->pc == 0x46223Cu) {
        ctx->pc = 0x462240u;
        goto label_462240;
    }
    ctx->pc = 0x462238u;
    {
        const bool branch_taken_0x462238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462238) {
            ctx->pc = 0x4622DCu;
            goto label_4622dc;
        }
    }
    ctx->pc = 0x462240u;
label_462240:
    // 0x462240: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x462240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_462244:
    // 0x462244: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462248:
    // 0x462248: 0x27a60770  addiu       $a2, $sp, 0x770
    ctx->pc = 0x462248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
label_46224c:
    // 0x46224c: 0xc115ee8  jal         func_457BA0
label_462250:
    if (ctx->pc == 0x462250u) {
        ctx->pc = 0x462254u;
        goto label_462254;
    }
    ctx->pc = 0x46224Cu;
    SET_GPR_U32(ctx, 31, 0x462254u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46224Cu, 0x462254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462254u;
label_462254:
    // 0x462254: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_462258:
    if (ctx->pc == 0x462258u) {
        ctx->pc = 0x46225Cu;
        goto label_46225c;
    }
    ctx->pc = 0x462254u;
    {
        const bool branch_taken_0x462254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462254) {
            ctx->pc = 0x4622DCu;
            goto label_4622dc;
        }
    }
    ctx->pc = 0x46225Cu;
label_46225c:
    // 0x46225c: 0x8fa30778  lw          $v1, 0x778($sp)
    ctx->pc = 0x46225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1912)));
label_462260:
    // 0x462260: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_462264:
    if (ctx->pc == 0x462264u) {
        ctx->pc = 0x462268u;
        goto label_462268;
    }
    ctx->pc = 0x462260u;
    {
        const bool branch_taken_0x462260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462260) {
            ctx->pc = 0x4622DCu;
            goto label_4622dc;
        }
    }
    ctx->pc = 0x462268u;
label_462268:
    // 0x462268: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x462268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_46226c:
    // 0x46226c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462270:
    // 0x462270: 0x8fa60774  lw          $a2, 0x774($sp)
    ctx->pc = 0x462270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1908)));
label_462274:
    // 0x462274: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x462274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_462278:
    // 0x462278: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x462278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_46227c:
    // 0x46227c: 0x24080770  addiu       $t0, $zero, 0x770
    ctx->pc = 0x46227cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1904));
label_462280:
    // 0x462280: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x462280u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_462284:
    // 0x462284: 0x2529f240  addiu       $t1, $t1, -0xDC0
    ctx->pc = 0x462284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963776));
label_462288:
    // 0x462288: 0xc113940  jal         func_44E500
label_46228c:
    if (ctx->pc == 0x46228Cu) {
        ctx->pc = 0x462290u;
        goto label_462290;
    }
    ctx->pc = 0x462288u;
    SET_GPR_U32(ctx, 31, 0x462290u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x462288u, 0x462290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462290u;
label_462290:
    // 0x462290: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x462290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_462294:
    // 0x462294: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x462294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_462298:
    // 0x462298: 0x24a5f270  addiu       $a1, $a1, -0xD90
    ctx->pc = 0x462298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963824));
label_46229c:
    // 0x46229c: 0xc115c24  jal         func_457090
label_4622a0:
    if (ctx->pc == 0x4622A0u) {
        ctx->pc = 0x4622A4u;
        goto label_4622a4;
    }
    ctx->pc = 0x46229Cu;
    SET_GPR_U32(ctx, 31, 0x4622A4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46229Cu, 0x4622A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4622A4u;
label_4622a4:
    // 0x4622a4: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x4622a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_4622a8:
    // 0x4622a8: 0x8fa20778  lw          $v0, 0x778($sp)
    ctx->pc = 0x4622a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1912)));
label_4622ac:
    // 0x4622ac: 0x40f809  jalr        $v0
label_4622b0:
    if (ctx->pc == 0x4622B0u) {
        ctx->pc = 0x4622B4u;
        goto label_4622b4;
    }
    ctx->pc = 0x4622ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4622B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4622ACu, 0x4622B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4622B4u;
label_4622b4:
    // 0x4622b4: 0xaf82b240  sw          $v0, -0x4DC0($gp)
    ctx->pc = 0x4622b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947392), GPR_U32(ctx, 2));
label_4622b8:
    // 0x4622b8: 0x8fa204b0  lw          $v0, 0x4B0($sp)
    ctx->pc = 0x4622b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
label_4622bc:
    // 0x4622bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4622c0:
    if (ctx->pc == 0x4622C0u) {
        ctx->pc = 0x4622C4u;
        goto label_4622c4;
    }
    ctx->pc = 0x4622BCu;
    {
        const bool branch_taken_0x4622bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4622bc) {
            ctx->pc = 0x4622CCu;
            goto label_4622cc;
        }
    }
    ctx->pc = 0x4622C4u;
label_4622c4:
    // 0x4622c4: 0xd  break       0
    ctx->pc = 0x4622c4u;
    runtime->handleBreak(rdram, ctx);
label_4622c8:
    // 0x4622c8: 0x0  nop
    ctx->pc = 0x4622c8u;
    // NOP
label_4622cc:
    // 0x4622cc: 0x27a404b0  addiu       $a0, $sp, 0x4B0
    ctx->pc = 0x4622ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
label_4622d0:
    // 0x4622d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4622d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4622d4:
    // 0x4622d4: 0xc11392c  jal         func_44E4B0
label_4622d8:
    if (ctx->pc == 0x4622D8u) {
        ctx->pc = 0x4622DCu;
        goto label_4622dc;
    }
    ctx->pc = 0x4622D4u;
    SET_GPR_U32(ctx, 31, 0x4622DCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4622D4u, 0x4622DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4622DCu;
label_4622dc:
    // 0x4622dc: 0x8f83bfd0  lw          $v1, -0x4030($gp)
    ctx->pc = 0x4622dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_4622e0:
    // 0x4622e0: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x4622e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4622e4:
    // 0x4622e4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_4622e8:
    if (ctx->pc == 0x4622E8u) {
        ctx->pc = 0x4622ECu;
        goto label_4622ec;
    }
    ctx->pc = 0x4622E4u;
    {
        const bool branch_taken_0x4622e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4622e4) {
            ctx->pc = 0x462310u;
            goto label_462310;
        }
    }
    ctx->pc = 0x4622ECu;
label_4622ec:
    // 0x4622ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4622ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4622f0:
    // 0x4622f0: 0x8c424e34  lw          $v0, 0x4E34($v0)
    ctx->pc = 0x4622f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20020)));
label_4622f4:
    // 0x4622f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4622f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4622f8:
    // 0x4622f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4622f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4622fc:
    // 0x4622fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4622fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462300:
    // 0x462300: 0xc1181ac  jal         func_4606B0
label_462304:
    if (ctx->pc == 0x462304u) {
        ctx->pc = 0x462308u;
        goto label_462308;
    }
    ctx->pc = 0x462300u;
    SET_GPR_U32(ctx, 31, 0x462308u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462300u, 0x462308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462308u;
label_462308:
    // 0x462308: 0x1000010f  b           . + 4 + (0x10F << 2)
label_46230c:
    if (ctx->pc == 0x46230Cu) {
        ctx->pc = 0x462310u;
        goto label_462310;
    }
    ctx->pc = 0x462308u;
    {
        const bool branch_taken_0x462308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462308) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x462310u;
label_462310:
    // 0x462310: 0x8f83bfd4  lw          $v1, -0x402C($gp)
    ctx->pc = 0x462310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950868)));
label_462314:
    // 0x462314: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x462314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_462318:
    // 0x462318: 0xaf83bfd4  sw          $v1, -0x402C($gp)
    ctx->pc = 0x462318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950868), GPR_U32(ctx, 3));
label_46231c:
    // 0x46231c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x46231cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_462320:
    // 0x462320: 0x8c644e2c  lw          $a0, 0x4E2C($v1)
    ctx->pc = 0x462320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20012)));
label_462324:
    // 0x462324: 0x8f83bfd4  lw          $v1, -0x402C($gp)
    ctx->pc = 0x462324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950868)));
label_462328:
    // 0x462328: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x462328u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_46232c:
    // 0x46232c: 0xaf83bfd0  sw          $v1, -0x4030($gp)
    ctx->pc = 0x46232cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950864), GPR_U32(ctx, 3));
label_462330:
    // 0x462330: 0x8f83bfd0  lw          $v1, -0x4030($gp)
    ctx->pc = 0x462330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_462334:
    // 0x462334: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x462334u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_462338:
    // 0x462338: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x462338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_46233c:
    // 0x46233c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x46233cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_462340:
    // 0x462340: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_462344:
    if (ctx->pc == 0x462344u) {
        ctx->pc = 0x462348u;
        goto label_462348;
    }
    ctx->pc = 0x462340u;
    {
        const bool branch_taken_0x462340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x462340) {
            ctx->pc = 0x4623F0u;
            goto label_4623f0;
        }
    }
    ctx->pc = 0x462348u;
label_462348:
    // 0x462348: 0x8f83b244  lw          $v1, -0x4DBC($gp)
    ctx->pc = 0x462348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947396)));
label_46234c:
    // 0x46234c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_462350:
    if (ctx->pc == 0x462350u) {
        ctx->pc = 0x462354u;
        goto label_462354;
    }
    ctx->pc = 0x46234Cu;
    {
        const bool branch_taken_0x46234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46234c) {
            ctx->pc = 0x4623F0u;
            goto label_4623f0;
        }
    }
    ctx->pc = 0x462354u;
label_462354:
    // 0x462354: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x462354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_462358:
    // 0x462358: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46235c:
    // 0x46235c: 0x27a60760  addiu       $a2, $sp, 0x760
    ctx->pc = 0x46235cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_462360:
    // 0x462360: 0xc115ee8  jal         func_457BA0
label_462364:
    if (ctx->pc == 0x462364u) {
        ctx->pc = 0x462368u;
        goto label_462368;
    }
    ctx->pc = 0x462360u;
    SET_GPR_U32(ctx, 31, 0x462368u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x462360u, 0x462368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462368u;
label_462368:
    // 0x462368: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46236c:
    if (ctx->pc == 0x46236Cu) {
        ctx->pc = 0x462370u;
        goto label_462370;
    }
    ctx->pc = 0x462368u;
    {
        const bool branch_taken_0x462368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462368) {
            ctx->pc = 0x4623F0u;
            goto label_4623f0;
        }
    }
    ctx->pc = 0x462370u;
label_462370:
    // 0x462370: 0x8fa30768  lw          $v1, 0x768($sp)
    ctx->pc = 0x462370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1896)));
label_462374:
    // 0x462374: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_462378:
    if (ctx->pc == 0x462378u) {
        ctx->pc = 0x46237Cu;
        goto label_46237c;
    }
    ctx->pc = 0x462374u;
    {
        const bool branch_taken_0x462374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x462374) {
            ctx->pc = 0x4623F0u;
            goto label_4623f0;
        }
    }
    ctx->pc = 0x46237Cu;
label_46237c:
    // 0x46237c: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x46237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_462380:
    // 0x462380: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462384:
    // 0x462384: 0x8fa60764  lw          $a2, 0x764($sp)
    ctx->pc = 0x462384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1892)));
label_462388:
    // 0x462388: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x462388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46238c:
    // 0x46238c: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x46238cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_462390:
    // 0x462390: 0x2408077d  addiu       $t0, $zero, 0x77D
    ctx->pc = 0x462390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1917));
label_462394:
    // 0x462394: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x462394u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_462398:
    // 0x462398: 0x2529f290  addiu       $t1, $t1, -0xD70
    ctx->pc = 0x462398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963856));
label_46239c:
    // 0x46239c: 0xc113940  jal         func_44E500
label_4623a0:
    if (ctx->pc == 0x4623A0u) {
        ctx->pc = 0x4623A4u;
        goto label_4623a4;
    }
    ctx->pc = 0x46239Cu;
    SET_GPR_U32(ctx, 31, 0x4623A4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46239Cu, 0x4623A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4623A4u;
label_4623a4:
    // 0x4623a4: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x4623a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_4623a8:
    // 0x4623a8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4623a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4623ac:
    // 0x4623ac: 0x24a5f2b0  addiu       $a1, $a1, -0xD50
    ctx->pc = 0x4623acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963888));
label_4623b0:
    // 0x4623b0: 0xc115c24  jal         func_457090
label_4623b4:
    if (ctx->pc == 0x4623B4u) {
        ctx->pc = 0x4623B8u;
        goto label_4623b8;
    }
    ctx->pc = 0x4623B0u;
    SET_GPR_U32(ctx, 31, 0x4623B8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4623B0u, 0x4623B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4623B8u;
label_4623b8:
    // 0x4623b8: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x4623b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_4623bc:
    // 0x4623bc: 0x8fa20768  lw          $v0, 0x768($sp)
    ctx->pc = 0x4623bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1896)));
label_4623c0:
    // 0x4623c0: 0x40f809  jalr        $v0
label_4623c4:
    if (ctx->pc == 0x4623C4u) {
        ctx->pc = 0x4623C8u;
        goto label_4623c8;
    }
    ctx->pc = 0x4623C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4623C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4623C0u, 0x4623C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4623C8u;
label_4623c8:
    // 0x4623c8: 0xaf82b244  sw          $v0, -0x4DBC($gp)
    ctx->pc = 0x4623c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947396), GPR_U32(ctx, 2));
label_4623cc:
    // 0x4623cc: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x4623ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_4623d0:
    // 0x4623d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4623d4:
    if (ctx->pc == 0x4623D4u) {
        ctx->pc = 0x4623D8u;
        goto label_4623d8;
    }
    ctx->pc = 0x4623D0u;
    {
        const bool branch_taken_0x4623d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4623d0) {
            ctx->pc = 0x4623E0u;
            goto label_4623e0;
        }
    }
    ctx->pc = 0x4623D8u;
label_4623d8:
    // 0x4623d8: 0xd  break       0
    ctx->pc = 0x4623d8u;
    runtime->handleBreak(rdram, ctx);
label_4623dc:
    // 0x4623dc: 0x0  nop
    ctx->pc = 0x4623dcu;
    // NOP
label_4623e0:
    // 0x4623e0: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x4623e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_4623e4:
    // 0x4623e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4623e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4623e8:
    // 0x4623e8: 0xc11392c  jal         func_44E4B0
label_4623ec:
    if (ctx->pc == 0x4623ECu) {
        ctx->pc = 0x4623F0u;
        goto label_4623f0;
    }
    ctx->pc = 0x4623E8u;
    SET_GPR_U32(ctx, 31, 0x4623F0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4623E8u, 0x4623F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4623F0u;
label_4623f0:
    // 0x4623f0: 0x8f83bfd0  lw          $v1, -0x4030($gp)
    ctx->pc = 0x4623f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_4623f4:
    // 0x4623f4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_4623f8:
    if (ctx->pc == 0x4623F8u) {
        ctx->pc = 0x4623FCu;
        goto label_4623fc;
    }
    ctx->pc = 0x4623F4u;
    {
        const bool branch_taken_0x4623f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4623f4) {
            ctx->pc = 0x46240Cu;
            goto label_46240c;
        }
    }
    ctx->pc = 0x4623FCu;
label_4623fc:
    // 0x4623fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4623fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_462400:
    // 0x462400: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x462400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_462404:
    // 0x462404: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_462408:
    if (ctx->pc == 0x462408u) {
        ctx->pc = 0x46240Cu;
        goto label_46240c;
    }
    ctx->pc = 0x462404u;
    {
        const bool branch_taken_0x462404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462404) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x46240Cu;
label_46240c:
    // 0x46240c: 0x8f82bfd0  lw          $v0, -0x4030($gp)
    ctx->pc = 0x46240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_462410:
    // 0x462410: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x462410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
label_462414:
    // 0x462414: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_462418:
    if (ctx->pc == 0x462418u) {
        ctx->pc = 0x46241Cu;
        goto label_46241c;
    }
    ctx->pc = 0x462414u;
    {
        const bool branch_taken_0x462414 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x462414) {
            ctx->pc = 0x462424u;
            goto label_462424;
        }
    }
    ctx->pc = 0x46241Cu;
label_46241c:
    // 0x46241c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x46241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_462420:
    // 0x462420: 0xaf82bfd0  sw          $v0, -0x4030($gp)
    ctx->pc = 0x462420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950864), GPR_U32(ctx, 2));
label_462424:
    // 0x462424: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462428:
    // 0x462428: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x462428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_46242c:
    // 0x46242c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46242cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462430:
    // 0x462430: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x462430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_462434:
    // 0x462434: 0x27a606f0  addiu       $a2, $sp, 0x6F0
    ctx->pc = 0x462434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
label_462438:
    // 0x462438: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x462438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46243c:
    // 0x46243c: 0x8f88bfd0  lw          $t0, -0x4030($gp)
    ctx->pc = 0x46243cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950864)));
label_462440:
    // 0x462440: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x462440u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_462444:
    // 0x462444: 0x25294ec0  addiu       $t1, $t1, 0x4EC0
    ctx->pc = 0x462444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20160));
label_462448:
    // 0x462448: 0xc0c3d52  jal         func_30F548
label_46244c:
    if (ctx->pc == 0x46244Cu) {
        ctx->pc = 0x462450u;
        goto label_462450;
    }
    ctx->pc = 0x462448u;
    SET_GPR_U32(ctx, 31, 0x462450u);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x462448u, 0x462450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462450u;
label_462450:
    // 0x462450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x462450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462454:
    // 0x462454: 0x100000bc  b           . + 4 + (0xBC << 2)
label_462458:
    if (ctx->pc == 0x462458u) {
        ctx->pc = 0x46245Cu;
        goto label_46245c;
    }
    ctx->pc = 0x462454u;
    {
        const bool branch_taken_0x462454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462454) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x46245Cu;
label_46245c:
    // 0x46245c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46245cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462460:
    // 0x462460: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x462460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_462464:
    // 0x462464: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462468:
    // 0x462468: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x462468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_46246c:
    // 0x46246c: 0x27a606f0  addiu       $a2, $sp, 0x6F0
    ctx->pc = 0x46246cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
label_462470:
    // 0x462470: 0x8f87bfd8  lw          $a3, -0x4028($gp)
    ctx->pc = 0x462470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950872)));
label_462474:
    // 0x462474: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462478:
    // 0x462478: 0x8c484e30  lw          $t0, 0x4E30($v0)
    ctx->pc = 0x462478u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20016)));
label_46247c:
    // 0x46247c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462480:
    // 0x462480: 0x8c494e08  lw          $t1, 0x4E08($v0)
    ctx->pc = 0x462480u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19976)));
label_462484:
    // 0x462484: 0xc0c3d52  jal         func_30F548
label_462488:
    if (ctx->pc == 0x462488u) {
        ctx->pc = 0x46248Cu;
        goto label_46248c;
    }
    ctx->pc = 0x462484u;
    SET_GPR_U32(ctx, 31, 0x46248Cu);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x462484u, 0x46248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46248Cu;
label_46248c:
    // 0x46248c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46248cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462490:
    // 0x462490: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_462494:
    if (ctx->pc == 0x462494u) {
        ctx->pc = 0x462498u;
        goto label_462498;
    }
    ctx->pc = 0x462490u;
    {
        const bool branch_taken_0x462490 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x462490) {
            ctx->pc = 0x4624B4u;
            goto label_4624b4;
        }
    }
    ctx->pc = 0x462498u;
label_462498:
    // 0x462498: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x462498u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_46249c:
    // 0x46249c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46249cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4624a0:
    // 0x4624a0: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x4624a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4624a4:
    // 0x4624a4: 0xc1181ac  jal         func_4606B0
label_4624a8:
    if (ctx->pc == 0x4624A8u) {
        ctx->pc = 0x4624ACu;
        goto label_4624ac;
    }
    ctx->pc = 0x4624A4u;
    SET_GPR_U32(ctx, 31, 0x4624ACu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4624A4u, 0x4624ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4624ACu;
label_4624ac:
    // 0x4624ac: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_4624b0:
    if (ctx->pc == 0x4624B0u) {
        ctx->pc = 0x4624B4u;
        goto label_4624b4;
    }
    ctx->pc = 0x4624ACu;
    {
        const bool branch_taken_0x4624ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4624ac) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x4624B4u;
label_4624b4:
    // 0x4624b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4624b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4624b8:
    // 0x4624b8: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x4624b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_4624bc:
    // 0x4624bc: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_4624c0:
    if (ctx->pc == 0x4624C0u) {
        ctx->pc = 0x4624C4u;
        goto label_4624c4;
    }
    ctx->pc = 0x4624BCu;
    {
        const bool branch_taken_0x4624bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4624bc) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x4624C4u;
label_4624c4:
    // 0x4624c4: 0x8fa407b0  lw          $a0, 0x7B0($sp)
    ctx->pc = 0x4624c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1968)));
label_4624c8:
    // 0x4624c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4624c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4624cc:
    // 0x4624cc: 0x1483009e  bne         $a0, $v1, . + 4 + (0x9E << 2)
label_4624d0:
    if (ctx->pc == 0x4624D0u) {
        ctx->pc = 0x4624D4u;
        goto label_4624d4;
    }
    ctx->pc = 0x4624CCu;
    {
        const bool branch_taken_0x4624cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4624cc) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x4624D4u;
label_4624d4:
    // 0x4624d4: 0x8fa20790  lw          $v0, 0x790($sp)
    ctx->pc = 0x4624d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1936)));
label_4624d8:
    // 0x4624d8: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x4624d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_4624dc:
    // 0x4624dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4624dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4624e0:
    // 0x4624e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4624e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4624e4:
    // 0x4624e4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4624e8:
    if (ctx->pc == 0x4624E8u) {
        ctx->pc = 0x4624ECu;
        goto label_4624ec;
    }
    ctx->pc = 0x4624E4u;
    {
        const bool branch_taken_0x4624e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4624e4) {
            ctx->pc = 0x462594u;
            goto label_462594;
        }
    }
    ctx->pc = 0x4624ECu;
label_4624ec:
    // 0x4624ec: 0x8f82b248  lw          $v0, -0x4DB8($gp)
    ctx->pc = 0x4624ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947400)));
label_4624f0:
    // 0x4624f0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4624f4:
    if (ctx->pc == 0x4624F4u) {
        ctx->pc = 0x4624F8u;
        goto label_4624f8;
    }
    ctx->pc = 0x4624F0u;
    {
        const bool branch_taken_0x4624f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4624f0) {
            ctx->pc = 0x462594u;
            goto label_462594;
        }
    }
    ctx->pc = 0x4624F8u;
label_4624f8:
    // 0x4624f8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4624f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4624fc:
    // 0x4624fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4624fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462500:
    // 0x462500: 0x27a60750  addiu       $a2, $sp, 0x750
    ctx->pc = 0x462500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1872));
label_462504:
    // 0x462504: 0xc115ee8  jal         func_457BA0
label_462508:
    if (ctx->pc == 0x462508u) {
        ctx->pc = 0x46250Cu;
        goto label_46250c;
    }
    ctx->pc = 0x462504u;
    SET_GPR_U32(ctx, 31, 0x46250Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x462504u, 0x46250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46250Cu;
label_46250c:
    // 0x46250c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_462510:
    if (ctx->pc == 0x462510u) {
        ctx->pc = 0x462514u;
        goto label_462514;
    }
    ctx->pc = 0x46250Cu;
    {
        const bool branch_taken_0x46250c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46250c) {
            ctx->pc = 0x462594u;
            goto label_462594;
        }
    }
    ctx->pc = 0x462514u;
label_462514:
    // 0x462514: 0x8fa20758  lw          $v0, 0x758($sp)
    ctx->pc = 0x462514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1880)));
label_462518:
    // 0x462518: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46251c:
    if (ctx->pc == 0x46251Cu) {
        ctx->pc = 0x462520u;
        goto label_462520;
    }
    ctx->pc = 0x462518u;
    {
        const bool branch_taken_0x462518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462518) {
            ctx->pc = 0x462594u;
            goto label_462594;
        }
    }
    ctx->pc = 0x462520u;
label_462520:
    // 0x462520: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x462520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_462524:
    // 0x462524: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_462528:
    // 0x462528: 0x8fa60754  lw          $a2, 0x754($sp)
    ctx->pc = 0x462528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1876)));
label_46252c:
    // 0x46252c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46252cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_462530:
    // 0x462530: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x462530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_462534:
    // 0x462534: 0x240807af  addiu       $t0, $zero, 0x7AF
    ctx->pc = 0x462534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1967));
label_462538:
    // 0x462538: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x462538u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46253c:
    // 0x46253c: 0x2529f150  addiu       $t1, $t1, -0xEB0
    ctx->pc = 0x46253cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963536));
label_462540:
    // 0x462540: 0xc113940  jal         func_44E500
label_462544:
    if (ctx->pc == 0x462544u) {
        ctx->pc = 0x462548u;
        goto label_462548;
    }
    ctx->pc = 0x462540u;
    SET_GPR_U32(ctx, 31, 0x462548u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x462540u, 0x462548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462548u;
label_462548:
    // 0x462548: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x462548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_46254c:
    // 0x46254c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46254cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_462550:
    // 0x462550: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x462550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_462554:
    // 0x462554: 0xc115c24  jal         func_457090
label_462558:
    if (ctx->pc == 0x462558u) {
        ctx->pc = 0x46255Cu;
        goto label_46255c;
    }
    ctx->pc = 0x462554u;
    SET_GPR_U32(ctx, 31, 0x46255Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x462554u, 0x46255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46255Cu;
label_46255c:
    // 0x46255c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x46255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_462560:
    // 0x462560: 0x8fa20758  lw          $v0, 0x758($sp)
    ctx->pc = 0x462560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1880)));
label_462564:
    // 0x462564: 0x40f809  jalr        $v0
label_462568:
    if (ctx->pc == 0x462568u) {
        ctx->pc = 0x46256Cu;
        goto label_46256c;
    }
    ctx->pc = 0x462564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46256Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462564u, 0x46256Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46256Cu;
label_46256c:
    // 0x46256c: 0xaf82b248  sw          $v0, -0x4DB8($gp)
    ctx->pc = 0x46256cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947400), GPR_U32(ctx, 2));
label_462570:
    // 0x462570: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x462570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_462574:
    // 0x462574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_462578:
    if (ctx->pc == 0x462578u) {
        ctx->pc = 0x46257Cu;
        goto label_46257c;
    }
    ctx->pc = 0x462574u;
    {
        const bool branch_taken_0x462574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462574) {
            ctx->pc = 0x462584u;
            goto label_462584;
        }
    }
    ctx->pc = 0x46257Cu;
label_46257c:
    // 0x46257c: 0xd  break       0
    ctx->pc = 0x46257cu;
    runtime->handleBreak(rdram, ctx);
label_462580:
    // 0x462580: 0x0  nop
    ctx->pc = 0x462580u;
    // NOP
label_462584:
    // 0x462584: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x462584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_462588:
    // 0x462588: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x462588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46258c:
    // 0x46258c: 0xc11392c  jal         func_44E4B0
label_462590:
    if (ctx->pc == 0x462590u) {
        ctx->pc = 0x462594u;
        goto label_462594;
    }
    ctx->pc = 0x46258Cu;
    SET_GPR_U32(ctx, 31, 0x462594u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46258Cu, 0x462594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462594u;
label_462594:
    // 0x462594: 0x8fa207a0  lw          $v0, 0x7A0($sp)
    ctx->pc = 0x462594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
label_462598:
    // 0x462598: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_46259c:
    if (ctx->pc == 0x46259Cu) {
        ctx->pc = 0x4625A0u;
        goto label_4625a0;
    }
    ctx->pc = 0x462598u;
    {
        const bool branch_taken_0x462598 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x462598) {
            ctx->pc = 0x4625C0u;
            goto label_4625c0;
        }
    }
    ctx->pc = 0x4625A0u;
label_4625a0:
    // 0x4625a0: 0x8fa207a0  lw          $v0, 0x7A0($sp)
    ctx->pc = 0x4625a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
label_4625a4:
    // 0x4625a4: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x4625a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_4625a8:
    // 0x4625a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4625a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4625ac:
    // 0x4625ac: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x4625acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4625b0:
    // 0x4625b0: 0xc1181ac  jal         func_4606B0
label_4625b4:
    if (ctx->pc == 0x4625B4u) {
        ctx->pc = 0x4625B8u;
        goto label_4625b8;
    }
    ctx->pc = 0x4625B0u;
    SET_GPR_U32(ctx, 31, 0x4625B8u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4625B0u, 0x4625B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4625B8u;
label_4625b8:
    // 0x4625b8: 0x10000063  b           . + 4 + (0x63 << 2)
label_4625bc:
    if (ctx->pc == 0x4625BCu) {
        ctx->pc = 0x4625C0u;
        goto label_4625c0;
    }
    ctx->pc = 0x4625B8u;
    {
        const bool branch_taken_0x4625b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4625b8) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x4625C0u;
label_4625c0:
    // 0x4625c0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4625c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4625c4:
    // 0x4625c4: 0x8c424e34  lw          $v0, 0x4E34($v0)
    ctx->pc = 0x4625c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20020)));
label_4625c8:
    // 0x4625c8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4625cc:
    if (ctx->pc == 0x4625CCu) {
        ctx->pc = 0x4625D0u;
        goto label_4625d0;
    }
    ctx->pc = 0x4625C8u;
    {
        const bool branch_taken_0x4625c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4625c8) {
            ctx->pc = 0x462678u;
            goto label_462678;
        }
    }
    ctx->pc = 0x4625D0u;
label_4625d0:
    // 0x4625d0: 0x8f82b24c  lw          $v0, -0x4DB4($gp)
    ctx->pc = 0x4625d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947404)));
label_4625d4:
    // 0x4625d4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4625d8:
    if (ctx->pc == 0x4625D8u) {
        ctx->pc = 0x4625DCu;
        goto label_4625dc;
    }
    ctx->pc = 0x4625D4u;
    {
        const bool branch_taken_0x4625d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4625d4) {
            ctx->pc = 0x462678u;
            goto label_462678;
        }
    }
    ctx->pc = 0x4625DCu;
label_4625dc:
    // 0x4625dc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4625dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4625e0:
    // 0x4625e0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4625e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4625e4:
    // 0x4625e4: 0x27a60740  addiu       $a2, $sp, 0x740
    ctx->pc = 0x4625e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
label_4625e8:
    // 0x4625e8: 0xc115ee8  jal         func_457BA0
label_4625ec:
    if (ctx->pc == 0x4625ECu) {
        ctx->pc = 0x4625F0u;
        goto label_4625f0;
    }
    ctx->pc = 0x4625E8u;
    SET_GPR_U32(ctx, 31, 0x4625F0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4625E8u, 0x4625F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4625F0u;
label_4625f0:
    // 0x4625f0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4625f4:
    if (ctx->pc == 0x4625F4u) {
        ctx->pc = 0x4625F8u;
        goto label_4625f8;
    }
    ctx->pc = 0x4625F0u;
    {
        const bool branch_taken_0x4625f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4625f0) {
            ctx->pc = 0x462678u;
            goto label_462678;
        }
    }
    ctx->pc = 0x4625F8u;
label_4625f8:
    // 0x4625f8: 0x8fa20748  lw          $v0, 0x748($sp)
    ctx->pc = 0x4625f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1864)));
label_4625fc:
    // 0x4625fc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_462600:
    if (ctx->pc == 0x462600u) {
        ctx->pc = 0x462604u;
        goto label_462604;
    }
    ctx->pc = 0x4625FCu;
    {
        const bool branch_taken_0x4625fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4625fc) {
            ctx->pc = 0x462678u;
            goto label_462678;
        }
    }
    ctx->pc = 0x462604u;
label_462604:
    // 0x462604: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x462604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_462608:
    // 0x462608: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x462608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46260c:
    // 0x46260c: 0x8fa60744  lw          $a2, 0x744($sp)
    ctx->pc = 0x46260cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1860)));
label_462610:
    // 0x462610: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x462610u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_462614:
    // 0x462614: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x462614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_462618:
    // 0x462618: 0x240807b7  addiu       $t0, $zero, 0x7B7
    ctx->pc = 0x462618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1975));
label_46261c:
    // 0x46261c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46261cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_462620:
    // 0x462620: 0x2529f2d0  addiu       $t1, $t1, -0xD30
    ctx->pc = 0x462620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963920));
label_462624:
    // 0x462624: 0xc113940  jal         func_44E500
label_462628:
    if (ctx->pc == 0x462628u) {
        ctx->pc = 0x46262Cu;
        goto label_46262c;
    }
    ctx->pc = 0x462624u;
    SET_GPR_U32(ctx, 31, 0x46262Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x462624u, 0x46262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46262Cu;
label_46262c:
    // 0x46262c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x46262cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_462630:
    // 0x462630: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x462630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_462634:
    // 0x462634: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x462634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_462638:
    // 0x462638: 0xc115c24  jal         func_457090
label_46263c:
    if (ctx->pc == 0x46263Cu) {
        ctx->pc = 0x462640u;
        goto label_462640;
    }
    ctx->pc = 0x462638u;
    SET_GPR_U32(ctx, 31, 0x462640u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x462638u, 0x462640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462640u;
label_462640:
    // 0x462640: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x462640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_462644:
    // 0x462644: 0x8fa20748  lw          $v0, 0x748($sp)
    ctx->pc = 0x462644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1864)));
label_462648:
    // 0x462648: 0x40f809  jalr        $v0
label_46264c:
    if (ctx->pc == 0x46264Cu) {
        ctx->pc = 0x462650u;
        goto label_462650;
    }
    ctx->pc = 0x462648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x462650u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462648u, 0x462650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x462650u;
label_462650:
    // 0x462650: 0xaf82b24c  sw          $v0, -0x4DB4($gp)
    ctx->pc = 0x462650u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947404), GPR_U32(ctx, 2));
label_462654:
    // 0x462654: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x462654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_462658:
    // 0x462658: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46265c:
    if (ctx->pc == 0x46265Cu) {
        ctx->pc = 0x462660u;
        goto label_462660;
    }
    ctx->pc = 0x462658u;
    {
        const bool branch_taken_0x462658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462658) {
            ctx->pc = 0x462668u;
            goto label_462668;
        }
    }
    ctx->pc = 0x462660u;
label_462660:
    // 0x462660: 0xd  break       0
    ctx->pc = 0x462660u;
    runtime->handleBreak(rdram, ctx);
label_462664:
    // 0x462664: 0x0  nop
    ctx->pc = 0x462664u;
    // NOP
label_462668:
    // 0x462668: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x462668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_46266c:
    // 0x46266c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46266cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_462670:
    // 0x462670: 0xc11392c  jal         func_44E4B0
label_462674:
    if (ctx->pc == 0x462674u) {
        ctx->pc = 0x462678u;
        goto label_462678;
    }
    ctx->pc = 0x462670u;
    SET_GPR_U32(ctx, 31, 0x462678u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x462670u, 0x462678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462678u;
label_462678:
    // 0x462678: 0x8fa307a0  lw          $v1, 0x7A0($sp)
    ctx->pc = 0x462678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1952)));
label_46267c:
    // 0x46267c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462680:
    // 0x462680: 0x8c424e34  lw          $v0, 0x4E34($v0)
    ctx->pc = 0x462680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20020)));
label_462684:
    // 0x462684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x462684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_462688:
    // 0x462688: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x462688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46268c:
    // 0x46268c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462690:
    // 0x462690: 0xc1181ac  jal         func_4606B0
label_462694:
    if (ctx->pc == 0x462694u) {
        ctx->pc = 0x462698u;
        goto label_462698;
    }
    ctx->pc = 0x462690u;
    SET_GPR_U32(ctx, 31, 0x462698u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462690u, 0x462698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462698u;
label_462698:
    // 0x462698: 0x1000002b  b           . + 4 + (0x2B << 2)
label_46269c:
    if (ctx->pc == 0x46269Cu) {
        ctx->pc = 0x4626A0u;
        goto label_4626a0;
    }
    ctx->pc = 0x462698u;
    {
        const bool branch_taken_0x462698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462698) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x4626A0u;
label_4626a0:
    // 0x4626a0: 0x8f83b250  lw          $v1, -0x4DB0($gp)
    ctx->pc = 0x4626a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947408)));
label_4626a4:
    // 0x4626a4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_4626a8:
    if (ctx->pc == 0x4626A8u) {
        ctx->pc = 0x4626ACu;
        goto label_4626ac;
    }
    ctx->pc = 0x4626A4u;
    {
        const bool branch_taken_0x4626a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4626a4) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x4626ACu;
label_4626ac:
    // 0x4626ac: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4626acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4626b0:
    // 0x4626b0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4626b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4626b4:
    // 0x4626b4: 0x27a60730  addiu       $a2, $sp, 0x730
    ctx->pc = 0x4626b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
label_4626b8:
    // 0x4626b8: 0xc115ee8  jal         func_457BA0
label_4626bc:
    if (ctx->pc == 0x4626BCu) {
        ctx->pc = 0x4626C0u;
        goto label_4626c0;
    }
    ctx->pc = 0x4626B8u;
    SET_GPR_U32(ctx, 31, 0x4626C0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4626B8u, 0x4626C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4626C0u;
label_4626c0:
    // 0x4626c0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4626c4:
    if (ctx->pc == 0x4626C4u) {
        ctx->pc = 0x4626C8u;
        goto label_4626c8;
    }
    ctx->pc = 0x4626C0u;
    {
        const bool branch_taken_0x4626c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4626c0) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x4626C8u;
label_4626c8:
    // 0x4626c8: 0x8fa30738  lw          $v1, 0x738($sp)
    ctx->pc = 0x4626c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1848)));
label_4626cc:
    // 0x4626cc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_4626d0:
    if (ctx->pc == 0x4626D0u) {
        ctx->pc = 0x4626D4u;
        goto label_4626d4;
    }
    ctx->pc = 0x4626CCu;
    {
        const bool branch_taken_0x4626cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4626cc) {
            ctx->pc = 0x462748u;
            goto label_462748;
        }
    }
    ctx->pc = 0x4626D4u;
label_4626d4:
    // 0x4626d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4626d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4626d8:
    // 0x4626d8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4626d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4626dc:
    // 0x4626dc: 0x8fa60734  lw          $a2, 0x734($sp)
    ctx->pc = 0x4626dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1844)));
label_4626e0:
    // 0x4626e0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4626e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4626e4:
    // 0x4626e4: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4626e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4626e8:
    // 0x4626e8: 0x240807c1  addiu       $t0, $zero, 0x7C1
    ctx->pc = 0x4626e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1985));
label_4626ec:
    // 0x4626ec: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x4626ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_4626f0:
    // 0x4626f0: 0xc113940  jal         func_44E500
label_4626f4:
    if (ctx->pc == 0x4626F4u) {
        ctx->pc = 0x4626F8u;
        goto label_4626f8;
    }
    ctx->pc = 0x4626F0u;
    SET_GPR_U32(ctx, 31, 0x4626F8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4626F0u, 0x4626F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4626F8u;
label_4626f8:
    // 0x4626f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4626f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4626fc:
    // 0x4626fc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4626fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_462700:
    // 0x462700: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x462700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_462704:
    // 0x462704: 0xc115c24  jal         func_457090
label_462708:
    if (ctx->pc == 0x462708u) {
        ctx->pc = 0x46270Cu;
        goto label_46270c;
    }
    ctx->pc = 0x462704u;
    SET_GPR_U32(ctx, 31, 0x46270Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x462704u, 0x46270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46270Cu;
label_46270c:
    // 0x46270c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x46270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_462710:
    // 0x462710: 0x8fa20738  lw          $v0, 0x738($sp)
    ctx->pc = 0x462710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1848)));
label_462714:
    // 0x462714: 0x40f809  jalr        $v0
label_462718:
    if (ctx->pc == 0x462718u) {
        ctx->pc = 0x46271Cu;
        goto label_46271c;
    }
    ctx->pc = 0x462714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46271Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462714u, 0x46271Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46271Cu;
label_46271c:
    // 0x46271c: 0xaf82b250  sw          $v0, -0x4DB0($gp)
    ctx->pc = 0x46271cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947408), GPR_U32(ctx, 2));
label_462720:
    // 0x462720: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x462720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_462724:
    // 0x462724: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_462728:
    if (ctx->pc == 0x462728u) {
        ctx->pc = 0x46272Cu;
        goto label_46272c;
    }
    ctx->pc = 0x462724u;
    {
        const bool branch_taken_0x462724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x462724) {
            ctx->pc = 0x462734u;
            goto label_462734;
        }
    }
    ctx->pc = 0x46272Cu;
label_46272c:
    // 0x46272c: 0xd  break       0
    ctx->pc = 0x46272cu;
    runtime->handleBreak(rdram, ctx);
label_462730:
    // 0x462730: 0x0  nop
    ctx->pc = 0x462730u;
    // NOP
label_462734:
    // 0x462734: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x462734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_462738:
    // 0x462738: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x462738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46273c:
    // 0x46273c: 0xc11392c  jal         func_44E4B0
label_462740:
    if (ctx->pc == 0x462740u) {
        ctx->pc = 0x462744u;
        goto label_462744;
    }
    ctx->pc = 0x46273Cu;
    SET_GPR_U32(ctx, 31, 0x462744u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46273Cu, 0x462744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462744u;
label_462744:
    // 0x462744: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x462744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462748:
    // 0x462748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x462748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46274c:
    // 0x46274c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46274cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_462750:
    // 0x462750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x462750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_462754:
    // 0x462754: 0x27bd07d0  addiu       $sp, $sp, 0x7D0
    ctx->pc = 0x462754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2000));
label_462758:
    // 0x462758: 0x3e00008  jr          $ra
label_46275c:
    if (ctx->pc == 0x46275Cu) {
        ctx->pc = 0x462760u;
        goto label_fallthrough_0x462758;
    }
    ctx->pc = 0x462758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x462758:
    ctx->pc = 0x462760u;
}
