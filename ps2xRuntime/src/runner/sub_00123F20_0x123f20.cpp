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

// Function: sub_00123F20
// Address: 0x123f20 - 0x124e10
void sub_00123F20_0x123f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123F20_0x123f20");
#endif

    switch (ctx->pc) {
        case 0x123f20u: goto label_123f20;
        case 0x123f24u: goto label_123f24;
        case 0x123f28u: goto label_123f28;
        case 0x123f2cu: goto label_123f2c;
        case 0x123f30u: goto label_123f30;
        case 0x123f34u: goto label_123f34;
        case 0x123f38u: goto label_123f38;
        case 0x123f3cu: goto label_123f3c;
        case 0x123f40u: goto label_123f40;
        case 0x123f44u: goto label_123f44;
        case 0x123f48u: goto label_123f48;
        case 0x123f4cu: goto label_123f4c;
        case 0x123f50u: goto label_123f50;
        case 0x123f54u: goto label_123f54;
        case 0x123f58u: goto label_123f58;
        case 0x123f5cu: goto label_123f5c;
        case 0x123f60u: goto label_123f60;
        case 0x123f64u: goto label_123f64;
        case 0x123f68u: goto label_123f68;
        case 0x123f6cu: goto label_123f6c;
        case 0x123f70u: goto label_123f70;
        case 0x123f74u: goto label_123f74;
        case 0x123f78u: goto label_123f78;
        case 0x123f7cu: goto label_123f7c;
        case 0x123f80u: goto label_123f80;
        case 0x123f84u: goto label_123f84;
        case 0x123f88u: goto label_123f88;
        case 0x123f8cu: goto label_123f8c;
        case 0x123f90u: goto label_123f90;
        case 0x123f94u: goto label_123f94;
        case 0x123f98u: goto label_123f98;
        case 0x123f9cu: goto label_123f9c;
        case 0x123fa0u: goto label_123fa0;
        case 0x123fa4u: goto label_123fa4;
        case 0x123fa8u: goto label_123fa8;
        case 0x123facu: goto label_123fac;
        case 0x123fb0u: goto label_123fb0;
        case 0x123fb4u: goto label_123fb4;
        case 0x123fb8u: goto label_123fb8;
        case 0x123fbcu: goto label_123fbc;
        case 0x123fc0u: goto label_123fc0;
        case 0x123fc4u: goto label_123fc4;
        case 0x123fc8u: goto label_123fc8;
        case 0x123fccu: goto label_123fcc;
        case 0x123fd0u: goto label_123fd0;
        case 0x123fd4u: goto label_123fd4;
        case 0x123fd8u: goto label_123fd8;
        case 0x123fdcu: goto label_123fdc;
        case 0x123fe0u: goto label_123fe0;
        case 0x123fe4u: goto label_123fe4;
        case 0x123fe8u: goto label_123fe8;
        case 0x123fecu: goto label_123fec;
        case 0x123ff0u: goto label_123ff0;
        case 0x123ff4u: goto label_123ff4;
        case 0x123ff8u: goto label_123ff8;
        case 0x123ffcu: goto label_123ffc;
        case 0x124000u: goto label_124000;
        case 0x124004u: goto label_124004;
        case 0x124008u: goto label_124008;
        case 0x12400cu: goto label_12400c;
        case 0x124010u: goto label_124010;
        case 0x124014u: goto label_124014;
        case 0x124018u: goto label_124018;
        case 0x12401cu: goto label_12401c;
        case 0x124020u: goto label_124020;
        case 0x124024u: goto label_124024;
        case 0x124028u: goto label_124028;
        case 0x12402cu: goto label_12402c;
        case 0x124030u: goto label_124030;
        case 0x124034u: goto label_124034;
        case 0x124038u: goto label_124038;
        case 0x12403cu: goto label_12403c;
        case 0x124040u: goto label_124040;
        case 0x124044u: goto label_124044;
        case 0x124048u: goto label_124048;
        case 0x12404cu: goto label_12404c;
        case 0x124050u: goto label_124050;
        case 0x124054u: goto label_124054;
        case 0x124058u: goto label_124058;
        case 0x12405cu: goto label_12405c;
        case 0x124060u: goto label_124060;
        case 0x124064u: goto label_124064;
        case 0x124068u: goto label_124068;
        case 0x12406cu: goto label_12406c;
        case 0x124070u: goto label_124070;
        case 0x124074u: goto label_124074;
        case 0x124078u: goto label_124078;
        case 0x12407cu: goto label_12407c;
        case 0x124080u: goto label_124080;
        case 0x124084u: goto label_124084;
        case 0x124088u: goto label_124088;
        case 0x12408cu: goto label_12408c;
        case 0x124090u: goto label_124090;
        case 0x124094u: goto label_124094;
        case 0x124098u: goto label_124098;
        case 0x12409cu: goto label_12409c;
        case 0x1240a0u: goto label_1240a0;
        case 0x1240a4u: goto label_1240a4;
        case 0x1240a8u: goto label_1240a8;
        case 0x1240acu: goto label_1240ac;
        case 0x1240b0u: goto label_1240b0;
        case 0x1240b4u: goto label_1240b4;
        case 0x1240b8u: goto label_1240b8;
        case 0x1240bcu: goto label_1240bc;
        case 0x1240c0u: goto label_1240c0;
        case 0x1240c4u: goto label_1240c4;
        case 0x1240c8u: goto label_1240c8;
        case 0x1240ccu: goto label_1240cc;
        case 0x1240d0u: goto label_1240d0;
        case 0x1240d4u: goto label_1240d4;
        case 0x1240d8u: goto label_1240d8;
        case 0x1240dcu: goto label_1240dc;
        case 0x1240e0u: goto label_1240e0;
        case 0x1240e4u: goto label_1240e4;
        case 0x1240e8u: goto label_1240e8;
        case 0x1240ecu: goto label_1240ec;
        case 0x1240f0u: goto label_1240f0;
        case 0x1240f4u: goto label_1240f4;
        case 0x1240f8u: goto label_1240f8;
        case 0x1240fcu: goto label_1240fc;
        case 0x124100u: goto label_124100;
        case 0x124104u: goto label_124104;
        case 0x124108u: goto label_124108;
        case 0x12410cu: goto label_12410c;
        case 0x124110u: goto label_124110;
        case 0x124114u: goto label_124114;
        case 0x124118u: goto label_124118;
        case 0x12411cu: goto label_12411c;
        case 0x124120u: goto label_124120;
        case 0x124124u: goto label_124124;
        case 0x124128u: goto label_124128;
        case 0x12412cu: goto label_12412c;
        case 0x124130u: goto label_124130;
        case 0x124134u: goto label_124134;
        case 0x124138u: goto label_124138;
        case 0x12413cu: goto label_12413c;
        case 0x124140u: goto label_124140;
        case 0x124144u: goto label_124144;
        case 0x124148u: goto label_124148;
        case 0x12414cu: goto label_12414c;
        case 0x124150u: goto label_124150;
        case 0x124154u: goto label_124154;
        case 0x124158u: goto label_124158;
        case 0x12415cu: goto label_12415c;
        case 0x124160u: goto label_124160;
        case 0x124164u: goto label_124164;
        case 0x124168u: goto label_124168;
        case 0x12416cu: goto label_12416c;
        case 0x124170u: goto label_124170;
        case 0x124174u: goto label_124174;
        case 0x124178u: goto label_124178;
        case 0x12417cu: goto label_12417c;
        case 0x124180u: goto label_124180;
        case 0x124184u: goto label_124184;
        case 0x124188u: goto label_124188;
        case 0x12418cu: goto label_12418c;
        case 0x124190u: goto label_124190;
        case 0x124194u: goto label_124194;
        case 0x124198u: goto label_124198;
        case 0x12419cu: goto label_12419c;
        case 0x1241a0u: goto label_1241a0;
        case 0x1241a4u: goto label_1241a4;
        case 0x1241a8u: goto label_1241a8;
        case 0x1241acu: goto label_1241ac;
        case 0x1241b0u: goto label_1241b0;
        case 0x1241b4u: goto label_1241b4;
        case 0x1241b8u: goto label_1241b8;
        case 0x1241bcu: goto label_1241bc;
        case 0x1241c0u: goto label_1241c0;
        case 0x1241c4u: goto label_1241c4;
        case 0x1241c8u: goto label_1241c8;
        case 0x1241ccu: goto label_1241cc;
        case 0x1241d0u: goto label_1241d0;
        case 0x1241d4u: goto label_1241d4;
        case 0x1241d8u: goto label_1241d8;
        case 0x1241dcu: goto label_1241dc;
        case 0x1241e0u: goto label_1241e0;
        case 0x1241e4u: goto label_1241e4;
        case 0x1241e8u: goto label_1241e8;
        case 0x1241ecu: goto label_1241ec;
        case 0x1241f0u: goto label_1241f0;
        case 0x1241f4u: goto label_1241f4;
        case 0x1241f8u: goto label_1241f8;
        case 0x1241fcu: goto label_1241fc;
        case 0x124200u: goto label_124200;
        case 0x124204u: goto label_124204;
        case 0x124208u: goto label_124208;
        case 0x12420cu: goto label_12420c;
        case 0x124210u: goto label_124210;
        case 0x124214u: goto label_124214;
        case 0x124218u: goto label_124218;
        case 0x12421cu: goto label_12421c;
        case 0x124220u: goto label_124220;
        case 0x124224u: goto label_124224;
        case 0x124228u: goto label_124228;
        case 0x12422cu: goto label_12422c;
        case 0x124230u: goto label_124230;
        case 0x124234u: goto label_124234;
        case 0x124238u: goto label_124238;
        case 0x12423cu: goto label_12423c;
        case 0x124240u: goto label_124240;
        case 0x124244u: goto label_124244;
        case 0x124248u: goto label_124248;
        case 0x12424cu: goto label_12424c;
        case 0x124250u: goto label_124250;
        case 0x124254u: goto label_124254;
        case 0x124258u: goto label_124258;
        case 0x12425cu: goto label_12425c;
        case 0x124260u: goto label_124260;
        case 0x124264u: goto label_124264;
        case 0x124268u: goto label_124268;
        case 0x12426cu: goto label_12426c;
        case 0x124270u: goto label_124270;
        case 0x124274u: goto label_124274;
        case 0x124278u: goto label_124278;
        case 0x12427cu: goto label_12427c;
        case 0x124280u: goto label_124280;
        case 0x124284u: goto label_124284;
        case 0x124288u: goto label_124288;
        case 0x12428cu: goto label_12428c;
        case 0x124290u: goto label_124290;
        case 0x124294u: goto label_124294;
        case 0x124298u: goto label_124298;
        case 0x12429cu: goto label_12429c;
        case 0x1242a0u: goto label_1242a0;
        case 0x1242a4u: goto label_1242a4;
        case 0x1242a8u: goto label_1242a8;
        case 0x1242acu: goto label_1242ac;
        case 0x1242b0u: goto label_1242b0;
        case 0x1242b4u: goto label_1242b4;
        case 0x1242b8u: goto label_1242b8;
        case 0x1242bcu: goto label_1242bc;
        case 0x1242c0u: goto label_1242c0;
        case 0x1242c4u: goto label_1242c4;
        case 0x1242c8u: goto label_1242c8;
        case 0x1242ccu: goto label_1242cc;
        case 0x1242d0u: goto label_1242d0;
        case 0x1242d4u: goto label_1242d4;
        case 0x1242d8u: goto label_1242d8;
        case 0x1242dcu: goto label_1242dc;
        case 0x1242e0u: goto label_1242e0;
        case 0x1242e4u: goto label_1242e4;
        case 0x1242e8u: goto label_1242e8;
        case 0x1242ecu: goto label_1242ec;
        case 0x1242f0u: goto label_1242f0;
        case 0x1242f4u: goto label_1242f4;
        case 0x1242f8u: goto label_1242f8;
        case 0x1242fcu: goto label_1242fc;
        case 0x124300u: goto label_124300;
        case 0x124304u: goto label_124304;
        case 0x124308u: goto label_124308;
        case 0x12430cu: goto label_12430c;
        case 0x124310u: goto label_124310;
        case 0x124314u: goto label_124314;
        case 0x124318u: goto label_124318;
        case 0x12431cu: goto label_12431c;
        case 0x124320u: goto label_124320;
        case 0x124324u: goto label_124324;
        case 0x124328u: goto label_124328;
        case 0x12432cu: goto label_12432c;
        case 0x124330u: goto label_124330;
        case 0x124334u: goto label_124334;
        case 0x124338u: goto label_124338;
        case 0x12433cu: goto label_12433c;
        case 0x124340u: goto label_124340;
        case 0x124344u: goto label_124344;
        case 0x124348u: goto label_124348;
        case 0x12434cu: goto label_12434c;
        case 0x124350u: goto label_124350;
        case 0x124354u: goto label_124354;
        case 0x124358u: goto label_124358;
        case 0x12435cu: goto label_12435c;
        case 0x124360u: goto label_124360;
        case 0x124364u: goto label_124364;
        case 0x124368u: goto label_124368;
        case 0x12436cu: goto label_12436c;
        case 0x124370u: goto label_124370;
        case 0x124374u: goto label_124374;
        case 0x124378u: goto label_124378;
        case 0x12437cu: goto label_12437c;
        case 0x124380u: goto label_124380;
        case 0x124384u: goto label_124384;
        case 0x124388u: goto label_124388;
        case 0x12438cu: goto label_12438c;
        case 0x124390u: goto label_124390;
        case 0x124394u: goto label_124394;
        case 0x124398u: goto label_124398;
        case 0x12439cu: goto label_12439c;
        case 0x1243a0u: goto label_1243a0;
        case 0x1243a4u: goto label_1243a4;
        case 0x1243a8u: goto label_1243a8;
        case 0x1243acu: goto label_1243ac;
        case 0x1243b0u: goto label_1243b0;
        case 0x1243b4u: goto label_1243b4;
        case 0x1243b8u: goto label_1243b8;
        case 0x1243bcu: goto label_1243bc;
        case 0x1243c0u: goto label_1243c0;
        case 0x1243c4u: goto label_1243c4;
        case 0x1243c8u: goto label_1243c8;
        case 0x1243ccu: goto label_1243cc;
        case 0x1243d0u: goto label_1243d0;
        case 0x1243d4u: goto label_1243d4;
        case 0x1243d8u: goto label_1243d8;
        case 0x1243dcu: goto label_1243dc;
        case 0x1243e0u: goto label_1243e0;
        case 0x1243e4u: goto label_1243e4;
        case 0x1243e8u: goto label_1243e8;
        case 0x1243ecu: goto label_1243ec;
        case 0x1243f0u: goto label_1243f0;
        case 0x1243f4u: goto label_1243f4;
        case 0x1243f8u: goto label_1243f8;
        case 0x1243fcu: goto label_1243fc;
        case 0x124400u: goto label_124400;
        case 0x124404u: goto label_124404;
        case 0x124408u: goto label_124408;
        case 0x12440cu: goto label_12440c;
        case 0x124410u: goto label_124410;
        case 0x124414u: goto label_124414;
        case 0x124418u: goto label_124418;
        case 0x12441cu: goto label_12441c;
        case 0x124420u: goto label_124420;
        case 0x124424u: goto label_124424;
        case 0x124428u: goto label_124428;
        case 0x12442cu: goto label_12442c;
        case 0x124430u: goto label_124430;
        case 0x124434u: goto label_124434;
        case 0x124438u: goto label_124438;
        case 0x12443cu: goto label_12443c;
        case 0x124440u: goto label_124440;
        case 0x124444u: goto label_124444;
        case 0x124448u: goto label_124448;
        case 0x12444cu: goto label_12444c;
        case 0x124450u: goto label_124450;
        case 0x124454u: goto label_124454;
        case 0x124458u: goto label_124458;
        case 0x12445cu: goto label_12445c;
        case 0x124460u: goto label_124460;
        case 0x124464u: goto label_124464;
        case 0x124468u: goto label_124468;
        case 0x12446cu: goto label_12446c;
        case 0x124470u: goto label_124470;
        case 0x124474u: goto label_124474;
        case 0x124478u: goto label_124478;
        case 0x12447cu: goto label_12447c;
        case 0x124480u: goto label_124480;
        case 0x124484u: goto label_124484;
        case 0x124488u: goto label_124488;
        case 0x12448cu: goto label_12448c;
        case 0x124490u: goto label_124490;
        case 0x124494u: goto label_124494;
        case 0x124498u: goto label_124498;
        case 0x12449cu: goto label_12449c;
        case 0x1244a0u: goto label_1244a0;
        case 0x1244a4u: goto label_1244a4;
        case 0x1244a8u: goto label_1244a8;
        case 0x1244acu: goto label_1244ac;
        case 0x1244b0u: goto label_1244b0;
        case 0x1244b4u: goto label_1244b4;
        case 0x1244b8u: goto label_1244b8;
        case 0x1244bcu: goto label_1244bc;
        case 0x1244c0u: goto label_1244c0;
        case 0x1244c4u: goto label_1244c4;
        case 0x1244c8u: goto label_1244c8;
        case 0x1244ccu: goto label_1244cc;
        case 0x1244d0u: goto label_1244d0;
        case 0x1244d4u: goto label_1244d4;
        case 0x1244d8u: goto label_1244d8;
        case 0x1244dcu: goto label_1244dc;
        case 0x1244e0u: goto label_1244e0;
        case 0x1244e4u: goto label_1244e4;
        case 0x1244e8u: goto label_1244e8;
        case 0x1244ecu: goto label_1244ec;
        case 0x1244f0u: goto label_1244f0;
        case 0x1244f4u: goto label_1244f4;
        case 0x1244f8u: goto label_1244f8;
        case 0x1244fcu: goto label_1244fc;
        case 0x124500u: goto label_124500;
        case 0x124504u: goto label_124504;
        case 0x124508u: goto label_124508;
        case 0x12450cu: goto label_12450c;
        case 0x124510u: goto label_124510;
        case 0x124514u: goto label_124514;
        case 0x124518u: goto label_124518;
        case 0x12451cu: goto label_12451c;
        case 0x124520u: goto label_124520;
        case 0x124524u: goto label_124524;
        case 0x124528u: goto label_124528;
        case 0x12452cu: goto label_12452c;
        case 0x124530u: goto label_124530;
        case 0x124534u: goto label_124534;
        case 0x124538u: goto label_124538;
        case 0x12453cu: goto label_12453c;
        case 0x124540u: goto label_124540;
        case 0x124544u: goto label_124544;
        case 0x124548u: goto label_124548;
        case 0x12454cu: goto label_12454c;
        case 0x124550u: goto label_124550;
        case 0x124554u: goto label_124554;
        case 0x124558u: goto label_124558;
        case 0x12455cu: goto label_12455c;
        case 0x124560u: goto label_124560;
        case 0x124564u: goto label_124564;
        case 0x124568u: goto label_124568;
        case 0x12456cu: goto label_12456c;
        case 0x124570u: goto label_124570;
        case 0x124574u: goto label_124574;
        case 0x124578u: goto label_124578;
        case 0x12457cu: goto label_12457c;
        case 0x124580u: goto label_124580;
        case 0x124584u: goto label_124584;
        case 0x124588u: goto label_124588;
        case 0x12458cu: goto label_12458c;
        case 0x124590u: goto label_124590;
        case 0x124594u: goto label_124594;
        case 0x124598u: goto label_124598;
        case 0x12459cu: goto label_12459c;
        case 0x1245a0u: goto label_1245a0;
        case 0x1245a4u: goto label_1245a4;
        case 0x1245a8u: goto label_1245a8;
        case 0x1245acu: goto label_1245ac;
        case 0x1245b0u: goto label_1245b0;
        case 0x1245b4u: goto label_1245b4;
        case 0x1245b8u: goto label_1245b8;
        case 0x1245bcu: goto label_1245bc;
        case 0x1245c0u: goto label_1245c0;
        case 0x1245c4u: goto label_1245c4;
        case 0x1245c8u: goto label_1245c8;
        case 0x1245ccu: goto label_1245cc;
        case 0x1245d0u: goto label_1245d0;
        case 0x1245d4u: goto label_1245d4;
        case 0x1245d8u: goto label_1245d8;
        case 0x1245dcu: goto label_1245dc;
        case 0x1245e0u: goto label_1245e0;
        case 0x1245e4u: goto label_1245e4;
        case 0x1245e8u: goto label_1245e8;
        case 0x1245ecu: goto label_1245ec;
        case 0x1245f0u: goto label_1245f0;
        case 0x1245f4u: goto label_1245f4;
        case 0x1245f8u: goto label_1245f8;
        case 0x1245fcu: goto label_1245fc;
        case 0x124600u: goto label_124600;
        case 0x124604u: goto label_124604;
        case 0x124608u: goto label_124608;
        case 0x12460cu: goto label_12460c;
        case 0x124610u: goto label_124610;
        case 0x124614u: goto label_124614;
        case 0x124618u: goto label_124618;
        case 0x12461cu: goto label_12461c;
        case 0x124620u: goto label_124620;
        case 0x124624u: goto label_124624;
        case 0x124628u: goto label_124628;
        case 0x12462cu: goto label_12462c;
        case 0x124630u: goto label_124630;
        case 0x124634u: goto label_124634;
        case 0x124638u: goto label_124638;
        case 0x12463cu: goto label_12463c;
        case 0x124640u: goto label_124640;
        case 0x124644u: goto label_124644;
        case 0x124648u: goto label_124648;
        case 0x12464cu: goto label_12464c;
        case 0x124650u: goto label_124650;
        case 0x124654u: goto label_124654;
        case 0x124658u: goto label_124658;
        case 0x12465cu: goto label_12465c;
        case 0x124660u: goto label_124660;
        case 0x124664u: goto label_124664;
        case 0x124668u: goto label_124668;
        case 0x12466cu: goto label_12466c;
        case 0x124670u: goto label_124670;
        case 0x124674u: goto label_124674;
        case 0x124678u: goto label_124678;
        case 0x12467cu: goto label_12467c;
        case 0x124680u: goto label_124680;
        case 0x124684u: goto label_124684;
        case 0x124688u: goto label_124688;
        case 0x12468cu: goto label_12468c;
        case 0x124690u: goto label_124690;
        case 0x124694u: goto label_124694;
        case 0x124698u: goto label_124698;
        case 0x12469cu: goto label_12469c;
        case 0x1246a0u: goto label_1246a0;
        case 0x1246a4u: goto label_1246a4;
        case 0x1246a8u: goto label_1246a8;
        case 0x1246acu: goto label_1246ac;
        case 0x1246b0u: goto label_1246b0;
        case 0x1246b4u: goto label_1246b4;
        case 0x1246b8u: goto label_1246b8;
        case 0x1246bcu: goto label_1246bc;
        case 0x1246c0u: goto label_1246c0;
        case 0x1246c4u: goto label_1246c4;
        case 0x1246c8u: goto label_1246c8;
        case 0x1246ccu: goto label_1246cc;
        case 0x1246d0u: goto label_1246d0;
        case 0x1246d4u: goto label_1246d4;
        case 0x1246d8u: goto label_1246d8;
        case 0x1246dcu: goto label_1246dc;
        case 0x1246e0u: goto label_1246e0;
        case 0x1246e4u: goto label_1246e4;
        case 0x1246e8u: goto label_1246e8;
        case 0x1246ecu: goto label_1246ec;
        case 0x1246f0u: goto label_1246f0;
        case 0x1246f4u: goto label_1246f4;
        case 0x1246f8u: goto label_1246f8;
        case 0x1246fcu: goto label_1246fc;
        case 0x124700u: goto label_124700;
        case 0x124704u: goto label_124704;
        case 0x124708u: goto label_124708;
        case 0x12470cu: goto label_12470c;
        case 0x124710u: goto label_124710;
        case 0x124714u: goto label_124714;
        case 0x124718u: goto label_124718;
        case 0x12471cu: goto label_12471c;
        case 0x124720u: goto label_124720;
        case 0x124724u: goto label_124724;
        case 0x124728u: goto label_124728;
        case 0x12472cu: goto label_12472c;
        case 0x124730u: goto label_124730;
        case 0x124734u: goto label_124734;
        case 0x124738u: goto label_124738;
        case 0x12473cu: goto label_12473c;
        case 0x124740u: goto label_124740;
        case 0x124744u: goto label_124744;
        case 0x124748u: goto label_124748;
        case 0x12474cu: goto label_12474c;
        case 0x124750u: goto label_124750;
        case 0x124754u: goto label_124754;
        case 0x124758u: goto label_124758;
        case 0x12475cu: goto label_12475c;
        case 0x124760u: goto label_124760;
        case 0x124764u: goto label_124764;
        case 0x124768u: goto label_124768;
        case 0x12476cu: goto label_12476c;
        case 0x124770u: goto label_124770;
        case 0x124774u: goto label_124774;
        case 0x124778u: goto label_124778;
        case 0x12477cu: goto label_12477c;
        case 0x124780u: goto label_124780;
        case 0x124784u: goto label_124784;
        case 0x124788u: goto label_124788;
        case 0x12478cu: goto label_12478c;
        case 0x124790u: goto label_124790;
        case 0x124794u: goto label_124794;
        case 0x124798u: goto label_124798;
        case 0x12479cu: goto label_12479c;
        case 0x1247a0u: goto label_1247a0;
        case 0x1247a4u: goto label_1247a4;
        case 0x1247a8u: goto label_1247a8;
        case 0x1247acu: goto label_1247ac;
        case 0x1247b0u: goto label_1247b0;
        case 0x1247b4u: goto label_1247b4;
        case 0x1247b8u: goto label_1247b8;
        case 0x1247bcu: goto label_1247bc;
        case 0x1247c0u: goto label_1247c0;
        case 0x1247c4u: goto label_1247c4;
        case 0x1247c8u: goto label_1247c8;
        case 0x1247ccu: goto label_1247cc;
        case 0x1247d0u: goto label_1247d0;
        case 0x1247d4u: goto label_1247d4;
        case 0x1247d8u: goto label_1247d8;
        case 0x1247dcu: goto label_1247dc;
        case 0x1247e0u: goto label_1247e0;
        case 0x1247e4u: goto label_1247e4;
        case 0x1247e8u: goto label_1247e8;
        case 0x1247ecu: goto label_1247ec;
        case 0x1247f0u: goto label_1247f0;
        case 0x1247f4u: goto label_1247f4;
        case 0x1247f8u: goto label_1247f8;
        case 0x1247fcu: goto label_1247fc;
        case 0x124800u: goto label_124800;
        case 0x124804u: goto label_124804;
        case 0x124808u: goto label_124808;
        case 0x12480cu: goto label_12480c;
        case 0x124810u: goto label_124810;
        case 0x124814u: goto label_124814;
        case 0x124818u: goto label_124818;
        case 0x12481cu: goto label_12481c;
        case 0x124820u: goto label_124820;
        case 0x124824u: goto label_124824;
        case 0x124828u: goto label_124828;
        case 0x12482cu: goto label_12482c;
        case 0x124830u: goto label_124830;
        case 0x124834u: goto label_124834;
        case 0x124838u: goto label_124838;
        case 0x12483cu: goto label_12483c;
        case 0x124840u: goto label_124840;
        case 0x124844u: goto label_124844;
        case 0x124848u: goto label_124848;
        case 0x12484cu: goto label_12484c;
        case 0x124850u: goto label_124850;
        case 0x124854u: goto label_124854;
        case 0x124858u: goto label_124858;
        case 0x12485cu: goto label_12485c;
        case 0x124860u: goto label_124860;
        case 0x124864u: goto label_124864;
        case 0x124868u: goto label_124868;
        case 0x12486cu: goto label_12486c;
        case 0x124870u: goto label_124870;
        case 0x124874u: goto label_124874;
        case 0x124878u: goto label_124878;
        case 0x12487cu: goto label_12487c;
        case 0x124880u: goto label_124880;
        case 0x124884u: goto label_124884;
        case 0x124888u: goto label_124888;
        case 0x12488cu: goto label_12488c;
        case 0x124890u: goto label_124890;
        case 0x124894u: goto label_124894;
        case 0x124898u: goto label_124898;
        case 0x12489cu: goto label_12489c;
        case 0x1248a0u: goto label_1248a0;
        case 0x1248a4u: goto label_1248a4;
        case 0x1248a8u: goto label_1248a8;
        case 0x1248acu: goto label_1248ac;
        case 0x1248b0u: goto label_1248b0;
        case 0x1248b4u: goto label_1248b4;
        case 0x1248b8u: goto label_1248b8;
        case 0x1248bcu: goto label_1248bc;
        case 0x1248c0u: goto label_1248c0;
        case 0x1248c4u: goto label_1248c4;
        case 0x1248c8u: goto label_1248c8;
        case 0x1248ccu: goto label_1248cc;
        case 0x1248d0u: goto label_1248d0;
        case 0x1248d4u: goto label_1248d4;
        case 0x1248d8u: goto label_1248d8;
        case 0x1248dcu: goto label_1248dc;
        case 0x1248e0u: goto label_1248e0;
        case 0x1248e4u: goto label_1248e4;
        case 0x1248e8u: goto label_1248e8;
        case 0x1248ecu: goto label_1248ec;
        case 0x1248f0u: goto label_1248f0;
        case 0x1248f4u: goto label_1248f4;
        case 0x1248f8u: goto label_1248f8;
        case 0x1248fcu: goto label_1248fc;
        case 0x124900u: goto label_124900;
        case 0x124904u: goto label_124904;
        case 0x124908u: goto label_124908;
        case 0x12490cu: goto label_12490c;
        case 0x124910u: goto label_124910;
        case 0x124914u: goto label_124914;
        case 0x124918u: goto label_124918;
        case 0x12491cu: goto label_12491c;
        case 0x124920u: goto label_124920;
        case 0x124924u: goto label_124924;
        case 0x124928u: goto label_124928;
        case 0x12492cu: goto label_12492c;
        case 0x124930u: goto label_124930;
        case 0x124934u: goto label_124934;
        case 0x124938u: goto label_124938;
        case 0x12493cu: goto label_12493c;
        case 0x124940u: goto label_124940;
        case 0x124944u: goto label_124944;
        case 0x124948u: goto label_124948;
        case 0x12494cu: goto label_12494c;
        case 0x124950u: goto label_124950;
        case 0x124954u: goto label_124954;
        case 0x124958u: goto label_124958;
        case 0x12495cu: goto label_12495c;
        case 0x124960u: goto label_124960;
        case 0x124964u: goto label_124964;
        case 0x124968u: goto label_124968;
        case 0x12496cu: goto label_12496c;
        case 0x124970u: goto label_124970;
        case 0x124974u: goto label_124974;
        case 0x124978u: goto label_124978;
        case 0x12497cu: goto label_12497c;
        case 0x124980u: goto label_124980;
        case 0x124984u: goto label_124984;
        case 0x124988u: goto label_124988;
        case 0x12498cu: goto label_12498c;
        case 0x124990u: goto label_124990;
        case 0x124994u: goto label_124994;
        case 0x124998u: goto label_124998;
        case 0x12499cu: goto label_12499c;
        case 0x1249a0u: goto label_1249a0;
        case 0x1249a4u: goto label_1249a4;
        case 0x1249a8u: goto label_1249a8;
        case 0x1249acu: goto label_1249ac;
        case 0x1249b0u: goto label_1249b0;
        case 0x1249b4u: goto label_1249b4;
        case 0x1249b8u: goto label_1249b8;
        case 0x1249bcu: goto label_1249bc;
        case 0x1249c0u: goto label_1249c0;
        case 0x1249c4u: goto label_1249c4;
        case 0x1249c8u: goto label_1249c8;
        case 0x1249ccu: goto label_1249cc;
        case 0x1249d0u: goto label_1249d0;
        case 0x1249d4u: goto label_1249d4;
        case 0x1249d8u: goto label_1249d8;
        case 0x1249dcu: goto label_1249dc;
        case 0x1249e0u: goto label_1249e0;
        case 0x1249e4u: goto label_1249e4;
        case 0x1249e8u: goto label_1249e8;
        case 0x1249ecu: goto label_1249ec;
        case 0x1249f0u: goto label_1249f0;
        case 0x1249f4u: goto label_1249f4;
        case 0x1249f8u: goto label_1249f8;
        case 0x1249fcu: goto label_1249fc;
        case 0x124a00u: goto label_124a00;
        case 0x124a04u: goto label_124a04;
        case 0x124a08u: goto label_124a08;
        case 0x124a0cu: goto label_124a0c;
        case 0x124a10u: goto label_124a10;
        case 0x124a14u: goto label_124a14;
        case 0x124a18u: goto label_124a18;
        case 0x124a1cu: goto label_124a1c;
        case 0x124a20u: goto label_124a20;
        case 0x124a24u: goto label_124a24;
        case 0x124a28u: goto label_124a28;
        case 0x124a2cu: goto label_124a2c;
        case 0x124a30u: goto label_124a30;
        case 0x124a34u: goto label_124a34;
        case 0x124a38u: goto label_124a38;
        case 0x124a3cu: goto label_124a3c;
        case 0x124a40u: goto label_124a40;
        case 0x124a44u: goto label_124a44;
        case 0x124a48u: goto label_124a48;
        case 0x124a4cu: goto label_124a4c;
        case 0x124a50u: goto label_124a50;
        case 0x124a54u: goto label_124a54;
        case 0x124a58u: goto label_124a58;
        case 0x124a5cu: goto label_124a5c;
        case 0x124a60u: goto label_124a60;
        case 0x124a64u: goto label_124a64;
        case 0x124a68u: goto label_124a68;
        case 0x124a6cu: goto label_124a6c;
        case 0x124a70u: goto label_124a70;
        case 0x124a74u: goto label_124a74;
        case 0x124a78u: goto label_124a78;
        case 0x124a7cu: goto label_124a7c;
        case 0x124a80u: goto label_124a80;
        case 0x124a84u: goto label_124a84;
        case 0x124a88u: goto label_124a88;
        case 0x124a8cu: goto label_124a8c;
        case 0x124a90u: goto label_124a90;
        case 0x124a94u: goto label_124a94;
        case 0x124a98u: goto label_124a98;
        case 0x124a9cu: goto label_124a9c;
        case 0x124aa0u: goto label_124aa0;
        case 0x124aa4u: goto label_124aa4;
        case 0x124aa8u: goto label_124aa8;
        case 0x124aacu: goto label_124aac;
        case 0x124ab0u: goto label_124ab0;
        case 0x124ab4u: goto label_124ab4;
        case 0x124ab8u: goto label_124ab8;
        case 0x124abcu: goto label_124abc;
        case 0x124ac0u: goto label_124ac0;
        case 0x124ac4u: goto label_124ac4;
        case 0x124ac8u: goto label_124ac8;
        case 0x124accu: goto label_124acc;
        case 0x124ad0u: goto label_124ad0;
        case 0x124ad4u: goto label_124ad4;
        case 0x124ad8u: goto label_124ad8;
        case 0x124adcu: goto label_124adc;
        case 0x124ae0u: goto label_124ae0;
        case 0x124ae4u: goto label_124ae4;
        case 0x124ae8u: goto label_124ae8;
        case 0x124aecu: goto label_124aec;
        case 0x124af0u: goto label_124af0;
        case 0x124af4u: goto label_124af4;
        case 0x124af8u: goto label_124af8;
        case 0x124afcu: goto label_124afc;
        case 0x124b00u: goto label_124b00;
        case 0x124b04u: goto label_124b04;
        case 0x124b08u: goto label_124b08;
        case 0x124b0cu: goto label_124b0c;
        case 0x124b10u: goto label_124b10;
        case 0x124b14u: goto label_124b14;
        case 0x124b18u: goto label_124b18;
        case 0x124b1cu: goto label_124b1c;
        case 0x124b20u: goto label_124b20;
        case 0x124b24u: goto label_124b24;
        case 0x124b28u: goto label_124b28;
        case 0x124b2cu: goto label_124b2c;
        case 0x124b30u: goto label_124b30;
        case 0x124b34u: goto label_124b34;
        case 0x124b38u: goto label_124b38;
        case 0x124b3cu: goto label_124b3c;
        case 0x124b40u: goto label_124b40;
        case 0x124b44u: goto label_124b44;
        case 0x124b48u: goto label_124b48;
        case 0x124b4cu: goto label_124b4c;
        case 0x124b50u: goto label_124b50;
        case 0x124b54u: goto label_124b54;
        case 0x124b58u: goto label_124b58;
        case 0x124b5cu: goto label_124b5c;
        case 0x124b60u: goto label_124b60;
        case 0x124b64u: goto label_124b64;
        case 0x124b68u: goto label_124b68;
        case 0x124b6cu: goto label_124b6c;
        case 0x124b70u: goto label_124b70;
        case 0x124b74u: goto label_124b74;
        case 0x124b78u: goto label_124b78;
        case 0x124b7cu: goto label_124b7c;
        case 0x124b80u: goto label_124b80;
        case 0x124b84u: goto label_124b84;
        case 0x124b88u: goto label_124b88;
        case 0x124b8cu: goto label_124b8c;
        case 0x124b90u: goto label_124b90;
        case 0x124b94u: goto label_124b94;
        case 0x124b98u: goto label_124b98;
        case 0x124b9cu: goto label_124b9c;
        case 0x124ba0u: goto label_124ba0;
        case 0x124ba4u: goto label_124ba4;
        case 0x124ba8u: goto label_124ba8;
        case 0x124bacu: goto label_124bac;
        case 0x124bb0u: goto label_124bb0;
        case 0x124bb4u: goto label_124bb4;
        case 0x124bb8u: goto label_124bb8;
        case 0x124bbcu: goto label_124bbc;
        case 0x124bc0u: goto label_124bc0;
        case 0x124bc4u: goto label_124bc4;
        case 0x124bc8u: goto label_124bc8;
        case 0x124bccu: goto label_124bcc;
        case 0x124bd0u: goto label_124bd0;
        case 0x124bd4u: goto label_124bd4;
        case 0x124bd8u: goto label_124bd8;
        case 0x124bdcu: goto label_124bdc;
        case 0x124be0u: goto label_124be0;
        case 0x124be4u: goto label_124be4;
        case 0x124be8u: goto label_124be8;
        case 0x124becu: goto label_124bec;
        case 0x124bf0u: goto label_124bf0;
        case 0x124bf4u: goto label_124bf4;
        case 0x124bf8u: goto label_124bf8;
        case 0x124bfcu: goto label_124bfc;
        case 0x124c00u: goto label_124c00;
        case 0x124c04u: goto label_124c04;
        case 0x124c08u: goto label_124c08;
        case 0x124c0cu: goto label_124c0c;
        case 0x124c10u: goto label_124c10;
        case 0x124c14u: goto label_124c14;
        case 0x124c18u: goto label_124c18;
        case 0x124c1cu: goto label_124c1c;
        case 0x124c20u: goto label_124c20;
        case 0x124c24u: goto label_124c24;
        case 0x124c28u: goto label_124c28;
        case 0x124c2cu: goto label_124c2c;
        case 0x124c30u: goto label_124c30;
        case 0x124c34u: goto label_124c34;
        case 0x124c38u: goto label_124c38;
        case 0x124c3cu: goto label_124c3c;
        case 0x124c40u: goto label_124c40;
        case 0x124c44u: goto label_124c44;
        case 0x124c48u: goto label_124c48;
        case 0x124c4cu: goto label_124c4c;
        case 0x124c50u: goto label_124c50;
        case 0x124c54u: goto label_124c54;
        case 0x124c58u: goto label_124c58;
        case 0x124c5cu: goto label_124c5c;
        case 0x124c60u: goto label_124c60;
        case 0x124c64u: goto label_124c64;
        case 0x124c68u: goto label_124c68;
        case 0x124c6cu: goto label_124c6c;
        case 0x124c70u: goto label_124c70;
        case 0x124c74u: goto label_124c74;
        case 0x124c78u: goto label_124c78;
        case 0x124c7cu: goto label_124c7c;
        case 0x124c80u: goto label_124c80;
        case 0x124c84u: goto label_124c84;
        case 0x124c88u: goto label_124c88;
        case 0x124c8cu: goto label_124c8c;
        case 0x124c90u: goto label_124c90;
        case 0x124c94u: goto label_124c94;
        case 0x124c98u: goto label_124c98;
        case 0x124c9cu: goto label_124c9c;
        case 0x124ca0u: goto label_124ca0;
        case 0x124ca4u: goto label_124ca4;
        case 0x124ca8u: goto label_124ca8;
        case 0x124cacu: goto label_124cac;
        case 0x124cb0u: goto label_124cb0;
        case 0x124cb4u: goto label_124cb4;
        case 0x124cb8u: goto label_124cb8;
        case 0x124cbcu: goto label_124cbc;
        case 0x124cc0u: goto label_124cc0;
        case 0x124cc4u: goto label_124cc4;
        case 0x124cc8u: goto label_124cc8;
        case 0x124cccu: goto label_124ccc;
        case 0x124cd0u: goto label_124cd0;
        case 0x124cd4u: goto label_124cd4;
        case 0x124cd8u: goto label_124cd8;
        case 0x124cdcu: goto label_124cdc;
        case 0x124ce0u: goto label_124ce0;
        case 0x124ce4u: goto label_124ce4;
        case 0x124ce8u: goto label_124ce8;
        case 0x124cecu: goto label_124cec;
        case 0x124cf0u: goto label_124cf0;
        case 0x124cf4u: goto label_124cf4;
        case 0x124cf8u: goto label_124cf8;
        case 0x124cfcu: goto label_124cfc;
        case 0x124d00u: goto label_124d00;
        case 0x124d04u: goto label_124d04;
        case 0x124d08u: goto label_124d08;
        case 0x124d0cu: goto label_124d0c;
        case 0x124d10u: goto label_124d10;
        case 0x124d14u: goto label_124d14;
        case 0x124d18u: goto label_124d18;
        case 0x124d1cu: goto label_124d1c;
        case 0x124d20u: goto label_124d20;
        case 0x124d24u: goto label_124d24;
        case 0x124d28u: goto label_124d28;
        case 0x124d2cu: goto label_124d2c;
        case 0x124d30u: goto label_124d30;
        case 0x124d34u: goto label_124d34;
        case 0x124d38u: goto label_124d38;
        case 0x124d3cu: goto label_124d3c;
        case 0x124d40u: goto label_124d40;
        case 0x124d44u: goto label_124d44;
        case 0x124d48u: goto label_124d48;
        case 0x124d4cu: goto label_124d4c;
        case 0x124d50u: goto label_124d50;
        case 0x124d54u: goto label_124d54;
        case 0x124d58u: goto label_124d58;
        case 0x124d5cu: goto label_124d5c;
        case 0x124d60u: goto label_124d60;
        case 0x124d64u: goto label_124d64;
        case 0x124d68u: goto label_124d68;
        case 0x124d6cu: goto label_124d6c;
        case 0x124d70u: goto label_124d70;
        case 0x124d74u: goto label_124d74;
        case 0x124d78u: goto label_124d78;
        case 0x124d7cu: goto label_124d7c;
        case 0x124d80u: goto label_124d80;
        case 0x124d84u: goto label_124d84;
        case 0x124d88u: goto label_124d88;
        case 0x124d8cu: goto label_124d8c;
        case 0x124d90u: goto label_124d90;
        case 0x124d94u: goto label_124d94;
        case 0x124d98u: goto label_124d98;
        case 0x124d9cu: goto label_124d9c;
        case 0x124da0u: goto label_124da0;
        case 0x124da4u: goto label_124da4;
        case 0x124da8u: goto label_124da8;
        case 0x124dacu: goto label_124dac;
        case 0x124db0u: goto label_124db0;
        case 0x124db4u: goto label_124db4;
        case 0x124db8u: goto label_124db8;
        case 0x124dbcu: goto label_124dbc;
        case 0x124dc0u: goto label_124dc0;
        case 0x124dc4u: goto label_124dc4;
        case 0x124dc8u: goto label_124dc8;
        case 0x124dccu: goto label_124dcc;
        case 0x124dd0u: goto label_124dd0;
        case 0x124dd4u: goto label_124dd4;
        case 0x124dd8u: goto label_124dd8;
        case 0x124ddcu: goto label_124ddc;
        case 0x124de0u: goto label_124de0;
        case 0x124de4u: goto label_124de4;
        case 0x124de8u: goto label_124de8;
        case 0x124decu: goto label_124dec;
        case 0x124df0u: goto label_124df0;
        case 0x124df4u: goto label_124df4;
        case 0x124df8u: goto label_124df8;
        case 0x124dfcu: goto label_124dfc;
        case 0x124e00u: goto label_124e00;
        case 0x124e04u: goto label_124e04;
        case 0x124e08u: goto label_124e08;
        case 0x124e0cu: goto label_124e0c;
        default: break;
    }

    ctx->pc = 0x123f20u;

label_123f20:
    // 0x123f20: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_123f24:
    // 0x123f24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x123f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_123f28:
    // 0x123f28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x123f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_123f2c:
    // 0x123f2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x123f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_123f30:
    // 0x123f30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x123f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_123f34:
    // 0x123f34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x123f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_123f38:
    // 0x123f38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x123f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_123f3c:
    // 0x123f3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x123f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_123f40:
    // 0x123f40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x123f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_123f44:
    // 0x123f44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x123f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_123f48:
    // 0x123f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x123f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_123f4c:
    // 0x123f4c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x123f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_123f50:
    // 0x123f50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x123f50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123f54:
    // 0x123f54: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x123f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_123f58:
    // 0x123f58: 0xc042330  jal         func_108CC0
label_123f5c:
    if (ctx->pc == 0x123F5Cu) {
        ctx->pc = 0x123F60u;
        goto label_123f60;
    }
    ctx->pc = 0x123F58u;
    SET_GPR_U32(ctx, 31, 0x123F60u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x123F58u, 0x123F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F60u;
label_123f60:
    // 0x123f60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123f64:
    // 0x123f64: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_123f68:
    if (ctx->pc == 0x123F68u) {
        ctx->pc = 0x123F6Cu;
        goto label_123f6c;
    }
    ctx->pc = 0x123F64u;
    {
        const bool branch_taken_0x123f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f64) {
            ctx->pc = 0x123F7Cu;
            goto label_123f7c;
        }
    }
    ctx->pc = 0x123F6Cu;
label_123f6c:
    // 0x123f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123f70:
    // 0x123f70: 0xa3a3015e  sb          $v1, 0x15E($sp)
    ctx->pc = 0x123f70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 350), (uint8_t)GPR_U32(ctx, 3));
label_123f74:
    // 0x123f74: 0x10000002  b           . + 4 + (0x2 << 2)
label_123f78:
    if (ctx->pc == 0x123F78u) {
        ctx->pc = 0x123F7Cu;
        goto label_123f7c;
    }
    ctx->pc = 0x123F74u;
    {
        const bool branch_taken_0x123f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f74) {
            ctx->pc = 0x123F80u;
            goto label_123f80;
        }
    }
    ctx->pc = 0x123F7Cu;
label_123f7c:
    // 0x123f7c: 0xa3a0015e  sb          $zero, 0x15E($sp)
    ctx->pc = 0x123f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 350), (uint8_t)GPR_U32(ctx, 0));
label_123f80:
    // 0x123f80: 0x93a3015e  lbu         $v1, 0x15E($sp)
    ctx->pc = 0x123f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 350)));
label_123f84:
    // 0x123f84: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x123f84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_123f88:
    // 0x123f88: 0x12800392  beqz        $s4, . + 4 + (0x392 << 2)
label_123f8c:
    if (ctx->pc == 0x123F8Cu) {
        ctx->pc = 0x123F90u;
        goto label_123f90;
    }
    ctx->pc = 0x123F88u;
    {
        const bool branch_taken_0x123f88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f88) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x123F90u;
label_123f90:
    // 0x123f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123f94:
    // 0x123f94: 0xc04939c  jal         func_124E70
label_123f98:
    if (ctx->pc == 0x123F98u) {
        ctx->pc = 0x123F9Cu;
        goto label_123f9c;
    }
    ctx->pc = 0x123F94u;
    SET_GPR_U32(ctx, 31, 0x123F9Cu);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x123F94u, 0x123F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123F9Cu;
label_123f9c:
    // 0x123f9c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x123f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_123fa0:
    // 0x123fa0: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x123fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_123fa4:
    // 0x123fa4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_123fa8:
    if (ctx->pc == 0x123FA8u) {
        ctx->pc = 0x123FACu;
        goto label_123fac;
    }
    ctx->pc = 0x123FA4u;
    {
        const bool branch_taken_0x123fa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x123fa4) {
            ctx->pc = 0x123FBCu;
            goto label_123fbc;
        }
    }
    ctx->pc = 0x123FACu;
label_123fac:
    // 0x123fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x123facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123fb0:
    // 0x123fb0: 0xa3a3015d  sb          $v1, 0x15D($sp)
    ctx->pc = 0x123fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 349), (uint8_t)GPR_U32(ctx, 3));
label_123fb4:
    // 0x123fb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_123fb8:
    if (ctx->pc == 0x123FB8u) {
        ctx->pc = 0x123FBCu;
        goto label_123fbc;
    }
    ctx->pc = 0x123FB4u;
    {
        const bool branch_taken_0x123fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123fb4) {
            ctx->pc = 0x123FC0u;
            goto label_123fc0;
        }
    }
    ctx->pc = 0x123FBCu;
label_123fbc:
    // 0x123fbc: 0xa3a0015d  sb          $zero, 0x15D($sp)
    ctx->pc = 0x123fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 349), (uint8_t)GPR_U32(ctx, 0));
label_123fc0:
    // 0x123fc0: 0x93a3015d  lbu         $v1, 0x15D($sp)
    ctx->pc = 0x123fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 349)));
label_123fc4:
    // 0x123fc4: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x123fc4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_123fc8:
    // 0x123fc8: 0x12800382  beqz        $s4, . + 4 + (0x382 << 2)
label_123fcc:
    if (ctx->pc == 0x123FCCu) {
        ctx->pc = 0x123FD0u;
        goto label_123fd0;
    }
    ctx->pc = 0x123FC8u;
    {
        const bool branch_taken_0x123fc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x123fc8) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x123FD0u;
label_123fd0:
    // 0x123fd0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x123fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_123fd4:
    // 0x123fd4: 0x24470028  addiu       $a3, $v0, 0x28
    ctx->pc = 0x123fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_123fd8:
    // 0x123fd8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x123fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_123fdc:
    // 0x123fdc: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x123fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
label_123fe0:
    // 0x123fe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x123fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123fe4:
    // 0x123fe4: 0xc040ab0  jal         func_102AC0
label_123fe8:
    if (ctx->pc == 0x123FE8u) {
        ctx->pc = 0x123FECu;
        goto label_123fec;
    }
    ctx->pc = 0x123FE4u;
    SET_GPR_U32(ctx, 31, 0x123FECu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x123FE4u, 0x123FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123FECu;
label_123fec:
    // 0x123fec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x123fecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123ff0:
    // 0x123ff0: 0x16c00005  bnez        $s6, . + 4 + (0x5 << 2)
label_123ff4:
    if (ctx->pc == 0x123FF4u) {
        ctx->pc = 0x123FF8u;
        goto label_123ff8;
    }
    ctx->pc = 0x123FF0u;
    {
        const bool branch_taken_0x123ff0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ff0) {
            ctx->pc = 0x124008u;
            goto label_124008;
        }
    }
    ctx->pc = 0x123FF8u;
label_123ff8:
    // 0x123ff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x123ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123ffc:
    // 0x123ffc: 0xa3a6015c  sb          $a2, 0x15C($sp)
    ctx->pc = 0x123ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 348), (uint8_t)GPR_U32(ctx, 6));
label_124000:
    // 0x124000: 0x10000002  b           . + 4 + (0x2 << 2)
label_124004:
    if (ctx->pc == 0x124004u) {
        ctx->pc = 0x124008u;
        goto label_124008;
    }
    ctx->pc = 0x124000u;
    {
        const bool branch_taken_0x124000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124000) {
            ctx->pc = 0x12400Cu;
            goto label_12400c;
        }
    }
    ctx->pc = 0x124008u;
label_124008:
    // 0x124008: 0xa3a0015c  sb          $zero, 0x15C($sp)
    ctx->pc = 0x124008u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 348), (uint8_t)GPR_U32(ctx, 0));
label_12400c:
    // 0x12400c: 0x93a8015c  lbu         $t0, 0x15C($sp)
    ctx->pc = 0x12400cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 348)));
label_124010:
    // 0x124010: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x124010u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_124014:
    // 0x124014: 0x1280036f  beqz        $s4, . + 4 + (0x36F << 2)
label_124018:
    if (ctx->pc == 0x124018u) {
        ctx->pc = 0x12401Cu;
        goto label_12401c;
    }
    ctx->pc = 0x124014u;
    {
        const bool branch_taken_0x124014 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x124014) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x12401Cu;
label_12401c:
    // 0x12401c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x12401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_124020:
    // 0x124020: 0xc042330  jal         func_108CC0
label_124024:
    if (ctx->pc == 0x124024u) {
        ctx->pc = 0x124028u;
        goto label_124028;
    }
    ctx->pc = 0x124020u;
    SET_GPR_U32(ctx, 31, 0x124028u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x124020u, 0x124028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124028u;
label_124028:
    // 0x124028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12402c:
    // 0x12402c: 0xc048f38  jal         func_123CE0
label_124030:
    if (ctx->pc == 0x124030u) {
        ctx->pc = 0x124034u;
        goto label_124034;
    }
    ctx->pc = 0x12402Cu;
    SET_GPR_U32(ctx, 31, 0x124034u);
    ctx->pc = 0x123CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CE0u, 0x12402Cu, 0x124034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124034u;
label_124034:
    // 0x124034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124038:
    // 0x124038: 0xa3a0015b  sb          $zero, 0x15B($sp)
    ctx->pc = 0x124038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 347), (uint8_t)GPR_U32(ctx, 0));
label_12403c:
    // 0x12403c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_124040:
    if (ctx->pc == 0x124040u) {
        ctx->pc = 0x124044u;
        goto label_124044;
    }
    ctx->pc = 0x12403Cu;
    {
        const bool branch_taken_0x12403c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x12403c) {
            ctx->pc = 0x124058u;
            goto label_124058;
        }
    }
    ctx->pc = 0x124044u;
label_124044:
    // 0x124044: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x124044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_124048:
    // 0x124048: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_12404c:
    if (ctx->pc == 0x12404Cu) {
        ctx->pc = 0x124050u;
        goto label_124050;
    }
    ctx->pc = 0x124048u;
    {
        const bool branch_taken_0x124048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124048) {
            ctx->pc = 0x124058u;
            goto label_124058;
        }
    }
    ctx->pc = 0x124050u;
label_124050:
    // 0x124050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124054:
    // 0x124054: 0xa3a3015b  sb          $v1, 0x15B($sp)
    ctx->pc = 0x124054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 347), (uint8_t)GPR_U32(ctx, 3));
label_124058:
    // 0x124058: 0x93a3015b  lbu         $v1, 0x15B($sp)
    ctx->pc = 0x124058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 347)));
label_12405c:
    // 0x12405c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_124060:
    if (ctx->pc == 0x124060u) {
        ctx->pc = 0x124064u;
        goto label_124064;
    }
    ctx->pc = 0x12405Cu;
    {
        const bool branch_taken_0x12405c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12405c) {
            ctx->pc = 0x124074u;
            goto label_124074;
        }
    }
    ctx->pc = 0x124064u;
label_124064:
    // 0x124064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124068:
    // 0x124068: 0xa3a3015a  sb          $v1, 0x15A($sp)
    ctx->pc = 0x124068u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 346), (uint8_t)GPR_U32(ctx, 3));
label_12406c:
    // 0x12406c: 0x10000002  b           . + 4 + (0x2 << 2)
label_124070:
    if (ctx->pc == 0x124070u) {
        ctx->pc = 0x124074u;
        goto label_124074;
    }
    ctx->pc = 0x12406Cu;
    {
        const bool branch_taken_0x12406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12406c) {
            ctx->pc = 0x124078u;
            goto label_124078;
        }
    }
    ctx->pc = 0x124074u;
label_124074:
    // 0x124074: 0xa3a0015a  sb          $zero, 0x15A($sp)
    ctx->pc = 0x124074u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 346), (uint8_t)GPR_U32(ctx, 0));
label_124078:
    // 0x124078: 0x93a3015a  lbu         $v1, 0x15A($sp)
    ctx->pc = 0x124078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 346)));
label_12407c:
    // 0x12407c: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x12407cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_124080:
    // 0x124080: 0x12800354  beqz        $s4, . + 4 + (0x354 << 2)
label_124084:
    if (ctx->pc == 0x124084u) {
        ctx->pc = 0x124088u;
        goto label_124088;
    }
    ctx->pc = 0x124080u;
    {
        const bool branch_taken_0x124080 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x124080) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124088u;
label_124088:
    // 0x124088: 0xc05548c  jal         func_155230
label_12408c:
    if (ctx->pc == 0x12408Cu) {
        ctx->pc = 0x124090u;
        goto label_124090;
    }
    ctx->pc = 0x124088u;
    SET_GPR_U32(ctx, 31, 0x124090u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x124088u, 0x124090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124090u;
label_124090:
    // 0x124090: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x124090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_124094:
    // 0x124094: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x124094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_124098:
    // 0x124098: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x124098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_12409c:
    // 0x12409c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x12409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1240a0:
    // 0x1240a0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1240a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1240a4:
    // 0x1240a4: 0xc0553d4  jal         func_154F50
label_1240a8:
    if (ctx->pc == 0x1240A8u) {
        ctx->pc = 0x1240ACu;
        goto label_1240ac;
    }
    ctx->pc = 0x1240A4u;
    SET_GPR_U32(ctx, 31, 0x1240ACu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1240A4u, 0x1240ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240ACu;
label_1240ac:
    // 0x1240ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1240acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1240b0:
    // 0x1240b0: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x1240b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
label_1240b4:
    // 0x1240b4: 0xc117bcc  jal         func_45EF30
label_1240b8:
    if (ctx->pc == 0x1240B8u) {
        ctx->pc = 0x1240BCu;
        goto label_1240bc;
    }
    ctx->pc = 0x1240B4u;
    SET_GPR_U32(ctx, 31, 0x1240BCu);
    ctx->pc = 0x45EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF30u, 0x1240B4u, 0x1240BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1240BCu;
label_1240bc:
    // 0x1240bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1240bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1240c0:
    // 0x1240c0: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x1240c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
label_1240c4:
    // 0x1240c4: 0x8f84b9ec  lw          $a0, -0x4614($gp)
    ctx->pc = 0x1240c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949356)));
label_1240c8:
    // 0x1240c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1240c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1240cc:
    // 0x1240cc: 0x1083029d  beq         $a0, $v1, . + 4 + (0x29D << 2)
label_1240d0:
    if (ctx->pc == 0x1240D0u) {
        ctx->pc = 0x1240D4u;
        goto label_1240d4;
    }
    ctx->pc = 0x1240CCu;
    {
        const bool branch_taken_0x1240cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1240cc) {
            ctx->pc = 0x124B44u;
            goto label_124b44;
        }
    }
    ctx->pc = 0x1240D4u;
label_1240d4:
    // 0x1240d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1240d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1240d8:
    // 0x1240d8: 0x1083011c  beq         $a0, $v1, . + 4 + (0x11C << 2)
label_1240dc:
    if (ctx->pc == 0x1240DCu) {
        ctx->pc = 0x1240E0u;
        goto label_1240e0;
    }
    ctx->pc = 0x1240D8u;
    {
        const bool branch_taken_0x1240d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1240d8) {
            ctx->pc = 0x12454Cu;
            goto label_12454c;
        }
    }
    ctx->pc = 0x1240E0u;
label_1240e0:
    // 0x1240e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1240e4:
    if (ctx->pc == 0x1240E4u) {
        ctx->pc = 0x1240E8u;
        goto label_1240e8;
    }
    ctx->pc = 0x1240E0u;
    {
        const bool branch_taken_0x1240e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240e0) {
            ctx->pc = 0x1240F0u;
            goto label_1240f0;
        }
    }
    ctx->pc = 0x1240E8u;
label_1240e8:
    // 0x1240e8: 0x10000296  b           . + 4 + (0x296 << 2)
label_1240ec:
    if (ctx->pc == 0x1240ECu) {
        ctx->pc = 0x1240F0u;
        goto label_1240f0;
    }
    ctx->pc = 0x1240E8u;
    {
        const bool branch_taken_0x1240e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1240e8) {
            ctx->pc = 0x124B44u;
            goto label_124b44;
        }
    }
    ctx->pc = 0x1240F0u;
label_1240f0:
    // 0x1240f0: 0x8f848b3c  lw          $a0, -0x74C4($gp)
    ctx->pc = 0x1240f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937404)));
label_1240f4:
    // 0x1240f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1240f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1240f8:
    // 0x1240f8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_1240fc:
    if (ctx->pc == 0x1240FCu) {
        ctx->pc = 0x124100u;
        goto label_124100;
    }
    ctx->pc = 0x1240F8u;
    {
        const bool branch_taken_0x1240f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1240f8) {
            ctx->pc = 0x124150u;
            goto label_124150;
        }
    }
    ctx->pc = 0x124100u;
label_124100:
    // 0x124100: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x124100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_124104:
    // 0x124104: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x124104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_124108:
    // 0x124108: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x124108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_12410c:
    // 0x12410c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_124110:
    // 0x124110: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x124110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
label_124114:
    // 0x124114: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x124114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_124118:
    // 0x124118: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x124118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12411c:
    // 0x12411c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12411cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124120:
    // 0x124120: 0xc117f34  jal         func_45FCD0
label_124124:
    if (ctx->pc == 0x124124u) {
        ctx->pc = 0x124128u;
        goto label_124128;
    }
    ctx->pc = 0x124120u;
    SET_GPR_U32(ctx, 31, 0x124128u);
    ctx->pc = 0x45FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FCD0u, 0x124120u, 0x124128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124128u;
label_124128:
    // 0x124128: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x124128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_12412c:
    // 0x12412c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x12412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_124130:
    // 0x124130: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x124130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_124134:
    // 0x124134: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x124134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_124138:
    // 0x124138: 0x24a5b490  addiu       $a1, $a1, -0x4B70
    ctx->pc = 0x124138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947984));
label_12413c:
    // 0x12413c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x12413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_124140:
    // 0x124140: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x124140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_124144:
    // 0x124144: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x124144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124148:
    // 0x124148: 0x10830322  beq         $a0, $v1, . + 4 + (0x322 << 2)
label_12414c:
    if (ctx->pc == 0x12414Cu) {
        ctx->pc = 0x124150u;
        goto label_124150;
    }
    ctx->pc = 0x124148u;
    {
        const bool branch_taken_0x124148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124148) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124150u;
label_124150:
    // 0x124150: 0x8f83b9f8  lw          $v1, -0x4608($gp)
    ctx->pc = 0x124150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_124154:
    // 0x124154: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x124154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_124158:
    // 0x124158: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
label_12415c:
    if (ctx->pc == 0x12415Cu) {
        ctx->pc = 0x124160u;
        goto label_124160;
    }
    ctx->pc = 0x124158u;
    {
        const bool branch_taken_0x124158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x124158) {
            ctx->pc = 0x12419Cu;
            goto label_12419c;
        }
    }
    ctx->pc = 0x124160u;
label_124160:
    // 0x124160: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x124160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_124164:
    // 0x124164: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x124164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_124168:
    // 0x124168: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x124168u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12416c:
    // 0x12416c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x12416cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124170:
    // 0x124170: 0x2463b490  addiu       $v1, $v1, -0x4B70
    ctx->pc = 0x124170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947984));
label_124174:
    // 0x124174: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x124174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_124178:
    // 0x124178: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x124178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_12417c:
    // 0x12417c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_124180:
    if (ctx->pc == 0x124180u) {
        ctx->pc = 0x124184u;
        goto label_124184;
    }
    ctx->pc = 0x12417Cu;
    {
        const bool branch_taken_0x12417c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12417c) {
            ctx->pc = 0x12419Cu;
            goto label_12419c;
        }
    }
    ctx->pc = 0x124184u;
label_124184:
    // 0x124184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124188:
    // 0x124188: 0xaf838b3c  sw          $v1, -0x74C4($gp)
    ctx->pc = 0x124188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 3));
label_12418c:
    // 0x12418c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124190:
    // 0x124190: 0xaf83b9ec  sw          $v1, -0x4614($gp)
    ctx->pc = 0x124190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 3));
label_124194:
    // 0x124194: 0x1000030f  b           . + 4 + (0x30F << 2)
label_124198:
    if (ctx->pc == 0x124198u) {
        ctx->pc = 0x12419Cu;
        goto label_12419c;
    }
    ctx->pc = 0x124194u;
    {
        const bool branch_taken_0x124194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124194) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x12419Cu;
label_12419c:
    // 0x12419c: 0x8f84ba1c  lw          $a0, -0x45E4($gp)
    ctx->pc = 0x12419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
label_1241a0:
    // 0x1241a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1241a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1241a4:
    // 0x1241a4: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
label_1241a8:
    if (ctx->pc == 0x1241A8u) {
        ctx->pc = 0x1241ACu;
        goto label_1241ac;
    }
    ctx->pc = 0x1241A4u;
    {
        const bool branch_taken_0x1241a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1241a4) {
            ctx->pc = 0x124290u;
            goto label_124290;
        }
    }
    ctx->pc = 0x1241ACu;
label_1241ac:
    // 0x1241ac: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x1241acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
label_1241b0:
    // 0x1241b0: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_1241b4:
    if (ctx->pc == 0x1241B4u) {
        ctx->pc = 0x1241B8u;
        goto label_1241b8;
    }
    ctx->pc = 0x1241B0u;
    {
        const bool branch_taken_0x1241b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1241b0) {
            ctx->pc = 0x124288u;
            goto label_124288;
        }
    }
    ctx->pc = 0x1241B8u;
label_1241b8:
    // 0x1241b8: 0xc05548c  jal         func_155230
label_1241bc:
    if (ctx->pc == 0x1241BCu) {
        ctx->pc = 0x1241C0u;
        goto label_1241c0;
    }
    ctx->pc = 0x1241B8u;
    SET_GPR_U32(ctx, 31, 0x1241C0u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x1241B8u, 0x1241C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241C0u;
label_1241c0:
    // 0x1241c0: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1241c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_1241c4:
    // 0x1241c4: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x1241c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_1241c8:
    // 0x1241c8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1241c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1241cc:
    // 0x1241cc: 0xc0553d4  jal         func_154F50
label_1241d0:
    if (ctx->pc == 0x1241D0u) {
        ctx->pc = 0x1241D4u;
        goto label_1241d4;
    }
    ctx->pc = 0x1241CCu;
    SET_GPR_U32(ctx, 31, 0x1241D4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1241CCu, 0x1241D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1241D4u;
label_1241d4:
    // 0x1241d4: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1241d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1241d8:
    // 0x1241d8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1241d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1241dc:
    // 0x1241dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1241dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1241e0:
    // 0x1241e0: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1241e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1241e4:
    // 0x1241e4: 0x320f809  jalr        $t9
label_1241e8:
    if (ctx->pc == 0x1241E8u) {
        ctx->pc = 0x1241ECu;
        goto label_1241ec;
    }
    ctx->pc = 0x1241E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1241ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1241E4u, 0x1241ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1241ECu;
label_1241ec:
    // 0x1241ec: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1241ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1241f0:
    // 0x1241f0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1241f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1241f4:
    // 0x1241f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1241f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1241f8:
    // 0x1241f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1241f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1241fc:
    // 0x1241fc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_124200:
    if (ctx->pc == 0x124200u) {
        ctx->pc = 0x124204u;
        goto label_124204;
    }
    ctx->pc = 0x1241FCu;
    {
        const bool branch_taken_0x1241fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1241fc) {
            ctx->pc = 0x124214u;
            goto label_124214;
        }
    }
    ctx->pc = 0x124204u;
label_124204:
    // 0x124204: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x124204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124208:
    // 0x124208: 0xc08d230  jal         func_2348C0
label_12420c:
    if (ctx->pc == 0x12420Cu) {
        ctx->pc = 0x124210u;
        goto label_124210;
    }
    ctx->pc = 0x124208u;
    SET_GPR_U32(ctx, 31, 0x124210u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x124208u, 0x124210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124210u;
label_124210:
    // 0x124210: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124214:
    // 0x124214: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x124214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_124218:
    // 0x124218: 0xc088560  jal         func_221580
label_12421c:
    if (ctx->pc == 0x12421Cu) {
        ctx->pc = 0x124220u;
        goto label_124220;
    }
    ctx->pc = 0x124218u;
    SET_GPR_U32(ctx, 31, 0x124220u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x124218u, 0x124220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124220u;
label_124220:
    // 0x124220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124224:
    // 0x124224: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x124224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_124228:
    // 0x124228: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x124228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_12422c:
    // 0x12422c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x12422cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_124230:
    // 0x124230: 0xc040924  jal         func_102490
label_124234:
    if (ctx->pc == 0x124234u) {
        ctx->pc = 0x124238u;
        goto label_124238;
    }
    ctx->pc = 0x124230u;
    SET_GPR_U32(ctx, 31, 0x124238u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x124230u, 0x124238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124238u;
label_124238:
    // 0x124238: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x124238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_12423c:
    // 0x12423c: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x12423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
label_124240:
    // 0x124240: 0x8f86b9f8  lw          $a2, -0x4608($gp)
    ctx->pc = 0x124240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_124244:
    // 0x124244: 0xc040924  jal         func_102490
label_124248:
    if (ctx->pc == 0x124248u) {
        ctx->pc = 0x12424Cu;
        goto label_12424c;
    }
    ctx->pc = 0x124244u;
    SET_GPR_U32(ctx, 31, 0x12424Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x124244u, 0x12424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12424Cu;
label_12424c:
    // 0x12424c: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x12424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_124250:
    // 0x124250: 0x24050554  addiu       $a1, $zero, 0x554
    ctx->pc = 0x124250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
label_124254:
    // 0x124254: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x124254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124258:
    // 0x124258: 0xc041b54  jal         func_106D50
label_12425c:
    if (ctx->pc == 0x12425Cu) {
        ctx->pc = 0x124260u;
        goto label_124260;
    }
    ctx->pc = 0x124258u;
    SET_GPR_U32(ctx, 31, 0x124260u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x124258u, 0x124260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124260u;
label_124260:
    // 0x124260: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x124260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_124264:
    // 0x124264: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x124264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_124268:
    // 0x124268: 0xc08ef28  jal         func_23BCA0
label_12426c:
    if (ctx->pc == 0x12426Cu) {
        ctx->pc = 0x124270u;
        goto label_124270;
    }
    ctx->pc = 0x124268u;
    SET_GPR_U32(ctx, 31, 0x124270u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x124268u, 0x124270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124270u;
label_124270:
    // 0x124270: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x124270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_124274:
    // 0x124274: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x124274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124278:
    // 0x124278: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x124278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12427c:
    // 0x12427c: 0xc0887b4  jal         func_221ED0
label_124280:
    if (ctx->pc == 0x124280u) {
        ctx->pc = 0x124284u;
        goto label_124284;
    }
    ctx->pc = 0x12427Cu;
    SET_GPR_U32(ctx, 31, 0x124284u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x12427Cu, 0x124284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124284u;
label_124284:
    // 0x124284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124288:
    // 0x124288: 0x100002d2  b           . + 4 + (0x2D2 << 2)
label_12428c:
    if (ctx->pc == 0x12428Cu) {
        ctx->pc = 0x124290u;
        goto label_124290;
    }
    ctx->pc = 0x124288u;
    {
        const bool branch_taken_0x124288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124288) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124290u;
label_124290:
    // 0x124290: 0x8f84b9f8  lw          $a0, -0x4608($gp)
    ctx->pc = 0x124290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_124294:
    // 0x124294: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x124294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_124298:
    // 0x124298: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_12429c:
    if (ctx->pc == 0x12429Cu) {
        ctx->pc = 0x1242A0u;
        goto label_1242a0;
    }
    ctx->pc = 0x124298u;
    {
        const bool branch_taken_0x124298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124298) {
            ctx->pc = 0x1242F4u;
            goto label_1242f4;
        }
    }
    ctx->pc = 0x1242A0u;
label_1242a0:
    // 0x1242a0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1242a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1242a4:
    // 0x1242a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1242a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1242a8:
    // 0x1242a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1242a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1242ac:
    // 0x1242ac: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1242acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_1242b0:
    // 0x1242b0: 0x2484b490  addiu       $a0, $a0, -0x4B70
    ctx->pc = 0x1242b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947984));
label_1242b4:
    // 0x1242b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1242b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1242b8:
    // 0x1242b8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1242b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1242bc:
    // 0x1242bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1242bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1242c0:
    // 0x1242c0: 0x1085000c  beq         $a0, $a1, . + 4 + (0xC << 2)
label_1242c4:
    if (ctx->pc == 0x1242C4u) {
        ctx->pc = 0x1242C8u;
        goto label_1242c8;
    }
    ctx->pc = 0x1242C0u;
    {
        const bool branch_taken_0x1242c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1242c0) {
            ctx->pc = 0x1242F4u;
            goto label_1242f4;
        }
    }
    ctx->pc = 0x1242C8u;
label_1242c8:
    // 0x1242c8: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x1242c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1242cc:
    // 0x1242cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1242ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1242d0:
    // 0x1242d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1242d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1242d4:
    // 0x1242d4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1242d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_1242d8:
    // 0x1242d8: 0x24c62260  addiu       $a2, $a2, 0x2260
    ctx->pc = 0x1242d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8800));
label_1242dc:
    // 0x1242dc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1242dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1242e0:
    // 0x1242e0: 0xc125454  jal         func_495150
label_1242e4:
    if (ctx->pc == 0x1242E4u) {
        ctx->pc = 0x1242E8u;
        goto label_1242e8;
    }
    ctx->pc = 0x1242E0u;
    SET_GPR_U32(ctx, 31, 0x1242E8u);
    ctx->pc = 0x495150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495150u, 0x1242E0u, 0x1242E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242E8u;
label_1242e8:
    // 0x1242e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1242e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1242ec:
    // 0x1242ec: 0x100002b9  b           . + 4 + (0x2B9 << 2)
label_1242f0:
    if (ctx->pc == 0x1242F0u) {
        ctx->pc = 0x1242F4u;
        goto label_1242f4;
    }
    ctx->pc = 0x1242ECu;
    {
        const bool branch_taken_0x1242ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242ec) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x1242F4u;
label_1242f4:
    // 0x1242f4: 0x8f848b3c  lw          $a0, -0x74C4($gp)
    ctx->pc = 0x1242f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937404)));
label_1242f8:
    // 0x1242f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1242f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1242fc:
    // 0x1242fc: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
label_124300:
    if (ctx->pc == 0x124300u) {
        ctx->pc = 0x124304u;
        goto label_124304;
    }
    ctx->pc = 0x1242FCu;
    {
        const bool branch_taken_0x1242fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1242fc) {
            ctx->pc = 0x124368u;
            goto label_124368;
        }
    }
    ctx->pc = 0x124304u;
label_124304:
    // 0x124304: 0xa380ba28  sb          $zero, -0x45D8($gp)
    ctx->pc = 0x124304u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949416), (uint8_t)GPR_U32(ctx, 0));
label_124308:
    // 0x124308: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x124308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12430c:
    // 0x12430c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12430cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124310:
    // 0x124310: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x124310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_124314:
    // 0x124314: 0x24c62280  addiu       $a2, $a2, 0x2280
    ctx->pc = 0x124314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8832));
label_124318:
    // 0x124318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12431c:
    // 0x12431c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x12431cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_124320:
    // 0x124320: 0x2789ba14  addiu       $t1, $gp, -0x45EC
    ctx->pc = 0x124320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949396));
label_124324:
    // 0x124324: 0x3c0a0061  lui         $t2, 0x61
    ctx->pc = 0x124324u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)97 << 16));
label_124328:
    // 0x124328: 0x254ab840  addiu       $t2, $t2, -0x47C0
    ctx->pc = 0x124328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294948928));
label_12432c:
    // 0x12432c: 0xc117dd8  jal         func_45F760
label_124330:
    if (ctx->pc == 0x124330u) {
        ctx->pc = 0x124334u;
        goto label_124334;
    }
    ctx->pc = 0x12432Cu;
    SET_GPR_U32(ctx, 31, 0x124334u);
    ctx->pc = 0x45F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F760u, 0x12432Cu, 0x124334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124334u;
label_124334:
    // 0x124334: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124338:
    // 0x124338: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x124338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_12433c:
    // 0x12433c: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x12433cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_124340:
    // 0x124340: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124344:
    // 0x124344: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_124348:
    if (ctx->pc == 0x124348u) {
        ctx->pc = 0x12434Cu;
        goto label_12434c;
    }
    ctx->pc = 0x124344u;
    {
        const bool branch_taken_0x124344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124344) {
            ctx->pc = 0x124358u;
            goto label_124358;
        }
    }
    ctx->pc = 0x12434Cu;
label_12434c:
    // 0x12434c: 0xaf808b3c  sw          $zero, -0x74C4($gp)
    ctx->pc = 0x12434cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 0));
label_124350:
    // 0x124350: 0x100002a0  b           . + 4 + (0x2A0 << 2)
label_124354:
    if (ctx->pc == 0x124354u) {
        ctx->pc = 0x124358u;
        goto label_124358;
    }
    ctx->pc = 0x124350u;
    {
        const bool branch_taken_0x124350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124350) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124358u;
label_124358:
    // 0x124358: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x124358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12435c:
    // 0x12435c: 0xaf83b9ec  sw          $v1, -0x4614($gp)
    ctx->pc = 0x12435cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 3));
label_124360:
    // 0x124360: 0x1000029c  b           . + 4 + (0x29C << 2)
label_124364:
    if (ctx->pc == 0x124364u) {
        ctx->pc = 0x124368u;
        goto label_124368;
    }
    ctx->pc = 0x124360u;
    {
        const bool branch_taken_0x124360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124360) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124368u;
label_124368:
    // 0x124368: 0x8f838b3c  lw          $v1, -0x74C4($gp)
    ctx->pc = 0x124368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937404)));
label_12436c:
    // 0x12436c: 0x14600299  bnez        $v1, . + 4 + (0x299 << 2)
label_124370:
    if (ctx->pc == 0x124370u) {
        ctx->pc = 0x124374u;
        goto label_124374;
    }
    ctx->pc = 0x12436Cu;
    {
        const bool branch_taken_0x12436c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12436c) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124374u;
label_124374:
    // 0x124374: 0x8fa80148  lw          $t0, 0x148($sp)
    ctx->pc = 0x124374u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_124378:
    // 0x124378: 0x15000296  bnez        $t0, . + 4 + (0x296 << 2)
label_12437c:
    if (ctx->pc == 0x12437Cu) {
        ctx->pc = 0x124380u;
        goto label_124380;
    }
    ctx->pc = 0x124378u;
    {
        const bool branch_taken_0x124378 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x124378) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124380u;
label_124380:
    // 0x124380: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x124380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_124384:
    // 0x124384: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x124384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_124388:
    // 0x124388: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x124388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_12438c:
    // 0x12438c: 0xc117c14  jal         func_45F050
label_124390:
    if (ctx->pc == 0x124390u) {
        ctx->pc = 0x124394u;
        goto label_124394;
    }
    ctx->pc = 0x12438Cu;
    SET_GPR_U32(ctx, 31, 0x124394u);
    ctx->pc = 0x45F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F050u, 0x12438Cu, 0x124394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124394u;
label_124394:
    // 0x124394: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x124394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_124398:
    // 0x124398: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x124398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12439c:
    // 0x12439c: 0x10c30065  beq         $a2, $v1, . + 4 + (0x65 << 2)
label_1243a0:
    if (ctx->pc == 0x1243A0u) {
        ctx->pc = 0x1243A4u;
        goto label_1243a4;
    }
    ctx->pc = 0x12439Cu;
    {
        const bool branch_taken_0x12439c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x12439c) {
            ctx->pc = 0x124534u;
            goto label_124534;
        }
    }
    ctx->pc = 0x1243A4u;
label_1243a4:
    // 0x1243a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1243a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1243a8:
    // 0x1243a8: 0xaf838b3c  sw          $v1, -0x74C4($gp)
    ctx->pc = 0x1243a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 3));
label_1243ac:
    // 0x1243ac: 0xaf80ba24  sw          $zero, -0x45DC($gp)
    ctx->pc = 0x1243acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949412), GPR_U32(ctx, 0));
label_1243b0:
    // 0x1243b0: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1243b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1243b4:
    // 0x1243b4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x1243b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_1243b8:
    // 0x1243b8: 0x24a5b840  addiu       $a1, $a1, -0x47C0
    ctx->pc = 0x1243b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948928));
label_1243bc:
    // 0x1243bc: 0xc04a2c0  jal         func_128B00
label_1243c0:
    if (ctx->pc == 0x1243C0u) {
        ctx->pc = 0x1243C4u;
        goto label_1243c4;
    }
    ctx->pc = 0x1243BCu;
    SET_GPR_U32(ctx, 31, 0x1243C4u);
    ctx->pc = 0x128B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B00u, 0x1243BCu, 0x1243C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1243C4u;
label_1243c4:
    // 0x1243c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1243c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1243c8:
    // 0x1243c8: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_1243cc:
    if (ctx->pc == 0x1243CCu) {
        ctx->pc = 0x1243D0u;
        goto label_1243d0;
    }
    ctx->pc = 0x1243C8u;
    {
        const bool branch_taken_0x1243c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1243c8) {
            ctx->pc = 0x124400u;
            goto label_124400;
        }
    }
    ctx->pc = 0x1243D0u;
label_1243d0:
    // 0x1243d0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1243d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1243d4:
    // 0x1243d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1243d8:
    if (ctx->pc == 0x1243D8u) {
        ctx->pc = 0x1243DCu;
        goto label_1243dc;
    }
    ctx->pc = 0x1243D4u;
    {
        const bool branch_taken_0x1243d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243d4) {
            ctx->pc = 0x1243E0u;
            goto label_1243e0;
        }
    }
    ctx->pc = 0x1243DCu;
label_1243dc:
    // 0x1243dc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1243dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1243e0:
    // 0x1243e0: 0x2fc60004  sltiu       $a2, $fp, 0x4
    ctx->pc = 0x1243e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1243e4:
    // 0x1243e4: 0x0  nop
    ctx->pc = 0x1243e4u;
    // NOP
label_1243e8:
    // 0x1243e8: 0x0  nop
    ctx->pc = 0x1243e8u;
    // NOP
label_1243ec:
    // 0x1243ec: 0x0  nop
    ctx->pc = 0x1243ecu;
    // NOP
label_1243f0:
    // 0x1243f0: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_1243f4:
    if (ctx->pc == 0x1243F4u) {
        ctx->pc = 0x1243F8u;
        goto label_1243f8;
    }
    ctx->pc = 0x1243F0u;
    {
        const bool branch_taken_0x1243f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1243f0) {
            ctx->pc = 0x1243DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1243dc;
        }
    }
    ctx->pc = 0x1243F8u;
label_1243f8:
    // 0x1243f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1243fc:
    if (ctx->pc == 0x1243FCu) {
        ctx->pc = 0x124400u;
        goto label_124400;
    }
    ctx->pc = 0x1243F8u;
    {
        const bool branch_taken_0x1243f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243f8) {
            ctx->pc = 0x124408u;
            goto label_124408;
        }
    }
    ctx->pc = 0x124400u;
label_124400:
    // 0x124400: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x124400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124404:
    // 0x124404: 0xa388ba28  sb          $t0, -0x45D8($gp)
    ctx->pc = 0x124404u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949416), (uint8_t)GPR_U32(ctx, 8));
label_124408:
    // 0x124408: 0x8f83ba14  lw          $v1, -0x45EC($gp)
    ctx->pc = 0x124408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949396)));
label_12440c:
    // 0x12440c: 0x18600044  blez        $v1, . + 4 + (0x44 << 2)
label_124410:
    if (ctx->pc == 0x124410u) {
        ctx->pc = 0x124414u;
        goto label_124414;
    }
    ctx->pc = 0x12440Cu;
    {
        const bool branch_taken_0x12440c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x12440c) {
            ctx->pc = 0x124520u;
            goto label_124520;
        }
    }
    ctx->pc = 0x124414u;
label_124414:
    // 0x124414: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124418:
    // 0x124418: 0x9063b484  lbu         $v1, -0x4B7C($v1)
    ctx->pc = 0x124418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947972)));
label_12441c:
    // 0x12441c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_124420:
    if (ctx->pc == 0x124420u) {
        ctx->pc = 0x124424u;
        goto label_124424;
    }
    ctx->pc = 0x12441Cu;
    {
        const bool branch_taken_0x12441c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12441c) {
            ctx->pc = 0x124444u;
            goto label_124444;
        }
    }
    ctx->pc = 0x124424u;
label_124424:
    // 0x124424: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124428:
    // 0x124428: 0x9064b474  lbu         $a0, -0x4B8C($v1)
    ctx->pc = 0x124428u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947956)));
label_12442c:
    // 0x12442c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_124430:
    if (ctx->pc == 0x124430u) {
        ctx->pc = 0x124434u;
        goto label_124434;
    }
    ctx->pc = 0x12442Cu;
    {
        const bool branch_taken_0x12442c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12442c) {
            ctx->pc = 0x124444u;
            goto label_124444;
        }
    }
    ctx->pc = 0x124434u;
label_124434:
    // 0x124434: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124438:
    // 0x124438: 0x9063b47c  lbu         $v1, -0x4B84($v1)
    ctx->pc = 0x124438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947964)));
label_12443c:
    // 0x12443c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_124440:
    if (ctx->pc == 0x124440u) {
        ctx->pc = 0x124444u;
        goto label_124444;
    }
    ctx->pc = 0x12443Cu;
    {
        const bool branch_taken_0x12443c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12443c) {
            ctx->pc = 0x124450u;
            goto label_124450;
        }
    }
    ctx->pc = 0x124444u;
label_124444:
    // 0x124444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124448:
    // 0x124448: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_12444c:
    // 0x12444c: 0xa064b485  sb          $a0, -0x4B7B($v1)
    ctx->pc = 0x12444cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947973), (uint8_t)GPR_U32(ctx, 4));
label_124450:
    // 0x124450: 0x8f83ba24  lw          $v1, -0x45DC($gp)
    ctx->pc = 0x124450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949412)));
label_124454:
    // 0x124454: 0x18600032  blez        $v1, . + 4 + (0x32 << 2)
label_124458:
    if (ctx->pc == 0x124458u) {
        ctx->pc = 0x12445Cu;
        goto label_12445c;
    }
    ctx->pc = 0x124454u;
    {
        const bool branch_taken_0x124454 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x124454) {
            ctx->pc = 0x124520u;
            goto label_124520;
        }
    }
    ctx->pc = 0x12445Cu;
label_12445c:
    // 0x12445c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x12445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_124460:
    // 0x124460: 0xc041b48  jal         func_106D20
label_124464:
    if (ctx->pc == 0x124464u) {
        ctx->pc = 0x124468u;
        goto label_124468;
    }
    ctx->pc = 0x124460u;
    SET_GPR_U32(ctx, 31, 0x124468u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x124460u, 0x124468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124468u;
label_124468:
    // 0x124468: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x124468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12446c:
    // 0x12446c: 0x10000025  b           . + 4 + (0x25 << 2)
label_124470:
    if (ctx->pc == 0x124470u) {
        ctx->pc = 0x124474u;
        goto label_124474;
    }
    ctx->pc = 0x12446Cu;
    {
        const bool branch_taken_0x12446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12446c) {
            ctx->pc = 0x124504u;
            goto label_124504;
        }
    }
    ctx->pc = 0x124474u;
label_124474:
    // 0x124474: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x124474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_124478:
    // 0x124478: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x124478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12447c:
    // 0x12447c: 0x24a52290  addiu       $a1, $a1, 0x2290
    ctx->pc = 0x12447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
label_124480:
    // 0x124480: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x124480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_124484:
    // 0x124484: 0x27878b50  addiu       $a3, $gp, -0x74B0
    ctx->pc = 0x124484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937424));
label_124488:
    // 0x124488: 0xc0424a8  jal         func_1092A0
label_12448c:
    if (ctx->pc == 0x12448Cu) {
        ctx->pc = 0x124490u;
        goto label_124490;
    }
    ctx->pc = 0x124488u;
    SET_GPR_U32(ctx, 31, 0x124490u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x124488u, 0x124490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124490u;
label_124490:
    // 0x124490: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124494:
    // 0x124494: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x124494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_124498:
    // 0x124498: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_12449c:
    // 0x12449c: 0x2463bd40  addiu       $v1, $v1, -0x42C0
    ctx->pc = 0x12449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950208));
label_1244a0:
    // 0x1244a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1244a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1244a4:
    // 0x1244a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1244a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1244a8:
    // 0x1244a8: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1244a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1244ac:
    // 0x1244ac: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x1244acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_1244b0:
    // 0x1244b0: 0x2484bd40  addiu       $a0, $a0, -0x42C0
    ctx->pc = 0x1244b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950208));
label_1244b4:
    // 0x1244b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1244b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1244b8:
    // 0x1244b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1244b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1244bc:
    // 0x1244bc: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x1244bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_1244c0:
    // 0x1244c0: 0xc041b38  jal         func_106CE0
label_1244c4:
    if (ctx->pc == 0x1244C4u) {
        ctx->pc = 0x1244C8u;
        goto label_1244c8;
    }
    ctx->pc = 0x1244C0u;
    SET_GPR_U32(ctx, 31, 0x1244C8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1244C0u, 0x1244C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244C8u;
label_1244c8:
    // 0x1244c8: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x1244c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1244cc:
    // 0x1244cc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1244ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1244d0:
    // 0x1244d0: 0x2463bd40  addiu       $v1, $v1, -0x42C0
    ctx->pc = 0x1244d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950208));
label_1244d4:
    // 0x1244d4: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1244d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1244d8:
    // 0x1244d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1244d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1244dc:
    // 0x1244dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1244dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1244e0:
    // 0x1244e0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1244e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_1244e4:
    // 0x1244e4: 0x24c62280  addiu       $a2, $a2, 0x2280
    ctx->pc = 0x1244e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8832));
label_1244e8:
    // 0x1244e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1244e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1244ec:
    // 0x1244ec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1244ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1244f0:
    // 0x1244f0: 0x8c492224  lw          $t1, 0x2224($v0)
    ctx->pc = 0x1244f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8740)));
label_1244f4:
    // 0x1244f4: 0xc119014  jal         func_464050
label_1244f8:
    if (ctx->pc == 0x1244F8u) {
        ctx->pc = 0x1244FCu;
        goto label_1244fc;
    }
    ctx->pc = 0x1244F4u;
    SET_GPR_U32(ctx, 31, 0x1244FCu);
    ctx->pc = 0x464050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464050u, 0x1244F4u, 0x1244FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244FCu;
label_1244fc:
    // 0x1244fc: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x1244fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_124500:
    // 0x124500: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x124500u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_124504:
    // 0x124504: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x124504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_124508:
    // 0x124508: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_12450c:
    if (ctx->pc == 0x12450Cu) {
        ctx->pc = 0x124510u;
        goto label_124510;
    }
    ctx->pc = 0x124508u;
    {
        const bool branch_taken_0x124508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124508) {
            ctx->pc = 0x124474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124474;
        }
    }
    ctx->pc = 0x124510u;
label_124510:
    // 0x124510: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x124510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_124514:
    // 0x124514: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x124514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124518:
    // 0x124518: 0xc0402d4  jal         func_100B50
label_12451c:
    if (ctx->pc == 0x12451Cu) {
        ctx->pc = 0x124520u;
        goto label_124520;
    }
    ctx->pc = 0x124518u;
    SET_GPR_U32(ctx, 31, 0x124520u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x124518u, 0x124520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124520u;
label_124520:
    // 0x124520: 0xaf80ba44  sw          $zero, -0x45BC($gp)
    ctx->pc = 0x124520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949444), GPR_U32(ctx, 0));
label_124524:
    // 0x124524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124528:
    // 0x124528: 0xaf83b9ec  sw          $v1, -0x4614($gp)
    ctx->pc = 0x124528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 3));
label_12452c:
    // 0x12452c: 0x10000229  b           . + 4 + (0x229 << 2)
label_124530:
    if (ctx->pc == 0x124530u) {
        ctx->pc = 0x124534u;
        goto label_124534;
    }
    ctx->pc = 0x12452Cu;
    {
        const bool branch_taken_0x12452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12452c) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124534u;
label_124534:
    // 0x124534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124538:
    // 0x124538: 0xaf838b3c  sw          $v1, -0x74C4($gp)
    ctx->pc = 0x124538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937404), GPR_U32(ctx, 3));
label_12453c:
    // 0x12453c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124540:
    // 0x124540: 0xaf84b9ec  sw          $a0, -0x4614($gp)
    ctx->pc = 0x124540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 4));
label_124544:
    // 0x124544: 0x10000223  b           . + 4 + (0x223 << 2)
label_124548:
    if (ctx->pc == 0x124548u) {
        ctx->pc = 0x12454Cu;
        goto label_12454c;
    }
    ctx->pc = 0x124544u;
    {
        const bool branch_taken_0x124544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124544) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x12454Cu;
label_12454c:
    // 0x12454c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x12454cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124550:
    // 0x124550: 0x9063b485  lbu         $v1, -0x4B7B($v1)
    ctx->pc = 0x124550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947973)));
label_124554:
    // 0x124554: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_124558:
    if (ctx->pc == 0x124558u) {
        ctx->pc = 0x12455Cu;
        goto label_12455c;
    }
    ctx->pc = 0x124554u;
    {
        const bool branch_taken_0x124554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124554) {
            ctx->pc = 0x12459Cu;
            goto label_12459c;
        }
    }
    ctx->pc = 0x12455Cu;
label_12455c:
    // 0x12455c: 0x8f84b9f8  lw          $a0, -0x4608($gp)
    ctx->pc = 0x12455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_124560:
    // 0x124560: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x124560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_124564:
    // 0x124564: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_124568:
    if (ctx->pc == 0x124568u) {
        ctx->pc = 0x12456Cu;
        goto label_12456c;
    }
    ctx->pc = 0x124564u;
    {
        const bool branch_taken_0x124564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124564) {
            ctx->pc = 0x12459Cu;
            goto label_12459c;
        }
    }
    ctx->pc = 0x12456Cu;
label_12456c:
    // 0x12456c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x12456cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_124570:
    // 0x124570: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124574:
    // 0x124574: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x124574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_124578:
    // 0x124578: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x124578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_12457c:
    // 0x12457c: 0x24c622a0  addiu       $a2, $a2, 0x22A0
    ctx->pc = 0x12457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8864));
label_124580:
    // 0x124580: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x124580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124584:
    // 0x124584: 0xc125454  jal         func_495150
label_124588:
    if (ctx->pc == 0x124588u) {
        ctx->pc = 0x12458Cu;
        goto label_12458c;
    }
    ctx->pc = 0x124584u;
    SET_GPR_U32(ctx, 31, 0x12458Cu);
    ctx->pc = 0x495150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495150u, 0x124584u, 0x12458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12458Cu;
label_12458c:
    // 0x12458c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124590:
    // 0x124590: 0xaf83b9ec  sw          $v1, -0x4614($gp)
    ctx->pc = 0x124590u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 3));
label_124594:
    // 0x124594: 0x1000020f  b           . + 4 + (0x20F << 2)
label_124598:
    if (ctx->pc == 0x124598u) {
        ctx->pc = 0x12459Cu;
        goto label_12459c;
    }
    ctx->pc = 0x124594u;
    {
        const bool branch_taken_0x124594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124594) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x12459Cu;
label_12459c:
    // 0x12459c: 0x8f84ba44  lw          $a0, -0x45BC($gp)
    ctx->pc = 0x12459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1245a0:
    // 0x1245a0: 0x2c810004  sltiu       $at, $a0, 0x4
    ctx->pc = 0x1245a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1245a4:
    // 0x1245a4: 0x10200119  beqz        $at, . + 4 + (0x119 << 2)
label_1245a8:
    if (ctx->pc == 0x1245A8u) {
        ctx->pc = 0x1245ACu;
        goto label_1245ac;
    }
    ctx->pc = 0x1245A4u;
    {
        const bool branch_taken_0x1245a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1245a4) {
            ctx->pc = 0x124A0Cu;
            goto label_124a0c;
        }
    }
    ctx->pc = 0x1245ACu;
label_1245ac:
    // 0x1245ac: 0x8f83ba44  lw          $v1, -0x45BC($gp)
    ctx->pc = 0x1245acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1245b0:
    // 0x1245b0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1245b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1245b4:
    // 0x1245b4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1245b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1245b8:
    // 0x1245b8: 0x2463b7e0  addiu       $v1, $v1, -0x4820
    ctx->pc = 0x1245b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948832));
label_1245bc:
    // 0x1245bc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1245bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1245c0:
    // 0x1245c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1245c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1245c4:
    // 0x1245c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1245c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1245c8:
    // 0x1245c8: 0x14640026  bne         $v1, $a0, . + 4 + (0x26 << 2)
label_1245cc:
    if (ctx->pc == 0x1245CCu) {
        ctx->pc = 0x1245D0u;
        goto label_1245d0;
    }
    ctx->pc = 0x1245C8u;
    {
        const bool branch_taken_0x1245c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1245c8) {
            ctx->pc = 0x124664u;
            goto label_124664;
        }
    }
    ctx->pc = 0x1245D0u;
label_1245d0:
    // 0x1245d0: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x1245d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1245d4:
    // 0x1245d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1245d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1245d8:
    // 0x1245d8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x1245d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_1245dc:
    // 0x1245dc: 0x24a5b840  addiu       $a1, $a1, -0x47C0
    ctx->pc = 0x1245dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948928));
label_1245e0:
    // 0x1245e0: 0x8f86ba44  lw          $a2, -0x45BC($gp)
    ctx->pc = 0x1245e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1245e4:
    // 0x1245e4: 0xc04a214  jal         func_128850
label_1245e8:
    if (ctx->pc == 0x1245E8u) {
        ctx->pc = 0x1245ECu;
        goto label_1245ec;
    }
    ctx->pc = 0x1245E4u;
    SET_GPR_U32(ctx, 31, 0x1245ECu);
    ctx->pc = 0x128850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128850u, 0x1245E4u, 0x1245ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245ECu;
label_1245ec:
    // 0x1245ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1245f0:
    if (ctx->pc == 0x1245F0u) {
        ctx->pc = 0x1245F4u;
        goto label_1245f4;
    }
    ctx->pc = 0x1245ECu;
    {
        const bool branch_taken_0x1245ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1245ec) {
            ctx->pc = 0x124604u;
            goto label_124604;
        }
    }
    ctx->pc = 0x1245F4u;
label_1245f4:
    // 0x1245f4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1245f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1245f8:
    // 0x1245f8: 0x9066b485  lbu         $a2, -0x4B7B($v1)
    ctx->pc = 0x1245f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947973)));
label_1245fc:
    // 0x1245fc: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
label_124600:
    if (ctx->pc == 0x124600u) {
        ctx->pc = 0x124604u;
        goto label_124604;
    }
    ctx->pc = 0x1245FCu;
    {
        const bool branch_taken_0x1245fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1245fc) {
            ctx->pc = 0x124650u;
            goto label_124650;
        }
    }
    ctx->pc = 0x124604u;
label_124604:
    // 0x124604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124608:
    // 0x124608: 0xc04939c  jal         func_124E70
label_12460c:
    if (ctx->pc == 0x12460Cu) {
        ctx->pc = 0x124610u;
        goto label_124610;
    }
    ctx->pc = 0x124608u;
    SET_GPR_U32(ctx, 31, 0x124610u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x124608u, 0x124610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124610u;
label_124610:
    // 0x124610: 0x8f84ba44  lw          $a0, -0x45BC($gp)
    ctx->pc = 0x124610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124614:
    // 0x124614: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x124614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_124618:
    // 0x124618: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x124618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12461c:
    // 0x12461c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x12461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_124620:
    // 0x124620: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x124620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_124624:
    // 0x124624: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x124624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_124628:
    // 0x124628: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x124628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_12462c:
    // 0x12462c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124630:
    // 0x124630: 0xc04939c  jal         func_124E70
label_124634:
    if (ctx->pc == 0x124634u) {
        ctx->pc = 0x124638u;
        goto label_124638;
    }
    ctx->pc = 0x124630u;
    SET_GPR_U32(ctx, 31, 0x124638u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x124630u, 0x124638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124638u;
label_124638:
    // 0x124638: 0x8f83ba44  lw          $v1, -0x45BC($gp)
    ctx->pc = 0x124638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_12463c:
    // 0x12463c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x12463cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_124640:
    // 0x124640: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x124640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_124644:
    // 0x124644: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x124644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_124648:
    // 0x124648: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x124648u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12464c:
    // 0x12464c: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x12464cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
label_124650:
    // 0x124650: 0x8f84ba44  lw          $a0, -0x45BC($gp)
    ctx->pc = 0x124650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124654:
    // 0x124654: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x124654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_124658:
    // 0x124658: 0xaf85ba44  sw          $a1, -0x45BC($gp)
    ctx->pc = 0x124658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949444), GPR_U32(ctx, 5));
label_12465c:
    // 0x12465c: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_124660:
    if (ctx->pc == 0x124660u) {
        ctx->pc = 0x124664u;
        goto label_124664;
    }
    ctx->pc = 0x12465Cu;
    {
        const bool branch_taken_0x12465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12465c) {
            ctx->pc = 0x124A04u;
            goto label_124a04;
        }
    }
    ctx->pc = 0x124664u;
label_124664:
    // 0x124664: 0x8f83ba44  lw          $v1, -0x45BC($gp)
    ctx->pc = 0x124664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124668:
    // 0x124668: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x124668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12466c:
    // 0x12466c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x12466cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_124670:
    // 0x124670: 0x2484b7e0  addiu       $a0, $a0, -0x4820
    ctx->pc = 0x124670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948832));
label_124674:
    // 0x124674: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x124674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_124678:
    // 0x124678: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x124678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_12467c:
    // 0x12467c: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x12467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
label_124680:
    // 0x124680: 0x8f84ba44  lw          $a0, -0x45BC($gp)
    ctx->pc = 0x124680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124684:
    // 0x124684: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x124684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_124688:
    // 0x124688: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x124688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_12468c:
    // 0x12468c: 0x24c6b810  addiu       $a2, $a2, -0x47F0
    ctx->pc = 0x12468cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948880));
label_124690:
    // 0x124690: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x124690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_124694:
    // 0x124694: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x124694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_124698:
    // 0x124698: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x124698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12469c:
    // 0x12469c: 0x14850021  bne         $a0, $a1, . + 4 + (0x21 << 2)
label_1246a0:
    if (ctx->pc == 0x1246A0u) {
        ctx->pc = 0x1246A4u;
        goto label_1246a4;
    }
    ctx->pc = 0x12469Cu;
    {
        const bool branch_taken_0x12469c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x12469c) {
            ctx->pc = 0x124724u;
            goto label_124724;
        }
    }
    ctx->pc = 0x1246A4u;
label_1246a4:
    // 0x1246a4: 0x8f82ba44  lw          $v0, -0x45BC($gp)
    ctx->pc = 0x1246a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1246a8:
    // 0x1246a8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1246a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1246ac:
    // 0x1246ac: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x1246acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_1246b0:
    // 0x1246b0: 0x24a5b820  addiu       $a1, $a1, -0x47E0
    ctx->pc = 0x1246b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948896));
label_1246b4:
    // 0x1246b4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1246b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1246b8:
    // 0x1246b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1246b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1246bc:
    // 0x1246bc: 0xc049394  jal         func_124E50
label_1246c0:
    if (ctx->pc == 0x1246C0u) {
        ctx->pc = 0x1246C4u;
        goto label_1246c4;
    }
    ctx->pc = 0x1246BCu;
    SET_GPR_U32(ctx, 31, 0x1246C4u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x1246BCu, 0x1246C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246C4u;
label_1246c4:
    // 0x1246c4: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x1246c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_1246c8:
    // 0x1246c8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1246c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1246cc:
    // 0x1246cc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1246ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1246d0:
    // 0x1246d0: 0x2463b840  addiu       $v1, $v1, -0x47C0
    ctx->pc = 0x1246d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
label_1246d4:
    // 0x1246d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1246d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1246d8:
    // 0x1246d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1246d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1246dc:
    // 0x1246dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1246dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1246e0:
    // 0x1246e0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1246e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_1246e4:
    // 0x1246e4: 0x24c62280  addiu       $a2, $a2, 0x2280
    ctx->pc = 0x1246e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8832));
label_1246e8:
    // 0x1246e8: 0x24670020  addiu       $a3, $v1, 0x20
    ctx->pc = 0x1246e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1246ec:
    // 0x1246ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1246ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1246f0:
    // 0x1246f0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1246f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1246f4:
    // 0x1246f4: 0x8c492210  lw          $t1, 0x2210($v0)
    ctx->pc = 0x1246f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8720)));
label_1246f8:
    // 0x1246f8: 0xc117eb8  jal         func_45FAE0
label_1246fc:
    if (ctx->pc == 0x1246FCu) {
        ctx->pc = 0x124700u;
        goto label_124700;
    }
    ctx->pc = 0x1246F8u;
    SET_GPR_U32(ctx, 31, 0x124700u);
    ctx->pc = 0x45FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FAE0u, 0x1246F8u, 0x124700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124700u;
label_124700:
    // 0x124700: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x124700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_124704:
    // 0x124704: 0x8f84ba44  lw          $a0, -0x45BC($gp)
    ctx->pc = 0x124704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124708:
    // 0x124708: 0x48880  sll         $s1, $a0, 2
    ctx->pc = 0x124708u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_12470c:
    // 0x12470c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x12470cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124710:
    // 0x124710: 0x2463b810  addiu       $v1, $v1, -0x47F0
    ctx->pc = 0x124710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948880));
label_124714:
    // 0x124714: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x124714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_124718:
    // 0x124718: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x124718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_12471c:
    // 0x12471c: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_124720:
    if (ctx->pc == 0x124720u) {
        ctx->pc = 0x124724u;
        goto label_124724;
    }
    ctx->pc = 0x12471Cu;
    {
        const bool branch_taken_0x12471c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12471c) {
            ctx->pc = 0x124A04u;
            goto label_124a04;
        }
    }
    ctx->pc = 0x124724u;
label_124724:
    // 0x124724: 0x8fb40148  lw          $s4, 0x148($sp)
    ctx->pc = 0x124724u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_124728:
    // 0x124728: 0x168000b6  bnez        $s4, . + 4 + (0xB6 << 2)
label_12472c:
    if (ctx->pc == 0x12472Cu) {
        ctx->pc = 0x124730u;
        goto label_124730;
    }
    ctx->pc = 0x124728u;
    {
        const bool branch_taken_0x124728 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x124728) {
            ctx->pc = 0x124A04u;
            goto label_124a04;
        }
    }
    ctx->pc = 0x124730u;
label_124730:
    // 0x124730: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x124730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_124734:
    // 0x124734: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124738:
    // 0x124738: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x124738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_12473c:
    // 0x12473c: 0xc117c14  jal         func_45F050
label_124740:
    if (ctx->pc == 0x124740u) {
        ctx->pc = 0x124744u;
        goto label_124744;
    }
    ctx->pc = 0x12473Cu;
    SET_GPR_U32(ctx, 31, 0x124744u);
    ctx->pc = 0x45F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F050u, 0x12473Cu, 0x124744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124744u;
label_124744:
    // 0x124744: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124748:
    // 0x124748: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x124748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_12474c:
    // 0x12474c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_124750:
    if (ctx->pc == 0x124750u) {
        ctx->pc = 0x124754u;
        goto label_124754;
    }
    ctx->pc = 0x12474Cu;
    {
        const bool branch_taken_0x12474c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12474c) {
            ctx->pc = 0x124814u;
            goto label_124814;
        }
    }
    ctx->pc = 0x124754u;
label_124754:
    // 0x124754: 0x8fb400f0  lw          $s4, 0xF0($sp)
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_124758:
    // 0x124758: 0x2a81fff7  slti        $at, $s4, -0x9
    ctx->pc = 0x124758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967287) ? 1 : 0);
label_12475c:
    // 0x12475c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_124760:
    if (ctx->pc == 0x124760u) {
        ctx->pc = 0x124764u;
        goto label_124764;
    }
    ctx->pc = 0x12475Cu;
    {
        const bool branch_taken_0x12475c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12475c) {
            ctx->pc = 0x1247B0u;
            goto label_1247b0;
        }
    }
    ctx->pc = 0x124764u;
label_124764:
    // 0x124764: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x124764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_124768:
    // 0x124768: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x124768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
label_12476c:
    // 0x12476c: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x12476cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_124770:
    // 0x124770: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x124770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124774:
    // 0x124774: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x124774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124778:
    // 0x124778: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x124778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12477c:
    // 0x12477c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12477cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124780:
    // 0x124780: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x124780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_124784:
    // 0x124784: 0x24c622c0  addiu       $a2, $a2, 0x22C0
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8896));
label_124788:
    // 0x124788: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x124788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12478c:
    // 0x12478c: 0xc125454  jal         func_495150
label_124790:
    if (ctx->pc == 0x124790u) {
        ctx->pc = 0x124794u;
        goto label_124794;
    }
    ctx->pc = 0x12478Cu;
    SET_GPR_U32(ctx, 31, 0x124794u);
    ctx->pc = 0x495150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495150u, 0x12478Cu, 0x124794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124794u;
label_124794:
    // 0x124794: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x124794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124798:
    // 0x124798: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x124798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12479c:
    // 0x12479c: 0xaf84ba44  sw          $a0, -0x45BC($gp)
    ctx->pc = 0x12479cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949444), GPR_U32(ctx, 4));
label_1247a0:
    // 0x1247a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1247a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1247a4:
    // 0x1247a4: 0xaf84b9ec  sw          $a0, -0x4614($gp)
    ctx->pc = 0x1247a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 4));
label_1247a8:
    // 0x1247a8: 0x10000096  b           . + 4 + (0x96 << 2)
label_1247ac:
    if (ctx->pc == 0x1247ACu) {
        ctx->pc = 0x1247B0u;
        goto label_1247b0;
    }
    ctx->pc = 0x1247A8u;
    {
        const bool branch_taken_0x1247a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1247a8) {
            ctx->pc = 0x124A04u;
            goto label_124a04;
        }
    }
    ctx->pc = 0x1247B0u;
label_1247b0:
    // 0x1247b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1247b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1247b4:
    // 0x1247b4: 0xc04939c  jal         func_124E70
label_1247b8:
    if (ctx->pc == 0x1247B8u) {
        ctx->pc = 0x1247BCu;
        goto label_1247bc;
    }
    ctx->pc = 0x1247B4u;
    SET_GPR_U32(ctx, 31, 0x1247BCu);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x1247B4u, 0x1247BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247BCu;
label_1247bc:
    // 0x1247bc: 0x8f83ba44  lw          $v1, -0x45BC($gp)
    ctx->pc = 0x1247bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1247c0:
    // 0x1247c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1247c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1247c4:
    // 0x1247c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1247c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1247c8:
    // 0x1247c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1247c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1247cc:
    // 0x1247cc: 0x8c74006c  lw          $s4, 0x6C($v1)
    ctx->pc = 0x1247ccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1247d0:
    // 0x1247d0: 0x36820004  ori         $v0, $s4, 0x4
    ctx->pc = 0x1247d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
label_1247d4:
    // 0x1247d4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1247d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1247d8:
    // 0x1247d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1247d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1247dc:
    // 0x1247dc: 0xc04939c  jal         func_124E70
label_1247e0:
    if (ctx->pc == 0x1247E0u) {
        ctx->pc = 0x1247E4u;
        goto label_1247e4;
    }
    ctx->pc = 0x1247DCu;
    SET_GPR_U32(ctx, 31, 0x1247E4u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x1247DCu, 0x1247E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247E4u;
label_1247e4:
    // 0x1247e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1247e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1247e8:
    // 0x1247e8: 0x8f85ba44  lw          $a1, -0x45BC($gp)
    ctx->pc = 0x1247e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1247ec:
    // 0x1247ec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1247ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1247f0:
    // 0x1247f0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1247f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1247f4:
    // 0x1247f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1247f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1247f8:
    // 0x1247f8: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1247f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1247fc:
    // 0x1247fc: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x1247fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
label_124800:
    // 0x124800: 0x8f83ba44  lw          $v1, -0x45BC($gp)
    ctx->pc = 0x124800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124804:
    // 0x124804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_124808:
    // 0x124808: 0xaf83ba44  sw          $v1, -0x45BC($gp)
    ctx->pc = 0x124808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949444), GPR_U32(ctx, 3));
label_12480c:
    // 0x12480c: 0x1000007d  b           . + 4 + (0x7D << 2)
label_124810:
    if (ctx->pc == 0x124810u) {
        ctx->pc = 0x124814u;
        goto label_124814;
    }
    ctx->pc = 0x12480Cu;
    {
        const bool branch_taken_0x12480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12480c) {
            ctx->pc = 0x124A04u;
            goto label_124a04;
        }
    }
    ctx->pc = 0x124814u;
label_124814:
    // 0x124814: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_124818:
    // 0x124818: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_12481c:
    // 0x12481c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_124820:
    // 0x124820: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x124820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
label_124824:
    // 0x124824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_124828:
    // 0x124828: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x124828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_12482c:
    // 0x12482c: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x12482cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_124830:
    // 0x124830: 0x8f82ba44  lw          $v0, -0x45BC($gp)
    ctx->pc = 0x124830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124834:
    // 0x124834: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x124834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_124838:
    // 0x124838: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x124838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_12483c:
    // 0x12483c: 0x2442b820  addiu       $v0, $v0, -0x47E0
    ctx->pc = 0x12483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948896));
label_124840:
    // 0x124840: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x124840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_124844:
    // 0x124844: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x124844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_124848:
    // 0x124848: 0xc049394  jal         func_124E50
label_12484c:
    if (ctx->pc == 0x12484Cu) {
        ctx->pc = 0x124850u;
        goto label_124850;
    }
    ctx->pc = 0x124848u;
    SET_GPR_U32(ctx, 31, 0x124850u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x124848u, 0x124850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124850u;
label_124850:
    // 0x124850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124854:
    // 0x124854: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x124854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_124858:
    // 0x124858: 0x8c452210  lw          $a1, 0x2210($v0)
    ctx->pc = 0x124858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8720)));
label_12485c:
    // 0x12485c: 0xc119694  jal         func_465A50
label_124860:
    if (ctx->pc == 0x124860u) {
        ctx->pc = 0x124864u;
        goto label_124864;
    }
    ctx->pc = 0x12485Cu;
    SET_GPR_U32(ctx, 31, 0x124864u);
    ctx->pc = 0x465A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465A50u, 0x12485Cu, 0x124864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124864u;
label_124864:
    // 0x124864: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124868:
    // 0x124868: 0xafa30128  sw          $v1, 0x128($sp)
    ctx->pc = 0x124868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 3));
label_12486c:
    // 0x12486c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12486cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124870:
    // 0x124870: 0xa3a40159  sb          $a0, 0x159($sp)
    ctx->pc = 0x124870u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 345), (uint8_t)GPR_U32(ctx, 4));
label_124874:
    // 0x124874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124878:
    // 0x124878: 0xa3a30158  sb          $v1, 0x158($sp)
    ctx->pc = 0x124878u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 344), (uint8_t)GPR_U32(ctx, 3));
label_12487c:
    // 0x12487c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_124880:
    // 0x124880: 0x9043b485  lbu         $v1, -0x4B7B($v0)
    ctx->pc = 0x124880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947973)));
label_124884:
    // 0x124884: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_124888:
    if (ctx->pc == 0x124888u) {
        ctx->pc = 0x12488Cu;
        goto label_12488c;
    }
    ctx->pc = 0x124884u;
    {
        const bool branch_taken_0x124884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124884) {
            ctx->pc = 0x1248A4u;
            goto label_1248a4;
        }
    }
    ctx->pc = 0x12488Cu;
label_12488c:
    // 0x12488c: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x12488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_124890:
    // 0x124890: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x124890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_124894:
    // 0x124894: 0x8c432210  lw          $v1, 0x2210($v0)
    ctx->pc = 0x124894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8720)));
label_124898:
    // 0x124898: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_12489c:
    if (ctx->pc == 0x12489Cu) {
        ctx->pc = 0x1248A0u;
        goto label_1248a0;
    }
    ctx->pc = 0x124898u;
    {
        const bool branch_taken_0x124898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124898) {
            ctx->pc = 0x1248A4u;
            goto label_1248a4;
        }
    }
    ctx->pc = 0x1248A0u;
label_1248a0:
    // 0x1248a0: 0xa3a00158  sb          $zero, 0x158($sp)
    ctx->pc = 0x1248a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 344), (uint8_t)GPR_U32(ctx, 0));
label_1248a4:
    // 0x1248a4: 0x93a30158  lbu         $v1, 0x158($sp)
    ctx->pc = 0x1248a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 344)));
label_1248a8:
    // 0x1248a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_1248ac:
    if (ctx->pc == 0x1248ACu) {
        ctx->pc = 0x1248B0u;
        goto label_1248b0;
    }
    ctx->pc = 0x1248A8u;
    {
        const bool branch_taken_0x1248a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1248a8) {
            ctx->pc = 0x1248D8u;
            goto label_1248d8;
        }
    }
    ctx->pc = 0x1248B0u;
label_1248b0:
    // 0x1248b0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x1248b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_1248b4:
    // 0x1248b4: 0x8f83ba44  lw          $v1, -0x45BC($gp)
    ctx->pc = 0x1248b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1248b8:
    // 0x1248b8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1248b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1248bc:
    // 0x1248bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1248bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1248c0:
    // 0x1248c0: 0x2463bd40  addiu       $v1, $v1, -0x42C0
    ctx->pc = 0x1248c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950208));
label_1248c4:
    // 0x1248c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1248c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1248c8:
    // 0x1248c8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1248c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1248cc:
    // 0x1248cc: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
label_1248d0:
    if (ctx->pc == 0x1248D0u) {
        ctx->pc = 0x1248D4u;
        goto label_1248d4;
    }
    ctx->pc = 0x1248CCu;
    {
        const bool branch_taken_0x1248cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1248cc) {
            ctx->pc = 0x1248D8u;
            goto label_1248d8;
        }
    }
    ctx->pc = 0x1248D4u;
label_1248d4:
    // 0x1248d4: 0xa3a00159  sb          $zero, 0x159($sp)
    ctx->pc = 0x1248d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 345), (uint8_t)GPR_U32(ctx, 0));
label_1248d8:
    // 0x1248d8: 0x93a40159  lbu         $a0, 0x159($sp)
    ctx->pc = 0x1248d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 345)));
label_1248dc:
    // 0x1248dc: 0xa3a4015f  sb          $a0, 0x15F($sp)
    ctx->pc = 0x1248dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 351), (uint8_t)GPR_U32(ctx, 4));
label_1248e0:
    // 0x1248e0: 0x93a3015f  lbu         $v1, 0x15F($sp)
    ctx->pc = 0x1248e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 351)));
label_1248e4:
    // 0x1248e4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_1248e8:
    if (ctx->pc == 0x1248E8u) {
        ctx->pc = 0x1248ECu;
        goto label_1248ec;
    }
    ctx->pc = 0x1248E4u;
    {
        const bool branch_taken_0x1248e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248e4) {
            ctx->pc = 0x124944u;
            goto label_124944;
        }
    }
    ctx->pc = 0x1248ECu;
label_1248ec:
    // 0x1248ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1248ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1248f0:
    // 0x1248f0: 0xc04939c  jal         func_124E70
label_1248f4:
    if (ctx->pc == 0x1248F4u) {
        ctx->pc = 0x1248F8u;
        goto label_1248f8;
    }
    ctx->pc = 0x1248F0u;
    SET_GPR_U32(ctx, 31, 0x1248F8u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x1248F0u, 0x1248F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1248F8u;
label_1248f8:
    // 0x1248f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1248f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1248fc:
    // 0x1248fc: 0x8f82ba44  lw          $v0, -0x45BC($gp)
    ctx->pc = 0x1248fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124900:
    // 0x124900: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x124900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_124904:
    // 0x124904: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x124904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_124908:
    // 0x124908: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x124908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12490c:
    // 0x12490c: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x12490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_124910:
    // 0x124910: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x124910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_124914:
    // 0x124914: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x124914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_124918:
    // 0x124918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12491c:
    // 0x12491c: 0xc04939c  jal         func_124E70
label_124920:
    if (ctx->pc == 0x124920u) {
        ctx->pc = 0x124924u;
        goto label_124924;
    }
    ctx->pc = 0x12491Cu;
    SET_GPR_U32(ctx, 31, 0x124924u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x12491Cu, 0x124924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124924u;
label_124924:
    // 0x124924: 0x8f83ba44  lw          $v1, -0x45BC($gp)
    ctx->pc = 0x124924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124928:
    // 0x124928: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x124928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12492c:
    // 0x12492c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_124930:
    // 0x124930: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_124934:
    // 0x124934: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x124934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_124938:
    // 0x124938: 0xac83006c  sw          $v1, 0x6C($a0)
    ctx->pc = 0x124938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 3));
label_12493c:
    // 0x12493c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_124940:
    if (ctx->pc == 0x124940u) {
        ctx->pc = 0x124944u;
        goto label_124944;
    }
    ctx->pc = 0x12493Cu;
    {
        const bool branch_taken_0x12493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12493c) {
            ctx->pc = 0x1249F8u;
            goto label_1249f8;
        }
    }
    ctx->pc = 0x124944u;
label_124944:
    // 0x124944: 0x8f84ba44  lw          $a0, -0x45BC($gp)
    ctx->pc = 0x124944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_124948:
    // 0x124948: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x124948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_12494c:
    // 0x12494c: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x12494cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_124950:
    // 0x124950: 0x24c6b820  addiu       $a2, $a2, -0x47E0
    ctx->pc = 0x124950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948896));
label_124954:
    // 0x124954: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x124954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_124958:
    // 0x124958: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x124958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12495c:
    // 0x12495c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124960:
    // 0x124960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124964:
    // 0x124964: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x124964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_124968:
    // 0x124968: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x124968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_12496c:
    // 0x12496c: 0x320f809  jalr        $t9
label_124970:
    if (ctx->pc == 0x124970u) {
        ctx->pc = 0x124974u;
        goto label_124974;
    }
    ctx->pc = 0x12496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x124974u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12496Cu, 0x124974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124974u;
label_124974:
    // 0x124974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124978:
    // 0x124978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12497c:
    // 0x12497c: 0xc04939c  jal         func_124E70
label_124980:
    if (ctx->pc == 0x124980u) {
        ctx->pc = 0x124984u;
        goto label_124984;
    }
    ctx->pc = 0x12497Cu;
    SET_GPR_U32(ctx, 31, 0x124984u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x12497Cu, 0x124984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124984u;
label_124984:
    // 0x124984: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x124984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124988:
    // 0x124988: 0x8f82ba44  lw          $v0, -0x45BC($gp)
    ctx->pc = 0x124988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_12498c:
    // 0x12498c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x12498cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_124990:
    // 0x124990: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x124990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_124994:
    // 0x124994: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x124994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_124998:
    // 0x124998: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x124998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12499c:
    // 0x12499c: 0x8f82ba44  lw          $v0, -0x45BC($gp)
    ctx->pc = 0x12499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1249a0:
    // 0x1249a0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1249a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1249a4:
    // 0x1249a4: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x1249a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_1249a8:
    // 0x1249a8: 0x24a5b820  addiu       $a1, $a1, -0x47E0
    ctx->pc = 0x1249a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948896));
label_1249ac:
    // 0x1249ac: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1249acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1249b0:
    // 0x1249b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1249b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1249b4:
    // 0x1249b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1249b8:
    // 0x1249b8: 0xc08cf64  jal         func_233D90
label_1249bc:
    if (ctx->pc == 0x1249BCu) {
        ctx->pc = 0x1249C0u;
        goto label_1249c0;
    }
    ctx->pc = 0x1249B8u;
    SET_GPR_U32(ctx, 31, 0x1249C0u);
    ctx->pc = 0x233D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D90u, 0x1249B8u, 0x1249C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249C0u;
label_1249c0:
    // 0x1249c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1249c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1249c4:
    // 0x1249c4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1249c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1249c8:
    // 0x1249c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1249cc:
    if (ctx->pc == 0x1249CCu) {
        ctx->pc = 0x1249D0u;
        goto label_1249d0;
    }
    ctx->pc = 0x1249C8u;
    {
        const bool branch_taken_0x1249c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1249c8) {
            ctx->pc = 0x1249F0u;
            goto label_1249f0;
        }
    }
    ctx->pc = 0x1249D0u;
label_1249d0:
    // 0x1249d0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1249d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1249d4:
    // 0x1249d4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1249d8:
    if (ctx->pc == 0x1249D8u) {
        ctx->pc = 0x1249DCu;
        goto label_1249dc;
    }
    ctx->pc = 0x1249D4u;
    {
        const bool branch_taken_0x1249d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1249d4) {
            ctx->pc = 0x1249F0u;
            goto label_1249f0;
        }
    }
    ctx->pc = 0x1249DCu;
label_1249dc:
    // 0x1249dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1249dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1249e0:
    // 0x1249e0: 0xae63006c  sw          $v1, 0x6C($s3)
    ctx->pc = 0x1249e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 3));
label_1249e4:
    // 0x1249e4: 0xa2600034  sb          $zero, 0x34($s3)
    ctx->pc = 0x1249e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 0));
label_1249e8:
    // 0x1249e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1249ec:
    if (ctx->pc == 0x1249ECu) {
        ctx->pc = 0x1249F0u;
        goto label_1249f0;
    }
    ctx->pc = 0x1249E8u;
    {
        const bool branch_taken_0x1249e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1249e8) {
            ctx->pc = 0x1249F8u;
            goto label_1249f8;
        }
    }
    ctx->pc = 0x1249F0u;
label_1249f0:
    // 0x1249f0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1249f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1249f4:
    // 0x1249f4: 0xae63006c  sw          $v1, 0x6C($s3)
    ctx->pc = 0x1249f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 3));
label_1249f8:
    // 0x1249f8: 0x8f83ba44  lw          $v1, -0x45BC($gp)
    ctx->pc = 0x1249f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949444)));
label_1249fc:
    // 0x1249fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1249fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_124a00:
    // 0x124a00: 0xaf83ba44  sw          $v1, -0x45BC($gp)
    ctx->pc = 0x124a00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949444), GPR_U32(ctx, 3));
label_124a04:
    // 0x124a04: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_124a08:
    if (ctx->pc == 0x124A08u) {
        ctx->pc = 0x124A0Cu;
        goto label_124a0c;
    }
    ctx->pc = 0x124A04u;
    {
        const bool branch_taken_0x124a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124a04) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124A0Cu;
label_124a0c:
    // 0x124a0c: 0x8f84b9f8  lw          $a0, -0x4608($gp)
    ctx->pc = 0x124a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_124a10:
    // 0x124a10: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x124a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_124a14:
    // 0x124a14: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_124a18:
    if (ctx->pc == 0x124A18u) {
        ctx->pc = 0x124A1Cu;
        goto label_124a1c;
    }
    ctx->pc = 0x124A14u;
    {
        const bool branch_taken_0x124a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124a14) {
            ctx->pc = 0x124AECu;
            goto label_124aec;
        }
    }
    ctx->pc = 0x124A1Cu;
label_124a1c:
    // 0x124a1c: 0x9384ba28  lbu         $a0, -0x45D8($gp)
    ctx->pc = 0x124a1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949416)));
label_124a20:
    // 0x124a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124a24:
    // 0x124a24: 0xc04a018  jal         func_128060
label_124a28:
    if (ctx->pc == 0x124A28u) {
        ctx->pc = 0x124A2Cu;
        goto label_124a2c;
    }
    ctx->pc = 0x124A24u;
    SET_GPR_U32(ctx, 31, 0x124A2Cu);
    ctx->pc = 0x128060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128060u, 0x124A24u, 0x124A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A2Cu;
label_124a2c:
    // 0x124a2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x124a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124a30:
    // 0x124a30: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x124a30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_124a34:
    // 0x124a34: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x124a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_124a38:
    // 0x124a38: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x124a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_124a3c:
    // 0x124a3c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x124a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_124a40:
    // 0x124a40: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x124a40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_124a44:
    // 0x124a44: 0x2508b490  addiu       $t0, $t0, -0x4B70
    ctx->pc = 0x124a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947984));
label_124a48:
    // 0x124a48: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x124a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_124a4c:
    // 0x124a4c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x124a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_124a50:
    // 0x124a50: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x124a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_124a54:
    // 0x124a54: 0x77082b  sltu        $at, $v1, $s7
    ctx->pc = 0x124a54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_124a58:
    // 0x124a58: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_124a5c:
    if (ctx->pc == 0x124A5Cu) {
        ctx->pc = 0x124A60u;
        goto label_124a60;
    }
    ctx->pc = 0x124A58u;
    {
        const bool branch_taken_0x124a58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x124a58) {
            ctx->pc = 0x124A7Cu;
            goto label_124a7c;
        }
    }
    ctx->pc = 0x124A60u;
label_124a60:
    // 0x124a60: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x124a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_124a64:
    // 0x124a64: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x124a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_124a68:
    // 0x124a68: 0xc04aa58  jal         func_12A960
label_124a6c:
    if (ctx->pc == 0x124A6Cu) {
        ctx->pc = 0x124A70u;
        goto label_124a70;
    }
    ctx->pc = 0x124A68u;
    SET_GPR_U32(ctx, 31, 0x124A70u);
    ctx->pc = 0x12A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A960u, 0x124A68u, 0x124A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124A70u;
label_124a70:
    // 0x124a70: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x124a70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124a74:
    // 0x124a74: 0x1500002f  bnez        $t0, . + 4 + (0x2F << 2)
label_124a78:
    if (ctx->pc == 0x124A78u) {
        ctx->pc = 0x124A7Cu;
        goto label_124a7c;
    }
    ctx->pc = 0x124A74u;
    {
        const bool branch_taken_0x124a74 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x124a74) {
            ctx->pc = 0x124B34u;
            goto label_124b34;
        }
    }
    ctx->pc = 0x124A7Cu;
label_124a7c:
    // 0x124a7c: 0x12e0002d  beqz        $s7, . + 4 + (0x2D << 2)
label_124a80:
    if (ctx->pc == 0x124A80u) {
        ctx->pc = 0x124A84u;
        goto label_124a84;
    }
    ctx->pc = 0x124A7Cu;
    {
        const bool branch_taken_0x124a7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x124a7c) {
            ctx->pc = 0x124B34u;
            goto label_124b34;
        }
    }
    ctx->pc = 0x124A84u;
label_124a84:
    // 0x124a84: 0x26e90003  addiu       $t1, $s7, 0x3
    ctx->pc = 0x124a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 3));
label_124a88:
    // 0x124a88: 0x105040  sll         $t2, $s0, 1
    ctx->pc = 0x124a88u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_124a8c:
    // 0x124a8c: 0x1501821  addu        $v1, $t2, $s0
    ctx->pc = 0x124a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
label_124a90:
    // 0x124a90: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x124a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_124a94:
    // 0x124a94: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124a98:
    // 0x124a98: 0x2463b490  addiu       $v1, $v1, -0x4B70
    ctx->pc = 0x124a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947984));
label_124a9c:
    // 0x124a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x124a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_124aa0:
    // 0x124aa0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x124aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_124aa4:
    // 0x124aa4: 0x69082b  sltu        $at, $v1, $t1
    ctx->pc = 0x124aa4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_124aa8:
    // 0x124aa8: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_124aac:
    if (ctx->pc == 0x124AACu) {
        ctx->pc = 0x124AB0u;
        goto label_124ab0;
    }
    ctx->pc = 0x124AA8u;
    {
        const bool branch_taken_0x124aa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x124aa8) {
            ctx->pc = 0x124B34u;
            goto label_124b34;
        }
    }
    ctx->pc = 0x124AB0u;
label_124ab0:
    // 0x124ab0: 0xc04a418  jal         func_129060
label_124ab4:
    if (ctx->pc == 0x124AB4u) {
        ctx->pc = 0x124AB8u;
        goto label_124ab8;
    }
    ctx->pc = 0x124AB0u;
    SET_GPR_U32(ctx, 31, 0x124AB8u);
    ctx->pc = 0x129060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129060u, 0x124AB0u, 0x124AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124AB8u;
label_124ab8:
    // 0x124ab8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x124ab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124abc:
    // 0x124abc: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x124abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_124ac0:
    // 0x124ac0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x124ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124ac4:
    // 0x124ac4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x124ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124ac8:
    // 0x124ac8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x124ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_124acc:
    // 0x124acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124ad0:
    // 0x124ad0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x124ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_124ad4:
    // 0x124ad4: 0x24c622e0  addiu       $a2, $a2, 0x22E0
    ctx->pc = 0x124ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8928));
label_124ad8:
    // 0x124ad8: 0xc125454  jal         func_495150
label_124adc:
    if (ctx->pc == 0x124ADCu) {
        ctx->pc = 0x124AE0u;
        goto label_124ae0;
    }
    ctx->pc = 0x124AD8u;
    SET_GPR_U32(ctx, 31, 0x124AE0u);
    ctx->pc = 0x495150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495150u, 0x124AD8u, 0x124AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124AE0u;
label_124ae0:
    // 0x124ae0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124ae4:
    // 0x124ae4: 0x10000013  b           . + 4 + (0x13 << 2)
label_124ae8:
    if (ctx->pc == 0x124AE8u) {
        ctx->pc = 0x124AECu;
        goto label_124aec;
    }
    ctx->pc = 0x124AE4u;
    {
        const bool branch_taken_0x124ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ae4) {
            ctx->pc = 0x124B34u;
            goto label_124b34;
        }
    }
    ctx->pc = 0x124AECu;
label_124aec:
    // 0x124aec: 0x8f83b9f8  lw          $v1, -0x4608($gp)
    ctx->pc = 0x124aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_124af0:
    // 0x124af0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x124af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_124af4:
    // 0x124af4: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
label_124af8:
    if (ctx->pc == 0x124AF8u) {
        ctx->pc = 0x124AFCu;
        goto label_124afc;
    }
    ctx->pc = 0x124AF4u;
    {
        const bool branch_taken_0x124af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x124af4) {
            ctx->pc = 0x124B34u;
            goto label_124b34;
        }
    }
    ctx->pc = 0x124AFCu;
label_124afc:
    // 0x124afc: 0x8f85ba24  lw          $a1, -0x45DC($gp)
    ctx->pc = 0x124afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949412)));
label_124b00:
    // 0x124b00: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
label_124b04:
    if (ctx->pc == 0x124B04u) {
        ctx->pc = 0x124B08u;
        goto label_124b08;
    }
    ctx->pc = 0x124B00u;
    {
        const bool branch_taken_0x124b00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x124b00) {
            ctx->pc = 0x124B34u;
            goto label_124b34;
        }
    }
    ctx->pc = 0x124B08u;
label_124b08:
    // 0x124b08: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x124b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_124b0c:
    // 0x124b0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x124b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124b10:
    // 0x124b10: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x124b10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_124b14:
    // 0x124b14: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x124b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_124b18:
    // 0x124b18: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x124b18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_124b1c:
    // 0x124b1c: 0x24c62260  addiu       $a2, $a2, 0x2260
    ctx->pc = 0x124b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8800));
label_124b20:
    // 0x124b20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x124b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124b24:
    // 0x124b24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x124b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124b28:
    // 0x124b28: 0xc125454  jal         func_495150
label_124b2c:
    if (ctx->pc == 0x124B2Cu) {
        ctx->pc = 0x124B30u;
        goto label_124b30;
    }
    ctx->pc = 0x124B28u;
    SET_GPR_U32(ctx, 31, 0x124B30u);
    ctx->pc = 0x495150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495150u, 0x124B28u, 0x124B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B30u;
label_124b30:
    // 0x124b30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124b30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124b34:
    // 0x124b34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x124b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124b38:
    // 0x124b38: 0xaf83b9ec  sw          $v1, -0x4614($gp)
    ctx->pc = 0x124b38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949356), GPR_U32(ctx, 3));
label_124b3c:
    // 0x124b3c: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_124b40:
    if (ctx->pc == 0x124B40u) {
        ctx->pc = 0x124B44u;
        goto label_124b44;
    }
    ctx->pc = 0x124B3Cu;
    {
        const bool branch_taken_0x124b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124b3c) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124B44u;
label_124b44:
    // 0x124b44: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x124b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124b48:
    // 0x124b48: 0xc088560  jal         func_221580
label_124b4c:
    if (ctx->pc == 0x124B4Cu) {
        ctx->pc = 0x124B50u;
        goto label_124b50;
    }
    ctx->pc = 0x124B48u;
    SET_GPR_U32(ctx, 31, 0x124B50u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x124B48u, 0x124B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B50u;
label_124b50:
    // 0x124b50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124b54:
    // 0x124b54: 0x8f84ba1c  lw          $a0, -0x45E4($gp)
    ctx->pc = 0x124b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
label_124b58:
    // 0x124b58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x124b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124b5c:
    // 0x124b5c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_124b60:
    if (ctx->pc == 0x124B60u) {
        ctx->pc = 0x124B64u;
        goto label_124b64;
    }
    ctx->pc = 0x124B5Cu;
    {
        const bool branch_taken_0x124b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124b5c) {
            ctx->pc = 0x124B74u;
            goto label_124b74;
        }
    }
    ctx->pc = 0x124B64u;
label_124b64:
    // 0x124b64: 0x8f84ba1c  lw          $a0, -0x45E4($gp)
    ctx->pc = 0x124b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
label_124b68:
    // 0x124b68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x124b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_124b6c:
    // 0x124b6c: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
label_124b70:
    if (ctx->pc == 0x124B70u) {
        ctx->pc = 0x124B74u;
        goto label_124b74;
    }
    ctx->pc = 0x124B6Cu;
    {
        const bool branch_taken_0x124b6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x124b6c) {
            ctx->pc = 0x124BA4u;
            goto label_124ba4;
        }
    }
    ctx->pc = 0x124B74u;
label_124b74:
    // 0x124b74: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x124b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
label_124b78:
    // 0x124b78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x124b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_124b7c:
    // 0x124b7c: 0x14850009  bne         $a0, $a1, . + 4 + (0x9 << 2)
label_124b80:
    if (ctx->pc == 0x124B80u) {
        ctx->pc = 0x124B84u;
        goto label_124b84;
    }
    ctx->pc = 0x124B7Cu;
    {
        const bool branch_taken_0x124b7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x124b7c) {
            ctx->pc = 0x124BA4u;
            goto label_124ba4;
        }
    }
    ctx->pc = 0x124B84u;
label_124b84:
    // 0x124b84: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x124b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124b88:
    // 0x124b88: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x124b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_124b8c:
    // 0x124b8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124b90:
    // 0x124b90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124b94:
    // 0x124b94: 0xc0887b4  jal         func_221ED0
label_124b98:
    if (ctx->pc == 0x124B98u) {
        ctx->pc = 0x124B9Cu;
        goto label_124b9c;
    }
    ctx->pc = 0x124B94u;
    SET_GPR_U32(ctx, 31, 0x124B9Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x124B94u, 0x124B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124B9Cu;
label_124b9c:
    // 0x124b9c: 0x1000008d  b           . + 4 + (0x8D << 2)
label_124ba0:
    if (ctx->pc == 0x124BA0u) {
        ctx->pc = 0x124BA4u;
        goto label_124ba4;
    }
    ctx->pc = 0x124B9Cu;
    {
        const bool branch_taken_0x124b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124b9c) {
            ctx->pc = 0x124DD4u;
            goto label_124dd4;
        }
    }
    ctx->pc = 0x124BA4u;
label_124ba4:
    // 0x124ba4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x124ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124ba8:
    // 0x124ba8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_124bac:
    if (ctx->pc == 0x124BACu) {
        ctx->pc = 0x124BB0u;
        goto label_124bb0;
    }
    ctx->pc = 0x124BA8u;
    {
        const bool branch_taken_0x124ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ba8) {
            ctx->pc = 0x124C68u;
            goto label_124c68;
        }
    }
    ctx->pc = 0x124BB0u;
label_124bb0:
    // 0x124bb0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x124bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_124bb4:
    // 0x124bb4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124bb8:
    // 0x124bb8: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x124bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
label_124bbc:
    // 0x124bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x124bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_124bc0:
    // 0x124bc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x124bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_124bc4:
    // 0x124bc4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_124bc8:
    if (ctx->pc == 0x124BC8u) {
        ctx->pc = 0x124BCCu;
        goto label_124bcc;
    }
    ctx->pc = 0x124BC4u;
    {
        const bool branch_taken_0x124bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124bc4) {
            ctx->pc = 0x124C60u;
            goto label_124c60;
        }
    }
    ctx->pc = 0x124BCCu;
label_124bcc:
    // 0x124bcc: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x124bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_124bd0:
    // 0x124bd0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124bd4:
    // 0x124bd4: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x124bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
label_124bd8:
    // 0x124bd8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x124bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_124bdc:
    // 0x124bdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x124bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_124be0:
    // 0x124be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124be4:
    // 0x124be4: 0xc119f88  jal         func_467E20
label_124be8:
    if (ctx->pc == 0x124BE8u) {
        ctx->pc = 0x124BECu;
        goto label_124bec;
    }
    ctx->pc = 0x124BE4u;
    SET_GPR_U32(ctx, 31, 0x124BECu);
    ctx->pc = 0x467E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467E20u, 0x124BE4u, 0x124BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BECu;
label_124bec:
    // 0x124bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124bf0:
    // 0x124bf0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x124bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_124bf4:
    // 0x124bf4: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x124bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_124bf8:
    // 0x124bf8: 0x2508b820  addiu       $t0, $t0, -0x47E0
    ctx->pc = 0x124bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948896));
label_124bfc:
    // 0x124bfc: 0x1033021  addu        $a2, $t0, $v1
    ctx->pc = 0x124bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_124c00:
    // 0x124c00: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x124c00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_124c04:
    // 0x124c04: 0x11200016  beqz        $t1, . + 4 + (0x16 << 2)
label_124c08:
    if (ctx->pc == 0x124C08u) {
        ctx->pc = 0x124C0Cu;
        goto label_124c0c;
    }
    ctx->pc = 0x124C04u;
    {
        const bool branch_taken_0x124c04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c04) {
            ctx->pc = 0x124C60u;
            goto label_124c60;
        }
    }
    ctx->pc = 0x124C0Cu;
label_124c0c:
    // 0x124c0c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x124c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_124c10:
    // 0x124c10: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x124c10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
label_124c14:
    // 0x124c14: 0x26b5b820  addiu       $s5, $s5, -0x47E0
    ctx->pc = 0x124c14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948896));
label_124c18:
    // 0x124c18: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x124c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_124c1c:
    // 0x124c1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x124c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_124c20:
    // 0x124c20: 0xc049384  jal         func_124E10
label_124c24:
    if (ctx->pc == 0x124C24u) {
        ctx->pc = 0x124C28u;
        goto label_124c28;
    }
    ctx->pc = 0x124C20u;
    SET_GPR_U32(ctx, 31, 0x124C28u);
    ctx->pc = 0x124E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E10u, 0x124C20u, 0x124C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C28u;
label_124c28:
    // 0x124c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124c2c:
    // 0x124c2c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x124c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_124c30:
    // 0x124c30: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124c34:
    // 0x124c34: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x124c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
label_124c38:
    // 0x124c38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_124c3c:
    // 0x124c3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x124c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_124c40:
    // 0x124c40: 0xc119c5c  jal         func_467170
label_124c44:
    if (ctx->pc == 0x124C44u) {
        ctx->pc = 0x124C48u;
        goto label_124c48;
    }
    ctx->pc = 0x124C40u;
    SET_GPR_U32(ctx, 31, 0x124C48u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x124C40u, 0x124C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C48u;
label_124c48:
    // 0x124c48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124c48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124c4c:
    // 0x124c4c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x124c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_124c50:
    // 0x124c50: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x124c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_124c54:
    // 0x124c54: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x124c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
label_124c58:
    // 0x124c58: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x124c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_124c5c:
    // 0x124c5c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x124c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_124c60:
    // 0x124c60: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x124c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_124c64:
    // 0x124c64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124c68:
    // 0x124c68: 0x2e450004  sltiu       $a1, $s2, 0x4
    ctx->pc = 0x124c68u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_124c6c:
    // 0x124c6c: 0x14a0ffd0  bnez        $a1, . + 4 + (-0x30 << 2)
label_124c70:
    if (ctx->pc == 0x124C70u) {
        ctx->pc = 0x124C74u;
        goto label_124c74;
    }
    ctx->pc = 0x124C6Cu;
    {
        const bool branch_taken_0x124c6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x124c6c) {
            ctx->pc = 0x124BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124bb0;
        }
    }
    ctx->pc = 0x124C74u;
label_124c74:
    // 0x124c74: 0x8f86ba1c  lw          $a2, -0x45E4($gp)
    ctx->pc = 0x124c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
label_124c78:
    // 0x124c78: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x124c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124c7c:
    // 0x124c7c: 0x10c80009  beq         $a2, $t0, . + 4 + (0x9 << 2)
label_124c80:
    if (ctx->pc == 0x124C80u) {
        ctx->pc = 0x124C84u;
        goto label_124c84;
    }
    ctx->pc = 0x124C7Cu;
    {
        const bool branch_taken_0x124c7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x124c7c) {
            ctx->pc = 0x124CA4u;
            goto label_124ca4;
        }
    }
    ctx->pc = 0x124C84u;
label_124c84:
    // 0x124c84: 0x8f82ba1c  lw          $v0, -0x45E4($gp)
    ctx->pc = 0x124c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949404)));
label_124c88:
    // 0x124c88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x124c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_124c8c:
    // 0x124c8c: 0x14430031  bne         $v0, $v1, . + 4 + (0x31 << 2)
label_124c90:
    if (ctx->pc == 0x124C90u) {
        ctx->pc = 0x124C94u;
        goto label_124c94;
    }
    ctx->pc = 0x124C8Cu;
    {
        const bool branch_taken_0x124c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x124c8c) {
            ctx->pc = 0x124D54u;
            goto label_124d54;
        }
    }
    ctx->pc = 0x124C94u;
label_124c94:
    // 0x124c94: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x124c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
label_124c98:
    // 0x124c98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x124c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124c9c:
    // 0x124c9c: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
label_124ca0:
    if (ctx->pc == 0x124CA0u) {
        ctx->pc = 0x124CA4u;
        goto label_124ca4;
    }
    ctx->pc = 0x124C9Cu;
    {
        const bool branch_taken_0x124c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124c9c) {
            ctx->pc = 0x124D54u;
            goto label_124d54;
        }
    }
    ctx->pc = 0x124CA4u;
label_124ca4:
    // 0x124ca4: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x124ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_124ca8:
    // 0x124ca8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x124ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_124cac:
    // 0x124cac: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x124cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_124cb0:
    // 0x124cb0: 0x320f809  jalr        $t9
label_124cb4:
    if (ctx->pc == 0x124CB4u) {
        ctx->pc = 0x124CB8u;
        goto label_124cb8;
    }
    ctx->pc = 0x124CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x124CB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124CB0u, 0x124CB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124CB8u;
label_124cb8:
    // 0x124cb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124cbc:
    // 0x124cbc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x124cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_124cc0:
    // 0x124cc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124cc4:
    // 0x124cc4: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_124cc8:
    if (ctx->pc == 0x124CC8u) {
        ctx->pc = 0x124CCCu;
        goto label_124ccc;
    }
    ctx->pc = 0x124CC4u;
    {
        const bool branch_taken_0x124cc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x124cc4) {
            ctx->pc = 0x124CE4u;
            goto label_124ce4;
        }
    }
    ctx->pc = 0x124CCCu;
label_124ccc:
    // 0x124ccc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x124cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_124cd0:
    // 0x124cd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x124cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_124cd4:
    // 0x124cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x124cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124cd8:
    // 0x124cd8: 0xc04a424  jal         func_129090
label_124cdc:
    if (ctx->pc == 0x124CDCu) {
        ctx->pc = 0x124CE0u;
        goto label_124ce0;
    }
    ctx->pc = 0x124CD8u;
    SET_GPR_U32(ctx, 31, 0x124CE0u);
    ctx->pc = 0x129090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129090u, 0x124CD8u, 0x124CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CE0u;
label_124ce0:
    // 0x124ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124ce4:
    // 0x124ce4: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x124ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124ce8:
    // 0x124ce8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x124ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_124cec:
    // 0x124cec: 0x2402054c  addiu       $v0, $zero, 0x54C
    ctx->pc = 0x124cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_124cf0:
    // 0x124cf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124cf4:
    // 0x124cf4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x124cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_124cf8:
    // 0x124cf8: 0xc040924  jal         func_102490
label_124cfc:
    if (ctx->pc == 0x124CFCu) {
        ctx->pc = 0x124D00u;
        goto label_124d00;
    }
    ctx->pc = 0x124CF8u;
    SET_GPR_U32(ctx, 31, 0x124D00u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x124CF8u, 0x124D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D00u;
label_124d00:
    // 0x124d00: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x124d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124d04:
    // 0x124d04: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x124d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
label_124d08:
    // 0x124d08: 0x8f86b9f8  lw          $a2, -0x4608($gp)
    ctx->pc = 0x124d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_124d0c:
    // 0x124d0c: 0xc040924  jal         func_102490
label_124d10:
    if (ctx->pc == 0x124D10u) {
        ctx->pc = 0x124D14u;
        goto label_124d14;
    }
    ctx->pc = 0x124D0Cu;
    SET_GPR_U32(ctx, 31, 0x124D14u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x124D0Cu, 0x124D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D14u;
label_124d14:
    // 0x124d14: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x124d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124d18:
    // 0x124d18: 0x24020554  addiu       $v0, $zero, 0x554
    ctx->pc = 0x124d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
label_124d1c:
    // 0x124d1c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x124d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_124d20:
    // 0x124d20: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x124d20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_124d24:
    // 0x124d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124d28:
    // 0x124d28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x124d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124d2c:
    // 0x124d2c: 0xc041b54  jal         func_106D50
label_124d30:
    if (ctx->pc == 0x124D30u) {
        ctx->pc = 0x124D34u;
        goto label_124d34;
    }
    ctx->pc = 0x124D2Cu;
    SET_GPR_U32(ctx, 31, 0x124D34u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x124D2Cu, 0x124D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D34u;
label_124d34:
    // 0x124d34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124d38:
    // 0x124d38: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x124d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_124d3c:
    // 0x124d3c: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x124d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124d40:
    // 0x124d40: 0xc08ef28  jal         func_23BCA0
label_124d44:
    if (ctx->pc == 0x124D44u) {
        ctx->pc = 0x124D48u;
        goto label_124d48;
    }
    ctx->pc = 0x124D40u;
    SET_GPR_U32(ctx, 31, 0x124D48u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x124D40u, 0x124D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D48u;
label_124d48:
    // 0x124d48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124d4c:
    // 0x124d4c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_124d50:
    if (ctx->pc == 0x124D50u) {
        ctx->pc = 0x124D54u;
        goto label_124d54;
    }
    ctx->pc = 0x124D4Cu;
    {
        const bool branch_taken_0x124d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d4c) {
            ctx->pc = 0x124DBCu;
            goto label_124dbc;
        }
    }
    ctx->pc = 0x124D54u;
label_124d54:
    // 0x124d54: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x124d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_124d58:
    // 0x124d58: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x124d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_124d5c:
    // 0x124d5c: 0xc0553d4  jal         func_154F50
label_124d60:
    if (ctx->pc == 0x124D60u) {
        ctx->pc = 0x124D64u;
        goto label_124d64;
    }
    ctx->pc = 0x124D5Cu;
    SET_GPR_U32(ctx, 31, 0x124D64u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x124D5Cu, 0x124D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D64u;
label_124d64:
    // 0x124d64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124d68:
    // 0x124d68: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x124d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
label_124d6c:
    // 0x124d6c: 0x8f85b9f8  lw          $a1, -0x4608($gp)
    ctx->pc = 0x124d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_124d70:
    // 0x124d70: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x124d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_124d74:
    // 0x124d74: 0xc05afd4  jal         func_16BF50
label_124d78:
    if (ctx->pc == 0x124D78u) {
        ctx->pc = 0x124D7Cu;
        goto label_124d7c;
    }
    ctx->pc = 0x124D74u;
    SET_GPR_U32(ctx, 31, 0x124D7Cu);
    ctx->pc = 0x16BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF50u, 0x124D74u, 0x124D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D7Cu;
label_124d7c:
    // 0x124d7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124d7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124d80:
    // 0x124d80: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x124d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_124d84:
    // 0x124d84: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x124d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_124d88:
    // 0x124d88: 0x24050568  addiu       $a1, $zero, 0x568
    ctx->pc = 0x124d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
label_124d8c:
    // 0x124d8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x124d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124d90:
    // 0x124d90: 0xc040ab0  jal         func_102AC0
label_124d94:
    if (ctx->pc == 0x124D94u) {
        ctx->pc = 0x124D98u;
        goto label_124d98;
    }
    ctx->pc = 0x124D90u;
    SET_GPR_U32(ctx, 31, 0x124D98u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x124D90u, 0x124D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D98u;
label_124d98:
    // 0x124d98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x124d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124d9c:
    // 0x124d9c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x124d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124da0:
    // 0x124da0: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x124da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_124da4:
    // 0x124da4: 0xc040924  jal         func_102490
label_124da8:
    if (ctx->pc == 0x124DA8u) {
        ctx->pc = 0x124DACu;
        goto label_124dac;
    }
    ctx->pc = 0x124DA4u;
    SET_GPR_U32(ctx, 31, 0x124DACu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x124DA4u, 0x124DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DACu;
label_124dac:
    // 0x124dac: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x124dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_124db0:
    // 0x124db0: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x124db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124db4:
    // 0x124db4: 0xc08ef28  jal         func_23BCA0
label_124db8:
    if (ctx->pc == 0x124DB8u) {
        ctx->pc = 0x124DBCu;
        goto label_124dbc;
    }
    ctx->pc = 0x124DB4u;
    SET_GPR_U32(ctx, 31, 0x124DBCu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x124DB4u, 0x124DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DBCu;
label_124dbc:
    // 0x124dbc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x124dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_124dc0:
    // 0x124dc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124dc4:
    // 0x124dc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124dc8:
    // 0x124dc8: 0xc0887b4  jal         func_221ED0
label_124dcc:
    if (ctx->pc == 0x124DCCu) {
        ctx->pc = 0x124DD0u;
        goto label_124dd0;
    }
    ctx->pc = 0x124DC8u;
    SET_GPR_U32(ctx, 31, 0x124DD0u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x124DC8u, 0x124DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DD0u;
label_124dd0:
    // 0x124dd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124dd4:
    // 0x124dd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x124dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_124dd8:
    // 0x124dd8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x124dd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_124ddc:
    // 0x124ddc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x124ddcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_124de0:
    // 0x124de0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x124de0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_124de4:
    // 0x124de4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x124de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_124de8:
    // 0x124de8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x124de8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_124dec:
    // 0x124dec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x124decu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_124df0:
    // 0x124df0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x124df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_124df4:
    // 0x124df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x124df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_124df8:
    // 0x124df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_124dfc:
    // 0x124dfc: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x124dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_124e00:
    // 0x124e00: 0x3e00008  jr          $ra
label_124e04:
    if (ctx->pc == 0x124E04u) {
        ctx->pc = 0x124E08u;
        goto label_124e08;
    }
    ctx->pc = 0x124E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124E08u;
label_124e08:
    // 0x124e08: 0x0  nop
    ctx->pc = 0x124e08u;
    // NOP
label_124e0c:
    // 0x124e0c: 0x0  nop
    ctx->pc = 0x124e0cu;
    // NOP
    ctx->pc = 0x124e10u;
}
