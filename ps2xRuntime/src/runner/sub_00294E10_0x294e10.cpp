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

// Function: sub_00294E10
// Address: 0x294e10 - 0x295c40
void sub_00294E10_0x294e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294E10_0x294e10");
#endif

    switch (ctx->pc) {
        case 0x294e10u: goto label_294e10;
        case 0x294e14u: goto label_294e14;
        case 0x294e18u: goto label_294e18;
        case 0x294e1cu: goto label_294e1c;
        case 0x294e20u: goto label_294e20;
        case 0x294e24u: goto label_294e24;
        case 0x294e28u: goto label_294e28;
        case 0x294e2cu: goto label_294e2c;
        case 0x294e30u: goto label_294e30;
        case 0x294e34u: goto label_294e34;
        case 0x294e38u: goto label_294e38;
        case 0x294e3cu: goto label_294e3c;
        case 0x294e40u: goto label_294e40;
        case 0x294e44u: goto label_294e44;
        case 0x294e48u: goto label_294e48;
        case 0x294e4cu: goto label_294e4c;
        case 0x294e50u: goto label_294e50;
        case 0x294e54u: goto label_294e54;
        case 0x294e58u: goto label_294e58;
        case 0x294e5cu: goto label_294e5c;
        case 0x294e60u: goto label_294e60;
        case 0x294e64u: goto label_294e64;
        case 0x294e68u: goto label_294e68;
        case 0x294e6cu: goto label_294e6c;
        case 0x294e70u: goto label_294e70;
        case 0x294e74u: goto label_294e74;
        case 0x294e78u: goto label_294e78;
        case 0x294e7cu: goto label_294e7c;
        case 0x294e80u: goto label_294e80;
        case 0x294e84u: goto label_294e84;
        case 0x294e88u: goto label_294e88;
        case 0x294e8cu: goto label_294e8c;
        case 0x294e90u: goto label_294e90;
        case 0x294e94u: goto label_294e94;
        case 0x294e98u: goto label_294e98;
        case 0x294e9cu: goto label_294e9c;
        case 0x294ea0u: goto label_294ea0;
        case 0x294ea4u: goto label_294ea4;
        case 0x294ea8u: goto label_294ea8;
        case 0x294eacu: goto label_294eac;
        case 0x294eb0u: goto label_294eb0;
        case 0x294eb4u: goto label_294eb4;
        case 0x294eb8u: goto label_294eb8;
        case 0x294ebcu: goto label_294ebc;
        case 0x294ec0u: goto label_294ec0;
        case 0x294ec4u: goto label_294ec4;
        case 0x294ec8u: goto label_294ec8;
        case 0x294eccu: goto label_294ecc;
        case 0x294ed0u: goto label_294ed0;
        case 0x294ed4u: goto label_294ed4;
        case 0x294ed8u: goto label_294ed8;
        case 0x294edcu: goto label_294edc;
        case 0x294ee0u: goto label_294ee0;
        case 0x294ee4u: goto label_294ee4;
        case 0x294ee8u: goto label_294ee8;
        case 0x294eecu: goto label_294eec;
        case 0x294ef0u: goto label_294ef0;
        case 0x294ef4u: goto label_294ef4;
        case 0x294ef8u: goto label_294ef8;
        case 0x294efcu: goto label_294efc;
        case 0x294f00u: goto label_294f00;
        case 0x294f04u: goto label_294f04;
        case 0x294f08u: goto label_294f08;
        case 0x294f0cu: goto label_294f0c;
        case 0x294f10u: goto label_294f10;
        case 0x294f14u: goto label_294f14;
        case 0x294f18u: goto label_294f18;
        case 0x294f1cu: goto label_294f1c;
        case 0x294f20u: goto label_294f20;
        case 0x294f24u: goto label_294f24;
        case 0x294f28u: goto label_294f28;
        case 0x294f2cu: goto label_294f2c;
        case 0x294f30u: goto label_294f30;
        case 0x294f34u: goto label_294f34;
        case 0x294f38u: goto label_294f38;
        case 0x294f3cu: goto label_294f3c;
        case 0x294f40u: goto label_294f40;
        case 0x294f44u: goto label_294f44;
        case 0x294f48u: goto label_294f48;
        case 0x294f4cu: goto label_294f4c;
        case 0x294f50u: goto label_294f50;
        case 0x294f54u: goto label_294f54;
        case 0x294f58u: goto label_294f58;
        case 0x294f5cu: goto label_294f5c;
        case 0x294f60u: goto label_294f60;
        case 0x294f64u: goto label_294f64;
        case 0x294f68u: goto label_294f68;
        case 0x294f6cu: goto label_294f6c;
        case 0x294f70u: goto label_294f70;
        case 0x294f74u: goto label_294f74;
        case 0x294f78u: goto label_294f78;
        case 0x294f7cu: goto label_294f7c;
        case 0x294f80u: goto label_294f80;
        case 0x294f84u: goto label_294f84;
        case 0x294f88u: goto label_294f88;
        case 0x294f8cu: goto label_294f8c;
        case 0x294f90u: goto label_294f90;
        case 0x294f94u: goto label_294f94;
        case 0x294f98u: goto label_294f98;
        case 0x294f9cu: goto label_294f9c;
        case 0x294fa0u: goto label_294fa0;
        case 0x294fa4u: goto label_294fa4;
        case 0x294fa8u: goto label_294fa8;
        case 0x294facu: goto label_294fac;
        case 0x294fb0u: goto label_294fb0;
        case 0x294fb4u: goto label_294fb4;
        case 0x294fb8u: goto label_294fb8;
        case 0x294fbcu: goto label_294fbc;
        case 0x294fc0u: goto label_294fc0;
        case 0x294fc4u: goto label_294fc4;
        case 0x294fc8u: goto label_294fc8;
        case 0x294fccu: goto label_294fcc;
        case 0x294fd0u: goto label_294fd0;
        case 0x294fd4u: goto label_294fd4;
        case 0x294fd8u: goto label_294fd8;
        case 0x294fdcu: goto label_294fdc;
        case 0x294fe0u: goto label_294fe0;
        case 0x294fe4u: goto label_294fe4;
        case 0x294fe8u: goto label_294fe8;
        case 0x294fecu: goto label_294fec;
        case 0x294ff0u: goto label_294ff0;
        case 0x294ff4u: goto label_294ff4;
        case 0x294ff8u: goto label_294ff8;
        case 0x294ffcu: goto label_294ffc;
        case 0x295000u: goto label_295000;
        case 0x295004u: goto label_295004;
        case 0x295008u: goto label_295008;
        case 0x29500cu: goto label_29500c;
        case 0x295010u: goto label_295010;
        case 0x295014u: goto label_295014;
        case 0x295018u: goto label_295018;
        case 0x29501cu: goto label_29501c;
        case 0x295020u: goto label_295020;
        case 0x295024u: goto label_295024;
        case 0x295028u: goto label_295028;
        case 0x29502cu: goto label_29502c;
        case 0x295030u: goto label_295030;
        case 0x295034u: goto label_295034;
        case 0x295038u: goto label_295038;
        case 0x29503cu: goto label_29503c;
        case 0x295040u: goto label_295040;
        case 0x295044u: goto label_295044;
        case 0x295048u: goto label_295048;
        case 0x29504cu: goto label_29504c;
        case 0x295050u: goto label_295050;
        case 0x295054u: goto label_295054;
        case 0x295058u: goto label_295058;
        case 0x29505cu: goto label_29505c;
        case 0x295060u: goto label_295060;
        case 0x295064u: goto label_295064;
        case 0x295068u: goto label_295068;
        case 0x29506cu: goto label_29506c;
        case 0x295070u: goto label_295070;
        case 0x295074u: goto label_295074;
        case 0x295078u: goto label_295078;
        case 0x29507cu: goto label_29507c;
        case 0x295080u: goto label_295080;
        case 0x295084u: goto label_295084;
        case 0x295088u: goto label_295088;
        case 0x29508cu: goto label_29508c;
        case 0x295090u: goto label_295090;
        case 0x295094u: goto label_295094;
        case 0x295098u: goto label_295098;
        case 0x29509cu: goto label_29509c;
        case 0x2950a0u: goto label_2950a0;
        case 0x2950a4u: goto label_2950a4;
        case 0x2950a8u: goto label_2950a8;
        case 0x2950acu: goto label_2950ac;
        case 0x2950b0u: goto label_2950b0;
        case 0x2950b4u: goto label_2950b4;
        case 0x2950b8u: goto label_2950b8;
        case 0x2950bcu: goto label_2950bc;
        case 0x2950c0u: goto label_2950c0;
        case 0x2950c4u: goto label_2950c4;
        case 0x2950c8u: goto label_2950c8;
        case 0x2950ccu: goto label_2950cc;
        case 0x2950d0u: goto label_2950d0;
        case 0x2950d4u: goto label_2950d4;
        case 0x2950d8u: goto label_2950d8;
        case 0x2950dcu: goto label_2950dc;
        case 0x2950e0u: goto label_2950e0;
        case 0x2950e4u: goto label_2950e4;
        case 0x2950e8u: goto label_2950e8;
        case 0x2950ecu: goto label_2950ec;
        case 0x2950f0u: goto label_2950f0;
        case 0x2950f4u: goto label_2950f4;
        case 0x2950f8u: goto label_2950f8;
        case 0x2950fcu: goto label_2950fc;
        case 0x295100u: goto label_295100;
        case 0x295104u: goto label_295104;
        case 0x295108u: goto label_295108;
        case 0x29510cu: goto label_29510c;
        case 0x295110u: goto label_295110;
        case 0x295114u: goto label_295114;
        case 0x295118u: goto label_295118;
        case 0x29511cu: goto label_29511c;
        case 0x295120u: goto label_295120;
        case 0x295124u: goto label_295124;
        case 0x295128u: goto label_295128;
        case 0x29512cu: goto label_29512c;
        case 0x295130u: goto label_295130;
        case 0x295134u: goto label_295134;
        case 0x295138u: goto label_295138;
        case 0x29513cu: goto label_29513c;
        case 0x295140u: goto label_295140;
        case 0x295144u: goto label_295144;
        case 0x295148u: goto label_295148;
        case 0x29514cu: goto label_29514c;
        case 0x295150u: goto label_295150;
        case 0x295154u: goto label_295154;
        case 0x295158u: goto label_295158;
        case 0x29515cu: goto label_29515c;
        case 0x295160u: goto label_295160;
        case 0x295164u: goto label_295164;
        case 0x295168u: goto label_295168;
        case 0x29516cu: goto label_29516c;
        case 0x295170u: goto label_295170;
        case 0x295174u: goto label_295174;
        case 0x295178u: goto label_295178;
        case 0x29517cu: goto label_29517c;
        case 0x295180u: goto label_295180;
        case 0x295184u: goto label_295184;
        case 0x295188u: goto label_295188;
        case 0x29518cu: goto label_29518c;
        case 0x295190u: goto label_295190;
        case 0x295194u: goto label_295194;
        case 0x295198u: goto label_295198;
        case 0x29519cu: goto label_29519c;
        case 0x2951a0u: goto label_2951a0;
        case 0x2951a4u: goto label_2951a4;
        case 0x2951a8u: goto label_2951a8;
        case 0x2951acu: goto label_2951ac;
        case 0x2951b0u: goto label_2951b0;
        case 0x2951b4u: goto label_2951b4;
        case 0x2951b8u: goto label_2951b8;
        case 0x2951bcu: goto label_2951bc;
        case 0x2951c0u: goto label_2951c0;
        case 0x2951c4u: goto label_2951c4;
        case 0x2951c8u: goto label_2951c8;
        case 0x2951ccu: goto label_2951cc;
        case 0x2951d0u: goto label_2951d0;
        case 0x2951d4u: goto label_2951d4;
        case 0x2951d8u: goto label_2951d8;
        case 0x2951dcu: goto label_2951dc;
        case 0x2951e0u: goto label_2951e0;
        case 0x2951e4u: goto label_2951e4;
        case 0x2951e8u: goto label_2951e8;
        case 0x2951ecu: goto label_2951ec;
        case 0x2951f0u: goto label_2951f0;
        case 0x2951f4u: goto label_2951f4;
        case 0x2951f8u: goto label_2951f8;
        case 0x2951fcu: goto label_2951fc;
        case 0x295200u: goto label_295200;
        case 0x295204u: goto label_295204;
        case 0x295208u: goto label_295208;
        case 0x29520cu: goto label_29520c;
        case 0x295210u: goto label_295210;
        case 0x295214u: goto label_295214;
        case 0x295218u: goto label_295218;
        case 0x29521cu: goto label_29521c;
        case 0x295220u: goto label_295220;
        case 0x295224u: goto label_295224;
        case 0x295228u: goto label_295228;
        case 0x29522cu: goto label_29522c;
        case 0x295230u: goto label_295230;
        case 0x295234u: goto label_295234;
        case 0x295238u: goto label_295238;
        case 0x29523cu: goto label_29523c;
        case 0x295240u: goto label_295240;
        case 0x295244u: goto label_295244;
        case 0x295248u: goto label_295248;
        case 0x29524cu: goto label_29524c;
        case 0x295250u: goto label_295250;
        case 0x295254u: goto label_295254;
        case 0x295258u: goto label_295258;
        case 0x29525cu: goto label_29525c;
        case 0x295260u: goto label_295260;
        case 0x295264u: goto label_295264;
        case 0x295268u: goto label_295268;
        case 0x29526cu: goto label_29526c;
        case 0x295270u: goto label_295270;
        case 0x295274u: goto label_295274;
        case 0x295278u: goto label_295278;
        case 0x29527cu: goto label_29527c;
        case 0x295280u: goto label_295280;
        case 0x295284u: goto label_295284;
        case 0x295288u: goto label_295288;
        case 0x29528cu: goto label_29528c;
        case 0x295290u: goto label_295290;
        case 0x295294u: goto label_295294;
        case 0x295298u: goto label_295298;
        case 0x29529cu: goto label_29529c;
        case 0x2952a0u: goto label_2952a0;
        case 0x2952a4u: goto label_2952a4;
        case 0x2952a8u: goto label_2952a8;
        case 0x2952acu: goto label_2952ac;
        case 0x2952b0u: goto label_2952b0;
        case 0x2952b4u: goto label_2952b4;
        case 0x2952b8u: goto label_2952b8;
        case 0x2952bcu: goto label_2952bc;
        case 0x2952c0u: goto label_2952c0;
        case 0x2952c4u: goto label_2952c4;
        case 0x2952c8u: goto label_2952c8;
        case 0x2952ccu: goto label_2952cc;
        case 0x2952d0u: goto label_2952d0;
        case 0x2952d4u: goto label_2952d4;
        case 0x2952d8u: goto label_2952d8;
        case 0x2952dcu: goto label_2952dc;
        case 0x2952e0u: goto label_2952e0;
        case 0x2952e4u: goto label_2952e4;
        case 0x2952e8u: goto label_2952e8;
        case 0x2952ecu: goto label_2952ec;
        case 0x2952f0u: goto label_2952f0;
        case 0x2952f4u: goto label_2952f4;
        case 0x2952f8u: goto label_2952f8;
        case 0x2952fcu: goto label_2952fc;
        case 0x295300u: goto label_295300;
        case 0x295304u: goto label_295304;
        case 0x295308u: goto label_295308;
        case 0x29530cu: goto label_29530c;
        case 0x295310u: goto label_295310;
        case 0x295314u: goto label_295314;
        case 0x295318u: goto label_295318;
        case 0x29531cu: goto label_29531c;
        case 0x295320u: goto label_295320;
        case 0x295324u: goto label_295324;
        case 0x295328u: goto label_295328;
        case 0x29532cu: goto label_29532c;
        case 0x295330u: goto label_295330;
        case 0x295334u: goto label_295334;
        case 0x295338u: goto label_295338;
        case 0x29533cu: goto label_29533c;
        case 0x295340u: goto label_295340;
        case 0x295344u: goto label_295344;
        case 0x295348u: goto label_295348;
        case 0x29534cu: goto label_29534c;
        case 0x295350u: goto label_295350;
        case 0x295354u: goto label_295354;
        case 0x295358u: goto label_295358;
        case 0x29535cu: goto label_29535c;
        case 0x295360u: goto label_295360;
        case 0x295364u: goto label_295364;
        case 0x295368u: goto label_295368;
        case 0x29536cu: goto label_29536c;
        case 0x295370u: goto label_295370;
        case 0x295374u: goto label_295374;
        case 0x295378u: goto label_295378;
        case 0x29537cu: goto label_29537c;
        case 0x295380u: goto label_295380;
        case 0x295384u: goto label_295384;
        case 0x295388u: goto label_295388;
        case 0x29538cu: goto label_29538c;
        case 0x295390u: goto label_295390;
        case 0x295394u: goto label_295394;
        case 0x295398u: goto label_295398;
        case 0x29539cu: goto label_29539c;
        case 0x2953a0u: goto label_2953a0;
        case 0x2953a4u: goto label_2953a4;
        case 0x2953a8u: goto label_2953a8;
        case 0x2953acu: goto label_2953ac;
        case 0x2953b0u: goto label_2953b0;
        case 0x2953b4u: goto label_2953b4;
        case 0x2953b8u: goto label_2953b8;
        case 0x2953bcu: goto label_2953bc;
        case 0x2953c0u: goto label_2953c0;
        case 0x2953c4u: goto label_2953c4;
        case 0x2953c8u: goto label_2953c8;
        case 0x2953ccu: goto label_2953cc;
        case 0x2953d0u: goto label_2953d0;
        case 0x2953d4u: goto label_2953d4;
        case 0x2953d8u: goto label_2953d8;
        case 0x2953dcu: goto label_2953dc;
        case 0x2953e0u: goto label_2953e0;
        case 0x2953e4u: goto label_2953e4;
        case 0x2953e8u: goto label_2953e8;
        case 0x2953ecu: goto label_2953ec;
        case 0x2953f0u: goto label_2953f0;
        case 0x2953f4u: goto label_2953f4;
        case 0x2953f8u: goto label_2953f8;
        case 0x2953fcu: goto label_2953fc;
        case 0x295400u: goto label_295400;
        case 0x295404u: goto label_295404;
        case 0x295408u: goto label_295408;
        case 0x29540cu: goto label_29540c;
        case 0x295410u: goto label_295410;
        case 0x295414u: goto label_295414;
        case 0x295418u: goto label_295418;
        case 0x29541cu: goto label_29541c;
        case 0x295420u: goto label_295420;
        case 0x295424u: goto label_295424;
        case 0x295428u: goto label_295428;
        case 0x29542cu: goto label_29542c;
        case 0x295430u: goto label_295430;
        case 0x295434u: goto label_295434;
        case 0x295438u: goto label_295438;
        case 0x29543cu: goto label_29543c;
        case 0x295440u: goto label_295440;
        case 0x295444u: goto label_295444;
        case 0x295448u: goto label_295448;
        case 0x29544cu: goto label_29544c;
        case 0x295450u: goto label_295450;
        case 0x295454u: goto label_295454;
        case 0x295458u: goto label_295458;
        case 0x29545cu: goto label_29545c;
        case 0x295460u: goto label_295460;
        case 0x295464u: goto label_295464;
        case 0x295468u: goto label_295468;
        case 0x29546cu: goto label_29546c;
        case 0x295470u: goto label_295470;
        case 0x295474u: goto label_295474;
        case 0x295478u: goto label_295478;
        case 0x29547cu: goto label_29547c;
        case 0x295480u: goto label_295480;
        case 0x295484u: goto label_295484;
        case 0x295488u: goto label_295488;
        case 0x29548cu: goto label_29548c;
        case 0x295490u: goto label_295490;
        case 0x295494u: goto label_295494;
        case 0x295498u: goto label_295498;
        case 0x29549cu: goto label_29549c;
        case 0x2954a0u: goto label_2954a0;
        case 0x2954a4u: goto label_2954a4;
        case 0x2954a8u: goto label_2954a8;
        case 0x2954acu: goto label_2954ac;
        case 0x2954b0u: goto label_2954b0;
        case 0x2954b4u: goto label_2954b4;
        case 0x2954b8u: goto label_2954b8;
        case 0x2954bcu: goto label_2954bc;
        case 0x2954c0u: goto label_2954c0;
        case 0x2954c4u: goto label_2954c4;
        case 0x2954c8u: goto label_2954c8;
        case 0x2954ccu: goto label_2954cc;
        case 0x2954d0u: goto label_2954d0;
        case 0x2954d4u: goto label_2954d4;
        case 0x2954d8u: goto label_2954d8;
        case 0x2954dcu: goto label_2954dc;
        case 0x2954e0u: goto label_2954e0;
        case 0x2954e4u: goto label_2954e4;
        case 0x2954e8u: goto label_2954e8;
        case 0x2954ecu: goto label_2954ec;
        case 0x2954f0u: goto label_2954f0;
        case 0x2954f4u: goto label_2954f4;
        case 0x2954f8u: goto label_2954f8;
        case 0x2954fcu: goto label_2954fc;
        case 0x295500u: goto label_295500;
        case 0x295504u: goto label_295504;
        case 0x295508u: goto label_295508;
        case 0x29550cu: goto label_29550c;
        case 0x295510u: goto label_295510;
        case 0x295514u: goto label_295514;
        case 0x295518u: goto label_295518;
        case 0x29551cu: goto label_29551c;
        case 0x295520u: goto label_295520;
        case 0x295524u: goto label_295524;
        case 0x295528u: goto label_295528;
        case 0x29552cu: goto label_29552c;
        case 0x295530u: goto label_295530;
        case 0x295534u: goto label_295534;
        case 0x295538u: goto label_295538;
        case 0x29553cu: goto label_29553c;
        case 0x295540u: goto label_295540;
        case 0x295544u: goto label_295544;
        case 0x295548u: goto label_295548;
        case 0x29554cu: goto label_29554c;
        case 0x295550u: goto label_295550;
        case 0x295554u: goto label_295554;
        case 0x295558u: goto label_295558;
        case 0x29555cu: goto label_29555c;
        case 0x295560u: goto label_295560;
        case 0x295564u: goto label_295564;
        case 0x295568u: goto label_295568;
        case 0x29556cu: goto label_29556c;
        case 0x295570u: goto label_295570;
        case 0x295574u: goto label_295574;
        case 0x295578u: goto label_295578;
        case 0x29557cu: goto label_29557c;
        case 0x295580u: goto label_295580;
        case 0x295584u: goto label_295584;
        case 0x295588u: goto label_295588;
        case 0x29558cu: goto label_29558c;
        case 0x295590u: goto label_295590;
        case 0x295594u: goto label_295594;
        case 0x295598u: goto label_295598;
        case 0x29559cu: goto label_29559c;
        case 0x2955a0u: goto label_2955a0;
        case 0x2955a4u: goto label_2955a4;
        case 0x2955a8u: goto label_2955a8;
        case 0x2955acu: goto label_2955ac;
        case 0x2955b0u: goto label_2955b0;
        case 0x2955b4u: goto label_2955b4;
        case 0x2955b8u: goto label_2955b8;
        case 0x2955bcu: goto label_2955bc;
        case 0x2955c0u: goto label_2955c0;
        case 0x2955c4u: goto label_2955c4;
        case 0x2955c8u: goto label_2955c8;
        case 0x2955ccu: goto label_2955cc;
        case 0x2955d0u: goto label_2955d0;
        case 0x2955d4u: goto label_2955d4;
        case 0x2955d8u: goto label_2955d8;
        case 0x2955dcu: goto label_2955dc;
        case 0x2955e0u: goto label_2955e0;
        case 0x2955e4u: goto label_2955e4;
        case 0x2955e8u: goto label_2955e8;
        case 0x2955ecu: goto label_2955ec;
        case 0x2955f0u: goto label_2955f0;
        case 0x2955f4u: goto label_2955f4;
        case 0x2955f8u: goto label_2955f8;
        case 0x2955fcu: goto label_2955fc;
        case 0x295600u: goto label_295600;
        case 0x295604u: goto label_295604;
        case 0x295608u: goto label_295608;
        case 0x29560cu: goto label_29560c;
        case 0x295610u: goto label_295610;
        case 0x295614u: goto label_295614;
        case 0x295618u: goto label_295618;
        case 0x29561cu: goto label_29561c;
        case 0x295620u: goto label_295620;
        case 0x295624u: goto label_295624;
        case 0x295628u: goto label_295628;
        case 0x29562cu: goto label_29562c;
        case 0x295630u: goto label_295630;
        case 0x295634u: goto label_295634;
        case 0x295638u: goto label_295638;
        case 0x29563cu: goto label_29563c;
        case 0x295640u: goto label_295640;
        case 0x295644u: goto label_295644;
        case 0x295648u: goto label_295648;
        case 0x29564cu: goto label_29564c;
        case 0x295650u: goto label_295650;
        case 0x295654u: goto label_295654;
        case 0x295658u: goto label_295658;
        case 0x29565cu: goto label_29565c;
        case 0x295660u: goto label_295660;
        case 0x295664u: goto label_295664;
        case 0x295668u: goto label_295668;
        case 0x29566cu: goto label_29566c;
        case 0x295670u: goto label_295670;
        case 0x295674u: goto label_295674;
        case 0x295678u: goto label_295678;
        case 0x29567cu: goto label_29567c;
        case 0x295680u: goto label_295680;
        case 0x295684u: goto label_295684;
        case 0x295688u: goto label_295688;
        case 0x29568cu: goto label_29568c;
        case 0x295690u: goto label_295690;
        case 0x295694u: goto label_295694;
        case 0x295698u: goto label_295698;
        case 0x29569cu: goto label_29569c;
        case 0x2956a0u: goto label_2956a0;
        case 0x2956a4u: goto label_2956a4;
        case 0x2956a8u: goto label_2956a8;
        case 0x2956acu: goto label_2956ac;
        case 0x2956b0u: goto label_2956b0;
        case 0x2956b4u: goto label_2956b4;
        case 0x2956b8u: goto label_2956b8;
        case 0x2956bcu: goto label_2956bc;
        case 0x2956c0u: goto label_2956c0;
        case 0x2956c4u: goto label_2956c4;
        case 0x2956c8u: goto label_2956c8;
        case 0x2956ccu: goto label_2956cc;
        case 0x2956d0u: goto label_2956d0;
        case 0x2956d4u: goto label_2956d4;
        case 0x2956d8u: goto label_2956d8;
        case 0x2956dcu: goto label_2956dc;
        case 0x2956e0u: goto label_2956e0;
        case 0x2956e4u: goto label_2956e4;
        case 0x2956e8u: goto label_2956e8;
        case 0x2956ecu: goto label_2956ec;
        case 0x2956f0u: goto label_2956f0;
        case 0x2956f4u: goto label_2956f4;
        case 0x2956f8u: goto label_2956f8;
        case 0x2956fcu: goto label_2956fc;
        case 0x295700u: goto label_295700;
        case 0x295704u: goto label_295704;
        case 0x295708u: goto label_295708;
        case 0x29570cu: goto label_29570c;
        case 0x295710u: goto label_295710;
        case 0x295714u: goto label_295714;
        case 0x295718u: goto label_295718;
        case 0x29571cu: goto label_29571c;
        case 0x295720u: goto label_295720;
        case 0x295724u: goto label_295724;
        case 0x295728u: goto label_295728;
        case 0x29572cu: goto label_29572c;
        case 0x295730u: goto label_295730;
        case 0x295734u: goto label_295734;
        case 0x295738u: goto label_295738;
        case 0x29573cu: goto label_29573c;
        case 0x295740u: goto label_295740;
        case 0x295744u: goto label_295744;
        case 0x295748u: goto label_295748;
        case 0x29574cu: goto label_29574c;
        case 0x295750u: goto label_295750;
        case 0x295754u: goto label_295754;
        case 0x295758u: goto label_295758;
        case 0x29575cu: goto label_29575c;
        case 0x295760u: goto label_295760;
        case 0x295764u: goto label_295764;
        case 0x295768u: goto label_295768;
        case 0x29576cu: goto label_29576c;
        case 0x295770u: goto label_295770;
        case 0x295774u: goto label_295774;
        case 0x295778u: goto label_295778;
        case 0x29577cu: goto label_29577c;
        case 0x295780u: goto label_295780;
        case 0x295784u: goto label_295784;
        case 0x295788u: goto label_295788;
        case 0x29578cu: goto label_29578c;
        case 0x295790u: goto label_295790;
        case 0x295794u: goto label_295794;
        case 0x295798u: goto label_295798;
        case 0x29579cu: goto label_29579c;
        case 0x2957a0u: goto label_2957a0;
        case 0x2957a4u: goto label_2957a4;
        case 0x2957a8u: goto label_2957a8;
        case 0x2957acu: goto label_2957ac;
        case 0x2957b0u: goto label_2957b0;
        case 0x2957b4u: goto label_2957b4;
        case 0x2957b8u: goto label_2957b8;
        case 0x2957bcu: goto label_2957bc;
        case 0x2957c0u: goto label_2957c0;
        case 0x2957c4u: goto label_2957c4;
        case 0x2957c8u: goto label_2957c8;
        case 0x2957ccu: goto label_2957cc;
        case 0x2957d0u: goto label_2957d0;
        case 0x2957d4u: goto label_2957d4;
        case 0x2957d8u: goto label_2957d8;
        case 0x2957dcu: goto label_2957dc;
        case 0x2957e0u: goto label_2957e0;
        case 0x2957e4u: goto label_2957e4;
        case 0x2957e8u: goto label_2957e8;
        case 0x2957ecu: goto label_2957ec;
        case 0x2957f0u: goto label_2957f0;
        case 0x2957f4u: goto label_2957f4;
        case 0x2957f8u: goto label_2957f8;
        case 0x2957fcu: goto label_2957fc;
        case 0x295800u: goto label_295800;
        case 0x295804u: goto label_295804;
        case 0x295808u: goto label_295808;
        case 0x29580cu: goto label_29580c;
        case 0x295810u: goto label_295810;
        case 0x295814u: goto label_295814;
        case 0x295818u: goto label_295818;
        case 0x29581cu: goto label_29581c;
        case 0x295820u: goto label_295820;
        case 0x295824u: goto label_295824;
        case 0x295828u: goto label_295828;
        case 0x29582cu: goto label_29582c;
        case 0x295830u: goto label_295830;
        case 0x295834u: goto label_295834;
        case 0x295838u: goto label_295838;
        case 0x29583cu: goto label_29583c;
        case 0x295840u: goto label_295840;
        case 0x295844u: goto label_295844;
        case 0x295848u: goto label_295848;
        case 0x29584cu: goto label_29584c;
        case 0x295850u: goto label_295850;
        case 0x295854u: goto label_295854;
        case 0x295858u: goto label_295858;
        case 0x29585cu: goto label_29585c;
        case 0x295860u: goto label_295860;
        case 0x295864u: goto label_295864;
        case 0x295868u: goto label_295868;
        case 0x29586cu: goto label_29586c;
        case 0x295870u: goto label_295870;
        case 0x295874u: goto label_295874;
        case 0x295878u: goto label_295878;
        case 0x29587cu: goto label_29587c;
        case 0x295880u: goto label_295880;
        case 0x295884u: goto label_295884;
        case 0x295888u: goto label_295888;
        case 0x29588cu: goto label_29588c;
        case 0x295890u: goto label_295890;
        case 0x295894u: goto label_295894;
        case 0x295898u: goto label_295898;
        case 0x29589cu: goto label_29589c;
        case 0x2958a0u: goto label_2958a0;
        case 0x2958a4u: goto label_2958a4;
        case 0x2958a8u: goto label_2958a8;
        case 0x2958acu: goto label_2958ac;
        case 0x2958b0u: goto label_2958b0;
        case 0x2958b4u: goto label_2958b4;
        case 0x2958b8u: goto label_2958b8;
        case 0x2958bcu: goto label_2958bc;
        case 0x2958c0u: goto label_2958c0;
        case 0x2958c4u: goto label_2958c4;
        case 0x2958c8u: goto label_2958c8;
        case 0x2958ccu: goto label_2958cc;
        case 0x2958d0u: goto label_2958d0;
        case 0x2958d4u: goto label_2958d4;
        case 0x2958d8u: goto label_2958d8;
        case 0x2958dcu: goto label_2958dc;
        case 0x2958e0u: goto label_2958e0;
        case 0x2958e4u: goto label_2958e4;
        case 0x2958e8u: goto label_2958e8;
        case 0x2958ecu: goto label_2958ec;
        case 0x2958f0u: goto label_2958f0;
        case 0x2958f4u: goto label_2958f4;
        case 0x2958f8u: goto label_2958f8;
        case 0x2958fcu: goto label_2958fc;
        case 0x295900u: goto label_295900;
        case 0x295904u: goto label_295904;
        case 0x295908u: goto label_295908;
        case 0x29590cu: goto label_29590c;
        case 0x295910u: goto label_295910;
        case 0x295914u: goto label_295914;
        case 0x295918u: goto label_295918;
        case 0x29591cu: goto label_29591c;
        case 0x295920u: goto label_295920;
        case 0x295924u: goto label_295924;
        case 0x295928u: goto label_295928;
        case 0x29592cu: goto label_29592c;
        case 0x295930u: goto label_295930;
        case 0x295934u: goto label_295934;
        case 0x295938u: goto label_295938;
        case 0x29593cu: goto label_29593c;
        case 0x295940u: goto label_295940;
        case 0x295944u: goto label_295944;
        case 0x295948u: goto label_295948;
        case 0x29594cu: goto label_29594c;
        case 0x295950u: goto label_295950;
        case 0x295954u: goto label_295954;
        case 0x295958u: goto label_295958;
        case 0x29595cu: goto label_29595c;
        case 0x295960u: goto label_295960;
        case 0x295964u: goto label_295964;
        case 0x295968u: goto label_295968;
        case 0x29596cu: goto label_29596c;
        case 0x295970u: goto label_295970;
        case 0x295974u: goto label_295974;
        case 0x295978u: goto label_295978;
        case 0x29597cu: goto label_29597c;
        case 0x295980u: goto label_295980;
        case 0x295984u: goto label_295984;
        case 0x295988u: goto label_295988;
        case 0x29598cu: goto label_29598c;
        case 0x295990u: goto label_295990;
        case 0x295994u: goto label_295994;
        case 0x295998u: goto label_295998;
        case 0x29599cu: goto label_29599c;
        case 0x2959a0u: goto label_2959a0;
        case 0x2959a4u: goto label_2959a4;
        case 0x2959a8u: goto label_2959a8;
        case 0x2959acu: goto label_2959ac;
        case 0x2959b0u: goto label_2959b0;
        case 0x2959b4u: goto label_2959b4;
        case 0x2959b8u: goto label_2959b8;
        case 0x2959bcu: goto label_2959bc;
        case 0x2959c0u: goto label_2959c0;
        case 0x2959c4u: goto label_2959c4;
        case 0x2959c8u: goto label_2959c8;
        case 0x2959ccu: goto label_2959cc;
        case 0x2959d0u: goto label_2959d0;
        case 0x2959d4u: goto label_2959d4;
        case 0x2959d8u: goto label_2959d8;
        case 0x2959dcu: goto label_2959dc;
        case 0x2959e0u: goto label_2959e0;
        case 0x2959e4u: goto label_2959e4;
        case 0x2959e8u: goto label_2959e8;
        case 0x2959ecu: goto label_2959ec;
        case 0x2959f0u: goto label_2959f0;
        case 0x2959f4u: goto label_2959f4;
        case 0x2959f8u: goto label_2959f8;
        case 0x2959fcu: goto label_2959fc;
        case 0x295a00u: goto label_295a00;
        case 0x295a04u: goto label_295a04;
        case 0x295a08u: goto label_295a08;
        case 0x295a0cu: goto label_295a0c;
        case 0x295a10u: goto label_295a10;
        case 0x295a14u: goto label_295a14;
        case 0x295a18u: goto label_295a18;
        case 0x295a1cu: goto label_295a1c;
        case 0x295a20u: goto label_295a20;
        case 0x295a24u: goto label_295a24;
        case 0x295a28u: goto label_295a28;
        case 0x295a2cu: goto label_295a2c;
        case 0x295a30u: goto label_295a30;
        case 0x295a34u: goto label_295a34;
        case 0x295a38u: goto label_295a38;
        case 0x295a3cu: goto label_295a3c;
        case 0x295a40u: goto label_295a40;
        case 0x295a44u: goto label_295a44;
        case 0x295a48u: goto label_295a48;
        case 0x295a4cu: goto label_295a4c;
        case 0x295a50u: goto label_295a50;
        case 0x295a54u: goto label_295a54;
        case 0x295a58u: goto label_295a58;
        case 0x295a5cu: goto label_295a5c;
        case 0x295a60u: goto label_295a60;
        case 0x295a64u: goto label_295a64;
        case 0x295a68u: goto label_295a68;
        case 0x295a6cu: goto label_295a6c;
        case 0x295a70u: goto label_295a70;
        case 0x295a74u: goto label_295a74;
        case 0x295a78u: goto label_295a78;
        case 0x295a7cu: goto label_295a7c;
        case 0x295a80u: goto label_295a80;
        case 0x295a84u: goto label_295a84;
        case 0x295a88u: goto label_295a88;
        case 0x295a8cu: goto label_295a8c;
        case 0x295a90u: goto label_295a90;
        case 0x295a94u: goto label_295a94;
        case 0x295a98u: goto label_295a98;
        case 0x295a9cu: goto label_295a9c;
        case 0x295aa0u: goto label_295aa0;
        case 0x295aa4u: goto label_295aa4;
        case 0x295aa8u: goto label_295aa8;
        case 0x295aacu: goto label_295aac;
        case 0x295ab0u: goto label_295ab0;
        case 0x295ab4u: goto label_295ab4;
        case 0x295ab8u: goto label_295ab8;
        case 0x295abcu: goto label_295abc;
        case 0x295ac0u: goto label_295ac0;
        case 0x295ac4u: goto label_295ac4;
        case 0x295ac8u: goto label_295ac8;
        case 0x295accu: goto label_295acc;
        case 0x295ad0u: goto label_295ad0;
        case 0x295ad4u: goto label_295ad4;
        case 0x295ad8u: goto label_295ad8;
        case 0x295adcu: goto label_295adc;
        case 0x295ae0u: goto label_295ae0;
        case 0x295ae4u: goto label_295ae4;
        case 0x295ae8u: goto label_295ae8;
        case 0x295aecu: goto label_295aec;
        case 0x295af0u: goto label_295af0;
        case 0x295af4u: goto label_295af4;
        case 0x295af8u: goto label_295af8;
        case 0x295afcu: goto label_295afc;
        case 0x295b00u: goto label_295b00;
        case 0x295b04u: goto label_295b04;
        case 0x295b08u: goto label_295b08;
        case 0x295b0cu: goto label_295b0c;
        case 0x295b10u: goto label_295b10;
        case 0x295b14u: goto label_295b14;
        case 0x295b18u: goto label_295b18;
        case 0x295b1cu: goto label_295b1c;
        case 0x295b20u: goto label_295b20;
        case 0x295b24u: goto label_295b24;
        case 0x295b28u: goto label_295b28;
        case 0x295b2cu: goto label_295b2c;
        case 0x295b30u: goto label_295b30;
        case 0x295b34u: goto label_295b34;
        case 0x295b38u: goto label_295b38;
        case 0x295b3cu: goto label_295b3c;
        case 0x295b40u: goto label_295b40;
        case 0x295b44u: goto label_295b44;
        case 0x295b48u: goto label_295b48;
        case 0x295b4cu: goto label_295b4c;
        case 0x295b50u: goto label_295b50;
        case 0x295b54u: goto label_295b54;
        case 0x295b58u: goto label_295b58;
        case 0x295b5cu: goto label_295b5c;
        case 0x295b60u: goto label_295b60;
        case 0x295b64u: goto label_295b64;
        case 0x295b68u: goto label_295b68;
        case 0x295b6cu: goto label_295b6c;
        case 0x295b70u: goto label_295b70;
        case 0x295b74u: goto label_295b74;
        case 0x295b78u: goto label_295b78;
        case 0x295b7cu: goto label_295b7c;
        case 0x295b80u: goto label_295b80;
        case 0x295b84u: goto label_295b84;
        case 0x295b88u: goto label_295b88;
        case 0x295b8cu: goto label_295b8c;
        case 0x295b90u: goto label_295b90;
        case 0x295b94u: goto label_295b94;
        case 0x295b98u: goto label_295b98;
        case 0x295b9cu: goto label_295b9c;
        case 0x295ba0u: goto label_295ba0;
        case 0x295ba4u: goto label_295ba4;
        case 0x295ba8u: goto label_295ba8;
        case 0x295bacu: goto label_295bac;
        case 0x295bb0u: goto label_295bb0;
        case 0x295bb4u: goto label_295bb4;
        case 0x295bb8u: goto label_295bb8;
        case 0x295bbcu: goto label_295bbc;
        case 0x295bc0u: goto label_295bc0;
        case 0x295bc4u: goto label_295bc4;
        case 0x295bc8u: goto label_295bc8;
        case 0x295bccu: goto label_295bcc;
        case 0x295bd0u: goto label_295bd0;
        case 0x295bd4u: goto label_295bd4;
        case 0x295bd8u: goto label_295bd8;
        case 0x295bdcu: goto label_295bdc;
        case 0x295be0u: goto label_295be0;
        case 0x295be4u: goto label_295be4;
        case 0x295be8u: goto label_295be8;
        case 0x295becu: goto label_295bec;
        case 0x295bf0u: goto label_295bf0;
        case 0x295bf4u: goto label_295bf4;
        case 0x295bf8u: goto label_295bf8;
        case 0x295bfcu: goto label_295bfc;
        case 0x295c00u: goto label_295c00;
        case 0x295c04u: goto label_295c04;
        case 0x295c08u: goto label_295c08;
        case 0x295c0cu: goto label_295c0c;
        case 0x295c10u: goto label_295c10;
        case 0x295c14u: goto label_295c14;
        case 0x295c18u: goto label_295c18;
        case 0x295c1cu: goto label_295c1c;
        case 0x295c20u: goto label_295c20;
        case 0x295c24u: goto label_295c24;
        case 0x295c28u: goto label_295c28;
        case 0x295c2cu: goto label_295c2c;
        case 0x295c30u: goto label_295c30;
        case 0x295c34u: goto label_295c34;
        case 0x295c38u: goto label_295c38;
        case 0x295c3cu: goto label_295c3c;
        default: break;
    }

    ctx->pc = 0x294e10u;

label_294e10:
    // 0x294e10: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x294e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_294e14:
    // 0x294e14: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x294e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_294e18:
    // 0x294e18: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x294e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_294e1c:
    // 0x294e1c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x294e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_294e20:
    // 0x294e20: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x294e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_294e24:
    // 0x294e24: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x294e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_294e28:
    // 0x294e28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x294e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_294e2c:
    // 0x294e2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x294e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_294e30:
    // 0x294e30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x294e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_294e34:
    // 0x294e34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x294e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_294e38:
    // 0x294e38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x294e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_294e3c:
    // 0x294e3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x294e3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_294e40:
    // 0x294e40: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x294e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
label_294e44:
    // 0x294e44: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x294e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_294e48:
    // 0x294e48: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x294e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_294e4c:
    // 0x294e4c: 0x1460036d  bnez        $v1, . + 4 + (0x36D << 2)
label_294e50:
    if (ctx->pc == 0x294E50u) {
        ctx->pc = 0x294E54u;
        goto label_294e54;
    }
    ctx->pc = 0x294E4Cu;
    {
        const bool branch_taken_0x294e4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294e4c) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x294E54u;
label_294e54:
    // 0x294e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294e58:
    // 0x294e58: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x294e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
label_294e5c:
    // 0x294e5c: 0xc090864  jal         func_242190
label_294e60:
    if (ctx->pc == 0x294E60u) {
        ctx->pc = 0x294E64u;
        goto label_294e64;
    }
    ctx->pc = 0x294E5Cu;
    SET_GPR_U32(ctx, 31, 0x294E64u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x294E5Cu, 0x294E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E64u;
label_294e64:
    // 0x294e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294e68:
    // 0x294e68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x294e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_294e6c:
    // 0x294e6c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x294e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_294e70:
    // 0x294e70: 0x320f809  jalr        $t9
label_294e74:
    if (ctx->pc == 0x294E74u) {
        ctx->pc = 0x294E78u;
        goto label_294e78;
    }
    ctx->pc = 0x294E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294E78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E70u, 0x294E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294E78u;
label_294e78:
    // 0x294e78: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x294e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
label_294e7c:
    // 0x294e7c: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x294e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_294e80:
    // 0x294e80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x294e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_294e84:
    // 0x294e84: 0xc085538  jal         func_2154E0
label_294e88:
    if (ctx->pc == 0x294E88u) {
        ctx->pc = 0x294E8Cu;
        goto label_294e8c;
    }
    ctx->pc = 0x294E84u;
    SET_GPR_U32(ctx, 31, 0x294E8Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x294E84u, 0x294E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294E8Cu;
label_294e8c:
    // 0x294e8c: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x294e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_294e90:
    // 0x294e90: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x294e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_294e94:
    // 0x294e94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x294e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294e98:
    // 0x294e98: 0xc0a1248  jal         func_284920
label_294e9c:
    if (ctx->pc == 0x294E9Cu) {
        ctx->pc = 0x294EA0u;
        goto label_294ea0;
    }
    ctx->pc = 0x294E98u;
    SET_GPR_U32(ctx, 31, 0x294EA0u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x294E98u, 0x294EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EA0u;
label_294ea0:
    // 0x294ea0: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x294ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
label_294ea4:
    // 0x294ea4: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x294ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_294ea8:
    // 0x294ea8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x294ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_294eac:
    // 0x294eac: 0xc121d18  jal         func_487460
label_294eb0:
    if (ctx->pc == 0x294EB0u) {
        ctx->pc = 0x294EB4u;
        goto label_294eb4;
    }
    ctx->pc = 0x294EACu;
    SET_GPR_U32(ctx, 31, 0x294EB4u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x294EACu, 0x294EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EB4u;
label_294eb4:
    // 0x294eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294eb8:
    // 0x294eb8: 0xc124e2c  jal         func_4938B0
label_294ebc:
    if (ctx->pc == 0x294EBCu) {
        ctx->pc = 0x294EC0u;
        goto label_294ec0;
    }
    ctx->pc = 0x294EB8u;
    SET_GPR_U32(ctx, 31, 0x294EC0u);
    ctx->pc = 0x4938B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4938B0u, 0x294EB8u, 0x294EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EC0u;
label_294ec0:
    // 0x294ec0: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x294ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_294ec4:
    // 0x294ec4: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x294ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_294ec8:
    // 0x294ec8: 0xc0e2048  jal         func_388120
label_294ecc:
    if (ctx->pc == 0x294ECCu) {
        ctx->pc = 0x294ED0u;
        goto label_294ed0;
    }
    ctx->pc = 0x294EC8u;
    SET_GPR_U32(ctx, 31, 0x294ED0u);
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x294EC8u, 0x294ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294ED0u;
label_294ed0:
    // 0x294ed0: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x294ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
label_294ed4:
    // 0x294ed4: 0xc12242c  jal         func_4890B0
label_294ed8:
    if (ctx->pc == 0x294ED8u) {
        ctx->pc = 0x294EDCu;
        goto label_294edc;
    }
    ctx->pc = 0x294ED4u;
    SET_GPR_U32(ctx, 31, 0x294EDCu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x294ED4u, 0x294EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EDCu;
label_294edc:
    // 0x294edc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294ee0:
    // 0x294ee0: 0x8fa50294  lw          $a1, 0x294($sp)
    ctx->pc = 0x294ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_294ee4:
    // 0x294ee4: 0xc1060d2  jal         func_418348
label_294ee8:
    if (ctx->pc == 0x294EE8u) {
        ctx->pc = 0x294EECu;
        goto label_294eec;
    }
    ctx->pc = 0x294EE4u;
    SET_GPR_U32(ctx, 31, 0x294EECu);
    ctx->pc = 0x418348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418348u, 0x294EE4u, 0x294EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294EECu;
label_294eec:
    // 0x294eec: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x294eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
label_294ef0:
    // 0x294ef0: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x294ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_294ef4:
    // 0x294ef4: 0x10600343  beqz        $v1, . + 4 + (0x343 << 2)
label_294ef8:
    if (ctx->pc == 0x294EF8u) {
        ctx->pc = 0x294EFCu;
        goto label_294efc;
    }
    ctx->pc = 0x294EF4u;
    {
        const bool branch_taken_0x294ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294ef4) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x294EFCu;
label_294efc:
    // 0x294efc: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x294efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_294f00:
    // 0x294f00: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x294f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_294f04:
    // 0x294f04: 0xc121d18  jal         func_487460
label_294f08:
    if (ctx->pc == 0x294F08u) {
        ctx->pc = 0x294F0Cu;
        goto label_294f0c;
    }
    ctx->pc = 0x294F04u;
    SET_GPR_U32(ctx, 31, 0x294F0Cu);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x294F04u, 0x294F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F0Cu;
label_294f0c:
    // 0x294f0c: 0x1040033d  beqz        $v0, . + 4 + (0x33D << 2)
label_294f10:
    if (ctx->pc == 0x294F10u) {
        ctx->pc = 0x294F14u;
        goto label_294f14;
    }
    ctx->pc = 0x294F0Cu;
    {
        const bool branch_taken_0x294f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f0c) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x294F14u;
label_294f14:
    // 0x294f14: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x294f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_294f18:
    // 0x294f18: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x294f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_294f1c:
    // 0x294f1c: 0xc121d18  jal         func_487460
label_294f20:
    if (ctx->pc == 0x294F20u) {
        ctx->pc = 0x294F24u;
        goto label_294f24;
    }
    ctx->pc = 0x294F1Cu;
    SET_GPR_U32(ctx, 31, 0x294F24u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x294F1Cu, 0x294F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F24u;
label_294f24:
    // 0x294f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x294f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294f28:
    // 0x294f28: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x294f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_294f2c:
    // 0x294f2c: 0x24a54740  addiu       $a1, $a1, 0x4740
    ctx->pc = 0x294f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18240));
label_294f30:
    // 0x294f30: 0x27a602a8  addiu       $a2, $sp, 0x2A8
    ctx->pc = 0x294f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_294f34:
    // 0x294f34: 0xc0e2628  jal         func_3898A0
label_294f38:
    if (ctx->pc == 0x294F38u) {
        ctx->pc = 0x294F3Cu;
        goto label_294f3c;
    }
    ctx->pc = 0x294F34u;
    SET_GPR_U32(ctx, 31, 0x294F3Cu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x294F34u, 0x294F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F3Cu;
label_294f3c:
    // 0x294f3c: 0x8fa302a8  lw          $v1, 0x2A8($sp)
    ctx->pc = 0x294f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_294f40:
    // 0x294f40: 0x10600330  beqz        $v1, . + 4 + (0x330 << 2)
label_294f44:
    if (ctx->pc == 0x294F44u) {
        ctx->pc = 0x294F48u;
        goto label_294f48;
    }
    ctx->pc = 0x294F40u;
    {
        const bool branch_taken_0x294f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f40) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x294F48u;
label_294f48:
    // 0x294f48: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x294f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_294f4c:
    // 0x294f4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x294f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_294f50:
    // 0x294f50: 0x1060032c  beqz        $v1, . + 4 + (0x32C << 2)
label_294f54:
    if (ctx->pc == 0x294F54u) {
        ctx->pc = 0x294F58u;
        goto label_294f58;
    }
    ctx->pc = 0x294F50u;
    {
        const bool branch_taken_0x294f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294f50) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x294F58u;
label_294f58:
    // 0x294f58: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x294f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_294f5c:
    // 0x294f5c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x294f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_294f60:
    // 0x294f60: 0xc085538  jal         func_2154E0
label_294f64:
    if (ctx->pc == 0x294F64u) {
        ctx->pc = 0x294F68u;
        goto label_294f68;
    }
    ctx->pc = 0x294F60u;
    SET_GPR_U32(ctx, 31, 0x294F68u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x294F60u, 0x294F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F68u;
label_294f68:
    // 0x294f68: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x294f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
label_294f6c:
    // 0x294f6c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x294f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_294f70:
    // 0x294f70: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x294f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_294f74:
    // 0x294f74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x294f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_294f78:
    // 0x294f78: 0xc085538  jal         func_2154E0
label_294f7c:
    if (ctx->pc == 0x294F7Cu) {
        ctx->pc = 0x294F80u;
        goto label_294f80;
    }
    ctx->pc = 0x294F78u;
    SET_GPR_U32(ctx, 31, 0x294F80u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x294F78u, 0x294F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F80u;
label_294f80:
    // 0x294f80: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x294f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
label_294f84:
    // 0x294f84: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x294f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_294f88:
    // 0x294f88: 0x8fa50288  lw          $a1, 0x288($sp)
    ctx->pc = 0x294f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_294f8c:
    // 0x294f8c: 0xc090f80  jal         func_243E00
label_294f90:
    if (ctx->pc == 0x294F90u) {
        ctx->pc = 0x294F94u;
        goto label_294f94;
    }
    ctx->pc = 0x294F8Cu;
    SET_GPR_U32(ctx, 31, 0x294F94u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x294F8Cu, 0x294F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294F94u;
label_294f94:
    // 0x294f94: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x294f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_294f98:
    // 0x294f98: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x294f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_294f9c:
    // 0x294f9c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x294f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_294fa0:
    // 0x294fa0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x294fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294fa4:
    // 0x294fa4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x294fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294fa8:
    // 0x294fa8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x294fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294fac:
    // 0x294fac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x294facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_294fb0:
    // 0x294fb0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x294fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_294fb4:
    // 0x294fb4: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x294fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294fb8:
    // 0x294fb8: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x294fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_294fbc:
    // 0x294fbc: 0x8fa4028c  lw          $a0, 0x28C($sp)
    ctx->pc = 0x294fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_294fc0:
    // 0x294fc0: 0xc091aa8  jal         func_246AA0
label_294fc4:
    if (ctx->pc == 0x294FC4u) {
        ctx->pc = 0x294FC8u;
        goto label_294fc8;
    }
    ctx->pc = 0x294FC0u;
    SET_GPR_U32(ctx, 31, 0x294FC8u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x294FC0u, 0x294FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294FC8u;
label_294fc8:
    // 0x294fc8: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x294fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_294fcc:
    // 0x294fcc: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x294fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_294fd0:
    // 0x294fd0: 0xc0411f0  jal         func_1047C0
label_294fd4:
    if (ctx->pc == 0x294FD4u) {
        ctx->pc = 0x294FD8u;
        goto label_294fd8;
    }
    ctx->pc = 0x294FD0u;
    SET_GPR_U32(ctx, 31, 0x294FD8u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x294FD0u, 0x294FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294FD8u;
label_294fd8:
    // 0x294fd8: 0xafa2027c  sw          $v0, 0x27C($sp)
    ctx->pc = 0x294fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
label_294fdc:
    // 0x294fdc: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x294fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
label_294fe0:
    // 0x294fe0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x294fe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294fe4:
    // 0x294fe4: 0x10000030  b           . + 4 + (0x30 << 2)
label_294fe8:
    if (ctx->pc == 0x294FE8u) {
        ctx->pc = 0x294FECu;
        goto label_294fec;
    }
    ctx->pc = 0x294FE4u;
    {
        const bool branch_taken_0x294fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294fe4) {
            ctx->pc = 0x2950A8u;
            goto label_2950a8;
        }
    }
    ctx->pc = 0x294FECu;
label_294fec:
    // 0x294fec: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x294fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_294ff0:
    // 0x294ff0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x294ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_294ff4:
    // 0x294ff4: 0xc09748c  jal         func_25D230
label_294ff8:
    if (ctx->pc == 0x294FF8u) {
        ctx->pc = 0x294FFCu;
        goto label_294ffc;
    }
    ctx->pc = 0x294FF4u;
    SET_GPR_U32(ctx, 31, 0x294FFCu);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x294FF4u, 0x294FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294FFCu;
label_294ffc:
    // 0x294ffc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x294ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_295000:
    // 0x295000: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x295000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_295004:
    // 0x295004: 0xc085538  jal         func_2154E0
label_295008:
    if (ctx->pc == 0x295008u) {
        ctx->pc = 0x29500Cu;
        goto label_29500c;
    }
    ctx->pc = 0x295004u;
    SET_GPR_U32(ctx, 31, 0x29500Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x295004u, 0x29500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29500Cu;
label_29500c:
    // 0x29500c: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x29500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_295010:
    // 0x295010: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x295010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_295014:
    // 0x295014: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x295014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_295018:
    // 0x295018: 0xc09748c  jal         func_25D230
label_29501c:
    if (ctx->pc == 0x29501Cu) {
        ctx->pc = 0x295020u;
        goto label_295020;
    }
    ctx->pc = 0x295018u;
    SET_GPR_U32(ctx, 31, 0x295020u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x295018u, 0x295020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295020u;
label_295020:
    // 0x295020: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x295020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_295024:
    // 0x295024: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x295024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_295028:
    // 0x295028: 0xc085538  jal         func_2154E0
label_29502c:
    if (ctx->pc == 0x29502Cu) {
        ctx->pc = 0x295030u;
        goto label_295030;
    }
    ctx->pc = 0x295028u;
    SET_GPR_U32(ctx, 31, 0x295030u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x295028u, 0x295030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295030u;
label_295030:
    // 0x295030: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x295030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_295034:
    // 0x295034: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x295034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_295038:
    // 0x295038: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x295038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_29503c:
    // 0x29503c: 0xc090f80  jal         func_243E00
label_295040:
    if (ctx->pc == 0x295040u) {
        ctx->pc = 0x295044u;
        goto label_295044;
    }
    ctx->pc = 0x29503Cu;
    SET_GPR_U32(ctx, 31, 0x295044u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x29503Cu, 0x295044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295044u;
label_295044:
    // 0x295044: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x295044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_295048:
    // 0x295048: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x295048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_29504c:
    // 0x29504c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x29504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_295050:
    // 0x295050: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x295050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295054:
    // 0x295054: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x295054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295058:
    // 0x295058: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x295058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29505c:
    // 0x29505c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29505cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_295060:
    // 0x295060: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x295060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_295064:
    // 0x295064: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x295064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295068:
    // 0x295068: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x295068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29506c:
    // 0x29506c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29506cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295070:
    // 0x295070: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x295070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_295074:
    // 0x295074: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x295074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295078:
    // 0x295078: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x295078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29507c:
    // 0x29507c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29507cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295080:
    // 0x295080: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x295080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_295084:
    // 0x295084: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x295084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_295088:
    // 0x295088: 0x27a501e8  addiu       $a1, $sp, 0x1E8
    ctx->pc = 0x295088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_29508c:
    // 0x29508c: 0xc0935ac  jal         func_24D6B0
label_295090:
    if (ctx->pc == 0x295090u) {
        ctx->pc = 0x295094u;
        goto label_295094;
    }
    ctx->pc = 0x29508Cu;
    SET_GPR_U32(ctx, 31, 0x295094u);
    ctx->pc = 0x24D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D6B0u, 0x29508Cu, 0x295094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295094u;
label_295094:
    // 0x295094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_295098:
    if (ctx->pc == 0x295098u) {
        ctx->pc = 0x29509Cu;
        goto label_29509c;
    }
    ctx->pc = 0x295094u;
    {
        const bool branch_taken_0x295094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295094) {
            ctx->pc = 0x2950A4u;
            goto label_2950a4;
        }
    }
    ctx->pc = 0x29509Cu;
label_29509c:
    // 0x29509c: 0x8fa30274  lw          $v1, 0x274($sp)
    ctx->pc = 0x29509cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_2950a0:
    // 0x2950a0: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x2950a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
label_2950a4:
    // 0x2950a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2950a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2950a8:
    // 0x2950a8: 0x8fa3027c  lw          $v1, 0x27C($sp)
    ctx->pc = 0x2950a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_2950ac:
    // 0x2950ac: 0x2a3082b  sltu        $at, $s5, $v1
    ctx->pc = 0x2950acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2950b0:
    // 0x2950b0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_2950b4:
    if (ctx->pc == 0x2950B4u) {
        ctx->pc = 0x2950B8u;
        goto label_2950b8;
    }
    ctx->pc = 0x2950B0u;
    {
        const bool branch_taken_0x2950b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2950b0) {
            ctx->pc = 0x2950C4u;
            goto label_2950c4;
        }
    }
    ctx->pc = 0x2950B8u;
label_2950b8:
    // 0x2950b8: 0x8fa30278  lw          $v1, 0x278($sp)
    ctx->pc = 0x2950b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_2950bc:
    // 0x2950bc: 0x1060ffcb  beqz        $v1, . + 4 + (-0x35 << 2)
label_2950c0:
    if (ctx->pc == 0x2950C0u) {
        ctx->pc = 0x2950C4u;
        goto label_2950c4;
    }
    ctx->pc = 0x2950BCu;
    {
        const bool branch_taken_0x2950bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2950bc) {
            ctx->pc = 0x294FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294fec;
        }
    }
    ctx->pc = 0x2950C4u;
label_2950c4:
    // 0x2950c4: 0x8fa30278  lw          $v1, 0x278($sp)
    ctx->pc = 0x2950c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_2950c8:
    // 0x2950c8: 0x14030003  bne         $zero, $v1, . + 4 + (0x3 << 2)
label_2950cc:
    if (ctx->pc == 0x2950CCu) {
        ctx->pc = 0x2950D0u;
        goto label_2950d0;
    }
    ctx->pc = 0x2950C8u;
    {
        const bool branch_taken_0x2950c8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        if (branch_taken_0x2950c8) {
            ctx->pc = 0x2950D8u;
            goto label_2950d8;
        }
    }
    ctx->pc = 0x2950D0u;
label_2950d0:
    // 0x2950d0: 0x100002cc  b           . + 4 + (0x2CC << 2)
label_2950d4:
    if (ctx->pc == 0x2950D4u) {
        ctx->pc = 0x2950D8u;
        goto label_2950d8;
    }
    ctx->pc = 0x2950D0u;
    {
        const bool branch_taken_0x2950d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2950d0) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x2950D8u;
label_2950d8:
    // 0x2950d8: 0x8fa30278  lw          $v1, 0x278($sp)
    ctx->pc = 0x2950d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_2950dc:
    // 0x2950dc: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x2950dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_2950e0:
    // 0x2950e0: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x2950e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
label_2950e4:
    // 0x2950e4: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x2950e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_2950e8:
    // 0x2950e8: 0xa04000b0  sb          $zero, 0xB0($v0)
    ctx->pc = 0x2950e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 0));
label_2950ec:
    // 0x2950ec: 0xc12242c  jal         func_4890B0
label_2950f0:
    if (ctx->pc == 0x2950F0u) {
        ctx->pc = 0x2950F4u;
        goto label_2950f4;
    }
    ctx->pc = 0x2950ECu;
    SET_GPR_U32(ctx, 31, 0x2950F4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x2950ECu, 0x2950F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950F4u;
label_2950f4:
    // 0x2950f4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2950f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2950f8:
    // 0x2950f8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2950f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2950fc:
    // 0x2950fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2950fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_295100:
    // 0x295100: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x295100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_295104:
    // 0x295104: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x295104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_295108:
    // 0x295108: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x295108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_29510c:
    // 0x29510c: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x29510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_295110:
    // 0x295110: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x295110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_295114:
    // 0x295114: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x295114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295118:
    // 0x295118: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x295118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29511c:
    // 0x29511c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29511cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_295120:
    // 0x295120: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x295120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_295124:
    // 0x295124: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x295124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_295128:
    // 0x295128: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x295128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_29512c:
    // 0x29512c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x29512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_295130:
    // 0x295130: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x295130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_295134:
    // 0x295134: 0xc085538  jal         func_2154E0
label_295138:
    if (ctx->pc == 0x295138u) {
        ctx->pc = 0x29513Cu;
        goto label_29513c;
    }
    ctx->pc = 0x295134u;
    SET_GPR_U32(ctx, 31, 0x29513Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x295134u, 0x29513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29513Cu;
label_29513c:
    // 0x29513c: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x29513cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_295140:
    // 0x295140: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x295140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_295144:
    // 0x295144: 0x8fa5026c  lw          $a1, 0x26C($sp)
    ctx->pc = 0x295144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_295148:
    // 0x295148: 0xc090f80  jal         func_243E00
label_29514c:
    if (ctx->pc == 0x29514Cu) {
        ctx->pc = 0x295150u;
        goto label_295150;
    }
    ctx->pc = 0x295148u;
    SET_GPR_U32(ctx, 31, 0x295150u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x295148u, 0x295150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295150u;
label_295150:
    // 0x295150: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x295150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_295154:
    // 0x295154: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x295154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_295158:
    // 0x295158: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x295158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29515c:
    // 0x29515c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295160:
    // 0x295160: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x295160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295164:
    // 0x295164: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x295164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_295168:
    // 0x295168: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x295168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_29516c:
    // 0x29516c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29516cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_295170:
    // 0x295170: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x295170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_295174:
    // 0x295174: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_295178:
    // 0x295178: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x295178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_29517c:
    // 0x29517c: 0xc085538  jal         func_2154E0
label_295180:
    if (ctx->pc == 0x295180u) {
        ctx->pc = 0x295184u;
        goto label_295184;
    }
    ctx->pc = 0x29517Cu;
    SET_GPR_U32(ctx, 31, 0x295184u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29517Cu, 0x295184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295184u;
label_295184:
    // 0x295184: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x295184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_295188:
    // 0x295188: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x295188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_29518c:
    // 0x29518c: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x29518cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_295190:
    // 0x295190: 0xc090f80  jal         func_243E00
label_295194:
    if (ctx->pc == 0x295194u) {
        ctx->pc = 0x295198u;
        goto label_295198;
    }
    ctx->pc = 0x295190u;
    SET_GPR_U32(ctx, 31, 0x295198u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x295190u, 0x295198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295198u;
label_295198:
    // 0x295198: 0x27a300e8  addiu       $v1, $sp, 0xE8
    ctx->pc = 0x295198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_29519c:
    // 0x29519c: 0x27a201a8  addiu       $v0, $sp, 0x1A8
    ctx->pc = 0x29519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_2951a0:
    // 0x2951a0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2951a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2951a4:
    // 0x2951a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2951a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2951a8:
    // 0x2951a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2951a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2951ac:
    // 0x2951ac: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2951acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2951b0:
    // 0x2951b0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2951b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2951b4:
    // 0x2951b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2951b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2951b8:
    // 0x2951b8: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x2951b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2951bc:
    // 0x2951bc: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2951bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2951c0:
    // 0x2951c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2951c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2951c4:
    // 0x2951c4: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x2951c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2951c8:
    // 0x2951c8: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x2951c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2951cc:
    // 0x2951cc: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2951ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2951d0:
    // 0x2951d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2951d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2951d4:
    // 0x2951d4: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x2951d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_2951d8:
    // 0x2951d8: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x2951d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2951dc:
    // 0x2951dc: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2951dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2951e0:
    // 0x2951e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2951e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2951e4:
    // 0x2951e4: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2951e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2951e8:
    // 0x2951e8: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x2951e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2951ec:
    // 0x2951ec: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2951ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2951f0:
    // 0x2951f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2951f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2951f4:
    // 0x2951f4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2951f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2951f8:
    // 0x2951f8: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x2951f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2951fc:
    // 0x2951fc: 0xc7a001ac  lwc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2951fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295200:
    // 0x295200: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295200u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295204:
    // 0x295204: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x295204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_295208:
    // 0x295208: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x295208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29520c:
    // 0x29520c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x29520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295210:
    // 0x295210: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295214:
    // 0x295214: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x295214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_295218:
    // 0x295218: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x295218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_29521c:
    // 0x29521c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x29521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_295220:
    // 0x295220: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x295220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_295224:
    // 0x295224: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x295224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_295228:
    // 0x295228: 0xc085538  jal         func_2154E0
label_29522c:
    if (ctx->pc == 0x29522Cu) {
        ctx->pc = 0x295230u;
        goto label_295230;
    }
    ctx->pc = 0x295228u;
    SET_GPR_U32(ctx, 31, 0x295230u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x295228u, 0x295230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295230u;
label_295230:
    // 0x295230: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x295230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_295234:
    // 0x295234: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x295234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_295238:
    // 0x295238: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x295238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_29523c:
    // 0x29523c: 0xc090f80  jal         func_243E00
label_295240:
    if (ctx->pc == 0x295240u) {
        ctx->pc = 0x295244u;
        goto label_295244;
    }
    ctx->pc = 0x29523Cu;
    SET_GPR_U32(ctx, 31, 0x295244u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x29523Cu, 0x295244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295244u;
label_295244:
    // 0x295244: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x295244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_295248:
    // 0x295248: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x295248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_29524c:
    // 0x29524c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x29524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_295250:
    // 0x295250: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x295250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295254:
    // 0x295254: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x295254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295258:
    // 0x295258: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x295258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29525c:
    // 0x29525c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29525cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_295260:
    // 0x295260: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x295260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_295264:
    // 0x295264: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x295264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295268:
    // 0x295268: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x295268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29526c:
    // 0x29526c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29526cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295270:
    // 0x295270: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x295270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_295274:
    // 0x295274: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x295274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295278:
    // 0x295278: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x295278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29527c:
    // 0x29527c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29527cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295280:
    // 0x295280: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x295280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_295284:
    // 0x295284: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x295284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295288:
    // 0x295288: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x295288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29528c:
    // 0x29528c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29528cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295290:
    // 0x295290: 0x0  nop
    ctx->pc = 0x295290u;
    // NOP
label_295294:
    // 0x295294: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295298:
    // 0x295298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29529c:
    if (ctx->pc == 0x29529Cu) {
        ctx->pc = 0x2952A0u;
        goto label_2952a0;
    }
    ctx->pc = 0x295298u;
    {
        const bool branch_taken_0x295298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295298) {
            ctx->pc = 0x2952B0u;
            goto label_2952b0;
        }
    }
    ctx->pc = 0x2952A0u;
label_2952a0:
    // 0x2952a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2952a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2952a4:
    // 0x2952a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2952a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2952a8:
    // 0x2952a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2952ac:
    if (ctx->pc == 0x2952ACu) {
        ctx->pc = 0x2952B0u;
        goto label_2952b0;
    }
    ctx->pc = 0x2952A8u;
    {
        const bool branch_taken_0x2952a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952a8) {
            ctx->pc = 0x2952C4u;
            goto label_2952c4;
        }
    }
    ctx->pc = 0x2952B0u;
label_2952b0:
    // 0x2952b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2952b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2952b4:
    // 0x2952b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2952b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2952b8:
    // 0x2952b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2952b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2952bc:
    // 0x2952bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2952bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2952c0:
    // 0x2952c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2952c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2952c4:
    // 0x2952c4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2952c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2952c8:
    // 0x2952c8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2952c8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2952cc:
    // 0x2952cc: 0x1012  mflo        $v0
    ctx->pc = 0x2952ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2952d0:
    // 0x2952d0: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x2952d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_2952d4:
    // 0x2952d4: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x2952d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2952d8:
    // 0x2952d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2952d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2952dc:
    // 0x2952dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2952dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2952e0:
    // 0x2952e0: 0x0  nop
    ctx->pc = 0x2952e0u;
    // NOP
label_2952e4:
    // 0x2952e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2952e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2952e8:
    // 0x2952e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2952ec:
    if (ctx->pc == 0x2952ECu) {
        ctx->pc = 0x2952F0u;
        goto label_2952f0;
    }
    ctx->pc = 0x2952E8u;
    {
        const bool branch_taken_0x2952e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2952e8) {
            ctx->pc = 0x295300u;
            goto label_295300;
        }
    }
    ctx->pc = 0x2952F0u;
label_2952f0:
    // 0x2952f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2952f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2952f4:
    // 0x2952f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2952f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2952f8:
    // 0x2952f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2952fc:
    if (ctx->pc == 0x2952FCu) {
        ctx->pc = 0x295300u;
        goto label_295300;
    }
    ctx->pc = 0x2952F8u;
    {
        const bool branch_taken_0x2952f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952f8) {
            ctx->pc = 0x295314u;
            goto label_295314;
        }
    }
    ctx->pc = 0x295300u;
label_295300:
    // 0x295300: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295300u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295304:
    // 0x295304: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_295308:
    // 0x295308: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x295308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29530c:
    // 0x29530c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_295310:
    // 0x295310: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x295310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_295314:
    // 0x295314: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x295314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_295318:
    // 0x295318: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x295318u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_29531c:
    // 0x29531c: 0x1012  mflo        $v0
    ctx->pc = 0x29531cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_295320:
    // 0x295320: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x295320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
label_295324:
    // 0x295324: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x295324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295328:
    // 0x295328: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x295328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29532c:
    // 0x29532c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29532cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295330:
    // 0x295330: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x295330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_295334:
    // 0x295334: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295338:
    // 0x295338: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x295338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29533c:
    // 0x29533c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29533cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295340:
    // 0x295340: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x295340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_295344:
    // 0x295344: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x295344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295348:
    // 0x295348: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_29534c:
    // 0x29534c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29534cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_295350:
    // 0x295350: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x295350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_295354:
    // 0x295354: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x295354u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_295358:
    // 0x295358: 0x1012  mflo        $v0
    ctx->pc = 0x295358u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_29535c:
    // 0x29535c: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x29535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_295360:
    // 0x295360: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x295360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295364:
    // 0x295364: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_295368:
    // 0x295368: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x295368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29536c:
    // 0x29536c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x29536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_295370:
    // 0x295370: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x295370u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_295374:
    // 0x295374: 0x1012  mflo        $v0
    ctx->pc = 0x295374u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_295378:
    // 0x295378: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x295378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
label_29537c:
    // 0x29537c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x29537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_295380:
    // 0x295380: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x295380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_295384:
    // 0x295384: 0xc092d70  jal         func_24B5C0
label_295388:
    if (ctx->pc == 0x295388u) {
        ctx->pc = 0x29538Cu;
        goto label_29538c;
    }
    ctx->pc = 0x295384u;
    SET_GPR_U32(ctx, 31, 0x29538Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x295384u, 0x29538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29538Cu;
label_29538c:
    // 0x29538c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29538cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295390:
    // 0x295390: 0xc7a10168  lwc1        $f1, 0x168($sp)
    ctx->pc = 0x295390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295394:
    // 0x295394: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x295394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295398:
    // 0x295398: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29539c:
    // 0x29539c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x29539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2953a0:
    // 0x2953a0: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x2953a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2953a4:
    // 0x2953a4: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x2953a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2953a8:
    // 0x2953a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2953a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2953ac:
    // 0x2953ac: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2953acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_2953b0:
    // 0x2953b0: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x2953b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2953b4:
    // 0x2953b4: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x2953b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_2953b8:
    // 0x2953b8: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2953b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2953bc:
    // 0x2953bc: 0xc0ba892  jal         func_2EA248
label_2953c0:
    if (ctx->pc == 0x2953C0u) {
        ctx->pc = 0x2953C4u;
        goto label_2953c4;
    }
    ctx->pc = 0x2953BCu;
    SET_GPR_U32(ctx, 31, 0x2953C4u);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x2953BCu, 0x2953C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953C4u;
label_2953c4:
    // 0x2953c4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2953c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2953c8:
    // 0x2953c8: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x2953c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_2953cc:
    // 0x2953cc: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x2953ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_2953d0:
    // 0x2953d0: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2953d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2953d4:
    // 0x2953d4: 0xc0ba892  jal         func_2EA248
label_2953d8:
    if (ctx->pc == 0x2953D8u) {
        ctx->pc = 0x2953DCu;
        goto label_2953dc;
    }
    ctx->pc = 0x2953D4u;
    SET_GPR_U32(ctx, 31, 0x2953DCu);
    ctx->pc = 0x2EA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA248u, 0x2953D4u, 0x2953DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2953DCu;
label_2953dc:
    // 0x2953dc: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2953dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2953e0:
    // 0x2953e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2953e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2953e4:
    // 0x2953e4: 0x2f040  sll         $fp, $v0, 1
    ctx->pc = 0x2953e4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2953e8:
    // 0x2953e8: 0x2fc10065  sltiu       $at, $fp, 0x65
    ctx->pc = 0x2953e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
label_2953ec:
    // 0x2953ec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2953f0:
    if (ctx->pc == 0x2953F0u) {
        ctx->pc = 0x2953F4u;
        goto label_2953f4;
    }
    ctx->pc = 0x2953ECu;
    {
        const bool branch_taken_0x2953ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2953ec) {
            ctx->pc = 0x2953F8u;
            goto label_2953f8;
        }
    }
    ctx->pc = 0x2953F4u;
label_2953f4:
    // 0x2953f4: 0x241e0064  addiu       $fp, $zero, 0x64
    ctx->pc = 0x2953f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2953f8:
    // 0x2953f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2953f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2953fc:
    // 0x2953fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2953fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_295400:
    // 0x295400: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_295404:
    if (ctx->pc == 0x295404u) {
        ctx->pc = 0x295408u;
        goto label_295408;
    }
    ctx->pc = 0x295400u;
    {
        const bool branch_taken_0x295400 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x295400) {
            ctx->pc = 0x29541Cu;
            goto label_29541c;
        }
    }
    ctx->pc = 0x295408u;
label_295408:
    // 0x295408: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x295408u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29540c:
    // 0x29540c: 0x0  nop
    ctx->pc = 0x29540cu;
    // NOP
label_295410:
    // 0x295410: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x295410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_295414:
    // 0x295414: 0x10000008  b           . + 4 + (0x8 << 2)
label_295418:
    if (ctx->pc == 0x295418u) {
        ctx->pc = 0x29541Cu;
        goto label_29541c;
    }
    ctx->pc = 0x295414u;
    {
        const bool branch_taken_0x295414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295414) {
            ctx->pc = 0x295438u;
            goto label_295438;
        }
    }
    ctx->pc = 0x29541Cu;
label_29541c:
    // 0x29541c: 0x1e1842  srl         $v1, $fp, 1
    ctx->pc = 0x29541cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_295420:
    // 0x295420: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x295420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_295424:
    // 0x295424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x295424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_295428:
    // 0x295428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x295428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29542c:
    // 0x29542c: 0x0  nop
    ctx->pc = 0x29542cu;
    // NOP
label_295430:
    // 0x295430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x295430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_295434:
    // 0x295434: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x295434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_295438:
    // 0x295438: 0x0  nop
    ctx->pc = 0x295438u;
    // NOP
label_29543c:
    // 0x29543c: 0x0  nop
    ctx->pc = 0x29543cu;
    // NOP
label_295440:
    // 0x295440: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x295440u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_295444:
    // 0x295444: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x295444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_295448:
    // 0x295448: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x295448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29544c:
    // 0x29544c: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x29544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295450:
    // 0x295450: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x295450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_295454:
    // 0x295454: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x295454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_295458:
    // 0x295458: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x295458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29545c:
    // 0x29545c: 0xc7a00250  lwc1        $f0, 0x250($sp)
    ctx->pc = 0x29545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295460:
    // 0x295460: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x295460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_295464:
    // 0x295464: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x295464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_295468:
    // 0x295468: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x295468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29546c:
    // 0x29546c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29546cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295470:
    // 0x295470: 0x0  nop
    ctx->pc = 0x295470u;
    // NOP
label_295474:
    // 0x295474: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x295474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295478:
    // 0x295478: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_29547c:
    if (ctx->pc == 0x29547Cu) {
        ctx->pc = 0x295480u;
        goto label_295480;
    }
    ctx->pc = 0x295478u;
    {
        const bool branch_taken_0x295478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295478) {
            ctx->pc = 0x295498u;
            goto label_295498;
        }
    }
    ctx->pc = 0x295480u;
label_295480:
    // 0x295480: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x295480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_295484:
    // 0x295484: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x295484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_295488:
    // 0x295488: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x295488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_29548c:
    // 0x29548c: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x29548cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_295490:
    // 0x295490: 0x10000005  b           . + 4 + (0x5 << 2)
label_295494:
    if (ctx->pc == 0x295494u) {
        ctx->pc = 0x295498u;
        goto label_295498;
    }
    ctx->pc = 0x295490u;
    {
        const bool branch_taken_0x295490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295490) {
            ctx->pc = 0x2954A8u;
            goto label_2954a8;
        }
    }
    ctx->pc = 0x295498u;
label_295498:
    // 0x295498: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x295498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_29549c:
    // 0x29549c: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x29549cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_2954a0:
    // 0x2954a0: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x2954a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
label_2954a4:
    // 0x2954a4: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x2954a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
label_2954a8:
    // 0x2954a8: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x2954a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2954ac:
    // 0x2954ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2954acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2954b0:
    // 0x2954b0: 0x0  nop
    ctx->pc = 0x2954b0u;
    // NOP
label_2954b4:
    // 0x2954b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2954b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2954b8:
    // 0x2954b8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_2954bc:
    if (ctx->pc == 0x2954BCu) {
        ctx->pc = 0x2954C0u;
        goto label_2954c0;
    }
    ctx->pc = 0x2954B8u;
    {
        const bool branch_taken_0x2954b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2954b8) {
            ctx->pc = 0x2954D8u;
            goto label_2954d8;
        }
    }
    ctx->pc = 0x2954C0u;
label_2954c0:
    // 0x2954c0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2954c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2954c4:
    // 0x2954c4: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x2954c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_2954c8:
    // 0x2954c8: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x2954c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
label_2954cc:
    // 0x2954cc: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x2954ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_2954d0:
    // 0x2954d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2954d4:
    if (ctx->pc == 0x2954D4u) {
        ctx->pc = 0x2954D8u;
        goto label_2954d8;
    }
    ctx->pc = 0x2954D0u;
    {
        const bool branch_taken_0x2954d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2954d0) {
            ctx->pc = 0x2954E8u;
            goto label_2954e8;
        }
    }
    ctx->pc = 0x2954D8u;
label_2954d8:
    // 0x2954d8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x2954d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2954dc:
    // 0x2954dc: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x2954dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_2954e0:
    // 0x2954e0: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x2954e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
label_2954e4:
    // 0x2954e4: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x2954e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_2954e8:
    // 0x2954e8: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x2954e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2954ec:
    // 0x2954ec: 0xc0c3926  jal         func_30E498
label_2954f0:
    if (ctx->pc == 0x2954F0u) {
        ctx->pc = 0x2954F4u;
        goto label_2954f4;
    }
    ctx->pc = 0x2954ECu;
    SET_GPR_U32(ctx, 31, 0x2954F4u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x2954ECu, 0x2954F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2954F4u;
label_2954f4:
    // 0x2954f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2954f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2954f8:
    // 0x2954f8: 0xc7ac0164  lwc1        $f12, 0x164($sp)
    ctx->pc = 0x2954f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2954fc:
    // 0x2954fc: 0xc0c3926  jal         func_30E498
label_295500:
    if (ctx->pc == 0x295500u) {
        ctx->pc = 0x295504u;
        goto label_295504;
    }
    ctx->pc = 0x2954FCu;
    SET_GPR_U32(ctx, 31, 0x295504u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x2954FCu, 0x295504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295504u;
label_295504:
    // 0x295504: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x295504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295508:
    // 0x295508: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29550c:
    if (ctx->pc == 0x29550Cu) {
        ctx->pc = 0x295510u;
        goto label_295510;
    }
    ctx->pc = 0x295508u;
    {
        const bool branch_taken_0x295508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295508) {
            ctx->pc = 0x295520u;
            goto label_295520;
        }
    }
    ctx->pc = 0x295510u;
label_295510:
    // 0x295510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295514:
    // 0x295514: 0xa3a202af  sb          $v0, 0x2AF($sp)
    ctx->pc = 0x295514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 687), (uint8_t)GPR_U32(ctx, 2));
label_295518:
    // 0x295518: 0x10000002  b           . + 4 + (0x2 << 2)
label_29551c:
    if (ctx->pc == 0x29551Cu) {
        ctx->pc = 0x295520u;
        goto label_295520;
    }
    ctx->pc = 0x295518u;
    {
        const bool branch_taken_0x295518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295518) {
            ctx->pc = 0x295524u;
            goto label_295524;
        }
    }
    ctx->pc = 0x295520u;
label_295520:
    // 0x295520: 0xa3a002af  sb          $zero, 0x2AF($sp)
    ctx->pc = 0x295520u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 687), (uint8_t)GPR_U32(ctx, 0));
label_295524:
    // 0x295524: 0x93a202af  lbu         $v0, 0x2AF($sp)
    ctx->pc = 0x295524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 687)));
label_295528:
    // 0x295528: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x295528u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29552c:
    // 0x29552c: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x29552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_295530:
    // 0x295530: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x295530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_295534:
    // 0x295534: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x295534u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_295538:
    // 0x295538: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x295538u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_29553c:
    // 0x29553c: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x29553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295540:
    // 0x295540: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x295540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_295544:
    // 0x295544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295548:
    // 0x295548: 0x0  nop
    ctx->pc = 0x295548u;
    // NOP
label_29554c:
    // 0x29554c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29554cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295550:
    // 0x295550: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_295554:
    if (ctx->pc == 0x295554u) {
        ctx->pc = 0x295558u;
        goto label_295558;
    }
    ctx->pc = 0x295550u;
    {
        const bool branch_taken_0x295550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295550) {
            ctx->pc = 0x295568u;
            goto label_295568;
        }
    }
    ctx->pc = 0x295558u;
label_295558:
    // 0x295558: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295558u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29555c:
    // 0x29555c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x29555cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_295560:
    // 0x295560: 0x10000006  b           . + 4 + (0x6 << 2)
label_295564:
    if (ctx->pc == 0x295564u) {
        ctx->pc = 0x295568u;
        goto label_295568;
    }
    ctx->pc = 0x295560u;
    {
        const bool branch_taken_0x295560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295560) {
            ctx->pc = 0x29557Cu;
            goto label_29557c;
        }
    }
    ctx->pc = 0x295568u;
label_295568:
    // 0x295568: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29556c:
    // 0x29556c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29556cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_295570:
    // 0x295570: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x295570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_295574:
    // 0x295574: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_295578:
    // 0x295578: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x295578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_29557c:
    // 0x29557c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x29557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_295580:
    // 0x295580: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x295580u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_295584:
    // 0x295584: 0x1012  mflo        $v0
    ctx->pc = 0x295584u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_295588:
    // 0x295588: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x295588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_29558c:
    // 0x29558c: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x29558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295590:
    // 0x295590: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x295590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_295594:
    // 0x295594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295598:
    // 0x295598: 0x0  nop
    ctx->pc = 0x295598u;
    // NOP
label_29559c:
    // 0x29559c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29559cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2955a0:
    // 0x2955a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2955a4:
    if (ctx->pc == 0x2955A4u) {
        ctx->pc = 0x2955A8u;
        goto label_2955a8;
    }
    ctx->pc = 0x2955A0u;
    {
        const bool branch_taken_0x2955a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2955a0) {
            ctx->pc = 0x2955B8u;
            goto label_2955b8;
        }
    }
    ctx->pc = 0x2955A8u;
label_2955a8:
    // 0x2955a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2955a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2955ac:
    // 0x2955ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2955acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2955b0:
    // 0x2955b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2955b4:
    if (ctx->pc == 0x2955B4u) {
        ctx->pc = 0x2955B8u;
        goto label_2955b8;
    }
    ctx->pc = 0x2955B0u;
    {
        const bool branch_taken_0x2955b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2955b0) {
            ctx->pc = 0x2955CCu;
            goto label_2955cc;
        }
    }
    ctx->pc = 0x2955B8u;
label_2955b8:
    // 0x2955b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2955b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2955bc:
    // 0x2955bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2955bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2955c0:
    // 0x2955c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2955c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2955c4:
    // 0x2955c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2955c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2955c8:
    // 0x2955c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2955c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2955cc:
    // 0x2955cc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2955ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2955d0:
    // 0x2955d0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2955d0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2955d4:
    // 0x2955d4: 0x1012  mflo        $v0
    ctx->pc = 0x2955d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2955d8:
    // 0x2955d8: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x2955d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_2955dc:
    // 0x2955dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2955dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2955e0:
    // 0x2955e0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2955e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2955e4:
    // 0x2955e4: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x2955e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
label_2955e8:
    // 0x2955e8: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x2955e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
label_2955ec:
    // 0x2955ec: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_2955f0:
    if (ctx->pc == 0x2955F0u) {
        ctx->pc = 0x2955F4u;
        goto label_2955f4;
    }
    ctx->pc = 0x2955ECu;
    {
        const bool branch_taken_0x2955ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2955ec) {
            ctx->pc = 0x2958B4u;
            goto label_2958b4;
        }
    }
    ctx->pc = 0x2955F4u;
label_2955f4:
    // 0x2955f4: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x2955f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2955f8:
    // 0x2955f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2955f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2955fc:
    // 0x2955fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2955fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295600:
    // 0x295600: 0x0  nop
    ctx->pc = 0x295600u;
    // NOP
label_295604:
    // 0x295604: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295608:
    // 0x295608: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_29560c:
    if (ctx->pc == 0x29560Cu) {
        ctx->pc = 0x295610u;
        goto label_295610;
    }
    ctx->pc = 0x295608u;
    {
        const bool branch_taken_0x295608 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295608) {
            ctx->pc = 0x295620u;
            goto label_295620;
        }
    }
    ctx->pc = 0x295610u;
label_295610:
    // 0x295610: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_295614:
    // 0x295614: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x295614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_295618:
    // 0x295618: 0x10000006  b           . + 4 + (0x6 << 2)
label_29561c:
    if (ctx->pc == 0x29561Cu) {
        ctx->pc = 0x295620u;
        goto label_295620;
    }
    ctx->pc = 0x295618u;
    {
        const bool branch_taken_0x295618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295618) {
            ctx->pc = 0x295634u;
            goto label_295634;
        }
    }
    ctx->pc = 0x295620u;
label_295620:
    // 0x295620: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x295620u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295624:
    // 0x295624: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_295628:
    // 0x295628: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x295628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_29562c:
    // 0x29562c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29562cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_295630:
    // 0x295630: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x295630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_295634:
    // 0x295634: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x295634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_295638:
    // 0x295638: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x295638u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_29563c:
    // 0x29563c: 0x8812  mflo        $s1
    ctx->pc = 0x29563cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_295640:
    // 0x295640: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x295640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295644:
    // 0x295644: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x295644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_295648:
    // 0x295648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x295648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29564c:
    // 0x29564c: 0x0  nop
    ctx->pc = 0x29564cu;
    // NOP
label_295650:
    // 0x295650: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x295650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295654:
    // 0x295654: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_295658:
    if (ctx->pc == 0x295658u) {
        ctx->pc = 0x29565Cu;
        goto label_29565c;
    }
    ctx->pc = 0x295654u;
    {
        const bool branch_taken_0x295654 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295654) {
            ctx->pc = 0x29566Cu;
            goto label_29566c;
        }
    }
    ctx->pc = 0x29565Cu;
label_29565c:
    // 0x29565c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29565cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_295660:
    // 0x295660: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x295660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_295664:
    // 0x295664: 0x10000006  b           . + 4 + (0x6 << 2)
label_295668:
    if (ctx->pc == 0x295668u) {
        ctx->pc = 0x29566Cu;
        goto label_29566c;
    }
    ctx->pc = 0x295664u;
    {
        const bool branch_taken_0x295664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295664) {
            ctx->pc = 0x295680u;
            goto label_295680;
        }
    }
    ctx->pc = 0x29566Cu;
label_29566c:
    // 0x29566c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29566cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295670:
    // 0x295670: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_295674:
    // 0x295674: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x295674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_295678:
    // 0x295678: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x295678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_29567c:
    // 0x29567c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29567cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_295680:
    // 0x295680: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x295680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_295684:
    // 0x295684: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x295684u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_295688:
    // 0x295688: 0x8012  mflo        $s0
    ctx->pc = 0x295688u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_29568c:
    // 0x29568c: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x29568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_295690:
    // 0x295690: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_295694:
    if (ctx->pc == 0x295694u) {
        ctx->pc = 0x295698u;
        goto label_295698;
    }
    ctx->pc = 0x295690u;
    {
        const bool branch_taken_0x295690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x295690) {
            ctx->pc = 0x2956B4u;
            goto label_2956b4;
        }
    }
    ctx->pc = 0x295698u;
label_295698:
    // 0x295698: 0xafb10234  sw          $s1, 0x234($sp)
    ctx->pc = 0x295698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 17));
label_29569c:
    // 0x29569c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2956a0:
    // 0x2956a0: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2956a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2956a4:
    // 0x2956a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2956a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2956a8:
    // 0x2956a8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2956a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2956ac:
    // 0x2956ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_2956b0:
    if (ctx->pc == 0x2956B0u) {
        ctx->pc = 0x2956B4u;
        goto label_2956b4;
    }
    ctx->pc = 0x2956ACu;
    {
        const bool branch_taken_0x2956ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2956ac) {
            ctx->pc = 0x2956DCu;
            goto label_2956dc;
        }
    }
    ctx->pc = 0x2956B4u;
label_2956b4:
    // 0x2956b4: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2956b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_2956b8:
    // 0x2956b8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_2956bc:
    if (ctx->pc == 0x2956BCu) {
        ctx->pc = 0x2956C0u;
        goto label_2956c0;
    }
    ctx->pc = 0x2956B8u;
    {
        const bool branch_taken_0x2956b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2956b8) {
            ctx->pc = 0x2956D8u;
            goto label_2956d8;
        }
    }
    ctx->pc = 0x2956C0u;
label_2956c0:
    // 0x2956c0: 0xafb00230  sw          $s0, 0x230($sp)
    ctx->pc = 0x2956c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 16));
label_2956c4:
    // 0x2956c4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2956c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2956c8:
    // 0x2956c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2956c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2956cc:
    // 0x2956cc: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2956ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2956d0:
    // 0x2956d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2956d4:
    if (ctx->pc == 0x2956D4u) {
        ctx->pc = 0x2956D8u;
        goto label_2956d8;
    }
    ctx->pc = 0x2956D0u;
    {
        const bool branch_taken_0x2956d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2956d0) {
            ctx->pc = 0x2956DCu;
            goto label_2956dc;
        }
    }
    ctx->pc = 0x2956D8u;
label_2956d8:
    // 0x2956d8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2956d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2956dc:
    // 0x2956dc: 0x12c0006a  beqz        $s6, . + 4 + (0x6A << 2)
label_2956e0:
    if (ctx->pc == 0x2956E0u) {
        ctx->pc = 0x2956E4u;
        goto label_2956e4;
    }
    ctx->pc = 0x2956DCu;
    {
        const bool branch_taken_0x2956dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2956dc) {
            ctx->pc = 0x295888u;
            goto label_295888;
        }
    }
    ctx->pc = 0x2956E4u;
label_2956e4:
    // 0x2956e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2956e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2956e8:
    // 0x2956e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2956e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2956ec:
    // 0x2956ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2956ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2956f0:
    // 0x2956f0: 0xc04d328  jal         func_134CA0
label_2956f4:
    if (ctx->pc == 0x2956F4u) {
        ctx->pc = 0x2956F8u;
        goto label_2956f8;
    }
    ctx->pc = 0x2956F0u;
    SET_GPR_U32(ctx, 31, 0x2956F8u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x2956F0u, 0x2956F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2956F8u;
label_2956f8:
    // 0x2956f8: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2956f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_2956fc:
    // 0x2956fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2956fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295700:
    // 0x295700: 0x0  nop
    ctx->pc = 0x295700u;
    // NOP
label_295704:
    // 0x295704: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x295704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
label_295708:
    // 0x295708: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x295708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_29570c:
    // 0x29570c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_295710:
    if (ctx->pc == 0x295710u) {
        ctx->pc = 0x295714u;
        goto label_295714;
    }
    ctx->pc = 0x29570Cu;
    {
        const bool branch_taken_0x29570c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29570c) {
            ctx->pc = 0x295744u;
            goto label_295744;
        }
    }
    ctx->pc = 0x295714u;
label_295714:
    // 0x295714: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x295714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_295718:
    // 0x295718: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x295718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29571c:
    // 0x29571c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_295720:
    if (ctx->pc == 0x295720u) {
        ctx->pc = 0x295724u;
        goto label_295724;
    }
    ctx->pc = 0x29571Cu;
    {
        const bool branch_taken_0x29571c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29571c) {
            ctx->pc = 0x295744u;
            goto label_295744;
        }
    }
    ctx->pc = 0x295724u;
label_295724:
    // 0x295724: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x295724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_295728:
    // 0x295728: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x295728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29572c:
    // 0x29572c: 0xc094d24  jal         func_253490
label_295730:
    if (ctx->pc == 0x295730u) {
        ctx->pc = 0x295734u;
        goto label_295734;
    }
    ctx->pc = 0x29572Cu;
    SET_GPR_U32(ctx, 31, 0x295734u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x29572Cu, 0x295734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295734u;
label_295734:
    // 0x295734: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x295734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_295738:
    // 0x295738: 0xc04d634  jal         func_1358D0
label_29573c:
    if (ctx->pc == 0x29573Cu) {
        ctx->pc = 0x295740u;
        goto label_295740;
    }
    ctx->pc = 0x295738u;
    SET_GPR_U32(ctx, 31, 0x295740u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x295738u, 0x295740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295740u;
label_295740:
    // 0x295740: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x295740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
label_295744:
    // 0x295744: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
label_295748:
    if (ctx->pc == 0x295748u) {
        ctx->pc = 0x29574Cu;
        goto label_29574c;
    }
    ctx->pc = 0x295744u;
    {
        const bool branch_taken_0x295744 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x295744) {
            ctx->pc = 0x295784u;
            goto label_295784;
        }
    }
    ctx->pc = 0x29574Cu;
label_29574c:
    // 0x29574c: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x29574cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_295750:
    // 0x295750: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_295754:
    // 0x295754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x295754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_295758:
    // 0x295758: 0xc04d328  jal         func_134CA0
label_29575c:
    if (ctx->pc == 0x29575Cu) {
        ctx->pc = 0x295760u;
        goto label_295760;
    }
    ctx->pc = 0x295758u;
    SET_GPR_U32(ctx, 31, 0x295760u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x295758u, 0x295760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295760u;
label_295760:
    // 0x295760: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x295760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_295764:
    // 0x295764: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x295764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_295768:
    // 0x295768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29576c:
    // 0x29576c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29576cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_295770:
    // 0x295770: 0xc04d328  jal         func_134CA0
label_295774:
    if (ctx->pc == 0x295774u) {
        ctx->pc = 0x295778u;
        goto label_295778;
    }
    ctx->pc = 0x295770u;
    SET_GPR_U32(ctx, 31, 0x295778u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x295770u, 0x295778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295778u;
label_295778:
    // 0x295778: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x295778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_29577c:
    // 0x29577c: 0x1000000d  b           . + 4 + (0xD << 2)
label_295780:
    if (ctx->pc == 0x295780u) {
        ctx->pc = 0x295784u;
        goto label_295784;
    }
    ctx->pc = 0x29577Cu;
    {
        const bool branch_taken_0x29577c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29577c) {
            ctx->pc = 0x2957B4u;
            goto label_2957b4;
        }
    }
    ctx->pc = 0x295784u;
label_295784:
    // 0x295784: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_295788:
    // 0x295788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x295788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29578c:
    // 0x29578c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29578cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295790:
    // 0x295790: 0xc04d328  jal         func_134CA0
label_295794:
    if (ctx->pc == 0x295794u) {
        ctx->pc = 0x295798u;
        goto label_295798;
    }
    ctx->pc = 0x295790u;
    SET_GPR_U32(ctx, 31, 0x295798u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x295790u, 0x295798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295798u;
label_295798:
    // 0x295798: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x295798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_29579c:
    // 0x29579c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x29579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2957a0:
    // 0x2957a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2957a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2957a4:
    // 0x2957a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2957a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2957a8:
    // 0x2957a8: 0xc04d328  jal         func_134CA0
label_2957ac:
    if (ctx->pc == 0x2957ACu) {
        ctx->pc = 0x2957B0u;
        goto label_2957b0;
    }
    ctx->pc = 0x2957A8u;
    SET_GPR_U32(ctx, 31, 0x2957B0u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x2957A8u, 0x2957B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2957B0u;
label_2957b0:
    // 0x2957b0: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x2957b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_2957b4:
    // 0x2957b4: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x2957b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
label_2957b8:
    // 0x2957b8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
label_2957bc:
    if (ctx->pc == 0x2957BCu) {
        ctx->pc = 0x2957C0u;
        goto label_2957c0;
    }
    ctx->pc = 0x2957B8u;
    {
        const bool branch_taken_0x2957b8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2957b8) {
            ctx->pc = 0x2957D8u;
            goto label_2957d8;
        }
    }
    ctx->pc = 0x2957C0u;
label_2957c0:
    // 0x2957c0: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x2957c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_2957c4:
    // 0x2957c4: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x2957c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_2957c8:
    // 0x2957c8: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x2957c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_2957cc:
    // 0x2957cc: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x2957ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_2957d0:
    // 0x2957d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2957d4:
    if (ctx->pc == 0x2957D4u) {
        ctx->pc = 0x2957D8u;
        goto label_2957d8;
    }
    ctx->pc = 0x2957D0u;
    {
        const bool branch_taken_0x2957d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2957d0) {
            ctx->pc = 0x2957E8u;
            goto label_2957e8;
        }
    }
    ctx->pc = 0x2957D8u;
label_2957d8:
    // 0x2957d8: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x2957d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_2957dc:
    // 0x2957dc: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x2957dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_2957e0:
    // 0x2957e0: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x2957e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_2957e4:
    // 0x2957e4: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x2957e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_2957e8:
    // 0x2957e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2957e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2957ec:
    // 0x2957ec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2957f0:
    if (ctx->pc == 0x2957F0u) {
        ctx->pc = 0x2957F4u;
        goto label_2957f4;
    }
    ctx->pc = 0x2957ECu;
    {
        const bool branch_taken_0x2957ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2957ec) {
            ctx->pc = 0x295858u;
            goto label_295858;
        }
    }
    ctx->pc = 0x2957F4u;
label_2957f4:
    // 0x2957f4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x2957f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2957f8:
    // 0x2957f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2957f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2957fc:
    // 0x2957fc: 0x8c420148  lw          $v0, 0x148($v0)
    ctx->pc = 0x2957fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_295800:
    // 0x295800: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_295804:
    if (ctx->pc == 0x295804u) {
        ctx->pc = 0x295808u;
        goto label_295808;
    }
    ctx->pc = 0x295800u;
    {
        const bool branch_taken_0x295800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295800) {
            ctx->pc = 0x295854u;
            goto label_295854;
        }
    }
    ctx->pc = 0x295808u;
label_295808:
    // 0x295808: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x295808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_29580c:
    // 0x29580c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_295810:
    // 0x295810: 0x8c420148  lw          $v0, 0x148($v0)
    ctx->pc = 0x295810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_295814:
    // 0x295814: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x295814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_295818:
    // 0x295818: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x295818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_29581c:
    // 0x29581c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_295820:
    // 0x295820: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_295824:
    if (ctx->pc == 0x295824u) {
        ctx->pc = 0x295828u;
        goto label_295828;
    }
    ctx->pc = 0x295820u;
    {
        const bool branch_taken_0x295820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295820) {
            ctx->pc = 0x295864u;
            goto label_295864;
        }
    }
    ctx->pc = 0x295828u;
label_295828:
    // 0x295828: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x295828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_29582c:
    // 0x29582c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_295830:
    // 0x295830: 0x8c420148  lw          $v0, 0x148($v0)
    ctx->pc = 0x295830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_295834:
    // 0x295834: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x295834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_295838:
    // 0x295838: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x295838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_29583c:
    // 0x29583c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29583cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_295840:
    // 0x295840: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_295844:
    if (ctx->pc == 0x295844u) {
        ctx->pc = 0x295848u;
        goto label_295848;
    }
    ctx->pc = 0x295840u;
    {
        const bool branch_taken_0x295840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295840) {
            ctx->pc = 0x295854u;
            goto label_295854;
        }
    }
    ctx->pc = 0x295848u;
label_295848:
    // 0x295848: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x295848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_29584c:
    // 0x29584c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_295850:
    // 0x295850: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x295850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_295854:
    // 0x295854: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x295854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_295858:
    // 0x295858: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x295858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_29585c:
    // 0x29585c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_295860:
    if (ctx->pc == 0x295860u) {
        ctx->pc = 0x295864u;
        goto label_295864;
    }
    ctx->pc = 0x29585Cu;
    {
        const bool branch_taken_0x29585c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29585c) {
            ctx->pc = 0x2957F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2957f4;
        }
    }
    ctx->pc = 0x295864u;
label_295864:
    // 0x295864: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x295864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_295868:
    // 0x295868: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x295868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29586c:
    // 0x29586c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_295870:
    if (ctx->pc == 0x295870u) {
        ctx->pc = 0x295874u;
        goto label_295874;
    }
    ctx->pc = 0x29586Cu;
    {
        const bool branch_taken_0x29586c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29586c) {
            ctx->pc = 0x295888u;
            goto label_295888;
        }
    }
    ctx->pc = 0x295874u;
label_295874:
    // 0x295874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295878:
    // 0x295878: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x295878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_29587c:
    // 0x29587c: 0xa04300b0  sb          $v1, 0xB0($v0)
    ctx->pc = 0x29587cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 3));
label_295880:
    // 0x295880: 0x10000010  b           . + 4 + (0x10 << 2)
label_295884:
    if (ctx->pc == 0x295884u) {
        ctx->pc = 0x295888u;
        goto label_295888;
    }
    ctx->pc = 0x295880u;
    {
        const bool branch_taken_0x295880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295880) {
            ctx->pc = 0x2958C4u;
            goto label_2958c4;
        }
    }
    ctx->pc = 0x295888u;
label_295888:
    // 0x295888: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x295888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29588c:
    // 0x29588c: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x29588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295890:
    // 0x295890: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x295890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_295894:
    // 0x295894: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x295894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_295898:
    // 0x295898: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x295898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29589c:
    // 0x29589c: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x29589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2958a0:
    // 0x2958a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2958a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2958a4:
    // 0x2958a4: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2958a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_2958a8:
    // 0x2958a8: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x2958a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_2958ac:
    // 0x2958ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2958acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2958b0:
    // 0x2958b0: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x2958b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
label_2958b4:
    // 0x2958b4: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x2958b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_2958b8:
    // 0x2958b8: 0x7e182b  sltu        $v1, $v1, $fp
    ctx->pc = 0x2958b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_2958bc:
    // 0x2958bc: 0x1460ff4d  bnez        $v1, . + 4 + (-0xB3 << 2)
label_2958c0:
    if (ctx->pc == 0x2958C0u) {
        ctx->pc = 0x2958C4u;
        goto label_2958c4;
    }
    ctx->pc = 0x2958BCu;
    {
        const bool branch_taken_0x2958bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2958bc) {
            ctx->pc = 0x2955F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2955f4;
        }
    }
    ctx->pc = 0x2958C4u;
label_2958c4:
    // 0x2958c4: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x2958c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_2958c8:
    // 0x2958c8: 0x904200b0  lbu         $v0, 0xB0($v0)
    ctx->pc = 0x2958c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 176)));
label_2958cc:
    // 0x2958cc: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_2958d0:
    if (ctx->pc == 0x2958D0u) {
        ctx->pc = 0x2958D4u;
        goto label_2958d4;
    }
    ctx->pc = 0x2958CCu;
    {
        const bool branch_taken_0x2958cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2958cc) {
            ctx->pc = 0x295B60u;
            goto label_295b60;
        }
    }
    ctx->pc = 0x2958D4u;
label_2958d4:
    // 0x2958d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2958d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2958d8:
    // 0x2958d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2958d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2958dc:
    // 0x2958dc: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_2958e0:
    if (ctx->pc == 0x2958E0u) {
        ctx->pc = 0x2958E4u;
        goto label_2958e4;
    }
    ctx->pc = 0x2958DCu;
    {
        const bool branch_taken_0x2958dc = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2958dc) {
            ctx->pc = 0x2958F8u;
            goto label_2958f8;
        }
    }
    ctx->pc = 0x2958E4u;
label_2958e4:
    // 0x2958e4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2958e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2958e8:
    // 0x2958e8: 0x0  nop
    ctx->pc = 0x2958e8u;
    // NOP
label_2958ec:
    // 0x2958ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2958ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2958f0:
    // 0x2958f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2958f4:
    if (ctx->pc == 0x2958F4u) {
        ctx->pc = 0x2958F8u;
        goto label_2958f8;
    }
    ctx->pc = 0x2958F0u;
    {
        const bool branch_taken_0x2958f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2958f0) {
            ctx->pc = 0x295914u;
            goto label_295914;
        }
    }
    ctx->pc = 0x2958F8u;
label_2958f8:
    // 0x2958f8: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x2958f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_2958fc:
    // 0x2958fc: 0x32250001  andi        $a1, $s1, 0x1
    ctx->pc = 0x2958fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_295900:
    // 0x295900: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x295900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_295904:
    // 0x295904: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x295904u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295908:
    // 0x295908: 0x0  nop
    ctx->pc = 0x295908u;
    // NOP
label_29590c:
    // 0x29590c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29590cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_295910:
    // 0x295910: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x295910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_295914:
    // 0x295914: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x295914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_295918:
    // 0x295918: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x295918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_29591c:
    // 0x29591c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29591cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295920:
    // 0x295920: 0x0  nop
    ctx->pc = 0x295920u;
    // NOP
label_295924:
    // 0x295924: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x295924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_295928:
    // 0x295928: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x295928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_29592c:
    // 0x29592c: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x29592cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295930:
    // 0x295930: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x295930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_295934:
    // 0x295934: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x295934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_295938:
    // 0x295938: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x295938u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29593c:
    // 0x29593c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_295940:
    if (ctx->pc == 0x295940u) {
        ctx->pc = 0x295944u;
        goto label_295944;
    }
    ctx->pc = 0x29593Cu;
    {
        const bool branch_taken_0x29593c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x29593c) {
            ctx->pc = 0x295958u;
            goto label_295958;
        }
    }
    ctx->pc = 0x295944u;
label_295944:
    // 0x295944: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x295944u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295948:
    // 0x295948: 0x0  nop
    ctx->pc = 0x295948u;
    // NOP
label_29594c:
    // 0x29594c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29594cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_295950:
    // 0x295950: 0x10000008  b           . + 4 + (0x8 << 2)
label_295954:
    if (ctx->pc == 0x295954u) {
        ctx->pc = 0x295958u;
        goto label_295958;
    }
    ctx->pc = 0x295950u;
    {
        const bool branch_taken_0x295950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295950) {
            ctx->pc = 0x295974u;
            goto label_295974;
        }
    }
    ctx->pc = 0x295958u;
label_295958:
    // 0x295958: 0x102842  srl         $a1, $s0, 1
    ctx->pc = 0x295958u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_29595c:
    // 0x29595c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x29595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_295960:
    // 0x295960: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x295960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_295964:
    // 0x295964: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x295964u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295968:
    // 0x295968: 0x0  nop
    ctx->pc = 0x295968u;
    // NOP
label_29596c:
    // 0x29596c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29596cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_295970:
    // 0x295970: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x295970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_295974:
    // 0x295974: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x295974u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_295978:
    // 0x295978: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x295978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_29597c:
    // 0x29597c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29597cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295980:
    // 0x295980: 0x0  nop
    ctx->pc = 0x295980u;
    // NOP
label_295984:
    // 0x295984: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x295984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_295988:
    // 0x295988: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x295988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_29598c:
    // 0x29598c: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x29598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295990:
    // 0x295990: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x295990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_295994:
    // 0x295994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x295994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295998:
    // 0x295998: 0x0  nop
    ctx->pc = 0x295998u;
    // NOP
label_29599c:
    // 0x29599c: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x29599cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_2959a0:
    // 0x2959a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2959a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2959a4:
    // 0x2959a4: 0x0  nop
    ctx->pc = 0x2959a4u;
    // NOP
label_2959a8:
    // 0x2959a8: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2959a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_2959ac:
    // 0x2959ac: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x2959acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2959b0:
    // 0x2959b0: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2959b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2959b4:
    // 0x2959b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2959b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2959b8:
    // 0x2959b8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2959b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_2959bc:
    // 0x2959bc: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x2959bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2959c0:
    // 0x2959c0: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2959c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2959c4:
    // 0x2959c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2959c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2959c8:
    // 0x2959c8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2959c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_2959cc:
    // 0x2959cc: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x2959ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2959d0:
    // 0x2959d0: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2959d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2959d4:
    // 0x2959d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2959d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2959d8:
    // 0x2959d8: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2959d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2959dc:
    // 0x2959dc: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x2959dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2959e0:
    // 0x2959e0: 0xc104d24  jal         func_413490
label_2959e4:
    if (ctx->pc == 0x2959E4u) {
        ctx->pc = 0x2959E8u;
        goto label_2959e8;
    }
    ctx->pc = 0x2959E0u;
    SET_GPR_U32(ctx, 31, 0x2959E8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2959E0u, 0x2959E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2959E8u;
label_2959e8:
    // 0x2959e8: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x2959e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_2959ec:
    // 0x2959ec: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x2959ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2959f0:
    // 0x2959f0: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2959f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2959f4:
    // 0x2959f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2959f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2959f8:
    // 0x2959f8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2959f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_2959fc:
    // 0x2959fc: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x2959fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295a00:
    // 0x295a00: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x295a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a04:
    // 0x295a04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295a08:
    // 0x295a08: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x295a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_295a0c:
    // 0x295a0c: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x295a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295a10:
    // 0x295a10: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x295a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a14:
    // 0x295a14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295a14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295a18:
    // 0x295a18: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x295a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_295a1c:
    // 0x295a1c: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x295a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_295a20:
    // 0x295a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295a24:
    // 0x295a24: 0xc104d24  jal         func_413490
label_295a28:
    if (ctx->pc == 0x295A28u) {
        ctx->pc = 0x295A2Cu;
        goto label_295a2c;
    }
    ctx->pc = 0x295A24u;
    SET_GPR_U32(ctx, 31, 0x295A2Cu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x295A24u, 0x295A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A2Cu;
label_295a2c:
    // 0x295a2c: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x295a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_295a30:
    // 0x295a30: 0xc7a1021c  lwc1        $f1, 0x21C($sp)
    ctx->pc = 0x295a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295a34:
    // 0x295a34: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x295a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a38:
    // 0x295a38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x295a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_295a3c:
    // 0x295a3c: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x295a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a40:
    // 0x295a40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x295a40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_295a44:
    // 0x295a44: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x295a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_295a48:
    // 0x295a48: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x295a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_295a4c:
    // 0x295a4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x295a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_295a50:
    // 0x295a50: 0xc7a0022c  lwc1        $f0, 0x22C($sp)
    ctx->pc = 0x295a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a54:
    // 0x295a54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x295a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_295a58:
    // 0x295a58: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x295a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_295a5c:
    // 0x295a5c: 0xc7a10210  lwc1        $f1, 0x210($sp)
    ctx->pc = 0x295a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295a60:
    // 0x295a60: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x295a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a64:
    // 0x295a64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x295a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295a68:
    // 0x295a68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_295a6c:
    if (ctx->pc == 0x295A6Cu) {
        ctx->pc = 0x295A70u;
        goto label_295a70;
    }
    ctx->pc = 0x295A68u;
    {
        const bool branch_taken_0x295a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x295a68) {
            ctx->pc = 0x295A80u;
            goto label_295a80;
        }
    }
    ctx->pc = 0x295A70u;
label_295a70:
    // 0x295a70: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x295a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_295a74:
    // 0x295a74: 0xa08000b0  sb          $zero, 0xB0($a0)
    ctx->pc = 0x295a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 176), (uint8_t)GPR_U32(ctx, 0));
label_295a78:
    // 0x295a78: 0x10000039  b           . + 4 + (0x39 << 2)
label_295a7c:
    if (ctx->pc == 0x295A7Cu) {
        ctx->pc = 0x295A80u;
        goto label_295a80;
    }
    ctx->pc = 0x295A78u;
    {
        const bool branch_taken_0x295a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295a78) {
            ctx->pc = 0x295B60u;
            goto label_295b60;
        }
    }
    ctx->pc = 0x295A80u;
label_295a80:
    // 0x295a80: 0xc7a1020c  lwc1        $f1, 0x20C($sp)
    ctx->pc = 0x295a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295a84:
    // 0x295a84: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x295a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a88:
    // 0x295a88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295a8c:
    // 0x295a8c: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x295a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_295a90:
    // 0x295a90: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x295a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a94:
    // 0x295a94: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x295a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_295a98:
    // 0x295a98: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x295a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295a9c:
    // 0x295a9c: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x295a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_295aa0:
    // 0x295aa0: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x295aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295aa4:
    // 0x295aa4: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x295aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295aa8:
    // 0x295aa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295aa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295aac:
    // 0x295aac: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x295aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_295ab0:
    // 0x295ab0: 0xc7a101cc  lwc1        $f1, 0x1CC($sp)
    ctx->pc = 0x295ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295ab4:
    // 0x295ab4: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x295ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295ab8:
    // 0x295ab8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295abc:
    // 0x295abc: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x295abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_295ac0:
    // 0x295ac0: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295ac4:
    // 0x295ac4: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x295ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295ac8:
    // 0x295ac8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295ac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295acc:
    // 0x295acc: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x295accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_295ad0:
    // 0x295ad0: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x295ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_295ad4:
    // 0x295ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295ad8:
    // 0x295ad8: 0xc104d24  jal         func_413490
label_295adc:
    if (ctx->pc == 0x295ADCu) {
        ctx->pc = 0x295AE0u;
        goto label_295ae0;
    }
    ctx->pc = 0x295AD8u;
    SET_GPR_U32(ctx, 31, 0x295AE0u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x295AD8u, 0x295AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295AE0u;
label_295ae0:
    // 0x295ae0: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x295ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_295ae4:
    // 0x295ae4: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x295ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295ae8:
    // 0x295ae8: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x295ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295aec:
    // 0x295aec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295aecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295af0:
    // 0x295af0: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x295af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_295af4:
    // 0x295af4: 0xc7a101cc  lwc1        $f1, 0x1CC($sp)
    ctx->pc = 0x295af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295af8:
    // 0x295af8: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x295af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295afc:
    // 0x295afc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295b00:
    // 0x295b00: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x295b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_295b04:
    // 0x295b04: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x295b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295b08:
    // 0x295b08: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x295b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295b0c:
    // 0x295b0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x295b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_295b10:
    // 0x295b10: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x295b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_295b14:
    // 0x295b14: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x295b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_295b18:
    // 0x295b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295b1c:
    // 0x295b1c: 0xc104d24  jal         func_413490
label_295b20:
    if (ctx->pc == 0x295B20u) {
        ctx->pc = 0x295B24u;
        goto label_295b24;
    }
    ctx->pc = 0x295B1Cu;
    SET_GPR_U32(ctx, 31, 0x295B24u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x295B1Cu, 0x295B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B24u;
label_295b24:
    // 0x295b24: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x295b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_295b28:
    // 0x295b28: 0xc7a10208  lwc1        $f1, 0x208($sp)
    ctx->pc = 0x295b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295b2c:
    // 0x295b2c: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x295b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295b30:
    // 0x295b30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x295b30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_295b34:
    // 0x295b34: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x295b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295b38:
    // 0x295b38: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x295b38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_295b3c:
    // 0x295b3c: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x295b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_295b40:
    // 0x295b40: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x295b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295b44:
    // 0x295b44: 0xc7a00284  lwc1        $f0, 0x284($sp)
    ctx->pc = 0x295b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295b48:
    // 0x295b48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x295b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_295b4c:
    // 0x295b4c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x295b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_295b50:
    // 0x295b50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_295b54:
    if (ctx->pc == 0x295B54u) {
        ctx->pc = 0x295B58u;
        goto label_295b58;
    }
    ctx->pc = 0x295B50u;
    {
        const bool branch_taken_0x295b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295b50) {
            ctx->pc = 0x295B60u;
            goto label_295b60;
        }
    }
    ctx->pc = 0x295B58u;
label_295b58:
    // 0x295b58: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x295b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_295b5c:
    // 0x295b5c: 0xa04000b0  sb          $zero, 0xB0($v0)
    ctx->pc = 0x295b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 0));
label_295b60:
    // 0x295b60: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x295b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_295b64:
    // 0x295b64: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x295b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_295b68:
    // 0x295b68: 0xc121d18  jal         func_487460
label_295b6c:
    if (ctx->pc == 0x295B6Cu) {
        ctx->pc = 0x295B70u;
        goto label_295b70;
    }
    ctx->pc = 0x295B68u;
    SET_GPR_U32(ctx, 31, 0x295B70u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x295B68u, 0x295B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B70u;
label_295b70:
    // 0x295b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295b74:
    // 0x295b74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x295b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295b78:
    // 0x295b78: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x295b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_295b7c:
    // 0x295b7c: 0x904200b0  lbu         $v0, 0xB0($v0)
    ctx->pc = 0x295b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 176)));
label_295b80:
    // 0x295b80: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_295b84:
    if (ctx->pc == 0x295B84u) {
        ctx->pc = 0x295B88u;
        goto label_295b88;
    }
    ctx->pc = 0x295B80u;
    {
        const bool branch_taken_0x295b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295b80) {
            ctx->pc = 0x295BCCu;
            goto label_295bcc;
        }
    }
    ctx->pc = 0x295B88u;
label_295b88:
    // 0x295b88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295b8c:
    // 0x295b8c: 0xc0e6f1a  jal         func_39BC68
label_295b90:
    if (ctx->pc == 0x295B90u) {
        ctx->pc = 0x295B94u;
        goto label_295b94;
    }
    ctx->pc = 0x295B8Cu;
    SET_GPR_U32(ctx, 31, 0x295B94u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x295B8Cu, 0x295B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B94u;
label_295b94:
    // 0x295b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295b98:
    // 0x295b98: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_295b9c:
    if (ctx->pc == 0x295B9Cu) {
        ctx->pc = 0x295BA0u;
        goto label_295ba0;
    }
    ctx->pc = 0x295B98u;
    {
        const bool branch_taken_0x295b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x295b98) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x295BA0u;
label_295ba0:
    // 0x295ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295ba4:
    // 0x295ba4: 0xc11e00c  jal         func_478030
label_295ba8:
    if (ctx->pc == 0x295BA8u) {
        ctx->pc = 0x295BACu;
        goto label_295bac;
    }
    ctx->pc = 0x295BA4u;
    SET_GPR_U32(ctx, 31, 0x295BACu);
    ctx->pc = 0x478030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478030u, 0x295BA4u, 0x295BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BACu;
label_295bac:
    // 0x295bac: 0x8fa5029c  lw          $a1, 0x29C($sp)
    ctx->pc = 0x295bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_295bb0:
    // 0x295bb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x295bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_295bb4:
    // 0x295bb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x295bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295bb8:
    // 0x295bb8: 0xc0e6ee0  jal         func_39BB80
label_295bbc:
    if (ctx->pc == 0x295BBCu) {
        ctx->pc = 0x295BC0u;
        goto label_295bc0;
    }
    ctx->pc = 0x295BB8u;
    SET_GPR_U32(ctx, 31, 0x295BC0u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x295BB8u, 0x295BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BC0u;
label_295bc0:
    // 0x295bc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x295bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295bc4:
    // 0x295bc4: 0x1000000f  b           . + 4 + (0xF << 2)
label_295bc8:
    if (ctx->pc == 0x295BC8u) {
        ctx->pc = 0x295BCCu;
        goto label_295bcc;
    }
    ctx->pc = 0x295BC4u;
    {
        const bool branch_taken_0x295bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295bc4) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x295BCCu;
label_295bcc:
    // 0x295bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295bd0:
    // 0x295bd0: 0xc0e6f1a  jal         func_39BC68
label_295bd4:
    if (ctx->pc == 0x295BD4u) {
        ctx->pc = 0x295BD8u;
        goto label_295bd8;
    }
    ctx->pc = 0x295BD0u;
    SET_GPR_U32(ctx, 31, 0x295BD8u);
    ctx->pc = 0x39BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC68u, 0x295BD0u, 0x295BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BD8u;
label_295bd8:
    // 0x295bd8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_295bdc:
    if (ctx->pc == 0x295BDCu) {
        ctx->pc = 0x295BE0u;
        goto label_295be0;
    }
    ctx->pc = 0x295BD8u;
    {
        const bool branch_taken_0x295bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x295bd8) {
            ctx->pc = 0x295C04u;
            goto label_295c04;
        }
    }
    ctx->pc = 0x295BE0u;
label_295be0:
    // 0x295be0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x295be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295be4:
    // 0x295be4: 0xc11dff8  jal         func_477FE0
label_295be8:
    if (ctx->pc == 0x295BE8u) {
        ctx->pc = 0x295BECu;
        goto label_295bec;
    }
    ctx->pc = 0x295BE4u;
    SET_GPR_U32(ctx, 31, 0x295BECu);
    ctx->pc = 0x477FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477FE0u, 0x295BE4u, 0x295BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295BECu;
label_295bec:
    // 0x295bec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295bf0:
    // 0x295bf0: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x295bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_295bf4:
    // 0x295bf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x295bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295bf8:
    // 0x295bf8: 0xc0e6ea6  jal         func_39BA98
label_295bfc:
    if (ctx->pc == 0x295BFCu) {
        ctx->pc = 0x295C00u;
        goto label_295c00;
    }
    ctx->pc = 0x295BF8u;
    SET_GPR_U32(ctx, 31, 0x295C00u);
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x295BF8u, 0x295C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295C00u;
label_295c00:
    // 0x295c00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295c00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295c04:
    // 0x295c04: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x295c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_295c08:
    // 0x295c08: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x295c08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_295c0c:
    // 0x295c0c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x295c0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_295c10:
    // 0x295c10: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x295c10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_295c14:
    // 0x295c14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x295c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_295c18:
    // 0x295c18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x295c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_295c1c:
    // 0x295c1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x295c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_295c20:
    // 0x295c20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x295c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_295c24:
    // 0x295c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x295c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295c28:
    // 0x295c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295c2c:
    // 0x295c2c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x295c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_295c30:
    // 0x295c30: 0x27bd02c0  addiu       $sp, $sp, 0x2C0
    ctx->pc = 0x295c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_295c34:
    // 0x295c34: 0x3e00008  jr          $ra
label_295c38:
    if (ctx->pc == 0x295C38u) {
        ctx->pc = 0x295C3Cu;
        goto label_295c3c;
    }
    ctx->pc = 0x295C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295C3Cu;
label_295c3c:
    // 0x295c3c: 0x0  nop
    ctx->pc = 0x295c3cu;
    // NOP
    ctx->pc = 0x295c40u;
}
