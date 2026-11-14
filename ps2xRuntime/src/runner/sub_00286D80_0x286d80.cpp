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

// Function: sub_00286D80
// Address: 0x286d80 - 0x287f20
void sub_00286D80_0x286d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286D80_0x286d80");
#endif

    switch (ctx->pc) {
        case 0x286d80u: goto label_286d80;
        case 0x286d84u: goto label_286d84;
        case 0x286d88u: goto label_286d88;
        case 0x286d8cu: goto label_286d8c;
        case 0x286d90u: goto label_286d90;
        case 0x286d94u: goto label_286d94;
        case 0x286d98u: goto label_286d98;
        case 0x286d9cu: goto label_286d9c;
        case 0x286da0u: goto label_286da0;
        case 0x286da4u: goto label_286da4;
        case 0x286da8u: goto label_286da8;
        case 0x286dacu: goto label_286dac;
        case 0x286db0u: goto label_286db0;
        case 0x286db4u: goto label_286db4;
        case 0x286db8u: goto label_286db8;
        case 0x286dbcu: goto label_286dbc;
        case 0x286dc0u: goto label_286dc0;
        case 0x286dc4u: goto label_286dc4;
        case 0x286dc8u: goto label_286dc8;
        case 0x286dccu: goto label_286dcc;
        case 0x286dd0u: goto label_286dd0;
        case 0x286dd4u: goto label_286dd4;
        case 0x286dd8u: goto label_286dd8;
        case 0x286ddcu: goto label_286ddc;
        case 0x286de0u: goto label_286de0;
        case 0x286de4u: goto label_286de4;
        case 0x286de8u: goto label_286de8;
        case 0x286decu: goto label_286dec;
        case 0x286df0u: goto label_286df0;
        case 0x286df4u: goto label_286df4;
        case 0x286df8u: goto label_286df8;
        case 0x286dfcu: goto label_286dfc;
        case 0x286e00u: goto label_286e00;
        case 0x286e04u: goto label_286e04;
        case 0x286e08u: goto label_286e08;
        case 0x286e0cu: goto label_286e0c;
        case 0x286e10u: goto label_286e10;
        case 0x286e14u: goto label_286e14;
        case 0x286e18u: goto label_286e18;
        case 0x286e1cu: goto label_286e1c;
        case 0x286e20u: goto label_286e20;
        case 0x286e24u: goto label_286e24;
        case 0x286e28u: goto label_286e28;
        case 0x286e2cu: goto label_286e2c;
        case 0x286e30u: goto label_286e30;
        case 0x286e34u: goto label_286e34;
        case 0x286e38u: goto label_286e38;
        case 0x286e3cu: goto label_286e3c;
        case 0x286e40u: goto label_286e40;
        case 0x286e44u: goto label_286e44;
        case 0x286e48u: goto label_286e48;
        case 0x286e4cu: goto label_286e4c;
        case 0x286e50u: goto label_286e50;
        case 0x286e54u: goto label_286e54;
        case 0x286e58u: goto label_286e58;
        case 0x286e5cu: goto label_286e5c;
        case 0x286e60u: goto label_286e60;
        case 0x286e64u: goto label_286e64;
        case 0x286e68u: goto label_286e68;
        case 0x286e6cu: goto label_286e6c;
        case 0x286e70u: goto label_286e70;
        case 0x286e74u: goto label_286e74;
        case 0x286e78u: goto label_286e78;
        case 0x286e7cu: goto label_286e7c;
        case 0x286e80u: goto label_286e80;
        case 0x286e84u: goto label_286e84;
        case 0x286e88u: goto label_286e88;
        case 0x286e8cu: goto label_286e8c;
        case 0x286e90u: goto label_286e90;
        case 0x286e94u: goto label_286e94;
        case 0x286e98u: goto label_286e98;
        case 0x286e9cu: goto label_286e9c;
        case 0x286ea0u: goto label_286ea0;
        case 0x286ea4u: goto label_286ea4;
        case 0x286ea8u: goto label_286ea8;
        case 0x286eacu: goto label_286eac;
        case 0x286eb0u: goto label_286eb0;
        case 0x286eb4u: goto label_286eb4;
        case 0x286eb8u: goto label_286eb8;
        case 0x286ebcu: goto label_286ebc;
        case 0x286ec0u: goto label_286ec0;
        case 0x286ec4u: goto label_286ec4;
        case 0x286ec8u: goto label_286ec8;
        case 0x286eccu: goto label_286ecc;
        case 0x286ed0u: goto label_286ed0;
        case 0x286ed4u: goto label_286ed4;
        case 0x286ed8u: goto label_286ed8;
        case 0x286edcu: goto label_286edc;
        case 0x286ee0u: goto label_286ee0;
        case 0x286ee4u: goto label_286ee4;
        case 0x286ee8u: goto label_286ee8;
        case 0x286eecu: goto label_286eec;
        case 0x286ef0u: goto label_286ef0;
        case 0x286ef4u: goto label_286ef4;
        case 0x286ef8u: goto label_286ef8;
        case 0x286efcu: goto label_286efc;
        case 0x286f00u: goto label_286f00;
        case 0x286f04u: goto label_286f04;
        case 0x286f08u: goto label_286f08;
        case 0x286f0cu: goto label_286f0c;
        case 0x286f10u: goto label_286f10;
        case 0x286f14u: goto label_286f14;
        case 0x286f18u: goto label_286f18;
        case 0x286f1cu: goto label_286f1c;
        case 0x286f20u: goto label_286f20;
        case 0x286f24u: goto label_286f24;
        case 0x286f28u: goto label_286f28;
        case 0x286f2cu: goto label_286f2c;
        case 0x286f30u: goto label_286f30;
        case 0x286f34u: goto label_286f34;
        case 0x286f38u: goto label_286f38;
        case 0x286f3cu: goto label_286f3c;
        case 0x286f40u: goto label_286f40;
        case 0x286f44u: goto label_286f44;
        case 0x286f48u: goto label_286f48;
        case 0x286f4cu: goto label_286f4c;
        case 0x286f50u: goto label_286f50;
        case 0x286f54u: goto label_286f54;
        case 0x286f58u: goto label_286f58;
        case 0x286f5cu: goto label_286f5c;
        case 0x286f60u: goto label_286f60;
        case 0x286f64u: goto label_286f64;
        case 0x286f68u: goto label_286f68;
        case 0x286f6cu: goto label_286f6c;
        case 0x286f70u: goto label_286f70;
        case 0x286f74u: goto label_286f74;
        case 0x286f78u: goto label_286f78;
        case 0x286f7cu: goto label_286f7c;
        case 0x286f80u: goto label_286f80;
        case 0x286f84u: goto label_286f84;
        case 0x286f88u: goto label_286f88;
        case 0x286f8cu: goto label_286f8c;
        case 0x286f90u: goto label_286f90;
        case 0x286f94u: goto label_286f94;
        case 0x286f98u: goto label_286f98;
        case 0x286f9cu: goto label_286f9c;
        case 0x286fa0u: goto label_286fa0;
        case 0x286fa4u: goto label_286fa4;
        case 0x286fa8u: goto label_286fa8;
        case 0x286facu: goto label_286fac;
        case 0x286fb0u: goto label_286fb0;
        case 0x286fb4u: goto label_286fb4;
        case 0x286fb8u: goto label_286fb8;
        case 0x286fbcu: goto label_286fbc;
        case 0x286fc0u: goto label_286fc0;
        case 0x286fc4u: goto label_286fc4;
        case 0x286fc8u: goto label_286fc8;
        case 0x286fccu: goto label_286fcc;
        case 0x286fd0u: goto label_286fd0;
        case 0x286fd4u: goto label_286fd4;
        case 0x286fd8u: goto label_286fd8;
        case 0x286fdcu: goto label_286fdc;
        case 0x286fe0u: goto label_286fe0;
        case 0x286fe4u: goto label_286fe4;
        case 0x286fe8u: goto label_286fe8;
        case 0x286fecu: goto label_286fec;
        case 0x286ff0u: goto label_286ff0;
        case 0x286ff4u: goto label_286ff4;
        case 0x286ff8u: goto label_286ff8;
        case 0x286ffcu: goto label_286ffc;
        case 0x287000u: goto label_287000;
        case 0x287004u: goto label_287004;
        case 0x287008u: goto label_287008;
        case 0x28700cu: goto label_28700c;
        case 0x287010u: goto label_287010;
        case 0x287014u: goto label_287014;
        case 0x287018u: goto label_287018;
        case 0x28701cu: goto label_28701c;
        case 0x287020u: goto label_287020;
        case 0x287024u: goto label_287024;
        case 0x287028u: goto label_287028;
        case 0x28702cu: goto label_28702c;
        case 0x287030u: goto label_287030;
        case 0x287034u: goto label_287034;
        case 0x287038u: goto label_287038;
        case 0x28703cu: goto label_28703c;
        case 0x287040u: goto label_287040;
        case 0x287044u: goto label_287044;
        case 0x287048u: goto label_287048;
        case 0x28704cu: goto label_28704c;
        case 0x287050u: goto label_287050;
        case 0x287054u: goto label_287054;
        case 0x287058u: goto label_287058;
        case 0x28705cu: goto label_28705c;
        case 0x287060u: goto label_287060;
        case 0x287064u: goto label_287064;
        case 0x287068u: goto label_287068;
        case 0x28706cu: goto label_28706c;
        case 0x287070u: goto label_287070;
        case 0x287074u: goto label_287074;
        case 0x287078u: goto label_287078;
        case 0x28707cu: goto label_28707c;
        case 0x287080u: goto label_287080;
        case 0x287084u: goto label_287084;
        case 0x287088u: goto label_287088;
        case 0x28708cu: goto label_28708c;
        case 0x287090u: goto label_287090;
        case 0x287094u: goto label_287094;
        case 0x287098u: goto label_287098;
        case 0x28709cu: goto label_28709c;
        case 0x2870a0u: goto label_2870a0;
        case 0x2870a4u: goto label_2870a4;
        case 0x2870a8u: goto label_2870a8;
        case 0x2870acu: goto label_2870ac;
        case 0x2870b0u: goto label_2870b0;
        case 0x2870b4u: goto label_2870b4;
        case 0x2870b8u: goto label_2870b8;
        case 0x2870bcu: goto label_2870bc;
        case 0x2870c0u: goto label_2870c0;
        case 0x2870c4u: goto label_2870c4;
        case 0x2870c8u: goto label_2870c8;
        case 0x2870ccu: goto label_2870cc;
        case 0x2870d0u: goto label_2870d0;
        case 0x2870d4u: goto label_2870d4;
        case 0x2870d8u: goto label_2870d8;
        case 0x2870dcu: goto label_2870dc;
        case 0x2870e0u: goto label_2870e0;
        case 0x2870e4u: goto label_2870e4;
        case 0x2870e8u: goto label_2870e8;
        case 0x2870ecu: goto label_2870ec;
        case 0x2870f0u: goto label_2870f0;
        case 0x2870f4u: goto label_2870f4;
        case 0x2870f8u: goto label_2870f8;
        case 0x2870fcu: goto label_2870fc;
        case 0x287100u: goto label_287100;
        case 0x287104u: goto label_287104;
        case 0x287108u: goto label_287108;
        case 0x28710cu: goto label_28710c;
        case 0x287110u: goto label_287110;
        case 0x287114u: goto label_287114;
        case 0x287118u: goto label_287118;
        case 0x28711cu: goto label_28711c;
        case 0x287120u: goto label_287120;
        case 0x287124u: goto label_287124;
        case 0x287128u: goto label_287128;
        case 0x28712cu: goto label_28712c;
        case 0x287130u: goto label_287130;
        case 0x287134u: goto label_287134;
        case 0x287138u: goto label_287138;
        case 0x28713cu: goto label_28713c;
        case 0x287140u: goto label_287140;
        case 0x287144u: goto label_287144;
        case 0x287148u: goto label_287148;
        case 0x28714cu: goto label_28714c;
        case 0x287150u: goto label_287150;
        case 0x287154u: goto label_287154;
        case 0x287158u: goto label_287158;
        case 0x28715cu: goto label_28715c;
        case 0x287160u: goto label_287160;
        case 0x287164u: goto label_287164;
        case 0x287168u: goto label_287168;
        case 0x28716cu: goto label_28716c;
        case 0x287170u: goto label_287170;
        case 0x287174u: goto label_287174;
        case 0x287178u: goto label_287178;
        case 0x28717cu: goto label_28717c;
        case 0x287180u: goto label_287180;
        case 0x287184u: goto label_287184;
        case 0x287188u: goto label_287188;
        case 0x28718cu: goto label_28718c;
        case 0x287190u: goto label_287190;
        case 0x287194u: goto label_287194;
        case 0x287198u: goto label_287198;
        case 0x28719cu: goto label_28719c;
        case 0x2871a0u: goto label_2871a0;
        case 0x2871a4u: goto label_2871a4;
        case 0x2871a8u: goto label_2871a8;
        case 0x2871acu: goto label_2871ac;
        case 0x2871b0u: goto label_2871b0;
        case 0x2871b4u: goto label_2871b4;
        case 0x2871b8u: goto label_2871b8;
        case 0x2871bcu: goto label_2871bc;
        case 0x2871c0u: goto label_2871c0;
        case 0x2871c4u: goto label_2871c4;
        case 0x2871c8u: goto label_2871c8;
        case 0x2871ccu: goto label_2871cc;
        case 0x2871d0u: goto label_2871d0;
        case 0x2871d4u: goto label_2871d4;
        case 0x2871d8u: goto label_2871d8;
        case 0x2871dcu: goto label_2871dc;
        case 0x2871e0u: goto label_2871e0;
        case 0x2871e4u: goto label_2871e4;
        case 0x2871e8u: goto label_2871e8;
        case 0x2871ecu: goto label_2871ec;
        case 0x2871f0u: goto label_2871f0;
        case 0x2871f4u: goto label_2871f4;
        case 0x2871f8u: goto label_2871f8;
        case 0x2871fcu: goto label_2871fc;
        case 0x287200u: goto label_287200;
        case 0x287204u: goto label_287204;
        case 0x287208u: goto label_287208;
        case 0x28720cu: goto label_28720c;
        case 0x287210u: goto label_287210;
        case 0x287214u: goto label_287214;
        case 0x287218u: goto label_287218;
        case 0x28721cu: goto label_28721c;
        case 0x287220u: goto label_287220;
        case 0x287224u: goto label_287224;
        case 0x287228u: goto label_287228;
        case 0x28722cu: goto label_28722c;
        case 0x287230u: goto label_287230;
        case 0x287234u: goto label_287234;
        case 0x287238u: goto label_287238;
        case 0x28723cu: goto label_28723c;
        case 0x287240u: goto label_287240;
        case 0x287244u: goto label_287244;
        case 0x287248u: goto label_287248;
        case 0x28724cu: goto label_28724c;
        case 0x287250u: goto label_287250;
        case 0x287254u: goto label_287254;
        case 0x287258u: goto label_287258;
        case 0x28725cu: goto label_28725c;
        case 0x287260u: goto label_287260;
        case 0x287264u: goto label_287264;
        case 0x287268u: goto label_287268;
        case 0x28726cu: goto label_28726c;
        case 0x287270u: goto label_287270;
        case 0x287274u: goto label_287274;
        case 0x287278u: goto label_287278;
        case 0x28727cu: goto label_28727c;
        case 0x287280u: goto label_287280;
        case 0x287284u: goto label_287284;
        case 0x287288u: goto label_287288;
        case 0x28728cu: goto label_28728c;
        case 0x287290u: goto label_287290;
        case 0x287294u: goto label_287294;
        case 0x287298u: goto label_287298;
        case 0x28729cu: goto label_28729c;
        case 0x2872a0u: goto label_2872a0;
        case 0x2872a4u: goto label_2872a4;
        case 0x2872a8u: goto label_2872a8;
        case 0x2872acu: goto label_2872ac;
        case 0x2872b0u: goto label_2872b0;
        case 0x2872b4u: goto label_2872b4;
        case 0x2872b8u: goto label_2872b8;
        case 0x2872bcu: goto label_2872bc;
        case 0x2872c0u: goto label_2872c0;
        case 0x2872c4u: goto label_2872c4;
        case 0x2872c8u: goto label_2872c8;
        case 0x2872ccu: goto label_2872cc;
        case 0x2872d0u: goto label_2872d0;
        case 0x2872d4u: goto label_2872d4;
        case 0x2872d8u: goto label_2872d8;
        case 0x2872dcu: goto label_2872dc;
        case 0x2872e0u: goto label_2872e0;
        case 0x2872e4u: goto label_2872e4;
        case 0x2872e8u: goto label_2872e8;
        case 0x2872ecu: goto label_2872ec;
        case 0x2872f0u: goto label_2872f0;
        case 0x2872f4u: goto label_2872f4;
        case 0x2872f8u: goto label_2872f8;
        case 0x2872fcu: goto label_2872fc;
        case 0x287300u: goto label_287300;
        case 0x287304u: goto label_287304;
        case 0x287308u: goto label_287308;
        case 0x28730cu: goto label_28730c;
        case 0x287310u: goto label_287310;
        case 0x287314u: goto label_287314;
        case 0x287318u: goto label_287318;
        case 0x28731cu: goto label_28731c;
        case 0x287320u: goto label_287320;
        case 0x287324u: goto label_287324;
        case 0x287328u: goto label_287328;
        case 0x28732cu: goto label_28732c;
        case 0x287330u: goto label_287330;
        case 0x287334u: goto label_287334;
        case 0x287338u: goto label_287338;
        case 0x28733cu: goto label_28733c;
        case 0x287340u: goto label_287340;
        case 0x287344u: goto label_287344;
        case 0x287348u: goto label_287348;
        case 0x28734cu: goto label_28734c;
        case 0x287350u: goto label_287350;
        case 0x287354u: goto label_287354;
        case 0x287358u: goto label_287358;
        case 0x28735cu: goto label_28735c;
        case 0x287360u: goto label_287360;
        case 0x287364u: goto label_287364;
        case 0x287368u: goto label_287368;
        case 0x28736cu: goto label_28736c;
        case 0x287370u: goto label_287370;
        case 0x287374u: goto label_287374;
        case 0x287378u: goto label_287378;
        case 0x28737cu: goto label_28737c;
        case 0x287380u: goto label_287380;
        case 0x287384u: goto label_287384;
        case 0x287388u: goto label_287388;
        case 0x28738cu: goto label_28738c;
        case 0x287390u: goto label_287390;
        case 0x287394u: goto label_287394;
        case 0x287398u: goto label_287398;
        case 0x28739cu: goto label_28739c;
        case 0x2873a0u: goto label_2873a0;
        case 0x2873a4u: goto label_2873a4;
        case 0x2873a8u: goto label_2873a8;
        case 0x2873acu: goto label_2873ac;
        case 0x2873b0u: goto label_2873b0;
        case 0x2873b4u: goto label_2873b4;
        case 0x2873b8u: goto label_2873b8;
        case 0x2873bcu: goto label_2873bc;
        case 0x2873c0u: goto label_2873c0;
        case 0x2873c4u: goto label_2873c4;
        case 0x2873c8u: goto label_2873c8;
        case 0x2873ccu: goto label_2873cc;
        case 0x2873d0u: goto label_2873d0;
        case 0x2873d4u: goto label_2873d4;
        case 0x2873d8u: goto label_2873d8;
        case 0x2873dcu: goto label_2873dc;
        case 0x2873e0u: goto label_2873e0;
        case 0x2873e4u: goto label_2873e4;
        case 0x2873e8u: goto label_2873e8;
        case 0x2873ecu: goto label_2873ec;
        case 0x2873f0u: goto label_2873f0;
        case 0x2873f4u: goto label_2873f4;
        case 0x2873f8u: goto label_2873f8;
        case 0x2873fcu: goto label_2873fc;
        case 0x287400u: goto label_287400;
        case 0x287404u: goto label_287404;
        case 0x287408u: goto label_287408;
        case 0x28740cu: goto label_28740c;
        case 0x287410u: goto label_287410;
        case 0x287414u: goto label_287414;
        case 0x287418u: goto label_287418;
        case 0x28741cu: goto label_28741c;
        case 0x287420u: goto label_287420;
        case 0x287424u: goto label_287424;
        case 0x287428u: goto label_287428;
        case 0x28742cu: goto label_28742c;
        case 0x287430u: goto label_287430;
        case 0x287434u: goto label_287434;
        case 0x287438u: goto label_287438;
        case 0x28743cu: goto label_28743c;
        case 0x287440u: goto label_287440;
        case 0x287444u: goto label_287444;
        case 0x287448u: goto label_287448;
        case 0x28744cu: goto label_28744c;
        case 0x287450u: goto label_287450;
        case 0x287454u: goto label_287454;
        case 0x287458u: goto label_287458;
        case 0x28745cu: goto label_28745c;
        case 0x287460u: goto label_287460;
        case 0x287464u: goto label_287464;
        case 0x287468u: goto label_287468;
        case 0x28746cu: goto label_28746c;
        case 0x287470u: goto label_287470;
        case 0x287474u: goto label_287474;
        case 0x287478u: goto label_287478;
        case 0x28747cu: goto label_28747c;
        case 0x287480u: goto label_287480;
        case 0x287484u: goto label_287484;
        case 0x287488u: goto label_287488;
        case 0x28748cu: goto label_28748c;
        case 0x287490u: goto label_287490;
        case 0x287494u: goto label_287494;
        case 0x287498u: goto label_287498;
        case 0x28749cu: goto label_28749c;
        case 0x2874a0u: goto label_2874a0;
        case 0x2874a4u: goto label_2874a4;
        case 0x2874a8u: goto label_2874a8;
        case 0x2874acu: goto label_2874ac;
        case 0x2874b0u: goto label_2874b0;
        case 0x2874b4u: goto label_2874b4;
        case 0x2874b8u: goto label_2874b8;
        case 0x2874bcu: goto label_2874bc;
        case 0x2874c0u: goto label_2874c0;
        case 0x2874c4u: goto label_2874c4;
        case 0x2874c8u: goto label_2874c8;
        case 0x2874ccu: goto label_2874cc;
        case 0x2874d0u: goto label_2874d0;
        case 0x2874d4u: goto label_2874d4;
        case 0x2874d8u: goto label_2874d8;
        case 0x2874dcu: goto label_2874dc;
        case 0x2874e0u: goto label_2874e0;
        case 0x2874e4u: goto label_2874e4;
        case 0x2874e8u: goto label_2874e8;
        case 0x2874ecu: goto label_2874ec;
        case 0x2874f0u: goto label_2874f0;
        case 0x2874f4u: goto label_2874f4;
        case 0x2874f8u: goto label_2874f8;
        case 0x2874fcu: goto label_2874fc;
        case 0x287500u: goto label_287500;
        case 0x287504u: goto label_287504;
        case 0x287508u: goto label_287508;
        case 0x28750cu: goto label_28750c;
        case 0x287510u: goto label_287510;
        case 0x287514u: goto label_287514;
        case 0x287518u: goto label_287518;
        case 0x28751cu: goto label_28751c;
        case 0x287520u: goto label_287520;
        case 0x287524u: goto label_287524;
        case 0x287528u: goto label_287528;
        case 0x28752cu: goto label_28752c;
        case 0x287530u: goto label_287530;
        case 0x287534u: goto label_287534;
        case 0x287538u: goto label_287538;
        case 0x28753cu: goto label_28753c;
        case 0x287540u: goto label_287540;
        case 0x287544u: goto label_287544;
        case 0x287548u: goto label_287548;
        case 0x28754cu: goto label_28754c;
        case 0x287550u: goto label_287550;
        case 0x287554u: goto label_287554;
        case 0x287558u: goto label_287558;
        case 0x28755cu: goto label_28755c;
        case 0x287560u: goto label_287560;
        case 0x287564u: goto label_287564;
        case 0x287568u: goto label_287568;
        case 0x28756cu: goto label_28756c;
        case 0x287570u: goto label_287570;
        case 0x287574u: goto label_287574;
        case 0x287578u: goto label_287578;
        case 0x28757cu: goto label_28757c;
        case 0x287580u: goto label_287580;
        case 0x287584u: goto label_287584;
        case 0x287588u: goto label_287588;
        case 0x28758cu: goto label_28758c;
        case 0x287590u: goto label_287590;
        case 0x287594u: goto label_287594;
        case 0x287598u: goto label_287598;
        case 0x28759cu: goto label_28759c;
        case 0x2875a0u: goto label_2875a0;
        case 0x2875a4u: goto label_2875a4;
        case 0x2875a8u: goto label_2875a8;
        case 0x2875acu: goto label_2875ac;
        case 0x2875b0u: goto label_2875b0;
        case 0x2875b4u: goto label_2875b4;
        case 0x2875b8u: goto label_2875b8;
        case 0x2875bcu: goto label_2875bc;
        case 0x2875c0u: goto label_2875c0;
        case 0x2875c4u: goto label_2875c4;
        case 0x2875c8u: goto label_2875c8;
        case 0x2875ccu: goto label_2875cc;
        case 0x2875d0u: goto label_2875d0;
        case 0x2875d4u: goto label_2875d4;
        case 0x2875d8u: goto label_2875d8;
        case 0x2875dcu: goto label_2875dc;
        case 0x2875e0u: goto label_2875e0;
        case 0x2875e4u: goto label_2875e4;
        case 0x2875e8u: goto label_2875e8;
        case 0x2875ecu: goto label_2875ec;
        case 0x2875f0u: goto label_2875f0;
        case 0x2875f4u: goto label_2875f4;
        case 0x2875f8u: goto label_2875f8;
        case 0x2875fcu: goto label_2875fc;
        case 0x287600u: goto label_287600;
        case 0x287604u: goto label_287604;
        case 0x287608u: goto label_287608;
        case 0x28760cu: goto label_28760c;
        case 0x287610u: goto label_287610;
        case 0x287614u: goto label_287614;
        case 0x287618u: goto label_287618;
        case 0x28761cu: goto label_28761c;
        case 0x287620u: goto label_287620;
        case 0x287624u: goto label_287624;
        case 0x287628u: goto label_287628;
        case 0x28762cu: goto label_28762c;
        case 0x287630u: goto label_287630;
        case 0x287634u: goto label_287634;
        case 0x287638u: goto label_287638;
        case 0x28763cu: goto label_28763c;
        case 0x287640u: goto label_287640;
        case 0x287644u: goto label_287644;
        case 0x287648u: goto label_287648;
        case 0x28764cu: goto label_28764c;
        case 0x287650u: goto label_287650;
        case 0x287654u: goto label_287654;
        case 0x287658u: goto label_287658;
        case 0x28765cu: goto label_28765c;
        case 0x287660u: goto label_287660;
        case 0x287664u: goto label_287664;
        case 0x287668u: goto label_287668;
        case 0x28766cu: goto label_28766c;
        case 0x287670u: goto label_287670;
        case 0x287674u: goto label_287674;
        case 0x287678u: goto label_287678;
        case 0x28767cu: goto label_28767c;
        case 0x287680u: goto label_287680;
        case 0x287684u: goto label_287684;
        case 0x287688u: goto label_287688;
        case 0x28768cu: goto label_28768c;
        case 0x287690u: goto label_287690;
        case 0x287694u: goto label_287694;
        case 0x287698u: goto label_287698;
        case 0x28769cu: goto label_28769c;
        case 0x2876a0u: goto label_2876a0;
        case 0x2876a4u: goto label_2876a4;
        case 0x2876a8u: goto label_2876a8;
        case 0x2876acu: goto label_2876ac;
        case 0x2876b0u: goto label_2876b0;
        case 0x2876b4u: goto label_2876b4;
        case 0x2876b8u: goto label_2876b8;
        case 0x2876bcu: goto label_2876bc;
        case 0x2876c0u: goto label_2876c0;
        case 0x2876c4u: goto label_2876c4;
        case 0x2876c8u: goto label_2876c8;
        case 0x2876ccu: goto label_2876cc;
        case 0x2876d0u: goto label_2876d0;
        case 0x2876d4u: goto label_2876d4;
        case 0x2876d8u: goto label_2876d8;
        case 0x2876dcu: goto label_2876dc;
        case 0x2876e0u: goto label_2876e0;
        case 0x2876e4u: goto label_2876e4;
        case 0x2876e8u: goto label_2876e8;
        case 0x2876ecu: goto label_2876ec;
        case 0x2876f0u: goto label_2876f0;
        case 0x2876f4u: goto label_2876f4;
        case 0x2876f8u: goto label_2876f8;
        case 0x2876fcu: goto label_2876fc;
        case 0x287700u: goto label_287700;
        case 0x287704u: goto label_287704;
        case 0x287708u: goto label_287708;
        case 0x28770cu: goto label_28770c;
        case 0x287710u: goto label_287710;
        case 0x287714u: goto label_287714;
        case 0x287718u: goto label_287718;
        case 0x28771cu: goto label_28771c;
        case 0x287720u: goto label_287720;
        case 0x287724u: goto label_287724;
        case 0x287728u: goto label_287728;
        case 0x28772cu: goto label_28772c;
        case 0x287730u: goto label_287730;
        case 0x287734u: goto label_287734;
        case 0x287738u: goto label_287738;
        case 0x28773cu: goto label_28773c;
        case 0x287740u: goto label_287740;
        case 0x287744u: goto label_287744;
        case 0x287748u: goto label_287748;
        case 0x28774cu: goto label_28774c;
        case 0x287750u: goto label_287750;
        case 0x287754u: goto label_287754;
        case 0x287758u: goto label_287758;
        case 0x28775cu: goto label_28775c;
        case 0x287760u: goto label_287760;
        case 0x287764u: goto label_287764;
        case 0x287768u: goto label_287768;
        case 0x28776cu: goto label_28776c;
        case 0x287770u: goto label_287770;
        case 0x287774u: goto label_287774;
        case 0x287778u: goto label_287778;
        case 0x28777cu: goto label_28777c;
        case 0x287780u: goto label_287780;
        case 0x287784u: goto label_287784;
        case 0x287788u: goto label_287788;
        case 0x28778cu: goto label_28778c;
        case 0x287790u: goto label_287790;
        case 0x287794u: goto label_287794;
        case 0x287798u: goto label_287798;
        case 0x28779cu: goto label_28779c;
        case 0x2877a0u: goto label_2877a0;
        case 0x2877a4u: goto label_2877a4;
        case 0x2877a8u: goto label_2877a8;
        case 0x2877acu: goto label_2877ac;
        case 0x2877b0u: goto label_2877b0;
        case 0x2877b4u: goto label_2877b4;
        case 0x2877b8u: goto label_2877b8;
        case 0x2877bcu: goto label_2877bc;
        case 0x2877c0u: goto label_2877c0;
        case 0x2877c4u: goto label_2877c4;
        case 0x2877c8u: goto label_2877c8;
        case 0x2877ccu: goto label_2877cc;
        case 0x2877d0u: goto label_2877d0;
        case 0x2877d4u: goto label_2877d4;
        case 0x2877d8u: goto label_2877d8;
        case 0x2877dcu: goto label_2877dc;
        case 0x2877e0u: goto label_2877e0;
        case 0x2877e4u: goto label_2877e4;
        case 0x2877e8u: goto label_2877e8;
        case 0x2877ecu: goto label_2877ec;
        case 0x2877f0u: goto label_2877f0;
        case 0x2877f4u: goto label_2877f4;
        case 0x2877f8u: goto label_2877f8;
        case 0x2877fcu: goto label_2877fc;
        case 0x287800u: goto label_287800;
        case 0x287804u: goto label_287804;
        case 0x287808u: goto label_287808;
        case 0x28780cu: goto label_28780c;
        case 0x287810u: goto label_287810;
        case 0x287814u: goto label_287814;
        case 0x287818u: goto label_287818;
        case 0x28781cu: goto label_28781c;
        case 0x287820u: goto label_287820;
        case 0x287824u: goto label_287824;
        case 0x287828u: goto label_287828;
        case 0x28782cu: goto label_28782c;
        case 0x287830u: goto label_287830;
        case 0x287834u: goto label_287834;
        case 0x287838u: goto label_287838;
        case 0x28783cu: goto label_28783c;
        case 0x287840u: goto label_287840;
        case 0x287844u: goto label_287844;
        case 0x287848u: goto label_287848;
        case 0x28784cu: goto label_28784c;
        case 0x287850u: goto label_287850;
        case 0x287854u: goto label_287854;
        case 0x287858u: goto label_287858;
        case 0x28785cu: goto label_28785c;
        case 0x287860u: goto label_287860;
        case 0x287864u: goto label_287864;
        case 0x287868u: goto label_287868;
        case 0x28786cu: goto label_28786c;
        case 0x287870u: goto label_287870;
        case 0x287874u: goto label_287874;
        case 0x287878u: goto label_287878;
        case 0x28787cu: goto label_28787c;
        case 0x287880u: goto label_287880;
        case 0x287884u: goto label_287884;
        case 0x287888u: goto label_287888;
        case 0x28788cu: goto label_28788c;
        case 0x287890u: goto label_287890;
        case 0x287894u: goto label_287894;
        case 0x287898u: goto label_287898;
        case 0x28789cu: goto label_28789c;
        case 0x2878a0u: goto label_2878a0;
        case 0x2878a4u: goto label_2878a4;
        case 0x2878a8u: goto label_2878a8;
        case 0x2878acu: goto label_2878ac;
        case 0x2878b0u: goto label_2878b0;
        case 0x2878b4u: goto label_2878b4;
        case 0x2878b8u: goto label_2878b8;
        case 0x2878bcu: goto label_2878bc;
        case 0x2878c0u: goto label_2878c0;
        case 0x2878c4u: goto label_2878c4;
        case 0x2878c8u: goto label_2878c8;
        case 0x2878ccu: goto label_2878cc;
        case 0x2878d0u: goto label_2878d0;
        case 0x2878d4u: goto label_2878d4;
        case 0x2878d8u: goto label_2878d8;
        case 0x2878dcu: goto label_2878dc;
        case 0x2878e0u: goto label_2878e0;
        case 0x2878e4u: goto label_2878e4;
        case 0x2878e8u: goto label_2878e8;
        case 0x2878ecu: goto label_2878ec;
        case 0x2878f0u: goto label_2878f0;
        case 0x2878f4u: goto label_2878f4;
        case 0x2878f8u: goto label_2878f8;
        case 0x2878fcu: goto label_2878fc;
        case 0x287900u: goto label_287900;
        case 0x287904u: goto label_287904;
        case 0x287908u: goto label_287908;
        case 0x28790cu: goto label_28790c;
        case 0x287910u: goto label_287910;
        case 0x287914u: goto label_287914;
        case 0x287918u: goto label_287918;
        case 0x28791cu: goto label_28791c;
        case 0x287920u: goto label_287920;
        case 0x287924u: goto label_287924;
        case 0x287928u: goto label_287928;
        case 0x28792cu: goto label_28792c;
        case 0x287930u: goto label_287930;
        case 0x287934u: goto label_287934;
        case 0x287938u: goto label_287938;
        case 0x28793cu: goto label_28793c;
        case 0x287940u: goto label_287940;
        case 0x287944u: goto label_287944;
        case 0x287948u: goto label_287948;
        case 0x28794cu: goto label_28794c;
        case 0x287950u: goto label_287950;
        case 0x287954u: goto label_287954;
        case 0x287958u: goto label_287958;
        case 0x28795cu: goto label_28795c;
        case 0x287960u: goto label_287960;
        case 0x287964u: goto label_287964;
        case 0x287968u: goto label_287968;
        case 0x28796cu: goto label_28796c;
        case 0x287970u: goto label_287970;
        case 0x287974u: goto label_287974;
        case 0x287978u: goto label_287978;
        case 0x28797cu: goto label_28797c;
        case 0x287980u: goto label_287980;
        case 0x287984u: goto label_287984;
        case 0x287988u: goto label_287988;
        case 0x28798cu: goto label_28798c;
        case 0x287990u: goto label_287990;
        case 0x287994u: goto label_287994;
        case 0x287998u: goto label_287998;
        case 0x28799cu: goto label_28799c;
        case 0x2879a0u: goto label_2879a0;
        case 0x2879a4u: goto label_2879a4;
        case 0x2879a8u: goto label_2879a8;
        case 0x2879acu: goto label_2879ac;
        case 0x2879b0u: goto label_2879b0;
        case 0x2879b4u: goto label_2879b4;
        case 0x2879b8u: goto label_2879b8;
        case 0x2879bcu: goto label_2879bc;
        case 0x2879c0u: goto label_2879c0;
        case 0x2879c4u: goto label_2879c4;
        case 0x2879c8u: goto label_2879c8;
        case 0x2879ccu: goto label_2879cc;
        case 0x2879d0u: goto label_2879d0;
        case 0x2879d4u: goto label_2879d4;
        case 0x2879d8u: goto label_2879d8;
        case 0x2879dcu: goto label_2879dc;
        case 0x2879e0u: goto label_2879e0;
        case 0x2879e4u: goto label_2879e4;
        case 0x2879e8u: goto label_2879e8;
        case 0x2879ecu: goto label_2879ec;
        case 0x2879f0u: goto label_2879f0;
        case 0x2879f4u: goto label_2879f4;
        case 0x2879f8u: goto label_2879f8;
        case 0x2879fcu: goto label_2879fc;
        case 0x287a00u: goto label_287a00;
        case 0x287a04u: goto label_287a04;
        case 0x287a08u: goto label_287a08;
        case 0x287a0cu: goto label_287a0c;
        case 0x287a10u: goto label_287a10;
        case 0x287a14u: goto label_287a14;
        case 0x287a18u: goto label_287a18;
        case 0x287a1cu: goto label_287a1c;
        case 0x287a20u: goto label_287a20;
        case 0x287a24u: goto label_287a24;
        case 0x287a28u: goto label_287a28;
        case 0x287a2cu: goto label_287a2c;
        case 0x287a30u: goto label_287a30;
        case 0x287a34u: goto label_287a34;
        case 0x287a38u: goto label_287a38;
        case 0x287a3cu: goto label_287a3c;
        case 0x287a40u: goto label_287a40;
        case 0x287a44u: goto label_287a44;
        case 0x287a48u: goto label_287a48;
        case 0x287a4cu: goto label_287a4c;
        case 0x287a50u: goto label_287a50;
        case 0x287a54u: goto label_287a54;
        case 0x287a58u: goto label_287a58;
        case 0x287a5cu: goto label_287a5c;
        case 0x287a60u: goto label_287a60;
        case 0x287a64u: goto label_287a64;
        case 0x287a68u: goto label_287a68;
        case 0x287a6cu: goto label_287a6c;
        case 0x287a70u: goto label_287a70;
        case 0x287a74u: goto label_287a74;
        case 0x287a78u: goto label_287a78;
        case 0x287a7cu: goto label_287a7c;
        case 0x287a80u: goto label_287a80;
        case 0x287a84u: goto label_287a84;
        case 0x287a88u: goto label_287a88;
        case 0x287a8cu: goto label_287a8c;
        case 0x287a90u: goto label_287a90;
        case 0x287a94u: goto label_287a94;
        case 0x287a98u: goto label_287a98;
        case 0x287a9cu: goto label_287a9c;
        case 0x287aa0u: goto label_287aa0;
        case 0x287aa4u: goto label_287aa4;
        case 0x287aa8u: goto label_287aa8;
        case 0x287aacu: goto label_287aac;
        case 0x287ab0u: goto label_287ab0;
        case 0x287ab4u: goto label_287ab4;
        case 0x287ab8u: goto label_287ab8;
        case 0x287abcu: goto label_287abc;
        case 0x287ac0u: goto label_287ac0;
        case 0x287ac4u: goto label_287ac4;
        case 0x287ac8u: goto label_287ac8;
        case 0x287accu: goto label_287acc;
        case 0x287ad0u: goto label_287ad0;
        case 0x287ad4u: goto label_287ad4;
        case 0x287ad8u: goto label_287ad8;
        case 0x287adcu: goto label_287adc;
        case 0x287ae0u: goto label_287ae0;
        case 0x287ae4u: goto label_287ae4;
        case 0x287ae8u: goto label_287ae8;
        case 0x287aecu: goto label_287aec;
        case 0x287af0u: goto label_287af0;
        case 0x287af4u: goto label_287af4;
        case 0x287af8u: goto label_287af8;
        case 0x287afcu: goto label_287afc;
        case 0x287b00u: goto label_287b00;
        case 0x287b04u: goto label_287b04;
        case 0x287b08u: goto label_287b08;
        case 0x287b0cu: goto label_287b0c;
        case 0x287b10u: goto label_287b10;
        case 0x287b14u: goto label_287b14;
        case 0x287b18u: goto label_287b18;
        case 0x287b1cu: goto label_287b1c;
        case 0x287b20u: goto label_287b20;
        case 0x287b24u: goto label_287b24;
        case 0x287b28u: goto label_287b28;
        case 0x287b2cu: goto label_287b2c;
        case 0x287b30u: goto label_287b30;
        case 0x287b34u: goto label_287b34;
        case 0x287b38u: goto label_287b38;
        case 0x287b3cu: goto label_287b3c;
        case 0x287b40u: goto label_287b40;
        case 0x287b44u: goto label_287b44;
        case 0x287b48u: goto label_287b48;
        case 0x287b4cu: goto label_287b4c;
        case 0x287b50u: goto label_287b50;
        case 0x287b54u: goto label_287b54;
        case 0x287b58u: goto label_287b58;
        case 0x287b5cu: goto label_287b5c;
        case 0x287b60u: goto label_287b60;
        case 0x287b64u: goto label_287b64;
        case 0x287b68u: goto label_287b68;
        case 0x287b6cu: goto label_287b6c;
        case 0x287b70u: goto label_287b70;
        case 0x287b74u: goto label_287b74;
        case 0x287b78u: goto label_287b78;
        case 0x287b7cu: goto label_287b7c;
        case 0x287b80u: goto label_287b80;
        case 0x287b84u: goto label_287b84;
        case 0x287b88u: goto label_287b88;
        case 0x287b8cu: goto label_287b8c;
        case 0x287b90u: goto label_287b90;
        case 0x287b94u: goto label_287b94;
        case 0x287b98u: goto label_287b98;
        case 0x287b9cu: goto label_287b9c;
        case 0x287ba0u: goto label_287ba0;
        case 0x287ba4u: goto label_287ba4;
        case 0x287ba8u: goto label_287ba8;
        case 0x287bacu: goto label_287bac;
        case 0x287bb0u: goto label_287bb0;
        case 0x287bb4u: goto label_287bb4;
        case 0x287bb8u: goto label_287bb8;
        case 0x287bbcu: goto label_287bbc;
        case 0x287bc0u: goto label_287bc0;
        case 0x287bc4u: goto label_287bc4;
        case 0x287bc8u: goto label_287bc8;
        case 0x287bccu: goto label_287bcc;
        case 0x287bd0u: goto label_287bd0;
        case 0x287bd4u: goto label_287bd4;
        case 0x287bd8u: goto label_287bd8;
        case 0x287bdcu: goto label_287bdc;
        case 0x287be0u: goto label_287be0;
        case 0x287be4u: goto label_287be4;
        case 0x287be8u: goto label_287be8;
        case 0x287becu: goto label_287bec;
        case 0x287bf0u: goto label_287bf0;
        case 0x287bf4u: goto label_287bf4;
        case 0x287bf8u: goto label_287bf8;
        case 0x287bfcu: goto label_287bfc;
        case 0x287c00u: goto label_287c00;
        case 0x287c04u: goto label_287c04;
        case 0x287c08u: goto label_287c08;
        case 0x287c0cu: goto label_287c0c;
        case 0x287c10u: goto label_287c10;
        case 0x287c14u: goto label_287c14;
        case 0x287c18u: goto label_287c18;
        case 0x287c1cu: goto label_287c1c;
        case 0x287c20u: goto label_287c20;
        case 0x287c24u: goto label_287c24;
        case 0x287c28u: goto label_287c28;
        case 0x287c2cu: goto label_287c2c;
        case 0x287c30u: goto label_287c30;
        case 0x287c34u: goto label_287c34;
        case 0x287c38u: goto label_287c38;
        case 0x287c3cu: goto label_287c3c;
        case 0x287c40u: goto label_287c40;
        case 0x287c44u: goto label_287c44;
        case 0x287c48u: goto label_287c48;
        case 0x287c4cu: goto label_287c4c;
        case 0x287c50u: goto label_287c50;
        case 0x287c54u: goto label_287c54;
        case 0x287c58u: goto label_287c58;
        case 0x287c5cu: goto label_287c5c;
        case 0x287c60u: goto label_287c60;
        case 0x287c64u: goto label_287c64;
        case 0x287c68u: goto label_287c68;
        case 0x287c6cu: goto label_287c6c;
        case 0x287c70u: goto label_287c70;
        case 0x287c74u: goto label_287c74;
        case 0x287c78u: goto label_287c78;
        case 0x287c7cu: goto label_287c7c;
        case 0x287c80u: goto label_287c80;
        case 0x287c84u: goto label_287c84;
        case 0x287c88u: goto label_287c88;
        case 0x287c8cu: goto label_287c8c;
        case 0x287c90u: goto label_287c90;
        case 0x287c94u: goto label_287c94;
        case 0x287c98u: goto label_287c98;
        case 0x287c9cu: goto label_287c9c;
        case 0x287ca0u: goto label_287ca0;
        case 0x287ca4u: goto label_287ca4;
        case 0x287ca8u: goto label_287ca8;
        case 0x287cacu: goto label_287cac;
        case 0x287cb0u: goto label_287cb0;
        case 0x287cb4u: goto label_287cb4;
        case 0x287cb8u: goto label_287cb8;
        case 0x287cbcu: goto label_287cbc;
        case 0x287cc0u: goto label_287cc0;
        case 0x287cc4u: goto label_287cc4;
        case 0x287cc8u: goto label_287cc8;
        case 0x287cccu: goto label_287ccc;
        case 0x287cd0u: goto label_287cd0;
        case 0x287cd4u: goto label_287cd4;
        case 0x287cd8u: goto label_287cd8;
        case 0x287cdcu: goto label_287cdc;
        case 0x287ce0u: goto label_287ce0;
        case 0x287ce4u: goto label_287ce4;
        case 0x287ce8u: goto label_287ce8;
        case 0x287cecu: goto label_287cec;
        case 0x287cf0u: goto label_287cf0;
        case 0x287cf4u: goto label_287cf4;
        case 0x287cf8u: goto label_287cf8;
        case 0x287cfcu: goto label_287cfc;
        case 0x287d00u: goto label_287d00;
        case 0x287d04u: goto label_287d04;
        case 0x287d08u: goto label_287d08;
        case 0x287d0cu: goto label_287d0c;
        case 0x287d10u: goto label_287d10;
        case 0x287d14u: goto label_287d14;
        case 0x287d18u: goto label_287d18;
        case 0x287d1cu: goto label_287d1c;
        case 0x287d20u: goto label_287d20;
        case 0x287d24u: goto label_287d24;
        case 0x287d28u: goto label_287d28;
        case 0x287d2cu: goto label_287d2c;
        case 0x287d30u: goto label_287d30;
        case 0x287d34u: goto label_287d34;
        case 0x287d38u: goto label_287d38;
        case 0x287d3cu: goto label_287d3c;
        case 0x287d40u: goto label_287d40;
        case 0x287d44u: goto label_287d44;
        case 0x287d48u: goto label_287d48;
        case 0x287d4cu: goto label_287d4c;
        case 0x287d50u: goto label_287d50;
        case 0x287d54u: goto label_287d54;
        case 0x287d58u: goto label_287d58;
        case 0x287d5cu: goto label_287d5c;
        case 0x287d60u: goto label_287d60;
        case 0x287d64u: goto label_287d64;
        case 0x287d68u: goto label_287d68;
        case 0x287d6cu: goto label_287d6c;
        case 0x287d70u: goto label_287d70;
        case 0x287d74u: goto label_287d74;
        case 0x287d78u: goto label_287d78;
        case 0x287d7cu: goto label_287d7c;
        case 0x287d80u: goto label_287d80;
        case 0x287d84u: goto label_287d84;
        case 0x287d88u: goto label_287d88;
        case 0x287d8cu: goto label_287d8c;
        case 0x287d90u: goto label_287d90;
        case 0x287d94u: goto label_287d94;
        case 0x287d98u: goto label_287d98;
        case 0x287d9cu: goto label_287d9c;
        case 0x287da0u: goto label_287da0;
        case 0x287da4u: goto label_287da4;
        case 0x287da8u: goto label_287da8;
        case 0x287dacu: goto label_287dac;
        case 0x287db0u: goto label_287db0;
        case 0x287db4u: goto label_287db4;
        case 0x287db8u: goto label_287db8;
        case 0x287dbcu: goto label_287dbc;
        case 0x287dc0u: goto label_287dc0;
        case 0x287dc4u: goto label_287dc4;
        case 0x287dc8u: goto label_287dc8;
        case 0x287dccu: goto label_287dcc;
        case 0x287dd0u: goto label_287dd0;
        case 0x287dd4u: goto label_287dd4;
        case 0x287dd8u: goto label_287dd8;
        case 0x287ddcu: goto label_287ddc;
        case 0x287de0u: goto label_287de0;
        case 0x287de4u: goto label_287de4;
        case 0x287de8u: goto label_287de8;
        case 0x287decu: goto label_287dec;
        case 0x287df0u: goto label_287df0;
        case 0x287df4u: goto label_287df4;
        case 0x287df8u: goto label_287df8;
        case 0x287dfcu: goto label_287dfc;
        case 0x287e00u: goto label_287e00;
        case 0x287e04u: goto label_287e04;
        case 0x287e08u: goto label_287e08;
        case 0x287e0cu: goto label_287e0c;
        case 0x287e10u: goto label_287e10;
        case 0x287e14u: goto label_287e14;
        case 0x287e18u: goto label_287e18;
        case 0x287e1cu: goto label_287e1c;
        case 0x287e20u: goto label_287e20;
        case 0x287e24u: goto label_287e24;
        case 0x287e28u: goto label_287e28;
        case 0x287e2cu: goto label_287e2c;
        case 0x287e30u: goto label_287e30;
        case 0x287e34u: goto label_287e34;
        case 0x287e38u: goto label_287e38;
        case 0x287e3cu: goto label_287e3c;
        case 0x287e40u: goto label_287e40;
        case 0x287e44u: goto label_287e44;
        case 0x287e48u: goto label_287e48;
        case 0x287e4cu: goto label_287e4c;
        case 0x287e50u: goto label_287e50;
        case 0x287e54u: goto label_287e54;
        case 0x287e58u: goto label_287e58;
        case 0x287e5cu: goto label_287e5c;
        case 0x287e60u: goto label_287e60;
        case 0x287e64u: goto label_287e64;
        case 0x287e68u: goto label_287e68;
        case 0x287e6cu: goto label_287e6c;
        case 0x287e70u: goto label_287e70;
        case 0x287e74u: goto label_287e74;
        case 0x287e78u: goto label_287e78;
        case 0x287e7cu: goto label_287e7c;
        case 0x287e80u: goto label_287e80;
        case 0x287e84u: goto label_287e84;
        case 0x287e88u: goto label_287e88;
        case 0x287e8cu: goto label_287e8c;
        case 0x287e90u: goto label_287e90;
        case 0x287e94u: goto label_287e94;
        case 0x287e98u: goto label_287e98;
        case 0x287e9cu: goto label_287e9c;
        case 0x287ea0u: goto label_287ea0;
        case 0x287ea4u: goto label_287ea4;
        case 0x287ea8u: goto label_287ea8;
        case 0x287eacu: goto label_287eac;
        case 0x287eb0u: goto label_287eb0;
        case 0x287eb4u: goto label_287eb4;
        case 0x287eb8u: goto label_287eb8;
        case 0x287ebcu: goto label_287ebc;
        case 0x287ec0u: goto label_287ec0;
        case 0x287ec4u: goto label_287ec4;
        case 0x287ec8u: goto label_287ec8;
        case 0x287eccu: goto label_287ecc;
        case 0x287ed0u: goto label_287ed0;
        case 0x287ed4u: goto label_287ed4;
        case 0x287ed8u: goto label_287ed8;
        case 0x287edcu: goto label_287edc;
        case 0x287ee0u: goto label_287ee0;
        case 0x287ee4u: goto label_287ee4;
        case 0x287ee8u: goto label_287ee8;
        case 0x287eecu: goto label_287eec;
        case 0x287ef0u: goto label_287ef0;
        case 0x287ef4u: goto label_287ef4;
        case 0x287ef8u: goto label_287ef8;
        case 0x287efcu: goto label_287efc;
        case 0x287f00u: goto label_287f00;
        case 0x287f04u: goto label_287f04;
        case 0x287f08u: goto label_287f08;
        case 0x287f0cu: goto label_287f0c;
        case 0x287f10u: goto label_287f10;
        case 0x287f14u: goto label_287f14;
        case 0x287f18u: goto label_287f18;
        case 0x287f1cu: goto label_287f1c;
        default: break;
    }

    ctx->pc = 0x286d80u;

label_286d80:
    // 0x286d80: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x286d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_286d84:
    // 0x286d84: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x286d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_286d88:
    // 0x286d88: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x286d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_286d8c:
    // 0x286d8c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x286d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_286d90:
    // 0x286d90: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x286d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_286d94:
    // 0x286d94: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x286d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_286d98:
    // 0x286d98: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x286d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_286d9c:
    // 0x286d9c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x286d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_286da0:
    // 0x286da0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x286da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_286da4:
    // 0x286da4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x286da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_286da8:
    // 0x286da8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x286da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_286dac:
    // 0x286dac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x286dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_286db0:
    // 0x286db0: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x286db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
label_286db4:
    // 0x286db4: 0xafa50200  sw          $a1, 0x200($sp)
    ctx->pc = 0x286db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 5));
label_286db8:
    // 0x286db8: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x286db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
label_286dbc:
    // 0x286dbc: 0x3442aaaa  ori         $v0, $v0, 0xAAAA
    ctx->pc = 0x286dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43690);
label_286dc0:
    // 0x286dc0: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x286dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_286dc4:
    // 0x286dc4: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x286dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_286dc8:
    // 0x286dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286dcc:
    // 0x286dcc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x286dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_286dd0:
    // 0x286dd0: 0xc0a69b0  jal         func_29A6C0
label_286dd4:
    if (ctx->pc == 0x286DD4u) {
        ctx->pc = 0x286DD8u;
        goto label_286dd8;
    }
    ctx->pc = 0x286DD0u;
    SET_GPR_U32(ctx, 31, 0x286DD8u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x286DD0u, 0x286DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DD8u;
label_286dd8:
    // 0x286dd8: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x286dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_286ddc:
    // 0x286ddc: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x286ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
label_286de0:
    // 0x286de0: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x286de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
label_286de4:
    // 0x286de4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x286de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_286de8:
    // 0x286de8: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x286de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_286dec:
    // 0x286dec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x286decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_286df0:
    // 0x286df0: 0xc085538  jal         func_2154E0
label_286df4:
    if (ctx->pc == 0x286DF4u) {
        ctx->pc = 0x286DF8u;
        goto label_286df8;
    }
    ctx->pc = 0x286DF0u;
    SET_GPR_U32(ctx, 31, 0x286DF8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x286DF0u, 0x286DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DF8u;
label_286df8:
    // 0x286df8: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x286df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_286dfc:
    // 0x286dfc: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x286dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_286e00:
    // 0x286e00: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_286e04:
    if (ctx->pc == 0x286E04u) {
        ctx->pc = 0x286E08u;
        goto label_286e08;
    }
    ctx->pc = 0x286E00u;
    {
        const bool branch_taken_0x286e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e00) {
            ctx->pc = 0x286E20u;
            goto label_286e20;
        }
    }
    ctx->pc = 0x286E08u;
label_286e08:
    // 0x286e08: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x286e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_286e0c:
    // 0x286e0c: 0xc092d70  jal         func_24B5C0
label_286e10:
    if (ctx->pc == 0x286E10u) {
        ctx->pc = 0x286E14u;
        goto label_286e14;
    }
    ctx->pc = 0x286E0Cu;
    SET_GPR_U32(ctx, 31, 0x286E14u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x286E0Cu, 0x286E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E14u;
label_286e14:
    // 0x286e14: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x286e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_286e18:
    // 0x286e18: 0x10000002  b           . + 4 + (0x2 << 2)
label_286e1c:
    if (ctx->pc == 0x286E1Cu) {
        ctx->pc = 0x286E20u;
        goto label_286e20;
    }
    ctx->pc = 0x286E18u;
    {
        const bool branch_taken_0x286e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286e18) {
            ctx->pc = 0x286E24u;
            goto label_286e24;
        }
    }
    ctx->pc = 0x286E20u;
label_286e20:
    // 0x286e20: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x286e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_286e24:
    // 0x286e24: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x286e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_286e28:
    // 0x286e28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x286e28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286e2c:
    // 0x286e2c: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x286e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_286e30:
    // 0x286e30: 0x1002042b  beq         $zero, $v0, . + 4 + (0x42B << 2)
label_286e34:
    if (ctx->pc == 0x286E34u) {
        ctx->pc = 0x286E38u;
        goto label_286e38;
    }
    ctx->pc = 0x286E30u;
    {
        const bool branch_taken_0x286e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x286e30) {
            ctx->pc = 0x287EE0u;
            goto label_287ee0;
        }
    }
    ctx->pc = 0x286E38u;
label_286e38:
    // 0x286e38: 0x10170429  beq         $zero, $s7, . + 4 + (0x429 << 2)
label_286e3c:
    if (ctx->pc == 0x286E3Cu) {
        ctx->pc = 0x286E40u;
        goto label_286e40;
    }
    ctx->pc = 0x286E38u;
    {
        const bool branch_taken_0x286e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x286e38) {
            ctx->pc = 0x287EE0u;
            goto label_287ee0;
        }
    }
    ctx->pc = 0x286E40u;
label_286e40:
    // 0x286e40: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x286e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286e44:
    // 0x286e44: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x286e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_286e48:
    // 0x286e48: 0xafa501d0  sw          $a1, 0x1D0($sp)
    ctx->pc = 0x286e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 5));
label_286e4c:
    // 0x286e4c: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x286e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286e50:
    // 0x286e50: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x286e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_286e54:
    // 0x286e54: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x286e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
label_286e58:
    // 0x286e58: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x286e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_286e5c:
    // 0x286e5c: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x286e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_286e60:
    // 0x286e60: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x286e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_286e64:
    // 0x286e64: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x286e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
label_286e68:
    // 0x286e68: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x286e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_286e6c:
    // 0x286e6c: 0xafa501c4  sw          $a1, 0x1C4($sp)
    ctx->pc = 0x286e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 5));
label_286e70:
    // 0x286e70: 0xc0e2744  jal         func_389D10
label_286e74:
    if (ctx->pc == 0x286E74u) {
        ctx->pc = 0x286E78u;
        goto label_286e78;
    }
    ctx->pc = 0x286E70u;
    SET_GPR_U32(ctx, 31, 0x286E78u);
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x286E70u, 0x286E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286E78u;
label_286e78:
    // 0x286e78: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x286e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_286e7c:
    // 0x286e7c: 0xafa001bc  sw          $zero, 0x1BC($sp)
    ctx->pc = 0x286e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 0));
label_286e80:
    // 0x286e80: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x286e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_286e84:
    // 0x286e84: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x286e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_286e88:
    // 0x286e88: 0xafa401b8  sw          $a0, 0x1B8($sp)
    ctx->pc = 0x286e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 4));
label_286e8c:
    // 0x286e8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x286e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_286e90:
    // 0x286e90: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x286e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_286e94:
    // 0x286e94: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x286e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_286e98:
    // 0x286e98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286e9c:
    // 0x286e9c: 0x8fa601b4  lw          $a2, 0x1B4($sp)
    ctx->pc = 0x286e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_286ea0:
    // 0x286ea0: 0xc0a1ac8  jal         func_286B20
label_286ea4:
    if (ctx->pc == 0x286EA4u) {
        ctx->pc = 0x286EA8u;
        goto label_286ea8;
    }
    ctx->pc = 0x286EA0u;
    SET_GPR_U32(ctx, 31, 0x286EA8u);
    ctx->pc = 0x286B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B20u, 0x286EA0u, 0x286EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EA8u;
label_286ea8:
    // 0x286ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286eac:
    // 0x286eac: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x286eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_286eb0:
    // 0x286eb0: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x286eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_286eb4:
    // 0x286eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_286eb8:
    // 0x286eb8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x286eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_286ebc:
    // 0x286ebc: 0xc0bb7e6  jal         func_2EDF98
label_286ec0:
    if (ctx->pc == 0x286EC0u) {
        ctx->pc = 0x286EC4u;
        goto label_286ec4;
    }
    ctx->pc = 0x286EBCu;
    SET_GPR_U32(ctx, 31, 0x286EC4u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x286EBCu, 0x286EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EC4u;
label_286ec4:
    // 0x286ec4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x286ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286ec8:
    // 0x286ec8: 0xc0477e0  jal         func_11DF80
label_286ecc:
    if (ctx->pc == 0x286ECCu) {
        ctx->pc = 0x286ED0u;
        goto label_286ed0;
    }
    ctx->pc = 0x286EC8u;
    SET_GPR_U32(ctx, 31, 0x286ED0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x286EC8u, 0x286ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286ED0u;
label_286ed0:
    // 0x286ed0: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x286ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286ed4:
    // 0x286ed4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x286ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_286ed8:
    // 0x286ed8: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x286ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_286edc:
    // 0x286edc: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x286edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_286ee0:
    // 0x286ee0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x286ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286ee4:
    // 0x286ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x286ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_286ee8:
    // 0x286ee8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x286ee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286eec:
    // 0x286eec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x286eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286ef0:
    // 0x286ef0: 0xc0477e0  jal         func_11DF80
label_286ef4:
    if (ctx->pc == 0x286EF4u) {
        ctx->pc = 0x286EF8u;
        goto label_286ef8;
    }
    ctx->pc = 0x286EF0u;
    SET_GPR_U32(ctx, 31, 0x286EF8u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x286EF0u, 0x286EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286EF8u;
label_286ef8:
    // 0x286ef8: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x286ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_286efc:
    // 0x286efc: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x286efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_286f00:
    // 0x286f00: 0x1000007a  b           . + 4 + (0x7A << 2)
label_286f04:
    if (ctx->pc == 0x286F04u) {
        ctx->pc = 0x286F08u;
        goto label_286f08;
    }
    ctx->pc = 0x286F00u;
    {
        const bool branch_taken_0x286f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f00) {
            ctx->pc = 0x2870ECu;
            goto label_2870ec;
        }
    }
    ctx->pc = 0x286F08u;
label_286f08:
    // 0x286f08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x286f08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286f0c:
    // 0x286f0c: 0x1000006b  b           . + 4 + (0x6B << 2)
label_286f10:
    if (ctx->pc == 0x286F10u) {
        ctx->pc = 0x286F14u;
        goto label_286f14;
    }
    ctx->pc = 0x286F0Cu;
    {
        const bool branch_taken_0x286f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f0c) {
            ctx->pc = 0x2870BCu;
            goto label_2870bc;
        }
    }
    ctx->pc = 0x286F14u;
label_286f14:
    // 0x286f14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x286f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286f18:
    // 0x286f18: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x286f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_286f1c:
    // 0x286f1c: 0xc064774  jal         func_191DD0
label_286f20:
    if (ctx->pc == 0x286F20u) {
        ctx->pc = 0x286F24u;
        goto label_286f24;
    }
    ctx->pc = 0x286F1Cu;
    SET_GPR_U32(ctx, 31, 0x286F24u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x286F1Cu, 0x286F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F24u;
label_286f24:
    // 0x286f24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x286f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286f28:
    // 0x286f28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x286f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_286f2c:
    // 0x286f2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x286f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286f30:
    // 0x286f30: 0x14130006  bne         $zero, $s3, . + 4 + (0x6 << 2)
label_286f34:
    if (ctx->pc == 0x286F34u) {
        ctx->pc = 0x286F38u;
        goto label_286f38;
    }
    ctx->pc = 0x286F30u;
    {
        const bool branch_taken_0x286f30 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 19));
        if (branch_taken_0x286f30) {
            ctx->pc = 0x286F4Cu;
            goto label_286f4c;
        }
    }
    ctx->pc = 0x286F38u;
label_286f38:
    // 0x286f38: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x286f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_286f3c:
    // 0x286f3c: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x286f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_286f40:
    // 0x286f40: 0xafa301b8  sw          $v1, 0x1B8($sp)
    ctx->pc = 0x286f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 3));
label_286f44:
    // 0x286f44: 0x10000058  b           . + 4 + (0x58 << 2)
label_286f48:
    if (ctx->pc == 0x286F48u) {
        ctx->pc = 0x286F4Cu;
        goto label_286f4c;
    }
    ctx->pc = 0x286F44u;
    {
        const bool branch_taken_0x286f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f44) {
            ctx->pc = 0x2870A8u;
            goto label_2870a8;
        }
    }
    ctx->pc = 0x286F4Cu;
label_286f4c:
    // 0x286f4c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x286f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_286f50:
    // 0x286f50: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x286f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_286f54:
    // 0x286f54: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_286f58:
    if (ctx->pc == 0x286F58u) {
        ctx->pc = 0x286F5Cu;
        goto label_286f5c;
    }
    ctx->pc = 0x286F54u;
    {
        const bool branch_taken_0x286f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f54) {
            ctx->pc = 0x287004u;
            goto label_287004;
        }
    }
    ctx->pc = 0x286F5Cu;
label_286f5c:
    // 0x286f5c: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
label_286f60:
    if (ctx->pc == 0x286F60u) {
        ctx->pc = 0x286F64u;
        goto label_286f64;
    }
    ctx->pc = 0x286F5Cu;
    {
        const bool branch_taken_0x286f5c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f5c) {
            ctx->pc = 0x286F94u;
            goto label_286f94;
        }
    }
    ctx->pc = 0x286F64u;
label_286f64:
    // 0x286f64: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x286f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_286f68:
    // 0x286f68: 0x2a31023  subu        $v0, $s5, $v1
    ctx->pc = 0x286f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_286f6c:
    // 0x286f6c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x286f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_286f70:
    // 0x286f70: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x286f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286f74:
    // 0x286f74: 0xc064774  jal         func_191DD0
label_286f78:
    if (ctx->pc == 0x286F78u) {
        ctx->pc = 0x286F7Cu;
        goto label_286f7c;
    }
    ctx->pc = 0x286F74u;
    SET_GPR_U32(ctx, 31, 0x286F7Cu);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x286F74u, 0x286F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286F7Cu;
label_286f7c:
    // 0x286f7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x286f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286f80:
    // 0x286f80: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
label_286f84:
    if (ctx->pc == 0x286F84u) {
        ctx->pc = 0x286F88u;
        goto label_286f88;
    }
    ctx->pc = 0x286F80u;
    {
        const bool branch_taken_0x286f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x286f80) {
            ctx->pc = 0x286F94u;
            goto label_286f94;
        }
    }
    ctx->pc = 0x286F88u;
label_286f88:
    // 0x286f88: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x286f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_286f8c:
    // 0x286f8c: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x286f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_286f90:
    // 0x286f90: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x286f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_286f94:
    // 0x286f94: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x286f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_286f98:
    // 0x286f98: 0x2a22823  subu        $a1, $s5, $v0
    ctx->pc = 0x286f98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_286f9c:
    // 0x286f9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x286f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286fa0:
    // 0x286fa0: 0xc064774  jal         func_191DD0
label_286fa4:
    if (ctx->pc == 0x286FA4u) {
        ctx->pc = 0x286FA8u;
        goto label_286fa8;
    }
    ctx->pc = 0x286FA0u;
    SET_GPR_U32(ctx, 31, 0x286FA8u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x286FA0u, 0x286FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FA8u;
label_286fa8:
    // 0x286fa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286fac:
    // 0x286fac: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
label_286fb0:
    if (ctx->pc == 0x286FB0u) {
        ctx->pc = 0x286FB4u;
        goto label_286fb4;
    }
    ctx->pc = 0x286FACu;
    {
        const bool branch_taken_0x286fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x286fac) {
            ctx->pc = 0x286FC0u;
            goto label_286fc0;
        }
    }
    ctx->pc = 0x286FB4u;
label_286fb4:
    // 0x286fb4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x286fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_286fb8:
    // 0x286fb8: 0x34430007  ori         $v1, $v0, 0x7
    ctx->pc = 0x286fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_286fbc:
    // 0x286fbc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x286fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_286fc0:
    // 0x286fc0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x286fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_286fc4:
    // 0x286fc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x286fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_286fc8:
    // 0x286fc8: 0x2c2082b  sltu        $at, $s6, $v0
    ctx->pc = 0x286fc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_286fcc:
    // 0x286fcc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_286fd0:
    if (ctx->pc == 0x286FD0u) {
        ctx->pc = 0x286FD4u;
        goto label_286fd4;
    }
    ctx->pc = 0x286FCCu;
    {
        const bool branch_taken_0x286fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x286fcc) {
            ctx->pc = 0x287004u;
            goto label_287004;
        }
    }
    ctx->pc = 0x286FD4u;
label_286fd4:
    // 0x286fd4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x286fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_286fd8:
    // 0x286fd8: 0x2a21823  subu        $v1, $s5, $v0
    ctx->pc = 0x286fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_286fdc:
    // 0x286fdc: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x286fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_286fe0:
    // 0x286fe0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x286fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_286fe4:
    // 0x286fe4: 0xc064774  jal         func_191DD0
label_286fe8:
    if (ctx->pc == 0x286FE8u) {
        ctx->pc = 0x286FECu;
        goto label_286fec;
    }
    ctx->pc = 0x286FE4u;
    SET_GPR_U32(ctx, 31, 0x286FECu);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x286FE4u, 0x286FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286FECu;
label_286fec:
    // 0x286fec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x286fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286ff0:
    // 0x286ff0: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
label_286ff4:
    if (ctx->pc == 0x286FF4u) {
        ctx->pc = 0x286FF8u;
        goto label_286ff8;
    }
    ctx->pc = 0x286FF0u;
    {
        const bool branch_taken_0x286ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x286ff0) {
            ctx->pc = 0x287004u;
            goto label_287004;
        }
    }
    ctx->pc = 0x286FF8u;
label_286ff8:
    // 0x286ff8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x286ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_286ffc:
    // 0x286ffc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x286ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_287000:
    // 0x287000: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x287000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_287004:
    // 0x287004: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
label_287008:
    if (ctx->pc == 0x287008u) {
        ctx->pc = 0x28700Cu;
        goto label_28700c;
    }
    ctx->pc = 0x287004u;
    {
        const bool branch_taken_0x287004 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x287004) {
            ctx->pc = 0x287034u;
            goto label_287034;
        }
    }
    ctx->pc = 0x28700Cu;
label_28700c:
    // 0x28700c: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x28700cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_287010:
    // 0x287010: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_287014:
    // 0x287014: 0xc064774  jal         func_191DD0
label_287018:
    if (ctx->pc == 0x287018u) {
        ctx->pc = 0x28701Cu;
        goto label_28701c;
    }
    ctx->pc = 0x287014u;
    SET_GPR_U32(ctx, 31, 0x28701Cu);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x287014u, 0x28701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28701Cu;
label_28701c:
    // 0x28701c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287020:
    // 0x287020: 0x14730004  bne         $v1, $s3, . + 4 + (0x4 << 2)
label_287024:
    if (ctx->pc == 0x287024u) {
        ctx->pc = 0x287028u;
        goto label_287028;
    }
    ctx->pc = 0x287020u;
    {
        const bool branch_taken_0x287020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x287020) {
            ctx->pc = 0x287034u;
            goto label_287034;
        }
    }
    ctx->pc = 0x287028u;
label_287028:
    // 0x287028: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x287028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_28702c:
    // 0x28702c: 0x34620009  ori         $v0, $v1, 0x9
    ctx->pc = 0x28702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
label_287030:
    // 0x287030: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x287030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_287034:
    // 0x287034: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x287034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_287038:
    // 0x287038: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x287038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_28703c:
    // 0x28703c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x28703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_287040:
    // 0x287040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x287040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_287044:
    // 0x287044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_287048:
    if (ctx->pc == 0x287048u) {
        ctx->pc = 0x28704Cu;
        goto label_28704c;
    }
    ctx->pc = 0x287044u;
    {
        const bool branch_taken_0x287044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287044) {
            ctx->pc = 0x287058u;
            goto label_287058;
        }
    }
    ctx->pc = 0x28704Cu;
label_28704c:
    // 0x28704c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x28704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_287050:
    // 0x287050: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x287050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_287054:
    // 0x287054: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x287054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_287058:
    // 0x287058: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x287058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_28705c:
    // 0x28705c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_287060:
    // 0x287060: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x287060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_287064:
    // 0x287064: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x287064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_287068:
    // 0x287068: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_28706c:
    if (ctx->pc == 0x28706Cu) {
        ctx->pc = 0x287070u;
        goto label_287070;
    }
    ctx->pc = 0x287068u;
    {
        const bool branch_taken_0x287068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287068) {
            ctx->pc = 0x28707Cu;
            goto label_28707c;
        }
    }
    ctx->pc = 0x287070u;
label_287070:
    // 0x287070: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x287070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_287074:
    // 0x287074: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x287074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_287078:
    // 0x287078: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x287078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_28707c:
    // 0x28707c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x28707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_287080:
    // 0x287080: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x287080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_287084:
    // 0x287084: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_287088:
    if (ctx->pc == 0x287088u) {
        ctx->pc = 0x28708Cu;
        goto label_28708c;
    }
    ctx->pc = 0x287084u;
    {
        const bool branch_taken_0x287084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x287084) {
            ctx->pc = 0x287098u;
            goto label_287098;
        }
    }
    ctx->pc = 0x28708Cu;
label_28708c:
    // 0x28708c: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x28708cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_287090:
    // 0x287090: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x287090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_287094:
    // 0x287094: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x287094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_287098:
    // 0x287098: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x287098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_28709c:
    // 0x28709c: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x28709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_2870a0:
    // 0x2870a0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2870a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2870a4:
    // 0x2870a4: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x2870a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
label_2870a8:
    // 0x2870a8: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x2870a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2870ac:
    // 0x2870ac: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x2870acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2870b0:
    // 0x2870b0: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x2870b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2870b4:
    // 0x2870b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2870b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2870b8:
    // 0x2870b8: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x2870b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_2870bc:
    // 0x2870bc: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x2870bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2870c0:
    // 0x2870c0: 0x2c2202b  sltu        $a0, $s6, $v0
    ctx->pc = 0x2870c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2870c4:
    // 0x2870c4: 0x1480ff93  bnez        $a0, . + 4 + (-0x6D << 2)
label_2870c8:
    if (ctx->pc == 0x2870C8u) {
        ctx->pc = 0x2870CCu;
        goto label_2870cc;
    }
    ctx->pc = 0x2870C4u;
    {
        const bool branch_taken_0x2870c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2870c4) {
            ctx->pc = 0x286F14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286f14;
        }
    }
    ctx->pc = 0x2870CCu;
label_2870cc:
    // 0x2870cc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x2870ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2870d0:
    // 0x2870d0: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x2870d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2870d4:
    // 0x2870d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2870d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2870d8:
    // 0x2870d8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2870d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2870dc:
    // 0x2870dc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2870dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2870e0:
    // 0x2870e0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2870e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2870e4:
    // 0x2870e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2870e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2870e8:
    // 0x2870e8: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2870e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_2870ec:
    // 0x2870ec: 0x8fb101b0  lw          $s1, 0x1B0($sp)
    ctx->pc = 0x2870ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2870f0:
    // 0x2870f0: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x2870f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_2870f4:
    // 0x2870f4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2870f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2870f8:
    // 0x2870f8: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
label_2870fc:
    if (ctx->pc == 0x2870FCu) {
        ctx->pc = 0x287100u;
        goto label_287100;
    }
    ctx->pc = 0x2870F8u;
    {
        const bool branch_taken_0x2870f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2870f8) {
            ctx->pc = 0x286F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286f08;
        }
    }
    ctx->pc = 0x287100u;
label_287100:
    // 0x287100: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x287100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_287104:
    // 0x287104: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x287104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_287108:
    // 0x287108: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x287108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_28710c:
    // 0x28710c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_287110:
    if (ctx->pc == 0x287110u) {
        ctx->pc = 0x287114u;
        goto label_287114;
    }
    ctx->pc = 0x28710Cu;
    {
        const bool branch_taken_0x28710c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28710c) {
            ctx->pc = 0x287128u;
            goto label_287128;
        }
    }
    ctx->pc = 0x287114u;
label_287114:
    // 0x287114: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x287114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_287118:
    // 0x287118: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x287118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_28711c:
    // 0x28711c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_287120:
    // 0x287120: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_287124:
    if (ctx->pc == 0x287124u) {
        ctx->pc = 0x287128u;
        goto label_287128;
    }
    ctx->pc = 0x287120u;
    {
        const bool branch_taken_0x287120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287120) {
            ctx->pc = 0x287150u;
            goto label_287150;
        }
    }
    ctx->pc = 0x287128u;
label_287128:
    // 0x287128: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_28712c:
    if (ctx->pc == 0x28712Cu) {
        ctx->pc = 0x287130u;
        goto label_287130;
    }
    ctx->pc = 0x287128u;
    {
        const bool branch_taken_0x287128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x287128) {
            ctx->pc = 0x287144u;
            goto label_287144;
        }
    }
    ctx->pc = 0x287130u;
label_287130:
    // 0x287130: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x287130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_287134:
    // 0x287134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287138:
    // 0x287138: 0xc0a1ab0  jal         func_286AC0
label_28713c:
    if (ctx->pc == 0x28713Cu) {
        ctx->pc = 0x287140u;
        goto label_287140;
    }
    ctx->pc = 0x287138u;
    SET_GPR_U32(ctx, 31, 0x287140u);
    ctx->pc = 0x286AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AC0u, 0x287138u, 0x287140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287140u;
label_287140:
    // 0x287140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x287140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287144:
    // 0x287144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287148:
    // 0x287148: 0x10000366  b           . + 4 + (0x366 << 2)
label_28714c:
    if (ctx->pc == 0x28714Cu) {
        ctx->pc = 0x287150u;
        goto label_287150;
    }
    ctx->pc = 0x287148u;
    {
        const bool branch_taken_0x287148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287148) {
            ctx->pc = 0x287EE4u;
            goto label_287ee4;
        }
    }
    ctx->pc = 0x287150u;
label_287150:
    // 0x287150: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x287150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_287154:
    // 0x287154: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x287154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_287158:
    // 0x287158: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x287158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28715c:
    // 0x28715c: 0x240600b9  addiu       $a2, $zero, 0xB9
    ctx->pc = 0x28715cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_287160:
    // 0x287160: 0xc0e2dbc  jal         func_38B6F0
label_287164:
    if (ctx->pc == 0x287164u) {
        ctx->pc = 0x287168u;
        goto label_287168;
    }
    ctx->pc = 0x287160u;
    SET_GPR_U32(ctx, 31, 0x287168u);
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x287160u, 0x287168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287168u;
label_287168:
    // 0x287168: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28716c:
    // 0x28716c: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x28716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_287170:
    // 0x287170: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x287170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_287174:
    // 0x287174: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x287174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_287178:
    // 0x287178: 0x8c470014  lw          $a3, 0x14($v0)
    ctx->pc = 0x287178u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_28717c:
    // 0x28717c: 0xafa70184  sw          $a3, 0x184($sp)
    ctx->pc = 0x28717cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 7));
label_287180:
    // 0x287180: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x287180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_287184:
    // 0x287184: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x287184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_287188:
    // 0x287188: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x287188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_28718c:
    // 0x28718c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x28718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_287190:
    // 0x287190: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x287190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_287194:
    // 0x287194: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_287198:
    // 0x287198: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x287198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_28719c:
    // 0x28719c: 0x8e880034  lw          $t0, 0x34($s4)
    ctx->pc = 0x28719cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_2871a0:
    // 0x2871a0: 0xafa80174  sw          $t0, 0x174($sp)
    ctx->pc = 0x2871a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 8));
label_2871a4:
    // 0x2871a4: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x2871a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_2871a8:
    // 0x2871a8: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x2871a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_2871ac:
    // 0x2871ac: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x2871acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_2871b0:
    // 0x2871b0: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2871b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_2871b4:
    // 0x2871b4: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x2871b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_2871b8:
    // 0x2871b8: 0xc780a290  lwc1        $f0, -0x5D70($gp)
    ctx->pc = 0x2871b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2871bc:
    // 0x2871bc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2871bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2871c0:
    // 0x2871c0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2871c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_2871c4:
    // 0x2871c4: 0x24c6d440  addiu       $a2, $a2, -0x2BC0
    ctx->pc = 0x2871c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956096));
label_2871c8:
    // 0x2871c8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2871c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2871cc:
    // 0x2871cc: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2871ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2871d0:
    // 0x2871d0: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2871d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2871d4:
    // 0x2871d4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2871d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_2871d8:
    // 0x2871d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2871d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2871dc:
    // 0x2871dc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2871dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2871e0:
    // 0x2871e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2871e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2871e4:
    // 0x2871e4: 0x0  nop
    ctx->pc = 0x2871e4u;
    // NOP
label_2871e8:
    // 0x2871e8: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2871e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_2871ec:
    // 0x2871ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2871ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2871f0:
    // 0x2871f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2871f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2871f4:
    // 0x2871f4: 0x0  nop
    ctx->pc = 0x2871f4u;
    // NOP
label_2871f8:
    // 0x2871f8: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2871f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2871fc:
    // 0x2871fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2871fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_287200:
    // 0x287200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287204:
    // 0x287204: 0x0  nop
    ctx->pc = 0x287204u;
    // NOP
label_287208:
    // 0x287208: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x287208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_28720c:
    // 0x28720c: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x28720cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_287210:
    // 0x287210: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x287210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_287214:
    // 0x287214: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_287218:
    // 0x287218: 0xc0477e0  jal         func_11DF80
label_28721c:
    if (ctx->pc == 0x28721Cu) {
        ctx->pc = 0x287220u;
        goto label_287220;
    }
    ctx->pc = 0x287218u;
    SET_GPR_U32(ctx, 31, 0x287220u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x287218u, 0x287220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287220u;
label_287220:
    // 0x287220: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x287220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_287224:
    // 0x287224: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x287224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_287228:
    // 0x287228: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x287228u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28722c:
    // 0x28722c: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_287230:
    // 0x287230: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x287230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287234:
    // 0x287234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x287234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_287238:
    // 0x287238: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x287238u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28723c:
    // 0x28723c: 0xa3a001ef  sb          $zero, 0x1EF($sp)
    ctx->pc = 0x28723cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 495), (uint8_t)GPR_U32(ctx, 0));
label_287240:
    // 0x287240: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x287240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_287244:
    // 0x287244: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x287244u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_287248:
    // 0x287248: 0xafb301a4  sw          $s3, 0x1A4($sp)
    ctx->pc = 0x287248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 19));
label_28724c:
    // 0x28724c: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x28724cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_287250:
    // 0x287250: 0x1000027f  b           . + 4 + (0x27F << 2)
label_287254:
    if (ctx->pc == 0x287254u) {
        ctx->pc = 0x287258u;
        goto label_287258;
    }
    ctx->pc = 0x287250u;
    {
        const bool branch_taken_0x287250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287250) {
            ctx->pc = 0x287C50u;
            goto label_287c50;
        }
    }
    ctx->pc = 0x287258u;
label_287258:
    // 0x287258: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x287258u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28725c:
    // 0x28725c: 0x1000026e  b           . + 4 + (0x26E << 2)
label_287260:
    if (ctx->pc == 0x287260u) {
        ctx->pc = 0x287264u;
        goto label_287264;
    }
    ctx->pc = 0x28725Cu;
    {
        const bool branch_taken_0x28725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28725c) {
            ctx->pc = 0x287C18u;
            goto label_287c18;
        }
    }
    ctx->pc = 0x287264u;
label_287264:
    // 0x287264: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x287264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_287268:
    // 0x287268: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
label_28726c:
    if (ctx->pc == 0x28726Cu) {
        ctx->pc = 0x287270u;
        goto label_287270;
    }
    ctx->pc = 0x287268u;
    {
        const bool branch_taken_0x287268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x287268) {
            ctx->pc = 0x28727Cu;
            goto label_28727c;
        }
    }
    ctx->pc = 0x287270u;
label_287270:
    // 0x287270: 0xa3a001ee  sb          $zero, 0x1EE($sp)
    ctx->pc = 0x287270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 494), (uint8_t)GPR_U32(ctx, 0));
label_287274:
    // 0x287274: 0x10000003  b           . + 4 + (0x3 << 2)
label_287278:
    if (ctx->pc == 0x287278u) {
        ctx->pc = 0x28727Cu;
        goto label_28727c;
    }
    ctx->pc = 0x287274u;
    {
        const bool branch_taken_0x287274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287274) {
            ctx->pc = 0x287284u;
            goto label_287284;
        }
    }
    ctx->pc = 0x28727Cu;
label_28727c:
    // 0x28727c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28727cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287280:
    // 0x287280: 0xa3a201ee  sb          $v0, 0x1EE($sp)
    ctx->pc = 0x287280u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 494), (uint8_t)GPR_U32(ctx, 2));
label_287284:
    // 0x287284: 0x93a201ee  lbu         $v0, 0x1EE($sp)
    ctx->pc = 0x287284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 494)));
label_287288:
    // 0x287288: 0xa3a201ef  sb          $v0, 0x1EF($sp)
    ctx->pc = 0x287288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 495), (uint8_t)GPR_U32(ctx, 2));
label_28728c:
    // 0x28728c: 0xafb301a4  sw          $s3, 0x1A4($sp)
    ctx->pc = 0x28728cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 19));
label_287290:
    // 0x287290: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_287294:
    // 0x287294: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x287294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_287298:
    // 0x287298: 0xc064774  jal         func_191DD0
label_28729c:
    if (ctx->pc == 0x28729Cu) {
        ctx->pc = 0x2872A0u;
        goto label_2872a0;
    }
    ctx->pc = 0x287298u;
    SET_GPR_U32(ctx, 31, 0x2872A0u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x287298u, 0x2872A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872A0u;
label_2872a0:
    // 0x2872a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2872a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2872a4:
    // 0x2872a4: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x2872a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2872a8:
    // 0x2872a8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2872a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2872ac:
    // 0x2872ac: 0x10130255  beq         $zero, $s3, . + 4 + (0x255 << 2)
label_2872b0:
    if (ctx->pc == 0x2872B0u) {
        ctx->pc = 0x2872B4u;
        goto label_2872b4;
    }
    ctx->pc = 0x2872ACu;
    {
        const bool branch_taken_0x2872ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x2872ac) {
            ctx->pc = 0x287C04u;
            goto label_287c04;
        }
    }
    ctx->pc = 0x2872B4u;
label_2872b4:
    // 0x2872b4: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x2872b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
label_2872b8:
    // 0x2872b8: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x2872b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
label_2872bc:
    // 0x2872bc: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x2872bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
label_2872c0:
    // 0x2872c0: 0xafa0018c  sw          $zero, 0x18C($sp)
    ctx->pc = 0x2872c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
label_2872c4:
    // 0x2872c4: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x2872c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2872c8:
    // 0x2872c8: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_2872cc:
    if (ctx->pc == 0x2872CCu) {
        ctx->pc = 0x2872D0u;
        goto label_2872d0;
    }
    ctx->pc = 0x2872C8u;
    {
        const bool branch_taken_0x2872c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2872c8) {
            ctx->pc = 0x287340u;
            goto label_287340;
        }
    }
    ctx->pc = 0x2872D0u;
label_2872d0:
    // 0x2872d0: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_2872d4:
    if (ctx->pc == 0x2872D4u) {
        ctx->pc = 0x2872D8u;
        goto label_2872d8;
    }
    ctx->pc = 0x2872D0u;
    {
        const bool branch_taken_0x2872d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2872d0) {
            ctx->pc = 0x2872F8u;
            goto label_2872f8;
        }
    }
    ctx->pc = 0x2872D8u;
label_2872d8:
    // 0x2872d8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x2872d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2872dc:
    // 0x2872dc: 0x2a22823  subu        $a1, $s5, $v0
    ctx->pc = 0x2872dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2872e0:
    // 0x2872e0: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x2872e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2872e4:
    // 0x2872e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2872e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2872e8:
    // 0x2872e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2872e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2872ec:
    // 0x2872ec: 0xc064774  jal         func_191DD0
label_2872f0:
    if (ctx->pc == 0x2872F0u) {
        ctx->pc = 0x2872F4u;
        goto label_2872f4;
    }
    ctx->pc = 0x2872ECu;
    SET_GPR_U32(ctx, 31, 0x2872F4u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x2872ECu, 0x2872F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2872F4u;
label_2872f4:
    // 0x2872f4: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x2872f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_2872f8:
    // 0x2872f8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x2872f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2872fc:
    // 0x2872fc: 0x2a22823  subu        $a1, $s5, $v0
    ctx->pc = 0x2872fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_287300:
    // 0x287300: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_287304:
    // 0x287304: 0xc064774  jal         func_191DD0
label_287308:
    if (ctx->pc == 0x287308u) {
        ctx->pc = 0x28730Cu;
        goto label_28730c;
    }
    ctx->pc = 0x287304u;
    SET_GPR_U32(ctx, 31, 0x28730Cu);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x287304u, 0x28730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28730Cu;
label_28730c:
    // 0x28730c: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x28730cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
label_287310:
    // 0x287310: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x287310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_287314:
    // 0x287314: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x287314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_287318:
    // 0x287318: 0x2c2082b  sltu        $at, $s6, $v0
    ctx->pc = 0x287318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28731c:
    // 0x28731c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_287320:
    if (ctx->pc == 0x287320u) {
        ctx->pc = 0x287324u;
        goto label_287324;
    }
    ctx->pc = 0x28731Cu;
    {
        const bool branch_taken_0x28731c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28731c) {
            ctx->pc = 0x287340u;
            goto label_287340;
        }
    }
    ctx->pc = 0x287324u;
label_287324:
    // 0x287324: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x287324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_287328:
    // 0x287328: 0x2a28823  subu        $s1, $s5, $v0
    ctx->pc = 0x287328u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28732c:
    // 0x28732c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x28732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_287330:
    // 0x287330: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x287330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_287334:
    // 0x287334: 0xc064774  jal         func_191DD0
label_287338:
    if (ctx->pc == 0x287338u) {
        ctx->pc = 0x28733Cu;
        goto label_28733c;
    }
    ctx->pc = 0x287334u;
    SET_GPR_U32(ctx, 31, 0x28733Cu);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x287334u, 0x28733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28733Cu;
label_28733c:
    // 0x28733c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x28733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_287340:
    // 0x287340: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_287344:
    if (ctx->pc == 0x287344u) {
        ctx->pc = 0x287348u;
        goto label_287348;
    }
    ctx->pc = 0x287340u;
    {
        const bool branch_taken_0x287340 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x287340) {
            ctx->pc = 0x28735Cu;
            goto label_28735c;
        }
    }
    ctx->pc = 0x287348u;
label_287348:
    // 0x287348: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x287348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_28734c:
    // 0x28734c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28734cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_287350:
    // 0x287350: 0xc064774  jal         func_191DD0
label_287354:
    if (ctx->pc == 0x287354u) {
        ctx->pc = 0x287358u;
        goto label_287358;
    }
    ctx->pc = 0x287350u;
    SET_GPR_U32(ctx, 31, 0x287358u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x287350u, 0x287358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287358u;
label_287358:
    // 0x287358: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x287358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_28735c:
    // 0x28735c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_287360:
    if (ctx->pc == 0x287360u) {
        ctx->pc = 0x287364u;
        goto label_287364;
    }
    ctx->pc = 0x28735Cu;
    {
        const bool branch_taken_0x28735c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28735c) {
            ctx->pc = 0x287380u;
            goto label_287380;
        }
    }
    ctx->pc = 0x287364u;
label_287364:
    // 0x287364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x287364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_287368:
    // 0x287368: 0xc094d24  jal         func_253490
label_28736c:
    if (ctx->pc == 0x28736Cu) {
        ctx->pc = 0x287370u;
        goto label_287370;
    }
    ctx->pc = 0x287368u;
    SET_GPR_U32(ctx, 31, 0x287370u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x287368u, 0x287370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287370u;
label_287370:
    // 0x287370: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x287370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287374:
    // 0x287374: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x287374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_287378:
    // 0x287378: 0x10000002  b           . + 4 + (0x2 << 2)
label_28737c:
    if (ctx->pc == 0x28737Cu) {
        ctx->pc = 0x287380u;
        goto label_287380;
    }
    ctx->pc = 0x287378u;
    {
        const bool branch_taken_0x287378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287378) {
            ctx->pc = 0x287384u;
            goto label_287384;
        }
    }
    ctx->pc = 0x287380u;
label_287380:
    // 0x287380: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x287380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_287384:
    // 0x287384: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x287384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_287388:
    // 0x287388: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x287388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_28738c:
    // 0x28738c: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x28738cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_287390:
    // 0x287390: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x287390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_287394:
    // 0x287394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x287394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287398:
    // 0x287398: 0xc0a69b0  jal         func_29A6C0
label_28739c:
    if (ctx->pc == 0x28739Cu) {
        ctx->pc = 0x2873A0u;
        goto label_2873a0;
    }
    ctx->pc = 0x287398u;
    SET_GPR_U32(ctx, 31, 0x2873A0u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x287398u, 0x2873A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873A0u;
label_2873a0:
    // 0x2873a0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x2873a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_2873a4:
    // 0x2873a4: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x2873a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_2873a8:
    // 0x2873a8: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x2873a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2873ac:
    // 0x2873ac: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_2873b0:
    if (ctx->pc == 0x2873B0u) {
        ctx->pc = 0x2873B4u;
        goto label_2873b4;
    }
    ctx->pc = 0x2873ACu;
    {
        const bool branch_taken_0x2873ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2873ac) {
            ctx->pc = 0x2873E8u;
            goto label_2873e8;
        }
    }
    ctx->pc = 0x2873B4u;
label_2873b4:
    // 0x2873b4: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x2873b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2873b8:
    // 0x2873b8: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x2873b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_2873bc:
    // 0x2873bc: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x2873bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_2873c0:
    // 0x2873c0: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2873c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_2873c4:
    // 0x2873c4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2873c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2873c8:
    // 0x2873c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2873c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2873cc:
    // 0x2873cc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2873ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2873d0:
    // 0x2873d0: 0x320f809  jalr        $t9
label_2873d4:
    if (ctx->pc == 0x2873D4u) {
        ctx->pc = 0x2873D8u;
        goto label_2873d8;
    }
    ctx->pc = 0x2873D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2873D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2873D0u, 0x2873D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2873D8u;
label_2873d8:
    // 0x2873d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2873d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2873dc:
    // 0x2873dc: 0xc0e3736  jal         func_38DCD8
label_2873e0:
    if (ctx->pc == 0x2873E0u) {
        ctx->pc = 0x2873E4u;
        goto label_2873e4;
    }
    ctx->pc = 0x2873DCu;
    SET_GPR_U32(ctx, 31, 0x2873E4u);
    ctx->pc = 0x38DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DCD8u, 0x2873DCu, 0x2873E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873E4u;
label_2873e4:
    // 0x2873e4: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x2873e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_2873e8:
    // 0x2873e8: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2873ec:
    if (ctx->pc == 0x2873ECu) {
        ctx->pc = 0x2873F0u;
        goto label_2873f0;
    }
    ctx->pc = 0x2873E8u;
    {
        const bool branch_taken_0x2873e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2873e8) {
            ctx->pc = 0x28740Cu;
            goto label_28740c;
        }
    }
    ctx->pc = 0x2873F0u;
label_2873f0:
    // 0x2873f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2873f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2873f4:
    // 0x2873f4: 0xc094d24  jal         func_253490
label_2873f8:
    if (ctx->pc == 0x2873F8u) {
        ctx->pc = 0x2873FCu;
        goto label_2873fc;
    }
    ctx->pc = 0x2873F4u;
    SET_GPR_U32(ctx, 31, 0x2873FCu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x2873F4u, 0x2873FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2873FCu;
label_2873fc:
    // 0x2873fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2873fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_287400:
    // 0x287400: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x287400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_287404:
    // 0x287404: 0x10000003  b           . + 4 + (0x3 << 2)
label_287408:
    if (ctx->pc == 0x287408u) {
        ctx->pc = 0x28740Cu;
        goto label_28740c;
    }
    ctx->pc = 0x287404u;
    {
        const bool branch_taken_0x287404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287404) {
            ctx->pc = 0x287414u;
            goto label_287414;
        }
    }
    ctx->pc = 0x28740Cu;
label_28740c:
    // 0x28740c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287410:
    // 0x287410: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x287410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_287414:
    // 0x287414: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x287414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_287418:
    // 0x287418: 0xc04d634  jal         func_1358D0
label_28741c:
    if (ctx->pc == 0x28741Cu) {
        ctx->pc = 0x287420u;
        goto label_287420;
    }
    ctx->pc = 0x287418u;
    SET_GPR_U32(ctx, 31, 0x287420u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x287418u, 0x287420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287420u;
label_287420:
    // 0x287420: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x287420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_287424:
    // 0x287424: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x287424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_287428:
    // 0x287428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x287428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28742c:
    // 0x28742c: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x28742cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_287430:
    // 0x287430: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_287434:
    if (ctx->pc == 0x287434u) {
        ctx->pc = 0x287438u;
        goto label_287438;
    }
    ctx->pc = 0x287430u;
    {
        const bool branch_taken_0x287430 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x287430) {
            ctx->pc = 0x28744Cu;
            goto label_28744c;
        }
    }
    ctx->pc = 0x287438u;
label_287438:
    // 0x287438: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x287438u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28743c:
    // 0x28743c: 0x0  nop
    ctx->pc = 0x28743cu;
    // NOP
label_287440:
    // 0x287440: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x287440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_287444:
    // 0x287444: 0x10000008  b           . + 4 + (0x8 << 2)
label_287448:
    if (ctx->pc == 0x287448u) {
        ctx->pc = 0x28744Cu;
        goto label_28744c;
    }
    ctx->pc = 0x287444u;
    {
        const bool branch_taken_0x287444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287444) {
            ctx->pc = 0x287468u;
            goto label_287468;
        }
    }
    ctx->pc = 0x28744Cu;
label_28744c:
    // 0x28744c: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x28744cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_287450:
    // 0x287450: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x287450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_287454:
    // 0x287454: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x287454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_287458:
    // 0x287458: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x287458u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28745c:
    // 0x28745c: 0x0  nop
    ctx->pc = 0x28745cu;
    // NOP
label_287460:
    // 0x287460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x287460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_287464:
    // 0x287464: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x287464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_287468:
    // 0x287468: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x287468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28746c:
    // 0x28746c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x28746cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_287470:
    // 0x287470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287474:
    // 0x287474: 0x0  nop
    ctx->pc = 0x287474u;
    // NOP
label_287478:
    // 0x287478: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x287478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_28747c:
    // 0x28747c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x28747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_287480:
    // 0x287480: 0xc0a1fd0  jal         func_287F40
label_287484:
    if (ctx->pc == 0x287484u) {
        ctx->pc = 0x287488u;
        goto label_287488;
    }
    ctx->pc = 0x287480u;
    SET_GPR_U32(ctx, 31, 0x287488u);
    ctx->pc = 0x287F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F40u, 0x287480u, 0x287488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287488u;
label_287488:
    // 0x287488: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x287488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_28748c:
    // 0x28748c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28748cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_287490:
    // 0x287490: 0x0  nop
    ctx->pc = 0x287490u;
    // NOP
label_287494:
    // 0x287494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x287494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_287498:
    // 0x287498: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_28749c:
    if (ctx->pc == 0x28749Cu) {
        ctx->pc = 0x2874A0u;
        goto label_2874a0;
    }
    ctx->pc = 0x287498u;
    {
        const bool branch_taken_0x287498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x287498) {
            ctx->pc = 0x2874B0u;
            goto label_2874b0;
        }
    }
    ctx->pc = 0x2874A0u;
label_2874a0:
    // 0x2874a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2874a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2874a4:
    // 0x2874a4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2874a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2874a8:
    // 0x2874a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2874ac:
    if (ctx->pc == 0x2874ACu) {
        ctx->pc = 0x2874B0u;
        goto label_2874b0;
    }
    ctx->pc = 0x2874A8u;
    {
        const bool branch_taken_0x2874a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2874a8) {
            ctx->pc = 0x2874C4u;
            goto label_2874c4;
        }
    }
    ctx->pc = 0x2874B0u;
label_2874b0:
    // 0x2874b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2874b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2874b4:
    // 0x2874b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2874b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2874b8:
    // 0x2874b8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2874b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2874bc:
    // 0x2874bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2874bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2874c0:
    // 0x2874c0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2874c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2874c4:
    // 0x2874c4: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x2874c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2874c8:
    // 0x2874c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2874c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2874cc:
    // 0x2874cc: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2874ccu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2874d0:
    // 0x2874d0: 0x2010  mfhi        $a0
    ctx->pc = 0x2874d0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2874d4:
    // 0x2874d4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_2874d8:
    if (ctx->pc == 0x2874D8u) {
        ctx->pc = 0x2874DCu;
        goto label_2874dc;
    }
    ctx->pc = 0x2874D4u;
    {
        const bool branch_taken_0x2874d4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2874d4) {
            ctx->pc = 0x2874F0u;
            goto label_2874f0;
        }
    }
    ctx->pc = 0x2874DCu;
label_2874dc:
    // 0x2874dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2874dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2874e0:
    // 0x2874e0: 0x0  nop
    ctx->pc = 0x2874e0u;
    // NOP
label_2874e4:
    // 0x2874e4: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2874e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2874e8:
    // 0x2874e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2874ec:
    if (ctx->pc == 0x2874ECu) {
        ctx->pc = 0x2874F0u;
        goto label_2874f0;
    }
    ctx->pc = 0x2874E8u;
    {
        const bool branch_taken_0x2874e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2874e8) {
            ctx->pc = 0x28750Cu;
            goto label_28750c;
        }
    }
    ctx->pc = 0x2874F0u;
label_2874f0:
    // 0x2874f0: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x2874f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2874f4:
    // 0x2874f4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2874f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2874f8:
    // 0x2874f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2874f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2874fc:
    // 0x2874fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2874fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287500:
    // 0x287500: 0x0  nop
    ctx->pc = 0x287500u;
    // NOP
label_287504:
    // 0x287504: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x287504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_287508:
    // 0x287508: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x287508u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_28750c:
    // 0x28750c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x28750cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_287510:
    // 0x287510: 0xc0a1fd0  jal         func_287F40
label_287514:
    if (ctx->pc == 0x287514u) {
        ctx->pc = 0x287518u;
        goto label_287518;
    }
    ctx->pc = 0x287510u;
    SET_GPR_U32(ctx, 31, 0x287518u);
    ctx->pc = 0x287F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F40u, 0x287510u, 0x287518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287518u;
label_287518:
    // 0x287518: 0x0  nop
    ctx->pc = 0x287518u;
    // NOP
label_28751c:
    // 0x28751c: 0x0  nop
    ctx->pc = 0x28751cu;
    // NOP
label_287520:
    // 0x287520: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x287520u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_287524:
    // 0x287524: 0x0  nop
    ctx->pc = 0x287524u;
    // NOP
label_287528:
    // 0x287528: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x287528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_28752c:
    // 0x28752c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x28752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_287530:
    // 0x287530: 0xc0a1fc8  jal         func_287F20
label_287534:
    if (ctx->pc == 0x287534u) {
        ctx->pc = 0x287538u;
        goto label_287538;
    }
    ctx->pc = 0x287530u;
    SET_GPR_U32(ctx, 31, 0x287538u);
    ctx->pc = 0x287F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F20u, 0x287530u, 0x287538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287538u;
label_287538:
    // 0x287538: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x287538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28753c:
    // 0x28753c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28753cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_287540:
    // 0x287540: 0x0  nop
    ctx->pc = 0x287540u;
    // NOP
label_287544:
    // 0x287544: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x287544u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_287548:
    // 0x287548: 0x0  nop
    ctx->pc = 0x287548u;
    // NOP
label_28754c:
    // 0x28754c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x28754cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_287550:
    // 0x287550: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x287550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_287554:
    // 0x287554: 0xc0a1fd0  jal         func_287F40
label_287558:
    if (ctx->pc == 0x287558u) {
        ctx->pc = 0x28755Cu;
        goto label_28755c;
    }
    ctx->pc = 0x287554u;
    SET_GPR_U32(ctx, 31, 0x28755Cu);
    ctx->pc = 0x287F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F40u, 0x287554u, 0x28755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28755Cu;
label_28755c:
    // 0x28755c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x28755cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_287560:
    // 0x287560: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x287560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_287564:
    // 0x287564: 0x0  nop
    ctx->pc = 0x287564u;
    // NOP
label_287568:
    // 0x287568: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x287568u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_28756c:
    // 0x28756c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x28756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_287570:
    // 0x287570: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x287570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_287574:
    // 0x287574: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x287574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_287578:
    // 0x287578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x287578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28757c:
    // 0x28757c: 0x8e5e000c  lw          $fp, 0xC($s2)
    ctx->pc = 0x28757cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_287580:
    // 0x287580: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x287580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
label_287584:
    // 0x287584: 0x10000147  b           . + 4 + (0x147 << 2)
label_287588:
    if (ctx->pc == 0x287588u) {
        ctx->pc = 0x28758Cu;
        goto label_28758c;
    }
    ctx->pc = 0x287584u;
    {
        const bool branch_taken_0x287584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287584) {
            ctx->pc = 0x287AA4u;
            goto label_287aa4;
        }
    }
    ctx->pc = 0x28758Cu;
label_28758c:
    // 0x28758c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28758cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_287590:
    // 0x287590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x287590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_287594:
    // 0x287594: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_287598:
    if (ctx->pc == 0x287598u) {
        ctx->pc = 0x28759Cu;
        goto label_28759c;
    }
    ctx->pc = 0x287594u;
    {
        const bool branch_taken_0x287594 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x287594) {
            ctx->pc = 0x2875B0u;
            goto label_2875b0;
        }
    }
    ctx->pc = 0x28759Cu;
label_28759c:
    // 0x28759c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x28759cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2875a0:
    // 0x2875a0: 0x0  nop
    ctx->pc = 0x2875a0u;
    // NOP
label_2875a4:
    // 0x2875a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2875a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2875a8:
    // 0x2875a8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2875ac:
    if (ctx->pc == 0x2875ACu) {
        ctx->pc = 0x2875B0u;
        goto label_2875b0;
    }
    ctx->pc = 0x2875A8u;
    {
        const bool branch_taken_0x2875a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2875a8) {
            ctx->pc = 0x2875CCu;
            goto label_2875cc;
        }
    }
    ctx->pc = 0x2875B0u;
label_2875b0:
    // 0x2875b0: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x2875b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_2875b4:
    // 0x2875b4: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x2875b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_2875b8:
    // 0x2875b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2875b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2875bc:
    // 0x2875bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2875bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2875c0:
    // 0x2875c0: 0x0  nop
    ctx->pc = 0x2875c0u;
    // NOP
label_2875c4:
    // 0x2875c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2875c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2875c8:
    // 0x2875c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2875c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2875cc:
    // 0x2875cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2875ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2875d0:
    // 0x2875d0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2875d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2875d4:
    // 0x2875d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2875d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2875d8:
    // 0x2875d8: 0x0  nop
    ctx->pc = 0x2875d8u;
    // NOP
label_2875dc:
    // 0x2875dc: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x2875dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_2875e0:
    // 0x2875e0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2875e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2875e4:
    // 0x2875e4: 0xc0a1fc8  jal         func_287F20
label_2875e8:
    if (ctx->pc == 0x2875E8u) {
        ctx->pc = 0x2875ECu;
        goto label_2875ec;
    }
    ctx->pc = 0x2875E4u;
    SET_GPR_U32(ctx, 31, 0x2875ECu);
    ctx->pc = 0x287F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F20u, 0x2875E4u, 0x2875ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875ECu;
label_2875ec:
    // 0x2875ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2875ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2875f0:
    // 0x2875f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2875f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2875f4:
    // 0x2875f4: 0x0  nop
    ctx->pc = 0x2875f4u;
    // NOP
label_2875f8:
    // 0x2875f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2875f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2875fc:
    // 0x2875fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_287600:
    if (ctx->pc == 0x287600u) {
        ctx->pc = 0x287604u;
        goto label_287604;
    }
    ctx->pc = 0x2875FCu;
    {
        const bool branch_taken_0x2875fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2875fc) {
            ctx->pc = 0x287614u;
            goto label_287614;
        }
    }
    ctx->pc = 0x287604u;
label_287604:
    // 0x287604: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_287608:
    // 0x287608: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x287608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_28760c:
    // 0x28760c: 0x10000006  b           . + 4 + (0x6 << 2)
label_287610:
    if (ctx->pc == 0x287610u) {
        ctx->pc = 0x287614u;
        goto label_287614;
    }
    ctx->pc = 0x28760Cu;
    {
        const bool branch_taken_0x28760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28760c) {
            ctx->pc = 0x287628u;
            goto label_287628;
        }
    }
    ctx->pc = 0x287614u;
label_287614:
    // 0x287614: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x287614u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_287618:
    // 0x287618: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x287618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_28761c:
    // 0x28761c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x28761cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_287620:
    // 0x287620: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x287620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_287624:
    // 0x287624: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x287624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_287628:
    // 0x287628: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x287628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_28762c:
    // 0x28762c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28762cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287630:
    // 0x287630: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x287630u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_287634:
    // 0x287634: 0x2810  mfhi        $a1
    ctx->pc = 0x287634u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_287638:
    // 0x287638: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_28763c:
    if (ctx->pc == 0x28763Cu) {
        ctx->pc = 0x287640u;
        goto label_287640;
    }
    ctx->pc = 0x287638u;
    {
        const bool branch_taken_0x287638 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x287638) {
            ctx->pc = 0x287654u;
            goto label_287654;
        }
    }
    ctx->pc = 0x287640u;
label_287640:
    // 0x287640: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x287640u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287644:
    // 0x287644: 0x0  nop
    ctx->pc = 0x287644u;
    // NOP
label_287648:
    // 0x287648: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x287648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_28764c:
    // 0x28764c: 0x10000008  b           . + 4 + (0x8 << 2)
label_287650:
    if (ctx->pc == 0x287650u) {
        ctx->pc = 0x287654u;
        goto label_287654;
    }
    ctx->pc = 0x28764Cu;
    {
        const bool branch_taken_0x28764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28764c) {
            ctx->pc = 0x287670u;
            goto label_287670;
        }
    }
    ctx->pc = 0x287654u;
label_287654:
    // 0x287654: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x287654u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_287658:
    // 0x287658: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x287658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_28765c:
    // 0x28765c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28765cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_287660:
    // 0x287660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287664:
    // 0x287664: 0x0  nop
    ctx->pc = 0x287664u;
    // NOP
label_287668:
    // 0x287668: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x287668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_28766c:
    // 0x28766c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x28766cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_287670:
    // 0x287670: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x287670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_287674:
    // 0x287674: 0xc0a1fc8  jal         func_287F20
label_287678:
    if (ctx->pc == 0x287678u) {
        ctx->pc = 0x28767Cu;
        goto label_28767c;
    }
    ctx->pc = 0x287674u;
    SET_GPR_U32(ctx, 31, 0x28767Cu);
    ctx->pc = 0x287F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F20u, 0x287674u, 0x28767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28767Cu;
label_28767c:
    // 0x28767c: 0x0  nop
    ctx->pc = 0x28767cu;
    // NOP
label_287680:
    // 0x287680: 0x0  nop
    ctx->pc = 0x287680u;
    // NOP
label_287684:
    // 0x287684: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x287684u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_287688:
    // 0x287688: 0x0  nop
    ctx->pc = 0x287688u;
    // NOP
label_28768c:
    // 0x28768c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x28768cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_287690:
    // 0x287690: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x287690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
label_287694:
    // 0x287694: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_287698:
    if (ctx->pc == 0x287698u) {
        ctx->pc = 0x28769Cu;
        goto label_28769c;
    }
    ctx->pc = 0x287694u;
    {
        const bool branch_taken_0x287694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287694) {
            ctx->pc = 0x287A68u;
            goto label_287a68;
        }
    }
    ctx->pc = 0x28769Cu;
label_28769c:
    // 0x28769c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28769cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2876a0:
    // 0x2876a0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x2876a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_2876a4:
    // 0x2876a4: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x2876a4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
label_2876a8:
    // 0x2876a8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2876a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2876ac:
    // 0x2876ac: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
label_2876b0:
    if (ctx->pc == 0x2876B0u) {
        ctx->pc = 0x2876B4u;
        goto label_2876b4;
    }
    ctx->pc = 0x2876ACu;
    {
        const bool branch_taken_0x2876ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2876ac) {
            ctx->pc = 0x287860u;
            goto label_287860;
        }
    }
    ctx->pc = 0x2876B4u;
label_2876b4:
    // 0x2876b4: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2876b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2876b8:
    // 0x2876b8: 0x10800069  beqz        $a0, . + 4 + (0x69 << 2)
label_2876bc:
    if (ctx->pc == 0x2876BCu) {
        ctx->pc = 0x2876C0u;
        goto label_2876c0;
    }
    ctx->pc = 0x2876B8u;
    {
        const bool branch_taken_0x2876b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2876b8) {
            ctx->pc = 0x287860u;
            goto label_287860;
        }
    }
    ctx->pc = 0x2876C0u;
label_2876c0:
    // 0x2876c0: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x2876c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2876c4:
    // 0x2876c4: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_2876c8:
    if (ctx->pc == 0x2876C8u) {
        ctx->pc = 0x2876CCu;
        goto label_2876cc;
    }
    ctx->pc = 0x2876C4u;
    {
        const bool branch_taken_0x2876c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2876c4) {
            ctx->pc = 0x287788u;
            goto label_287788;
        }
    }
    ctx->pc = 0x2876CCu;
label_2876cc:
    // 0x2876cc: 0x12c0002e  beqz        $s6, . + 4 + (0x2E << 2)
label_2876d0:
    if (ctx->pc == 0x2876D0u) {
        ctx->pc = 0x2876D4u;
        goto label_2876d4;
    }
    ctx->pc = 0x2876CCu;
    {
        const bool branch_taken_0x2876cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2876cc) {
            ctx->pc = 0x287788u;
            goto label_287788;
        }
    }
    ctx->pc = 0x2876D4u;
label_2876d4:
    // 0x2876d4: 0x33c40001  andi        $a0, $fp, 0x1
    ctx->pc = 0x2876d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_2876d8:
    // 0x2876d8: 0x1080007d  beqz        $a0, . + 4 + (0x7D << 2)
label_2876dc:
    if (ctx->pc == 0x2876DCu) {
        ctx->pc = 0x2876E0u;
        goto label_2876e0;
    }
    ctx->pc = 0x2876D8u;
    {
        const bool branch_taken_0x2876d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2876d8) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x2876E0u;
label_2876e0:
    // 0x2876e0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2876e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2876e4:
    // 0x2876e4: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x2876e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2876e8:
    // 0x2876e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2876e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2876ec:
    // 0x2876ec: 0x37de8000  ori         $fp, $fp, 0x8000
    ctx->pc = 0x2876ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32768);
label_2876f0:
    // 0x2876f0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x2876f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_2876f4:
    // 0x2876f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2876f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2876f8:
    // 0x2876f8: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
label_2876fc:
    if (ctx->pc == 0x2876FCu) {
        ctx->pc = 0x287700u;
        goto label_287700;
    }
    ctx->pc = 0x2876F8u;
    {
        const bool branch_taken_0x2876f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2876f8) {
            ctx->pc = 0x28771Cu;
            goto label_28771c;
        }
    }
    ctx->pc = 0x287700u;
label_287700:
    // 0x287700: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x287700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_287704:
    // 0x287704: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x287704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_287708:
    // 0x287708: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x287708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28770c:
    // 0x28770c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_287710:
    // 0x287710: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x287710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_287714:
    // 0x287714: 0x1000006e  b           . + 4 + (0x6E << 2)
label_287718:
    if (ctx->pc == 0x287718u) {
        ctx->pc = 0x28771Cu;
        goto label_28771c;
    }
    ctx->pc = 0x287714u;
    {
        const bool branch_taken_0x287714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287714) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x28771Cu;
label_28771c:
    // 0x28771c: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x28771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_287720:
    // 0x287720: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x287720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287724:
    // 0x287724: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_287728:
    if (ctx->pc == 0x287728u) {
        ctx->pc = 0x28772Cu;
        goto label_28772c;
    }
    ctx->pc = 0x287724u;
    {
        const bool branch_taken_0x287724 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x287724) {
            ctx->pc = 0x28774Cu;
            goto label_28774c;
        }
    }
    ctx->pc = 0x28772Cu;
label_28772c:
    // 0x28772c: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x28772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_287730:
    // 0x287730: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_287734:
    // 0x287734: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x287734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_287738:
    // 0x287738: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x287738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28773c:
    // 0x28773c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x28773cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_287740:
    // 0x287740: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x287740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_287744:
    // 0x287744: 0x10000062  b           . + 4 + (0x62 << 2)
label_287748:
    if (ctx->pc == 0x287748u) {
        ctx->pc = 0x28774Cu;
        goto label_28774c;
    }
    ctx->pc = 0x287744u;
    {
        const bool branch_taken_0x287744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287744) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x28774Cu;
label_28774c:
    // 0x28774c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287750:
    // 0x287750: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x287750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_287754:
    // 0x287754: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x287754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_287758:
    // 0x287758: 0x93a401ef  lbu         $a0, 0x1EF($sp)
    ctx->pc = 0x287758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 495)));
label_28775c:
    // 0x28775c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x28775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_287760:
    // 0x287760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_287764:
    // 0x287764: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x287764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_287768:
    // 0x287768: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x287768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_28776c:
    // 0x28776c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x28776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_287770:
    // 0x287770: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x287770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_287774:
    // 0x287774: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x287774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_287778:
    // 0x287778: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x287778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_28777c:
    // 0x28777c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28777cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_287780:
    // 0x287780: 0x10000053  b           . + 4 + (0x53 << 2)
label_287784:
    if (ctx->pc == 0x287784u) {
        ctx->pc = 0x287788u;
        goto label_287788;
    }
    ctx->pc = 0x287780u;
    {
        const bool branch_taken_0x287780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287780) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x287788u;
label_287788:
    // 0x287788: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x287788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_28778c:
    // 0x28778c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287790:
    // 0x287790: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_287794:
    if (ctx->pc == 0x287794u) {
        ctx->pc = 0x287798u;
        goto label_287798;
    }
    ctx->pc = 0x287790u;
    {
        const bool branch_taken_0x287790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x287790) {
            ctx->pc = 0x287818u;
            goto label_287818;
        }
    }
    ctx->pc = 0x287798u;
label_287798:
    // 0x287798: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x287798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_28779c:
    // 0x28779c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x28779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2877a0:
    // 0x2877a0: 0x2c2082b  sltu        $at, $s6, $v0
    ctx->pc = 0x2877a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2877a4:
    // 0x2877a4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_2877a8:
    if (ctx->pc == 0x2877A8u) {
        ctx->pc = 0x2877ACu;
        goto label_2877ac;
    }
    ctx->pc = 0x2877A4u;
    {
        const bool branch_taken_0x2877a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2877a4) {
            ctx->pc = 0x287818u;
            goto label_287818;
        }
    }
    ctx->pc = 0x2877ACu;
label_2877ac:
    // 0x2877ac: 0x33c20004  andi        $v0, $fp, 0x4
    ctx->pc = 0x2877acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
label_2877b0:
    // 0x2877b0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_2877b4:
    if (ctx->pc == 0x2877B4u) {
        ctx->pc = 0x2877B8u;
        goto label_2877b8;
    }
    ctx->pc = 0x2877B0u;
    {
        const bool branch_taken_0x2877b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2877b0) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x2877B8u;
label_2877b8:
    // 0x2877b8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2877b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2877bc:
    // 0x2877bc: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2877bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2877c0:
    // 0x2877c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2877c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2877c4:
    // 0x2877c4: 0x37c48000  ori         $a0, $fp, 0x8000
    ctx->pc = 0x2877c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32768);
label_2877c8:
    // 0x2877c8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2877c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2877cc:
    // 0x2877cc: 0x8fa60194  lw          $a2, 0x194($sp)
    ctx->pc = 0x2877ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_2877d0:
    // 0x2877d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2877d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2877d4:
    // 0x2877d4: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
label_2877d8:
    if (ctx->pc == 0x2877D8u) {
        ctx->pc = 0x2877DCu;
        goto label_2877dc;
    }
    ctx->pc = 0x2877D4u;
    {
        const bool branch_taken_0x2877d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2877d4) {
            ctx->pc = 0x2877F8u;
            goto label_2877f8;
        }
    }
    ctx->pc = 0x2877DCu;
label_2877dc:
    // 0x2877dc: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x2877dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_2877e0:
    // 0x2877e0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2877e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2877e4:
    // 0x2877e4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x2877e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2877e8:
    // 0x2877e8: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x2877e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_2877ec:
    // 0x2877ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2877ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_2877f0:
    // 0x2877f0: 0x10000037  b           . + 4 + (0x37 << 2)
label_2877f4:
    if (ctx->pc == 0x2877F4u) {
        ctx->pc = 0x2877F8u;
        goto label_2877f8;
    }
    ctx->pc = 0x2877F0u;
    {
        const bool branch_taken_0x2877f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2877f0) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x2877F8u;
label_2877f8:
    // 0x2877f8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x2877f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_2877fc:
    // 0x2877fc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2877fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_287800:
    // 0x287800: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x287800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_287804:
    // 0x287804: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x287804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_287808:
    // 0x287808: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x287808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_28780c:
    // 0x28780c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x28780cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_287810:
    // 0x287810: 0x1000002f  b           . + 4 + (0x2F << 2)
label_287814:
    if (ctx->pc == 0x287814u) {
        ctx->pc = 0x287818u;
        goto label_287818;
    }
    ctx->pc = 0x287810u;
    {
        const bool branch_taken_0x287810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287810) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x287818u;
label_287818:
    // 0x287818: 0x33c20002  andi        $v0, $fp, 0x2
    ctx->pc = 0x287818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
label_28781c:
    // 0x28781c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_287820:
    if (ctx->pc == 0x287820u) {
        ctx->pc = 0x287824u;
        goto label_287824;
    }
    ctx->pc = 0x28781Cu;
    {
        const bool branch_taken_0x28781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28781c) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x287824u;
label_287824:
    // 0x287824: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x287824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_287828:
    // 0x287828: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x287828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28782c:
    // 0x28782c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28782cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_287830:
    // 0x287830: 0x37c28000  ori         $v0, $fp, 0x8000
    ctx->pc = 0x287830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32768);
label_287834:
    // 0x287834: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x287834u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287838:
    // 0x287838: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x287838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_28783c:
    // 0x28783c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x28783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_287840:
    // 0x287840: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x287840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_287844:
    // 0x287844: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x287844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_287848:
    // 0x287848: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x287848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28784c:
    // 0x28784c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x28784cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_287850:
    // 0x287850: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x287850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_287854:
    // 0x287854: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x287854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_287858:
    // 0x287858: 0x1000001d  b           . + 4 + (0x1D << 2)
label_28785c:
    if (ctx->pc == 0x28785Cu) {
        ctx->pc = 0x287860u;
        goto label_287860;
    }
    ctx->pc = 0x287858u;
    {
        const bool branch_taken_0x287858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287858) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x287860u;
label_287860:
    // 0x287860: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x287860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_287864:
    // 0x287864: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_287868:
    if (ctx->pc == 0x287868u) {
        ctx->pc = 0x28786Cu;
        goto label_28786c;
    }
    ctx->pc = 0x287864u;
    {
        const bool branch_taken_0x287864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287864) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x28786Cu;
label_28786c:
    // 0x28786c: 0x33c20008  andi        $v0, $fp, 0x8
    ctx->pc = 0x28786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8);
label_287870:
    // 0x287870: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_287874:
    if (ctx->pc == 0x287874u) {
        ctx->pc = 0x287878u;
        goto label_287878;
    }
    ctx->pc = 0x287870u;
    {
        const bool branch_taken_0x287870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287870) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x287878u;
label_287878:
    // 0x287878: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
label_28787c:
    if (ctx->pc == 0x28787Cu) {
        ctx->pc = 0x287880u;
        goto label_287880;
    }
    ctx->pc = 0x287878u;
    {
        const bool branch_taken_0x287878 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x287878) {
            ctx->pc = 0x2878D0u;
            goto label_2878d0;
        }
    }
    ctx->pc = 0x287880u;
label_287880:
    // 0x287880: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x287880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_287884:
    // 0x287884: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x287884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_287888:
    // 0x287888: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x287888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28788c:
    // 0x28788c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x28788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_287890:
    // 0x287890: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x287890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_287894:
    // 0x287894: 0x37c28000  ori         $v0, $fp, 0x8000
    ctx->pc = 0x287894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32768);
label_287898:
    // 0x287898: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x287898u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28789c:
    // 0x28789c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2878a0:
    // 0x2878a0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2878a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2878a4:
    // 0x2878a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2878a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2878a8:
    // 0x2878a8: 0x93a201ef  lbu         $v0, 0x1EF($sp)
    ctx->pc = 0x2878a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 495)));
label_2878ac:
    // 0x2878ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2878acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2878b0:
    // 0x2878b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2878b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2878b4:
    // 0x2878b4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2878b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2878b8:
    // 0x2878b8: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x2878b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_2878bc:
    // 0x2878bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2878bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2878c0:
    // 0x2878c0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2878c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2878c4:
    // 0x2878c4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2878c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2878c8:
    // 0x2878c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2878c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2878cc:
    // 0x2878cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2878ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2878d0:
    // 0x2878d0: 0x33c58000  andi        $a1, $fp, 0x8000
    ctx->pc = 0x2878d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)32768);
label_2878d4:
    // 0x2878d4: 0x14a00058  bnez        $a1, . + 4 + (0x58 << 2)
label_2878d8:
    if (ctx->pc == 0x2878D8u) {
        ctx->pc = 0x2878DCu;
        goto label_2878dc;
    }
    ctx->pc = 0x2878D4u;
    {
        const bool branch_taken_0x2878d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2878d4) {
            ctx->pc = 0x287A38u;
            goto label_287a38;
        }
    }
    ctx->pc = 0x2878DCu;
label_2878dc:
    // 0x2878dc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2878dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2878e0:
    // 0x2878e0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2878e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2878e4:
    // 0x2878e4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2878e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2878e8:
    // 0x2878e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2878e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2878ec:
    // 0x2878ec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x2878ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2878f0:
    // 0x2878f0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2878f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2878f4:
    // 0x2878f4: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x2878f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2878f8:
    // 0x2878f8: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x2878f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_2878fc:
    // 0x2878fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2878fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_287900:
    // 0x287900: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x287900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287904:
    // 0x287904: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x287904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_287908:
    // 0x287908: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x287908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28790c:
    // 0x28790c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x28790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287910:
    // 0x287910: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x287910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_287914:
    // 0x287914: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x287914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_287918:
    // 0x287918: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x287918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_28791c:
    // 0x28791c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x28791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_287920:
    // 0x287920: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x287920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_287924:
    // 0x287924: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x287924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_287928:
    // 0x287928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28792c:
    // 0x28792c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x28792cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_287930:
    // 0x287930: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x287930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_287934:
    // 0x287934: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x287934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_287938:
    // 0x287938: 0xc052608  jal         func_149820
label_28793c:
    if (ctx->pc == 0x28793Cu) {
        ctx->pc = 0x287940u;
        goto label_287940;
    }
    ctx->pc = 0x287938u;
    SET_GPR_U32(ctx, 31, 0x287940u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x287938u, 0x287940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287940u;
label_287940:
    // 0x287940: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x287940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_287944:
    // 0x287944: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x287944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_287948:
    // 0x287948: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x287948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_28794c:
    // 0x28794c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x28794cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_287950:
    // 0x287950: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x287950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_287954:
    // 0x287954: 0xc041d58  jal         func_107560
label_287958:
    if (ctx->pc == 0x287958u) {
        ctx->pc = 0x28795Cu;
        goto label_28795c;
    }
    ctx->pc = 0x287954u;
    SET_GPR_U32(ctx, 31, 0x28795Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x287954u, 0x28795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28795Cu;
label_28795c:
    // 0x28795c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x28795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_287960:
    // 0x287960: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x287960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_287964:
    // 0x287964: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x287964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_287968:
    // 0x287968: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x287968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_28796c:
    // 0x28796c: 0xc0a1fc8  jal         func_287F20
label_287970:
    if (ctx->pc == 0x287970u) {
        ctx->pc = 0x287974u;
        goto label_287974;
    }
    ctx->pc = 0x28796Cu;
    SET_GPR_U32(ctx, 31, 0x287974u);
    ctx->pc = 0x287F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F20u, 0x28796Cu, 0x287974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287974u;
label_287974:
    // 0x287974: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
label_287978:
    if (ctx->pc == 0x287978u) {
        ctx->pc = 0x28797Cu;
        goto label_28797c;
    }
    ctx->pc = 0x287974u;
    {
        const bool branch_taken_0x287974 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x287974) {
            ctx->pc = 0x287990u;
            goto label_287990;
        }
    }
    ctx->pc = 0x28797Cu;
label_28797c:
    // 0x28797c: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x28797cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_287980:
    // 0x287980: 0x0  nop
    ctx->pc = 0x287980u;
    // NOP
label_287984:
    // 0x287984: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x287984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_287988:
    // 0x287988: 0x10000008  b           . + 4 + (0x8 << 2)
label_28798c:
    if (ctx->pc == 0x28798Cu) {
        ctx->pc = 0x287990u;
        goto label_287990;
    }
    ctx->pc = 0x287988u;
    {
        const bool branch_taken_0x287988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287988) {
            ctx->pc = 0x2879ACu;
            goto label_2879ac;
        }
    }
    ctx->pc = 0x287990u;
label_287990:
    // 0x287990: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x287990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
label_287994:
    // 0x287994: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x287994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_287998:
    // 0x287998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x287998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28799c:
    // 0x28799c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28799cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2879a0:
    // 0x2879a0: 0x0  nop
    ctx->pc = 0x2879a0u;
    // NOP
label_2879a4:
    // 0x2879a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2879a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2879a8:
    // 0x2879a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2879a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2879ac:
    // 0x2879ac: 0x0  nop
    ctx->pc = 0x2879acu;
    // NOP
label_2879b0:
    // 0x2879b0: 0x0  nop
    ctx->pc = 0x2879b0u;
    // NOP
label_2879b4:
    // 0x2879b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2879b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2879b8:
    // 0x2879b8: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x2879b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2879bc:
    // 0x2879bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2879bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2879c0:
    // 0x2879c0: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x2879c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_2879c4:
    // 0x2879c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2879c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2879c8:
    // 0x2879c8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2879c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_2879cc:
    // 0x2879cc: 0xc0a1fd0  jal         func_287F40
label_2879d0:
    if (ctx->pc == 0x2879D0u) {
        ctx->pc = 0x2879D4u;
        goto label_2879d4;
    }
    ctx->pc = 0x2879CCu;
    SET_GPR_U32(ctx, 31, 0x2879D4u);
    ctx->pc = 0x287F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F40u, 0x2879CCu, 0x2879D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879D4u;
label_2879d4:
    // 0x2879d4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x2879d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2879d8:
    // 0x2879d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2879dc:
    if (ctx->pc == 0x2879DCu) {
        ctx->pc = 0x2879E0u;
        goto label_2879e0;
    }
    ctx->pc = 0x2879D8u;
    {
        const bool branch_taken_0x2879d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2879d8) {
            ctx->pc = 0x2879F4u;
            goto label_2879f4;
        }
    }
    ctx->pc = 0x2879E0u;
label_2879e0:
    // 0x2879e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2879e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2879e4:
    // 0x2879e4: 0x0  nop
    ctx->pc = 0x2879e4u;
    // NOP
label_2879e8:
    // 0x2879e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2879e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2879ec:
    // 0x2879ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_2879f0:
    if (ctx->pc == 0x2879F0u) {
        ctx->pc = 0x2879F4u;
        goto label_2879f4;
    }
    ctx->pc = 0x2879ECu;
    {
        const bool branch_taken_0x2879ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2879ec) {
            ctx->pc = 0x287A10u;
            goto label_287a10;
        }
    }
    ctx->pc = 0x2879F4u;
label_2879f4:
    // 0x2879f4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2879f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2879f8:
    // 0x2879f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2879f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2879fc:
    // 0x2879fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2879fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_287a00:
    // 0x287a00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x287a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_287a04:
    // 0x287a04: 0x0  nop
    ctx->pc = 0x287a04u;
    // NOP
label_287a08:
    // 0x287a08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x287a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_287a0c:
    // 0x287a0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x287a0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_287a10:
    // 0x287a10: 0x0  nop
    ctx->pc = 0x287a10u;
    // NOP
label_287a14:
    // 0x287a14: 0x0  nop
    ctx->pc = 0x287a14u;
    // NOP
label_287a18:
    // 0x287a18: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x287a18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_287a1c:
    // 0x287a1c: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x287a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287a20:
    // 0x287a20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x287a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_287a24:
    // 0x287a24: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x287a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_287a28:
    // 0x287a28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x287a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_287a2c:
    // 0x287a2c: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x287a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_287a30:
    // 0x287a30: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x287a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_287a34:
    // 0x287a34: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x287a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
label_287a38:
    // 0x287a38: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x287a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_287a3c:
    // 0x287a3c: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x287a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287a40:
    // 0x287a40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x287a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_287a44:
    // 0x287a44: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x287a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_287a48:
    // 0x287a48: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x287a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_287a4c:
    // 0x287a4c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x287a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287a50:
    // 0x287a50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x287a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_287a54:
    // 0x287a54: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x287a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_287a58:
    // 0x287a58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x287a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_287a5c:
    // 0x287a5c: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x287a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_287a60:
    // 0x287a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_287a64:
    // 0x287a64: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x287a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_287a68:
    // 0x287a68: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x287a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_287a6c:
    // 0x287a6c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x287a6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_287a70:
    // 0x287a70: 0x1420ff0a  bnez        $at, . + 4 + (-0xF6 << 2)
label_287a74:
    if (ctx->pc == 0x287A74u) {
        ctx->pc = 0x287A78u;
        goto label_287a78;
    }
    ctx->pc = 0x287A70u;
    {
        const bool branch_taken_0x287a70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x287a70) {
            ctx->pc = 0x28769Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28769c;
        }
    }
    ctx->pc = 0x287A78u;
label_287a78:
    // 0x287a78: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x287a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_287a7c:
    // 0x287a7c: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x287a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287a80:
    // 0x287a80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x287a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_287a84:
    // 0x287a84: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x287a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_287a88:
    // 0x287a88: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x287a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_287a8c:
    // 0x287a8c: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x287a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287a90:
    // 0x287a90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x287a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_287a94:
    // 0x287a94: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x287a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_287a98:
    // 0x287a98: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x287a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_287a9c:
    // 0x287a9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_287aa0:
    // 0x287aa0: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x287aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_287aa4:
    // 0x287aa4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x287aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_287aa8:
    // 0x287aa8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x287aa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_287aac:
    // 0x287aac: 0x1420feb7  bnez        $at, . + 4 + (-0x149 << 2)
label_287ab0:
    if (ctx->pc == 0x287AB0u) {
        ctx->pc = 0x287AB4u;
        goto label_287ab4;
    }
    ctx->pc = 0x287AACu;
    {
        const bool branch_taken_0x287aac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x287aac) {
            ctx->pc = 0x28758Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28758c;
        }
    }
    ctx->pc = 0x287AB4u;
label_287ab4:
    // 0x287ab4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x287ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287ab8:
    // 0x287ab8: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x287ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
label_287abc:
    // 0x287abc: 0x10000046  b           . + 4 + (0x46 << 2)
label_287ac0:
    if (ctx->pc == 0x287AC0u) {
        ctx->pc = 0x287AC4u;
        goto label_287ac4;
    }
    ctx->pc = 0x287ABCu;
    {
        const bool branch_taken_0x287abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287abc) {
            ctx->pc = 0x287BD8u;
            goto label_287bd8;
        }
    }
    ctx->pc = 0x287AC4u;
label_287ac4:
    // 0x287ac4: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x287ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
label_287ac8:
    // 0x287ac8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_287acc:
    if (ctx->pc == 0x287ACCu) {
        ctx->pc = 0x287AD0u;
        goto label_287ad0;
    }
    ctx->pc = 0x287AC8u;
    {
        const bool branch_taken_0x287ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287ac8) {
            ctx->pc = 0x287BBCu;
            goto label_287bbc;
        }
    }
    ctx->pc = 0x287AD0u;
label_287ad0:
    // 0x287ad0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x287ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_287ad4:
    // 0x287ad4: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x287ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_287ad8:
    // 0x287ad8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x287ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287adc:
    // 0x287adc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x287adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_287ae0:
    // 0x287ae0: 0x26260002  addiu       $a2, $s1, 0x2
    ctx->pc = 0x287ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_287ae4:
    // 0x287ae4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x287ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_287ae8:
    // 0x287ae8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x287ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_287aec:
    // 0x287aec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x287aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287af0:
    // 0x287af0: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x287af0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_287af4:
    // 0x287af4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x287af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_287af8:
    // 0x287af8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_287afc:
    // 0x287afc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x287afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_287b00:
    // 0x287b00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x287b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287b04:
    // 0x287b04: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x287b04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_287b08:
    // 0x287b08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287b0c:
    // 0x287b0c: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x287b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_287b10:
    // 0x287b10: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x287b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_287b14:
    // 0x287b14: 0xc0e3356  jal         func_38CD58
label_287b18:
    if (ctx->pc == 0x287B18u) {
        ctx->pc = 0x287B1Cu;
        goto label_287b1c;
    }
    ctx->pc = 0x287B14u;
    SET_GPR_U32(ctx, 31, 0x287B1Cu);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x287B14u, 0x287B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B1Cu;
label_287b1c:
    // 0x287b1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287b20:
    // 0x287b20: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x287b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_287b24:
    // 0x287b24: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x287b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_287b28:
    // 0x287b28: 0xc0e335c  jal         func_38CD70
label_287b2c:
    if (ctx->pc == 0x287B2Cu) {
        ctx->pc = 0x287B30u;
        goto label_287b30;
    }
    ctx->pc = 0x287B28u;
    SET_GPR_U32(ctx, 31, 0x287B30u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x287B28u, 0x287B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B30u;
label_287b30:
    // 0x287b30: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x287b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_287b34:
    // 0x287b34: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x287b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_287b38:
    // 0x287b38: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x287b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_287b3c:
    // 0x287b3c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x287b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_287b40:
    // 0x287b40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_287b44:
    // 0x287b44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x287b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_287b48:
    // 0x287b48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x287b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287b4c:
    // 0x287b4c: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x287b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_287b50:
    // 0x287b50: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x287b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_287b54:
    // 0x287b54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x287b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_287b58:
    // 0x287b58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x287b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_287b5c:
    // 0x287b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x287b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287b60:
    // 0x287b60: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x287b60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_287b64:
    // 0x287b64: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x287b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_287b68:
    // 0x287b68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_287b6c:
    // 0x287b6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x287b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_287b70:
    // 0x287b70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x287b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287b74:
    // 0x287b74: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x287b74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_287b78:
    // 0x287b78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287b7c:
    // 0x287b7c: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_287b80:
    // 0x287b80: 0xc0e3356  jal         func_38CD58
label_287b84:
    if (ctx->pc == 0x287B84u) {
        ctx->pc = 0x287B88u;
        goto label_287b88;
    }
    ctx->pc = 0x287B80u;
    SET_GPR_U32(ctx, 31, 0x287B88u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x287B80u, 0x287B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B88u;
label_287b88:
    // 0x287b88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287b8c:
    // 0x287b8c: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x287b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_287b90:
    // 0x287b90: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x287b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_287b94:
    // 0x287b94: 0xc0e335c  jal         func_38CD70
label_287b98:
    if (ctx->pc == 0x287B98u) {
        ctx->pc = 0x287B9Cu;
        goto label_287b9c;
    }
    ctx->pc = 0x287B94u;
    SET_GPR_U32(ctx, 31, 0x287B9Cu);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x287B94u, 0x287B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B9Cu;
label_287b9c:
    // 0x287b9c: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x287b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_287ba0:
    // 0x287ba0: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x287ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_287ba4:
    // 0x287ba4: 0xafa50178  sw          $a1, 0x178($sp)
    ctx->pc = 0x287ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 5));
label_287ba8:
    // 0x287ba8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x287ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_287bac:
    // 0x287bac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287bb0:
    // 0x287bb0: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x287bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_287bb4:
    // 0x287bb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_287bb8:
    // 0x287bb8: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x287bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_287bbc:
    // 0x287bbc: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x287bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_287bc0:
    // 0x287bc0: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
label_287bc4:
    if (ctx->pc == 0x287BC4u) {
        ctx->pc = 0x287BC8u;
        goto label_287bc8;
    }
    ctx->pc = 0x287BC0u;
    {
        const bool branch_taken_0x287bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287bc0) {
            ctx->pc = 0x287AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287ad0;
        }
    }
    ctx->pc = 0x287BC8u;
label_287bc8:
    // 0x287bc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x287bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_287bcc:
    // 0x287bcc: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x287bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_287bd0:
    // 0x287bd0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x287bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_287bd4:
    // 0x287bd4: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x287bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_287bd8:
    // 0x287bd8: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x287bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_287bdc:
    // 0x287bdc: 0x10a0ffb9  beqz        $a1, . + 4 + (-0x47 << 2)
label_287be0:
    if (ctx->pc == 0x287BE0u) {
        ctx->pc = 0x287BE4u;
        goto label_287be4;
    }
    ctx->pc = 0x287BDCu;
    {
        const bool branch_taken_0x287bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287bdc) {
            ctx->pc = 0x287AC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287ac4;
        }
    }
    ctx->pc = 0x287BE4u;
label_287be4:
    // 0x287be4: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x287be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_287be8:
    // 0x287be8: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
label_287bec:
    if (ctx->pc == 0x287BECu) {
        ctx->pc = 0x287BF0u;
        goto label_287bf0;
    }
    ctx->pc = 0x287BE8u;
    {
        const bool branch_taken_0x287be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x287be8) {
            ctx->pc = 0x287C04u;
            goto label_287c04;
        }
    }
    ctx->pc = 0x287BF0u;
label_287bf0:
    // 0x287bf0: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x287bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_287bf4:
    // 0x287bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x287bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287bf8:
    // 0x287bf8: 0xc0e39c0  jal         func_38E700
label_287bfc:
    if (ctx->pc == 0x287BFCu) {
        ctx->pc = 0x287C00u;
        goto label_287c00;
    }
    ctx->pc = 0x287BF8u;
    SET_GPR_U32(ctx, 31, 0x287C00u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x287BF8u, 0x287C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C00u;
label_287c00:
    // 0x287c00: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x287c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
label_287c04:
    // 0x287c04: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x287c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_287c08:
    // 0x287c08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x287c08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287c0c:
    // 0x287c0c: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x287c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_287c10:
    // 0x287c10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x287c10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287c14:
    // 0x287c14: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x287c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_287c18:
    // 0x287c18: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x287c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_287c1c:
    // 0x287c1c: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x287c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_287c20:
    // 0x287c20: 0x1440fd90  bnez        $v0, . + 4 + (-0x270 << 2)
label_287c24:
    if (ctx->pc == 0x287C24u) {
        ctx->pc = 0x287C28u;
        goto label_287c28;
    }
    ctx->pc = 0x287C20u;
    {
        const bool branch_taken_0x287c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287c20) {
            ctx->pc = 0x287264u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287264;
        }
    }
    ctx->pc = 0x287C28u;
label_287c28:
    // 0x287c28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_287c2c:
    // 0x287c2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x287c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287c30:
    // 0x287c30: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x287c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_287c34:
    // 0x287c34: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x287c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_287c38:
    // 0x287c38: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x287c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_287c3c:
    // 0x287c3c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x287c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_287c40:
    // 0x287c40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x287c40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287c44:
    // 0x287c44: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x287c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_287c48:
    // 0x287c48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_287c4c:
    // 0x287c4c: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x287c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_287c50:
    // 0x287c50: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x287c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_287c54:
    // 0x287c54: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x287c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_287c58:
    // 0x287c58: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x287c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_287c5c:
    // 0x287c5c: 0x1440fd7e  bnez        $v0, . + 4 + (-0x282 << 2)
label_287c60:
    if (ctx->pc == 0x287C60u) {
        ctx->pc = 0x287C64u;
        goto label_287c64;
    }
    ctx->pc = 0x287C5Cu;
    {
        const bool branch_taken_0x287c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287c5c) {
            ctx->pc = 0x287258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287258;
        }
    }
    ctx->pc = 0x287C64u;
label_287c64:
    // 0x287c64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_287c68:
    if (ctx->pc == 0x287C68u) {
        ctx->pc = 0x287C6Cu;
        goto label_287c6c;
    }
    ctx->pc = 0x287C64u;
    {
        const bool branch_taken_0x287c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x287c64) {
            ctx->pc = 0x287C80u;
            goto label_287c80;
        }
    }
    ctx->pc = 0x287C6Cu;
label_287c6c:
    // 0x287c6c: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x287c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_287c70:
    // 0x287c70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287c74:
    // 0x287c74: 0xc0a1ab0  jal         func_286AC0
label_287c78:
    if (ctx->pc == 0x287C78u) {
        ctx->pc = 0x287C7Cu;
        goto label_287c7c;
    }
    ctx->pc = 0x287C74u;
    SET_GPR_U32(ctx, 31, 0x287C7Cu);
    ctx->pc = 0x286AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AC0u, 0x287C74u, 0x287C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C7Cu;
label_287c7c:
    // 0x287c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x287c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287c80:
    // 0x287c80: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x287c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_287c84:
    // 0x287c84: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x287c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_287c88:
    // 0x287c88: 0xc0e2ab0  jal         func_38AAC0
label_287c8c:
    if (ctx->pc == 0x287C8Cu) {
        ctx->pc = 0x287C90u;
        goto label_287c90;
    }
    ctx->pc = 0x287C88u;
    SET_GPR_U32(ctx, 31, 0x287C90u);
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x287C88u, 0x287C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C90u;
label_287c90:
    // 0x287c90: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x287c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_287c94:
    // 0x287c94: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x287c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_287c98:
    // 0x287c98: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x287c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_287c9c:
    // 0x287c9c: 0xc046270  jal         func_1189C0
label_287ca0:
    if (ctx->pc == 0x287CA0u) {
        ctx->pc = 0x287CA4u;
        goto label_287ca4;
    }
    ctx->pc = 0x287C9Cu;
    SET_GPR_U32(ctx, 31, 0x287CA4u);
    ctx->pc = 0x1189C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C0u, 0x287C9Cu, 0x287CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CA4u;
label_287ca4:
    // 0x287ca4: 0x27a20188  addiu       $v0, $sp, 0x188
    ctx->pc = 0x287ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_287ca8:
    // 0x287ca8: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x287ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_287cac:
    // 0x287cac: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x287cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_287cb0:
    // 0x287cb0: 0xafb40134  sw          $s4, 0x134($sp)
    ctx->pc = 0x287cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 20));
label_287cb4:
    // 0x287cb4: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x287cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_287cb8:
    // 0x287cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287cbc:
    // 0x287cbc: 0xc0e751e  jal         func_39D478
label_287cc0:
    if (ctx->pc == 0x287CC0u) {
        ctx->pc = 0x287CC4u;
        goto label_287cc4;
    }
    ctx->pc = 0x287CBCu;
    SET_GPR_U32(ctx, 31, 0x287CC4u);
    ctx->pc = 0x39D478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D478u, 0x287CBCu, 0x287CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CC4u;
label_287cc4:
    // 0x287cc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x287cc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287cc8:
    // 0x287cc8: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x287cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_287ccc:
    // 0x287ccc: 0xc0e3414  jal         func_38D050
label_287cd0:
    if (ctx->pc == 0x287CD0u) {
        ctx->pc = 0x287CD4u;
        goto label_287cd4;
    }
    ctx->pc = 0x287CCCu;
    SET_GPR_U32(ctx, 31, 0x287CD4u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x287CCCu, 0x287CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CD4u;
label_287cd4:
    // 0x287cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x287cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287cd8:
    // 0x287cd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287cdc:
    // 0x287cdc: 0xc0e2d08  jal         func_38B420
label_287ce0:
    if (ctx->pc == 0x287CE0u) {
        ctx->pc = 0x287CE4u;
        goto label_287ce4;
    }
    ctx->pc = 0x287CDCu;
    SET_GPR_U32(ctx, 31, 0x287CE4u);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x287CDCu, 0x287CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CE4u;
label_287ce4:
    // 0x287ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x287ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287ce8:
    // 0x287ce8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x287ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_287cec:
    // 0x287cec: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x287cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_287cf0:
    // 0x287cf0: 0xc1067b0  jal         func_419EC0
label_287cf4:
    if (ctx->pc == 0x287CF4u) {
        ctx->pc = 0x287CF8u;
        goto label_287cf8;
    }
    ctx->pc = 0x287CF0u;
    SET_GPR_U32(ctx, 31, 0x287CF8u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x287CF0u, 0x287CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CF8u;
label_287cf8:
    // 0x287cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x287cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287cfc:
    // 0x287cfc: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x287cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_287d00:
    // 0x287d00: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x287d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_287d04:
    // 0x287d04: 0xc106638  jal         func_4198E0
label_287d08:
    if (ctx->pc == 0x287D08u) {
        ctx->pc = 0x287D0Cu;
        goto label_287d0c;
    }
    ctx->pc = 0x287D04u;
    SET_GPR_U32(ctx, 31, 0x287D0Cu);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x287D04u, 0x287D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D0Cu;
label_287d0c:
    // 0x287d0c: 0x27be00e0  addiu       $fp, $sp, 0xE0
    ctx->pc = 0x287d0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_287d10:
    // 0x287d10: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x287d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_287d14:
    // 0x287d14: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
label_287d18:
    if (ctx->pc == 0x287D18u) {
        ctx->pc = 0x287D1Cu;
        goto label_287d1c;
    }
    ctx->pc = 0x287D14u;
    {
        const bool branch_taken_0x287d14 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x287d14) {
            ctx->pc = 0x287D3Cu;
            goto label_287d3c;
        }
    }
    ctx->pc = 0x287D1Cu;
label_287d1c:
    // 0x287d1c: 0x3c01821  addu        $v1, $fp, $zero
    ctx->pc = 0x287d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_287d20:
    // 0x287d20: 0xa3c00000  sb          $zero, 0x0($fp)
    ctx->pc = 0x287d20u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
label_287d24:
    // 0x287d24: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x287d24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_287d28:
    // 0x287d28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x287d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_287d2c:
    // 0x287d2c: 0x0  nop
    ctx->pc = 0x287d2cu;
    // NOP
label_287d30:
    // 0x287d30: 0x0  nop
    ctx->pc = 0x287d30u;
    // NOP
label_287d34:
    // 0x287d34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_287d38:
    if (ctx->pc == 0x287D38u) {
        ctx->pc = 0x287D3Cu;
        goto label_287d3c;
    }
    ctx->pc = 0x287D34u;
    {
        const bool branch_taken_0x287d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287d34) {
            ctx->pc = 0x287D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287d20;
        }
    }
    ctx->pc = 0x287D3Cu;
label_287d3c:
    // 0x287d3c: 0x8fa20200  lw          $v0, 0x200($sp)
    ctx->pc = 0x287d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_287d40:
    // 0x287d40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x287d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_287d44:
    // 0x287d44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x287d44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287d48:
    // 0x287d48: 0x0  nop
    ctx->pc = 0x287d48u;
    // NOP
label_287d4c:
    // 0x287d4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x287d4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_287d50:
    // 0x287d50: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x287d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_287d54:
    // 0x287d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287d58:
    // 0x287d58: 0x0  nop
    ctx->pc = 0x287d58u;
    // NOP
label_287d5c:
    // 0x287d5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x287d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_287d60:
    // 0x287d60: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x287d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_287d64:
    // 0x287d64: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x287d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_287d68:
    // 0x287d68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x287d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_287d6c:
    // 0x287d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287d70:
    // 0x287d70: 0x0  nop
    ctx->pc = 0x287d70u;
    // NOP
label_287d74:
    // 0x287d74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x287d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_287d78:
    // 0x287d78: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x287d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_287d7c:
    // 0x287d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_287d80:
    // 0x287d80: 0x0  nop
    ctx->pc = 0x287d80u;
    // NOP
label_287d84:
    // 0x287d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x287d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_287d88:
    // 0x287d88: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x287d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_287d8c:
    // 0x287d8c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x287d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_287d90:
    // 0x287d90: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x287d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_287d94:
    // 0x287d94: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x287d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_287d98:
    // 0x287d98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x287d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287d9c:
    // 0x287d9c: 0xc106598  jal         func_419660
label_287da0:
    if (ctx->pc == 0x287DA0u) {
        ctx->pc = 0x287DA4u;
        goto label_287da4;
    }
    ctx->pc = 0x287D9Cu;
    SET_GPR_U32(ctx, 31, 0x287DA4u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x287D9Cu, 0x287DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DA4u;
label_287da4:
    // 0x287da4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x287da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_287da8:
    // 0x287da8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x287da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_287dac:
    // 0x287dac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x287dacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_287db0:
    // 0x287db0: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x287db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_287db4:
    // 0x287db4: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x287db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_287db8:
    // 0x287db8: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x287db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_287dbc:
    // 0x287dbc: 0xc0e2094  jal         func_388250
label_287dc0:
    if (ctx->pc == 0x287DC0u) {
        ctx->pc = 0x287DC4u;
        goto label_287dc4;
    }
    ctx->pc = 0x287DBCu;
    SET_GPR_U32(ctx, 31, 0x287DC4u);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x287DBCu, 0x287DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DC4u;
label_287dc4:
    // 0x287dc4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x287dc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287dc8:
    // 0x287dc8: 0xafbe012c  sw          $fp, 0x12C($sp)
    ctx->pc = 0x287dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 30));
label_287dcc:
    // 0x287dcc: 0xc1067b0  jal         func_419EC0
label_287dd0:
    if (ctx->pc == 0x287DD0u) {
        ctx->pc = 0x287DD4u;
        goto label_287dd4;
    }
    ctx->pc = 0x287DCCu;
    SET_GPR_U32(ctx, 31, 0x287DD4u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x287DCCu, 0x287DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DD4u;
label_287dd4:
    // 0x287dd4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x287dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_287dd8:
    // 0x287dd8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x287dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_287ddc:
    // 0x287ddc: 0xc106638  jal         func_4198E0
label_287de0:
    if (ctx->pc == 0x287DE0u) {
        ctx->pc = 0x287DE4u;
        goto label_287de4;
    }
    ctx->pc = 0x287DDCu;
    SET_GPR_U32(ctx, 31, 0x287DE4u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x287DDCu, 0x287DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DE4u;
label_287de4:
    // 0x287de4: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x287de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_287de8:
    // 0x287de8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x287de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_287dec:
    // 0x287dec: 0xc0e2686  jal         func_389A18
label_287df0:
    if (ctx->pc == 0x287DF0u) {
        ctx->pc = 0x287DF4u;
        goto label_287df4;
    }
    ctx->pc = 0x287DECu;
    SET_GPR_U32(ctx, 31, 0x287DF4u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x287DECu, 0x287DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DF4u;
label_287df4:
    // 0x287df4: 0x8fbe012c  lw          $fp, 0x12C($sp)
    ctx->pc = 0x287df4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_287df8:
    // 0x287df8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x287df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_287dfc:
    // 0x287dfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x287dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287e00:
    // 0x287e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x287e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287e04:
    // 0x287e04: 0xc0e2836  jal         func_38A0D8
label_287e08:
    if (ctx->pc == 0x287E08u) {
        ctx->pc = 0x287E0Cu;
        goto label_287e0c;
    }
    ctx->pc = 0x287E04u;
    SET_GPR_U32(ctx, 31, 0x287E0Cu);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x287E04u, 0x287E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E0Cu;
label_287e0c:
    // 0x287e0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287e10:
    // 0x287e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287e14:
    // 0x287e14: 0xc0c5380  jal         func_314E00
label_287e18:
    if (ctx->pc == 0x287E18u) {
        ctx->pc = 0x287E1Cu;
        goto label_287e1c;
    }
    ctx->pc = 0x287E14u;
    SET_GPR_U32(ctx, 31, 0x287E1Cu);
    ctx->pc = 0x314E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314E00u, 0x287E14u, 0x287E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E1Cu;
label_287e1c:
    // 0x287e1c: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x287e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_287e20:
    // 0x287e20: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x287e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_287e24:
    // 0x287e24: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x287e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_287e28:
    // 0x287e28: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x287e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_287e2c:
    // 0x287e2c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x287e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_287e30:
    // 0x287e30: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x287e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_287e34:
    // 0x287e34: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x287e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_287e38:
    // 0x287e38: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x287e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_287e3c:
    // 0x287e3c: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x287e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
label_287e40:
    // 0x287e40: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x287e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_287e44:
    // 0x287e44: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x287e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_287e48:
    // 0x287e48: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x287e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_287e4c:
    // 0x287e4c: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x287e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_287e50:
    // 0x287e50: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x287e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_287e54:
    // 0x287e54: 0xc0e2700  jal         func_389C00
label_287e58:
    if (ctx->pc == 0x287E58u) {
        ctx->pc = 0x287E5Cu;
        goto label_287e5c;
    }
    ctx->pc = 0x287E54u;
    SET_GPR_U32(ctx, 31, 0x287E5Cu);
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x287E54u, 0x287E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E5Cu;
label_287e5c:
    // 0x287e5c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x287e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_287e60:
    // 0x287e60: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x287e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_287e64:
    // 0x287e64: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x287e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_287e68:
    // 0x287e68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287e6c:
    // 0x287e6c: 0xc10671c  jal         func_419C70
label_287e70:
    if (ctx->pc == 0x287E70u) {
        ctx->pc = 0x287E74u;
        goto label_287e74;
    }
    ctx->pc = 0x287E6Cu;
    SET_GPR_U32(ctx, 31, 0x287E74u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x287E6Cu, 0x287E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E74u;
label_287e74:
    // 0x287e74: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x287e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_287e78:
    // 0x287e78: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x287e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_287e7c:
    // 0x287e7c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x287e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_287e80:
    // 0x287e80: 0xc085538  jal         func_2154E0
label_287e84:
    if (ctx->pc == 0x287E84u) {
        ctx->pc = 0x287E88u;
        goto label_287e88;
    }
    ctx->pc = 0x287E80u;
    SET_GPR_U32(ctx, 31, 0x287E88u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x287E80u, 0x287E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E88u;
label_287e88:
    // 0x287e88: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x287e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_287e8c:
    // 0x287e8c: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x287e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_287e90:
    // 0x287e90: 0x10030009  beq         $zero, $v1, . + 4 + (0x9 << 2)
label_287e94:
    if (ctx->pc == 0x287E94u) {
        ctx->pc = 0x287E98u;
        goto label_287e98;
    }
    ctx->pc = 0x287E90u;
    {
        const bool branch_taken_0x287e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x287e90) {
            ctx->pc = 0x287EB8u;
            goto label_287eb8;
        }
    }
    ctx->pc = 0x287E98u;
label_287e98:
    // 0x287e98: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x287e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_287e9c:
    // 0x287e9c: 0xc091018  jal         func_244060
label_287ea0:
    if (ctx->pc == 0x287EA0u) {
        ctx->pc = 0x287EA4u;
        goto label_287ea4;
    }
    ctx->pc = 0x287E9Cu;
    SET_GPR_U32(ctx, 31, 0x287EA4u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x287E9Cu, 0x287EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EA4u;
label_287ea4:
    // 0x287ea4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x287ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_287ea8:
    // 0x287ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x287ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287eac:
    // 0x287eac: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x287eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_287eb0:
    // 0x287eb0: 0xc10671c  jal         func_419C70
label_287eb4:
    if (ctx->pc == 0x287EB4u) {
        ctx->pc = 0x287EB8u;
        goto label_287eb8;
    }
    ctx->pc = 0x287EB0u;
    SET_GPR_U32(ctx, 31, 0x287EB8u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x287EB0u, 0x287EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EB8u;
label_287eb8:
    // 0x287eb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287ebc:
    // 0x287ebc: 0xc0e3414  jal         func_38D050
label_287ec0:
    if (ctx->pc == 0x287EC0u) {
        ctx->pc = 0x287EC4u;
        goto label_287ec4;
    }
    ctx->pc = 0x287EBCu;
    SET_GPR_U32(ctx, 31, 0x287EC4u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x287EBCu, 0x287EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EC4u;
label_287ec4:
    // 0x287ec4: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x287ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_287ec8:
    // 0x287ec8: 0xc0e39c0  jal         func_38E700
label_287ecc:
    if (ctx->pc == 0x287ECCu) {
        ctx->pc = 0x287ED0u;
        goto label_287ed0;
    }
    ctx->pc = 0x287EC8u;
    SET_GPR_U32(ctx, 31, 0x287ED0u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x287EC8u, 0x287ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287ED0u;
label_287ed0:
    // 0x287ed0: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x287ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_287ed4:
    // 0x287ed4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x287ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287ed8:
    // 0x287ed8: 0x10000002  b           . + 4 + (0x2 << 2)
label_287edc:
    if (ctx->pc == 0x287EDCu) {
        ctx->pc = 0x287EE0u;
        goto label_287ee0;
    }
    ctx->pc = 0x287ED8u;
    {
        const bool branch_taken_0x287ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287ed8) {
            ctx->pc = 0x287EE4u;
            goto label_287ee4;
        }
    }
    ctx->pc = 0x287EE0u;
label_287ee0:
    // 0x287ee0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287ee4:
    // 0x287ee4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x287ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_287ee8:
    // 0x287ee8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x287ee8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_287eec:
    // 0x287eec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x287eecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_287ef0:
    // 0x287ef0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x287ef0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_287ef4:
    // 0x287ef4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x287ef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_287ef8:
    // 0x287ef8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x287ef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_287efc:
    // 0x287efc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x287efcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_287f00:
    // 0x287f00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x287f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_287f04:
    // 0x287f04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x287f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_287f08:
    // 0x287f08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x287f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_287f0c:
    // 0x287f0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x287f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_287f10:
    // 0x287f10: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x287f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_287f14:
    // 0x287f14: 0x3e00008  jr          $ra
label_287f18:
    if (ctx->pc == 0x287F18u) {
        ctx->pc = 0x287F1Cu;
        goto label_287f1c;
    }
    ctx->pc = 0x287F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287F1Cu;
label_287f1c:
    // 0x287f1c: 0x0  nop
    ctx->pc = 0x287f1cu;
    // NOP
    ctx->pc = 0x287f20u;
}
