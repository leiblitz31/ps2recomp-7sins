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

// Function: sub_00143FB0
// Address: 0x143fb0 - 0x144fc0
void sub_00143FB0_0x143fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143FB0_0x143fb0");
#endif

    switch (ctx->pc) {
        case 0x143fb0u: goto label_143fb0;
        case 0x143fb4u: goto label_143fb4;
        case 0x143fb8u: goto label_143fb8;
        case 0x143fbcu: goto label_143fbc;
        case 0x143fc0u: goto label_143fc0;
        case 0x143fc4u: goto label_143fc4;
        case 0x143fc8u: goto label_143fc8;
        case 0x143fccu: goto label_143fcc;
        case 0x143fd0u: goto label_143fd0;
        case 0x143fd4u: goto label_143fd4;
        case 0x143fd8u: goto label_143fd8;
        case 0x143fdcu: goto label_143fdc;
        case 0x143fe0u: goto label_143fe0;
        case 0x143fe4u: goto label_143fe4;
        case 0x143fe8u: goto label_143fe8;
        case 0x143fecu: goto label_143fec;
        case 0x143ff0u: goto label_143ff0;
        case 0x143ff4u: goto label_143ff4;
        case 0x143ff8u: goto label_143ff8;
        case 0x143ffcu: goto label_143ffc;
        case 0x144000u: goto label_144000;
        case 0x144004u: goto label_144004;
        case 0x144008u: goto label_144008;
        case 0x14400cu: goto label_14400c;
        case 0x144010u: goto label_144010;
        case 0x144014u: goto label_144014;
        case 0x144018u: goto label_144018;
        case 0x14401cu: goto label_14401c;
        case 0x144020u: goto label_144020;
        case 0x144024u: goto label_144024;
        case 0x144028u: goto label_144028;
        case 0x14402cu: goto label_14402c;
        case 0x144030u: goto label_144030;
        case 0x144034u: goto label_144034;
        case 0x144038u: goto label_144038;
        case 0x14403cu: goto label_14403c;
        case 0x144040u: goto label_144040;
        case 0x144044u: goto label_144044;
        case 0x144048u: goto label_144048;
        case 0x14404cu: goto label_14404c;
        case 0x144050u: goto label_144050;
        case 0x144054u: goto label_144054;
        case 0x144058u: goto label_144058;
        case 0x14405cu: goto label_14405c;
        case 0x144060u: goto label_144060;
        case 0x144064u: goto label_144064;
        case 0x144068u: goto label_144068;
        case 0x14406cu: goto label_14406c;
        case 0x144070u: goto label_144070;
        case 0x144074u: goto label_144074;
        case 0x144078u: goto label_144078;
        case 0x14407cu: goto label_14407c;
        case 0x144080u: goto label_144080;
        case 0x144084u: goto label_144084;
        case 0x144088u: goto label_144088;
        case 0x14408cu: goto label_14408c;
        case 0x144090u: goto label_144090;
        case 0x144094u: goto label_144094;
        case 0x144098u: goto label_144098;
        case 0x14409cu: goto label_14409c;
        case 0x1440a0u: goto label_1440a0;
        case 0x1440a4u: goto label_1440a4;
        case 0x1440a8u: goto label_1440a8;
        case 0x1440acu: goto label_1440ac;
        case 0x1440b0u: goto label_1440b0;
        case 0x1440b4u: goto label_1440b4;
        case 0x1440b8u: goto label_1440b8;
        case 0x1440bcu: goto label_1440bc;
        case 0x1440c0u: goto label_1440c0;
        case 0x1440c4u: goto label_1440c4;
        case 0x1440c8u: goto label_1440c8;
        case 0x1440ccu: goto label_1440cc;
        case 0x1440d0u: goto label_1440d0;
        case 0x1440d4u: goto label_1440d4;
        case 0x1440d8u: goto label_1440d8;
        case 0x1440dcu: goto label_1440dc;
        case 0x1440e0u: goto label_1440e0;
        case 0x1440e4u: goto label_1440e4;
        case 0x1440e8u: goto label_1440e8;
        case 0x1440ecu: goto label_1440ec;
        case 0x1440f0u: goto label_1440f0;
        case 0x1440f4u: goto label_1440f4;
        case 0x1440f8u: goto label_1440f8;
        case 0x1440fcu: goto label_1440fc;
        case 0x144100u: goto label_144100;
        case 0x144104u: goto label_144104;
        case 0x144108u: goto label_144108;
        case 0x14410cu: goto label_14410c;
        case 0x144110u: goto label_144110;
        case 0x144114u: goto label_144114;
        case 0x144118u: goto label_144118;
        case 0x14411cu: goto label_14411c;
        case 0x144120u: goto label_144120;
        case 0x144124u: goto label_144124;
        case 0x144128u: goto label_144128;
        case 0x14412cu: goto label_14412c;
        case 0x144130u: goto label_144130;
        case 0x144134u: goto label_144134;
        case 0x144138u: goto label_144138;
        case 0x14413cu: goto label_14413c;
        case 0x144140u: goto label_144140;
        case 0x144144u: goto label_144144;
        case 0x144148u: goto label_144148;
        case 0x14414cu: goto label_14414c;
        case 0x144150u: goto label_144150;
        case 0x144154u: goto label_144154;
        case 0x144158u: goto label_144158;
        case 0x14415cu: goto label_14415c;
        case 0x144160u: goto label_144160;
        case 0x144164u: goto label_144164;
        case 0x144168u: goto label_144168;
        case 0x14416cu: goto label_14416c;
        case 0x144170u: goto label_144170;
        case 0x144174u: goto label_144174;
        case 0x144178u: goto label_144178;
        case 0x14417cu: goto label_14417c;
        case 0x144180u: goto label_144180;
        case 0x144184u: goto label_144184;
        case 0x144188u: goto label_144188;
        case 0x14418cu: goto label_14418c;
        case 0x144190u: goto label_144190;
        case 0x144194u: goto label_144194;
        case 0x144198u: goto label_144198;
        case 0x14419cu: goto label_14419c;
        case 0x1441a0u: goto label_1441a0;
        case 0x1441a4u: goto label_1441a4;
        case 0x1441a8u: goto label_1441a8;
        case 0x1441acu: goto label_1441ac;
        case 0x1441b0u: goto label_1441b0;
        case 0x1441b4u: goto label_1441b4;
        case 0x1441b8u: goto label_1441b8;
        case 0x1441bcu: goto label_1441bc;
        case 0x1441c0u: goto label_1441c0;
        case 0x1441c4u: goto label_1441c4;
        case 0x1441c8u: goto label_1441c8;
        case 0x1441ccu: goto label_1441cc;
        case 0x1441d0u: goto label_1441d0;
        case 0x1441d4u: goto label_1441d4;
        case 0x1441d8u: goto label_1441d8;
        case 0x1441dcu: goto label_1441dc;
        case 0x1441e0u: goto label_1441e0;
        case 0x1441e4u: goto label_1441e4;
        case 0x1441e8u: goto label_1441e8;
        case 0x1441ecu: goto label_1441ec;
        case 0x1441f0u: goto label_1441f0;
        case 0x1441f4u: goto label_1441f4;
        case 0x1441f8u: goto label_1441f8;
        case 0x1441fcu: goto label_1441fc;
        case 0x144200u: goto label_144200;
        case 0x144204u: goto label_144204;
        case 0x144208u: goto label_144208;
        case 0x14420cu: goto label_14420c;
        case 0x144210u: goto label_144210;
        case 0x144214u: goto label_144214;
        case 0x144218u: goto label_144218;
        case 0x14421cu: goto label_14421c;
        case 0x144220u: goto label_144220;
        case 0x144224u: goto label_144224;
        case 0x144228u: goto label_144228;
        case 0x14422cu: goto label_14422c;
        case 0x144230u: goto label_144230;
        case 0x144234u: goto label_144234;
        case 0x144238u: goto label_144238;
        case 0x14423cu: goto label_14423c;
        case 0x144240u: goto label_144240;
        case 0x144244u: goto label_144244;
        case 0x144248u: goto label_144248;
        case 0x14424cu: goto label_14424c;
        case 0x144250u: goto label_144250;
        case 0x144254u: goto label_144254;
        case 0x144258u: goto label_144258;
        case 0x14425cu: goto label_14425c;
        case 0x144260u: goto label_144260;
        case 0x144264u: goto label_144264;
        case 0x144268u: goto label_144268;
        case 0x14426cu: goto label_14426c;
        case 0x144270u: goto label_144270;
        case 0x144274u: goto label_144274;
        case 0x144278u: goto label_144278;
        case 0x14427cu: goto label_14427c;
        case 0x144280u: goto label_144280;
        case 0x144284u: goto label_144284;
        case 0x144288u: goto label_144288;
        case 0x14428cu: goto label_14428c;
        case 0x144290u: goto label_144290;
        case 0x144294u: goto label_144294;
        case 0x144298u: goto label_144298;
        case 0x14429cu: goto label_14429c;
        case 0x1442a0u: goto label_1442a0;
        case 0x1442a4u: goto label_1442a4;
        case 0x1442a8u: goto label_1442a8;
        case 0x1442acu: goto label_1442ac;
        case 0x1442b0u: goto label_1442b0;
        case 0x1442b4u: goto label_1442b4;
        case 0x1442b8u: goto label_1442b8;
        case 0x1442bcu: goto label_1442bc;
        case 0x1442c0u: goto label_1442c0;
        case 0x1442c4u: goto label_1442c4;
        case 0x1442c8u: goto label_1442c8;
        case 0x1442ccu: goto label_1442cc;
        case 0x1442d0u: goto label_1442d0;
        case 0x1442d4u: goto label_1442d4;
        case 0x1442d8u: goto label_1442d8;
        case 0x1442dcu: goto label_1442dc;
        case 0x1442e0u: goto label_1442e0;
        case 0x1442e4u: goto label_1442e4;
        case 0x1442e8u: goto label_1442e8;
        case 0x1442ecu: goto label_1442ec;
        case 0x1442f0u: goto label_1442f0;
        case 0x1442f4u: goto label_1442f4;
        case 0x1442f8u: goto label_1442f8;
        case 0x1442fcu: goto label_1442fc;
        case 0x144300u: goto label_144300;
        case 0x144304u: goto label_144304;
        case 0x144308u: goto label_144308;
        case 0x14430cu: goto label_14430c;
        case 0x144310u: goto label_144310;
        case 0x144314u: goto label_144314;
        case 0x144318u: goto label_144318;
        case 0x14431cu: goto label_14431c;
        case 0x144320u: goto label_144320;
        case 0x144324u: goto label_144324;
        case 0x144328u: goto label_144328;
        case 0x14432cu: goto label_14432c;
        case 0x144330u: goto label_144330;
        case 0x144334u: goto label_144334;
        case 0x144338u: goto label_144338;
        case 0x14433cu: goto label_14433c;
        case 0x144340u: goto label_144340;
        case 0x144344u: goto label_144344;
        case 0x144348u: goto label_144348;
        case 0x14434cu: goto label_14434c;
        case 0x144350u: goto label_144350;
        case 0x144354u: goto label_144354;
        case 0x144358u: goto label_144358;
        case 0x14435cu: goto label_14435c;
        case 0x144360u: goto label_144360;
        case 0x144364u: goto label_144364;
        case 0x144368u: goto label_144368;
        case 0x14436cu: goto label_14436c;
        case 0x144370u: goto label_144370;
        case 0x144374u: goto label_144374;
        case 0x144378u: goto label_144378;
        case 0x14437cu: goto label_14437c;
        case 0x144380u: goto label_144380;
        case 0x144384u: goto label_144384;
        case 0x144388u: goto label_144388;
        case 0x14438cu: goto label_14438c;
        case 0x144390u: goto label_144390;
        case 0x144394u: goto label_144394;
        case 0x144398u: goto label_144398;
        case 0x14439cu: goto label_14439c;
        case 0x1443a0u: goto label_1443a0;
        case 0x1443a4u: goto label_1443a4;
        case 0x1443a8u: goto label_1443a8;
        case 0x1443acu: goto label_1443ac;
        case 0x1443b0u: goto label_1443b0;
        case 0x1443b4u: goto label_1443b4;
        case 0x1443b8u: goto label_1443b8;
        case 0x1443bcu: goto label_1443bc;
        case 0x1443c0u: goto label_1443c0;
        case 0x1443c4u: goto label_1443c4;
        case 0x1443c8u: goto label_1443c8;
        case 0x1443ccu: goto label_1443cc;
        case 0x1443d0u: goto label_1443d0;
        case 0x1443d4u: goto label_1443d4;
        case 0x1443d8u: goto label_1443d8;
        case 0x1443dcu: goto label_1443dc;
        case 0x1443e0u: goto label_1443e0;
        case 0x1443e4u: goto label_1443e4;
        case 0x1443e8u: goto label_1443e8;
        case 0x1443ecu: goto label_1443ec;
        case 0x1443f0u: goto label_1443f0;
        case 0x1443f4u: goto label_1443f4;
        case 0x1443f8u: goto label_1443f8;
        case 0x1443fcu: goto label_1443fc;
        case 0x144400u: goto label_144400;
        case 0x144404u: goto label_144404;
        case 0x144408u: goto label_144408;
        case 0x14440cu: goto label_14440c;
        case 0x144410u: goto label_144410;
        case 0x144414u: goto label_144414;
        case 0x144418u: goto label_144418;
        case 0x14441cu: goto label_14441c;
        case 0x144420u: goto label_144420;
        case 0x144424u: goto label_144424;
        case 0x144428u: goto label_144428;
        case 0x14442cu: goto label_14442c;
        case 0x144430u: goto label_144430;
        case 0x144434u: goto label_144434;
        case 0x144438u: goto label_144438;
        case 0x14443cu: goto label_14443c;
        case 0x144440u: goto label_144440;
        case 0x144444u: goto label_144444;
        case 0x144448u: goto label_144448;
        case 0x14444cu: goto label_14444c;
        case 0x144450u: goto label_144450;
        case 0x144454u: goto label_144454;
        case 0x144458u: goto label_144458;
        case 0x14445cu: goto label_14445c;
        case 0x144460u: goto label_144460;
        case 0x144464u: goto label_144464;
        case 0x144468u: goto label_144468;
        case 0x14446cu: goto label_14446c;
        case 0x144470u: goto label_144470;
        case 0x144474u: goto label_144474;
        case 0x144478u: goto label_144478;
        case 0x14447cu: goto label_14447c;
        case 0x144480u: goto label_144480;
        case 0x144484u: goto label_144484;
        case 0x144488u: goto label_144488;
        case 0x14448cu: goto label_14448c;
        case 0x144490u: goto label_144490;
        case 0x144494u: goto label_144494;
        case 0x144498u: goto label_144498;
        case 0x14449cu: goto label_14449c;
        case 0x1444a0u: goto label_1444a0;
        case 0x1444a4u: goto label_1444a4;
        case 0x1444a8u: goto label_1444a8;
        case 0x1444acu: goto label_1444ac;
        case 0x1444b0u: goto label_1444b0;
        case 0x1444b4u: goto label_1444b4;
        case 0x1444b8u: goto label_1444b8;
        case 0x1444bcu: goto label_1444bc;
        case 0x1444c0u: goto label_1444c0;
        case 0x1444c4u: goto label_1444c4;
        case 0x1444c8u: goto label_1444c8;
        case 0x1444ccu: goto label_1444cc;
        case 0x1444d0u: goto label_1444d0;
        case 0x1444d4u: goto label_1444d4;
        case 0x1444d8u: goto label_1444d8;
        case 0x1444dcu: goto label_1444dc;
        case 0x1444e0u: goto label_1444e0;
        case 0x1444e4u: goto label_1444e4;
        case 0x1444e8u: goto label_1444e8;
        case 0x1444ecu: goto label_1444ec;
        case 0x1444f0u: goto label_1444f0;
        case 0x1444f4u: goto label_1444f4;
        case 0x1444f8u: goto label_1444f8;
        case 0x1444fcu: goto label_1444fc;
        case 0x144500u: goto label_144500;
        case 0x144504u: goto label_144504;
        case 0x144508u: goto label_144508;
        case 0x14450cu: goto label_14450c;
        case 0x144510u: goto label_144510;
        case 0x144514u: goto label_144514;
        case 0x144518u: goto label_144518;
        case 0x14451cu: goto label_14451c;
        case 0x144520u: goto label_144520;
        case 0x144524u: goto label_144524;
        case 0x144528u: goto label_144528;
        case 0x14452cu: goto label_14452c;
        case 0x144530u: goto label_144530;
        case 0x144534u: goto label_144534;
        case 0x144538u: goto label_144538;
        case 0x14453cu: goto label_14453c;
        case 0x144540u: goto label_144540;
        case 0x144544u: goto label_144544;
        case 0x144548u: goto label_144548;
        case 0x14454cu: goto label_14454c;
        case 0x144550u: goto label_144550;
        case 0x144554u: goto label_144554;
        case 0x144558u: goto label_144558;
        case 0x14455cu: goto label_14455c;
        case 0x144560u: goto label_144560;
        case 0x144564u: goto label_144564;
        case 0x144568u: goto label_144568;
        case 0x14456cu: goto label_14456c;
        case 0x144570u: goto label_144570;
        case 0x144574u: goto label_144574;
        case 0x144578u: goto label_144578;
        case 0x14457cu: goto label_14457c;
        case 0x144580u: goto label_144580;
        case 0x144584u: goto label_144584;
        case 0x144588u: goto label_144588;
        case 0x14458cu: goto label_14458c;
        case 0x144590u: goto label_144590;
        case 0x144594u: goto label_144594;
        case 0x144598u: goto label_144598;
        case 0x14459cu: goto label_14459c;
        case 0x1445a0u: goto label_1445a0;
        case 0x1445a4u: goto label_1445a4;
        case 0x1445a8u: goto label_1445a8;
        case 0x1445acu: goto label_1445ac;
        case 0x1445b0u: goto label_1445b0;
        case 0x1445b4u: goto label_1445b4;
        case 0x1445b8u: goto label_1445b8;
        case 0x1445bcu: goto label_1445bc;
        case 0x1445c0u: goto label_1445c0;
        case 0x1445c4u: goto label_1445c4;
        case 0x1445c8u: goto label_1445c8;
        case 0x1445ccu: goto label_1445cc;
        case 0x1445d0u: goto label_1445d0;
        case 0x1445d4u: goto label_1445d4;
        case 0x1445d8u: goto label_1445d8;
        case 0x1445dcu: goto label_1445dc;
        case 0x1445e0u: goto label_1445e0;
        case 0x1445e4u: goto label_1445e4;
        case 0x1445e8u: goto label_1445e8;
        case 0x1445ecu: goto label_1445ec;
        case 0x1445f0u: goto label_1445f0;
        case 0x1445f4u: goto label_1445f4;
        case 0x1445f8u: goto label_1445f8;
        case 0x1445fcu: goto label_1445fc;
        case 0x144600u: goto label_144600;
        case 0x144604u: goto label_144604;
        case 0x144608u: goto label_144608;
        case 0x14460cu: goto label_14460c;
        case 0x144610u: goto label_144610;
        case 0x144614u: goto label_144614;
        case 0x144618u: goto label_144618;
        case 0x14461cu: goto label_14461c;
        case 0x144620u: goto label_144620;
        case 0x144624u: goto label_144624;
        case 0x144628u: goto label_144628;
        case 0x14462cu: goto label_14462c;
        case 0x144630u: goto label_144630;
        case 0x144634u: goto label_144634;
        case 0x144638u: goto label_144638;
        case 0x14463cu: goto label_14463c;
        case 0x144640u: goto label_144640;
        case 0x144644u: goto label_144644;
        case 0x144648u: goto label_144648;
        case 0x14464cu: goto label_14464c;
        case 0x144650u: goto label_144650;
        case 0x144654u: goto label_144654;
        case 0x144658u: goto label_144658;
        case 0x14465cu: goto label_14465c;
        case 0x144660u: goto label_144660;
        case 0x144664u: goto label_144664;
        case 0x144668u: goto label_144668;
        case 0x14466cu: goto label_14466c;
        case 0x144670u: goto label_144670;
        case 0x144674u: goto label_144674;
        case 0x144678u: goto label_144678;
        case 0x14467cu: goto label_14467c;
        case 0x144680u: goto label_144680;
        case 0x144684u: goto label_144684;
        case 0x144688u: goto label_144688;
        case 0x14468cu: goto label_14468c;
        case 0x144690u: goto label_144690;
        case 0x144694u: goto label_144694;
        case 0x144698u: goto label_144698;
        case 0x14469cu: goto label_14469c;
        case 0x1446a0u: goto label_1446a0;
        case 0x1446a4u: goto label_1446a4;
        case 0x1446a8u: goto label_1446a8;
        case 0x1446acu: goto label_1446ac;
        case 0x1446b0u: goto label_1446b0;
        case 0x1446b4u: goto label_1446b4;
        case 0x1446b8u: goto label_1446b8;
        case 0x1446bcu: goto label_1446bc;
        case 0x1446c0u: goto label_1446c0;
        case 0x1446c4u: goto label_1446c4;
        case 0x1446c8u: goto label_1446c8;
        case 0x1446ccu: goto label_1446cc;
        case 0x1446d0u: goto label_1446d0;
        case 0x1446d4u: goto label_1446d4;
        case 0x1446d8u: goto label_1446d8;
        case 0x1446dcu: goto label_1446dc;
        case 0x1446e0u: goto label_1446e0;
        case 0x1446e4u: goto label_1446e4;
        case 0x1446e8u: goto label_1446e8;
        case 0x1446ecu: goto label_1446ec;
        case 0x1446f0u: goto label_1446f0;
        case 0x1446f4u: goto label_1446f4;
        case 0x1446f8u: goto label_1446f8;
        case 0x1446fcu: goto label_1446fc;
        case 0x144700u: goto label_144700;
        case 0x144704u: goto label_144704;
        case 0x144708u: goto label_144708;
        case 0x14470cu: goto label_14470c;
        case 0x144710u: goto label_144710;
        case 0x144714u: goto label_144714;
        case 0x144718u: goto label_144718;
        case 0x14471cu: goto label_14471c;
        case 0x144720u: goto label_144720;
        case 0x144724u: goto label_144724;
        case 0x144728u: goto label_144728;
        case 0x14472cu: goto label_14472c;
        case 0x144730u: goto label_144730;
        case 0x144734u: goto label_144734;
        case 0x144738u: goto label_144738;
        case 0x14473cu: goto label_14473c;
        case 0x144740u: goto label_144740;
        case 0x144744u: goto label_144744;
        case 0x144748u: goto label_144748;
        case 0x14474cu: goto label_14474c;
        case 0x144750u: goto label_144750;
        case 0x144754u: goto label_144754;
        case 0x144758u: goto label_144758;
        case 0x14475cu: goto label_14475c;
        case 0x144760u: goto label_144760;
        case 0x144764u: goto label_144764;
        case 0x144768u: goto label_144768;
        case 0x14476cu: goto label_14476c;
        case 0x144770u: goto label_144770;
        case 0x144774u: goto label_144774;
        case 0x144778u: goto label_144778;
        case 0x14477cu: goto label_14477c;
        case 0x144780u: goto label_144780;
        case 0x144784u: goto label_144784;
        case 0x144788u: goto label_144788;
        case 0x14478cu: goto label_14478c;
        case 0x144790u: goto label_144790;
        case 0x144794u: goto label_144794;
        case 0x144798u: goto label_144798;
        case 0x14479cu: goto label_14479c;
        case 0x1447a0u: goto label_1447a0;
        case 0x1447a4u: goto label_1447a4;
        case 0x1447a8u: goto label_1447a8;
        case 0x1447acu: goto label_1447ac;
        case 0x1447b0u: goto label_1447b0;
        case 0x1447b4u: goto label_1447b4;
        case 0x1447b8u: goto label_1447b8;
        case 0x1447bcu: goto label_1447bc;
        case 0x1447c0u: goto label_1447c0;
        case 0x1447c4u: goto label_1447c4;
        case 0x1447c8u: goto label_1447c8;
        case 0x1447ccu: goto label_1447cc;
        case 0x1447d0u: goto label_1447d0;
        case 0x1447d4u: goto label_1447d4;
        case 0x1447d8u: goto label_1447d8;
        case 0x1447dcu: goto label_1447dc;
        case 0x1447e0u: goto label_1447e0;
        case 0x1447e4u: goto label_1447e4;
        case 0x1447e8u: goto label_1447e8;
        case 0x1447ecu: goto label_1447ec;
        case 0x1447f0u: goto label_1447f0;
        case 0x1447f4u: goto label_1447f4;
        case 0x1447f8u: goto label_1447f8;
        case 0x1447fcu: goto label_1447fc;
        case 0x144800u: goto label_144800;
        case 0x144804u: goto label_144804;
        case 0x144808u: goto label_144808;
        case 0x14480cu: goto label_14480c;
        case 0x144810u: goto label_144810;
        case 0x144814u: goto label_144814;
        case 0x144818u: goto label_144818;
        case 0x14481cu: goto label_14481c;
        case 0x144820u: goto label_144820;
        case 0x144824u: goto label_144824;
        case 0x144828u: goto label_144828;
        case 0x14482cu: goto label_14482c;
        case 0x144830u: goto label_144830;
        case 0x144834u: goto label_144834;
        case 0x144838u: goto label_144838;
        case 0x14483cu: goto label_14483c;
        case 0x144840u: goto label_144840;
        case 0x144844u: goto label_144844;
        case 0x144848u: goto label_144848;
        case 0x14484cu: goto label_14484c;
        case 0x144850u: goto label_144850;
        case 0x144854u: goto label_144854;
        case 0x144858u: goto label_144858;
        case 0x14485cu: goto label_14485c;
        case 0x144860u: goto label_144860;
        case 0x144864u: goto label_144864;
        case 0x144868u: goto label_144868;
        case 0x14486cu: goto label_14486c;
        case 0x144870u: goto label_144870;
        case 0x144874u: goto label_144874;
        case 0x144878u: goto label_144878;
        case 0x14487cu: goto label_14487c;
        case 0x144880u: goto label_144880;
        case 0x144884u: goto label_144884;
        case 0x144888u: goto label_144888;
        case 0x14488cu: goto label_14488c;
        case 0x144890u: goto label_144890;
        case 0x144894u: goto label_144894;
        case 0x144898u: goto label_144898;
        case 0x14489cu: goto label_14489c;
        case 0x1448a0u: goto label_1448a0;
        case 0x1448a4u: goto label_1448a4;
        case 0x1448a8u: goto label_1448a8;
        case 0x1448acu: goto label_1448ac;
        case 0x1448b0u: goto label_1448b0;
        case 0x1448b4u: goto label_1448b4;
        case 0x1448b8u: goto label_1448b8;
        case 0x1448bcu: goto label_1448bc;
        case 0x1448c0u: goto label_1448c0;
        case 0x1448c4u: goto label_1448c4;
        case 0x1448c8u: goto label_1448c8;
        case 0x1448ccu: goto label_1448cc;
        case 0x1448d0u: goto label_1448d0;
        case 0x1448d4u: goto label_1448d4;
        case 0x1448d8u: goto label_1448d8;
        case 0x1448dcu: goto label_1448dc;
        case 0x1448e0u: goto label_1448e0;
        case 0x1448e4u: goto label_1448e4;
        case 0x1448e8u: goto label_1448e8;
        case 0x1448ecu: goto label_1448ec;
        case 0x1448f0u: goto label_1448f0;
        case 0x1448f4u: goto label_1448f4;
        case 0x1448f8u: goto label_1448f8;
        case 0x1448fcu: goto label_1448fc;
        case 0x144900u: goto label_144900;
        case 0x144904u: goto label_144904;
        case 0x144908u: goto label_144908;
        case 0x14490cu: goto label_14490c;
        case 0x144910u: goto label_144910;
        case 0x144914u: goto label_144914;
        case 0x144918u: goto label_144918;
        case 0x14491cu: goto label_14491c;
        case 0x144920u: goto label_144920;
        case 0x144924u: goto label_144924;
        case 0x144928u: goto label_144928;
        case 0x14492cu: goto label_14492c;
        case 0x144930u: goto label_144930;
        case 0x144934u: goto label_144934;
        case 0x144938u: goto label_144938;
        case 0x14493cu: goto label_14493c;
        case 0x144940u: goto label_144940;
        case 0x144944u: goto label_144944;
        case 0x144948u: goto label_144948;
        case 0x14494cu: goto label_14494c;
        case 0x144950u: goto label_144950;
        case 0x144954u: goto label_144954;
        case 0x144958u: goto label_144958;
        case 0x14495cu: goto label_14495c;
        case 0x144960u: goto label_144960;
        case 0x144964u: goto label_144964;
        case 0x144968u: goto label_144968;
        case 0x14496cu: goto label_14496c;
        case 0x144970u: goto label_144970;
        case 0x144974u: goto label_144974;
        case 0x144978u: goto label_144978;
        case 0x14497cu: goto label_14497c;
        case 0x144980u: goto label_144980;
        case 0x144984u: goto label_144984;
        case 0x144988u: goto label_144988;
        case 0x14498cu: goto label_14498c;
        case 0x144990u: goto label_144990;
        case 0x144994u: goto label_144994;
        case 0x144998u: goto label_144998;
        case 0x14499cu: goto label_14499c;
        case 0x1449a0u: goto label_1449a0;
        case 0x1449a4u: goto label_1449a4;
        case 0x1449a8u: goto label_1449a8;
        case 0x1449acu: goto label_1449ac;
        case 0x1449b0u: goto label_1449b0;
        case 0x1449b4u: goto label_1449b4;
        case 0x1449b8u: goto label_1449b8;
        case 0x1449bcu: goto label_1449bc;
        case 0x1449c0u: goto label_1449c0;
        case 0x1449c4u: goto label_1449c4;
        case 0x1449c8u: goto label_1449c8;
        case 0x1449ccu: goto label_1449cc;
        case 0x1449d0u: goto label_1449d0;
        case 0x1449d4u: goto label_1449d4;
        case 0x1449d8u: goto label_1449d8;
        case 0x1449dcu: goto label_1449dc;
        case 0x1449e0u: goto label_1449e0;
        case 0x1449e4u: goto label_1449e4;
        case 0x1449e8u: goto label_1449e8;
        case 0x1449ecu: goto label_1449ec;
        case 0x1449f0u: goto label_1449f0;
        case 0x1449f4u: goto label_1449f4;
        case 0x1449f8u: goto label_1449f8;
        case 0x1449fcu: goto label_1449fc;
        case 0x144a00u: goto label_144a00;
        case 0x144a04u: goto label_144a04;
        case 0x144a08u: goto label_144a08;
        case 0x144a0cu: goto label_144a0c;
        case 0x144a10u: goto label_144a10;
        case 0x144a14u: goto label_144a14;
        case 0x144a18u: goto label_144a18;
        case 0x144a1cu: goto label_144a1c;
        case 0x144a20u: goto label_144a20;
        case 0x144a24u: goto label_144a24;
        case 0x144a28u: goto label_144a28;
        case 0x144a2cu: goto label_144a2c;
        case 0x144a30u: goto label_144a30;
        case 0x144a34u: goto label_144a34;
        case 0x144a38u: goto label_144a38;
        case 0x144a3cu: goto label_144a3c;
        case 0x144a40u: goto label_144a40;
        case 0x144a44u: goto label_144a44;
        case 0x144a48u: goto label_144a48;
        case 0x144a4cu: goto label_144a4c;
        case 0x144a50u: goto label_144a50;
        case 0x144a54u: goto label_144a54;
        case 0x144a58u: goto label_144a58;
        case 0x144a5cu: goto label_144a5c;
        case 0x144a60u: goto label_144a60;
        case 0x144a64u: goto label_144a64;
        case 0x144a68u: goto label_144a68;
        case 0x144a6cu: goto label_144a6c;
        case 0x144a70u: goto label_144a70;
        case 0x144a74u: goto label_144a74;
        case 0x144a78u: goto label_144a78;
        case 0x144a7cu: goto label_144a7c;
        case 0x144a80u: goto label_144a80;
        case 0x144a84u: goto label_144a84;
        case 0x144a88u: goto label_144a88;
        case 0x144a8cu: goto label_144a8c;
        case 0x144a90u: goto label_144a90;
        case 0x144a94u: goto label_144a94;
        case 0x144a98u: goto label_144a98;
        case 0x144a9cu: goto label_144a9c;
        case 0x144aa0u: goto label_144aa0;
        case 0x144aa4u: goto label_144aa4;
        case 0x144aa8u: goto label_144aa8;
        case 0x144aacu: goto label_144aac;
        case 0x144ab0u: goto label_144ab0;
        case 0x144ab4u: goto label_144ab4;
        case 0x144ab8u: goto label_144ab8;
        case 0x144abcu: goto label_144abc;
        case 0x144ac0u: goto label_144ac0;
        case 0x144ac4u: goto label_144ac4;
        case 0x144ac8u: goto label_144ac8;
        case 0x144accu: goto label_144acc;
        case 0x144ad0u: goto label_144ad0;
        case 0x144ad4u: goto label_144ad4;
        case 0x144ad8u: goto label_144ad8;
        case 0x144adcu: goto label_144adc;
        case 0x144ae0u: goto label_144ae0;
        case 0x144ae4u: goto label_144ae4;
        case 0x144ae8u: goto label_144ae8;
        case 0x144aecu: goto label_144aec;
        case 0x144af0u: goto label_144af0;
        case 0x144af4u: goto label_144af4;
        case 0x144af8u: goto label_144af8;
        case 0x144afcu: goto label_144afc;
        case 0x144b00u: goto label_144b00;
        case 0x144b04u: goto label_144b04;
        case 0x144b08u: goto label_144b08;
        case 0x144b0cu: goto label_144b0c;
        case 0x144b10u: goto label_144b10;
        case 0x144b14u: goto label_144b14;
        case 0x144b18u: goto label_144b18;
        case 0x144b1cu: goto label_144b1c;
        case 0x144b20u: goto label_144b20;
        case 0x144b24u: goto label_144b24;
        case 0x144b28u: goto label_144b28;
        case 0x144b2cu: goto label_144b2c;
        case 0x144b30u: goto label_144b30;
        case 0x144b34u: goto label_144b34;
        case 0x144b38u: goto label_144b38;
        case 0x144b3cu: goto label_144b3c;
        case 0x144b40u: goto label_144b40;
        case 0x144b44u: goto label_144b44;
        case 0x144b48u: goto label_144b48;
        case 0x144b4cu: goto label_144b4c;
        case 0x144b50u: goto label_144b50;
        case 0x144b54u: goto label_144b54;
        case 0x144b58u: goto label_144b58;
        case 0x144b5cu: goto label_144b5c;
        case 0x144b60u: goto label_144b60;
        case 0x144b64u: goto label_144b64;
        case 0x144b68u: goto label_144b68;
        case 0x144b6cu: goto label_144b6c;
        case 0x144b70u: goto label_144b70;
        case 0x144b74u: goto label_144b74;
        case 0x144b78u: goto label_144b78;
        case 0x144b7cu: goto label_144b7c;
        case 0x144b80u: goto label_144b80;
        case 0x144b84u: goto label_144b84;
        case 0x144b88u: goto label_144b88;
        case 0x144b8cu: goto label_144b8c;
        case 0x144b90u: goto label_144b90;
        case 0x144b94u: goto label_144b94;
        case 0x144b98u: goto label_144b98;
        case 0x144b9cu: goto label_144b9c;
        case 0x144ba0u: goto label_144ba0;
        case 0x144ba4u: goto label_144ba4;
        case 0x144ba8u: goto label_144ba8;
        case 0x144bacu: goto label_144bac;
        case 0x144bb0u: goto label_144bb0;
        case 0x144bb4u: goto label_144bb4;
        case 0x144bb8u: goto label_144bb8;
        case 0x144bbcu: goto label_144bbc;
        case 0x144bc0u: goto label_144bc0;
        case 0x144bc4u: goto label_144bc4;
        case 0x144bc8u: goto label_144bc8;
        case 0x144bccu: goto label_144bcc;
        case 0x144bd0u: goto label_144bd0;
        case 0x144bd4u: goto label_144bd4;
        case 0x144bd8u: goto label_144bd8;
        case 0x144bdcu: goto label_144bdc;
        case 0x144be0u: goto label_144be0;
        case 0x144be4u: goto label_144be4;
        case 0x144be8u: goto label_144be8;
        case 0x144becu: goto label_144bec;
        case 0x144bf0u: goto label_144bf0;
        case 0x144bf4u: goto label_144bf4;
        case 0x144bf8u: goto label_144bf8;
        case 0x144bfcu: goto label_144bfc;
        case 0x144c00u: goto label_144c00;
        case 0x144c04u: goto label_144c04;
        case 0x144c08u: goto label_144c08;
        case 0x144c0cu: goto label_144c0c;
        case 0x144c10u: goto label_144c10;
        case 0x144c14u: goto label_144c14;
        case 0x144c18u: goto label_144c18;
        case 0x144c1cu: goto label_144c1c;
        case 0x144c20u: goto label_144c20;
        case 0x144c24u: goto label_144c24;
        case 0x144c28u: goto label_144c28;
        case 0x144c2cu: goto label_144c2c;
        case 0x144c30u: goto label_144c30;
        case 0x144c34u: goto label_144c34;
        case 0x144c38u: goto label_144c38;
        case 0x144c3cu: goto label_144c3c;
        case 0x144c40u: goto label_144c40;
        case 0x144c44u: goto label_144c44;
        case 0x144c48u: goto label_144c48;
        case 0x144c4cu: goto label_144c4c;
        case 0x144c50u: goto label_144c50;
        case 0x144c54u: goto label_144c54;
        case 0x144c58u: goto label_144c58;
        case 0x144c5cu: goto label_144c5c;
        case 0x144c60u: goto label_144c60;
        case 0x144c64u: goto label_144c64;
        case 0x144c68u: goto label_144c68;
        case 0x144c6cu: goto label_144c6c;
        case 0x144c70u: goto label_144c70;
        case 0x144c74u: goto label_144c74;
        case 0x144c78u: goto label_144c78;
        case 0x144c7cu: goto label_144c7c;
        case 0x144c80u: goto label_144c80;
        case 0x144c84u: goto label_144c84;
        case 0x144c88u: goto label_144c88;
        case 0x144c8cu: goto label_144c8c;
        case 0x144c90u: goto label_144c90;
        case 0x144c94u: goto label_144c94;
        case 0x144c98u: goto label_144c98;
        case 0x144c9cu: goto label_144c9c;
        case 0x144ca0u: goto label_144ca0;
        case 0x144ca4u: goto label_144ca4;
        case 0x144ca8u: goto label_144ca8;
        case 0x144cacu: goto label_144cac;
        case 0x144cb0u: goto label_144cb0;
        case 0x144cb4u: goto label_144cb4;
        case 0x144cb8u: goto label_144cb8;
        case 0x144cbcu: goto label_144cbc;
        case 0x144cc0u: goto label_144cc0;
        case 0x144cc4u: goto label_144cc4;
        case 0x144cc8u: goto label_144cc8;
        case 0x144cccu: goto label_144ccc;
        case 0x144cd0u: goto label_144cd0;
        case 0x144cd4u: goto label_144cd4;
        case 0x144cd8u: goto label_144cd8;
        case 0x144cdcu: goto label_144cdc;
        case 0x144ce0u: goto label_144ce0;
        case 0x144ce4u: goto label_144ce4;
        case 0x144ce8u: goto label_144ce8;
        case 0x144cecu: goto label_144cec;
        case 0x144cf0u: goto label_144cf0;
        case 0x144cf4u: goto label_144cf4;
        case 0x144cf8u: goto label_144cf8;
        case 0x144cfcu: goto label_144cfc;
        case 0x144d00u: goto label_144d00;
        case 0x144d04u: goto label_144d04;
        case 0x144d08u: goto label_144d08;
        case 0x144d0cu: goto label_144d0c;
        case 0x144d10u: goto label_144d10;
        case 0x144d14u: goto label_144d14;
        case 0x144d18u: goto label_144d18;
        case 0x144d1cu: goto label_144d1c;
        case 0x144d20u: goto label_144d20;
        case 0x144d24u: goto label_144d24;
        case 0x144d28u: goto label_144d28;
        case 0x144d2cu: goto label_144d2c;
        case 0x144d30u: goto label_144d30;
        case 0x144d34u: goto label_144d34;
        case 0x144d38u: goto label_144d38;
        case 0x144d3cu: goto label_144d3c;
        case 0x144d40u: goto label_144d40;
        case 0x144d44u: goto label_144d44;
        case 0x144d48u: goto label_144d48;
        case 0x144d4cu: goto label_144d4c;
        case 0x144d50u: goto label_144d50;
        case 0x144d54u: goto label_144d54;
        case 0x144d58u: goto label_144d58;
        case 0x144d5cu: goto label_144d5c;
        case 0x144d60u: goto label_144d60;
        case 0x144d64u: goto label_144d64;
        case 0x144d68u: goto label_144d68;
        case 0x144d6cu: goto label_144d6c;
        case 0x144d70u: goto label_144d70;
        case 0x144d74u: goto label_144d74;
        case 0x144d78u: goto label_144d78;
        case 0x144d7cu: goto label_144d7c;
        case 0x144d80u: goto label_144d80;
        case 0x144d84u: goto label_144d84;
        case 0x144d88u: goto label_144d88;
        case 0x144d8cu: goto label_144d8c;
        case 0x144d90u: goto label_144d90;
        case 0x144d94u: goto label_144d94;
        case 0x144d98u: goto label_144d98;
        case 0x144d9cu: goto label_144d9c;
        case 0x144da0u: goto label_144da0;
        case 0x144da4u: goto label_144da4;
        case 0x144da8u: goto label_144da8;
        case 0x144dacu: goto label_144dac;
        case 0x144db0u: goto label_144db0;
        case 0x144db4u: goto label_144db4;
        case 0x144db8u: goto label_144db8;
        case 0x144dbcu: goto label_144dbc;
        case 0x144dc0u: goto label_144dc0;
        case 0x144dc4u: goto label_144dc4;
        case 0x144dc8u: goto label_144dc8;
        case 0x144dccu: goto label_144dcc;
        case 0x144dd0u: goto label_144dd0;
        case 0x144dd4u: goto label_144dd4;
        case 0x144dd8u: goto label_144dd8;
        case 0x144ddcu: goto label_144ddc;
        case 0x144de0u: goto label_144de0;
        case 0x144de4u: goto label_144de4;
        case 0x144de8u: goto label_144de8;
        case 0x144decu: goto label_144dec;
        case 0x144df0u: goto label_144df0;
        case 0x144df4u: goto label_144df4;
        case 0x144df8u: goto label_144df8;
        case 0x144dfcu: goto label_144dfc;
        case 0x144e00u: goto label_144e00;
        case 0x144e04u: goto label_144e04;
        case 0x144e08u: goto label_144e08;
        case 0x144e0cu: goto label_144e0c;
        case 0x144e10u: goto label_144e10;
        case 0x144e14u: goto label_144e14;
        case 0x144e18u: goto label_144e18;
        case 0x144e1cu: goto label_144e1c;
        case 0x144e20u: goto label_144e20;
        case 0x144e24u: goto label_144e24;
        case 0x144e28u: goto label_144e28;
        case 0x144e2cu: goto label_144e2c;
        case 0x144e30u: goto label_144e30;
        case 0x144e34u: goto label_144e34;
        case 0x144e38u: goto label_144e38;
        case 0x144e3cu: goto label_144e3c;
        case 0x144e40u: goto label_144e40;
        case 0x144e44u: goto label_144e44;
        case 0x144e48u: goto label_144e48;
        case 0x144e4cu: goto label_144e4c;
        case 0x144e50u: goto label_144e50;
        case 0x144e54u: goto label_144e54;
        case 0x144e58u: goto label_144e58;
        case 0x144e5cu: goto label_144e5c;
        case 0x144e60u: goto label_144e60;
        case 0x144e64u: goto label_144e64;
        case 0x144e68u: goto label_144e68;
        case 0x144e6cu: goto label_144e6c;
        case 0x144e70u: goto label_144e70;
        case 0x144e74u: goto label_144e74;
        case 0x144e78u: goto label_144e78;
        case 0x144e7cu: goto label_144e7c;
        case 0x144e80u: goto label_144e80;
        case 0x144e84u: goto label_144e84;
        case 0x144e88u: goto label_144e88;
        case 0x144e8cu: goto label_144e8c;
        case 0x144e90u: goto label_144e90;
        case 0x144e94u: goto label_144e94;
        case 0x144e98u: goto label_144e98;
        case 0x144e9cu: goto label_144e9c;
        case 0x144ea0u: goto label_144ea0;
        case 0x144ea4u: goto label_144ea4;
        case 0x144ea8u: goto label_144ea8;
        case 0x144eacu: goto label_144eac;
        case 0x144eb0u: goto label_144eb0;
        case 0x144eb4u: goto label_144eb4;
        case 0x144eb8u: goto label_144eb8;
        case 0x144ebcu: goto label_144ebc;
        case 0x144ec0u: goto label_144ec0;
        case 0x144ec4u: goto label_144ec4;
        case 0x144ec8u: goto label_144ec8;
        case 0x144eccu: goto label_144ecc;
        case 0x144ed0u: goto label_144ed0;
        case 0x144ed4u: goto label_144ed4;
        case 0x144ed8u: goto label_144ed8;
        case 0x144edcu: goto label_144edc;
        case 0x144ee0u: goto label_144ee0;
        case 0x144ee4u: goto label_144ee4;
        case 0x144ee8u: goto label_144ee8;
        case 0x144eecu: goto label_144eec;
        case 0x144ef0u: goto label_144ef0;
        case 0x144ef4u: goto label_144ef4;
        case 0x144ef8u: goto label_144ef8;
        case 0x144efcu: goto label_144efc;
        case 0x144f00u: goto label_144f00;
        case 0x144f04u: goto label_144f04;
        case 0x144f08u: goto label_144f08;
        case 0x144f0cu: goto label_144f0c;
        case 0x144f10u: goto label_144f10;
        case 0x144f14u: goto label_144f14;
        case 0x144f18u: goto label_144f18;
        case 0x144f1cu: goto label_144f1c;
        case 0x144f20u: goto label_144f20;
        case 0x144f24u: goto label_144f24;
        case 0x144f28u: goto label_144f28;
        case 0x144f2cu: goto label_144f2c;
        case 0x144f30u: goto label_144f30;
        case 0x144f34u: goto label_144f34;
        case 0x144f38u: goto label_144f38;
        case 0x144f3cu: goto label_144f3c;
        case 0x144f40u: goto label_144f40;
        case 0x144f44u: goto label_144f44;
        case 0x144f48u: goto label_144f48;
        case 0x144f4cu: goto label_144f4c;
        case 0x144f50u: goto label_144f50;
        case 0x144f54u: goto label_144f54;
        case 0x144f58u: goto label_144f58;
        case 0x144f5cu: goto label_144f5c;
        case 0x144f60u: goto label_144f60;
        case 0x144f64u: goto label_144f64;
        case 0x144f68u: goto label_144f68;
        case 0x144f6cu: goto label_144f6c;
        case 0x144f70u: goto label_144f70;
        case 0x144f74u: goto label_144f74;
        case 0x144f78u: goto label_144f78;
        case 0x144f7cu: goto label_144f7c;
        case 0x144f80u: goto label_144f80;
        case 0x144f84u: goto label_144f84;
        case 0x144f88u: goto label_144f88;
        case 0x144f8cu: goto label_144f8c;
        case 0x144f90u: goto label_144f90;
        case 0x144f94u: goto label_144f94;
        case 0x144f98u: goto label_144f98;
        case 0x144f9cu: goto label_144f9c;
        case 0x144fa0u: goto label_144fa0;
        case 0x144fa4u: goto label_144fa4;
        case 0x144fa8u: goto label_144fa8;
        case 0x144facu: goto label_144fac;
        case 0x144fb0u: goto label_144fb0;
        case 0x144fb4u: goto label_144fb4;
        case 0x144fb8u: goto label_144fb8;
        case 0x144fbcu: goto label_144fbc;
        default: break;
    }

    ctx->pc = 0x143fb0u;

label_143fb0:
    // 0x143fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_143fb4:
    // 0x143fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_143fb8:
    // 0x143fb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x143fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_143fbc:
    // 0x143fbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143fc0:
    // 0x143fc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x143fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_143fc4:
    // 0x143fc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143fc8:
    // 0x143fc8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x143fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_143fcc:
    // 0x143fcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143fd0:
    // 0x143fd0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x143fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_143fd4:
    // 0x143fd4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x143fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_143fd8:
    // 0x143fd8: 0x24a58148  addiu       $a1, $a1, -0x7EB8
    ctx->pc = 0x143fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934856));
label_143fdc:
    // 0x143fdc: 0xc0bc5c6  jal         func_2F1718
label_143fe0:
    if (ctx->pc == 0x143FE0u) {
        ctx->pc = 0x143FE4u;
        goto label_143fe4;
    }
    ctx->pc = 0x143FDCu;
    SET_GPR_U32(ctx, 31, 0x143FE4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x143FDCu, 0x143FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FE4u;
label_143fe4:
    // 0x143fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143fe8:
    // 0x143fe8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x143fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_143fec:
    // 0x143fec: 0x3e00008  jr          $ra
label_143ff0:
    if (ctx->pc == 0x143FF0u) {
        ctx->pc = 0x143FF4u;
        goto label_143ff4;
    }
    ctx->pc = 0x143FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143FF4u;
label_143ff4:
    // 0x143ff4: 0x0  nop
    ctx->pc = 0x143ff4u;
    // NOP
label_143ff8:
    // 0x143ff8: 0x0  nop
    ctx->pc = 0x143ff8u;
    // NOP
label_143ffc:
    // 0x143ffc: 0x0  nop
    ctx->pc = 0x143ffcu;
    // NOP
label_144000:
    // 0x144000: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x144000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_144004:
    // 0x144004: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x144004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_144008:
    // 0x144008: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x144008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_14400c:
    // 0x14400c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_144010:
    // 0x144010: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x144010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_144014:
    // 0x144014: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x144014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_144018:
    // 0x144018: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x144018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_14401c:
    // 0x14401c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_144020:
    // 0x144020: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x144020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_144024:
    // 0x144024: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x144024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_144028:
    // 0x144028: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x144028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14402c:
    // 0x14402c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14402cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_144030:
    // 0x144030: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x144030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
label_144034:
    // 0x144034: 0xafa50270  sw          $a1, 0x270($sp)
    ctx->pc = 0x144034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 5));
label_144038:
    // 0x144038: 0xafa60280  sw          $a2, 0x280($sp)
    ctx->pc = 0x144038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 6));
label_14403c:
    // 0x14403c: 0xafa70290  sw          $a3, 0x290($sp)
    ctx->pc = 0x14403cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 7));
label_144040:
    // 0x144040: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x144040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_144044:
    // 0x144044: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x144044u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_144048:
    // 0x144048: 0x102003ce  beqz        $at, . + 4 + (0x3CE << 2)
label_14404c:
    if (ctx->pc == 0x14404Cu) {
        ctx->pc = 0x144050u;
        goto label_144050;
    }
    ctx->pc = 0x144048u;
    {
        const bool branch_taken_0x144048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144048) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144050u;
label_144050:
    // 0x144050: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x144050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_144054:
    // 0x144054: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x144054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
label_144058:
    // 0x144058: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x144058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14405c:
    // 0x14405c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x14405cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144060:
    // 0x144060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x144060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_144064:
    // 0x144064: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x144064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_144068:
    // 0x144068: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x144068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_14406c:
    // 0x14406c: 0x400008  jr          $v0
label_144070:
    if (ctx->pc == 0x144070u) {
        ctx->pc = 0x144074u;
        goto label_144074;
    }
    ctx->pc = 0x14406Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144074u: goto label_144074;
            case 0x144088u: goto label_144088;
            case 0x1440ECu: goto label_1440ec;
            case 0x144134u: goto label_144134;
            case 0x144274u: goto label_144274;
            case 0x144584u: goto label_144584;
            case 0x144840u: goto label_144840;
            case 0x144B44u: goto label_144b44;
            case 0x144F68u: goto label_144f68;
            case 0x144F84u: goto label_144f84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14406Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x144074u;
label_144074:
    // 0x144074: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x144074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_144078:
    // 0x144078: 0xc051850  jal         func_146140
label_14407c:
    if (ctx->pc == 0x14407Cu) {
        ctx->pc = 0x144080u;
        goto label_144080;
    }
    ctx->pc = 0x144078u;
    SET_GPR_U32(ctx, 31, 0x144080u);
    ctx->pc = 0x146140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146140u, 0x144078u, 0x144080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144080u;
label_144080:
    // 0x144080: 0x100003c0  b           . + 4 + (0x3C0 << 2)
label_144084:
    if (ctx->pc == 0x144084u) {
        ctx->pc = 0x144088u;
        goto label_144088;
    }
    ctx->pc = 0x144080u;
    {
        const bool branch_taken_0x144080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144080) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144088u;
label_144088:
    // 0x144088: 0xc05548c  jal         func_155230
label_14408c:
    if (ctx->pc == 0x14408Cu) {
        ctx->pc = 0x144090u;
        goto label_144090;
    }
    ctx->pc = 0x144088u;
    SET_GPR_U32(ctx, 31, 0x144090u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x144088u, 0x144090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144090u;
label_144090:
    // 0x144090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144094:
    // 0x144094: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x144094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_144098:
    // 0x144098: 0xc0553d4  jal         func_154F50
label_14409c:
    if (ctx->pc == 0x14409Cu) {
        ctx->pc = 0x1440A0u;
        goto label_1440a0;
    }
    ctx->pc = 0x144098u;
    SET_GPR_U32(ctx, 31, 0x1440A0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x144098u, 0x1440A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440A0u;
label_1440a0:
    // 0x1440a0: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x1440a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_1440a4:
    // 0x1440a4: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x1440a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1440a8:
    // 0x1440a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1440ac:
    if (ctx->pc == 0x1440ACu) {
        ctx->pc = 0x1440B0u;
        goto label_1440b0;
    }
    ctx->pc = 0x1440A8u;
    {
        const bool branch_taken_0x1440a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1440a8) {
            ctx->pc = 0x1440C0u;
            goto label_1440c0;
        }
    }
    ctx->pc = 0x1440B0u;
label_1440b0:
    // 0x1440b0: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x1440b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_1440b4:
    // 0x1440b4: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x1440b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_1440b8:
    // 0x1440b8: 0xc05a2f0  jal         func_168BC0
label_1440bc:
    if (ctx->pc == 0x1440BCu) {
        ctx->pc = 0x1440C0u;
        goto label_1440c0;
    }
    ctx->pc = 0x1440B8u;
    SET_GPR_U32(ctx, 31, 0x1440C0u);
    ctx->pc = 0x168BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168BC0u, 0x1440B8u, 0x1440C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440C0u;
label_1440c0:
    // 0x1440c0: 0x8fa60258  lw          $a2, 0x258($sp)
    ctx->pc = 0x1440c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_1440c4:
    // 0x1440c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1440c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1440c8:
    // 0x1440c8: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x1440c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_1440cc:
    // 0x1440cc: 0xc05a2c0  jal         func_168B00
label_1440d0:
    if (ctx->pc == 0x1440D0u) {
        ctx->pc = 0x1440D4u;
        goto label_1440d4;
    }
    ctx->pc = 0x1440CCu;
    SET_GPR_U32(ctx, 31, 0x1440D4u);
    ctx->pc = 0x168B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B00u, 0x1440CCu, 0x1440D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440D4u;
label_1440d4:
    // 0x1440d4: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x1440d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_1440d8:
    // 0x1440d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1440d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1440dc:
    // 0x1440dc: 0xc055ad0  jal         func_156B40
label_1440e0:
    if (ctx->pc == 0x1440E0u) {
        ctx->pc = 0x1440E4u;
        goto label_1440e4;
    }
    ctx->pc = 0x1440DCu;
    SET_GPR_U32(ctx, 31, 0x1440E4u);
    ctx->pc = 0x156B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156B40u, 0x1440DCu, 0x1440E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1440E4u;
label_1440e4:
    // 0x1440e4: 0x100003a7  b           . + 4 + (0x3A7 << 2)
label_1440e8:
    if (ctx->pc == 0x1440E8u) {
        ctx->pc = 0x1440ECu;
        goto label_1440ec;
    }
    ctx->pc = 0x1440E4u;
    {
        const bool branch_taken_0x1440e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1440e4) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x1440ECu;
label_1440ec:
    // 0x1440ec: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x1440ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_1440f0:
    // 0x1440f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1440f4:
    if (ctx->pc == 0x1440F4u) {
        ctx->pc = 0x1440F8u;
        goto label_1440f8;
    }
    ctx->pc = 0x1440F0u;
    {
        const bool branch_taken_0x1440f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1440f0) {
            ctx->pc = 0x14410Cu;
            goto label_14410c;
        }
    }
    ctx->pc = 0x1440F8u;
label_1440f8:
    // 0x1440f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1440f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1440fc:
    // 0x1440fc: 0x0  nop
    ctx->pc = 0x1440fcu;
    // NOP
label_144100:
    // 0x144100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_144104:
    // 0x144104: 0x10000008  b           . + 4 + (0x8 << 2)
label_144108:
    if (ctx->pc == 0x144108u) {
        ctx->pc = 0x14410Cu;
        goto label_14410c;
    }
    ctx->pc = 0x144104u;
    {
        const bool branch_taken_0x144104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144104) {
            ctx->pc = 0x144128u;
            goto label_144128;
        }
    }
    ctx->pc = 0x14410Cu;
label_14410c:
    // 0x14410c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x14410cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_144110:
    // 0x144110: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x144110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_144114:
    // 0x144114: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x144114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_144118:
    // 0x144118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14411c:
    // 0x14411c: 0x0  nop
    ctx->pc = 0x14411cu;
    // NOP
label_144120:
    // 0x144120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_144124:
    // 0x144124: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x144124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_144128:
    // 0x144128: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x144128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_14412c:
    // 0x14412c: 0x10000395  b           . + 4 + (0x395 << 2)
label_144130:
    if (ctx->pc == 0x144130u) {
        ctx->pc = 0x144134u;
        goto label_144134;
    }
    ctx->pc = 0x14412Cu;
    {
        const bool branch_taken_0x14412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14412c) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144134u;
label_144134:
    // 0x144134: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x144134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_144138:
    // 0x144138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14413c:
    // 0x14413c: 0x0  nop
    ctx->pc = 0x14413cu;
    // NOP
label_144140:
    // 0x144140: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_144144:
    // 0x144144: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x144144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
label_144148:
    // 0x144148: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x144148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_14414c:
    // 0x14414c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_144150:
    if (ctx->pc == 0x144150u) {
        ctx->pc = 0x144154u;
        goto label_144154;
    }
    ctx->pc = 0x14414Cu;
    {
        const bool branch_taken_0x14414c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14414c) {
            ctx->pc = 0x14419Cu;
            goto label_14419c;
        }
    }
    ctx->pc = 0x144154u;
label_144154:
    // 0x144154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144158:
    // 0x144158: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_14415c:
    if (ctx->pc == 0x14415Cu) {
        ctx->pc = 0x144160u;
        goto label_144160;
    }
    ctx->pc = 0x144158u;
    {
        const bool branch_taken_0x144158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x144158) {
            ctx->pc = 0x144168u;
            goto label_144168;
        }
    }
    ctx->pc = 0x144160u;
label_144160:
    // 0x144160: 0x1000000e  b           . + 4 + (0xE << 2)
label_144164:
    if (ctx->pc == 0x144164u) {
        ctx->pc = 0x144168u;
        goto label_144168;
    }
    ctx->pc = 0x144160u;
    {
        const bool branch_taken_0x144160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144160) {
            ctx->pc = 0x14419Cu;
            goto label_14419c;
        }
    }
    ctx->pc = 0x144168u;
label_144168:
    // 0x144168: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x144168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_14416c:
    // 0x14416c: 0x3c1e3f80  lui         $fp, 0x3F80
    ctx->pc = 0x14416cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16256 << 16));
label_144170:
    // 0x144170: 0x449e6000  mtc1        $fp, $f12
    ctx->pc = 0x144170u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_144174:
    // 0x144174: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x144174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_144178:
    // 0x144178: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x144178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_14417c:
    // 0x14417c: 0x24a52a80  addiu       $a1, $a1, 0x2A80
    ctx->pc = 0x14417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10880));
label_144180:
    // 0x144180: 0xc049b6c  jal         func_126DB0
label_144184:
    if (ctx->pc == 0x144184u) {
        ctx->pc = 0x144188u;
        goto label_144188;
    }
    ctx->pc = 0x144180u;
    SET_GPR_U32(ctx, 31, 0x144188u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x144180u, 0x144188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144188u;
label_144188:
    // 0x144188: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x144188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_14418c:
    // 0x14418c: 0xc7a1023c  lwc1        $f1, 0x23C($sp)
    ctx->pc = 0x14418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_144190:
    // 0x144190: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x144190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_144194:
    // 0x144194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x144194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_144198:
    // 0x144198: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x144198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
label_14419c:
    // 0x14419c: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x14419cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1441a0:
    // 0x1441a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1441a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1441a4:
    // 0x1441a4: 0xc047eb8  jal         func_11FAE0
label_1441a8:
    if (ctx->pc == 0x1441A8u) {
        ctx->pc = 0x1441ACu;
        goto label_1441ac;
    }
    ctx->pc = 0x1441A4u;
    SET_GPR_U32(ctx, 31, 0x1441ACu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1441A4u, 0x1441ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441ACu;
label_1441ac:
    // 0x1441ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1441acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1441b0:
    // 0x1441b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1441b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1441b4:
    // 0x1441b4: 0x2405054f  addiu       $a1, $zero, 0x54F
    ctx->pc = 0x1441b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1359));
label_1441b8:
    // 0x1441b8: 0xc042090  jal         func_108240
label_1441bc:
    if (ctx->pc == 0x1441BCu) {
        ctx->pc = 0x1441C0u;
        goto label_1441c0;
    }
    ctx->pc = 0x1441B8u;
    SET_GPR_U32(ctx, 31, 0x1441C0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x1441B8u, 0x1441C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441C0u;
label_1441c0:
    // 0x1441c0: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x1441c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_1441c4:
    // 0x1441c4: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x1441c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1441c8:
    // 0x1441c8: 0xc7a0023c  lwc1        $f0, 0x23C($sp)
    ctx->pc = 0x1441c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1441cc:
    // 0x1441cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1441ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1441d0:
    // 0x1441d0: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x1441d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_1441d4:
    // 0x1441d4: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x1441d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1441d8:
    // 0x1441d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1441d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1441dc:
    // 0x1441dc: 0xc047eb8  jal         func_11FAE0
label_1441e0:
    if (ctx->pc == 0x1441E0u) {
        ctx->pc = 0x1441E4u;
        goto label_1441e4;
    }
    ctx->pc = 0x1441DCu;
    SET_GPR_U32(ctx, 31, 0x1441E4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1441DCu, 0x1441E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441E4u;
label_1441e4:
    // 0x1441e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1441e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1441e8:
    // 0x1441e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1441e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1441ec:
    // 0x1441ec: 0x24050551  addiu       $a1, $zero, 0x551
    ctx->pc = 0x1441ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1361));
label_1441f0:
    // 0x1441f0: 0xc042090  jal         func_108240
label_1441f4:
    if (ctx->pc == 0x1441F4u) {
        ctx->pc = 0x1441F8u;
        goto label_1441f8;
    }
    ctx->pc = 0x1441F0u;
    SET_GPR_U32(ctx, 31, 0x1441F8u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x1441F0u, 0x1441F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441F8u;
label_1441f8:
    // 0x1441f8: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x1441f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_1441fc:
    // 0x1441fc: 0xc7a10230  lwc1        $f1, 0x230($sp)
    ctx->pc = 0x1441fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_144200:
    // 0x144200: 0xc7a00234  lwc1        $f0, 0x234($sp)
    ctx->pc = 0x144200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_144204:
    // 0x144204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x144204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_144208:
    // 0x144208: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_14420c:
    if (ctx->pc == 0x14420Cu) {
        ctx->pc = 0x144210u;
        goto label_144210;
    }
    ctx->pc = 0x144208u;
    {
        const bool branch_taken_0x144208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144208) {
            ctx->pc = 0x144218u;
            goto label_144218;
        }
    }
    ctx->pc = 0x144210u;
label_144210:
    // 0x144210: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x144210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_144214:
    // 0x144214: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x144214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_144218:
    // 0x144218: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_14421c:
    // 0x14421c: 0xc047eb8  jal         func_11FAE0
label_144220:
    if (ctx->pc == 0x144220u) {
        ctx->pc = 0x144224u;
        goto label_144224;
    }
    ctx->pc = 0x14421Cu;
    SET_GPR_U32(ctx, 31, 0x144224u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x14421Cu, 0x144224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144224u;
label_144224:
    // 0x144224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144228:
    // 0x144228: 0x2405054f  addiu       $a1, $zero, 0x54F
    ctx->pc = 0x144228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1359));
label_14422c:
    // 0x14422c: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x14422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_144230:
    // 0x144230: 0xc041bc4  jal         func_106F10
label_144234:
    if (ctx->pc == 0x144234u) {
        ctx->pc = 0x144238u;
        goto label_144238;
    }
    ctx->pc = 0x144230u;
    SET_GPR_U32(ctx, 31, 0x144238u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x144230u, 0x144238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144238u;
label_144238:
    // 0x144238: 0xc05548c  jal         func_155230
label_14423c:
    if (ctx->pc == 0x14423Cu) {
        ctx->pc = 0x144240u;
        goto label_144240;
    }
    ctx->pc = 0x144238u;
    SET_GPR_U32(ctx, 31, 0x144240u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x144238u, 0x144240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144240u;
label_144240:
    // 0x144240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144244:
    // 0x144244: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x144244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_144248:
    // 0x144248: 0xc0553d4  jal         func_154F50
label_14424c:
    if (ctx->pc == 0x14424Cu) {
        ctx->pc = 0x144250u;
        goto label_144250;
    }
    ctx->pc = 0x144248u;
    SET_GPR_U32(ctx, 31, 0x144250u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x144248u, 0x144250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144250u;
label_144250:
    // 0x144250: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x144250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
label_144254:
    // 0x144254: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x144254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_144258:
    // 0x144258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14425c:
    // 0x14425c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14425cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_144260:
    // 0x144260: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x144260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_144264:
    // 0x144264: 0x320f809  jalr        $t9
label_144268:
    if (ctx->pc == 0x144268u) {
        ctx->pc = 0x14426Cu;
        goto label_14426c;
    }
    ctx->pc = 0x144264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14426Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144264u, 0x14426Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14426Cu;
label_14426c:
    // 0x14426c: 0x10000345  b           . + 4 + (0x345 << 2)
label_144270:
    if (ctx->pc == 0x144270u) {
        ctx->pc = 0x144274u;
        goto label_144274;
    }
    ctx->pc = 0x14426Cu;
    {
        const bool branch_taken_0x14426c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14426c) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144274u;
label_144274:
    // 0x144274: 0x8fb70290  lw          $s7, 0x290($sp)
    ctx->pc = 0x144274u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_144278:
    // 0x144278: 0x12e00093  beqz        $s7, . + 4 + (0x93 << 2)
label_14427c:
    if (ctx->pc == 0x14427Cu) {
        ctx->pc = 0x144280u;
        goto label_144280;
    }
    ctx->pc = 0x144278u;
    {
        const bool branch_taken_0x144278 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x144278) {
            ctx->pc = 0x1444C8u;
            goto label_1444c8;
        }
    }
    ctx->pc = 0x144280u;
label_144280:
    // 0x144280: 0x82e20000  lb          $v0, 0x0($s7)
    ctx->pc = 0x144280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_144284:
    // 0x144284: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_144288:
    if (ctx->pc == 0x144288u) {
        ctx->pc = 0x14428Cu;
        goto label_14428c;
    }
    ctx->pc = 0x144284u;
    {
        const bool branch_taken_0x144284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144284) {
            ctx->pc = 0x1444C8u;
            goto label_1444c8;
        }
    }
    ctx->pc = 0x14428Cu;
label_14428c:
    // 0x14428c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x14428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_144290:
    // 0x144290: 0xc08d5f4  jal         func_2357D0
label_144294:
    if (ctx->pc == 0x144294u) {
        ctx->pc = 0x144298u;
        goto label_144298;
    }
    ctx->pc = 0x144290u;
    SET_GPR_U32(ctx, 31, 0x144298u);
    ctx->pc = 0x2357D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357D0u, 0x144290u, 0x144298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144298u;
label_144298:
    // 0x144298: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_14429c:
    // 0x14429c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1442a0:
    // 0x1442a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1442a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1442a4:
    // 0x1442a4: 0xc08d60c  jal         func_235830
label_1442a8:
    if (ctx->pc == 0x1442A8u) {
        ctx->pc = 0x1442ACu;
        goto label_1442ac;
    }
    ctx->pc = 0x1442A4u;
    SET_GPR_U32(ctx, 31, 0x1442ACu);
    ctx->pc = 0x235830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235830u, 0x1442A4u, 0x1442ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442ACu;
label_1442ac:
    // 0x1442ac: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1442b0:
    // 0x1442b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1442b4:
    if (ctx->pc == 0x1442B4u) {
        ctx->pc = 0x1442B8u;
        goto label_1442b8;
    }
    ctx->pc = 0x1442B0u;
    {
        const bool branch_taken_0x1442b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1442b0) {
            ctx->pc = 0x1442E4u;
            goto label_1442e4;
        }
    }
    ctx->pc = 0x1442B8u;
label_1442b8:
    // 0x1442b8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1442bc:
    // 0x1442bc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1442bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1442c0:
    // 0x1442c0: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x1442c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1442c4:
    // 0x1442c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1442c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1442c8:
    // 0x1442c8: 0xc047eb8  jal         func_11FAE0
label_1442cc:
    if (ctx->pc == 0x1442CCu) {
        ctx->pc = 0x1442D0u;
        goto label_1442d0;
    }
    ctx->pc = 0x1442C8u;
    SET_GPR_U32(ctx, 31, 0x1442D0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1442C8u, 0x1442D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442D0u;
label_1442d0:
    // 0x1442d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1442d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1442d4:
    // 0x1442d4: 0xc047eb0  jal         func_11FAC0
label_1442d8:
    if (ctx->pc == 0x1442D8u) {
        ctx->pc = 0x1442DCu;
        goto label_1442dc;
    }
    ctx->pc = 0x1442D4u;
    SET_GPR_U32(ctx, 31, 0x1442DCu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1442D4u, 0x1442DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442DCu;
label_1442dc:
    // 0x1442dc: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1442dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1442e0:
    // 0x1442e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1442e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1442e4:
    // 0x1442e4: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x1442e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_1442e8:
    // 0x1442e8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1442ec:
    if (ctx->pc == 0x1442ECu) {
        ctx->pc = 0x1442F0u;
        goto label_1442f0;
    }
    ctx->pc = 0x1442E8u;
    {
        const bool branch_taken_0x1442e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1442e8) {
            ctx->pc = 0x144354u;
            goto label_144354;
        }
    }
    ctx->pc = 0x1442F0u;
label_1442f0:
    // 0x1442f0: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x1442f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_1442f4:
    // 0x1442f4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1442f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1442f8:
    // 0x1442f8: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x1442f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1442fc:
    // 0x1442fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1442fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144300:
    // 0x144300: 0xc047eb8  jal         func_11FAE0
label_144304:
    if (ctx->pc == 0x144304u) {
        ctx->pc = 0x144308u;
        goto label_144308;
    }
    ctx->pc = 0x144300u;
    SET_GPR_U32(ctx, 31, 0x144308u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144300u, 0x144308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144308u;
label_144308:
    // 0x144308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14430c:
    // 0x14430c: 0xc047eb0  jal         func_11FAC0
label_144310:
    if (ctx->pc == 0x144310u) {
        ctx->pc = 0x144314u;
        goto label_144314;
    }
    ctx->pc = 0x14430Cu;
    SET_GPR_U32(ctx, 31, 0x144314u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x14430Cu, 0x144314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144314u;
label_144314:
    // 0x144314: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x144314u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_144318:
    // 0x144318: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x144318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_14431c:
    // 0x14431c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144320:
    // 0x144320: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x144320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_144324:
    // 0x144324: 0xc41004  sllv        $v0, $a0, $a2
    ctx->pc = 0x144324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
label_144328:
    // 0x144328: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x144328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_14432c:
    // 0x14432c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x14432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144330:
    // 0x144330: 0xc047eb8  jal         func_11FAE0
label_144334:
    if (ctx->pc == 0x144334u) {
        ctx->pc = 0x144338u;
        goto label_144338;
    }
    ctx->pc = 0x144330u;
    SET_GPR_U32(ctx, 31, 0x144338u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144330u, 0x144338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144338u;
label_144338:
    // 0x144338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14433c:
    // 0x14433c: 0xc047eb0  jal         func_11FAC0
label_144340:
    if (ctx->pc == 0x144340u) {
        ctx->pc = 0x144344u;
        goto label_144344;
    }
    ctx->pc = 0x14433Cu;
    SET_GPR_U32(ctx, 31, 0x144344u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x14433Cu, 0x144344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144344u;
label_144344:
    // 0x144344: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x144344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_144348:
    // 0x144348: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x144348u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_14434c:
    // 0x14434c: 0x83b025  or          $s6, $a0, $v1
    ctx->pc = 0x14434cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_144350:
    // 0x144350: 0xac560028  sw          $s6, 0x28($v0)
    ctx->pc = 0x144350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 22));
label_144354:
    // 0x144354: 0xc0434e0  jal         func_10D380
label_144358:
    if (ctx->pc == 0x144358u) {
        ctx->pc = 0x14435Cu;
        goto label_14435c;
    }
    ctx->pc = 0x144354u;
    SET_GPR_U32(ctx, 31, 0x14435Cu);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x144354u, 0x14435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14435Cu;
label_14435c:
    // 0x14435c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144360:
    // 0x144360: 0xc0434d8  jal         func_10D360
label_144364:
    if (ctx->pc == 0x144364u) {
        ctx->pc = 0x144368u;
        goto label_144368;
    }
    ctx->pc = 0x144360u;
    SET_GPR_U32(ctx, 31, 0x144368u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x144360u, 0x144368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144368u;
label_144368:
    // 0x144368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14436c:
    // 0x14436c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_144370:
    // 0x144370: 0xc044edc  jal         func_113B70
label_144374:
    if (ctx->pc == 0x144374u) {
        ctx->pc = 0x144378u;
        goto label_144378;
    }
    ctx->pc = 0x144370u;
    SET_GPR_U32(ctx, 31, 0x144378u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x144370u, 0x144378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144378u;
label_144378:
    // 0x144378: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x144378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
label_14437c:
    // 0x14437c: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x14437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_144380:
    // 0x144380: 0x10030051  beq         $zero, $v1, . + 4 + (0x51 << 2)
label_144384:
    if (ctx->pc == 0x144384u) {
        ctx->pc = 0x144388u;
        goto label_144388;
    }
    ctx->pc = 0x144380u;
    {
        const bool branch_taken_0x144380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x144380) {
            ctx->pc = 0x1444C8u;
            goto label_1444c8;
        }
    }
    ctx->pc = 0x144388u;
label_144388:
    // 0x144388: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x144388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_14438c:
    // 0x14438c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144390:
    // 0x144390: 0x1002004d  beq         $zero, $v0, . + 4 + (0x4D << 2)
label_144394:
    if (ctx->pc == 0x144394u) {
        ctx->pc = 0x144398u;
        goto label_144398;
    }
    ctx->pc = 0x144390u;
    {
        const bool branch_taken_0x144390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x144390) {
            ctx->pc = 0x1444C8u;
            goto label_1444c8;
        }
    }
    ctx->pc = 0x144398u;
label_144398:
    // 0x144398: 0x8fa40228  lw          $a0, 0x228($sp)
    ctx->pc = 0x144398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_14439c:
    // 0x14439c: 0xc0457e8  jal         func_115FA0
label_1443a0:
    if (ctx->pc == 0x1443A0u) {
        ctx->pc = 0x1443A4u;
        goto label_1443a4;
    }
    ctx->pc = 0x14439Cu;
    SET_GPR_U32(ctx, 31, 0x1443A4u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x14439Cu, 0x1443A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443A4u;
label_1443a4:
    // 0x1443a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1443a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1443a8:
    // 0x1443a8: 0x24050463  addiu       $a1, $zero, 0x463
    ctx->pc = 0x1443a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1123));
label_1443ac:
    // 0x1443ac: 0x27868c94  addiu       $a2, $gp, -0x736C
    ctx->pc = 0x1443acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937748));
label_1443b0:
    // 0x1443b0: 0xc041a50  jal         func_106940
label_1443b4:
    if (ctx->pc == 0x1443B4u) {
        ctx->pc = 0x1443B8u;
        goto label_1443b8;
    }
    ctx->pc = 0x1443B0u;
    SET_GPR_U32(ctx, 31, 0x1443B8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x1443B0u, 0x1443B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443B8u;
label_1443b8:
    // 0x1443b8: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x1443b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
label_1443bc:
    // 0x1443bc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1443bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1443c0:
    // 0x1443c0: 0xc0514a8  jal         func_1452A0
label_1443c4:
    if (ctx->pc == 0x1443C4u) {
        ctx->pc = 0x1443C8u;
        goto label_1443c8;
    }
    ctx->pc = 0x1443C0u;
    SET_GPR_U32(ctx, 31, 0x1443C8u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x1443C0u, 0x1443C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443C8u;
label_1443c8:
    // 0x1443c8: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1443c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1443cc:
    // 0x1443cc: 0x8fa50224  lw          $a1, 0x224($sp)
    ctx->pc = 0x1443ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_1443d0:
    // 0x1443d0: 0xc040304  jal         func_100C10
label_1443d4:
    if (ctx->pc == 0x1443D4u) {
        ctx->pc = 0x1443D8u;
        goto label_1443d8;
    }
    ctx->pc = 0x1443D0u;
    SET_GPR_U32(ctx, 31, 0x1443D8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1443D0u, 0x1443D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443D8u;
label_1443d8:
    // 0x1443d8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1443d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1443dc:
    // 0x1443dc: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1443e0:
    // 0x1443e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1443e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1443e4:
    // 0x1443e4: 0xc042fc4  jal         func_10BF10
label_1443e8:
    if (ctx->pc == 0x1443E8u) {
        ctx->pc = 0x1443ECu;
        goto label_1443ec;
    }
    ctx->pc = 0x1443E4u;
    SET_GPR_U32(ctx, 31, 0x1443ECu);
    ctx->pc = 0x10BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF10u, 0x1443E4u, 0x1443ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443ECu;
label_1443ec:
    // 0x1443ec: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1443ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1443f0:
    // 0x1443f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1443f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1443f4:
    // 0x1443f4: 0xc0402d4  jal         func_100B50
label_1443f8:
    if (ctx->pc == 0x1443F8u) {
        ctx->pc = 0x1443FCu;
        goto label_1443fc;
    }
    ctx->pc = 0x1443F4u;
    SET_GPR_U32(ctx, 31, 0x1443FCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1443F4u, 0x1443FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443FCu;
label_1443fc:
    // 0x1443fc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1443fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_144400:
    // 0x144400: 0xc043000  jal         func_10C000
label_144404:
    if (ctx->pc == 0x144404u) {
        ctx->pc = 0x144408u;
        goto label_144408;
    }
    ctx->pc = 0x144400u;
    SET_GPR_U32(ctx, 31, 0x144408u);
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x144400u, 0x144408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144408u;
label_144408:
    // 0x144408: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x144408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_14440c:
    // 0x14440c: 0x10000022  b           . + 4 + (0x22 << 2)
label_144410:
    if (ctx->pc == 0x144410u) {
        ctx->pc = 0x144414u;
        goto label_144414;
    }
    ctx->pc = 0x14440Cu;
    {
        const bool branch_taken_0x14440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14440c) {
            ctx->pc = 0x144498u;
            goto label_144498;
        }
    }
    ctx->pc = 0x144414u;
label_144414:
    // 0x144414: 0xc090864  jal         func_242190
label_144418:
    if (ctx->pc == 0x144418u) {
        ctx->pc = 0x14441Cu;
        goto label_14441c;
    }
    ctx->pc = 0x144414u;
    SET_GPR_U32(ctx, 31, 0x14441Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x144414u, 0x14441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14441Cu;
label_14441c:
    // 0x14441c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144420:
    // 0x144420: 0xc0905a0  jal         func_241680
label_144424:
    if (ctx->pc == 0x144424u) {
        ctx->pc = 0x144428u;
        goto label_144428;
    }
    ctx->pc = 0x144420u;
    SET_GPR_U32(ctx, 31, 0x144428u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x144420u, 0x144428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144428u;
label_144428:
    // 0x144428: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x144428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_14442c:
    // 0x14442c: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x14442cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_144430:
    // 0x144430: 0xc041b38  jal         func_106CE0
label_144434:
    if (ctx->pc == 0x144434u) {
        ctx->pc = 0x144438u;
        goto label_144438;
    }
    ctx->pc = 0x144430u;
    SET_GPR_U32(ctx, 31, 0x144438u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x144430u, 0x144438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144438u;
label_144438:
    // 0x144438: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x144438u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_14443c:
    // 0x14443c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14443cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144440:
    // 0x144440: 0xc09a364  jal         func_268D90
label_144444:
    if (ctx->pc == 0x144444u) {
        ctx->pc = 0x144448u;
        goto label_144448;
    }
    ctx->pc = 0x144440u;
    SET_GPR_U32(ctx, 31, 0x144448u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x144440u, 0x144448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144448u;
label_144448:
    // 0x144448: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x144448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
label_14444c:
    // 0x14444c: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x14444cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_144450:
    // 0x144450: 0x1004000e  beq         $zero, $a0, . + 4 + (0xE << 2)
label_144454:
    if (ctx->pc == 0x144454u) {
        ctx->pc = 0x144458u;
        goto label_144458;
    }
    ctx->pc = 0x144450u;
    {
        const bool branch_taken_0x144450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x144450) {
            ctx->pc = 0x14448Cu;
            goto label_14448c;
        }
    }
    ctx->pc = 0x144458u;
label_144458:
    // 0x144458: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x144458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_14445c:
    // 0x14445c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14445cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144460:
    // 0x144460: 0xc09ac08  jal         func_26B020
label_144464:
    if (ctx->pc == 0x144464u) {
        ctx->pc = 0x144468u;
        goto label_144468;
    }
    ctx->pc = 0x144460u;
    SET_GPR_U32(ctx, 31, 0x144468u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x144460u, 0x144468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144468u;
label_144468:
    // 0x144468: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x144468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_14446c:
    // 0x14446c: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x14446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_144470:
    // 0x144470: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x144470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_144474:
    // 0x144474: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x144474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144478:
    // 0x144478: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x144478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_14447c:
    // 0x14447c: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x14447cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_144480:
    // 0x144480: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x144480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_144484:
    // 0x144484: 0xc051798  jal         func_145E60
label_144488:
    if (ctx->pc == 0x144488u) {
        ctx->pc = 0x14448Cu;
        goto label_14448c;
    }
    ctx->pc = 0x144484u;
    SET_GPR_U32(ctx, 31, 0x14448Cu);
    ctx->pc = 0x145E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145E60u, 0x144484u, 0x14448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14448Cu;
label_14448c:
    // 0x14448c: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x14448cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_144490:
    // 0x144490: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x144490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_144494:
    // 0x144494: 0xafa40220  sw          $a0, 0x220($sp)
    ctx->pc = 0x144494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 4));
label_144498:
    // 0x144498: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x144498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_14449c:
    // 0x14449c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x14449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1444a0:
    // 0x1444a0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1444a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1444a4:
    // 0x1444a4: 0xc0430fc  jal         func_10C3F0
label_1444a8:
    if (ctx->pc == 0x1444A8u) {
        ctx->pc = 0x1444ACu;
        goto label_1444ac;
    }
    ctx->pc = 0x1444A4u;
    SET_GPR_U32(ctx, 31, 0x1444ACu);
    ctx->pc = 0x10C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3F0u, 0x1444A4u, 0x1444ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444ACu;
label_1444ac:
    // 0x1444ac: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1444acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1444b0:
    // 0x1444b0: 0x1462ffd8  bne         $v1, $v0, . + 4 + (-0x28 << 2)
label_1444b4:
    if (ctx->pc == 0x1444B4u) {
        ctx->pc = 0x1444B8u;
        goto label_1444b8;
    }
    ctx->pc = 0x1444B0u;
    {
        const bool branch_taken_0x1444b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1444b0) {
            ctx->pc = 0x144414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144414;
        }
    }
    ctx->pc = 0x1444B8u;
label_1444b8:
    // 0x1444b8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1444b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1444bc:
    // 0x1444bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1444bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1444c0:
    // 0x1444c0: 0xc051428  jal         func_1450A0
label_1444c4:
    if (ctx->pc == 0x1444C4u) {
        ctx->pc = 0x1444C8u;
        goto label_1444c8;
    }
    ctx->pc = 0x1444C0u;
    SET_GPR_U32(ctx, 31, 0x1444C8u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x1444C0u, 0x1444C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444C8u;
label_1444c8:
    // 0x1444c8: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x1444c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_1444cc:
    // 0x1444cc: 0xc051704  jal         func_145C10
label_1444d0:
    if (ctx->pc == 0x1444D0u) {
        ctx->pc = 0x1444D4u;
        goto label_1444d4;
    }
    ctx->pc = 0x1444CCu;
    SET_GPR_U32(ctx, 31, 0x1444D4u);
    ctx->pc = 0x145C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145C10u, 0x1444CCu, 0x1444D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444D4u;
label_1444d4:
    // 0x1444d4: 0xc05548c  jal         func_155230
label_1444d8:
    if (ctx->pc == 0x1444D8u) {
        ctx->pc = 0x1444DCu;
        goto label_1444dc;
    }
    ctx->pc = 0x1444D4u;
    SET_GPR_U32(ctx, 31, 0x1444DCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1444D4u, 0x1444DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444DCu;
label_1444dc:
    // 0x1444dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1444dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1444e0:
    // 0x1444e0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1444e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1444e4:
    // 0x1444e4: 0xc0553d4  jal         func_154F50
label_1444e8:
    if (ctx->pc == 0x1444E8u) {
        ctx->pc = 0x1444ECu;
        goto label_1444ec;
    }
    ctx->pc = 0x1444E4u;
    SET_GPR_U32(ctx, 31, 0x1444ECu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1444E4u, 0x1444ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444ECu;
label_1444ec:
    // 0x1444ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1444ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1444f0:
    // 0x1444f0: 0xc05cf44  jal         func_173D10
label_1444f4:
    if (ctx->pc == 0x1444F4u) {
        ctx->pc = 0x1444F8u;
        goto label_1444f8;
    }
    ctx->pc = 0x1444F0u;
    SET_GPR_U32(ctx, 31, 0x1444F8u);
    ctx->pc = 0x173D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D10u, 0x1444F0u, 0x1444F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444F8u;
label_1444f8:
    // 0x1444f8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1444f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1444fc:
    // 0x1444fc: 0xc047eb8  jal         func_11FAE0
label_144500:
    if (ctx->pc == 0x144500u) {
        ctx->pc = 0x144504u;
        goto label_144504;
    }
    ctx->pc = 0x1444FCu;
    SET_GPR_U32(ctx, 31, 0x144504u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1444FCu, 0x144504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144504u;
label_144504:
    // 0x144504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144508:
    // 0x144508: 0xc047eb0  jal         func_11FAC0
label_14450c:
    if (ctx->pc == 0x14450Cu) {
        ctx->pc = 0x144510u;
        goto label_144510;
    }
    ctx->pc = 0x144508u;
    SET_GPR_U32(ctx, 31, 0x144510u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x144508u, 0x144510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144510u;
label_144510:
    // 0x144510: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x144510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_144514:
    // 0x144514: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144518:
    // 0x144518: 0xc047eb8  jal         func_11FAE0
label_14451c:
    if (ctx->pc == 0x14451Cu) {
        ctx->pc = 0x144520u;
        goto label_144520;
    }
    ctx->pc = 0x144518u;
    SET_GPR_U32(ctx, 31, 0x144520u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144518u, 0x144520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144520u;
label_144520:
    // 0x144520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144524:
    // 0x144524: 0xc047eb0  jal         func_11FAC0
label_144528:
    if (ctx->pc == 0x144528u) {
        ctx->pc = 0x14452Cu;
        goto label_14452c;
    }
    ctx->pc = 0x144524u;
    SET_GPR_U32(ctx, 31, 0x14452Cu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x144524u, 0x14452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14452Cu;
label_14452c:
    // 0x14452c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14452cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144530:
    // 0x144530: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x144530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_144534:
    // 0x144534: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x144534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_144538:
    // 0x144538: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x144538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_14453c:
    // 0x14453c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x14453cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_144540:
    // 0x144540: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x144540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_144544:
    // 0x144544: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x144544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_144548:
    // 0x144548: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x144548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
label_14454c:
    // 0x14454c: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x14454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_144550:
    // 0x144550: 0x22823  negu        $a1, $v0
    ctx->pc = 0x144550u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_144554:
    // 0x144554: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x144554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_144558:
    // 0x144558: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x144558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14455c:
    // 0x14455c: 0xc08d69c  jal         func_235A70
label_144560:
    if (ctx->pc == 0x144560u) {
        ctx->pc = 0x144564u;
        goto label_144564;
    }
    ctx->pc = 0x14455Cu;
    SET_GPR_U32(ctx, 31, 0x144564u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x14455Cu, 0x144564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144564u;
label_144564:
    // 0x144564: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x144564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_144568:
    // 0x144568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x144568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14456c:
    // 0x14456c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144570:
    // 0x144570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144574:
    // 0x144574: 0xc08cc40  jal         func_233100
label_144578:
    if (ctx->pc == 0x144578u) {
        ctx->pc = 0x14457Cu;
        goto label_14457c;
    }
    ctx->pc = 0x144574u;
    SET_GPR_U32(ctx, 31, 0x14457Cu);
    ctx->pc = 0x233100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233100u, 0x144574u, 0x14457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14457Cu;
label_14457c:
    // 0x14457c: 0x10000281  b           . + 4 + (0x281 << 2)
label_144580:
    if (ctx->pc == 0x144580u) {
        ctx->pc = 0x144584u;
        goto label_144584;
    }
    ctx->pc = 0x14457Cu;
    {
        const bool branch_taken_0x14457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14457c) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144584u;
label_144584:
    // 0x144584: 0x8fb50280  lw          $s5, 0x280($sp)
    ctx->pc = 0x144584u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_144588:
    // 0x144588: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x144588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_14458c:
    // 0x14458c: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x14458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
label_144590:
    // 0x144590: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144594:
    // 0x144594: 0xc047eb8  jal         func_11FAE0
label_144598:
    if (ctx->pc == 0x144598u) {
        ctx->pc = 0x14459Cu;
        goto label_14459c;
    }
    ctx->pc = 0x144594u;
    SET_GPR_U32(ctx, 31, 0x14459Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144594u, 0x14459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14459Cu;
label_14459c:
    // 0x14459c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14459cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1445a0:
    // 0x1445a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1445a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1445a4:
    // 0x1445a4: 0x24050551  addiu       $a1, $zero, 0x551
    ctx->pc = 0x1445a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1361));
label_1445a8:
    // 0x1445a8: 0xc041bc4  jal         func_106F10
label_1445ac:
    if (ctx->pc == 0x1445ACu) {
        ctx->pc = 0x1445B0u;
        goto label_1445b0;
    }
    ctx->pc = 0x1445A8u;
    SET_GPR_U32(ctx, 31, 0x1445B0u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x1445A8u, 0x1445B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445B0u;
label_1445b0:
    // 0x1445b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1445b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1445b4:
    // 0x1445b4: 0xc0ba892  jal         func_2EA248
label_1445b8:
    if (ctx->pc == 0x1445B8u) {
        ctx->pc = 0x1445BCu;
        goto label_1445bc;
    }
    ctx->pc = 0x1445B4u;
    SET_GPR_U32(ctx, 31, 0x1445BCu);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x1445B4u, 0x1445BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445BCu;
label_1445bc:
    // 0x1445bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1445bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1445c0:
    // 0x1445c0: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x1445c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1445c4:
    // 0x1445c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1445c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1445c8:
    // 0x1445c8: 0xc047eb8  jal         func_11FAE0
label_1445cc:
    if (ctx->pc == 0x1445CCu) {
        ctx->pc = 0x1445D0u;
        goto label_1445d0;
    }
    ctx->pc = 0x1445C8u;
    SET_GPR_U32(ctx, 31, 0x1445D0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1445C8u, 0x1445D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445D0u;
label_1445d0:
    // 0x1445d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1445d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1445d4:
    // 0x1445d4: 0xc047eb0  jal         func_11FAC0
label_1445d8:
    if (ctx->pc == 0x1445D8u) {
        ctx->pc = 0x1445DCu;
        goto label_1445dc;
    }
    ctx->pc = 0x1445D4u;
    SET_GPR_U32(ctx, 31, 0x1445DCu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1445D4u, 0x1445DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445DCu;
label_1445dc:
    // 0x1445dc: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x1445dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_1445e0:
    // 0x1445e0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1445e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1445e4:
    // 0x1445e4: 0xc047eb8  jal         func_11FAE0
label_1445e8:
    if (ctx->pc == 0x1445E8u) {
        ctx->pc = 0x1445ECu;
        goto label_1445ec;
    }
    ctx->pc = 0x1445E4u;
    SET_GPR_U32(ctx, 31, 0x1445ECu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1445E4u, 0x1445ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445ECu;
label_1445ec:
    // 0x1445ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1445ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1445f0:
    // 0x1445f0: 0xc047eb0  jal         func_11FAC0
label_1445f4:
    if (ctx->pc == 0x1445F4u) {
        ctx->pc = 0x1445F8u;
        goto label_1445f8;
    }
    ctx->pc = 0x1445F0u;
    SET_GPR_U32(ctx, 31, 0x1445F8u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1445F0u, 0x1445F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445F8u;
label_1445f8:
    // 0x1445f8: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1445f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1445fc:
    // 0x1445fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1445fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_144600:
    // 0x144600: 0x0  nop
    ctx->pc = 0x144600u;
    // NOP
label_144604:
    // 0x144604: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x144604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_144608:
    // 0x144608: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x144608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14460c:
    // 0x14460c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x14460cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144610:
    // 0x144610: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x144610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_144614:
    // 0x144614: 0x27858c98  addiu       $a1, $gp, -0x7368
    ctx->pc = 0x144614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937752));
label_144618:
    // 0x144618: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x144618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14461c:
    // 0x14461c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x14461cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_144620:
    // 0x144620: 0xc0bc3e2  jal         func_2F0F88
label_144624:
    if (ctx->pc == 0x144624u) {
        ctx->pc = 0x144628u;
        goto label_144628;
    }
    ctx->pc = 0x144620u;
    SET_GPR_U32(ctx, 31, 0x144628u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x144620u, 0x144628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144628u;
label_144628:
    // 0x144628: 0xc0434e0  jal         func_10D380
label_14462c:
    if (ctx->pc == 0x14462Cu) {
        ctx->pc = 0x144630u;
        goto label_144630;
    }
    ctx->pc = 0x144628u;
    SET_GPR_U32(ctx, 31, 0x144630u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x144628u, 0x144630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144630u;
label_144630:
    // 0x144630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144634:
    // 0x144634: 0xc0434d8  jal         func_10D360
label_144638:
    if (ctx->pc == 0x144638u) {
        ctx->pc = 0x14463Cu;
        goto label_14463c;
    }
    ctx->pc = 0x144634u;
    SET_GPR_U32(ctx, 31, 0x14463Cu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x144634u, 0x14463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14463Cu;
label_14463c:
    // 0x14463c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144640:
    // 0x144640: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x144640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_144644:
    // 0x144644: 0xc044edc  jal         func_113B70
label_144648:
    if (ctx->pc == 0x144648u) {
        ctx->pc = 0x14464Cu;
        goto label_14464c;
    }
    ctx->pc = 0x144644u;
    SET_GPR_U32(ctx, 31, 0x14464Cu);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x144644u, 0x14464Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14464Cu;
label_14464c:
    // 0x14464c: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x14464cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_144650:
    // 0x144650: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x144650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_144654:
    // 0x144654: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
label_144658:
    if (ctx->pc == 0x144658u) {
        ctx->pc = 0x14465Cu;
        goto label_14465c;
    }
    ctx->pc = 0x144654u;
    {
        const bool branch_taken_0x144654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x144654) {
            ctx->pc = 0x144698u;
            goto label_144698;
        }
    }
    ctx->pc = 0x14465Cu;
label_14465c:
    // 0x14465c: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x14465cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_144660:
    // 0x144660: 0xc0457e8  jal         func_115FA0
label_144664:
    if (ctx->pc == 0x144664u) {
        ctx->pc = 0x144668u;
        goto label_144668;
    }
    ctx->pc = 0x144660u;
    SET_GPR_U32(ctx, 31, 0x144668u);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x144660u, 0x144668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144668u;
label_144668:
    // 0x144668: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x144668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14466c:
    // 0x14466c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14466cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144670:
    // 0x144670: 0x24060461  addiu       $a2, $zero, 0x461
    ctx->pc = 0x144670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1121));
label_144674:
    // 0x144674: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x144674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_144678:
    // 0x144678: 0xc042090  jal         func_108240
label_14467c:
    if (ctx->pc == 0x14467Cu) {
        ctx->pc = 0x144680u;
        goto label_144680;
    }
    ctx->pc = 0x144678u;
    SET_GPR_U32(ctx, 31, 0x144680u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x144678u, 0x144680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144680u;
label_144680:
    // 0x144680: 0xc7a10210  lwc1        $f1, 0x210($sp)
    ctx->pc = 0x144680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_144684:
    // 0x144684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x144684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_144688:
    // 0x144688: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x144688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_14468c:
    // 0x14468c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14468cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_144690:
    // 0x144690: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_144694:
    if (ctx->pc == 0x144694u) {
        ctx->pc = 0x144698u;
        goto label_144698;
    }
    ctx->pc = 0x144690u;
    {
        const bool branch_taken_0x144690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144690) {
            ctx->pc = 0x144610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144610;
        }
    }
    ctx->pc = 0x144698u;
label_144698:
    // 0x144698: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_14469c:
    // 0x14469c: 0xc047eb8  jal         func_11FAE0
label_1446a0:
    if (ctx->pc == 0x1446A0u) {
        ctx->pc = 0x1446A4u;
        goto label_1446a4;
    }
    ctx->pc = 0x14469Cu;
    SET_GPR_U32(ctx, 31, 0x1446A4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x14469Cu, 0x1446A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446A4u;
label_1446a4:
    // 0x1446a4: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x1446a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1446a8:
    // 0x1446a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1446a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1446ac:
    // 0x1446ac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1446acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1446b0:
    // 0x1446b0: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x1446b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
label_1446b4:
    // 0x1446b4: 0xc041b24  jal         func_106C90
label_1446b8:
    if (ctx->pc == 0x1446B8u) {
        ctx->pc = 0x1446BCu;
        goto label_1446bc;
    }
    ctx->pc = 0x1446B4u;
    SET_GPR_U32(ctx, 31, 0x1446BCu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x1446B4u, 0x1446BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446BCu;
label_1446bc:
    // 0x1446bc: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1446bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_1446c0:
    // 0x1446c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1446c4:
    if (ctx->pc == 0x1446C4u) {
        ctx->pc = 0x1446C8u;
        goto label_1446c8;
    }
    ctx->pc = 0x1446C0u;
    {
        const bool branch_taken_0x1446c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1446c0) {
            ctx->pc = 0x1446E0u;
            goto label_1446e0;
        }
    }
    ctx->pc = 0x1446C8u;
label_1446c8:
    // 0x1446c8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1446c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1446cc:
    // 0x1446cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1446ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1446d0:
    // 0x1446d0: 0xc08ef28  jal         func_23BCA0
label_1446d4:
    if (ctx->pc == 0x1446D4u) {
        ctx->pc = 0x1446D8u;
        goto label_1446d8;
    }
    ctx->pc = 0x1446D0u;
    SET_GPR_U32(ctx, 31, 0x1446D8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1446D0u, 0x1446D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446D8u;
label_1446d8:
    // 0x1446d8: 0x1000022a  b           . + 4 + (0x22A << 2)
label_1446dc:
    if (ctx->pc == 0x1446DCu) {
        ctx->pc = 0x1446E0u;
        goto label_1446e0;
    }
    ctx->pc = 0x1446D8u;
    {
        const bool branch_taken_0x1446d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1446d8) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x1446E0u;
label_1446e0:
    // 0x1446e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1446e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1446e4:
    // 0x1446e4: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x1446e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1446e8:
    // 0x1446e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1446e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1446ec:
    // 0x1446ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1446f0:
    if (ctx->pc == 0x1446F0u) {
        ctx->pc = 0x1446F4u;
        goto label_1446f4;
    }
    ctx->pc = 0x1446ECu;
    {
        const bool branch_taken_0x1446ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1446ec) {
            ctx->pc = 0x144704u;
            goto label_144704;
        }
    }
    ctx->pc = 0x1446F4u;
label_1446f4:
    // 0x1446f4: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x1446f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
label_1446f8:
    // 0x1446f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1446f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1446fc:
    // 0x1446fc: 0x0  nop
    ctx->pc = 0x1446fcu;
    // NOP
label_144700:
    // 0x144700: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x144700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_144704:
    // 0x144704: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144708:
    // 0x144708: 0xc047eb8  jal         func_11FAE0
label_14470c:
    if (ctx->pc == 0x14470Cu) {
        ctx->pc = 0x144710u;
        goto label_144710;
    }
    ctx->pc = 0x144708u;
    SET_GPR_U32(ctx, 31, 0x144710u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144708u, 0x144710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144710u;
label_144710:
    // 0x144710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144714:
    // 0x144714: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x144714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_144718:
    // 0x144718: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0
    ctx->pc = 0x144718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
label_14471c:
    // 0x14471c: 0xc7ac0210  lwc1        $f12, 0x210($sp)
    ctx->pc = 0x14471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_144720:
    // 0x144720: 0xc051414  jal         func_145050
label_144724:
    if (ctx->pc == 0x144724u) {
        ctx->pc = 0x144728u;
        goto label_144728;
    }
    ctx->pc = 0x144720u;
    SET_GPR_U32(ctx, 31, 0x144728u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x144720u, 0x144728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144728u;
label_144728:
    // 0x144728: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_14472c:
    // 0x14472c: 0xc047eb8  jal         func_11FAE0
label_144730:
    if (ctx->pc == 0x144730u) {
        ctx->pc = 0x144734u;
        goto label_144734;
    }
    ctx->pc = 0x14472Cu;
    SET_GPR_U32(ctx, 31, 0x144734u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x14472Cu, 0x144734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144734u;
label_144734:
    // 0x144734: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x144734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_144738:
    // 0x144738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14473c:
    // 0x14473c: 0x2405054f  addiu       $a1, $zero, 0x54F
    ctx->pc = 0x14473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1359));
label_144740:
    // 0x144740: 0xc041bc4  jal         func_106F10
label_144744:
    if (ctx->pc == 0x144744u) {
        ctx->pc = 0x144748u;
        goto label_144748;
    }
    ctx->pc = 0x144740u;
    SET_GPR_U32(ctx, 31, 0x144748u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x144740u, 0x144748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144748u;
label_144748:
    // 0x144748: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x144748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_14474c:
    // 0x14474c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_144750:
    if (ctx->pc == 0x144750u) {
        ctx->pc = 0x144754u;
        goto label_144754;
    }
    ctx->pc = 0x14474Cu;
    {
        const bool branch_taken_0x14474c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14474c) {
            ctx->pc = 0x144770u;
            goto label_144770;
        }
    }
    ctx->pc = 0x144754u;
label_144754:
    // 0x144754: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x144754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_144758:
    // 0x144758: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x144758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14475c:
    // 0x14475c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14475cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144760:
    // 0x144760: 0xc08d48c  jal         func_235230
label_144764:
    if (ctx->pc == 0x144764u) {
        ctx->pc = 0x144768u;
        goto label_144768;
    }
    ctx->pc = 0x144760u;
    SET_GPR_U32(ctx, 31, 0x144768u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x144760u, 0x144768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144768u;
label_144768:
    // 0x144768: 0x10000007  b           . + 4 + (0x7 << 2)
label_14476c:
    if (ctx->pc == 0x14476Cu) {
        ctx->pc = 0x144770u;
        goto label_144770;
    }
    ctx->pc = 0x144768u;
    {
        const bool branch_taken_0x144768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144768) {
            ctx->pc = 0x144788u;
            goto label_144788;
        }
    }
    ctx->pc = 0x144770u;
label_144770:
    // 0x144770: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x144770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_144774:
    // 0x144774: 0x22823  negu        $a1, $v0
    ctx->pc = 0x144774u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_144778:
    // 0x144778: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x144778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14477c:
    // 0x14477c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14477cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144780:
    // 0x144780: 0xc08d48c  jal         func_235230
label_144784:
    if (ctx->pc == 0x144784u) {
        ctx->pc = 0x144788u;
        goto label_144788;
    }
    ctx->pc = 0x144780u;
    SET_GPR_U32(ctx, 31, 0x144788u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x144780u, 0x144788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144788u;
label_144788:
    // 0x144788: 0xc05548c  jal         func_155230
label_14478c:
    if (ctx->pc == 0x14478Cu) {
        ctx->pc = 0x144790u;
        goto label_144790;
    }
    ctx->pc = 0x144788u;
    SET_GPR_U32(ctx, 31, 0x144790u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x144788u, 0x144790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144790u;
label_144790:
    // 0x144790: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144794:
    // 0x144794: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x144794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_144798:
    // 0x144798: 0xc0553d4  jal         func_154F50
label_14479c:
    if (ctx->pc == 0x14479Cu) {
        ctx->pc = 0x1447A0u;
        goto label_1447a0;
    }
    ctx->pc = 0x144798u;
    SET_GPR_U32(ctx, 31, 0x1447A0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x144798u, 0x1447A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447A0u;
label_1447a0:
    // 0x1447a0: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x1447a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_1447a4:
    // 0x1447a4: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x1447a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_1447a8:
    // 0x1447a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1447ac:
    if (ctx->pc == 0x1447ACu) {
        ctx->pc = 0x1447B0u;
        goto label_1447b0;
    }
    ctx->pc = 0x1447A8u;
    {
        const bool branch_taken_0x1447a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1447a8) {
            ctx->pc = 0x1447BCu;
            goto label_1447bc;
        }
    }
    ctx->pc = 0x1447B0u;
label_1447b0:
    // 0x1447b0: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x1447b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_1447b4:
    // 0x1447b4: 0xc05cf10  jal         func_173C40
label_1447b8:
    if (ctx->pc == 0x1447B8u) {
        ctx->pc = 0x1447BCu;
        goto label_1447bc;
    }
    ctx->pc = 0x1447B4u;
    SET_GPR_U32(ctx, 31, 0x1447BCu);
    ctx->pc = 0x173C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173C40u, 0x1447B4u, 0x1447BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447BCu;
label_1447bc:
    // 0x1447bc: 0xc05548c  jal         func_155230
label_1447c0:
    if (ctx->pc == 0x1447C0u) {
        ctx->pc = 0x1447C4u;
        goto label_1447c4;
    }
    ctx->pc = 0x1447BCu;
    SET_GPR_U32(ctx, 31, 0x1447C4u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1447BCu, 0x1447C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447C4u;
label_1447c4:
    // 0x1447c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1447c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1447c8:
    // 0x1447c8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1447c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1447cc:
    // 0x1447cc: 0xc0553d4  jal         func_154F50
label_1447d0:
    if (ctx->pc == 0x1447D0u) {
        ctx->pc = 0x1447D4u;
        goto label_1447d4;
    }
    ctx->pc = 0x1447CCu;
    SET_GPR_U32(ctx, 31, 0x1447D4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1447CCu, 0x1447D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447D4u;
label_1447d4:
    // 0x1447d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1447d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1447d8:
    // 0x1447d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1447d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1447dc:
    // 0x1447dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1447dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1447e0:
    // 0x1447e0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1447e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1447e4:
    // 0x1447e4: 0x320f809  jalr        $t9
label_1447e8:
    if (ctx->pc == 0x1447E8u) {
        ctx->pc = 0x1447ECu;
        goto label_1447ec;
    }
    ctx->pc = 0x1447E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1447ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1447E4u, 0x1447ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1447ECu;
label_1447ec:
    // 0x1447ec: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x1447ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1447f0:
    // 0x1447f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1447f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1447f4:
    // 0x1447f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1447f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1447f8:
    // 0x1447f8: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x1447f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1447fc:
    // 0x1447fc: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x1447fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_144800:
    // 0x144800: 0xc041bc4  jal         func_106F10
label_144804:
    if (ctx->pc == 0x144804u) {
        ctx->pc = 0x144808u;
        goto label_144808;
    }
    ctx->pc = 0x144800u;
    SET_GPR_U32(ctx, 31, 0x144808u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x144800u, 0x144808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144808u;
label_144808:
    // 0x144808: 0xaf958c90  sw          $s5, -0x7370($gp)
    ctx->pc = 0x144808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U32(ctx, 21));
label_14480c:
    // 0x14480c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x14480cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144810:
    // 0x144810: 0xc047eb8  jal         func_11FAE0
label_144814:
    if (ctx->pc == 0x144814u) {
        ctx->pc = 0x144818u;
        goto label_144818;
    }
    ctx->pc = 0x144810u;
    SET_GPR_U32(ctx, 31, 0x144818u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144810u, 0x144818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144818u;
label_144818:
    // 0x144818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14481c:
    // 0x14481c: 0xc047eb0  jal         func_11FAC0
label_144820:
    if (ctx->pc == 0x144820u) {
        ctx->pc = 0x144824u;
        goto label_144824;
    }
    ctx->pc = 0x14481Cu;
    SET_GPR_U32(ctx, 31, 0x144824u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x14481Cu, 0x144824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144824u;
label_144824:
    // 0x144824: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x144824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_144828:
    // 0x144828: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x144828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_14482c:
    // 0x14482c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14482cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144830:
    // 0x144830: 0xc049b80  jal         func_126E00
label_144834:
    if (ctx->pc == 0x144834u) {
        ctx->pc = 0x144838u;
        goto label_144838;
    }
    ctx->pc = 0x144830u;
    SET_GPR_U32(ctx, 31, 0x144838u);
    ctx->pc = 0x126E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E00u, 0x144830u, 0x144838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144838u;
label_144838:
    // 0x144838: 0x100001d2  b           . + 4 + (0x1D2 << 2)
label_14483c:
    if (ctx->pc == 0x14483Cu) {
        ctx->pc = 0x144840u;
        goto label_144840;
    }
    ctx->pc = 0x144838u;
    {
        const bool branch_taken_0x144838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144838) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144840u;
label_144840:
    // 0x144840: 0x8fb00280  lw          $s0, 0x280($sp)
    ctx->pc = 0x144840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_144844:
    // 0x144844: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144848:
    // 0x144848: 0xc047eb8  jal         func_11FAE0
label_14484c:
    if (ctx->pc == 0x14484Cu) {
        ctx->pc = 0x144850u;
        goto label_144850;
    }
    ctx->pc = 0x144848u;
    SET_GPR_U32(ctx, 31, 0x144850u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144848u, 0x144850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144850u;
label_144850:
    // 0x144850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144854:
    // 0x144854: 0xc047eb0  jal         func_11FAC0
label_144858:
    if (ctx->pc == 0x144858u) {
        ctx->pc = 0x14485Cu;
        goto label_14485c;
    }
    ctx->pc = 0x144854u;
    SET_GPR_U32(ctx, 31, 0x14485Cu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x144854u, 0x14485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14485Cu;
label_14485c:
    // 0x14485c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144860:
    // 0x144860: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x144860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_144864:
    // 0x144864: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144868:
    // 0x144868: 0xc047eb8  jal         func_11FAE0
label_14486c:
    if (ctx->pc == 0x14486Cu) {
        ctx->pc = 0x144870u;
        goto label_144870;
    }
    ctx->pc = 0x144868u;
    SET_GPR_U32(ctx, 31, 0x144870u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144868u, 0x144870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144870u;
label_144870:
    // 0x144870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144874:
    // 0x144874: 0xc047eb0  jal         func_11FAC0
label_144878:
    if (ctx->pc == 0x144878u) {
        ctx->pc = 0x14487Cu;
        goto label_14487c;
    }
    ctx->pc = 0x144874u;
    SET_GPR_U32(ctx, 31, 0x14487Cu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x144874u, 0x14487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14487Cu;
label_14487c:
    // 0x14487c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_144880:
    // 0x144880: 0x120201c0  beq         $s0, $v0, . + 4 + (0x1C0 << 2)
label_144884:
    if (ctx->pc == 0x144884u) {
        ctx->pc = 0x144888u;
        goto label_144888;
    }
    ctx->pc = 0x144880u;
    {
        const bool branch_taken_0x144880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x144880) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144888u;
label_144888:
    // 0x144888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14488c:
    // 0x14488c: 0xc0ba892  jal         func_2EA248
label_144890:
    if (ctx->pc == 0x144890u) {
        ctx->pc = 0x144894u;
        goto label_144894;
    }
    ctx->pc = 0x14488Cu;
    SET_GPR_U32(ctx, 31, 0x144894u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x14488Cu, 0x144894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144894u;
label_144894:
    // 0x144894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x144894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144898:
    // 0x144898: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x144898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_14489c:
    // 0x14489c: 0xc047eb8  jal         func_11FAE0
label_1448a0:
    if (ctx->pc == 0x1448A0u) {
        ctx->pc = 0x1448A4u;
        goto label_1448a4;
    }
    ctx->pc = 0x14489Cu;
    SET_GPR_U32(ctx, 31, 0x1448A4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x14489Cu, 0x1448A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448A4u;
label_1448a4:
    // 0x1448a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1448a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1448a8:
    // 0x1448a8: 0xc047eb0  jal         func_11FAC0
label_1448ac:
    if (ctx->pc == 0x1448ACu) {
        ctx->pc = 0x1448B0u;
        goto label_1448b0;
    }
    ctx->pc = 0x1448A8u;
    SET_GPR_U32(ctx, 31, 0x1448B0u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1448A8u, 0x1448B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448B0u;
label_1448b0:
    // 0x1448b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1448b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1448b4:
    // 0x1448b4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x1448b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_1448b8:
    // 0x1448b8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1448b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1448bc:
    // 0x1448bc: 0xc041b40  jal         func_106D00
label_1448c0:
    if (ctx->pc == 0x1448C0u) {
        ctx->pc = 0x1448C4u;
        goto label_1448c4;
    }
    ctx->pc = 0x1448BCu;
    SET_GPR_U32(ctx, 31, 0x1448C4u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x1448BCu, 0x1448C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448C4u;
label_1448c4:
    // 0x1448c4: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1448c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_1448c8:
    // 0x1448c8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1448c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1448cc:
    // 0x1448cc: 0xc047eb8  jal         func_11FAE0
label_1448d0:
    if (ctx->pc == 0x1448D0u) {
        ctx->pc = 0x1448D4u;
        goto label_1448d4;
    }
    ctx->pc = 0x1448CCu;
    SET_GPR_U32(ctx, 31, 0x1448D4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1448CCu, 0x1448D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448D4u;
label_1448d4:
    // 0x1448d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1448d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1448d8:
    // 0x1448d8: 0xc047eb0  jal         func_11FAC0
label_1448dc:
    if (ctx->pc == 0x1448DCu) {
        ctx->pc = 0x1448E0u;
        goto label_1448e0;
    }
    ctx->pc = 0x1448D8u;
    SET_GPR_U32(ctx, 31, 0x1448E0u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1448D8u, 0x1448E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448E0u;
label_1448e0:
    // 0x1448e0: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x1448e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1448e4:
    // 0x1448e4: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1448e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1448e8:
    // 0x1448e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1448e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1448ec:
    // 0x1448ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1448ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1448f0:
    // 0x1448f0: 0xc041b24  jal         func_106C90
label_1448f4:
    if (ctx->pc == 0x1448F4u) {
        ctx->pc = 0x1448F8u;
        goto label_1448f8;
    }
    ctx->pc = 0x1448F0u;
    SET_GPR_U32(ctx, 31, 0x1448F8u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x1448F0u, 0x1448F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1448F8u;
label_1448f8:
    // 0x1448f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1448f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1448fc:
    // 0x1448fc: 0x0  nop
    ctx->pc = 0x1448fcu;
    // NOP
label_144900:
    // 0x144900: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x144900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_144904:
    // 0x144904: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144908:
    // 0x144908: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x144908u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14490c:
    // 0x14490c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_144910:
    if (ctx->pc == 0x144910u) {
        ctx->pc = 0x144914u;
        goto label_144914;
    }
    ctx->pc = 0x14490Cu;
    {
        const bool branch_taken_0x14490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14490c) {
            ctx->pc = 0x1449C4u;
            goto label_1449c4;
        }
    }
    ctx->pc = 0x144914u;
label_144914:
    // 0x144914: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x144914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_144918:
    // 0x144918: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x144918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_14491c:
    // 0x14491c: 0x27828c98  addiu       $v0, $gp, -0x7368
    ctx->pc = 0x14491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937752));
label_144920:
    // 0x144920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144924:
    // 0x144924: 0x8fa60204  lw          $a2, 0x204($sp)
    ctx->pc = 0x144924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_144928:
    // 0x144928: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x144928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_14492c:
    // 0x14492c: 0xc0bc3e2  jal         func_2F0F88
label_144930:
    if (ctx->pc == 0x144930u) {
        ctx->pc = 0x144934u;
        goto label_144934;
    }
    ctx->pc = 0x14492Cu;
    SET_GPR_U32(ctx, 31, 0x144934u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x14492Cu, 0x144934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144934u;
label_144934:
    // 0x144934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144938:
    // 0x144938: 0xc0434e0  jal         func_10D380
label_14493c:
    if (ctx->pc == 0x14493Cu) {
        ctx->pc = 0x144940u;
        goto label_144940;
    }
    ctx->pc = 0x144938u;
    SET_GPR_U32(ctx, 31, 0x144940u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x144938u, 0x144940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144940u;
label_144940:
    // 0x144940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144944:
    // 0x144944: 0xc0434d8  jal         func_10D360
label_144948:
    if (ctx->pc == 0x144948u) {
        ctx->pc = 0x14494Cu;
        goto label_14494c;
    }
    ctx->pc = 0x144944u;
    SET_GPR_U32(ctx, 31, 0x14494Cu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x144944u, 0x14494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14494Cu;
label_14494c:
    // 0x14494c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144950:
    // 0x144950: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x144950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_144954:
    // 0x144954: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144958:
    // 0x144958: 0xc044edc  jal         func_113B70
label_14495c:
    if (ctx->pc == 0x14495Cu) {
        ctx->pc = 0x144960u;
        goto label_144960;
    }
    ctx->pc = 0x144958u;
    SET_GPR_U32(ctx, 31, 0x144960u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x144958u, 0x144960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144960u;
label_144960:
    // 0x144960: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x144960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_144964:
    // 0x144964: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x144964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_144968:
    // 0x144968: 0x1003000f  beq         $zero, $v1, . + 4 + (0xF << 2)
label_14496c:
    if (ctx->pc == 0x14496Cu) {
        ctx->pc = 0x144970u;
        goto label_144970;
    }
    ctx->pc = 0x144968u;
    {
        const bool branch_taken_0x144968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x144968) {
            ctx->pc = 0x1449A8u;
            goto label_1449a8;
        }
    }
    ctx->pc = 0x144970u;
label_144970:
    // 0x144970: 0x8fa401fc  lw          $a0, 0x1FC($sp)
    ctx->pc = 0x144970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_144974:
    // 0x144974: 0xc0457e8  jal         func_115FA0
label_144978:
    if (ctx->pc == 0x144978u) {
        ctx->pc = 0x14497Cu;
        goto label_14497c;
    }
    ctx->pc = 0x144974u;
    SET_GPR_U32(ctx, 31, 0x14497Cu);
    ctx->pc = 0x115FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FA0u, 0x144974u, 0x14497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14497Cu;
label_14497c:
    // 0x14497c: 0x3c0342de  lui         $v1, 0x42DE
    ctx->pc = 0x14497cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17118 << 16));
label_144980:
    // 0x144980: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x144980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_144984:
    // 0x144984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144988:
    // 0x144988: 0x24050461  addiu       $a1, $zero, 0x461
    ctx->pc = 0x144988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1121));
label_14498c:
    // 0x14498c: 0xc042090  jal         func_108240
label_144990:
    if (ctx->pc == 0x144990u) {
        ctx->pc = 0x144994u;
        goto label_144994;
    }
    ctx->pc = 0x14498Cu;
    SET_GPR_U32(ctx, 31, 0x144994u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x14498Cu, 0x144994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144994u;
label_144994:
    // 0x144994: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x144994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_144998:
    // 0x144998: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x144998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_14499c:
    // 0x14499c: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x14499cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_1449a0:
    // 0x1449a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1449a4:
    if (ctx->pc == 0x1449A4u) {
        ctx->pc = 0x1449A8u;
        goto label_1449a8;
    }
    ctx->pc = 0x1449A0u;
    {
        const bool branch_taken_0x1449a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1449a0) {
            ctx->pc = 0x1449C0u;
            goto label_1449c0;
        }
    }
    ctx->pc = 0x1449A8u;
label_1449a8:
    // 0x1449a8: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x1449a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1449ac:
    // 0x1449ac: 0x3c02435e  lui         $v0, 0x435E
    ctx->pc = 0x1449acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17246 << 16));
label_1449b0:
    // 0x1449b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1449b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1449b4:
    // 0x1449b4: 0x0  nop
    ctx->pc = 0x1449b4u;
    // NOP
label_1449b8:
    // 0x1449b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1449b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1449bc:
    // 0x1449bc: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x1449bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_1449c0:
    // 0x1449c0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1449c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1449c4:
    // 0x1449c4: 0x21e082a  slt         $at, $s0, $fp
    ctx->pc = 0x1449c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1449c8:
    // 0x1449c8: 0x1020ffd2  beqz        $at, . + 4 + (-0x2E << 2)
label_1449cc:
    if (ctx->pc == 0x1449CCu) {
        ctx->pc = 0x1449D0u;
        goto label_1449d0;
    }
    ctx->pc = 0x1449C8u;
    {
        const bool branch_taken_0x1449c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1449c8) {
            ctx->pc = 0x144914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144914;
        }
    }
    ctx->pc = 0x1449D0u;
label_1449d0:
    // 0x1449d0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1449d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1449d4:
    // 0x1449d4: 0xc047eb8  jal         func_11FAE0
label_1449d8:
    if (ctx->pc == 0x1449D8u) {
        ctx->pc = 0x1449DCu;
        goto label_1449dc;
    }
    ctx->pc = 0x1449D4u;
    SET_GPR_U32(ctx, 31, 0x1449DCu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1449D4u, 0x1449DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449DCu;
label_1449dc:
    // 0x1449dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1449dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1449e0:
    // 0x1449e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1449e4:
    // 0x1449e4: 0x24050550  addiu       $a1, $zero, 0x550
    ctx->pc = 0x1449e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
label_1449e8:
    // 0x1449e8: 0xc7ac0200  lwc1        $f12, 0x200($sp)
    ctx->pc = 0x1449e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1449ec:
    // 0x1449ec: 0xc041bc4  jal         func_106F10
label_1449f0:
    if (ctx->pc == 0x1449F0u) {
        ctx->pc = 0x1449F4u;
        goto label_1449f4;
    }
    ctx->pc = 0x1449ECu;
    SET_GPR_U32(ctx, 31, 0x1449F4u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x1449ECu, 0x1449F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449F4u;
label_1449f4:
    // 0x1449f4: 0xc05548c  jal         func_155230
label_1449f8:
    if (ctx->pc == 0x1449F8u) {
        ctx->pc = 0x1449FCu;
        goto label_1449fc;
    }
    ctx->pc = 0x1449F4u;
    SET_GPR_U32(ctx, 31, 0x1449FCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1449F4u, 0x1449FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1449FCu;
label_1449fc:
    // 0x1449fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1449fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a00:
    // 0x144a00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x144a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144a04:
    // 0x144a04: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x144a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_144a08:
    // 0x144a08: 0xc0553d4  jal         func_154F50
label_144a0c:
    if (ctx->pc == 0x144A0Cu) {
        ctx->pc = 0x144A10u;
        goto label_144a10;
    }
    ctx->pc = 0x144A08u;
    SET_GPR_U32(ctx, 31, 0x144A10u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x144A08u, 0x144A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A10u;
label_144a10:
    // 0x144a10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a14:
    // 0x144a14: 0xc05c990  jal         func_172640
label_144a18:
    if (ctx->pc == 0x144A18u) {
        ctx->pc = 0x144A1Cu;
        goto label_144a1c;
    }
    ctx->pc = 0x144A14u;
    SET_GPR_U32(ctx, 31, 0x144A1Cu);
    ctx->pc = 0x172640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172640u, 0x144A14u, 0x144A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A1Cu;
label_144a1c:
    // 0x144a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a20:
    // 0x144a20: 0xc05548c  jal         func_155230
label_144a24:
    if (ctx->pc == 0x144A24u) {
        ctx->pc = 0x144A28u;
        goto label_144a28;
    }
    ctx->pc = 0x144A20u;
    SET_GPR_U32(ctx, 31, 0x144A28u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x144A20u, 0x144A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A28u;
label_144a28:
    // 0x144a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a2c:
    // 0x144a2c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x144a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_144a30:
    // 0x144a30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a34:
    // 0x144a34: 0xc0553d4  jal         func_154F50
label_144a38:
    if (ctx->pc == 0x144A38u) {
        ctx->pc = 0x144A3Cu;
        goto label_144a3c;
    }
    ctx->pc = 0x144A34u;
    SET_GPR_U32(ctx, 31, 0x144A3Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x144A34u, 0x144A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A3Cu;
label_144a3c:
    // 0x144a3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a40:
    // 0x144a40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x144a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144a44:
    // 0x144a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144a48:
    // 0x144a48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a4c:
    // 0x144a4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x144a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_144a50:
    // 0x144a50: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x144a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_144a54:
    // 0x144a54: 0x320f809  jalr        $t9
label_144a58:
    if (ctx->pc == 0x144A58u) {
        ctx->pc = 0x144A5Cu;
        goto label_144a5c;
    }
    ctx->pc = 0x144A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x144A5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144A54u, 0x144A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144A5Cu;
label_144a5c:
    // 0x144a5c: 0xc05548c  jal         func_155230
label_144a60:
    if (ctx->pc == 0x144A60u) {
        ctx->pc = 0x144A64u;
        goto label_144a64;
    }
    ctx->pc = 0x144A5Cu;
    SET_GPR_U32(ctx, 31, 0x144A64u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x144A5Cu, 0x144A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A64u;
label_144a64:
    // 0x144a64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a68:
    // 0x144a68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x144a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144a6c:
    // 0x144a6c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x144a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_144a70:
    // 0x144a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a74:
    // 0x144a74: 0xc0553d4  jal         func_154F50
label_144a78:
    if (ctx->pc == 0x144A78u) {
        ctx->pc = 0x144A7Cu;
        goto label_144a7c;
    }
    ctx->pc = 0x144A74u;
    SET_GPR_U32(ctx, 31, 0x144A7Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x144A74u, 0x144A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A7Cu;
label_144a7c:
    // 0x144a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a80:
    // 0x144a80: 0xc05cf44  jal         func_173D10
label_144a84:
    if (ctx->pc == 0x144A84u) {
        ctx->pc = 0x144A88u;
        goto label_144a88;
    }
    ctx->pc = 0x144A80u;
    SET_GPR_U32(ctx, 31, 0x144A88u);
    ctx->pc = 0x173D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D10u, 0x144A80u, 0x144A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A88u;
label_144a88:
    // 0x144a88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144a8c:
    // 0x144a8c: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x144a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_144a90:
    // 0x144a90: 0x2b880  sll         $s7, $v0, 2
    ctx->pc = 0x144a90u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_144a94:
    // 0x144a94: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x144a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_144a98:
    // 0x144a98: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x144a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_144a9c:
    // 0x144a9c: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x144a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_144aa0:
    // 0x144aa0: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x144aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_144aa4:
    // 0x144aa4: 0x8fa501f8  lw          $a1, 0x1F8($sp)
    ctx->pc = 0x144aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_144aa8:
    // 0x144aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x144aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_144aac:
    // 0x144aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144ab0:
    // 0x144ab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144ab4:
    // 0x144ab4: 0xc08cc40  jal         func_233100
label_144ab8:
    if (ctx->pc == 0x144AB8u) {
        ctx->pc = 0x144ABCu;
        goto label_144abc;
    }
    ctx->pc = 0x144AB4u;
    SET_GPR_U32(ctx, 31, 0x144ABCu);
    ctx->pc = 0x233100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233100u, 0x144AB4u, 0x144ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144ABCu;
label_144abc:
    // 0x144abc: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x144abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_144ac0:
    // 0x144ac0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x144ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_144ac4:
    // 0x144ac4: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x144ac4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_144ac8:
    // 0x144ac8: 0x27858c98  addiu       $a1, $gp, -0x7368
    ctx->pc = 0x144ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937752));
label_144acc:
    // 0x144acc: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x144accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_144ad0:
    // 0x144ad0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x144ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144ad4:
    // 0x144ad4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x144ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144ad8:
    // 0x144ad8: 0xc0bc3e2  jal         func_2F0F88
label_144adc:
    if (ctx->pc == 0x144ADCu) {
        ctx->pc = 0x144AE0u;
        goto label_144ae0;
    }
    ctx->pc = 0x144AD8u;
    SET_GPR_U32(ctx, 31, 0x144AE0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x144AD8u, 0x144AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AE0u;
label_144ae0:
    // 0x144ae0: 0xc0434e0  jal         func_10D380
label_144ae4:
    if (ctx->pc == 0x144AE4u) {
        ctx->pc = 0x144AE8u;
        goto label_144ae8;
    }
    ctx->pc = 0x144AE0u;
    SET_GPR_U32(ctx, 31, 0x144AE8u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x144AE0u, 0x144AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AE8u;
label_144ae8:
    // 0x144ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144aec:
    // 0x144aec: 0xc0434d8  jal         func_10D360
label_144af0:
    if (ctx->pc == 0x144AF0u) {
        ctx->pc = 0x144AF4u;
        goto label_144af4;
    }
    ctx->pc = 0x144AECu;
    SET_GPR_U32(ctx, 31, 0x144AF4u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x144AECu, 0x144AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144AF4u;
label_144af4:
    // 0x144af4: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x144af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_144af8:
    // 0x144af8: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x144af8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_144afc:
    // 0x144afc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x144afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_144b00:
    // 0x144b00: 0xc044edc  jal         func_113B70
label_144b04:
    if (ctx->pc == 0x144B04u) {
        ctx->pc = 0x144B08u;
        goto label_144b08;
    }
    ctx->pc = 0x144B00u;
    SET_GPR_U32(ctx, 31, 0x144B08u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x144B00u, 0x144B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B08u;
label_144b08:
    // 0x144b08: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x144b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_144b0c:
    // 0x144b0c: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x144b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_144b10:
    // 0x144b10: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_144b14:
    if (ctx->pc == 0x144B14u) {
        ctx->pc = 0x144B18u;
        goto label_144b18;
    }
    ctx->pc = 0x144B10u;
    {
        const bool branch_taken_0x144b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x144b10) {
            ctx->pc = 0x144B30u;
            goto label_144b30;
        }
    }
    ctx->pc = 0x144B18u;
label_144b18:
    // 0x144b18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x144b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_144b1c:
    // 0x144b1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144b20:
    // 0x144b20: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x144b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_144b24:
    // 0x144b24: 0xc08d48c  jal         func_235230
label_144b28:
    if (ctx->pc == 0x144B28u) {
        ctx->pc = 0x144B2Cu;
        goto label_144b2c;
    }
    ctx->pc = 0x144B24u;
    SET_GPR_U32(ctx, 31, 0x144B2Cu);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x144B24u, 0x144B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B2Cu;
label_144b2c:
    // 0x144b2c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x144b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_144b30:
    // 0x144b30: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x144b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_144b34:
    // 0x144b34: 0xc051704  jal         func_145C10
label_144b38:
    if (ctx->pc == 0x144B38u) {
        ctx->pc = 0x144B3Cu;
        goto label_144b3c;
    }
    ctx->pc = 0x144B34u;
    SET_GPR_U32(ctx, 31, 0x144B3Cu);
    ctx->pc = 0x145C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145C10u, 0x144B34u, 0x144B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B3Cu;
label_144b3c:
    // 0x144b3c: 0x10000111  b           . + 4 + (0x111 << 2)
label_144b40:
    if (ctx->pc == 0x144B40u) {
        ctx->pc = 0x144B44u;
        goto label_144b44;
    }
    ctx->pc = 0x144B3Cu;
    {
        const bool branch_taken_0x144b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144b3c) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144B44u;
label_144b44:
    // 0x144b44: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x144b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144b48:
    // 0x144b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144b4c:
    // 0x144b4c: 0xc047eb8  jal         func_11FAE0
label_144b50:
    if (ctx->pc == 0x144B50u) {
        ctx->pc = 0x144B54u;
        goto label_144b54;
    }
    ctx->pc = 0x144B4Cu;
    SET_GPR_U32(ctx, 31, 0x144B54u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x144B4Cu, 0x144B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B54u;
label_144b54:
    // 0x144b54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144b58:
    // 0x144b58: 0xc047eb0  jal         func_11FAC0
label_144b5c:
    if (ctx->pc == 0x144B5Cu) {
        ctx->pc = 0x144B60u;
        goto label_144b60;
    }
    ctx->pc = 0x144B58u;
    SET_GPR_U32(ctx, 31, 0x144B60u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x144B58u, 0x144B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B60u;
label_144b60:
    // 0x144b60: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x144b60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144b64:
    // 0x144b64: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x144b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_144b68:
    // 0x144b68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144b6c:
    // 0x144b6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_144b70:
    // 0x144b70: 0xc0aeea8  jal         func_2BBAA0
label_144b74:
    if (ctx->pc == 0x144B74u) {
        ctx->pc = 0x144B78u;
        goto label_144b78;
    }
    ctx->pc = 0x144B70u;
    SET_GPR_U32(ctx, 31, 0x144B78u);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x144B70u, 0x144B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144B78u;
label_144b78:
    // 0x144b78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x144b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144b7c:
    // 0x144b7c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x144b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_144b80:
    // 0x144b80: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x144b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_144b84:
    // 0x144b84: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x144b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_144b88:
    // 0x144b88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x144b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_144b8c:
    // 0x144b8c: 0x146200fd  bne         $v1, $v0, . + 4 + (0xFD << 2)
label_144b90:
    if (ctx->pc == 0x144B90u) {
        ctx->pc = 0x144B94u;
        goto label_144b94;
    }
    ctx->pc = 0x144B8Cu;
    {
        const bool branch_taken_0x144b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x144b8c) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144B94u;
label_144b94:
    // 0x144b94: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x144b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_144b98:
    // 0x144b98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144b9c:
    // 0x144b9c: 0x144400f9  bne         $v0, $a0, . + 4 + (0xF9 << 2)
label_144ba0:
    if (ctx->pc == 0x144BA0u) {
        ctx->pc = 0x144BA4u;
        goto label_144ba4;
    }
    ctx->pc = 0x144B9Cu;
    {
        const bool branch_taken_0x144b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x144b9c) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144BA4u;
label_144ba4:
    // 0x144ba4: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x144ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_144ba8:
    // 0x144ba8: 0x30450002  andi        $a1, $v0, 0x2
    ctx->pc = 0x144ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_144bac:
    // 0x144bac: 0x10a000f5  beqz        $a1, . + 4 + (0xF5 << 2)
label_144bb0:
    if (ctx->pc == 0x144BB0u) {
        ctx->pc = 0x144BB4u;
        goto label_144bb4;
    }
    ctx->pc = 0x144BACu;
    {
        const bool branch_taken_0x144bac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x144bac) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144BB4u;
label_144bb4:
    // 0x144bb4: 0x8f86bcc4  lw          $a2, -0x433C($gp)
    ctx->pc = 0x144bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_144bb8:
    // 0x144bb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x144bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_144bbc:
    // 0x144bbc: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x144bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_144bc0:
    // 0x144bc0: 0x144400f0  bne         $v0, $a0, . + 4 + (0xF0 << 2)
label_144bc4:
    if (ctx->pc == 0x144BC4u) {
        ctx->pc = 0x144BC8u;
        goto label_144bc8;
    }
    ctx->pc = 0x144BC0u;
    {
        const bool branch_taken_0x144bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x144bc0) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144BC8u;
label_144bc8:
    // 0x144bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_144bcc:
    // 0x144bcc: 0xc05140c  jal         func_145030
label_144bd0:
    if (ctx->pc == 0x144BD0u) {
        ctx->pc = 0x144BD4u;
        goto label_144bd4;
    }
    ctx->pc = 0x144BCCu;
    SET_GPR_U32(ctx, 31, 0x144BD4u);
    ctx->pc = 0x145030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145030u, 0x144BCCu, 0x144BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BD4u;
label_144bd4:
    // 0x144bd4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x144bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_144bd8:
    // 0x144bd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144bdc:
    // 0x144bdc: 0x108500e9  beq         $a0, $a1, . + 4 + (0xE9 << 2)
label_144be0:
    if (ctx->pc == 0x144BE0u) {
        ctx->pc = 0x144BE4u;
        goto label_144be4;
    }
    ctx->pc = 0x144BDCu;
    {
        const bool branch_taken_0x144bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x144bdc) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144BE4u;
label_144be4:
    // 0x144be4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x144be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_144be8:
    // 0x144be8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144bec:
    // 0x144bec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x144becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_144bf0:
    // 0x144bf0: 0xc085538  jal         func_2154E0
label_144bf4:
    if (ctx->pc == 0x144BF4u) {
        ctx->pc = 0x144BF8u;
        goto label_144bf8;
    }
    ctx->pc = 0x144BF0u;
    SET_GPR_U32(ctx, 31, 0x144BF8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x144BF0u, 0x144BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144BF8u;
label_144bf8:
    // 0x144bf8: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x144bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_144bfc:
    // 0x144bfc: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x144bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_144c00:
    // 0x144c00: 0xc096880  jal         func_25A200
label_144c04:
    if (ctx->pc == 0x144C04u) {
        ctx->pc = 0x144C08u;
        goto label_144c08;
    }
    ctx->pc = 0x144C00u;
    SET_GPR_U32(ctx, 31, 0x144C08u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x144C00u, 0x144C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C08u;
label_144c08:
    // 0x144c08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144c0c:
    // 0x144c0c: 0x100500dd  beq         $zero, $a1, . + 4 + (0xDD << 2)
label_144c10:
    if (ctx->pc == 0x144C10u) {
        ctx->pc = 0x144C14u;
        goto label_144c14;
    }
    ctx->pc = 0x144C0Cu;
    {
        const bool branch_taken_0x144c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x144c0c) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144C14u;
label_144c14:
    // 0x144c14: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x144c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_144c18:
    // 0x144c18: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x144c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_144c1c:
    // 0x144c1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_144c20:
    // 0x144c20: 0xc0aeea0  jal         func_2BBA80
label_144c24:
    if (ctx->pc == 0x144C24u) {
        ctx->pc = 0x144C28u;
        goto label_144c28;
    }
    ctx->pc = 0x144C20u;
    SET_GPR_U32(ctx, 31, 0x144C28u);
    ctx->pc = 0x2BBA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA80u, 0x144C20u, 0x144C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C28u;
label_144c28:
    // 0x144c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144c2c:
    // 0x144c2c: 0xc051400  jal         func_145000
label_144c30:
    if (ctx->pc == 0x144C30u) {
        ctx->pc = 0x144C34u;
        goto label_144c34;
    }
    ctx->pc = 0x144C2Cu;
    SET_GPR_U32(ctx, 31, 0x144C34u);
    ctx->pc = 0x145000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145000u, 0x144C2Cu, 0x144C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C34u;
label_144c34:
    // 0x144c34: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_144c38:
    if (ctx->pc == 0x144C38u) {
        ctx->pc = 0x144C3Cu;
        goto label_144c3c;
    }
    ctx->pc = 0x144C34u;
    {
        const bool branch_taken_0x144c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144c34) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144C3Cu;
label_144c3c:
    // 0x144c3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_144c40:
    // 0x144c40: 0xc0aeea0  jal         func_2BBA80
label_144c44:
    if (ctx->pc == 0x144C44u) {
        ctx->pc = 0x144C48u;
        goto label_144c48;
    }
    ctx->pc = 0x144C40u;
    SET_GPR_U32(ctx, 31, 0x144C48u);
    ctx->pc = 0x2BBA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA80u, 0x144C40u, 0x144C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C48u;
label_144c48:
    // 0x144c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144c4c:
    // 0x144c4c: 0xc0513f8  jal         func_144FE0
label_144c50:
    if (ctx->pc == 0x144C50u) {
        ctx->pc = 0x144C54u;
        goto label_144c54;
    }
    ctx->pc = 0x144C4Cu;
    SET_GPR_U32(ctx, 31, 0x144C54u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x144C4Cu, 0x144C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C54u;
label_144c54:
    // 0x144c54: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x144c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_144c58:
    // 0x144c58: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x144c58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_144c5c:
    // 0x144c5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x144c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144c60:
    // 0x144c60: 0xafa401e4  sw          $a0, 0x1E4($sp)
    ctx->pc = 0x144c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
label_144c64:
    // 0x144c64: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x144c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_144c68:
    // 0x144c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144c6c:
    // 0x144c6c: 0xc09d274  jal         func_2749D0
label_144c70:
    if (ctx->pc == 0x144C70u) {
        ctx->pc = 0x144C74u;
        goto label_144c74;
    }
    ctx->pc = 0x144C6Cu;
    SET_GPR_U32(ctx, 31, 0x144C74u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x144C6Cu, 0x144C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C74u;
label_144c74:
    // 0x144c74: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x144c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_144c78:
    // 0x144c78: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x144c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_144c7c:
    // 0x144c7c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x144c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_144c80:
    // 0x144c80: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0
    ctx->pc = 0x144c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
label_144c84:
    // 0x144c84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144c88:
    // 0x144c88: 0xc047328  jal         func_11CCA0
label_144c8c:
    if (ctx->pc == 0x144C8Cu) {
        ctx->pc = 0x144C90u;
        goto label_144c90;
    }
    ctx->pc = 0x144C88u;
    SET_GPR_U32(ctx, 31, 0x144C90u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x144C88u, 0x144C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144C90u;
label_144c90:
    // 0x144c90: 0xa3a2025f  sb          $v0, 0x25F($sp)
    ctx->pc = 0x144c90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 607), (uint8_t)GPR_U32(ctx, 2));
label_144c94:
    // 0x144c94: 0x93a2025f  lbu         $v0, 0x25F($sp)
    ctx->pc = 0x144c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 607)));
label_144c98:
    // 0x144c98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x144c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_144c9c:
    // 0x144c9c: 0x144000b9  bnez        $v0, . + 4 + (0xB9 << 2)
label_144ca0:
    if (ctx->pc == 0x144CA0u) {
        ctx->pc = 0x144CA4u;
        goto label_144ca4;
    }
    ctx->pc = 0x144C9Cu;
    {
        const bool branch_taken_0x144c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144c9c) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144CA4u;
label_144ca4:
    // 0x144ca4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x144ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_144ca8:
    // 0x144ca8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x144ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_144cac:
    // 0x144cac: 0x144400b5  bne         $v0, $a0, . + 4 + (0xB5 << 2)
label_144cb0:
    if (ctx->pc == 0x144CB0u) {
        ctx->pc = 0x144CB4u;
        goto label_144cb4;
    }
    ctx->pc = 0x144CACu;
    {
        const bool branch_taken_0x144cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x144cac) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144CB4u;
label_144cb4:
    // 0x144cb4: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x144cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_144cb8:
    // 0x144cb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x144cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144cbc:
    // 0x144cbc: 0xc096880  jal         func_25A200
label_144cc0:
    if (ctx->pc == 0x144CC0u) {
        ctx->pc = 0x144CC4u;
        goto label_144cc4;
    }
    ctx->pc = 0x144CBCu;
    SET_GPR_U32(ctx, 31, 0x144CC4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x144CBCu, 0x144CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CC4u;
label_144cc4:
    // 0x144cc4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x144cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_144cc8:
    // 0x144cc8: 0x144300ae  bne         $v0, $v1, . + 4 + (0xAE << 2)
label_144ccc:
    if (ctx->pc == 0x144CCCu) {
        ctx->pc = 0x144CD0u;
        goto label_144cd0;
    }
    ctx->pc = 0x144CC8u;
    {
        const bool branch_taken_0x144cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x144cc8) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144CD0u;
label_144cd0:
    // 0x144cd0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x144cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_144cd4:
    // 0x144cd4: 0xc085530  jal         func_2154C0
label_144cd8:
    if (ctx->pc == 0x144CD8u) {
        ctx->pc = 0x144CDCu;
        goto label_144cdc;
    }
    ctx->pc = 0x144CD4u;
    SET_GPR_U32(ctx, 31, 0x144CDCu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x144CD4u, 0x144CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CDCu;
label_144cdc:
    // 0x144cdc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x144cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_144ce0:
    // 0x144ce0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x144ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_144ce4:
    // 0x144ce4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x144ce4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_144ce8:
    // 0x144ce8: 0x144400a6  bne         $v0, $a0, . + 4 + (0xA6 << 2)
label_144cec:
    if (ctx->pc == 0x144CECu) {
        ctx->pc = 0x144CF0u;
        goto label_144cf0;
    }
    ctx->pc = 0x144CE8u;
    {
        const bool branch_taken_0x144ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x144ce8) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144CF0u;
label_144cf0:
    // 0x144cf0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x144cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_144cf4:
    // 0x144cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144cf8:
    // 0x144cf8: 0xc048094  jal         func_120250
label_144cfc:
    if (ctx->pc == 0x144CFCu) {
        ctx->pc = 0x144D00u;
        goto label_144d00;
    }
    ctx->pc = 0x144CF8u;
    SET_GPR_U32(ctx, 31, 0x144D00u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x144CF8u, 0x144D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D00u;
label_144d00:
    // 0x144d00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144d04:
    // 0x144d04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_144d08:
    // 0x144d08: 0x24a52ac0  addiu       $a1, $a1, 0x2AC0
    ctx->pc = 0x144d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10944));
label_144d0c:
    // 0x144d0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144d10:
    // 0x144d10: 0xc047970  jal         func_11E5C0
label_144d14:
    if (ctx->pc == 0x144D14u) {
        ctx->pc = 0x144D18u;
        goto label_144d18;
    }
    ctx->pc = 0x144D10u;
    SET_GPR_U32(ctx, 31, 0x144D18u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x144D10u, 0x144D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D18u;
label_144d18:
    // 0x144d18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x144d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144d1c:
    // 0x144d1c: 0x2a810012  slti        $at, $s4, 0x12
    ctx->pc = 0x144d1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)18) ? 1 : 0);
label_144d20:
    // 0x144d20: 0x14200098  bnez        $at, . + 4 + (0x98 << 2)
label_144d24:
    if (ctx->pc == 0x144D24u) {
        ctx->pc = 0x144D28u;
        goto label_144d28;
    }
    ctx->pc = 0x144D20u;
    {
        const bool branch_taken_0x144d20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x144d20) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144D28u;
label_144d28:
    // 0x144d28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_144d2c:
    // 0x144d2c: 0xc0513f0  jal         func_144FC0
label_144d30:
    if (ctx->pc == 0x144D30u) {
        ctx->pc = 0x144D34u;
        goto label_144d34;
    }
    ctx->pc = 0x144D2Cu;
    SET_GPR_U32(ctx, 31, 0x144D34u);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x144D2Cu, 0x144D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D34u;
label_144d34:
    // 0x144d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144d38:
    // 0x144d38: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x144d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_144d3c:
    // 0x144d3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144d40:
    // 0x144d40: 0x14440035  bne         $v0, $a0, . + 4 + (0x35 << 2)
label_144d44:
    if (ctx->pc == 0x144D44u) {
        ctx->pc = 0x144D48u;
        goto label_144d48;
    }
    ctx->pc = 0x144D40u;
    {
        const bool branch_taken_0x144d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x144d40) {
            ctx->pc = 0x144E18u;
            goto label_144e18;
        }
    }
    ctx->pc = 0x144D48u;
label_144d48:
    // 0x144d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_144d4c:
    // 0x144d4c: 0x0  nop
    ctx->pc = 0x144d4cu;
    // NOP
label_144d50:
    // 0x144d50: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x144d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_144d54:
    // 0x144d54: 0x2a850055  slti        $a1, $s4, 0x55
    ctx->pc = 0x144d54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)85) ? 1 : 0);
label_144d58:
    // 0x144d58: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_144d5c:
    if (ctx->pc == 0x144D5Cu) {
        ctx->pc = 0x144D60u;
        goto label_144d60;
    }
    ctx->pc = 0x144D58u;
    {
        const bool branch_taken_0x144d58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x144d58) {
            ctx->pc = 0x144D78u;
            goto label_144d78;
        }
    }
    ctx->pc = 0x144D60u;
label_144d60:
    // 0x144d60: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x144d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_144d64:
    // 0x144d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_144d68:
    // 0x144d68: 0x0  nop
    ctx->pc = 0x144d68u;
    // NOP
label_144d6c:
    // 0x144d6c: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x144d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_144d70:
    // 0x144d70: 0x10000008  b           . + 4 + (0x8 << 2)
label_144d74:
    if (ctx->pc == 0x144D74u) {
        ctx->pc = 0x144D78u;
        goto label_144d78;
    }
    ctx->pc = 0x144D70u;
    {
        const bool branch_taken_0x144d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144d70) {
            ctx->pc = 0x144D94u;
            goto label_144d94;
        }
    }
    ctx->pc = 0x144D78u;
label_144d78:
    // 0x144d78: 0x2a820044  slti        $v0, $s4, 0x44
    ctx->pc = 0x144d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)68) ? 1 : 0);
label_144d7c:
    // 0x144d7c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_144d80:
    if (ctx->pc == 0x144D80u) {
        ctx->pc = 0x144D84u;
        goto label_144d84;
    }
    ctx->pc = 0x144D7Cu;
    {
        const bool branch_taken_0x144d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x144d7c) {
            ctx->pc = 0x144D94u;
            goto label_144d94;
        }
    }
    ctx->pc = 0x144D84u;
label_144d84:
    // 0x144d84: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x144d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_144d88:
    // 0x144d88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x144d88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_144d8c:
    // 0x144d8c: 0x0  nop
    ctx->pc = 0x144d8cu;
    // NOP
label_144d90:
    // 0x144d90: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x144d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_144d94:
    // 0x144d94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x144d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_144d98:
    // 0x144d98: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x144d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_144d9c:
    // 0x144d9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_144da0:
    // 0x144da0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_144da4:
    if (ctx->pc == 0x144DA4u) {
        ctx->pc = 0x144DA8u;
        goto label_144da8;
    }
    ctx->pc = 0x144DA0u;
    {
        const bool branch_taken_0x144da0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x144da0) {
            ctx->pc = 0x144E18u;
            goto label_144e18;
        }
    }
    ctx->pc = 0x144DA8u;
label_144da8:
    // 0x144da8: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x144da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144dac:
    // 0x144dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144db0:
    // 0x144db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144db4:
    // 0x144db4: 0xc08d95c  jal         func_236570
label_144db8:
    if (ctx->pc == 0x144DB8u) {
        ctx->pc = 0x144DBCu;
        goto label_144dbc;
    }
    ctx->pc = 0x144DB4u;
    SET_GPR_U32(ctx, 31, 0x144DBCu);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x144DB4u, 0x144DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DBCu;
label_144dbc:
    // 0x144dbc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x144dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_144dc0:
    // 0x144dc0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x144dc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_144dc4:
    // 0x144dc4: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x144dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_144dc8:
    // 0x144dc8: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x144dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_144dcc:
    // 0x144dcc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x144dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_144dd0:
    // 0x144dd0: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
label_144dd4:
    if (ctx->pc == 0x144DD4u) {
        ctx->pc = 0x144DD8u;
        goto label_144dd8;
    }
    ctx->pc = 0x144DD0u;
    {
        const bool branch_taken_0x144dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x144dd0) {
            ctx->pc = 0x144E18u;
            goto label_144e18;
        }
    }
    ctx->pc = 0x144DD8u;
label_144dd8:
    // 0x144dd8: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x144dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_144ddc:
    // 0x144ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144de0:
    // 0x144de0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x144de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_144de4:
    // 0x144de4: 0xc085538  jal         func_2154E0
label_144de8:
    if (ctx->pc == 0x144DE8u) {
        ctx->pc = 0x144DECu;
        goto label_144dec;
    }
    ctx->pc = 0x144DE4u;
    SET_GPR_U32(ctx, 31, 0x144DECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x144DE4u, 0x144DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DECu;
label_144dec:
    // 0x144dec: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x144decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_144df0:
    // 0x144df0: 0xc7b401dc  lwc1        $f20, 0x1DC($sp)
    ctx->pc = 0x144df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_144df4:
    // 0x144df4: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x144df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_144df8:
    // 0x144df8: 0xc040aa8  jal         func_102AA0
label_144dfc:
    if (ctx->pc == 0x144DFCu) {
        ctx->pc = 0x144E00u;
        goto label_144e00;
    }
    ctx->pc = 0x144DF8u;
    SET_GPR_U32(ctx, 31, 0x144E00u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x144DF8u, 0x144E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E00u;
label_144e00:
    // 0x144e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144e04:
    // 0x144e04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x144e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_144e08:
    // 0x144e08: 0xc040a90  jal         func_102A40
label_144e0c:
    if (ctx->pc == 0x144E0Cu) {
        ctx->pc = 0x144E10u;
        goto label_144e10;
    }
    ctx->pc = 0x144E08u;
    SET_GPR_U32(ctx, 31, 0x144E10u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x144E08u, 0x144E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E10u;
label_144e10:
    // 0x144e10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x144e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_144e14:
    // 0x144e14: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x144e14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_144e18:
    // 0x144e18: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_144e1c:
    // 0x144e1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x144e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144e20:
    // 0x144e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144e24:
    // 0x144e24: 0xc08d95c  jal         func_236570
label_144e28:
    if (ctx->pc == 0x144E28u) {
        ctx->pc = 0x144E2Cu;
        goto label_144e2c;
    }
    ctx->pc = 0x144E24u;
    SET_GPR_U32(ctx, 31, 0x144E2Cu);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x144E24u, 0x144E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E2Cu;
label_144e2c:
    // 0x144e2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144e30:
    // 0x144e30: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x144e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
label_144e34:
    // 0x144e34: 0x8fa601d0  lw          $a2, 0x1D0($sp)
    ctx->pc = 0x144e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_144e38:
    // 0x144e38: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x144e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_144e3c:
    // 0x144e3c: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
label_144e40:
    if (ctx->pc == 0x144E40u) {
        ctx->pc = 0x144E44u;
        goto label_144e44;
    }
    ctx->pc = 0x144E3Cu;
    {
        const bool branch_taken_0x144e3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x144e3c) {
            ctx->pc = 0x144E70u;
            goto label_144e70;
        }
    }
    ctx->pc = 0x144E44u;
label_144e44:
    // 0x144e44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x144e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_144e48:
    // 0x144e48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x144e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_144e4c:
    // 0x144e4c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x144e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_144e50:
    // 0x144e50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144e54:
    // 0x144e54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x144e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_144e58:
    // 0x144e58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x144e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144e5c:
    // 0x144e5c: 0xc08d69c  jal         func_235A70
label_144e60:
    if (ctx->pc == 0x144E60u) {
        ctx->pc = 0x144E64u;
        goto label_144e64;
    }
    ctx->pc = 0x144E5Cu;
    SET_GPR_U32(ctx, 31, 0x144E64u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x144E5Cu, 0x144E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E64u;
label_144e64:
    // 0x144e64: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x144e64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144e68:
    // 0x144e68: 0x10000046  b           . + 4 + (0x46 << 2)
label_144e6c:
    if (ctx->pc == 0x144E6Cu) {
        ctx->pc = 0x144E70u;
        goto label_144e70;
    }
    ctx->pc = 0x144E68u;
    {
        const bool branch_taken_0x144e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e68) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144E70u;
label_144e70:
    // 0x144e70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_144e74:
    // 0x144e74: 0xc0513f0  jal         func_144FC0
label_144e78:
    if (ctx->pc == 0x144E78u) {
        ctx->pc = 0x144E7Cu;
        goto label_144e7c;
    }
    ctx->pc = 0x144E74u;
    SET_GPR_U32(ctx, 31, 0x144E7Cu);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x144E74u, 0x144E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E7Cu;
label_144e7c:
    // 0x144e7c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x144e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_144e80:
    // 0x144e80: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
label_144e84:
    if (ctx->pc == 0x144E84u) {
        ctx->pc = 0x144E88u;
        goto label_144e88;
    }
    ctx->pc = 0x144E80u;
    {
        const bool branch_taken_0x144e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e80) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144E88u;
label_144e88:
    // 0x144e88: 0x2a810044  slti        $at, $s4, 0x44
    ctx->pc = 0x144e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)68) ? 1 : 0);
label_144e8c:
    // 0x144e8c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_144e90:
    if (ctx->pc == 0x144E90u) {
        ctx->pc = 0x144E94u;
        goto label_144e94;
    }
    ctx->pc = 0x144E8Cu;
    {
        const bool branch_taken_0x144e8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e8c) {
            ctx->pc = 0x144EB4u;
            goto label_144eb4;
        }
    }
    ctx->pc = 0x144E94u;
label_144e94:
    // 0x144e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144e98:
    // 0x144e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144e9c:
    // 0x144e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144ea0:
    // 0x144ea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144ea4:
    // 0x144ea4: 0xc08d4a4  jal         func_235290
label_144ea8:
    if (ctx->pc == 0x144EA8u) {
        ctx->pc = 0x144EACu;
        goto label_144eac;
    }
    ctx->pc = 0x144EA4u;
    SET_GPR_U32(ctx, 31, 0x144EACu);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x144EA4u, 0x144EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EACu;
label_144eac:
    // 0x144eac: 0x10000035  b           . + 4 + (0x35 << 2)
label_144eb0:
    if (ctx->pc == 0x144EB0u) {
        ctx->pc = 0x144EB4u;
        goto label_144eb4;
    }
    ctx->pc = 0x144EACu;
    {
        const bool branch_taken_0x144eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144eac) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144EB4u;
label_144eb4:
    // 0x144eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_144eb8:
    // 0x144eb8: 0x0  nop
    ctx->pc = 0x144eb8u;
    // NOP
label_144ebc:
    // 0x144ebc: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x144ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_144ec0:
    // 0x144ec0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x144ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_144ec4:
    // 0x144ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144ec8:
    // 0x144ec8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x144ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_144ecc:
    // 0x144ecc: 0xc085538  jal         func_2154E0
label_144ed0:
    if (ctx->pc == 0x144ED0u) {
        ctx->pc = 0x144ED4u;
        goto label_144ed4;
    }
    ctx->pc = 0x144ECCu;
    SET_GPR_U32(ctx, 31, 0x144ED4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x144ECCu, 0x144ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144ED4u;
label_144ed4:
    // 0x144ed4: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x144ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_144ed8:
    // 0x144ed8: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x144ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_144edc:
    // 0x144edc: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_144ee0:
    if (ctx->pc == 0x144EE0u) {
        ctx->pc = 0x144EE4u;
        goto label_144ee4;
    }
    ctx->pc = 0x144EDCu;
    {
        const bool branch_taken_0x144edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x144edc) {
            ctx->pc = 0x144EFCu;
            goto label_144efc;
        }
    }
    ctx->pc = 0x144EE4u;
label_144ee4:
    // 0x144ee4: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x144ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_144ee8:
    // 0x144ee8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x144ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_144eec:
    // 0x144eec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144ef0:
    // 0x144ef0: 0xc0980ac  jal         func_2602B0
label_144ef4:
    if (ctx->pc == 0x144EF4u) {
        ctx->pc = 0x144EF8u;
        goto label_144ef8;
    }
    ctx->pc = 0x144EF0u;
    SET_GPR_U32(ctx, 31, 0x144EF8u);
    ctx->pc = 0x2602B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2602B0u, 0x144EF0u, 0x144EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144EF8u;
label_144ef8:
    // 0x144ef8: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x144ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_144efc:
    // 0x144efc: 0x2682ffbd  addiu       $v0, $s4, -0x43
    ctx->pc = 0x144efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967229));
label_144f00:
    // 0x144f00: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x144f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_144f04:
    // 0x144f04: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x144f04u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_144f08:
    // 0x144f08: 0x9812  mflo        $s3
    ctx->pc = 0x144f08u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_144f0c:
    // 0x144f0c: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x144f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_144f10:
    // 0x144f10: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x144f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_144f14:
    // 0x144f14: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x144f14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_144f18:
    // 0x144f18: 0xc7a201cc  lwc1        $f2, 0x1CC($sp)
    ctx->pc = 0x144f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_144f1c:
    // 0x144f1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x144f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_144f20:
    // 0x144f20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x144f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_144f24:
    // 0x144f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x144f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_144f28:
    // 0x144f28: 0x0  nop
    ctx->pc = 0x144f28u;
    // NOP
label_144f2c:
    // 0x144f2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x144f2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_144f30:
    // 0x144f30: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x144f30u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_144f34:
    // 0x144f34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x144f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_144f38:
    // 0x144f38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x144f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_144f3c:
    // 0x144f3c: 0x0  nop
    ctx->pc = 0x144f3cu;
    // NOP
label_144f40:
    // 0x144f40: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x144f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_144f44:
    // 0x144f44: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x144f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_144f48:
    // 0x144f48: 0x8fa501c4  lw          $a1, 0x1C4($sp)
    ctx->pc = 0x144f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_144f4c:
    // 0x144f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144f50:
    // 0x144f50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x144f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144f54:
    // 0x144f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144f58:
    // 0x144f58: 0xc08d4a4  jal         func_235290
label_144f5c:
    if (ctx->pc == 0x144F5Cu) {
        ctx->pc = 0x144F60u;
        goto label_144f60;
    }
    ctx->pc = 0x144F58u;
    SET_GPR_U32(ctx, 31, 0x144F60u);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x144F58u, 0x144F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F60u;
label_144f60:
    // 0x144f60: 0x10000008  b           . + 4 + (0x8 << 2)
label_144f64:
    if (ctx->pc == 0x144F64u) {
        ctx->pc = 0x144F68u;
        goto label_144f68;
    }
    ctx->pc = 0x144F60u;
    {
        const bool branch_taken_0x144f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x144f60) {
            ctx->pc = 0x144F84u;
            goto label_144f84;
        }
    }
    ctx->pc = 0x144F68u;
label_144f68:
    // 0x144f68: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x144f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_144f6c:
    // 0x144f6c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x144f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_144f70:
    // 0x144f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144f74:
    // 0x144f74: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x144f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_144f78:
    // 0x144f78: 0xc051738  jal         func_145CE0
label_144f7c:
    if (ctx->pc == 0x144F7Cu) {
        ctx->pc = 0x144F80u;
        goto label_144f80;
    }
    ctx->pc = 0x144F78u;
    SET_GPR_U32(ctx, 31, 0x144F80u);
    ctx->pc = 0x145CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145CE0u, 0x144F78u, 0x144F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F80u;
label_144f80:
    // 0x144f80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x144f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144f84:
    // 0x144f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144f88:
    // 0x144f88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x144f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_144f8c:
    // 0x144f8c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x144f8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_144f90:
    // 0x144f90: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x144f90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_144f94:
    // 0x144f94: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x144f94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_144f98:
    // 0x144f98: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x144f98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_144f9c:
    // 0x144f9c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x144f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_144fa0:
    // 0x144fa0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x144fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_144fa4:
    // 0x144fa4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x144fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_144fa8:
    // 0x144fa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x144fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_144fac:
    // 0x144fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x144facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_144fb0:
    // 0x144fb0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x144fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_144fb4:
    // 0x144fb4: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x144fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_144fb8:
    // 0x144fb8: 0x3e00008  jr          $ra
label_144fbc:
    if (ctx->pc == 0x144FBCu) {
        ctx->pc = 0x144FC0u;
        goto label_fallthrough_0x144fb8;
    }
    ctx->pc = 0x144FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x144fb8:
    ctx->pc = 0x144FC0u;
}
