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

// Function: sub_00388DF0
// Address: 0x388df0 - 0x389548
void sub_00388DF0_0x388df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388DF0_0x388df0");
#endif

    switch (ctx->pc) {
        case 0x388df0u: goto label_388df0;
        case 0x388df4u: goto label_388df4;
        case 0x388df8u: goto label_388df8;
        case 0x388dfcu: goto label_388dfc;
        case 0x388e00u: goto label_388e00;
        case 0x388e04u: goto label_388e04;
        case 0x388e08u: goto label_388e08;
        case 0x388e0cu: goto label_388e0c;
        case 0x388e10u: goto label_388e10;
        case 0x388e14u: goto label_388e14;
        case 0x388e18u: goto label_388e18;
        case 0x388e1cu: goto label_388e1c;
        case 0x388e20u: goto label_388e20;
        case 0x388e24u: goto label_388e24;
        case 0x388e28u: goto label_388e28;
        case 0x388e2cu: goto label_388e2c;
        case 0x388e30u: goto label_388e30;
        case 0x388e34u: goto label_388e34;
        case 0x388e38u: goto label_388e38;
        case 0x388e3cu: goto label_388e3c;
        case 0x388e40u: goto label_388e40;
        case 0x388e44u: goto label_388e44;
        case 0x388e48u: goto label_388e48;
        case 0x388e4cu: goto label_388e4c;
        case 0x388e50u: goto label_388e50;
        case 0x388e54u: goto label_388e54;
        case 0x388e58u: goto label_388e58;
        case 0x388e5cu: goto label_388e5c;
        case 0x388e60u: goto label_388e60;
        case 0x388e64u: goto label_388e64;
        case 0x388e68u: goto label_388e68;
        case 0x388e6cu: goto label_388e6c;
        case 0x388e70u: goto label_388e70;
        case 0x388e74u: goto label_388e74;
        case 0x388e78u: goto label_388e78;
        case 0x388e7cu: goto label_388e7c;
        case 0x388e80u: goto label_388e80;
        case 0x388e84u: goto label_388e84;
        case 0x388e88u: goto label_388e88;
        case 0x388e8cu: goto label_388e8c;
        case 0x388e90u: goto label_388e90;
        case 0x388e94u: goto label_388e94;
        case 0x388e98u: goto label_388e98;
        case 0x388e9cu: goto label_388e9c;
        case 0x388ea0u: goto label_388ea0;
        case 0x388ea4u: goto label_388ea4;
        case 0x388ea8u: goto label_388ea8;
        case 0x388eacu: goto label_388eac;
        case 0x388eb0u: goto label_388eb0;
        case 0x388eb4u: goto label_388eb4;
        case 0x388eb8u: goto label_388eb8;
        case 0x388ebcu: goto label_388ebc;
        case 0x388ec0u: goto label_388ec0;
        case 0x388ec4u: goto label_388ec4;
        case 0x388ec8u: goto label_388ec8;
        case 0x388eccu: goto label_388ecc;
        case 0x388ed0u: goto label_388ed0;
        case 0x388ed4u: goto label_388ed4;
        case 0x388ed8u: goto label_388ed8;
        case 0x388edcu: goto label_388edc;
        case 0x388ee0u: goto label_388ee0;
        case 0x388ee4u: goto label_388ee4;
        case 0x388ee8u: goto label_388ee8;
        case 0x388eecu: goto label_388eec;
        case 0x388ef0u: goto label_388ef0;
        case 0x388ef4u: goto label_388ef4;
        case 0x388ef8u: goto label_388ef8;
        case 0x388efcu: goto label_388efc;
        case 0x388f00u: goto label_388f00;
        case 0x388f04u: goto label_388f04;
        case 0x388f08u: goto label_388f08;
        case 0x388f0cu: goto label_388f0c;
        case 0x388f10u: goto label_388f10;
        case 0x388f14u: goto label_388f14;
        case 0x388f18u: goto label_388f18;
        case 0x388f1cu: goto label_388f1c;
        case 0x388f20u: goto label_388f20;
        case 0x388f24u: goto label_388f24;
        case 0x388f28u: goto label_388f28;
        case 0x388f2cu: goto label_388f2c;
        case 0x388f30u: goto label_388f30;
        case 0x388f34u: goto label_388f34;
        case 0x388f38u: goto label_388f38;
        case 0x388f3cu: goto label_388f3c;
        case 0x388f40u: goto label_388f40;
        case 0x388f44u: goto label_388f44;
        case 0x388f48u: goto label_388f48;
        case 0x388f4cu: goto label_388f4c;
        case 0x388f50u: goto label_388f50;
        case 0x388f54u: goto label_388f54;
        case 0x388f58u: goto label_388f58;
        case 0x388f5cu: goto label_388f5c;
        case 0x388f60u: goto label_388f60;
        case 0x388f64u: goto label_388f64;
        case 0x388f68u: goto label_388f68;
        case 0x388f6cu: goto label_388f6c;
        case 0x388f70u: goto label_388f70;
        case 0x388f74u: goto label_388f74;
        case 0x388f78u: goto label_388f78;
        case 0x388f7cu: goto label_388f7c;
        case 0x388f80u: goto label_388f80;
        case 0x388f84u: goto label_388f84;
        case 0x388f88u: goto label_388f88;
        case 0x388f8cu: goto label_388f8c;
        case 0x388f90u: goto label_388f90;
        case 0x388f94u: goto label_388f94;
        case 0x388f98u: goto label_388f98;
        case 0x388f9cu: goto label_388f9c;
        case 0x388fa0u: goto label_388fa0;
        case 0x388fa4u: goto label_388fa4;
        case 0x388fa8u: goto label_388fa8;
        case 0x388facu: goto label_388fac;
        case 0x388fb0u: goto label_388fb0;
        case 0x388fb4u: goto label_388fb4;
        case 0x388fb8u: goto label_388fb8;
        case 0x388fbcu: goto label_388fbc;
        case 0x388fc0u: goto label_388fc0;
        case 0x388fc4u: goto label_388fc4;
        case 0x388fc8u: goto label_388fc8;
        case 0x388fccu: goto label_388fcc;
        case 0x388fd0u: goto label_388fd0;
        case 0x388fd4u: goto label_388fd4;
        case 0x388fd8u: goto label_388fd8;
        case 0x388fdcu: goto label_388fdc;
        case 0x388fe0u: goto label_388fe0;
        case 0x388fe4u: goto label_388fe4;
        case 0x388fe8u: goto label_388fe8;
        case 0x388fecu: goto label_388fec;
        case 0x388ff0u: goto label_388ff0;
        case 0x388ff4u: goto label_388ff4;
        case 0x388ff8u: goto label_388ff8;
        case 0x388ffcu: goto label_388ffc;
        case 0x389000u: goto label_389000;
        case 0x389004u: goto label_389004;
        case 0x389008u: goto label_389008;
        case 0x38900cu: goto label_38900c;
        case 0x389010u: goto label_389010;
        case 0x389014u: goto label_389014;
        case 0x389018u: goto label_389018;
        case 0x38901cu: goto label_38901c;
        case 0x389020u: goto label_389020;
        case 0x389024u: goto label_389024;
        case 0x389028u: goto label_389028;
        case 0x38902cu: goto label_38902c;
        case 0x389030u: goto label_389030;
        case 0x389034u: goto label_389034;
        case 0x389038u: goto label_389038;
        case 0x38903cu: goto label_38903c;
        case 0x389040u: goto label_389040;
        case 0x389044u: goto label_389044;
        case 0x389048u: goto label_389048;
        case 0x38904cu: goto label_38904c;
        case 0x389050u: goto label_389050;
        case 0x389054u: goto label_389054;
        case 0x389058u: goto label_389058;
        case 0x38905cu: goto label_38905c;
        case 0x389060u: goto label_389060;
        case 0x389064u: goto label_389064;
        case 0x389068u: goto label_389068;
        case 0x38906cu: goto label_38906c;
        case 0x389070u: goto label_389070;
        case 0x389074u: goto label_389074;
        case 0x389078u: goto label_389078;
        case 0x38907cu: goto label_38907c;
        case 0x389080u: goto label_389080;
        case 0x389084u: goto label_389084;
        case 0x389088u: goto label_389088;
        case 0x38908cu: goto label_38908c;
        case 0x389090u: goto label_389090;
        case 0x389094u: goto label_389094;
        case 0x389098u: goto label_389098;
        case 0x38909cu: goto label_38909c;
        case 0x3890a0u: goto label_3890a0;
        case 0x3890a4u: goto label_3890a4;
        case 0x3890a8u: goto label_3890a8;
        case 0x3890acu: goto label_3890ac;
        case 0x3890b0u: goto label_3890b0;
        case 0x3890b4u: goto label_3890b4;
        case 0x3890b8u: goto label_3890b8;
        case 0x3890bcu: goto label_3890bc;
        case 0x3890c0u: goto label_3890c0;
        case 0x3890c4u: goto label_3890c4;
        case 0x3890c8u: goto label_3890c8;
        case 0x3890ccu: goto label_3890cc;
        case 0x3890d0u: goto label_3890d0;
        case 0x3890d4u: goto label_3890d4;
        case 0x3890d8u: goto label_3890d8;
        case 0x3890dcu: goto label_3890dc;
        case 0x3890e0u: goto label_3890e0;
        case 0x3890e4u: goto label_3890e4;
        case 0x3890e8u: goto label_3890e8;
        case 0x3890ecu: goto label_3890ec;
        case 0x3890f0u: goto label_3890f0;
        case 0x3890f4u: goto label_3890f4;
        case 0x3890f8u: goto label_3890f8;
        case 0x3890fcu: goto label_3890fc;
        case 0x389100u: goto label_389100;
        case 0x389104u: goto label_389104;
        case 0x389108u: goto label_389108;
        case 0x38910cu: goto label_38910c;
        case 0x389110u: goto label_389110;
        case 0x389114u: goto label_389114;
        case 0x389118u: goto label_389118;
        case 0x38911cu: goto label_38911c;
        case 0x389120u: goto label_389120;
        case 0x389124u: goto label_389124;
        case 0x389128u: goto label_389128;
        case 0x38912cu: goto label_38912c;
        case 0x389130u: goto label_389130;
        case 0x389134u: goto label_389134;
        case 0x389138u: goto label_389138;
        case 0x38913cu: goto label_38913c;
        case 0x389140u: goto label_389140;
        case 0x389144u: goto label_389144;
        case 0x389148u: goto label_389148;
        case 0x38914cu: goto label_38914c;
        case 0x389150u: goto label_389150;
        case 0x389154u: goto label_389154;
        case 0x389158u: goto label_389158;
        case 0x38915cu: goto label_38915c;
        case 0x389160u: goto label_389160;
        case 0x389164u: goto label_389164;
        case 0x389168u: goto label_389168;
        case 0x38916cu: goto label_38916c;
        case 0x389170u: goto label_389170;
        case 0x389174u: goto label_389174;
        case 0x389178u: goto label_389178;
        case 0x38917cu: goto label_38917c;
        case 0x389180u: goto label_389180;
        case 0x389184u: goto label_389184;
        case 0x389188u: goto label_389188;
        case 0x38918cu: goto label_38918c;
        case 0x389190u: goto label_389190;
        case 0x389194u: goto label_389194;
        case 0x389198u: goto label_389198;
        case 0x38919cu: goto label_38919c;
        case 0x3891a0u: goto label_3891a0;
        case 0x3891a4u: goto label_3891a4;
        case 0x3891a8u: goto label_3891a8;
        case 0x3891acu: goto label_3891ac;
        case 0x3891b0u: goto label_3891b0;
        case 0x3891b4u: goto label_3891b4;
        case 0x3891b8u: goto label_3891b8;
        case 0x3891bcu: goto label_3891bc;
        case 0x3891c0u: goto label_3891c0;
        case 0x3891c4u: goto label_3891c4;
        case 0x3891c8u: goto label_3891c8;
        case 0x3891ccu: goto label_3891cc;
        case 0x3891d0u: goto label_3891d0;
        case 0x3891d4u: goto label_3891d4;
        case 0x3891d8u: goto label_3891d8;
        case 0x3891dcu: goto label_3891dc;
        case 0x3891e0u: goto label_3891e0;
        case 0x3891e4u: goto label_3891e4;
        case 0x3891e8u: goto label_3891e8;
        case 0x3891ecu: goto label_3891ec;
        case 0x3891f0u: goto label_3891f0;
        case 0x3891f4u: goto label_3891f4;
        case 0x3891f8u: goto label_3891f8;
        case 0x3891fcu: goto label_3891fc;
        case 0x389200u: goto label_389200;
        case 0x389204u: goto label_389204;
        case 0x389208u: goto label_389208;
        case 0x38920cu: goto label_38920c;
        case 0x389210u: goto label_389210;
        case 0x389214u: goto label_389214;
        case 0x389218u: goto label_389218;
        case 0x38921cu: goto label_38921c;
        case 0x389220u: goto label_389220;
        case 0x389224u: goto label_389224;
        case 0x389228u: goto label_389228;
        case 0x38922cu: goto label_38922c;
        case 0x389230u: goto label_389230;
        case 0x389234u: goto label_389234;
        case 0x389238u: goto label_389238;
        case 0x38923cu: goto label_38923c;
        case 0x389240u: goto label_389240;
        case 0x389244u: goto label_389244;
        case 0x389248u: goto label_389248;
        case 0x38924cu: goto label_38924c;
        case 0x389250u: goto label_389250;
        case 0x389254u: goto label_389254;
        case 0x389258u: goto label_389258;
        case 0x38925cu: goto label_38925c;
        case 0x389260u: goto label_389260;
        case 0x389264u: goto label_389264;
        case 0x389268u: goto label_389268;
        case 0x38926cu: goto label_38926c;
        case 0x389270u: goto label_389270;
        case 0x389274u: goto label_389274;
        case 0x389278u: goto label_389278;
        case 0x38927cu: goto label_38927c;
        case 0x389280u: goto label_389280;
        case 0x389284u: goto label_389284;
        case 0x389288u: goto label_389288;
        case 0x38928cu: goto label_38928c;
        case 0x389290u: goto label_389290;
        case 0x389294u: goto label_389294;
        case 0x389298u: goto label_389298;
        case 0x38929cu: goto label_38929c;
        case 0x3892a0u: goto label_3892a0;
        case 0x3892a4u: goto label_3892a4;
        case 0x3892a8u: goto label_3892a8;
        case 0x3892acu: goto label_3892ac;
        case 0x3892b0u: goto label_3892b0;
        case 0x3892b4u: goto label_3892b4;
        case 0x3892b8u: goto label_3892b8;
        case 0x3892bcu: goto label_3892bc;
        case 0x3892c0u: goto label_3892c0;
        case 0x3892c4u: goto label_3892c4;
        case 0x3892c8u: goto label_3892c8;
        case 0x3892ccu: goto label_3892cc;
        case 0x3892d0u: goto label_3892d0;
        case 0x3892d4u: goto label_3892d4;
        case 0x3892d8u: goto label_3892d8;
        case 0x3892dcu: goto label_3892dc;
        case 0x3892e0u: goto label_3892e0;
        case 0x3892e4u: goto label_3892e4;
        case 0x3892e8u: goto label_3892e8;
        case 0x3892ecu: goto label_3892ec;
        case 0x3892f0u: goto label_3892f0;
        case 0x3892f4u: goto label_3892f4;
        case 0x3892f8u: goto label_3892f8;
        case 0x3892fcu: goto label_3892fc;
        case 0x389300u: goto label_389300;
        case 0x389304u: goto label_389304;
        case 0x389308u: goto label_389308;
        case 0x38930cu: goto label_38930c;
        case 0x389310u: goto label_389310;
        case 0x389314u: goto label_389314;
        case 0x389318u: goto label_389318;
        case 0x38931cu: goto label_38931c;
        case 0x389320u: goto label_389320;
        case 0x389324u: goto label_389324;
        case 0x389328u: goto label_389328;
        case 0x38932cu: goto label_38932c;
        case 0x389330u: goto label_389330;
        case 0x389334u: goto label_389334;
        case 0x389338u: goto label_389338;
        case 0x38933cu: goto label_38933c;
        case 0x389340u: goto label_389340;
        case 0x389344u: goto label_389344;
        case 0x389348u: goto label_389348;
        case 0x38934cu: goto label_38934c;
        case 0x389350u: goto label_389350;
        case 0x389354u: goto label_389354;
        case 0x389358u: goto label_389358;
        case 0x38935cu: goto label_38935c;
        case 0x389360u: goto label_389360;
        case 0x389364u: goto label_389364;
        case 0x389368u: goto label_389368;
        case 0x38936cu: goto label_38936c;
        case 0x389370u: goto label_389370;
        case 0x389374u: goto label_389374;
        case 0x389378u: goto label_389378;
        case 0x38937cu: goto label_38937c;
        case 0x389380u: goto label_389380;
        case 0x389384u: goto label_389384;
        case 0x389388u: goto label_389388;
        case 0x38938cu: goto label_38938c;
        case 0x389390u: goto label_389390;
        case 0x389394u: goto label_389394;
        case 0x389398u: goto label_389398;
        case 0x38939cu: goto label_38939c;
        case 0x3893a0u: goto label_3893a0;
        case 0x3893a4u: goto label_3893a4;
        case 0x3893a8u: goto label_3893a8;
        case 0x3893acu: goto label_3893ac;
        case 0x3893b0u: goto label_3893b0;
        case 0x3893b4u: goto label_3893b4;
        case 0x3893b8u: goto label_3893b8;
        case 0x3893bcu: goto label_3893bc;
        case 0x3893c0u: goto label_3893c0;
        case 0x3893c4u: goto label_3893c4;
        case 0x3893c8u: goto label_3893c8;
        case 0x3893ccu: goto label_3893cc;
        case 0x3893d0u: goto label_3893d0;
        case 0x3893d4u: goto label_3893d4;
        case 0x3893d8u: goto label_3893d8;
        case 0x3893dcu: goto label_3893dc;
        case 0x3893e0u: goto label_3893e0;
        case 0x3893e4u: goto label_3893e4;
        case 0x3893e8u: goto label_3893e8;
        case 0x3893ecu: goto label_3893ec;
        case 0x3893f0u: goto label_3893f0;
        case 0x3893f4u: goto label_3893f4;
        case 0x3893f8u: goto label_3893f8;
        case 0x3893fcu: goto label_3893fc;
        case 0x389400u: goto label_389400;
        case 0x389404u: goto label_389404;
        case 0x389408u: goto label_389408;
        case 0x38940cu: goto label_38940c;
        case 0x389410u: goto label_389410;
        case 0x389414u: goto label_389414;
        case 0x389418u: goto label_389418;
        case 0x38941cu: goto label_38941c;
        case 0x389420u: goto label_389420;
        case 0x389424u: goto label_389424;
        case 0x389428u: goto label_389428;
        case 0x38942cu: goto label_38942c;
        case 0x389430u: goto label_389430;
        case 0x389434u: goto label_389434;
        case 0x389438u: goto label_389438;
        case 0x38943cu: goto label_38943c;
        case 0x389440u: goto label_389440;
        case 0x389444u: goto label_389444;
        case 0x389448u: goto label_389448;
        case 0x38944cu: goto label_38944c;
        case 0x389450u: goto label_389450;
        case 0x389454u: goto label_389454;
        case 0x389458u: goto label_389458;
        case 0x38945cu: goto label_38945c;
        case 0x389460u: goto label_389460;
        case 0x389464u: goto label_389464;
        case 0x389468u: goto label_389468;
        case 0x38946cu: goto label_38946c;
        case 0x389470u: goto label_389470;
        case 0x389474u: goto label_389474;
        case 0x389478u: goto label_389478;
        case 0x38947cu: goto label_38947c;
        case 0x389480u: goto label_389480;
        case 0x389484u: goto label_389484;
        case 0x389488u: goto label_389488;
        case 0x38948cu: goto label_38948c;
        case 0x389490u: goto label_389490;
        case 0x389494u: goto label_389494;
        case 0x389498u: goto label_389498;
        case 0x38949cu: goto label_38949c;
        case 0x3894a0u: goto label_3894a0;
        case 0x3894a4u: goto label_3894a4;
        case 0x3894a8u: goto label_3894a8;
        case 0x3894acu: goto label_3894ac;
        case 0x3894b0u: goto label_3894b0;
        case 0x3894b4u: goto label_3894b4;
        case 0x3894b8u: goto label_3894b8;
        case 0x3894bcu: goto label_3894bc;
        case 0x3894c0u: goto label_3894c0;
        case 0x3894c4u: goto label_3894c4;
        case 0x3894c8u: goto label_3894c8;
        case 0x3894ccu: goto label_3894cc;
        case 0x3894d0u: goto label_3894d0;
        case 0x3894d4u: goto label_3894d4;
        case 0x3894d8u: goto label_3894d8;
        case 0x3894dcu: goto label_3894dc;
        case 0x3894e0u: goto label_3894e0;
        case 0x3894e4u: goto label_3894e4;
        case 0x3894e8u: goto label_3894e8;
        case 0x3894ecu: goto label_3894ec;
        case 0x3894f0u: goto label_3894f0;
        case 0x3894f4u: goto label_3894f4;
        case 0x3894f8u: goto label_3894f8;
        case 0x3894fcu: goto label_3894fc;
        case 0x389500u: goto label_389500;
        case 0x389504u: goto label_389504;
        case 0x389508u: goto label_389508;
        case 0x38950cu: goto label_38950c;
        case 0x389510u: goto label_389510;
        case 0x389514u: goto label_389514;
        case 0x389518u: goto label_389518;
        case 0x38951cu: goto label_38951c;
        case 0x389520u: goto label_389520;
        case 0x389524u: goto label_389524;
        case 0x389528u: goto label_389528;
        case 0x38952cu: goto label_38952c;
        case 0x389530u: goto label_389530;
        case 0x389534u: goto label_389534;
        case 0x389538u: goto label_389538;
        case 0x38953cu: goto label_38953c;
        case 0x389540u: goto label_389540;
        case 0x389544u: goto label_389544;
        default: break;
    }

    ctx->pc = 0x388df0u;

label_388df0:
    // 0x388df0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x388df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_388df4:
    // 0x388df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x388df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388df8:
    // 0x388df8: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x388df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_388dfc:
    // 0x388dfc: 0x27a700e4  addiu       $a3, $sp, 0xE4
    ctx->pc = 0x388dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_388e00:
    // 0x388e00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x388e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388e04:
    // 0x388e04: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x388e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_388e08:
    // 0x388e08: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x388e08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_388e0c:
    // 0x388e0c: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x388e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_388e10:
    // 0x388e10: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x388e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_388e14:
    // 0x388e14: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x388e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_388e18:
    // 0x388e18: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x388e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_388e1c:
    // 0x388e1c: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x388e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_388e20:
    // 0x388e20: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x388e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_388e24:
    // 0x388e24: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x388e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_388e28:
    // 0x388e28: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x388e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_388e2c:
    // 0x388e2c: 0xc103322  jal         func_40CC88
label_388e30:
    if (ctx->pc == 0x388E30u) {
        ctx->pc = 0x388E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E2Cu;
        // 0x388e30: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E34u;
        goto label_388e34;
    }
    ctx->pc = 0x388E2Cu;
    SET_GPR_U32(ctx, 31, 0x388E34u);
    ctx->pc = 0x388E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E2Cu;
    // 0x388e30: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x388E2Cu, 0x388E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388E34u;
label_388e34:
    // 0x388e34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_388e38:
    if (ctx->pc == 0x388E38u) {
        ctx->pc = 0x388E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E34u;
        // 0x388e38: 0x8fa300e4  lw          $v1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E3Cu;
        goto label_388e3c;
    }
    ctx->pc = 0x388E34u;
    {
        const bool branch_taken_0x388e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E34u;
        // 0x388e38: 0x8fa300e4  lw          $v1, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e34) {
            ctx->pc = 0x388E60u;
            goto label_388e60;
        }
    }
    ctx->pc = 0x388E3Cu;
label_388e3c:
    // 0x388e3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x388e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_388e40:
    // 0x388e40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x388e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_388e44:
    // 0x388e44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x388e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_388e48:
    // 0x388e48: 0xc1035f6  jal         func_40D7D8
label_388e4c:
    if (ctx->pc == 0x388E4Cu) {
        ctx->pc = 0x388E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E48u;
        // 0x388e4c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E50u;
        goto label_388e50;
    }
    ctx->pc = 0x388E48u;
    SET_GPR_U32(ctx, 31, 0x388E50u);
    ctx->pc = 0x388E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E48u;
    // 0x388e4c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x388E48u, 0x388E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388E50u;
label_388e50:
    // 0x388e50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x388e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_388e54:
    // 0x388e54: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_388e58:
    if (ctx->pc == 0x388E58u) {
        ctx->pc = 0x388E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E54u;
        // 0x388e58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E5Cu;
        goto label_388e5c;
    }
    ctx->pc = 0x388E54u;
    {
        const bool branch_taken_0x388e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E54u;
        // 0x388e58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e54) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x388E5Cu;
label_388e5c:
    // 0x388e5c: 0x0  nop
    ctx->pc = 0x388e5cu;
    // NOP
label_388e60:
    // 0x388e60: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x388e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_388e64:
    // 0x388e64: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x388e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_388e68:
    // 0x388e68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x388e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_388e6c:
    // 0x388e6c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x388e6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_388e70:
    // 0x388e70: 0x1060019d  beqz        $v1, . + 4 + (0x19D << 2)
label_388e74:
    if (ctx->pc == 0x388E74u) {
        ctx->pc = 0x388E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E70u;
        // 0x388e74: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E78u;
        goto label_388e78;
    }
    ctx->pc = 0x388E70u;
    {
        const bool branch_taken_0x388e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E70u;
        // 0x388e74: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e70) {
            ctx->pc = 0x3894E8u;
            goto label_3894e8;
        }
    }
    ctx->pc = 0x388E78u;
label_388e78:
    // 0x388e78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388e7c:
    // 0x388e7c: 0xc10480a  jal         func_412028
label_388e80:
    if (ctx->pc == 0x388E80u) {
        ctx->pc = 0x388E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E7Cu;
        // 0x388e80: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E84u;
        goto label_388e84;
    }
    ctx->pc = 0x388E7Cu;
    SET_GPR_U32(ctx, 31, 0x388E84u);
    ctx->pc = 0x388E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E7Cu;
    // 0x388e80: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x388E7Cu, 0x388E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388E84u;
label_388e84:
    // 0x388e84: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x388e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_388e88:
    // 0x388e88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_388e8c:
    if (ctx->pc == 0x388E8Cu) {
        ctx->pc = 0x388E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E88u;
        // 0x388e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388E90u;
        goto label_388e90;
    }
    ctx->pc = 0x388E88u;
    {
        const bool branch_taken_0x388e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E88u;
        // 0x388e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e88) {
            ctx->pc = 0x388EB0u;
            goto label_388eb0;
        }
    }
    ctx->pc = 0x388E90u;
label_388e90:
    // 0x388e90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x388e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_388e94:
    // 0x388e94: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x388e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_388e98:
    // 0x388e98: 0xc1035f6  jal         func_40D7D8
label_388e9c:
    if (ctx->pc == 0x388E9Cu) {
        ctx->pc = 0x388E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E98u;
        // 0x388e9c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EA0u;
        goto label_388ea0;
    }
    ctx->pc = 0x388E98u;
    SET_GPR_U32(ctx, 31, 0x388EA0u);
    ctx->pc = 0x388E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388E98u;
    // 0x388e9c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x388E98u, 0x388EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388EA0u;
label_388ea0:
    // 0x388ea0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x388ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_388ea4:
    // 0x388ea4: 0x10000198  b           . + 4 + (0x198 << 2)
label_388ea8:
    if (ctx->pc == 0x388EA8u) {
        ctx->pc = 0x388EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EA4u;
        // 0x388ea8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EACu;
        goto label_388eac;
    }
    ctx->pc = 0x388EA4u;
    {
        const bool branch_taken_0x388ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EA4u;
        // 0x388ea8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ea4) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x388EACu;
label_388eac:
    // 0x388eac: 0x0  nop
    ctx->pc = 0x388eacu;
    // NOP
label_388eb0:
    // 0x388eb0: 0x8f85bd20  lw          $a1, -0x42E0($gp)
    ctx->pc = 0x388eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
label_388eb4:
    // 0x388eb4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x388eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_388eb8:
    // 0x388eb8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x388eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_388ebc:
    // 0x388ebc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x388ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_388ec0:
    // 0x388ec0: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x388ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_388ec4:
    // 0x388ec4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x388ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_388ec8:
    // 0x388ec8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x388ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_388ecc:
    // 0x388ecc: 0x40f809  jalr        $v0
label_388ed0:
    if (ctx->pc == 0x388ED0u) {
        ctx->pc = 0x388ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ECCu;
        // 0x388ed0: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388ED4u;
        goto label_388ed4;
    }
    ctx->pc = 0x388ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x388ED4u);
        ctx->pc = 0x388ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ECCu;
        // 0x388ed0: 0x34a50010  ori         $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388ECCu, 0x388ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388ED4u;
label_388ed4:
    // 0x388ed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x388ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388ed8:
    // 0x388ed8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_388edc:
    if (ctx->pc == 0x388EDCu) {
        ctx->pc = 0x388EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ED8u;
        // 0x388edc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EE0u;
        goto label_388ee0;
    }
    ctx->pc = 0x388ED8u;
    {
        const bool branch_taken_0x388ed8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x388EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388ED8u;
        // 0x388edc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ed8) {
            ctx->pc = 0x388EE8u;
            goto label_388ee8;
        }
    }
    ctx->pc = 0x388EE0u;
label_388ee0:
    // 0x388ee0: 0x10000019  b           . + 4 + (0x19 << 2)
label_388ee4:
    if (ctx->pc == 0x388EE4u) {
        ctx->pc = 0x388EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EE0u;
        // 0x388ee4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388EE8u;
        goto label_388ee8;
    }
    ctx->pc = 0x388EE0u;
    {
        const bool branch_taken_0x388ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EE0u;
        // 0x388ee4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ee0) {
            ctx->pc = 0x388F48u;
            goto label_388f48;
        }
    }
    ctx->pc = 0x388EE8u;
label_388ee8:
    // 0x388ee8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x388ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_388eec:
    // 0x388eec: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x388eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_388ef0:
    // 0x388ef0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x388ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_388ef4:
    // 0x388ef4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x388ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_388ef8:
    // 0x388ef8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x388ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_388efc:
    // 0x388efc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x388efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_388f00:
    // 0x388f00: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x388f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_388f04:
    // 0x388f04: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x388f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_388f08:
    // 0x388f08: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x388f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_388f0c:
    // 0x388f0c: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x388f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_388f10:
    // 0x388f10: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x388f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
label_388f14:
    // 0x388f14: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x388f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_388f18:
    // 0x388f18: 0x2484adb8  addiu       $a0, $a0, -0x5248
    ctx->pc = 0x388f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
label_388f1c:
    // 0x388f1c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x388f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_388f20:
    // 0x388f20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x388f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388f24:
    // 0x388f24: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x388f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_388f28:
    // 0x388f28: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x388f28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388f2c:
    // 0x388f2c: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x388f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_388f30:
    // 0x388f30: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x388f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_388f34:
    // 0x388f34: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x388f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_388f38:
    // 0x388f38: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x388f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_388f3c:
    // 0x388f3c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x388f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_388f40:
    // 0x388f40: 0xc104c80  jal         func_413200
label_388f44:
    if (ctx->pc == 0x388F44u) {
        ctx->pc = 0x388F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F40u;
        // 0x388f44: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F48u;
        goto label_388f48;
    }
    ctx->pc = 0x388F40u;
    SET_GPR_U32(ctx, 31, 0x388F48u);
    ctx->pc = 0x388F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F40u;
    // 0x388f44: 0xae070018  sw          $a3, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x388F40u, 0x388F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F48u;
label_388f48:
    // 0x388f48: 0x12600171  beqz        $s3, . + 4 + (0x171 << 2)
label_388f4c:
    if (ctx->pc == 0x388F4Cu) {
        ctx->pc = 0x388F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F48u;
        // 0x388f4c: 0x27b000e8  addiu       $s0, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F50u;
        goto label_388f50;
    }
    ctx->pc = 0x388F48u;
    {
        const bool branch_taken_0x388f48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x388F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F48u;
        // 0x388f4c: 0x27b000e8  addiu       $s0, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f48) {
            ctx->pc = 0x389510u;
            goto label_389510;
        }
    }
    ctx->pc = 0x388F50u;
label_388f50:
    // 0x388f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388f54:
    // 0x388f54: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x388f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_388f58:
    // 0x388f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x388f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388f5c:
    // 0x388f5c: 0xc103322  jal         func_40CC88
label_388f60:
    if (ctx->pc == 0x388F60u) {
        ctx->pc = 0x388F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F5Cu;
        // 0x388f60: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F64u;
        goto label_388f64;
    }
    ctx->pc = 0x388F5Cu;
    SET_GPR_U32(ctx, 31, 0x388F64u);
    ctx->pc = 0x388F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F5Cu;
    // 0x388f60: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x388F5Cu, 0x388F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F64u;
label_388f64:
    // 0x388f64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_388f68:
    if (ctx->pc == 0x388F68u) {
        ctx->pc = 0x388F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F64u;
        // 0x388f68: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F6Cu;
        goto label_388f6c;
    }
    ctx->pc = 0x388F64u;
    {
        const bool branch_taken_0x388f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F64u;
        // 0x388f68: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f64) {
            ctx->pc = 0x388F98u;
            goto label_388f98;
        }
    }
    ctx->pc = 0x388F6Cu;
label_388f6c:
    // 0x388f6c: 0xc0e20da  jal         func_388368
label_388f70:
    if (ctx->pc == 0x388F70u) {
        ctx->pc = 0x388F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F6Cu;
        // 0x388f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F74u;
        goto label_388f74;
    }
    ctx->pc = 0x388F6Cu;
    SET_GPR_U32(ctx, 31, 0x388F74u);
    ctx->pc = 0x388F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F6Cu;
    // 0x388f70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x388F6Cu, 0x388F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F74u;
label_388f74:
    // 0x388f74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x388f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_388f78:
    // 0x388f78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x388f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_388f7c:
    // 0x388f7c: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x388f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_388f80:
    // 0x388f80: 0xc1035f6  jal         func_40D7D8
label_388f84:
    if (ctx->pc == 0x388F84u) {
        ctx->pc = 0x388F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F80u;
        // 0x388f84: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F88u;
        goto label_388f88;
    }
    ctx->pc = 0x388F80u;
    SET_GPR_U32(ctx, 31, 0x388F88u);
    ctx->pc = 0x388F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F80u;
    // 0x388f84: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x388F80u, 0x388F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388F88u;
label_388f88:
    // 0x388f88: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x388f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_388f8c:
    // 0x388f8c: 0x1000015e  b           . + 4 + (0x15E << 2)
label_388f90:
    if (ctx->pc == 0x388F90u) {
        ctx->pc = 0x388F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F8Cu;
        // 0x388f90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388F94u;
        goto label_388f94;
    }
    ctx->pc = 0x388F8Cu;
    {
        const bool branch_taken_0x388f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F8Cu;
        // 0x388f90: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f8c) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x388F94u;
label_388f94:
    // 0x388f94: 0x0  nop
    ctx->pc = 0x388f94u;
    // NOP
label_388f98:
    // 0x388f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388f9c:
    // 0x388f9c: 0xc1055f0  jal         func_4157C0
label_388fa0:
    if (ctx->pc == 0x388FA0u) {
        ctx->pc = 0x388FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F9Cu;
        // 0x388fa0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FA4u;
        goto label_388fa4;
    }
    ctx->pc = 0x388F9Cu;
    SET_GPR_U32(ctx, 31, 0x388FA4u);
    ctx->pc = 0x388FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388F9Cu;
    // 0x388fa0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4157C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4157C0u, 0x388F9Cu, 0x388FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FA4u;
label_388fa4:
    // 0x388fa4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_388fa8:
    if (ctx->pc == 0x388FA8u) {
        ctx->pc = 0x388FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FA4u;
        // 0x388fa8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FACu;
        goto label_388fac;
    }
    ctx->pc = 0x388FA4u;
    {
        const bool branch_taken_0x388fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FA4u;
        // 0x388fa8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388fa4) {
            ctx->pc = 0x388FD8u;
            goto label_388fd8;
        }
    }
    ctx->pc = 0x388FACu;
label_388fac:
    // 0x388fac: 0xc0e20da  jal         func_388368
label_388fb0:
    if (ctx->pc == 0x388FB0u) {
        ctx->pc = 0x388FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FACu;
        // 0x388fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FB4u;
        goto label_388fb4;
    }
    ctx->pc = 0x388FACu;
    SET_GPR_U32(ctx, 31, 0x388FB4u);
    ctx->pc = 0x388FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388FACu;
    // 0x388fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x388FACu, 0x388FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FB4u;
label_388fb4:
    // 0x388fb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x388fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_388fb8:
    // 0x388fb8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x388fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_388fbc:
    // 0x388fbc: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x388fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_388fc0:
    // 0x388fc0: 0xc1035f6  jal         func_40D7D8
label_388fc4:
    if (ctx->pc == 0x388FC4u) {
        ctx->pc = 0x388FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FC0u;
        // 0x388fc4: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FC8u;
        goto label_388fc8;
    }
    ctx->pc = 0x388FC0u;
    SET_GPR_U32(ctx, 31, 0x388FC8u);
    ctx->pc = 0x388FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388FC0u;
    // 0x388fc4: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x388FC0u, 0x388FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FC8u;
label_388fc8:
    // 0x388fc8: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x388fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_388fcc:
    // 0x388fcc: 0x1000014e  b           . + 4 + (0x14E << 2)
label_388fd0:
    if (ctx->pc == 0x388FD0u) {
        ctx->pc = 0x388FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FCCu;
        // 0x388fd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FD4u;
        goto label_388fd4;
    }
    ctx->pc = 0x388FCCu;
    {
        const bool branch_taken_0x388fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FCCu;
        // 0x388fd0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388fcc) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x388FD4u;
label_388fd4:
    // 0x388fd4: 0x0  nop
    ctx->pc = 0x388fd4u;
    // NOP
label_388fd8:
    // 0x388fd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x388fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388fdc:
    // 0x388fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x388fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388fe0:
    // 0x388fe0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x388fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_388fe4:
    // 0x388fe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x388fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388fe8:
    // 0x388fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x388fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388fec:
    // 0x388fec: 0xc103322  jal         func_40CC88
label_388ff0:
    if (ctx->pc == 0x388FF0u) {
        ctx->pc = 0x388FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FECu;
        // 0x388ff0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FF4u;
        goto label_388ff4;
    }
    ctx->pc = 0x388FECu;
    SET_GPR_U32(ctx, 31, 0x388FF4u);
    ctx->pc = 0x388FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388FECu;
    // 0x388ff0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x388FECu, 0x388FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388FF4u;
label_388ff4:
    // 0x388ff4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_388ff8:
    if (ctx->pc == 0x388FF8u) {
        ctx->pc = 0x388FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FF4u;
        // 0x388ff8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388FFCu;
        goto label_388ffc;
    }
    ctx->pc = 0x388FF4u;
    {
        const bool branch_taken_0x388ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FF4u;
        // 0x388ff8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ff4) {
            ctx->pc = 0x389030u;
            goto label_389030;
        }
    }
    ctx->pc = 0x388FFCu;
label_388ffc:
    // 0x388ffc: 0xc10572c  jal         func_415CB0
label_389000:
    if (ctx->pc == 0x389000u) {
        ctx->pc = 0x389000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FFCu;
        // 0x389000: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389004u;
        goto label_389004;
    }
    ctx->pc = 0x388FFCu;
    SET_GPR_U32(ctx, 31, 0x389004u);
    ctx->pc = 0x389000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388FFCu;
    // 0x389000: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x388FFCu, 0x389004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389004u;
label_389004:
    // 0x389004: 0xc0e20da  jal         func_388368
label_389008:
    if (ctx->pc == 0x389008u) {
        ctx->pc = 0x389008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389004u;
        // 0x389008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38900Cu;
        goto label_38900c;
    }
    ctx->pc = 0x389004u;
    SET_GPR_U32(ctx, 31, 0x38900Cu);
    ctx->pc = 0x389008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389004u;
    // 0x389008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x389004u, 0x38900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38900Cu;
label_38900c:
    // 0x38900c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_389010:
    // 0x389010: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x389010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_389014:
    // 0x389014: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x389014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_389018:
    // 0x389018: 0xc1035f6  jal         func_40D7D8
label_38901c:
    if (ctx->pc == 0x38901Cu) {
        ctx->pc = 0x38901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389018u;
        // 0x38901c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x389020u;
        goto label_389020;
    }
    ctx->pc = 0x389018u;
    SET_GPR_U32(ctx, 31, 0x389020u);
    ctx->pc = 0x38901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389018u;
    // 0x38901c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x389018u, 0x389020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389020u;
label_389020:
    // 0x389020: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x389020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_389024:
    // 0x389024: 0x10000138  b           . + 4 + (0x138 << 2)
label_389028:
    if (ctx->pc == 0x389028u) {
        ctx->pc = 0x389028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389024u;
        // 0x389028: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38902Cu;
        goto label_38902c;
    }
    ctx->pc = 0x389024u;
    {
        const bool branch_taken_0x389024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389024u;
        // 0x389028: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389024) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x38902Cu;
label_38902c:
    // 0x38902c: 0x0  nop
    ctx->pc = 0x38902cu;
    // NOP
label_389030:
    // 0x389030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x389030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_389034:
    // 0x389034: 0xc0e1e08  jal         func_387820
label_389038:
    if (ctx->pc == 0x389038u) {
        ctx->pc = 0x389038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389034u;
        // 0x389038: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38903Cu;
        goto label_38903c;
    }
    ctx->pc = 0x389034u;
    SET_GPR_U32(ctx, 31, 0x38903Cu);
    ctx->pc = 0x389038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389034u;
    // 0x389038: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387820u, 0x389034u, 0x38903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38903Cu;
label_38903c:
    // 0x38903c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_389040:
    if (ctx->pc == 0x389040u) {
        ctx->pc = 0x389040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38903Cu;
        // 0x389040: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389044u;
        goto label_389044;
    }
    ctx->pc = 0x38903Cu;
    {
        const bool branch_taken_0x38903c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38903Cu;
        // 0x389040: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38903c) {
            ctx->pc = 0x389078u;
            goto label_389078;
        }
    }
    ctx->pc = 0x389044u;
label_389044:
    // 0x389044: 0xc10572c  jal         func_415CB0
label_389048:
    if (ctx->pc == 0x389048u) {
        ctx->pc = 0x389048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389044u;
        // 0x389048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38904Cu;
        goto label_38904c;
    }
    ctx->pc = 0x389044u;
    SET_GPR_U32(ctx, 31, 0x38904Cu);
    ctx->pc = 0x389048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389044u;
    // 0x389048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x389044u, 0x38904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38904Cu;
label_38904c:
    // 0x38904c: 0xc0e20da  jal         func_388368
label_389050:
    if (ctx->pc == 0x389050u) {
        ctx->pc = 0x389050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38904Cu;
        // 0x389050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389054u;
        goto label_389054;
    }
    ctx->pc = 0x38904Cu;
    SET_GPR_U32(ctx, 31, 0x389054u);
    ctx->pc = 0x389050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38904Cu;
    // 0x389050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x38904Cu, 0x389054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389054u;
label_389054:
    // 0x389054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x389054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_389058:
    // 0x389058: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x389058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38905c:
    // 0x38905c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x38905cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_389060:
    // 0x389060: 0xc1035f6  jal         func_40D7D8
label_389064:
    if (ctx->pc == 0x389064u) {
        ctx->pc = 0x389064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389060u;
        // 0x389064: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x389068u;
        goto label_389068;
    }
    ctx->pc = 0x389060u;
    SET_GPR_U32(ctx, 31, 0x389068u);
    ctx->pc = 0x389064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389060u;
    // 0x389064: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x389060u, 0x389068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389068u;
label_389068:
    // 0x389068: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x389068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_38906c:
    // 0x38906c: 0x10000126  b           . + 4 + (0x126 << 2)
label_389070:
    if (ctx->pc == 0x389070u) {
        ctx->pc = 0x389070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38906Cu;
        // 0x389070: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389074u;
        goto label_389074;
    }
    ctx->pc = 0x38906Cu;
    {
        const bool branch_taken_0x38906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38906Cu;
        // 0x389070: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38906c) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x389074u;
label_389074:
    // 0x389074: 0x0  nop
    ctx->pc = 0x389074u;
    // NOP
label_389078:
    // 0x389078: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
label_38907c:
    if (ctx->pc == 0x38907Cu) {
        ctx->pc = 0x38907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389078u;
        // 0x38907c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389080u;
        goto label_389080;
    }
    ctx->pc = 0x389078u;
    {
        const bool branch_taken_0x389078 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389078u;
        // 0x38907c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389078) {
            ctx->pc = 0x38917Cu;
            goto label_38917c;
        }
    }
    ctx->pc = 0x389080u;
label_389080:
    // 0x389080: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x389080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_389084:
    // 0x389084: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x389084u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_389088:
    // 0x389088: 0x2457e880  addiu       $s7, $v0, -0x1780
    ctx->pc = 0x389088u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38908c:
    // 0x38908c: 0x26700008  addiu       $s0, $s3, 0x8
    ctx->pc = 0x38908cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_389090:
    // 0x389090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x389090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_389094:
    // 0x389094: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x389094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_389098:
    // 0x389098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x389098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38909c:
    // 0x38909c: 0xc103322  jal         func_40CC88
label_3890a0:
    if (ctx->pc == 0x3890A0u) {
        ctx->pc = 0x3890A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38909Cu;
        // 0x3890a0: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3890A4u;
        goto label_3890a4;
    }
    ctx->pc = 0x38909Cu;
    SET_GPR_U32(ctx, 31, 0x3890A4u);
    ctx->pc = 0x3890A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38909Cu;
    // 0x3890a0: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x38909Cu, 0x3890A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3890A4u;
label_3890a4:
    // 0x3890a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3890a8:
    if (ctx->pc == 0x3890A8u) {
        ctx->pc = 0x3890A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890A4u;
        // 0x3890a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3890ACu;
        goto label_3890ac;
    }
    ctx->pc = 0x3890A4u;
    {
        const bool branch_taken_0x3890a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3890A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890A4u;
        // 0x3890a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3890a4) {
            ctx->pc = 0x3890C4u;
            goto label_3890c4;
        }
    }
    ctx->pc = 0x3890ACu;
label_3890ac:
    // 0x3890ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3890acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3890b0:
    // 0x3890b0: 0xc0e1f40  jal         func_387D00
label_3890b4:
    if (ctx->pc == 0x3890B4u) {
        ctx->pc = 0x3890B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890B0u;
        // 0x3890b4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3890B8u;
        goto label_3890b8;
    }
    ctx->pc = 0x3890B0u;
    SET_GPR_U32(ctx, 31, 0x3890B8u);
    ctx->pc = 0x3890B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3890B0u;
    // 0x3890b4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387D00u, 0x3890B0u, 0x3890B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3890B8u;
label_3890b8:
    // 0x3890b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3890b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3890bc:
    // 0x3890bc: 0x54a00024  bnel        $a1, $zero, . + 4 + (0x24 << 2)
label_3890c0:
    if (ctx->pc == 0x3890C0u) {
        ctx->pc = 0x3890C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890BCu;
        // 0x3890c0: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3890C4u;
        goto label_3890c4;
    }
    ctx->pc = 0x3890BCu;
    {
        const bool branch_taken_0x3890bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3890bc) {
            ctx->pc = 0x3890C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3890BCu;
            // 0x3890c0: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389150u;
            goto label_389150;
        }
    }
    ctx->pc = 0x3890C4u;
label_3890c4:
    // 0x3890c4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3890c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3890c8:
    // 0x3890c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3890c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3890cc:
    // 0x3890cc: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_3890d0:
    if (ctx->pc == 0x3890D0u) {
        ctx->pc = 0x3890D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890CCu;
        // 0x3890d0: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3890D4u;
        goto label_3890d4;
    }
    ctx->pc = 0x3890CCu;
    {
        const bool branch_taken_0x3890cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3890D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890CCu;
        // 0x3890d0: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3890cc) {
            ctx->pc = 0x389104u;
            goto label_389104;
        }
    }
    ctx->pc = 0x3890D4u;
label_3890d4:
    // 0x3890d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3890d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3890d8:
    // 0x3890d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3890d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3890dc:
    // 0x3890dc: 0x0  nop
    ctx->pc = 0x3890dcu;
    // NOP
label_3890e0:
    // 0x3890e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3890e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3890e4:
    // 0x3890e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3890e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3890e8:
    // 0x3890e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3890e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3890ec:
    // 0x3890ec: 0xc0e3414  jal         func_38D050
label_3890f0:
    if (ctx->pc == 0x3890F0u) {
        ctx->pc = 0x3890F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890ECu;
        // 0x3890f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3890F4u;
        goto label_3890f4;
    }
    ctx->pc = 0x3890ECu;
    SET_GPR_U32(ctx, 31, 0x3890F4u);
    ctx->pc = 0x3890F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3890ECu;
    // 0x3890f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3890ECu, 0x3890F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3890F4u;
label_3890f4:
    // 0x3890f4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3890f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_3890f8:
    // 0x3890f8: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3890f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3890fc:
    // 0x3890fc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_389100:
    if (ctx->pc == 0x389100u) {
        ctx->pc = 0x389100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890FCu;
        // 0x389100: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389104u;
        goto label_389104;
    }
    ctx->pc = 0x3890FCu;
    {
        const bool branch_taken_0x3890fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890FCu;
        // 0x389100: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3890fc) {
            ctx->pc = 0x3890E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3890e0;
        }
    }
    ctx->pc = 0x389104u;
label_389104:
    // 0x389104: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x389104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_389108:
    // 0x389108: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38910c:
    if (ctx->pc == 0x38910Cu) {
        ctx->pc = 0x389110u;
        goto label_389110;
    }
    ctx->pc = 0x389108u;
    {
        const bool branch_taken_0x389108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389108) {
            ctx->pc = 0x389120u;
            goto label_389120;
        }
    }
    ctx->pc = 0x389110u;
label_389110:
    // 0x389110: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x389110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_389114:
    // 0x389114: 0x40f809  jalr        $v0
label_389118:
    if (ctx->pc == 0x389118u) {
        ctx->pc = 0x38911Cu;
        goto label_38911c;
    }
    ctx->pc = 0x389114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38911Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389114u, 0x38911Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38911Cu;
label_38911c:
    // 0x38911c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x38911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_389120:
    // 0x389120: 0xc10572c  jal         func_415CB0
label_389124:
    if (ctx->pc == 0x389124u) {
        ctx->pc = 0x389124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389120u;
        // 0x389124: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389128u;
        goto label_389128;
    }
    ctx->pc = 0x389120u;
    SET_GPR_U32(ctx, 31, 0x389128u);
    ctx->pc = 0x389124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389120u;
    // 0x389124: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x389120u, 0x389128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389128u;
label_389128:
    // 0x389128: 0xc0e20da  jal         func_388368
label_38912c:
    if (ctx->pc == 0x38912Cu) {
        ctx->pc = 0x38912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389128u;
        // 0x38912c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389130u;
        goto label_389130;
    }
    ctx->pc = 0x389128u;
    SET_GPR_U32(ctx, 31, 0x389130u);
    ctx->pc = 0x38912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389128u;
    // 0x38912c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x389128u, 0x389130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389130u;
label_389130:
    // 0x389130: 0xafb40090  sw          $s4, 0x90($sp)
    ctx->pc = 0x389130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 20));
label_389134:
    // 0x389134: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x389134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_389138:
    // 0x389138: 0xc1035f6  jal         func_40D7D8
label_38913c:
    if (ctx->pc == 0x38913Cu) {
        ctx->pc = 0x38913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389138u;
        // 0x38913c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x389140u;
        goto label_389140;
    }
    ctx->pc = 0x389138u;
    SET_GPR_U32(ctx, 31, 0x389140u);
    ctx->pc = 0x38913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389138u;
    // 0x38913c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x389138u, 0x389140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389140u;
label_389140:
    // 0x389140: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x389140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_389144:
    // 0x389144: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_389148:
    if (ctx->pc == 0x389148u) {
        ctx->pc = 0x389148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389144u;
        // 0x389148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38914Cu;
        goto label_38914c;
    }
    ctx->pc = 0x389144u;
    {
        const bool branch_taken_0x389144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389144u;
        // 0x389148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389144) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x38914Cu;
label_38914c:
    // 0x38914c: 0x0  nop
    ctx->pc = 0x38914cu;
    // NOP
label_389150:
    // 0x389150: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x389150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_389154:
    // 0x389154: 0xacb00044  sw          $s0, 0x44($a1)
    ctx->pc = 0x389154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 16));
label_389158:
    // 0x389158: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x389158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_38915c:
    // 0x38915c: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x38915cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
label_389160:
    // 0x389160: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x389160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_389164:
    // 0x389164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x389164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_389168:
    // 0x389168: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x389168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_38916c:
    // 0x38916c: 0xacb3003c  sw          $s3, 0x3C($a1)
    ctx->pc = 0x38916cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 19));
label_389170:
    // 0x389170: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x389170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_389174:
    // 0x389174: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_389178:
    if (ctx->pc == 0x389178u) {
        ctx->pc = 0x389178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389174u;
        // 0x389178: 0xae640008  sw          $a0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38917Cu;
        goto label_38917c;
    }
    ctx->pc = 0x389174u;
    {
        const bool branch_taken_0x389174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389174u;
        // 0x389178: 0xae640008  sw          $a0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389174) {
            ctx->pc = 0x389090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389090;
        }
    }
    ctx->pc = 0x38917Cu;
label_38917c:
    // 0x38917c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x38917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_389180:
    // 0x389180: 0x18400057  blez        $v0, . + 4 + (0x57 << 2)
label_389184:
    if (ctx->pc == 0x389184u) {
        ctx->pc = 0x389184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389180u;
        // 0x389184: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389188u;
        goto label_389188;
    }
    ctx->pc = 0x389180u;
    {
        const bool branch_taken_0x389180 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x389184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389180u;
        // 0x389184: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389180) {
            ctx->pc = 0x3892E0u;
            goto label_3892e0;
        }
    }
    ctx->pc = 0x389188u;
label_389188:
    // 0x389188: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x389188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38918c:
    // 0x38918c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x38918cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389190:
    // 0x389190: 0x245ee880  addiu       $fp, $v0, -0x1780
    ctx->pc = 0x389190u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_389194:
    // 0x389194: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x389194u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_389198:
    // 0x389198: 0x26740010  addiu       $s4, $s3, 0x10
    ctx->pc = 0x389198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_38919c:
    // 0x38919c: 0x0  nop
    ctx->pc = 0x38919cu;
    // NOP
label_3891a0:
    // 0x3891a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3891a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3891a4:
    // 0x3891a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3891a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3891a8:
    // 0x3891a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3891a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3891ac:
    // 0x3891ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3891acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3891b0:
    // 0x3891b0: 0xc103322  jal         func_40CC88
label_3891b4:
    if (ctx->pc == 0x3891B4u) {
        ctx->pc = 0x3891B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891B0u;
        // 0x3891b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3891B8u;
        goto label_3891b8;
    }
    ctx->pc = 0x3891B0u;
    SET_GPR_U32(ctx, 31, 0x3891B8u);
    ctx->pc = 0x3891B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3891B0u;
    // 0x3891b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3891B0u, 0x3891B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3891B8u;
label_3891b8:
    // 0x3891b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3891bc:
    if (ctx->pc == 0x3891BCu) {
        ctx->pc = 0x3891BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891B8u;
        // 0x3891bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3891C0u;
        goto label_3891c0;
    }
    ctx->pc = 0x3891B8u;
    {
        const bool branch_taken_0x3891b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3891BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891B8u;
        // 0x3891bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891b8) {
            ctx->pc = 0x3891D0u;
            goto label_3891d0;
        }
    }
    ctx->pc = 0x3891C0u;
label_3891c0:
    // 0x3891c0: 0x27a500ec  addiu       $a1, $sp, 0xEC
    ctx->pc = 0x3891c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_3891c4:
    // 0x3891c4: 0xc103468  jal         func_40D1A0
label_3891c8:
    if (ctx->pc == 0x3891C8u) {
        ctx->pc = 0x3891C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891C4u;
        // 0x3891c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3891CCu;
        goto label_3891cc;
    }
    ctx->pc = 0x3891C4u;
    SET_GPR_U32(ctx, 31, 0x3891CCu);
    ctx->pc = 0x3891C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3891C4u;
    // 0x3891c8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3891C4u, 0x3891CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3891CCu;
label_3891cc:
    // 0x3891cc: 0x2e2800b  movn        $s0, $s7, $v0
    ctx->pc = 0x3891ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
label_3891d0:
    // 0x3891d0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3891d4:
    if (ctx->pc == 0x3891D4u) {
        ctx->pc = 0x3891D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891D0u;
        // 0x3891d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3891D8u;
        goto label_3891d8;
    }
    ctx->pc = 0x3891D0u;
    {
        const bool branch_taken_0x3891d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3891D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891D0u;
        // 0x3891d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891d0) {
            ctx->pc = 0x389204u;
            goto label_389204;
        }
    }
    ctx->pc = 0x3891D8u;
label_3891d8:
    // 0x3891d8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3891d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3891dc:
    // 0x3891dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3891dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3891e0:
    // 0x3891e0: 0xc103322  jal         func_40CC88
label_3891e4:
    if (ctx->pc == 0x3891E4u) {
        ctx->pc = 0x3891E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891E0u;
        // 0x3891e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3891E8u;
        goto label_3891e8;
    }
    ctx->pc = 0x3891E0u;
    SET_GPR_U32(ctx, 31, 0x3891E8u);
    ctx->pc = 0x3891E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3891E0u;
    // 0x3891e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3891E0u, 0x3891E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3891E8u;
label_3891e8:
    // 0x3891e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3891ec:
    if (ctx->pc == 0x3891ECu) {
        ctx->pc = 0x3891ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891E8u;
        // 0x3891ec: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3891F0u;
        goto label_3891f0;
    }
    ctx->pc = 0x3891E8u;
    {
        const bool branch_taken_0x3891e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3891ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891E8u;
        // 0x3891ec: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891e8) {
            ctx->pc = 0x389208u;
            goto label_389208;
        }
    }
    ctx->pc = 0x3891F0u;
label_3891f0:
    // 0x3891f0: 0xc0e3554  jal         func_38D550
label_3891f4:
    if (ctx->pc == 0x3891F4u) {
        ctx->pc = 0x3891F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891F0u;
        // 0x3891f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3891F8u;
        goto label_3891f8;
    }
    ctx->pc = 0x3891F0u;
    SET_GPR_U32(ctx, 31, 0x3891F8u);
    ctx->pc = 0x3891F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3891F0u;
    // 0x3891f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D550u, 0x3891F0u, 0x3891F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3891F8u;
label_3891f8:
    // 0x3891f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3891f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3891fc:
    // 0x3891fc: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
label_389200:
    if (ctx->pc == 0x389200u) {
        ctx->pc = 0x389200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891FCu;
        // 0x389200: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389204u;
        goto label_389204;
    }
    ctx->pc = 0x3891FCu;
    {
        const bool branch_taken_0x3891fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x389200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891FCu;
        // 0x389200: 0x8fa200ec  lw          $v0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891fc) {
            ctx->pc = 0x389290u;
            goto label_389290;
        }
    }
    ctx->pc = 0x389204u;
label_389204:
    // 0x389204: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x389204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_389208:
    // 0x389208: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x389208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38920c:
    // 0x38920c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_389210:
    if (ctx->pc == 0x389210u) {
        ctx->pc = 0x389210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38920Cu;
        // 0x389210: 0x27b200a0  addiu       $s2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389214u;
        goto label_389214;
    }
    ctx->pc = 0x38920Cu;
    {
        const bool branch_taken_0x38920c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x389210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38920Cu;
        // 0x389210: 0x27b200a0  addiu       $s2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38920c) {
            ctx->pc = 0x389244u;
            goto label_389244;
        }
    }
    ctx->pc = 0x389214u;
label_389214:
    // 0x389214: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x389214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389218:
    // 0x389218: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x389218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_38921c:
    // 0x38921c: 0x0  nop
    ctx->pc = 0x38921cu;
    // NOP
label_389220:
    // 0x389220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x389220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_389224:
    // 0x389224: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x389224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_389228:
    // 0x389228: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x389228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38922c:
    // 0x38922c: 0xc0e3414  jal         func_38D050
label_389230:
    if (ctx->pc == 0x389230u) {
        ctx->pc = 0x389230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38922Cu;
        // 0x389230: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389234u;
        goto label_389234;
    }
    ctx->pc = 0x38922Cu;
    SET_GPR_U32(ctx, 31, 0x389234u);
    ctx->pc = 0x389230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38922Cu;
    // 0x389230: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x38922Cu, 0x389234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389234u;
label_389234:
    // 0x389234: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x389234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_389238:
    // 0x389238: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x389238u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_38923c:
    // 0x38923c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_389240:
    if (ctx->pc == 0x389240u) {
        ctx->pc = 0x389240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38923Cu;
        // 0x389240: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389244u;
        goto label_389244;
    }
    ctx->pc = 0x38923Cu;
    {
        const bool branch_taken_0x38923c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38923Cu;
        // 0x389240: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38923c) {
            ctx->pc = 0x389220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389220;
        }
    }
    ctx->pc = 0x389244u;
label_389244:
    // 0x389244: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x389244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_389248:
    // 0x389248: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38924c:
    if (ctx->pc == 0x38924Cu) {
        ctx->pc = 0x389250u;
        goto label_389250;
    }
    ctx->pc = 0x389248u;
    {
        const bool branch_taken_0x389248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389248) {
            ctx->pc = 0x389260u;
            goto label_389260;
        }
    }
    ctx->pc = 0x389250u;
label_389250:
    // 0x389250: 0x8fc2010c  lw          $v0, 0x10C($fp)
    ctx->pc = 0x389250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_389254:
    // 0x389254: 0x40f809  jalr        $v0
label_389258:
    if (ctx->pc == 0x389258u) {
        ctx->pc = 0x38925Cu;
        goto label_38925c;
    }
    ctx->pc = 0x389254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38925Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389254u, 0x38925Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38925Cu;
label_38925c:
    // 0x38925c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x38925cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_389260:
    // 0x389260: 0xc10572c  jal         func_415CB0
label_389264:
    if (ctx->pc == 0x389264u) {
        ctx->pc = 0x389264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389260u;
        // 0x389264: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389268u;
        goto label_389268;
    }
    ctx->pc = 0x389260u;
    SET_GPR_U32(ctx, 31, 0x389268u);
    ctx->pc = 0x389264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389260u;
    // 0x389264: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x389260u, 0x389268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389268u;
label_389268:
    // 0x389268: 0xc0e20da  jal         func_388368
label_38926c:
    if (ctx->pc == 0x38926Cu) {
        ctx->pc = 0x38926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389268u;
        // 0x38926c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389270u;
        goto label_389270;
    }
    ctx->pc = 0x389268u;
    SET_GPR_U32(ctx, 31, 0x389270u);
    ctx->pc = 0x38926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389268u;
    // 0x38926c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x389268u, 0x389270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389270u;
label_389270:
    // 0x389270: 0xafb600a0  sw          $s6, 0xA0($sp)
    ctx->pc = 0x389270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 22));
label_389274:
    // 0x389274: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x389274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_389278:
    // 0x389278: 0xc1035f6  jal         func_40D7D8
label_38927c:
    if (ctx->pc == 0x38927Cu) {
        ctx->pc = 0x38927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389278u;
        // 0x38927c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x389280u;
        goto label_389280;
    }
    ctx->pc = 0x389278u;
    SET_GPR_U32(ctx, 31, 0x389280u);
    ctx->pc = 0x38927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389278u;
    // 0x38927c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x389278u, 0x389280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389280u;
label_389280:
    // 0x389280: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x389280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_389284:
    // 0x389284: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_389288:
    if (ctx->pc == 0x389288u) {
        ctx->pc = 0x389288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389284u;
        // 0x389288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38928Cu;
        goto label_38928c;
    }
    ctx->pc = 0x389284u;
    {
        const bool branch_taken_0x389284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389284u;
        // 0x389288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389284) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x38928Cu;
label_38928c:
    // 0x38928c: 0x0  nop
    ctx->pc = 0x38928cu;
    // NOP
label_389290:
    // 0x389290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389294:
    // 0x389294: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x389294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_389298:
    // 0x389298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x389298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_38929c:
    // 0x38929c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38929cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3892a0:
    // 0x3892a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3892a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3892a4:
    // 0x3892a4: 0xc1083aa  jal         func_420EA8
label_3892a8:
    if (ctx->pc == 0x3892A8u) {
        ctx->pc = 0x3892A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892A4u;
        // 0x3892a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892ACu;
        goto label_3892ac;
    }
    ctx->pc = 0x3892A4u;
    SET_GPR_U32(ctx, 31, 0x3892ACu);
    ctx->pc = 0x3892A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3892A4u;
    // 0x3892a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x3892A4u, 0x3892ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3892ACu;
label_3892ac:
    // 0x3892ac: 0x8f83a98c  lw          $v1, -0x5674($gp)
    ctx->pc = 0x3892acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
label_3892b0:
    // 0x3892b0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3892b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3892b4:
    // 0x3892b4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x3892b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3892b8:
    // 0x3892b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3892b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3892bc:
    // 0x3892bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3892bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3892c0:
    // 0x3892c0: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3892c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3892c4:
    // 0x3892c4: 0xac740008  sw          $s4, 0x8($v1)
    ctx->pc = 0x3892c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 20));
label_3892c8:
    // 0x3892c8: 0x224202a  slt         $a0, $s1, $a0
    ctx->pc = 0x3892c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3892cc:
    // 0x3892cc: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x3892ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_3892d0:
    // 0x3892d0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3892d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3892d4:
    // 0x3892d4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3892d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_3892d8:
    // 0x3892d8: 0x1480ffb1  bnez        $a0, . + 4 + (-0x4F << 2)
label_3892dc:
    if (ctx->pc == 0x3892DCu) {
        ctx->pc = 0x3892DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892D8u;
        // 0x3892dc: 0xae650010  sw          $a1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892E0u;
        goto label_3892e0;
    }
    ctx->pc = 0x3892D8u;
    {
        const bool branch_taken_0x3892d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3892DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892D8u;
        // 0x3892dc: 0xae650010  sw          $a1, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892d8) {
            ctx->pc = 0x3891A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3891a0;
        }
    }
    ctx->pc = 0x3892E0u;
label_3892e0:
    // 0x3892e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3892e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3892e4:
    // 0x3892e4: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
label_3892e8:
    if (ctx->pc == 0x3892E8u) {
        ctx->pc = 0x3892E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892E4u;
        // 0x3892e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3892ECu;
        goto label_3892ec;
    }
    ctx->pc = 0x3892E4u;
    {
        const bool branch_taken_0x3892e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3892E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892E4u;
        // 0x3892e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892e4) {
            ctx->pc = 0x389440u;
            goto label_389440;
        }
    }
    ctx->pc = 0x3892ECu;
label_3892ec:
    // 0x3892ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3892ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3892f0:
    // 0x3892f0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3892f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3892f4:
    // 0x3892f4: 0x245ee880  addiu       $fp, $v0, -0x1780
    ctx->pc = 0x3892f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3892f8:
    // 0x3892f8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x3892f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3892fc:
    // 0x3892fc: 0x26740018  addiu       $s4, $s3, 0x18
    ctx->pc = 0x3892fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_389300:
    // 0x389300: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x389300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389304:
    // 0x389304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x389304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_389308:
    // 0x389308: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x389308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38930c:
    // 0x38930c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38930cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389310:
    // 0x389310: 0xc103322  jal         func_40CC88
label_389314:
    if (ctx->pc == 0x389314u) {
        ctx->pc = 0x389314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389310u;
        // 0x389314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389318u;
        goto label_389318;
    }
    ctx->pc = 0x389310u;
    SET_GPR_U32(ctx, 31, 0x389318u);
    ctx->pc = 0x389314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389310u;
    // 0x389314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x389310u, 0x389318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389318u;
label_389318:
    // 0x389318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_38931c:
    if (ctx->pc == 0x38931Cu) {
        ctx->pc = 0x38931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389318u;
        // 0x38931c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389320u;
        goto label_389320;
    }
    ctx->pc = 0x389318u;
    {
        const bool branch_taken_0x389318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389318u;
        // 0x38931c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389318) {
            ctx->pc = 0x389330u;
            goto label_389330;
        }
    }
    ctx->pc = 0x389320u;
label_389320:
    // 0x389320: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x389320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_389324:
    // 0x389324: 0xc103468  jal         func_40D1A0
label_389328:
    if (ctx->pc == 0x389328u) {
        ctx->pc = 0x389328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389324u;
        // 0x389328: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38932Cu;
        goto label_38932c;
    }
    ctx->pc = 0x389324u;
    SET_GPR_U32(ctx, 31, 0x38932Cu);
    ctx->pc = 0x389328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389324u;
    // 0x389328: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x389324u, 0x38932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38932Cu;
label_38932c:
    // 0x38932c: 0x2e2800b  movn        $s0, $s7, $v0
    ctx->pc = 0x38932cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
label_389330:
    // 0x389330: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_389334:
    if (ctx->pc == 0x389334u) {
        ctx->pc = 0x389334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389330u;
        // 0x389334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389338u;
        goto label_389338;
    }
    ctx->pc = 0x389330u;
    {
        const bool branch_taken_0x389330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x389334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389330u;
        // 0x389334: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389330) {
            ctx->pc = 0x389364u;
            goto label_389364;
        }
    }
    ctx->pc = 0x389338u;
label_389338:
    // 0x389338: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x389338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_38933c:
    // 0x38933c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38933cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389340:
    // 0x389340: 0xc103322  jal         func_40CC88
label_389344:
    if (ctx->pc == 0x389344u) {
        ctx->pc = 0x389344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389340u;
        // 0x389344: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389348u;
        goto label_389348;
    }
    ctx->pc = 0x389340u;
    SET_GPR_U32(ctx, 31, 0x389348u);
    ctx->pc = 0x389344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389340u;
    // 0x389344: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x389340u, 0x389348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389348u;
label_389348:
    // 0x389348: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_38934c:
    if (ctx->pc == 0x38934Cu) {
        ctx->pc = 0x38934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389348u;
        // 0x38934c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389350u;
        goto label_389350;
    }
    ctx->pc = 0x389348u;
    {
        const bool branch_taken_0x389348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389348u;
        // 0x38934c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389348) {
            ctx->pc = 0x389368u;
            goto label_389368;
        }
    }
    ctx->pc = 0x389350u;
label_389350:
    // 0x389350: 0xc105462  jal         func_415188
label_389354:
    if (ctx->pc == 0x389354u) {
        ctx->pc = 0x389354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389350u;
        // 0x389354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389358u;
        goto label_389358;
    }
    ctx->pc = 0x389350u;
    SET_GPR_U32(ctx, 31, 0x389358u);
    ctx->pc = 0x389354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389350u;
    // 0x389354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415188u, 0x389350u, 0x389358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389358u;
label_389358:
    // 0x389358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x389358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38935c:
    // 0x38935c: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
label_389360:
    if (ctx->pc == 0x389360u) {
        ctx->pc = 0x389360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38935Cu;
        // 0x389360: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389364u;
        goto label_389364;
    }
    ctx->pc = 0x38935Cu;
    {
        const bool branch_taken_0x38935c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x389360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38935Cu;
        // 0x389360: 0x8fa200f0  lw          $v0, 0xF0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38935c) {
            ctx->pc = 0x3893F0u;
            goto label_3893f0;
        }
    }
    ctx->pc = 0x389364u;
label_389364:
    // 0x389364: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x389364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_389368:
    // 0x389368: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x389368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38936c:
    // 0x38936c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_389370:
    if (ctx->pc == 0x389370u) {
        ctx->pc = 0x389370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38936Cu;
        // 0x389370: 0x27b200b0  addiu       $s2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389374u;
        goto label_389374;
    }
    ctx->pc = 0x38936Cu;
    {
        const bool branch_taken_0x38936c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x389370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38936Cu;
        // 0x389370: 0x27b200b0  addiu       $s2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38936c) {
            ctx->pc = 0x3893A4u;
            goto label_3893a4;
        }
    }
    ctx->pc = 0x389374u;
label_389374:
    // 0x389374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x389374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389378:
    // 0x389378: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x389378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_38937c:
    // 0x38937c: 0x0  nop
    ctx->pc = 0x38937cu;
    // NOP
label_389380:
    // 0x389380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x389380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_389384:
    // 0x389384: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x389384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_389388:
    // 0x389388: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x389388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38938c:
    // 0x38938c: 0xc0e3414  jal         func_38D050
label_389390:
    if (ctx->pc == 0x389390u) {
        ctx->pc = 0x389390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38938Cu;
        // 0x389390: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389394u;
        goto label_389394;
    }
    ctx->pc = 0x38938Cu;
    SET_GPR_U32(ctx, 31, 0x389394u);
    ctx->pc = 0x389390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38938Cu;
    // 0x389390: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x38938Cu, 0x389394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389394u;
label_389394:
    // 0x389394: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x389394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_389398:
    // 0x389398: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x389398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_38939c:
    // 0x38939c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3893a0:
    if (ctx->pc == 0x3893A0u) {
        ctx->pc = 0x3893A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38939Cu;
        // 0x3893a0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3893A4u;
        goto label_3893a4;
    }
    ctx->pc = 0x38939Cu;
    {
        const bool branch_taken_0x38939c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3893A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38939Cu;
        // 0x3893a0: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38939c) {
            ctx->pc = 0x389380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389380;
        }
    }
    ctx->pc = 0x3893A4u;
label_3893a4:
    // 0x3893a4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3893a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3893a8:
    // 0x3893a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3893ac:
    if (ctx->pc == 0x3893ACu) {
        ctx->pc = 0x3893B0u;
        goto label_3893b0;
    }
    ctx->pc = 0x3893A8u;
    {
        const bool branch_taken_0x3893a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3893a8) {
            ctx->pc = 0x3893C0u;
            goto label_3893c0;
        }
    }
    ctx->pc = 0x3893B0u;
label_3893b0:
    // 0x3893b0: 0x8fc2010c  lw          $v0, 0x10C($fp)
    ctx->pc = 0x3893b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 268)));
label_3893b4:
    // 0x3893b4: 0x40f809  jalr        $v0
label_3893b8:
    if (ctx->pc == 0x3893B8u) {
        ctx->pc = 0x3893BCu;
        goto label_3893bc;
    }
    ctx->pc = 0x3893B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3893BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3893B4u, 0x3893BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3893BCu;
label_3893bc:
    // 0x3893bc: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3893bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3893c0:
    // 0x3893c0: 0xc10572c  jal         func_415CB0
label_3893c4:
    if (ctx->pc == 0x3893C4u) {
        ctx->pc = 0x3893C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893C0u;
        // 0x3893c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3893C8u;
        goto label_3893c8;
    }
    ctx->pc = 0x3893C0u;
    SET_GPR_U32(ctx, 31, 0x3893C8u);
    ctx->pc = 0x3893C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3893C0u;
    // 0x3893c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x3893C0u, 0x3893C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3893C8u;
label_3893c8:
    // 0x3893c8: 0xc0e20da  jal         func_388368
label_3893cc:
    if (ctx->pc == 0x3893CCu) {
        ctx->pc = 0x3893CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893C8u;
        // 0x3893cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3893D0u;
        goto label_3893d0;
    }
    ctx->pc = 0x3893C8u;
    SET_GPR_U32(ctx, 31, 0x3893D0u);
    ctx->pc = 0x3893CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3893C8u;
    // 0x3893cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x3893C8u, 0x3893D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3893D0u;
label_3893d0:
    // 0x3893d0: 0xafb600b0  sw          $s6, 0xB0($sp)
    ctx->pc = 0x3893d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 22));
label_3893d4:
    // 0x3893d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3893d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3893d8:
    // 0x3893d8: 0xc1035f6  jal         func_40D7D8
label_3893dc:
    if (ctx->pc == 0x3893DCu) {
        ctx->pc = 0x3893DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893D8u;
        // 0x3893dc: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3893E0u;
        goto label_3893e0;
    }
    ctx->pc = 0x3893D8u;
    SET_GPR_U32(ctx, 31, 0x3893E0u);
    ctx->pc = 0x3893DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3893D8u;
    // 0x3893dc: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3893D8u, 0x3893E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3893E0u;
label_3893e0:
    // 0x3893e0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x3893e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_3893e4:
    // 0x3893e4: 0x10000048  b           . + 4 + (0x48 << 2)
label_3893e8:
    if (ctx->pc == 0x3893E8u) {
        ctx->pc = 0x3893E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893E4u;
        // 0x3893e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3893ECu;
        goto label_3893ec;
    }
    ctx->pc = 0x3893E4u;
    {
        const bool branch_taken_0x3893e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3893E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893E4u;
        // 0x3893e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3893e4) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x3893ECu;
label_3893ec:
    // 0x3893ec: 0x0  nop
    ctx->pc = 0x3893ecu;
    // NOP
label_3893f0:
    // 0x3893f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3893f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3893f4:
    // 0x3893f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3893f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3893f8:
    // 0x3893f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3893f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3893fc:
    // 0x3893fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3893fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_389400:
    // 0x389400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x389400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_389404:
    // 0x389404: 0xc1083aa  jal         func_420EA8
label_389408:
    if (ctx->pc == 0x389408u) {
        ctx->pc = 0x389408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389404u;
        // 0x389408: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38940Cu;
        goto label_38940c;
    }
    ctx->pc = 0x389404u;
    SET_GPR_U32(ctx, 31, 0x38940Cu);
    ctx->pc = 0x389408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389404u;
    // 0x389408: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x389404u, 0x38940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38940Cu;
label_38940c:
    // 0x38940c: 0x8f83a988  lw          $v1, -0x5678($gp)
    ctx->pc = 0x38940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
label_389410:
    // 0x389410: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x389410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_389414:
    // 0x389414: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x389414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_389418:
    // 0x389418: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x389418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_38941c:
    // 0x38941c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x38941cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_389420:
    // 0x389420: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x389420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_389424:
    // 0x389424: 0xac740008  sw          $s4, 0x8($v1)
    ctx->pc = 0x389424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 20));
label_389428:
    // 0x389428: 0x224202a  slt         $a0, $s1, $a0
    ctx->pc = 0x389428u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_38942c:
    // 0x38942c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x38942cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_389430:
    // 0x389430: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x389430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_389434:
    // 0x389434: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x389434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_389438:
    // 0x389438: 0x1480ffb1  bnez        $a0, . + 4 + (-0x4F << 2)
label_38943c:
    if (ctx->pc == 0x38943Cu) {
        ctx->pc = 0x38943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389438u;
        // 0x38943c: 0xae650018  sw          $a1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389440u;
        goto label_389440;
    }
    ctx->pc = 0x389438u;
    {
        const bool branch_taken_0x389438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x38943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389438u;
        // 0x38943c: 0xae650018  sw          $a1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389438) {
            ctx->pc = 0x389300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389300;
        }
    }
    ctx->pc = 0x389440u;
label_389440:
    // 0x389440: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x389440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_389444:
    // 0x389444: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_389448:
    if (ctx->pc == 0x389448u) {
        ctx->pc = 0x389448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389444u;
        // 0x389448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38944Cu;
        goto label_38944c;
    }
    ctx->pc = 0x389444u;
    {
        const bool branch_taken_0x389444 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x389448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389444u;
        // 0x389448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389444) {
            ctx->pc = 0x38947Cu;
            goto label_38947c;
        }
    }
    ctx->pc = 0x38944Cu;
label_38944c:
    // 0x38944c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38944cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389450:
    // 0x389450: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x389450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_389454:
    // 0x389454: 0x0  nop
    ctx->pc = 0x389454u;
    // NOP
label_389458:
    // 0x389458: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x389458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_38945c:
    // 0x38945c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_389460:
    // 0x389460: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x389460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_389464:
    // 0x389464: 0xc0e3414  jal         func_38D050
label_389468:
    if (ctx->pc == 0x389468u) {
        ctx->pc = 0x389468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389464u;
        // 0x389468: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38946Cu;
        goto label_38946c;
    }
    ctx->pc = 0x389464u;
    SET_GPR_U32(ctx, 31, 0x38946Cu);
    ctx->pc = 0x389468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389464u;
    // 0x389468: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x389464u, 0x38946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38946Cu;
label_38946c:
    // 0x38946c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x38946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_389470:
    // 0x389470: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x389470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_389474:
    // 0x389474: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_389478:
    if (ctx->pc == 0x389478u) {
        ctx->pc = 0x389478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389474u;
        // 0x389478: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38947Cu;
        goto label_38947c;
    }
    ctx->pc = 0x389474u;
    {
        const bool branch_taken_0x389474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389474u;
        // 0x389478: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389474) {
            ctx->pc = 0x389458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389458;
        }
    }
    ctx->pc = 0x38947Cu;
label_38947c:
    // 0x38947c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x38947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_389480:
    // 0x389480: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_389484:
    if (ctx->pc == 0x389484u) {
        ctx->pc = 0x389484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389480u;
        // 0x389484: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389488u;
        goto label_389488;
    }
    ctx->pc = 0x389480u;
    {
        const bool branch_taken_0x389480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389480u;
        // 0x389484: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389480) {
            ctx->pc = 0x38949Cu;
            goto label_38949c;
        }
    }
    ctx->pc = 0x389488u;
label_389488:
    // 0x389488: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x389488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38948c:
    // 0x38948c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x38948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_389490:
    // 0x389490: 0x40f809  jalr        $v0
label_389494:
    if (ctx->pc == 0x389494u) {
        ctx->pc = 0x389498u;
        goto label_389498;
    }
    ctx->pc = 0x389490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389498u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389490u, 0x389498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389498u;
label_389498:
    // 0x389498: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x389498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_38949c:
    // 0x38949c: 0xc10572c  jal         func_415CB0
label_3894a0:
    if (ctx->pc == 0x3894A0u) {
        ctx->pc = 0x3894A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38949Cu;
        // 0x3894a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894A4u;
        goto label_3894a4;
    }
    ctx->pc = 0x38949Cu;
    SET_GPR_U32(ctx, 31, 0x3894A4u);
    ctx->pc = 0x3894A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38949Cu;
    // 0x3894a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x38949Cu, 0x3894A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894A4u;
label_3894a4:
    // 0x3894a4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3894a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_3894a8:
    // 0x3894a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3894a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3894ac:
    // 0x3894ac: 0x2484adb8  addiu       $a0, $a0, -0x5248
    ctx->pc = 0x3894acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
label_3894b0:
    // 0x3894b0: 0xc1049e2  jal         func_412788
label_3894b4:
    if (ctx->pc == 0x3894B4u) {
        ctx->pc = 0x3894B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894B0u;
        // 0x3894b4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894B8u;
        goto label_3894b8;
    }
    ctx->pc = 0x3894B0u;
    SET_GPR_U32(ctx, 31, 0x3894B8u);
    ctx->pc = 0x3894B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3894B0u;
    // 0x3894b4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x3894B0u, 0x3894B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894B8u;
label_3894b8:
    // 0x3894b8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3894bc:
    if (ctx->pc == 0x3894BCu) {
        ctx->pc = 0x3894BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894B8u;
        // 0x3894bc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894C0u;
        goto label_3894c0;
    }
    ctx->pc = 0x3894B8u;
    {
        const bool branch_taken_0x3894b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3894BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894B8u;
        // 0x3894bc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894b8) {
            ctx->pc = 0x389514u;
            goto label_389514;
        }
    }
    ctx->pc = 0x3894C0u;
label_3894c0:
    // 0x3894c0: 0xc0e20da  jal         func_388368
label_3894c4:
    if (ctx->pc == 0x3894C4u) {
        ctx->pc = 0x3894C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894C0u;
        // 0x3894c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894C8u;
        goto label_3894c8;
    }
    ctx->pc = 0x3894C0u;
    SET_GPR_U32(ctx, 31, 0x3894C8u);
    ctx->pc = 0x3894C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3894C0u;
    // 0x3894c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x3894C0u, 0x3894C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894C8u;
label_3894c8:
    // 0x3894c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3894c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3894cc:
    // 0x3894cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3894ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3894d0:
    // 0x3894d0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3894d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3894d4:
    // 0x3894d4: 0xc1035f6  jal         func_40D7D8
label_3894d8:
    if (ctx->pc == 0x3894D8u) {
        ctx->pc = 0x3894D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894D4u;
        // 0x3894d8: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894DCu;
        goto label_3894dc;
    }
    ctx->pc = 0x3894D4u;
    SET_GPR_U32(ctx, 31, 0x3894DCu);
    ctx->pc = 0x3894D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3894D4u;
    // 0x3894d8: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3894D4u, 0x3894DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894DCu;
label_3894dc:
    // 0x3894dc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3894dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3894e0:
    // 0x3894e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_3894e4:
    if (ctx->pc == 0x3894E4u) {
        ctx->pc = 0x3894E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894E0u;
        // 0x3894e4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894E8u;
        goto label_3894e8;
    }
    ctx->pc = 0x3894E0u;
    {
        const bool branch_taken_0x3894e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3894E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894E0u;
        // 0x3894e4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894e0) {
            ctx->pc = 0x389508u;
            goto label_389508;
        }
    }
    ctx->pc = 0x3894E8u;
label_3894e8:
    // 0x3894e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3894e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3894ec:
    // 0x3894ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3894ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3894f0:
    // 0x3894f0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3894f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_3894f4:
    // 0x3894f4: 0xc1035f6  jal         func_40D7D8
label_3894f8:
    if (ctx->pc == 0x3894F8u) {
        ctx->pc = 0x3894F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894F4u;
        // 0x3894f8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3894FCu;
        goto label_3894fc;
    }
    ctx->pc = 0x3894F4u;
    SET_GPR_U32(ctx, 31, 0x3894FCu);
    ctx->pc = 0x3894F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3894F4u;
    // 0x3894f8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3894F4u, 0x3894FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3894FCu;
label_3894fc:
    // 0x3894fc: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3894fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_389500:
    // 0x389500: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x389500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_389504:
    // 0x389504: 0x0  nop
    ctx->pc = 0x389504u;
    // NOP
label_389508:
    // 0x389508: 0xc103628  jal         func_40D8A0
label_38950c:
    if (ctx->pc == 0x38950Cu) {
        ctx->pc = 0x389510u;
        goto label_389510;
    }
    ctx->pc = 0x389508u;
    SET_GPR_U32(ctx, 31, 0x389510u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x389508u, 0x389510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389510u;
label_389510:
    // 0x389510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389514:
    // 0x389514: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x389514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_389518:
    // 0x389518: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x389518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_38951c:
    // 0x38951c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x38951cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_389520:
    // 0x389520: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x389520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_389524:
    // 0x389524: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x389524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_389528:
    // 0x389528: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x389528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_38952c:
    // 0x38952c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x38952cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_389530:
    // 0x389530: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x389530u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_389534:
    // 0x389534: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x389534u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_389538:
    // 0x389538: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x389538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_38953c:
    // 0x38953c: 0x3e00008  jr          $ra
label_389540:
    if (ctx->pc == 0x389540u) {
        ctx->pc = 0x389540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38953Cu;
        // 0x389540: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389544u;
        goto label_389544;
    }
    ctx->pc = 0x38953Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38953Cu;
        // 0x389540: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38953Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389544u;
label_389544:
    // 0x389544: 0x0  nop
    ctx->pc = 0x389544u;
    // NOP
    ctx->pc = 0x389548u;
}
