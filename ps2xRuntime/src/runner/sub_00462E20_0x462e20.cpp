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

// Function: sub_00462E20
// Address: 0x462e20 - 0x463a60
void sub_00462E20_0x462e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462E20_0x462e20");
#endif

    switch (ctx->pc) {
        case 0x462e20u: goto label_462e20;
        case 0x462e24u: goto label_462e24;
        case 0x462e28u: goto label_462e28;
        case 0x462e2cu: goto label_462e2c;
        case 0x462e30u: goto label_462e30;
        case 0x462e34u: goto label_462e34;
        case 0x462e38u: goto label_462e38;
        case 0x462e3cu: goto label_462e3c;
        case 0x462e40u: goto label_462e40;
        case 0x462e44u: goto label_462e44;
        case 0x462e48u: goto label_462e48;
        case 0x462e4cu: goto label_462e4c;
        case 0x462e50u: goto label_462e50;
        case 0x462e54u: goto label_462e54;
        case 0x462e58u: goto label_462e58;
        case 0x462e5cu: goto label_462e5c;
        case 0x462e60u: goto label_462e60;
        case 0x462e64u: goto label_462e64;
        case 0x462e68u: goto label_462e68;
        case 0x462e6cu: goto label_462e6c;
        case 0x462e70u: goto label_462e70;
        case 0x462e74u: goto label_462e74;
        case 0x462e78u: goto label_462e78;
        case 0x462e7cu: goto label_462e7c;
        case 0x462e80u: goto label_462e80;
        case 0x462e84u: goto label_462e84;
        case 0x462e88u: goto label_462e88;
        case 0x462e8cu: goto label_462e8c;
        case 0x462e90u: goto label_462e90;
        case 0x462e94u: goto label_462e94;
        case 0x462e98u: goto label_462e98;
        case 0x462e9cu: goto label_462e9c;
        case 0x462ea0u: goto label_462ea0;
        case 0x462ea4u: goto label_462ea4;
        case 0x462ea8u: goto label_462ea8;
        case 0x462eacu: goto label_462eac;
        case 0x462eb0u: goto label_462eb0;
        case 0x462eb4u: goto label_462eb4;
        case 0x462eb8u: goto label_462eb8;
        case 0x462ebcu: goto label_462ebc;
        case 0x462ec0u: goto label_462ec0;
        case 0x462ec4u: goto label_462ec4;
        case 0x462ec8u: goto label_462ec8;
        case 0x462eccu: goto label_462ecc;
        case 0x462ed0u: goto label_462ed0;
        case 0x462ed4u: goto label_462ed4;
        case 0x462ed8u: goto label_462ed8;
        case 0x462edcu: goto label_462edc;
        case 0x462ee0u: goto label_462ee0;
        case 0x462ee4u: goto label_462ee4;
        case 0x462ee8u: goto label_462ee8;
        case 0x462eecu: goto label_462eec;
        case 0x462ef0u: goto label_462ef0;
        case 0x462ef4u: goto label_462ef4;
        case 0x462ef8u: goto label_462ef8;
        case 0x462efcu: goto label_462efc;
        case 0x462f00u: goto label_462f00;
        case 0x462f04u: goto label_462f04;
        case 0x462f08u: goto label_462f08;
        case 0x462f0cu: goto label_462f0c;
        case 0x462f10u: goto label_462f10;
        case 0x462f14u: goto label_462f14;
        case 0x462f18u: goto label_462f18;
        case 0x462f1cu: goto label_462f1c;
        case 0x462f20u: goto label_462f20;
        case 0x462f24u: goto label_462f24;
        case 0x462f28u: goto label_462f28;
        case 0x462f2cu: goto label_462f2c;
        case 0x462f30u: goto label_462f30;
        case 0x462f34u: goto label_462f34;
        case 0x462f38u: goto label_462f38;
        case 0x462f3cu: goto label_462f3c;
        case 0x462f40u: goto label_462f40;
        case 0x462f44u: goto label_462f44;
        case 0x462f48u: goto label_462f48;
        case 0x462f4cu: goto label_462f4c;
        case 0x462f50u: goto label_462f50;
        case 0x462f54u: goto label_462f54;
        case 0x462f58u: goto label_462f58;
        case 0x462f5cu: goto label_462f5c;
        case 0x462f60u: goto label_462f60;
        case 0x462f64u: goto label_462f64;
        case 0x462f68u: goto label_462f68;
        case 0x462f6cu: goto label_462f6c;
        case 0x462f70u: goto label_462f70;
        case 0x462f74u: goto label_462f74;
        case 0x462f78u: goto label_462f78;
        case 0x462f7cu: goto label_462f7c;
        case 0x462f80u: goto label_462f80;
        case 0x462f84u: goto label_462f84;
        case 0x462f88u: goto label_462f88;
        case 0x462f8cu: goto label_462f8c;
        case 0x462f90u: goto label_462f90;
        case 0x462f94u: goto label_462f94;
        case 0x462f98u: goto label_462f98;
        case 0x462f9cu: goto label_462f9c;
        case 0x462fa0u: goto label_462fa0;
        case 0x462fa4u: goto label_462fa4;
        case 0x462fa8u: goto label_462fa8;
        case 0x462facu: goto label_462fac;
        case 0x462fb0u: goto label_462fb0;
        case 0x462fb4u: goto label_462fb4;
        case 0x462fb8u: goto label_462fb8;
        case 0x462fbcu: goto label_462fbc;
        case 0x462fc0u: goto label_462fc0;
        case 0x462fc4u: goto label_462fc4;
        case 0x462fc8u: goto label_462fc8;
        case 0x462fccu: goto label_462fcc;
        case 0x462fd0u: goto label_462fd0;
        case 0x462fd4u: goto label_462fd4;
        case 0x462fd8u: goto label_462fd8;
        case 0x462fdcu: goto label_462fdc;
        case 0x462fe0u: goto label_462fe0;
        case 0x462fe4u: goto label_462fe4;
        case 0x462fe8u: goto label_462fe8;
        case 0x462fecu: goto label_462fec;
        case 0x462ff0u: goto label_462ff0;
        case 0x462ff4u: goto label_462ff4;
        case 0x462ff8u: goto label_462ff8;
        case 0x462ffcu: goto label_462ffc;
        case 0x463000u: goto label_463000;
        case 0x463004u: goto label_463004;
        case 0x463008u: goto label_463008;
        case 0x46300cu: goto label_46300c;
        case 0x463010u: goto label_463010;
        case 0x463014u: goto label_463014;
        case 0x463018u: goto label_463018;
        case 0x46301cu: goto label_46301c;
        case 0x463020u: goto label_463020;
        case 0x463024u: goto label_463024;
        case 0x463028u: goto label_463028;
        case 0x46302cu: goto label_46302c;
        case 0x463030u: goto label_463030;
        case 0x463034u: goto label_463034;
        case 0x463038u: goto label_463038;
        case 0x46303cu: goto label_46303c;
        case 0x463040u: goto label_463040;
        case 0x463044u: goto label_463044;
        case 0x463048u: goto label_463048;
        case 0x46304cu: goto label_46304c;
        case 0x463050u: goto label_463050;
        case 0x463054u: goto label_463054;
        case 0x463058u: goto label_463058;
        case 0x46305cu: goto label_46305c;
        case 0x463060u: goto label_463060;
        case 0x463064u: goto label_463064;
        case 0x463068u: goto label_463068;
        case 0x46306cu: goto label_46306c;
        case 0x463070u: goto label_463070;
        case 0x463074u: goto label_463074;
        case 0x463078u: goto label_463078;
        case 0x46307cu: goto label_46307c;
        case 0x463080u: goto label_463080;
        case 0x463084u: goto label_463084;
        case 0x463088u: goto label_463088;
        case 0x46308cu: goto label_46308c;
        case 0x463090u: goto label_463090;
        case 0x463094u: goto label_463094;
        case 0x463098u: goto label_463098;
        case 0x46309cu: goto label_46309c;
        case 0x4630a0u: goto label_4630a0;
        case 0x4630a4u: goto label_4630a4;
        case 0x4630a8u: goto label_4630a8;
        case 0x4630acu: goto label_4630ac;
        case 0x4630b0u: goto label_4630b0;
        case 0x4630b4u: goto label_4630b4;
        case 0x4630b8u: goto label_4630b8;
        case 0x4630bcu: goto label_4630bc;
        case 0x4630c0u: goto label_4630c0;
        case 0x4630c4u: goto label_4630c4;
        case 0x4630c8u: goto label_4630c8;
        case 0x4630ccu: goto label_4630cc;
        case 0x4630d0u: goto label_4630d0;
        case 0x4630d4u: goto label_4630d4;
        case 0x4630d8u: goto label_4630d8;
        case 0x4630dcu: goto label_4630dc;
        case 0x4630e0u: goto label_4630e0;
        case 0x4630e4u: goto label_4630e4;
        case 0x4630e8u: goto label_4630e8;
        case 0x4630ecu: goto label_4630ec;
        case 0x4630f0u: goto label_4630f0;
        case 0x4630f4u: goto label_4630f4;
        case 0x4630f8u: goto label_4630f8;
        case 0x4630fcu: goto label_4630fc;
        case 0x463100u: goto label_463100;
        case 0x463104u: goto label_463104;
        case 0x463108u: goto label_463108;
        case 0x46310cu: goto label_46310c;
        case 0x463110u: goto label_463110;
        case 0x463114u: goto label_463114;
        case 0x463118u: goto label_463118;
        case 0x46311cu: goto label_46311c;
        case 0x463120u: goto label_463120;
        case 0x463124u: goto label_463124;
        case 0x463128u: goto label_463128;
        case 0x46312cu: goto label_46312c;
        case 0x463130u: goto label_463130;
        case 0x463134u: goto label_463134;
        case 0x463138u: goto label_463138;
        case 0x46313cu: goto label_46313c;
        case 0x463140u: goto label_463140;
        case 0x463144u: goto label_463144;
        case 0x463148u: goto label_463148;
        case 0x46314cu: goto label_46314c;
        case 0x463150u: goto label_463150;
        case 0x463154u: goto label_463154;
        case 0x463158u: goto label_463158;
        case 0x46315cu: goto label_46315c;
        case 0x463160u: goto label_463160;
        case 0x463164u: goto label_463164;
        case 0x463168u: goto label_463168;
        case 0x46316cu: goto label_46316c;
        case 0x463170u: goto label_463170;
        case 0x463174u: goto label_463174;
        case 0x463178u: goto label_463178;
        case 0x46317cu: goto label_46317c;
        case 0x463180u: goto label_463180;
        case 0x463184u: goto label_463184;
        case 0x463188u: goto label_463188;
        case 0x46318cu: goto label_46318c;
        case 0x463190u: goto label_463190;
        case 0x463194u: goto label_463194;
        case 0x463198u: goto label_463198;
        case 0x46319cu: goto label_46319c;
        case 0x4631a0u: goto label_4631a0;
        case 0x4631a4u: goto label_4631a4;
        case 0x4631a8u: goto label_4631a8;
        case 0x4631acu: goto label_4631ac;
        case 0x4631b0u: goto label_4631b0;
        case 0x4631b4u: goto label_4631b4;
        case 0x4631b8u: goto label_4631b8;
        case 0x4631bcu: goto label_4631bc;
        case 0x4631c0u: goto label_4631c0;
        case 0x4631c4u: goto label_4631c4;
        case 0x4631c8u: goto label_4631c8;
        case 0x4631ccu: goto label_4631cc;
        case 0x4631d0u: goto label_4631d0;
        case 0x4631d4u: goto label_4631d4;
        case 0x4631d8u: goto label_4631d8;
        case 0x4631dcu: goto label_4631dc;
        case 0x4631e0u: goto label_4631e0;
        case 0x4631e4u: goto label_4631e4;
        case 0x4631e8u: goto label_4631e8;
        case 0x4631ecu: goto label_4631ec;
        case 0x4631f0u: goto label_4631f0;
        case 0x4631f4u: goto label_4631f4;
        case 0x4631f8u: goto label_4631f8;
        case 0x4631fcu: goto label_4631fc;
        case 0x463200u: goto label_463200;
        case 0x463204u: goto label_463204;
        case 0x463208u: goto label_463208;
        case 0x46320cu: goto label_46320c;
        case 0x463210u: goto label_463210;
        case 0x463214u: goto label_463214;
        case 0x463218u: goto label_463218;
        case 0x46321cu: goto label_46321c;
        case 0x463220u: goto label_463220;
        case 0x463224u: goto label_463224;
        case 0x463228u: goto label_463228;
        case 0x46322cu: goto label_46322c;
        case 0x463230u: goto label_463230;
        case 0x463234u: goto label_463234;
        case 0x463238u: goto label_463238;
        case 0x46323cu: goto label_46323c;
        case 0x463240u: goto label_463240;
        case 0x463244u: goto label_463244;
        case 0x463248u: goto label_463248;
        case 0x46324cu: goto label_46324c;
        case 0x463250u: goto label_463250;
        case 0x463254u: goto label_463254;
        case 0x463258u: goto label_463258;
        case 0x46325cu: goto label_46325c;
        case 0x463260u: goto label_463260;
        case 0x463264u: goto label_463264;
        case 0x463268u: goto label_463268;
        case 0x46326cu: goto label_46326c;
        case 0x463270u: goto label_463270;
        case 0x463274u: goto label_463274;
        case 0x463278u: goto label_463278;
        case 0x46327cu: goto label_46327c;
        case 0x463280u: goto label_463280;
        case 0x463284u: goto label_463284;
        case 0x463288u: goto label_463288;
        case 0x46328cu: goto label_46328c;
        case 0x463290u: goto label_463290;
        case 0x463294u: goto label_463294;
        case 0x463298u: goto label_463298;
        case 0x46329cu: goto label_46329c;
        case 0x4632a0u: goto label_4632a0;
        case 0x4632a4u: goto label_4632a4;
        case 0x4632a8u: goto label_4632a8;
        case 0x4632acu: goto label_4632ac;
        case 0x4632b0u: goto label_4632b0;
        case 0x4632b4u: goto label_4632b4;
        case 0x4632b8u: goto label_4632b8;
        case 0x4632bcu: goto label_4632bc;
        case 0x4632c0u: goto label_4632c0;
        case 0x4632c4u: goto label_4632c4;
        case 0x4632c8u: goto label_4632c8;
        case 0x4632ccu: goto label_4632cc;
        case 0x4632d0u: goto label_4632d0;
        case 0x4632d4u: goto label_4632d4;
        case 0x4632d8u: goto label_4632d8;
        case 0x4632dcu: goto label_4632dc;
        case 0x4632e0u: goto label_4632e0;
        case 0x4632e4u: goto label_4632e4;
        case 0x4632e8u: goto label_4632e8;
        case 0x4632ecu: goto label_4632ec;
        case 0x4632f0u: goto label_4632f0;
        case 0x4632f4u: goto label_4632f4;
        case 0x4632f8u: goto label_4632f8;
        case 0x4632fcu: goto label_4632fc;
        case 0x463300u: goto label_463300;
        case 0x463304u: goto label_463304;
        case 0x463308u: goto label_463308;
        case 0x46330cu: goto label_46330c;
        case 0x463310u: goto label_463310;
        case 0x463314u: goto label_463314;
        case 0x463318u: goto label_463318;
        case 0x46331cu: goto label_46331c;
        case 0x463320u: goto label_463320;
        case 0x463324u: goto label_463324;
        case 0x463328u: goto label_463328;
        case 0x46332cu: goto label_46332c;
        case 0x463330u: goto label_463330;
        case 0x463334u: goto label_463334;
        case 0x463338u: goto label_463338;
        case 0x46333cu: goto label_46333c;
        case 0x463340u: goto label_463340;
        case 0x463344u: goto label_463344;
        case 0x463348u: goto label_463348;
        case 0x46334cu: goto label_46334c;
        case 0x463350u: goto label_463350;
        case 0x463354u: goto label_463354;
        case 0x463358u: goto label_463358;
        case 0x46335cu: goto label_46335c;
        case 0x463360u: goto label_463360;
        case 0x463364u: goto label_463364;
        case 0x463368u: goto label_463368;
        case 0x46336cu: goto label_46336c;
        case 0x463370u: goto label_463370;
        case 0x463374u: goto label_463374;
        case 0x463378u: goto label_463378;
        case 0x46337cu: goto label_46337c;
        case 0x463380u: goto label_463380;
        case 0x463384u: goto label_463384;
        case 0x463388u: goto label_463388;
        case 0x46338cu: goto label_46338c;
        case 0x463390u: goto label_463390;
        case 0x463394u: goto label_463394;
        case 0x463398u: goto label_463398;
        case 0x46339cu: goto label_46339c;
        case 0x4633a0u: goto label_4633a0;
        case 0x4633a4u: goto label_4633a4;
        case 0x4633a8u: goto label_4633a8;
        case 0x4633acu: goto label_4633ac;
        case 0x4633b0u: goto label_4633b0;
        case 0x4633b4u: goto label_4633b4;
        case 0x4633b8u: goto label_4633b8;
        case 0x4633bcu: goto label_4633bc;
        case 0x4633c0u: goto label_4633c0;
        case 0x4633c4u: goto label_4633c4;
        case 0x4633c8u: goto label_4633c8;
        case 0x4633ccu: goto label_4633cc;
        case 0x4633d0u: goto label_4633d0;
        case 0x4633d4u: goto label_4633d4;
        case 0x4633d8u: goto label_4633d8;
        case 0x4633dcu: goto label_4633dc;
        case 0x4633e0u: goto label_4633e0;
        case 0x4633e4u: goto label_4633e4;
        case 0x4633e8u: goto label_4633e8;
        case 0x4633ecu: goto label_4633ec;
        case 0x4633f0u: goto label_4633f0;
        case 0x4633f4u: goto label_4633f4;
        case 0x4633f8u: goto label_4633f8;
        case 0x4633fcu: goto label_4633fc;
        case 0x463400u: goto label_463400;
        case 0x463404u: goto label_463404;
        case 0x463408u: goto label_463408;
        case 0x46340cu: goto label_46340c;
        case 0x463410u: goto label_463410;
        case 0x463414u: goto label_463414;
        case 0x463418u: goto label_463418;
        case 0x46341cu: goto label_46341c;
        case 0x463420u: goto label_463420;
        case 0x463424u: goto label_463424;
        case 0x463428u: goto label_463428;
        case 0x46342cu: goto label_46342c;
        case 0x463430u: goto label_463430;
        case 0x463434u: goto label_463434;
        case 0x463438u: goto label_463438;
        case 0x46343cu: goto label_46343c;
        case 0x463440u: goto label_463440;
        case 0x463444u: goto label_463444;
        case 0x463448u: goto label_463448;
        case 0x46344cu: goto label_46344c;
        case 0x463450u: goto label_463450;
        case 0x463454u: goto label_463454;
        case 0x463458u: goto label_463458;
        case 0x46345cu: goto label_46345c;
        case 0x463460u: goto label_463460;
        case 0x463464u: goto label_463464;
        case 0x463468u: goto label_463468;
        case 0x46346cu: goto label_46346c;
        case 0x463470u: goto label_463470;
        case 0x463474u: goto label_463474;
        case 0x463478u: goto label_463478;
        case 0x46347cu: goto label_46347c;
        case 0x463480u: goto label_463480;
        case 0x463484u: goto label_463484;
        case 0x463488u: goto label_463488;
        case 0x46348cu: goto label_46348c;
        case 0x463490u: goto label_463490;
        case 0x463494u: goto label_463494;
        case 0x463498u: goto label_463498;
        case 0x46349cu: goto label_46349c;
        case 0x4634a0u: goto label_4634a0;
        case 0x4634a4u: goto label_4634a4;
        case 0x4634a8u: goto label_4634a8;
        case 0x4634acu: goto label_4634ac;
        case 0x4634b0u: goto label_4634b0;
        case 0x4634b4u: goto label_4634b4;
        case 0x4634b8u: goto label_4634b8;
        case 0x4634bcu: goto label_4634bc;
        case 0x4634c0u: goto label_4634c0;
        case 0x4634c4u: goto label_4634c4;
        case 0x4634c8u: goto label_4634c8;
        case 0x4634ccu: goto label_4634cc;
        case 0x4634d0u: goto label_4634d0;
        case 0x4634d4u: goto label_4634d4;
        case 0x4634d8u: goto label_4634d8;
        case 0x4634dcu: goto label_4634dc;
        case 0x4634e0u: goto label_4634e0;
        case 0x4634e4u: goto label_4634e4;
        case 0x4634e8u: goto label_4634e8;
        case 0x4634ecu: goto label_4634ec;
        case 0x4634f0u: goto label_4634f0;
        case 0x4634f4u: goto label_4634f4;
        case 0x4634f8u: goto label_4634f8;
        case 0x4634fcu: goto label_4634fc;
        case 0x463500u: goto label_463500;
        case 0x463504u: goto label_463504;
        case 0x463508u: goto label_463508;
        case 0x46350cu: goto label_46350c;
        case 0x463510u: goto label_463510;
        case 0x463514u: goto label_463514;
        case 0x463518u: goto label_463518;
        case 0x46351cu: goto label_46351c;
        case 0x463520u: goto label_463520;
        case 0x463524u: goto label_463524;
        case 0x463528u: goto label_463528;
        case 0x46352cu: goto label_46352c;
        case 0x463530u: goto label_463530;
        case 0x463534u: goto label_463534;
        case 0x463538u: goto label_463538;
        case 0x46353cu: goto label_46353c;
        case 0x463540u: goto label_463540;
        case 0x463544u: goto label_463544;
        case 0x463548u: goto label_463548;
        case 0x46354cu: goto label_46354c;
        case 0x463550u: goto label_463550;
        case 0x463554u: goto label_463554;
        case 0x463558u: goto label_463558;
        case 0x46355cu: goto label_46355c;
        case 0x463560u: goto label_463560;
        case 0x463564u: goto label_463564;
        case 0x463568u: goto label_463568;
        case 0x46356cu: goto label_46356c;
        case 0x463570u: goto label_463570;
        case 0x463574u: goto label_463574;
        case 0x463578u: goto label_463578;
        case 0x46357cu: goto label_46357c;
        case 0x463580u: goto label_463580;
        case 0x463584u: goto label_463584;
        case 0x463588u: goto label_463588;
        case 0x46358cu: goto label_46358c;
        case 0x463590u: goto label_463590;
        case 0x463594u: goto label_463594;
        case 0x463598u: goto label_463598;
        case 0x46359cu: goto label_46359c;
        case 0x4635a0u: goto label_4635a0;
        case 0x4635a4u: goto label_4635a4;
        case 0x4635a8u: goto label_4635a8;
        case 0x4635acu: goto label_4635ac;
        case 0x4635b0u: goto label_4635b0;
        case 0x4635b4u: goto label_4635b4;
        case 0x4635b8u: goto label_4635b8;
        case 0x4635bcu: goto label_4635bc;
        case 0x4635c0u: goto label_4635c0;
        case 0x4635c4u: goto label_4635c4;
        case 0x4635c8u: goto label_4635c8;
        case 0x4635ccu: goto label_4635cc;
        case 0x4635d0u: goto label_4635d0;
        case 0x4635d4u: goto label_4635d4;
        case 0x4635d8u: goto label_4635d8;
        case 0x4635dcu: goto label_4635dc;
        case 0x4635e0u: goto label_4635e0;
        case 0x4635e4u: goto label_4635e4;
        case 0x4635e8u: goto label_4635e8;
        case 0x4635ecu: goto label_4635ec;
        case 0x4635f0u: goto label_4635f0;
        case 0x4635f4u: goto label_4635f4;
        case 0x4635f8u: goto label_4635f8;
        case 0x4635fcu: goto label_4635fc;
        case 0x463600u: goto label_463600;
        case 0x463604u: goto label_463604;
        case 0x463608u: goto label_463608;
        case 0x46360cu: goto label_46360c;
        case 0x463610u: goto label_463610;
        case 0x463614u: goto label_463614;
        case 0x463618u: goto label_463618;
        case 0x46361cu: goto label_46361c;
        case 0x463620u: goto label_463620;
        case 0x463624u: goto label_463624;
        case 0x463628u: goto label_463628;
        case 0x46362cu: goto label_46362c;
        case 0x463630u: goto label_463630;
        case 0x463634u: goto label_463634;
        case 0x463638u: goto label_463638;
        case 0x46363cu: goto label_46363c;
        case 0x463640u: goto label_463640;
        case 0x463644u: goto label_463644;
        case 0x463648u: goto label_463648;
        case 0x46364cu: goto label_46364c;
        case 0x463650u: goto label_463650;
        case 0x463654u: goto label_463654;
        case 0x463658u: goto label_463658;
        case 0x46365cu: goto label_46365c;
        case 0x463660u: goto label_463660;
        case 0x463664u: goto label_463664;
        case 0x463668u: goto label_463668;
        case 0x46366cu: goto label_46366c;
        case 0x463670u: goto label_463670;
        case 0x463674u: goto label_463674;
        case 0x463678u: goto label_463678;
        case 0x46367cu: goto label_46367c;
        case 0x463680u: goto label_463680;
        case 0x463684u: goto label_463684;
        case 0x463688u: goto label_463688;
        case 0x46368cu: goto label_46368c;
        case 0x463690u: goto label_463690;
        case 0x463694u: goto label_463694;
        case 0x463698u: goto label_463698;
        case 0x46369cu: goto label_46369c;
        case 0x4636a0u: goto label_4636a0;
        case 0x4636a4u: goto label_4636a4;
        case 0x4636a8u: goto label_4636a8;
        case 0x4636acu: goto label_4636ac;
        case 0x4636b0u: goto label_4636b0;
        case 0x4636b4u: goto label_4636b4;
        case 0x4636b8u: goto label_4636b8;
        case 0x4636bcu: goto label_4636bc;
        case 0x4636c0u: goto label_4636c0;
        case 0x4636c4u: goto label_4636c4;
        case 0x4636c8u: goto label_4636c8;
        case 0x4636ccu: goto label_4636cc;
        case 0x4636d0u: goto label_4636d0;
        case 0x4636d4u: goto label_4636d4;
        case 0x4636d8u: goto label_4636d8;
        case 0x4636dcu: goto label_4636dc;
        case 0x4636e0u: goto label_4636e0;
        case 0x4636e4u: goto label_4636e4;
        case 0x4636e8u: goto label_4636e8;
        case 0x4636ecu: goto label_4636ec;
        case 0x4636f0u: goto label_4636f0;
        case 0x4636f4u: goto label_4636f4;
        case 0x4636f8u: goto label_4636f8;
        case 0x4636fcu: goto label_4636fc;
        case 0x463700u: goto label_463700;
        case 0x463704u: goto label_463704;
        case 0x463708u: goto label_463708;
        case 0x46370cu: goto label_46370c;
        case 0x463710u: goto label_463710;
        case 0x463714u: goto label_463714;
        case 0x463718u: goto label_463718;
        case 0x46371cu: goto label_46371c;
        case 0x463720u: goto label_463720;
        case 0x463724u: goto label_463724;
        case 0x463728u: goto label_463728;
        case 0x46372cu: goto label_46372c;
        case 0x463730u: goto label_463730;
        case 0x463734u: goto label_463734;
        case 0x463738u: goto label_463738;
        case 0x46373cu: goto label_46373c;
        case 0x463740u: goto label_463740;
        case 0x463744u: goto label_463744;
        case 0x463748u: goto label_463748;
        case 0x46374cu: goto label_46374c;
        case 0x463750u: goto label_463750;
        case 0x463754u: goto label_463754;
        case 0x463758u: goto label_463758;
        case 0x46375cu: goto label_46375c;
        case 0x463760u: goto label_463760;
        case 0x463764u: goto label_463764;
        case 0x463768u: goto label_463768;
        case 0x46376cu: goto label_46376c;
        case 0x463770u: goto label_463770;
        case 0x463774u: goto label_463774;
        case 0x463778u: goto label_463778;
        case 0x46377cu: goto label_46377c;
        case 0x463780u: goto label_463780;
        case 0x463784u: goto label_463784;
        case 0x463788u: goto label_463788;
        case 0x46378cu: goto label_46378c;
        case 0x463790u: goto label_463790;
        case 0x463794u: goto label_463794;
        case 0x463798u: goto label_463798;
        case 0x46379cu: goto label_46379c;
        case 0x4637a0u: goto label_4637a0;
        case 0x4637a4u: goto label_4637a4;
        case 0x4637a8u: goto label_4637a8;
        case 0x4637acu: goto label_4637ac;
        case 0x4637b0u: goto label_4637b0;
        case 0x4637b4u: goto label_4637b4;
        case 0x4637b8u: goto label_4637b8;
        case 0x4637bcu: goto label_4637bc;
        case 0x4637c0u: goto label_4637c0;
        case 0x4637c4u: goto label_4637c4;
        case 0x4637c8u: goto label_4637c8;
        case 0x4637ccu: goto label_4637cc;
        case 0x4637d0u: goto label_4637d0;
        case 0x4637d4u: goto label_4637d4;
        case 0x4637d8u: goto label_4637d8;
        case 0x4637dcu: goto label_4637dc;
        case 0x4637e0u: goto label_4637e0;
        case 0x4637e4u: goto label_4637e4;
        case 0x4637e8u: goto label_4637e8;
        case 0x4637ecu: goto label_4637ec;
        case 0x4637f0u: goto label_4637f0;
        case 0x4637f4u: goto label_4637f4;
        case 0x4637f8u: goto label_4637f8;
        case 0x4637fcu: goto label_4637fc;
        case 0x463800u: goto label_463800;
        case 0x463804u: goto label_463804;
        case 0x463808u: goto label_463808;
        case 0x46380cu: goto label_46380c;
        case 0x463810u: goto label_463810;
        case 0x463814u: goto label_463814;
        case 0x463818u: goto label_463818;
        case 0x46381cu: goto label_46381c;
        case 0x463820u: goto label_463820;
        case 0x463824u: goto label_463824;
        case 0x463828u: goto label_463828;
        case 0x46382cu: goto label_46382c;
        case 0x463830u: goto label_463830;
        case 0x463834u: goto label_463834;
        case 0x463838u: goto label_463838;
        case 0x46383cu: goto label_46383c;
        case 0x463840u: goto label_463840;
        case 0x463844u: goto label_463844;
        case 0x463848u: goto label_463848;
        case 0x46384cu: goto label_46384c;
        case 0x463850u: goto label_463850;
        case 0x463854u: goto label_463854;
        case 0x463858u: goto label_463858;
        case 0x46385cu: goto label_46385c;
        case 0x463860u: goto label_463860;
        case 0x463864u: goto label_463864;
        case 0x463868u: goto label_463868;
        case 0x46386cu: goto label_46386c;
        case 0x463870u: goto label_463870;
        case 0x463874u: goto label_463874;
        case 0x463878u: goto label_463878;
        case 0x46387cu: goto label_46387c;
        case 0x463880u: goto label_463880;
        case 0x463884u: goto label_463884;
        case 0x463888u: goto label_463888;
        case 0x46388cu: goto label_46388c;
        case 0x463890u: goto label_463890;
        case 0x463894u: goto label_463894;
        case 0x463898u: goto label_463898;
        case 0x46389cu: goto label_46389c;
        case 0x4638a0u: goto label_4638a0;
        case 0x4638a4u: goto label_4638a4;
        case 0x4638a8u: goto label_4638a8;
        case 0x4638acu: goto label_4638ac;
        case 0x4638b0u: goto label_4638b0;
        case 0x4638b4u: goto label_4638b4;
        case 0x4638b8u: goto label_4638b8;
        case 0x4638bcu: goto label_4638bc;
        case 0x4638c0u: goto label_4638c0;
        case 0x4638c4u: goto label_4638c4;
        case 0x4638c8u: goto label_4638c8;
        case 0x4638ccu: goto label_4638cc;
        case 0x4638d0u: goto label_4638d0;
        case 0x4638d4u: goto label_4638d4;
        case 0x4638d8u: goto label_4638d8;
        case 0x4638dcu: goto label_4638dc;
        case 0x4638e0u: goto label_4638e0;
        case 0x4638e4u: goto label_4638e4;
        case 0x4638e8u: goto label_4638e8;
        case 0x4638ecu: goto label_4638ec;
        case 0x4638f0u: goto label_4638f0;
        case 0x4638f4u: goto label_4638f4;
        case 0x4638f8u: goto label_4638f8;
        case 0x4638fcu: goto label_4638fc;
        case 0x463900u: goto label_463900;
        case 0x463904u: goto label_463904;
        case 0x463908u: goto label_463908;
        case 0x46390cu: goto label_46390c;
        case 0x463910u: goto label_463910;
        case 0x463914u: goto label_463914;
        case 0x463918u: goto label_463918;
        case 0x46391cu: goto label_46391c;
        case 0x463920u: goto label_463920;
        case 0x463924u: goto label_463924;
        case 0x463928u: goto label_463928;
        case 0x46392cu: goto label_46392c;
        case 0x463930u: goto label_463930;
        case 0x463934u: goto label_463934;
        case 0x463938u: goto label_463938;
        case 0x46393cu: goto label_46393c;
        case 0x463940u: goto label_463940;
        case 0x463944u: goto label_463944;
        case 0x463948u: goto label_463948;
        case 0x46394cu: goto label_46394c;
        case 0x463950u: goto label_463950;
        case 0x463954u: goto label_463954;
        case 0x463958u: goto label_463958;
        case 0x46395cu: goto label_46395c;
        case 0x463960u: goto label_463960;
        case 0x463964u: goto label_463964;
        case 0x463968u: goto label_463968;
        case 0x46396cu: goto label_46396c;
        case 0x463970u: goto label_463970;
        case 0x463974u: goto label_463974;
        case 0x463978u: goto label_463978;
        case 0x46397cu: goto label_46397c;
        case 0x463980u: goto label_463980;
        case 0x463984u: goto label_463984;
        case 0x463988u: goto label_463988;
        case 0x46398cu: goto label_46398c;
        case 0x463990u: goto label_463990;
        case 0x463994u: goto label_463994;
        case 0x463998u: goto label_463998;
        case 0x46399cu: goto label_46399c;
        case 0x4639a0u: goto label_4639a0;
        case 0x4639a4u: goto label_4639a4;
        case 0x4639a8u: goto label_4639a8;
        case 0x4639acu: goto label_4639ac;
        case 0x4639b0u: goto label_4639b0;
        case 0x4639b4u: goto label_4639b4;
        case 0x4639b8u: goto label_4639b8;
        case 0x4639bcu: goto label_4639bc;
        case 0x4639c0u: goto label_4639c0;
        case 0x4639c4u: goto label_4639c4;
        case 0x4639c8u: goto label_4639c8;
        case 0x4639ccu: goto label_4639cc;
        case 0x4639d0u: goto label_4639d0;
        case 0x4639d4u: goto label_4639d4;
        case 0x4639d8u: goto label_4639d8;
        case 0x4639dcu: goto label_4639dc;
        case 0x4639e0u: goto label_4639e0;
        case 0x4639e4u: goto label_4639e4;
        case 0x4639e8u: goto label_4639e8;
        case 0x4639ecu: goto label_4639ec;
        case 0x4639f0u: goto label_4639f0;
        case 0x4639f4u: goto label_4639f4;
        case 0x4639f8u: goto label_4639f8;
        case 0x4639fcu: goto label_4639fc;
        case 0x463a00u: goto label_463a00;
        case 0x463a04u: goto label_463a04;
        case 0x463a08u: goto label_463a08;
        case 0x463a0cu: goto label_463a0c;
        case 0x463a10u: goto label_463a10;
        case 0x463a14u: goto label_463a14;
        case 0x463a18u: goto label_463a18;
        case 0x463a1cu: goto label_463a1c;
        case 0x463a20u: goto label_463a20;
        case 0x463a24u: goto label_463a24;
        case 0x463a28u: goto label_463a28;
        case 0x463a2cu: goto label_463a2c;
        case 0x463a30u: goto label_463a30;
        case 0x463a34u: goto label_463a34;
        case 0x463a38u: goto label_463a38;
        case 0x463a3cu: goto label_463a3c;
        case 0x463a40u: goto label_463a40;
        case 0x463a44u: goto label_463a44;
        case 0x463a48u: goto label_463a48;
        case 0x463a4cu: goto label_463a4c;
        case 0x463a50u: goto label_463a50;
        case 0x463a54u: goto label_463a54;
        case 0x463a58u: goto label_463a58;
        case 0x463a5cu: goto label_463a5c;
        default: break;
    }

    ctx->pc = 0x462e20u;

label_462e20:
    // 0x462e20: 0x27bdf4a0  addiu       $sp, $sp, -0xB60
    ctx->pc = 0x462e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964384));
label_462e24:
    // 0x462e24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x462e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_462e28:
    // 0x462e28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x462e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_462e2c:
    // 0x462e2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x462e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_462e30:
    // 0x462e30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x462e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_462e34:
    // 0x462e34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x462e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_462e38:
    // 0x462e38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x462e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_462e3c:
    // 0x462e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x462e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_462e40:
    // 0x462e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x462e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_462e44:
    // 0x462e44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x462e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_462e48:
    // 0x462e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x462e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_462e4c:
    // 0x462e4c: 0xafa40b30  sw          $a0, 0xB30($sp)
    ctx->pc = 0x462e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2864), GPR_U32(ctx, 4));
label_462e50:
    // 0x462e50: 0xafa50b40  sw          $a1, 0xB40($sp)
    ctx->pc = 0x462e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2880), GPR_U32(ctx, 5));
label_462e54:
    // 0x462e54: 0xafa60b50  sw          $a2, 0xB50($sp)
    ctx->pc = 0x462e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2896), GPR_U32(ctx, 6));
label_462e58:
    // 0x462e58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x462e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462e5c:
    // 0x462e5c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x462e5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462e60:
    // 0x462e60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x462e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462e64:
    // 0x462e64: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x462e64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462e68:
    // 0x462e68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x462e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462e6c:
    // 0x462e6c: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x462e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_462e70:
    // 0x462e70: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x462e70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_462e74:
    // 0x462e74: 0x102002b9  beqz        $at, . + 4 + (0x2B9 << 2)
label_462e78:
    if (ctx->pc == 0x462E78u) {
        ctx->pc = 0x462E7Cu;
        goto label_462e7c;
    }
    ctx->pc = 0x462E74u;
    {
        const bool branch_taken_0x462e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x462e74) {
            ctx->pc = 0x46395Cu;
            goto label_46395c;
        }
    }
    ctx->pc = 0x462E7Cu;
label_462e7c:
    // 0x462e7c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x462e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_462e80:
    // 0x462e80: 0x24841a70  addiu       $a0, $a0, 0x1A70
    ctx->pc = 0x462e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6768));
label_462e84:
    // 0x462e84: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x462e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_462e88:
    // 0x462e88: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x462e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_462e8c:
    // 0x462e8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x462e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_462e90:
    // 0x462e90: 0x600008  jr          $v1
label_462e94:
    if (ctx->pc == 0x462E94u) {
        ctx->pc = 0x462E98u;
        goto label_462e98;
    }
    ctx->pc = 0x462E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x462E98u: goto label_462e98;
            case 0x462FD8u: goto label_462fd8;
            case 0x4631A4u: goto label_4631a4;
            case 0x463440u: goto label_463440;
            case 0x4635ECu: goto label_4635ec;
            case 0x46380Cu: goto label_46380c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462E90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x462E98u;
label_462e98:
    // 0x462e98: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x462e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_462e9c:
    // 0x462e9c: 0x24844e3c  addiu       $a0, $a0, 0x4E3C
    ctx->pc = 0x462e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20028));
label_462ea0:
    // 0x462ea0: 0xc0bc60c  jal         func_2F1830
label_462ea4:
    if (ctx->pc == 0x462EA4u) {
        ctx->pc = 0x462EA8u;
        goto label_462ea8;
    }
    ctx->pc = 0x462EA0u;
    SET_GPR_U32(ctx, 31, 0x462EA8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x462EA0u, 0x462EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462EA8u;
label_462ea8:
    // 0x462ea8: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x462ea8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_462eac:
    // 0x462eac: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_462eb0:
    if (ctx->pc == 0x462EB0u) {
        ctx->pc = 0x462EB4u;
        goto label_462eb4;
    }
    ctx->pc = 0x462EACu;
    {
        const bool branch_taken_0x462eac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x462eac) {
            ctx->pc = 0x462EE8u;
            goto label_462ee8;
        }
    }
    ctx->pc = 0x462EB4u;
label_462eb4:
    // 0x462eb4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x462eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_462eb8:
    // 0x462eb8: 0x24a54e3c  addiu       $a1, $a1, 0x4E3C
    ctx->pc = 0x462eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20028));
label_462ebc:
    // 0x462ebc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x462ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_462ec0:
    // 0x462ec0: 0xc0bc60c  jal         func_2F1830
label_462ec4:
    if (ctx->pc == 0x462EC4u) {
        ctx->pc = 0x462EC8u;
        goto label_462ec8;
    }
    ctx->pc = 0x462EC0u;
    SET_GPR_U32(ctx, 31, 0x462EC8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x462EC0u, 0x462EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462EC8u;
label_462ec8:
    // 0x462ec8: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x462ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_462ecc:
    // 0x462ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x462eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462ed0:
    // 0x462ed0: 0x8f88bfb4  lw          $t0, -0x404C($gp)
    ctx->pc = 0x462ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_462ed4:
    // 0x462ed4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x462ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_462ed8:
    // 0x462ed8: 0xc1181ac  jal         func_4606B0
label_462edc:
    if (ctx->pc == 0x462EDCu) {
        ctx->pc = 0x462EE0u;
        goto label_462ee0;
    }
    ctx->pc = 0x462ED8u;
    SET_GPR_U32(ctx, 31, 0x462EE0u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462ED8u, 0x462EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462EE0u;
label_462ee0:
    // 0x462ee0: 0x100002d2  b           . + 4 + (0x2D2 << 2)
label_462ee4:
    if (ctx->pc == 0x462EE4u) {
        ctx->pc = 0x462EE8u;
        goto label_462ee8;
    }
    ctx->pc = 0x462EE0u;
    {
        const bool branch_taken_0x462ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462ee0) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x462EE8u;
label_462ee8:
    // 0x462ee8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x462ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_462eec:
    // 0x462eec: 0x24844e5c  addiu       $a0, $a0, 0x4E5C
    ctx->pc = 0x462eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20060));
label_462ef0:
    // 0x462ef0: 0xc0bc60c  jal         func_2F1830
label_462ef4:
    if (ctx->pc == 0x462EF4u) {
        ctx->pc = 0x462EF8u;
        goto label_462ef8;
    }
    ctx->pc = 0x462EF0u;
    SET_GPR_U32(ctx, 31, 0x462EF8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x462EF0u, 0x462EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462EF8u;
label_462ef8:
    // 0x462ef8: 0x2c410021  sltiu       $at, $v0, 0x21
    ctx->pc = 0x462ef8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_462efc:
    // 0x462efc: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_462f00:
    if (ctx->pc == 0x462F00u) {
        ctx->pc = 0x462F04u;
        goto label_462f04;
    }
    ctx->pc = 0x462EFCu;
    {
        const bool branch_taken_0x462efc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x462efc) {
            ctx->pc = 0x462F34u;
            goto label_462f34;
        }
    }
    ctx->pc = 0x462F04u;
label_462f04:
    // 0x462f04: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x462f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_462f08:
    // 0x462f08: 0x24a54e5c  addiu       $a1, $a1, 0x4E5C
    ctx->pc = 0x462f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20060));
label_462f0c:
    // 0x462f0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x462f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_462f10:
    // 0x462f10: 0xc0bc60c  jal         func_2F1830
label_462f14:
    if (ctx->pc == 0x462F14u) {
        ctx->pc = 0x462F18u;
        goto label_462f18;
    }
    ctx->pc = 0x462F10u;
    SET_GPR_U32(ctx, 31, 0x462F18u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x462F10u, 0x462F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462F18u;
label_462f18:
    // 0x462f18: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x462f18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_462f1c:
    // 0x462f1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x462f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462f20:
    // 0x462f20: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x462f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_462f24:
    // 0x462f24: 0xc1181ac  jal         func_4606B0
label_462f28:
    if (ctx->pc == 0x462F28u) {
        ctx->pc = 0x462F2Cu;
        goto label_462f2c;
    }
    ctx->pc = 0x462F24u;
    SET_GPR_U32(ctx, 31, 0x462F2Cu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462F24u, 0x462F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462F2Cu;
label_462f2c:
    // 0x462f2c: 0x100002bf  b           . + 4 + (0x2BF << 2)
label_462f30:
    if (ctx->pc == 0x462F30u) {
        ctx->pc = 0x462F34u;
        goto label_462f34;
    }
    ctx->pc = 0x462F2Cu;
    {
        const bool branch_taken_0x462f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462f2c) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x462F34u;
label_462f34:
    // 0x462f34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462f38:
    // 0x462f38: 0x8c424e38  lw          $v0, 0x4E38($v0)
    ctx->pc = 0x462f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20024)));
label_462f3c:
    // 0x462f3c: 0x244403ff  addiu       $a0, $v0, 0x3FF
    ctx->pc = 0x462f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_462f40:
    // 0x462f40: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x462f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_462f44:
    // 0x462f44: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x462f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
label_462f48:
    // 0x462f48: 0x24560001  addiu       $s6, $v0, 0x1
    ctx->pc = 0x462f48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_462f4c:
    // 0x462f4c: 0x27a40a80  addiu       $a0, $sp, 0xA80
    ctx->pc = 0x462f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_462f50:
    // 0x462f50: 0x2785b1d0  addiu       $a1, $gp, -0x4E30
    ctx->pc = 0x462f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947280));
label_462f54:
    // 0x462f54: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x462f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_462f58:
    // 0x462f58: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x462f58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_462f5c:
    // 0x462f5c: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x462f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_462f60:
    // 0x462f60: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x462f60u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_462f64:
    // 0x462f64: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x462f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_462f68:
    // 0x462f68: 0xc0bc3e2  jal         func_2F0F88
label_462f6c:
    if (ctx->pc == 0x462F6Cu) {
        ctx->pc = 0x462F70u;
        goto label_462f70;
    }
    ctx->pc = 0x462F68u;
    SET_GPR_U32(ctx, 31, 0x462F70u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x462F68u, 0x462F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462F70u;
label_462f70:
    // 0x462f70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x462f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462f74:
    // 0x462f74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462f78:
    // 0x462f78: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x462f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_462f7c:
    // 0x462f7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x462f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_462f80:
    // 0x462f80: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x462f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_462f84:
    // 0x462f84: 0x27a60a80  addiu       $a2, $sp, 0xA80
    ctx->pc = 0x462f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_462f88:
    // 0x462f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x462f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462f8c:
    // 0x462f8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x462f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462f90:
    // 0x462f90: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x462f90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_462f94:
    // 0x462f94: 0x25294ec0  addiu       $t1, $t1, 0x4EC0
    ctx->pc = 0x462f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20160));
label_462f98:
    // 0x462f98: 0xc0c3d52  jal         func_30F548
label_462f9c:
    if (ctx->pc == 0x462F9Cu) {
        ctx->pc = 0x462FA0u;
        goto label_462fa0;
    }
    ctx->pc = 0x462F98u;
    SET_GPR_U32(ctx, 31, 0x462FA0u);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x462F98u, 0x462FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462FA0u;
label_462fa0:
    // 0x462fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x462fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_462fa4:
    // 0x462fa4: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_462fa8:
    if (ctx->pc == 0x462FA8u) {
        ctx->pc = 0x462FACu;
        goto label_462fac;
    }
    ctx->pc = 0x462FA4u;
    {
        const bool branch_taken_0x462fa4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x462fa4) {
            ctx->pc = 0x462FC8u;
            goto label_462fc8;
        }
    }
    ctx->pc = 0x462FACu;
label_462fac:
    // 0x462fac: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x462facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_462fb0:
    // 0x462fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x462fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_462fb4:
    // 0x462fb4: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x462fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_462fb8:
    // 0x462fb8: 0xc1181ac  jal         func_4606B0
label_462fbc:
    if (ctx->pc == 0x462FBCu) {
        ctx->pc = 0x462FC0u;
        goto label_462fc0;
    }
    ctx->pc = 0x462FB8u;
    SET_GPR_U32(ctx, 31, 0x462FC0u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x462FB8u, 0x462FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462FC0u;
label_462fc0:
    // 0x462fc0: 0x1000029a  b           . + 4 + (0x29A << 2)
label_462fc4:
    if (ctx->pc == 0x462FC4u) {
        ctx->pc = 0x462FC8u;
        goto label_462fc8;
    }
    ctx->pc = 0x462FC0u;
    {
        const bool branch_taken_0x462fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462fc0) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x462FC8u;
label_462fc8:
    // 0x462fc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x462fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462fcc:
    // 0x462fcc: 0xaf85bfb0  sw          $a1, -0x4050($gp)
    ctx->pc = 0x462fccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 5));
label_462fd0:
    // 0x462fd0: 0x10000296  b           . + 4 + (0x296 << 2)
label_462fd4:
    if (ctx->pc == 0x462FD4u) {
        ctx->pc = 0x462FD8u;
        goto label_462fd8;
    }
    ctx->pc = 0x462FD0u;
    {
        const bool branch_taken_0x462fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x462fd0) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x462FD8u;
label_462fd8:
    // 0x462fd8: 0x8fa60b50  lw          $a2, 0xB50($sp)
    ctx->pc = 0x462fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2896)));
label_462fdc:
    // 0x462fdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x462fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_462fe0:
    // 0x462fe0: 0x14c70292  bne         $a2, $a3, . + 4 + (0x292 << 2)
label_462fe4:
    if (ctx->pc == 0x462FE4u) {
        ctx->pc = 0x462FE8u;
        goto label_462fe8;
    }
    ctx->pc = 0x462FE0u;
    {
        const bool branch_taken_0x462fe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x462fe0) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x462FE8u;
label_462fe8:
    // 0x462fe8: 0x8fa80b30  lw          $t0, 0xB30($sp)
    ctx->pc = 0x462fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2864)));
label_462fec:
    // 0x462fec: 0x3909000d  xori        $t1, $t0, 0xD
    ctx->pc = 0x462fecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)13);
label_462ff0:
    // 0x462ff0: 0x2d220001  sltiu       $v0, $t1, 0x1
    ctx->pc = 0x462ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_462ff4:
    // 0x462ff4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x462ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_462ff8:
    // 0x462ff8: 0x1480002b  bnez        $a0, . + 4 + (0x2B << 2)
label_462ffc:
    if (ctx->pc == 0x462FFCu) {
        ctx->pc = 0x463000u;
        goto label_463000;
    }
    ctx->pc = 0x462FF8u;
    {
        const bool branch_taken_0x462ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x462ff8) {
            ctx->pc = 0x4630A8u;
            goto label_4630a8;
        }
    }
    ctx->pc = 0x463000u;
label_463000:
    // 0x463000: 0x8f85b268  lw          $a1, -0x4D98($gp)
    ctx->pc = 0x463000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947432)));
label_463004:
    // 0x463004: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_463008:
    if (ctx->pc == 0x463008u) {
        ctx->pc = 0x46300Cu;
        goto label_46300c;
    }
    ctx->pc = 0x463004u;
    {
        const bool branch_taken_0x463004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x463004) {
            ctx->pc = 0x4630A8u;
            goto label_4630a8;
        }
    }
    ctx->pc = 0x46300Cu;
label_46300c:
    // 0x46300c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_463010:
    // 0x463010: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463014:
    // 0x463014: 0x27a60b20  addiu       $a2, $sp, 0xB20
    ctx->pc = 0x463014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2848));
label_463018:
    // 0x463018: 0xc115ee8  jal         func_457BA0
label_46301c:
    if (ctx->pc == 0x46301Cu) {
        ctx->pc = 0x463020u;
        goto label_463020;
    }
    ctx->pc = 0x463018u;
    SET_GPR_U32(ctx, 31, 0x463020u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x463018u, 0x463020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463020u;
label_463020:
    // 0x463020: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_463024:
    if (ctx->pc == 0x463024u) {
        ctx->pc = 0x463028u;
        goto label_463028;
    }
    ctx->pc = 0x463020u;
    {
        const bool branch_taken_0x463020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463020) {
            ctx->pc = 0x4630A8u;
            goto label_4630a8;
        }
    }
    ctx->pc = 0x463028u;
label_463028:
    // 0x463028: 0x8fa20b28  lw          $v0, 0xB28($sp)
    ctx->pc = 0x463028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2856)));
label_46302c:
    // 0x46302c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_463030:
    if (ctx->pc == 0x463030u) {
        ctx->pc = 0x463034u;
        goto label_463034;
    }
    ctx->pc = 0x46302Cu;
    {
        const bool branch_taken_0x46302c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46302c) {
            ctx->pc = 0x4630A8u;
            goto label_4630a8;
        }
    }
    ctx->pc = 0x463034u;
label_463034:
    // 0x463034: 0x27a40960  addiu       $a0, $sp, 0x960
    ctx->pc = 0x463034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_463038:
    // 0x463038: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46303c:
    // 0x46303c: 0x8fa60b24  lw          $a2, 0xB24($sp)
    ctx->pc = 0x46303cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2852)));
label_463040:
    // 0x463040: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x463040u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_463044:
    // 0x463044: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x463044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_463048:
    // 0x463048: 0x2408088a  addiu       $t0, $zero, 0x88A
    ctx->pc = 0x463048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2186));
label_46304c:
    // 0x46304c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46304cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_463050:
    // 0x463050: 0x2529f150  addiu       $t1, $t1, -0xEB0
    ctx->pc = 0x463050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963536));
label_463054:
    // 0x463054: 0xc113940  jal         func_44E500
label_463058:
    if (ctx->pc == 0x463058u) {
        ctx->pc = 0x46305Cu;
        goto label_46305c;
    }
    ctx->pc = 0x463054u;
    SET_GPR_U32(ctx, 31, 0x46305Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x463054u, 0x46305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46305Cu;
label_46305c:
    // 0x46305c: 0x27a40960  addiu       $a0, $sp, 0x960
    ctx->pc = 0x46305cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_463060:
    // 0x463060: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x463060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463064:
    // 0x463064: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x463064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_463068:
    // 0x463068: 0xc115c24  jal         func_457090
label_46306c:
    if (ctx->pc == 0x46306Cu) {
        ctx->pc = 0x463070u;
        goto label_463070;
    }
    ctx->pc = 0x463068u;
    SET_GPR_U32(ctx, 31, 0x463070u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x463068u, 0x463070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463070u;
label_463070:
    // 0x463070: 0x27a40960  addiu       $a0, $sp, 0x960
    ctx->pc = 0x463070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_463074:
    // 0x463074: 0x8fa20b28  lw          $v0, 0xB28($sp)
    ctx->pc = 0x463074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2856)));
label_463078:
    // 0x463078: 0x40f809  jalr        $v0
label_46307c:
    if (ctx->pc == 0x46307Cu) {
        ctx->pc = 0x463080u;
        goto label_463080;
    }
    ctx->pc = 0x463078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x463080u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463078u, 0x463080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x463080u;
label_463080:
    // 0x463080: 0xaf82b268  sw          $v0, -0x4D98($gp)
    ctx->pc = 0x463080u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947432), GPR_U32(ctx, 2));
label_463084:
    // 0x463084: 0x8fa60960  lw          $a2, 0x960($sp)
    ctx->pc = 0x463084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2400)));
label_463088:
    // 0x463088: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_46308c:
    if (ctx->pc == 0x46308Cu) {
        ctx->pc = 0x463090u;
        goto label_463090;
    }
    ctx->pc = 0x463088u;
    {
        const bool branch_taken_0x463088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x463088) {
            ctx->pc = 0x463098u;
            goto label_463098;
        }
    }
    ctx->pc = 0x463090u;
label_463090:
    // 0x463090: 0xd  break       0
    ctx->pc = 0x463090u;
    runtime->handleBreak(rdram, ctx);
label_463094:
    // 0x463094: 0x0  nop
    ctx->pc = 0x463094u;
    // NOP
label_463098:
    // 0x463098: 0x27a40960  addiu       $a0, $sp, 0x960
    ctx->pc = 0x463098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
label_46309c:
    // 0x46309c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4630a0:
    // 0x4630a0: 0xc11392c  jal         func_44E4B0
label_4630a4:
    if (ctx->pc == 0x4630A4u) {
        ctx->pc = 0x4630A8u;
        goto label_4630a8;
    }
    ctx->pc = 0x4630A0u;
    SET_GPR_U32(ctx, 31, 0x4630A8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4630A0u, 0x4630A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4630A8u;
label_4630a8:
    // 0x4630a8: 0x8fa50b40  lw          $a1, 0xB40($sp)
    ctx->pc = 0x4630a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_4630ac:
    // 0x4630ac: 0x4a1000a  bgez        $a1, . + 4 + (0xA << 2)
label_4630b0:
    if (ctx->pc == 0x4630B0u) {
        ctx->pc = 0x4630B4u;
        goto label_4630b4;
    }
    ctx->pc = 0x4630ACu;
    {
        const bool branch_taken_0x4630ac = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x4630ac) {
            ctx->pc = 0x4630D8u;
            goto label_4630d8;
        }
    }
    ctx->pc = 0x4630B4u;
label_4630b4:
    // 0x4630b4: 0x8fa60b40  lw          $a2, 0xB40($sp)
    ctx->pc = 0x4630b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_4630b8:
    // 0x4630b8: 0xaf86bfb4  sw          $a2, -0x404C($gp)
    ctx->pc = 0x4630b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 6));
label_4630bc:
    // 0x4630bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4630bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4630c0:
    // 0x4630c0: 0x8f87bfb4  lw          $a3, -0x404C($gp)
    ctx->pc = 0x4630c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4630c4:
    // 0x4630c4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4630c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4630c8:
    // 0x4630c8: 0xc1181ac  jal         func_4606B0
label_4630cc:
    if (ctx->pc == 0x4630CCu) {
        ctx->pc = 0x4630D0u;
        goto label_4630d0;
    }
    ctx->pc = 0x4630C8u;
    SET_GPR_U32(ctx, 31, 0x4630D0u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4630C8u, 0x4630D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4630D0u;
label_4630d0:
    // 0x4630d0: 0x10000256  b           . + 4 + (0x256 << 2)
label_4630d4:
    if (ctx->pc == 0x4630D4u) {
        ctx->pc = 0x4630D8u;
        goto label_4630d8;
    }
    ctx->pc = 0x4630D0u;
    {
        const bool branch_taken_0x4630d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4630d0) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4630D8u;
label_4630d8:
    // 0x4630d8: 0x8fa90b40  lw          $t1, 0xB40($sp)
    ctx->pc = 0x4630d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_4630dc:
    // 0x4630dc: 0x9102a  slt         $v0, $zero, $t1
    ctx->pc = 0x4630dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_4630e0:
    // 0x4630e0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x4630e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4630e4:
    // 0x4630e4: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
label_4630e8:
    if (ctx->pc == 0x4630E8u) {
        ctx->pc = 0x4630ECu;
        goto label_4630ec;
    }
    ctx->pc = 0x4630E4u;
    {
        const bool branch_taken_0x4630e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4630e4) {
            ctx->pc = 0x46317Cu;
            goto label_46317c;
        }
    }
    ctx->pc = 0x4630ECu;
label_4630ec:
    // 0x4630ec: 0x27a50a80  addiu       $a1, $sp, 0xA80
    ctx->pc = 0x4630ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_4630f0:
    // 0x4630f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4630f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4630f4:
    // 0x4630f4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4630f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4630f8:
    // 0x4630f8: 0x24a5f140  addiu       $a1, $a1, -0xEC0
    ctx->pc = 0x4630f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
label_4630fc:
    // 0x4630fc: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x4630fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_463100:
    // 0x463100: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x463100u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_463104:
    // 0x463104: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x463104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_463108:
    // 0x463108: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x463108u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_46310c:
    // 0x46310c: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x46310cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_463110:
    // 0x463110: 0xc0bc3e2  jal         func_2F0F88
label_463114:
    if (ctx->pc == 0x463114u) {
        ctx->pc = 0x463118u;
        goto label_463118;
    }
    ctx->pc = 0x463110u;
    SET_GPR_U32(ctx, 31, 0x463118u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x463110u, 0x463118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463118u;
label_463118:
    // 0x463118: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_46311c:
    // 0x46311c: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x46311cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_463120:
    // 0x463120: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463124:
    // 0x463124: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x463124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_463128:
    // 0x463128: 0x27a60a80  addiu       $a2, $sp, 0xA80
    ctx->pc = 0x463128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_46312c:
    // 0x46312c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x46312cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463130:
    // 0x463130: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x463130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_463134:
    // 0x463134: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x463134u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_463138:
    // 0x463138: 0x252952c0  addiu       $t1, $t1, 0x52C0
    ctx->pc = 0x463138u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21184));
label_46313c:
    // 0x46313c: 0xc0c3d52  jal         func_30F548
label_463140:
    if (ctx->pc == 0x463140u) {
        ctx->pc = 0x463144u;
        goto label_463144;
    }
    ctx->pc = 0x46313Cu;
    SET_GPR_U32(ctx, 31, 0x463144u);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x46313Cu, 0x463144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463144u;
label_463144:
    // 0x463144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463148:
    // 0x463148: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_46314c:
    if (ctx->pc == 0x46314Cu) {
        ctx->pc = 0x463150u;
        goto label_463150;
    }
    ctx->pc = 0x463148u;
    {
        const bool branch_taken_0x463148 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x463148) {
            ctx->pc = 0x46316Cu;
            goto label_46316c;
        }
    }
    ctx->pc = 0x463150u;
label_463150:
    // 0x463150: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x463150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_463154:
    // 0x463154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463158:
    // 0x463158: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_46315c:
    // 0x46315c: 0xc1181ac  jal         func_4606B0
label_463160:
    if (ctx->pc == 0x463160u) {
        ctx->pc = 0x463164u;
        goto label_463164;
    }
    ctx->pc = 0x46315Cu;
    SET_GPR_U32(ctx, 31, 0x463164u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x46315Cu, 0x463164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463164u;
label_463164:
    // 0x463164: 0x10000231  b           . + 4 + (0x231 << 2)
label_463168:
    if (ctx->pc == 0x463168u) {
        ctx->pc = 0x46316Cu;
        goto label_46316c;
    }
    ctx->pc = 0x463164u;
    {
        const bool branch_taken_0x463164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463164) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x46316Cu;
label_46316c:
    // 0x46316c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x46316cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_463170:
    // 0x463170: 0xaf84bfb0  sw          $a0, -0x4050($gp)
    ctx->pc = 0x463170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 4));
label_463174:
    // 0x463174: 0x1000022d  b           . + 4 + (0x22D << 2)
label_463178:
    if (ctx->pc == 0x463178u) {
        ctx->pc = 0x46317Cu;
        goto label_46317c;
    }
    ctx->pc = 0x463174u;
    {
        const bool branch_taken_0x463174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463174) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x46317Cu;
label_46317c:
    // 0x46317c: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x46317cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_463180:
    // 0x463180: 0x26734e3c  addiu       $s3, $s3, 0x4E3C
    ctx->pc = 0x463180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20028));
label_463184:
    // 0x463184: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x463184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463188:
    // 0x463188: 0xaf83bfb4  sw          $v1, -0x404C($gp)
    ctx->pc = 0x463188u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 3));
label_46318c:
    // 0x46318c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463190:
    // 0x463190: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463194:
    // 0x463194: 0xc1181ac  jal         func_4606B0
label_463198:
    if (ctx->pc == 0x463198u) {
        ctx->pc = 0x46319Cu;
        goto label_46319c;
    }
    ctx->pc = 0x463194u;
    SET_GPR_U32(ctx, 31, 0x46319Cu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463194u, 0x46319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46319Cu;
label_46319c:
    // 0x46319c: 0x10000223  b           . + 4 + (0x223 << 2)
label_4631a0:
    if (ctx->pc == 0x4631A0u) {
        ctx->pc = 0x4631A4u;
        goto label_4631a4;
    }
    ctx->pc = 0x46319Cu;
    {
        const bool branch_taken_0x46319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46319c) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4631A4u;
label_4631a4:
    // 0x4631a4: 0x8fa60b50  lw          $a2, 0xB50($sp)
    ctx->pc = 0x4631a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2896)));
label_4631a8:
    // 0x4631a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4631a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4631ac:
    // 0x4631ac: 0x14c3021f  bne         $a2, $v1, . + 4 + (0x21F << 2)
label_4631b0:
    if (ctx->pc == 0x4631B0u) {
        ctx->pc = 0x4631B4u;
        goto label_4631b4;
    }
    ctx->pc = 0x4631ACu;
    {
        const bool branch_taken_0x4631ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4631ac) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4631B4u;
label_4631b4:
    // 0x4631b4: 0x8fa30b30  lw          $v1, 0xB30($sp)
    ctx->pc = 0x4631b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2864)));
label_4631b8:
    // 0x4631b8: 0x3864000d  xori        $a0, $v1, 0xD
    ctx->pc = 0x4631b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)13);
label_4631bc:
    // 0x4631bc: 0x2c850001  sltiu       $a1, $a0, 0x1
    ctx->pc = 0x4631bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4631c0:
    // 0x4631c0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x4631c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_4631c4:
    // 0x4631c4: 0x14c0002d  bnez        $a2, . + 4 + (0x2D << 2)
label_4631c8:
    if (ctx->pc == 0x4631C8u) {
        ctx->pc = 0x4631CCu;
        goto label_4631cc;
    }
    ctx->pc = 0x4631C4u;
    {
        const bool branch_taken_0x4631c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4631c4) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x4631CCu;
label_4631cc:
    // 0x4631cc: 0x8f87b26c  lw          $a3, -0x4D94($gp)
    ctx->pc = 0x4631ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947436)));
label_4631d0:
    // 0x4631d0: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
label_4631d4:
    if (ctx->pc == 0x4631D4u) {
        ctx->pc = 0x4631D8u;
        goto label_4631d8;
    }
    ctx->pc = 0x4631D0u;
    {
        const bool branch_taken_0x4631d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4631d0) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x4631D8u;
label_4631d8:
    // 0x4631d8: 0x8f88bf38  lw          $t0, -0x40C8($gp)
    ctx->pc = 0x4631d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4631dc:
    // 0x4631dc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4631dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4631e0:
    // 0x4631e0: 0x2409fffc  addiu       $t1, $zero, -0x4
    ctx->pc = 0x4631e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4631e4:
    // 0x4631e4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4631e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4631e8:
    // 0x4631e8: 0x27a60b10  addiu       $a2, $sp, 0xB10
    ctx->pc = 0x4631e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
label_4631ec:
    // 0x4631ec: 0xc115ee8  jal         func_457BA0
label_4631f0:
    if (ctx->pc == 0x4631F0u) {
        ctx->pc = 0x4631F4u;
        goto label_4631f4;
    }
    ctx->pc = 0x4631ECu;
    SET_GPR_U32(ctx, 31, 0x4631F4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4631ECu, 0x4631F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4631F4u;
label_4631f4:
    // 0x4631f4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4631f8:
    if (ctx->pc == 0x4631F8u) {
        ctx->pc = 0x4631FCu;
        goto label_4631fc;
    }
    ctx->pc = 0x4631F4u;
    {
        const bool branch_taken_0x4631f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4631f4) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x4631FCu;
label_4631fc:
    // 0x4631fc: 0x8fa50b18  lw          $a1, 0xB18($sp)
    ctx->pc = 0x4631fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2840)));
label_463200:
    // 0x463200: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_463204:
    if (ctx->pc == 0x463204u) {
        ctx->pc = 0x463208u;
        goto label_463208;
    }
    ctx->pc = 0x463200u;
    {
        const bool branch_taken_0x463200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x463200) {
            ctx->pc = 0x46327Cu;
            goto label_46327c;
        }
    }
    ctx->pc = 0x463208u;
label_463208:
    // 0x463208: 0x27a40840  addiu       $a0, $sp, 0x840
    ctx->pc = 0x463208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_46320c:
    // 0x46320c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463210:
    // 0x463210: 0x8fa60b14  lw          $a2, 0xB14($sp)
    ctx->pc = 0x463210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2836)));
label_463214:
    // 0x463214: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x463214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_463218:
    // 0x463218: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x463218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_46321c:
    // 0x46321c: 0x240808ba  addiu       $t0, $zero, 0x8BA
    ctx->pc = 0x46321cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2234));
label_463220:
    // 0x463220: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x463220u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_463224:
    // 0x463224: 0x2529f150  addiu       $t1, $t1, -0xEB0
    ctx->pc = 0x463224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963536));
label_463228:
    // 0x463228: 0xc113940  jal         func_44E500
label_46322c:
    if (ctx->pc == 0x46322Cu) {
        ctx->pc = 0x463230u;
        goto label_463230;
    }
    ctx->pc = 0x463228u;
    SET_GPR_U32(ctx, 31, 0x463230u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x463228u, 0x463230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463230u;
label_463230:
    // 0x463230: 0x27a40840  addiu       $a0, $sp, 0x840
    ctx->pc = 0x463230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_463234:
    // 0x463234: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x463234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463238:
    // 0x463238: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x463238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_46323c:
    // 0x46323c: 0xc115c24  jal         func_457090
label_463240:
    if (ctx->pc == 0x463240u) {
        ctx->pc = 0x463244u;
        goto label_463244;
    }
    ctx->pc = 0x46323Cu;
    SET_GPR_U32(ctx, 31, 0x463244u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46323Cu, 0x463244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463244u;
label_463244:
    // 0x463244: 0x27a40840  addiu       $a0, $sp, 0x840
    ctx->pc = 0x463244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_463248:
    // 0x463248: 0x8fa20b18  lw          $v0, 0xB18($sp)
    ctx->pc = 0x463248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2840)));
label_46324c:
    // 0x46324c: 0x40f809  jalr        $v0
label_463250:
    if (ctx->pc == 0x463250u) {
        ctx->pc = 0x463254u;
        goto label_463254;
    }
    ctx->pc = 0x46324Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x463254u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46324Cu, 0x463254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x463254u;
label_463254:
    // 0x463254: 0xaf82b26c  sw          $v0, -0x4D94($gp)
    ctx->pc = 0x463254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947436), GPR_U32(ctx, 2));
label_463258:
    // 0x463258: 0x8fa20840  lw          $v0, 0x840($sp)
    ctx->pc = 0x463258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2112)));
label_46325c:
    // 0x46325c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_463260:
    if (ctx->pc == 0x463260u) {
        ctx->pc = 0x463264u;
        goto label_463264;
    }
    ctx->pc = 0x46325Cu;
    {
        const bool branch_taken_0x46325c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46325c) {
            ctx->pc = 0x46326Cu;
            goto label_46326c;
        }
    }
    ctx->pc = 0x463264u;
label_463264:
    // 0x463264: 0xd  break       0
    ctx->pc = 0x463264u;
    runtime->handleBreak(rdram, ctx);
label_463268:
    // 0x463268: 0x0  nop
    ctx->pc = 0x463268u;
    // NOP
label_46326c:
    // 0x46326c: 0x27a40840  addiu       $a0, $sp, 0x840
    ctx->pc = 0x46326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_463270:
    // 0x463270: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x463270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_463274:
    // 0x463274: 0xc11392c  jal         func_44E4B0
label_463278:
    if (ctx->pc == 0x463278u) {
        ctx->pc = 0x46327Cu;
        goto label_46327c;
    }
    ctx->pc = 0x463274u;
    SET_GPR_U32(ctx, 31, 0x46327Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x463274u, 0x46327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46327Cu;
label_46327c:
    // 0x46327c: 0x8fa20b40  lw          $v0, 0xB40($sp)
    ctx->pc = 0x46327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_463280:
    // 0x463280: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_463284:
    if (ctx->pc == 0x463284u) {
        ctx->pc = 0x463288u;
        goto label_463288;
    }
    ctx->pc = 0x463280u;
    {
        const bool branch_taken_0x463280 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x463280) {
            ctx->pc = 0x4632A8u;
            goto label_4632a8;
        }
    }
    ctx->pc = 0x463288u;
label_463288:
    // 0x463288: 0x8fa20b40  lw          $v0, 0xB40($sp)
    ctx->pc = 0x463288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_46328c:
    // 0x46328c: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x46328cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_463290:
    // 0x463290: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463294:
    // 0x463294: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463298:
    // 0x463298: 0xc1181ac  jal         func_4606B0
label_46329c:
    if (ctx->pc == 0x46329Cu) {
        ctx->pc = 0x4632A0u;
        goto label_4632a0;
    }
    ctx->pc = 0x463298u;
    SET_GPR_U32(ctx, 31, 0x4632A0u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463298u, 0x4632A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4632A0u;
label_4632a0:
    // 0x4632a0: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_4632a4:
    if (ctx->pc == 0x4632A4u) {
        ctx->pc = 0x4632A8u;
        goto label_4632a8;
    }
    ctx->pc = 0x4632A0u;
    {
        const bool branch_taken_0x4632a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4632a0) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4632A8u;
label_4632a8:
    // 0x4632a8: 0x8fa20b40  lw          $v0, 0xB40($sp)
    ctx->pc = 0x4632a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_4632ac:
    // 0x4632ac: 0x2451fffe  addiu       $s1, $v0, -0x2
    ctx->pc = 0x4632acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_4632b0:
    // 0x4632b0: 0x2a210013  slti        $at, $s1, 0x13
    ctx->pc = 0x4632b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)19) ? 1 : 0);
label_4632b4:
    // 0x4632b4: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_4632b8:
    if (ctx->pc == 0x4632B8u) {
        ctx->pc = 0x4632BCu;
        goto label_4632bc;
    }
    ctx->pc = 0x4632B4u;
    {
        const bool branch_taken_0x4632b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4632b4) {
            ctx->pc = 0x463340u;
            goto label_463340;
        }
    }
    ctx->pc = 0x4632BCu;
label_4632bc:
    // 0x4632bc: 0x27a40a80  addiu       $a0, $sp, 0xA80
    ctx->pc = 0x4632bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_4632c0:
    // 0x4632c0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4632c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4632c4:
    // 0x4632c4: 0x24a5f140  addiu       $a1, $a1, -0xEC0
    ctx->pc = 0x4632c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
label_4632c8:
    // 0x4632c8: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x4632c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_4632cc:
    // 0x4632cc: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x4632ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_4632d0:
    // 0x4632d0: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x4632d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_4632d4:
    // 0x4632d4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x4632d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_4632d8:
    // 0x4632d8: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x4632d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_4632dc:
    // 0x4632dc: 0xc0bc3e2  jal         func_2F0F88
label_4632e0:
    if (ctx->pc == 0x4632E0u) {
        ctx->pc = 0x4632E4u;
        goto label_4632e4;
    }
    ctx->pc = 0x4632DCu;
    SET_GPR_U32(ctx, 31, 0x4632E4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x4632DCu, 0x4632E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4632E4u;
label_4632e4:
    // 0x4632e4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4632e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_4632e8:
    // 0x4632e8: 0x2484f340  addiu       $a0, $a0, -0xCC0
    ctx->pc = 0x4632e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964032));
label_4632ec:
    // 0x4632ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4632ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4632f0:
    // 0x4632f0: 0xc115ae4  jal         func_456B90
label_4632f4:
    if (ctx->pc == 0x4632F4u) {
        ctx->pc = 0x4632F8u;
        goto label_4632f8;
    }
    ctx->pc = 0x4632F0u;
    SET_GPR_U32(ctx, 31, 0x4632F8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x4632F0u, 0x4632F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4632F8u;
label_4632f8:
    // 0x4632f8: 0x27a40740  addiu       $a0, $sp, 0x740
    ctx->pc = 0x4632f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
label_4632fc:
    // 0x4632fc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4632fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463300:
    // 0x463300: 0x24a5f210  addiu       $a1, $a1, -0xDF0
    ctx->pc = 0x463300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
label_463304:
    // 0x463304: 0x27a60a80  addiu       $a2, $sp, 0xA80
    ctx->pc = 0x463304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_463308:
    // 0x463308: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x463308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46330c:
    // 0x46330c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x46330cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_463310:
    // 0x463310: 0xc0bc3e2  jal         func_2F0F88
label_463314:
    if (ctx->pc == 0x463314u) {
        ctx->pc = 0x463318u;
        goto label_463318;
    }
    ctx->pc = 0x463310u;
    SET_GPR_U32(ctx, 31, 0x463318u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x463310u, 0x463318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463318u;
label_463318:
    // 0x463318: 0x27a40740  addiu       $a0, $sp, 0x740
    ctx->pc = 0x463318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
label_46331c:
    // 0x46331c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46331cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463320:
    // 0x463320: 0xc115ae4  jal         func_456B90
label_463324:
    if (ctx->pc == 0x463324u) {
        ctx->pc = 0x463328u;
        goto label_463328;
    }
    ctx->pc = 0x463320u;
    SET_GPR_U32(ctx, 31, 0x463328u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x463320u, 0x463328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463328u;
label_463328:
    // 0x463328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46332c:
    // 0x46332c: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x46332cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463330:
    // 0x463330: 0xc1181ac  jal         func_4606B0
label_463334:
    if (ctx->pc == 0x463334u) {
        ctx->pc = 0x463338u;
        goto label_463338;
    }
    ctx->pc = 0x463330u;
    SET_GPR_U32(ctx, 31, 0x463338u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463330u, 0x463338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463338u;
label_463338:
    // 0x463338: 0x100001bc  b           . + 4 + (0x1BC << 2)
label_46333c:
    if (ctx->pc == 0x46333Cu) {
        ctx->pc = 0x463340u;
        goto label_463340;
    }
    ctx->pc = 0x463338u;
    {
        const bool branch_taken_0x463338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463338) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x463340u;
label_463340:
    // 0x463340: 0x27a40a80  addiu       $a0, $sp, 0xA80
    ctx->pc = 0x463340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_463344:
    // 0x463344: 0x2785b1d0  addiu       $a1, $gp, -0x4E30
    ctx->pc = 0x463344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947280));
label_463348:
    // 0x463348: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x463348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_46334c:
    // 0x46334c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x46334cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_463350:
    // 0x463350: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x463350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_463354:
    // 0x463354: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x463354u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_463358:
    // 0x463358: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x463358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_46335c:
    // 0x46335c: 0xc0bc3e2  jal         func_2F0F88
label_463360:
    if (ctx->pc == 0x463360u) {
        ctx->pc = 0x463364u;
        goto label_463364;
    }
    ctx->pc = 0x46335Cu;
    SET_GPR_U32(ctx, 31, 0x463364u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x46335Cu, 0x463364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463364u;
label_463364:
    // 0x463364: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463368:
    // 0x463368: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x463368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_46336c:
    // 0x46336c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46336cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_463370:
    // 0x463370: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x463370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_463374:
    // 0x463374: 0x27a60a80  addiu       $a2, $sp, 0xA80
    ctx->pc = 0x463374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2688));
label_463378:
    // 0x463378: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x463378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46337c:
    // 0x46337c: 0xc0c3dca  jal         func_30F728
label_463380:
    if (ctx->pc == 0x463380u) {
        ctx->pc = 0x463384u;
        goto label_463384;
    }
    ctx->pc = 0x46337Cu;
    SET_GPR_U32(ctx, 31, 0x463384u);
    ctx->pc = 0x30F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F728u, 0x46337Cu, 0x463384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463384u;
label_463384:
    // 0x463384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463388:
    // 0x463388: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_46338c:
    if (ctx->pc == 0x46338Cu) {
        ctx->pc = 0x463390u;
        goto label_463390;
    }
    ctx->pc = 0x463388u;
    {
        const bool branch_taken_0x463388 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x463388) {
            ctx->pc = 0x4633ACu;
            goto label_4633ac;
        }
    }
    ctx->pc = 0x463390u;
label_463390:
    // 0x463390: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x463390u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_463394:
    // 0x463394: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463398:
    // 0x463398: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_46339c:
    // 0x46339c: 0xc1181ac  jal         func_4606B0
label_4633a0:
    if (ctx->pc == 0x4633A0u) {
        ctx->pc = 0x4633A4u;
        goto label_4633a4;
    }
    ctx->pc = 0x46339Cu;
    SET_GPR_U32(ctx, 31, 0x4633A4u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x46339Cu, 0x4633A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4633A4u;
label_4633a4:
    // 0x4633a4: 0x100001a1  b           . + 4 + (0x1A1 << 2)
label_4633a8:
    if (ctx->pc == 0x4633A8u) {
        ctx->pc = 0x4633ACu;
        goto label_4633ac;
    }
    ctx->pc = 0x4633A4u;
    {
        const bool branch_taken_0x4633a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4633a4) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4633ACu;
label_4633ac:
    // 0x4633ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4633acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4633b0:
    // 0x4633b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4633b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4633b4:
    // 0x4633b4: 0x2786bfb4  addiu       $a2, $gp, -0x404C
    ctx->pc = 0x4633b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950836));
label_4633b8:
    // 0x4633b8: 0xc0c3c8e  jal         func_30F238
label_4633bc:
    if (ctx->pc == 0x4633BCu) {
        ctx->pc = 0x4633C0u;
        goto label_4633c0;
    }
    ctx->pc = 0x4633B8u;
    SET_GPR_U32(ctx, 31, 0x4633C0u);
    ctx->pc = 0x30F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F238u, 0x4633B8u, 0x4633C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4633C0u;
label_4633c0:
    // 0x4633c0: 0x8f82bfb4  lw          $v0, -0x404C($gp)
    ctx->pc = 0x4633c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4633c4:
    // 0x4633c4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_4633c8:
    if (ctx->pc == 0x4633C8u) {
        ctx->pc = 0x4633CCu;
        goto label_4633cc;
    }
    ctx->pc = 0x4633C4u;
    {
        const bool branch_taken_0x4633c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4633c4) {
            ctx->pc = 0x4633E4u;
            goto label_4633e4;
        }
    }
    ctx->pc = 0x4633CCu;
label_4633cc:
    // 0x4633cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4633ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4633d0:
    // 0x4633d0: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x4633d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4633d4:
    // 0x4633d4: 0xc1181ac  jal         func_4606B0
label_4633d8:
    if (ctx->pc == 0x4633D8u) {
        ctx->pc = 0x4633DCu;
        goto label_4633dc;
    }
    ctx->pc = 0x4633D4u;
    SET_GPR_U32(ctx, 31, 0x4633DCu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4633D4u, 0x4633DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4633DCu;
label_4633dc:
    // 0x4633dc: 0x10000193  b           . + 4 + (0x193 << 2)
label_4633e0:
    if (ctx->pc == 0x4633E0u) {
        ctx->pc = 0x4633E4u;
        goto label_4633e4;
    }
    ctx->pc = 0x4633DCu;
    {
        const bool branch_taken_0x4633dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4633dc) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4633E4u;
label_4633e4:
    // 0x4633e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4633e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4633e8:
    // 0x4633e8: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x4633e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_4633ec:
    // 0x4633ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4633ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4633f0:
    // 0x4633f0: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x4633f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_4633f4:
    // 0x4633f4: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x4633f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_4633f8:
    // 0x4633f8: 0x24c64e5c  addiu       $a2, $a2, 0x4E5C
    ctx->pc = 0x4633f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20060));
label_4633fc:
    // 0x4633fc: 0x24070202  addiu       $a3, $zero, 0x202
    ctx->pc = 0x4633fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
label_463400:
    // 0x463400: 0xc0c3afe  jal         func_30EBF8
label_463404:
    if (ctx->pc == 0x463404u) {
        ctx->pc = 0x463408u;
        goto label_463408;
    }
    ctx->pc = 0x463400u;
    SET_GPR_U32(ctx, 31, 0x463408u);
    ctx->pc = 0x30EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EBF8u, 0x463400u, 0x463408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463408u;
label_463408:
    // 0x463408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46340c:
    // 0x46340c: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_463410:
    if (ctx->pc == 0x463410u) {
        ctx->pc = 0x463414u;
        goto label_463414;
    }
    ctx->pc = 0x46340Cu;
    {
        const bool branch_taken_0x46340c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x46340c) {
            ctx->pc = 0x463430u;
            goto label_463430;
        }
    }
    ctx->pc = 0x463414u;
label_463414:
    // 0x463414: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x463414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_463418:
    // 0x463418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46341c:
    // 0x46341c: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x46341cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463420:
    // 0x463420: 0xc1181ac  jal         func_4606B0
label_463424:
    if (ctx->pc == 0x463424u) {
        ctx->pc = 0x463428u;
        goto label_463428;
    }
    ctx->pc = 0x463420u;
    SET_GPR_U32(ctx, 31, 0x463428u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463420u, 0x463428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463428u;
label_463428:
    // 0x463428: 0x10000180  b           . + 4 + (0x180 << 2)
label_46342c:
    if (ctx->pc == 0x46342Cu) {
        ctx->pc = 0x463430u;
        goto label_463430;
    }
    ctx->pc = 0x463428u;
    {
        const bool branch_taken_0x463428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463428) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x463430u;
label_463430:
    // 0x463430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x463430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_463434:
    // 0x463434: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x463434u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_463438:
    // 0x463438: 0x1000017c  b           . + 4 + (0x17C << 2)
label_46343c:
    if (ctx->pc == 0x46343Cu) {
        ctx->pc = 0x463440u;
        goto label_463440;
    }
    ctx->pc = 0x463438u;
    {
        const bool branch_taken_0x463438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463438) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x463440u;
label_463440:
    // 0x463440: 0x8fa40b50  lw          $a0, 0xB50($sp)
    ctx->pc = 0x463440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2896)));
label_463444:
    // 0x463444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x463444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463448:
    // 0x463448: 0x14830178  bne         $a0, $v1, . + 4 + (0x178 << 2)
label_46344c:
    if (ctx->pc == 0x46344Cu) {
        ctx->pc = 0x463450u;
        goto label_463450;
    }
    ctx->pc = 0x463448u;
    {
        const bool branch_taken_0x463448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x463448) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x463450u;
label_463450:
    // 0x463450: 0x8fa20b30  lw          $v0, 0xB30($sp)
    ctx->pc = 0x463450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2864)));
label_463454:
    // 0x463454: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x463454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_463458:
    // 0x463458: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x463458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_46345c:
    // 0x46345c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x46345cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_463460:
    // 0x463460: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_463464:
    if (ctx->pc == 0x463464u) {
        ctx->pc = 0x463468u;
        goto label_463468;
    }
    ctx->pc = 0x463460u;
    {
        const bool branch_taken_0x463460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x463460) {
            ctx->pc = 0x463510u;
            goto label_463510;
        }
    }
    ctx->pc = 0x463468u;
label_463468:
    // 0x463468: 0x8f82b270  lw          $v0, -0x4D90($gp)
    ctx->pc = 0x463468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947440)));
label_46346c:
    // 0x46346c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_463470:
    if (ctx->pc == 0x463470u) {
        ctx->pc = 0x463474u;
        goto label_463474;
    }
    ctx->pc = 0x46346Cu;
    {
        const bool branch_taken_0x46346c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46346c) {
            ctx->pc = 0x463510u;
            goto label_463510;
        }
    }
    ctx->pc = 0x463474u;
label_463474:
    // 0x463474: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x463474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_463478:
    // 0x463478: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46347c:
    // 0x46347c: 0x27a60b00  addiu       $a2, $sp, 0xB00
    ctx->pc = 0x46347cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2816));
label_463480:
    // 0x463480: 0xc115ee8  jal         func_457BA0
label_463484:
    if (ctx->pc == 0x463484u) {
        ctx->pc = 0x463488u;
        goto label_463488;
    }
    ctx->pc = 0x463480u;
    SET_GPR_U32(ctx, 31, 0x463488u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x463480u, 0x463488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463488u;
label_463488:
    // 0x463488: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46348c:
    if (ctx->pc == 0x46348Cu) {
        ctx->pc = 0x463490u;
        goto label_463490;
    }
    ctx->pc = 0x463488u;
    {
        const bool branch_taken_0x463488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463488) {
            ctx->pc = 0x463510u;
            goto label_463510;
        }
    }
    ctx->pc = 0x463490u;
label_463490:
    // 0x463490: 0x8fa20b08  lw          $v0, 0xB08($sp)
    ctx->pc = 0x463490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2824)));
label_463494:
    // 0x463494: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_463498:
    if (ctx->pc == 0x463498u) {
        ctx->pc = 0x46349Cu;
        goto label_46349c;
    }
    ctx->pc = 0x463494u;
    {
        const bool branch_taken_0x463494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463494) {
            ctx->pc = 0x463510u;
            goto label_463510;
        }
    }
    ctx->pc = 0x46349Cu;
label_46349c:
    // 0x46349c: 0x27a40620  addiu       $a0, $sp, 0x620
    ctx->pc = 0x46349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_4634a0:
    // 0x4634a0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4634a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4634a4:
    // 0x4634a4: 0x8fa60b04  lw          $a2, 0xB04($sp)
    ctx->pc = 0x4634a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2820)));
label_4634a8:
    // 0x4634a8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4634a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4634ac:
    // 0x4634ac: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4634acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4634b0:
    // 0x4634b0: 0x24080903  addiu       $t0, $zero, 0x903
    ctx->pc = 0x4634b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2307));
label_4634b4:
    // 0x4634b4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4634b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4634b8:
    // 0x4634b8: 0x2529f360  addiu       $t1, $t1, -0xCA0
    ctx->pc = 0x4634b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964064));
label_4634bc:
    // 0x4634bc: 0xc113940  jal         func_44E500
label_4634c0:
    if (ctx->pc == 0x4634C0u) {
        ctx->pc = 0x4634C4u;
        goto label_4634c4;
    }
    ctx->pc = 0x4634BCu;
    SET_GPR_U32(ctx, 31, 0x4634C4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4634BCu, 0x4634C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4634C4u;
label_4634c4:
    // 0x4634c4: 0x27a40620  addiu       $a0, $sp, 0x620
    ctx->pc = 0x4634c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_4634c8:
    // 0x4634c8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4634c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4634cc:
    // 0x4634cc: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x4634ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_4634d0:
    // 0x4634d0: 0xc115c24  jal         func_457090
label_4634d4:
    if (ctx->pc == 0x4634D4u) {
        ctx->pc = 0x4634D8u;
        goto label_4634d8;
    }
    ctx->pc = 0x4634D0u;
    SET_GPR_U32(ctx, 31, 0x4634D8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4634D0u, 0x4634D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4634D8u;
label_4634d8:
    // 0x4634d8: 0x27a40620  addiu       $a0, $sp, 0x620
    ctx->pc = 0x4634d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_4634dc:
    // 0x4634dc: 0x8fa20b08  lw          $v0, 0xB08($sp)
    ctx->pc = 0x4634dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2824)));
label_4634e0:
    // 0x4634e0: 0x40f809  jalr        $v0
label_4634e4:
    if (ctx->pc == 0x4634E4u) {
        ctx->pc = 0x4634E8u;
        goto label_4634e8;
    }
    ctx->pc = 0x4634E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4634E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4634E0u, 0x4634E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4634E8u;
label_4634e8:
    // 0x4634e8: 0xaf82b270  sw          $v0, -0x4D90($gp)
    ctx->pc = 0x4634e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947440), GPR_U32(ctx, 2));
label_4634ec:
    // 0x4634ec: 0x8fa20620  lw          $v0, 0x620($sp)
    ctx->pc = 0x4634ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1568)));
label_4634f0:
    // 0x4634f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4634f4:
    if (ctx->pc == 0x4634F4u) {
        ctx->pc = 0x4634F8u;
        goto label_4634f8;
    }
    ctx->pc = 0x4634F0u;
    {
        const bool branch_taken_0x4634f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4634f0) {
            ctx->pc = 0x463500u;
            goto label_463500;
        }
    }
    ctx->pc = 0x4634F8u;
label_4634f8:
    // 0x4634f8: 0xd  break       0
    ctx->pc = 0x4634f8u;
    runtime->handleBreak(rdram, ctx);
label_4634fc:
    // 0x4634fc: 0x0  nop
    ctx->pc = 0x4634fcu;
    // NOP
label_463500:
    // 0x463500: 0x27a40620  addiu       $a0, $sp, 0x620
    ctx->pc = 0x463500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1568));
label_463504:
    // 0x463504: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x463504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_463508:
    // 0x463508: 0xc11392c  jal         func_44E4B0
label_46350c:
    if (ctx->pc == 0x46350Cu) {
        ctx->pc = 0x463510u;
        goto label_463510;
    }
    ctx->pc = 0x463508u;
    SET_GPR_U32(ctx, 31, 0x463510u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x463508u, 0x463510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463510u;
label_463510:
    // 0x463510: 0x8fa20b40  lw          $v0, 0xB40($sp)
    ctx->pc = 0x463510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_463514:
    // 0x463514: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_463518:
    if (ctx->pc == 0x463518u) {
        ctx->pc = 0x46351Cu;
        goto label_46351c;
    }
    ctx->pc = 0x463514u;
    {
        const bool branch_taken_0x463514 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x463514) {
            ctx->pc = 0x46353Cu;
            goto label_46353c;
        }
    }
    ctx->pc = 0x46351Cu;
label_46351c:
    // 0x46351c: 0x8fa20b40  lw          $v0, 0xB40($sp)
    ctx->pc = 0x46351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_463520:
    // 0x463520: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x463520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_463524:
    // 0x463524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463528:
    // 0x463528: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_46352c:
    // 0x46352c: 0xc1181ac  jal         func_4606B0
label_463530:
    if (ctx->pc == 0x463530u) {
        ctx->pc = 0x463534u;
        goto label_463534;
    }
    ctx->pc = 0x46352Cu;
    SET_GPR_U32(ctx, 31, 0x463534u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x46352Cu, 0x463534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463534u;
label_463534:
    // 0x463534: 0x1000013d  b           . + 4 + (0x13D << 2)
label_463538:
    if (ctx->pc == 0x463538u) {
        ctx->pc = 0x46353Cu;
        goto label_46353c;
    }
    ctx->pc = 0x463534u;
    {
        const bool branch_taken_0x463534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463534) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x46353Cu;
label_46353c:
    // 0x46353c: 0x8fa20b40  lw          $v0, 0xB40($sp)
    ctx->pc = 0x46353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_463540:
    // 0x463540: 0xaf82b190  sw          $v0, -0x4E70($gp)
    ctx->pc = 0x463540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947216), GPR_U32(ctx, 2));
label_463544:
    // 0x463544: 0x8f82b190  lw          $v0, -0x4E70($gp)
    ctx->pc = 0x463544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_463548:
    // 0x463548: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
label_46354c:
    if (ctx->pc == 0x46354Cu) {
        ctx->pc = 0x463550u;
        goto label_463550;
    }
    ctx->pc = 0x463548u;
    {
        const bool branch_taken_0x463548 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x463548) {
            ctx->pc = 0x463598u;
            goto label_463598;
        }
    }
    ctx->pc = 0x463550u;
label_463550:
    // 0x463550: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x463550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_463554:
    // 0x463554: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x463554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463558:
    // 0x463558: 0x24a5f380  addiu       $a1, $a1, -0xC80
    ctx->pc = 0x463558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964096));
label_46355c:
    // 0x46355c: 0x8f86b190  lw          $a2, -0x4E70($gp)
    ctx->pc = 0x46355cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_463560:
    // 0x463560: 0xc0bc3e2  jal         func_2F0F88
label_463564:
    if (ctx->pc == 0x463564u) {
        ctx->pc = 0x463568u;
        goto label_463568;
    }
    ctx->pc = 0x463560u;
    SET_GPR_U32(ctx, 31, 0x463568u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x463560u, 0x463568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463568u;
label_463568:
    // 0x463568: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x463568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_46356c:
    // 0x46356c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46356cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463570:
    // 0x463570: 0xc115ae4  jal         func_456B90
label_463574:
    if (ctx->pc == 0x463574u) {
        ctx->pc = 0x463578u;
        goto label_463578;
    }
    ctx->pc = 0x463570u;
    SET_GPR_U32(ctx, 31, 0x463578u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x463570u, 0x463578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463578u;
label_463578:
    // 0x463578: 0x8f82b190  lw          $v0, -0x4E70($gp)
    ctx->pc = 0x463578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_46357c:
    // 0x46357c: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x46357cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_463580:
    // 0x463580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463584:
    // 0x463584: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x463584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463588:
    // 0x463588: 0xc1181ac  jal         func_4606B0
label_46358c:
    if (ctx->pc == 0x46358Cu) {
        ctx->pc = 0x463590u;
        goto label_463590;
    }
    ctx->pc = 0x463588u;
    SET_GPR_U32(ctx, 31, 0x463590u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463588u, 0x463590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463590u;
label_463590:
    // 0x463590: 0x10000126  b           . + 4 + (0x126 << 2)
label_463594:
    if (ctx->pc == 0x463594u) {
        ctx->pc = 0x463598u;
        goto label_463598;
    }
    ctx->pc = 0x463590u;
    {
        const bool branch_taken_0x463590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463590) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x463598u;
label_463598:
    // 0x463598: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x463598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_46359c:
    // 0x46359c: 0x8c464e38  lw          $a2, 0x4E38($v0)
    ctx->pc = 0x46359cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20024)));
label_4635a0:
    // 0x4635a0: 0x8f84b190  lw          $a0, -0x4E70($gp)
    ctx->pc = 0x4635a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_4635a4:
    // 0x4635a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4635a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4635a8:
    // 0x4635a8: 0x8c454e24  lw          $a1, 0x4E24($v0)
    ctx->pc = 0x4635a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20004)));
label_4635ac:
    // 0x4635ac: 0xc0c3c30  jal         func_30F0C0
label_4635b0:
    if (ctx->pc == 0x4635B0u) {
        ctx->pc = 0x4635B4u;
        goto label_4635b4;
    }
    ctx->pc = 0x4635ACu;
    SET_GPR_U32(ctx, 31, 0x4635B4u);
    ctx->pc = 0x30F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F0C0u, 0x4635ACu, 0x4635B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4635B4u;
label_4635b4:
    // 0x4635b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4635b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4635b8:
    // 0x4635b8: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_4635bc:
    if (ctx->pc == 0x4635BCu) {
        ctx->pc = 0x4635C0u;
        goto label_4635c0;
    }
    ctx->pc = 0x4635B8u;
    {
        const bool branch_taken_0x4635b8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x4635b8) {
            ctx->pc = 0x4635DCu;
            goto label_4635dc;
        }
    }
    ctx->pc = 0x4635C0u;
label_4635c0:
    // 0x4635c0: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x4635c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_4635c4:
    // 0x4635c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4635c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4635c8:
    // 0x4635c8: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x4635c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4635cc:
    // 0x4635cc: 0xc1181ac  jal         func_4606B0
label_4635d0:
    if (ctx->pc == 0x4635D0u) {
        ctx->pc = 0x4635D4u;
        goto label_4635d4;
    }
    ctx->pc = 0x4635CCu;
    SET_GPR_U32(ctx, 31, 0x4635D4u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4635CCu, 0x4635D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4635D4u;
label_4635d4:
    // 0x4635d4: 0x10000115  b           . + 4 + (0x115 << 2)
label_4635d8:
    if (ctx->pc == 0x4635D8u) {
        ctx->pc = 0x4635DCu;
        goto label_4635dc;
    }
    ctx->pc = 0x4635D4u;
    {
        const bool branch_taken_0x4635d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4635d4) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4635DCu;
label_4635dc:
    // 0x4635dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4635dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4635e0:
    // 0x4635e0: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x4635e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_4635e4:
    // 0x4635e4: 0x10000111  b           . + 4 + (0x111 << 2)
label_4635e8:
    if (ctx->pc == 0x4635E8u) {
        ctx->pc = 0x4635ECu;
        goto label_4635ec;
    }
    ctx->pc = 0x4635E4u;
    {
        const bool branch_taken_0x4635e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4635e4) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4635ECu;
label_4635ec:
    // 0x4635ec: 0x8fa40b50  lw          $a0, 0xB50($sp)
    ctx->pc = 0x4635ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2896)));
label_4635f0:
    // 0x4635f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4635f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4635f4:
    // 0x4635f4: 0x1483010d  bne         $a0, $v1, . + 4 + (0x10D << 2)
label_4635f8:
    if (ctx->pc == 0x4635F8u) {
        ctx->pc = 0x4635FCu;
        goto label_4635fc;
    }
    ctx->pc = 0x4635F4u;
    {
        const bool branch_taken_0x4635f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4635f4) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x4635FCu;
label_4635fc:
    // 0x4635fc: 0x8fa20b30  lw          $v0, 0xB30($sp)
    ctx->pc = 0x4635fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2864)));
label_463600:
    // 0x463600: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x463600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_463604:
    // 0x463604: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x463604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_463608:
    // 0x463608: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x463608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46360c:
    // 0x46360c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_463610:
    if (ctx->pc == 0x463610u) {
        ctx->pc = 0x463614u;
        goto label_463614;
    }
    ctx->pc = 0x46360Cu;
    {
        const bool branch_taken_0x46360c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46360c) {
            ctx->pc = 0x4636DCu;
            goto label_4636dc;
        }
    }
    ctx->pc = 0x463614u;
label_463614:
    // 0x463614: 0x8f83b274  lw          $v1, -0x4D8C($gp)
    ctx->pc = 0x463614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947444)));
label_463618:
    // 0x463618: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_46361c:
    if (ctx->pc == 0x46361Cu) {
        ctx->pc = 0x463620u;
        goto label_463620;
    }
    ctx->pc = 0x463618u;
    {
        const bool branch_taken_0x463618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463618) {
            ctx->pc = 0x4636DCu;
            goto label_4636dc;
        }
    }
    ctx->pc = 0x463620u;
label_463620:
    // 0x463620: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x463620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_463624:
    // 0x463624: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463628:
    // 0x463628: 0x27a60af0  addiu       $a2, $sp, 0xAF0
    ctx->pc = 0x463628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2800));
label_46362c:
    // 0x46362c: 0xc115ee8  jal         func_457BA0
label_463630:
    if (ctx->pc == 0x463630u) {
        ctx->pc = 0x463634u;
        goto label_463634;
    }
    ctx->pc = 0x46362Cu;
    SET_GPR_U32(ctx, 31, 0x463634u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46362Cu, 0x463634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463634u;
label_463634:
    // 0x463634: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x463634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463638:
    // 0x463638: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_46363c:
    if (ctx->pc == 0x46363Cu) {
        ctx->pc = 0x463640u;
        goto label_463640;
    }
    ctx->pc = 0x463638u;
    {
        const bool branch_taken_0x463638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463638) {
            ctx->pc = 0x4636DCu;
            goto label_4636dc;
        }
    }
    ctx->pc = 0x463640u;
label_463640:
    // 0x463640: 0x8fa40af8  lw          $a0, 0xAF8($sp)
    ctx->pc = 0x463640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2808)));
label_463644:
    // 0x463644: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_463648:
    if (ctx->pc == 0x463648u) {
        ctx->pc = 0x46364Cu;
        goto label_46364c;
    }
    ctx->pc = 0x463644u;
    {
        const bool branch_taken_0x463644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x463644) {
            ctx->pc = 0x4636DCu;
            goto label_4636dc;
        }
    }
    ctx->pc = 0x46364Cu;
label_46364c:
    // 0x46364c: 0x27a20400  addiu       $v0, $sp, 0x400
    ctx->pc = 0x46364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_463650:
    // 0x463650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x463650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463654:
    // 0x463654: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463658:
    // 0x463658: 0x8fa20af4  lw          $v0, 0xAF4($sp)
    ctx->pc = 0x463658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2804)));
label_46365c:
    // 0x46365c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46365cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463660:
    // 0x463660: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x463660u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
label_463664:
    // 0x463664: 0x26b5ed20  addiu       $s5, $s5, -0x12E0
    ctx->pc = 0x463664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962464));
label_463668:
    // 0x463668: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x463668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_46366c:
    // 0x46366c: 0x24080930  addiu       $t0, $zero, 0x930
    ctx->pc = 0x46366cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2352));
label_463670:
    // 0x463670: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x463670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_463674:
    // 0x463674: 0x2442f3a0  addiu       $v0, $v0, -0xC60
    ctx->pc = 0x463674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964128));
label_463678:
    // 0x463678: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x463678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46367c:
    // 0x46367c: 0xc113940  jal         func_44E500
label_463680:
    if (ctx->pc == 0x463680u) {
        ctx->pc = 0x463684u;
        goto label_463684;
    }
    ctx->pc = 0x46367Cu;
    SET_GPR_U32(ctx, 31, 0x463684u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46367Cu, 0x463684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463684u;
label_463684:
    // 0x463684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x463684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463688:
    // 0x463688: 0x27a20400  addiu       $v0, $sp, 0x400
    ctx->pc = 0x463688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_46368c:
    // 0x46368c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46368cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463690:
    // 0x463690: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x463690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_463694:
    // 0x463694: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x463694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_463698:
    // 0x463698: 0xc115c24  jal         func_457090
label_46369c:
    if (ctx->pc == 0x46369Cu) {
        ctx->pc = 0x4636A0u;
        goto label_4636a0;
    }
    ctx->pc = 0x463698u;
    SET_GPR_U32(ctx, 31, 0x4636A0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x463698u, 0x4636A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4636A0u;
label_4636a0:
    // 0x4636a0: 0x27b40400  addiu       $s4, $sp, 0x400
    ctx->pc = 0x4636a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4636a4:
    // 0x4636a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4636a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4636a8:
    // 0x4636a8: 0x8fa50af8  lw          $a1, 0xAF8($sp)
    ctx->pc = 0x4636a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2808)));
label_4636ac:
    // 0x4636ac: 0xa0f809  jalr        $a1
label_4636b0:
    if (ctx->pc == 0x4636B0u) {
        ctx->pc = 0x4636B4u;
        goto label_4636b4;
    }
    ctx->pc = 0x4636ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4636B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4636ACu, 0x4636B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4636B4u;
label_4636b4:
    // 0x4636b4: 0xaf82b274  sw          $v0, -0x4D8C($gp)
    ctx->pc = 0x4636b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947444), GPR_U32(ctx, 2));
label_4636b8:
    // 0x4636b8: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x4636b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_4636bc:
    // 0x4636bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4636c0:
    if (ctx->pc == 0x4636C0u) {
        ctx->pc = 0x4636C4u;
        goto label_4636c4;
    }
    ctx->pc = 0x4636BCu;
    {
        const bool branch_taken_0x4636bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4636bc) {
            ctx->pc = 0x4636CCu;
            goto label_4636cc;
        }
    }
    ctx->pc = 0x4636C4u;
label_4636c4:
    // 0x4636c4: 0xd  break       0
    ctx->pc = 0x4636c4u;
    runtime->handleBreak(rdram, ctx);
label_4636c8:
    // 0x4636c8: 0x0  nop
    ctx->pc = 0x4636c8u;
    // NOP
label_4636cc:
    // 0x4636cc: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x4636ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4636d0:
    // 0x4636d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4636d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4636d4:
    // 0x4636d4: 0xc11392c  jal         func_44E4B0
label_4636d8:
    if (ctx->pc == 0x4636D8u) {
        ctx->pc = 0x4636DCu;
        goto label_4636dc;
    }
    ctx->pc = 0x4636D4u;
    SET_GPR_U32(ctx, 31, 0x4636DCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4636D4u, 0x4636DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4636DCu;
label_4636dc:
    // 0x4636dc: 0x8fb60b40  lw          $s6, 0xB40($sp)
    ctx->pc = 0x4636dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_4636e0:
    // 0x4636e0: 0x6c1000a  bgez        $s6, . + 4 + (0xA << 2)
label_4636e4:
    if (ctx->pc == 0x4636E4u) {
        ctx->pc = 0x4636E8u;
        goto label_4636e8;
    }
    ctx->pc = 0x4636E0u;
    {
        const bool branch_taken_0x4636e0 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x4636e0) {
            ctx->pc = 0x46370Cu;
            goto label_46370c;
        }
    }
    ctx->pc = 0x4636E8u;
label_4636e8:
    // 0x4636e8: 0x8fa40b40  lw          $a0, 0xB40($sp)
    ctx->pc = 0x4636e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_4636ec:
    // 0x4636ec: 0xaf84bfb4  sw          $a0, -0x404C($gp)
    ctx->pc = 0x4636ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 4));
label_4636f0:
    // 0x4636f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4636f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4636f4:
    // 0x4636f4: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x4636f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_4636f8:
    // 0x4636f8: 0xc1181ac  jal         func_4606B0
label_4636fc:
    if (ctx->pc == 0x4636FCu) {
        ctx->pc = 0x463700u;
        goto label_463700;
    }
    ctx->pc = 0x4636F8u;
    SET_GPR_U32(ctx, 31, 0x463700u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x4636F8u, 0x463700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463700u;
label_463700:
    // 0x463700: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x463700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463704:
    // 0x463704: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_463708:
    if (ctx->pc == 0x463708u) {
        ctx->pc = 0x46370Cu;
        goto label_46370c;
    }
    ctx->pc = 0x463704u;
    {
        const bool branch_taken_0x463704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463704) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x46370Cu;
label_46370c:
    // 0x46370c: 0x8f87b190  lw          $a3, -0x4E70($gp)
    ctx->pc = 0x46370cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947216)));
label_463710:
    // 0x463710: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x463710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_463714:
    // 0x463714: 0xc0c3b56  jal         func_30ED58
label_463718:
    if (ctx->pc == 0x463718u) {
        ctx->pc = 0x46371Cu;
        goto label_46371c;
    }
    ctx->pc = 0x463714u;
    SET_GPR_U32(ctx, 31, 0x46371Cu);
    ctx->pc = 0x30ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ED58u, 0x463714u, 0x46371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46371Cu;
label_46371c:
    // 0x46371c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x46371cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463720:
    // 0x463720: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x463720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_463724:
    // 0x463724: 0x2001826  xor         $v1, $s0, $zero
    ctx->pc = 0x463724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 0));
label_463728:
    // 0x463728: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x463728u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_46372c:
    // 0x46372c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x46372cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_463730:
    // 0x463730: 0x14800032  bnez        $a0, . + 4 + (0x32 << 2)
label_463734:
    if (ctx->pc == 0x463734u) {
        ctx->pc = 0x463738u;
        goto label_463738;
    }
    ctx->pc = 0x463730u;
    {
        const bool branch_taken_0x463730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x463730) {
            ctx->pc = 0x4637FCu;
            goto label_4637fc;
        }
    }
    ctx->pc = 0x463738u;
label_463738:
    // 0x463738: 0x8f85b278  lw          $a1, -0x4D88($gp)
    ctx->pc = 0x463738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947448)));
label_46373c:
    // 0x46373c: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
label_463740:
    if (ctx->pc == 0x463740u) {
        ctx->pc = 0x463744u;
        goto label_463744;
    }
    ctx->pc = 0x46373Cu;
    {
        const bool branch_taken_0x46373c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46373c) {
            ctx->pc = 0x4637FCu;
            goto label_4637fc;
        }
    }
    ctx->pc = 0x463744u;
label_463744:
    // 0x463744: 0x8f86bf38  lw          $a2, -0x40C8($gp)
    ctx->pc = 0x463744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_463748:
    // 0x463748: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x463748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46374c:
    // 0x46374c: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x46374cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463750:
    // 0x463750: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x463750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_463754:
    // 0x463754: 0x27a90ae0  addiu       $t1, $sp, 0xAE0
    ctx->pc = 0x463754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2784));
label_463758:
    // 0x463758: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x463758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_46375c:
    // 0x46375c: 0xc115ee8  jal         func_457BA0
label_463760:
    if (ctx->pc == 0x463760u) {
        ctx->pc = 0x463764u;
        goto label_463764;
    }
    ctx->pc = 0x46375Cu;
    SET_GPR_U32(ctx, 31, 0x463764u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46375Cu, 0x463764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463764u;
label_463764:
    // 0x463764: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_463768:
    if (ctx->pc == 0x463768u) {
        ctx->pc = 0x46376Cu;
        goto label_46376c;
    }
    ctx->pc = 0x463764u;
    {
        const bool branch_taken_0x463764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x463764) {
            ctx->pc = 0x4637FCu;
            goto label_4637fc;
        }
    }
    ctx->pc = 0x46376Cu;
label_46376c:
    // 0x46376c: 0x8fa50ae8  lw          $a1, 0xAE8($sp)
    ctx->pc = 0x46376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2792)));
label_463770:
    // 0x463770: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_463774:
    if (ctx->pc == 0x463774u) {
        ctx->pc = 0x463778u;
        goto label_463778;
    }
    ctx->pc = 0x463770u;
    {
        const bool branch_taken_0x463770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x463770) {
            ctx->pc = 0x4637FCu;
            goto label_4637fc;
        }
    }
    ctx->pc = 0x463778u;
label_463778:
    // 0x463778: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x463778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_46377c:
    // 0x46377c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46377cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463780:
    // 0x463780: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x463780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463784:
    // 0x463784: 0x8fa60ae4  lw          $a2, 0xAE4($sp)
    ctx->pc = 0x463784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2788)));
label_463788:
    // 0x463788: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x463788u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46378c:
    // 0x46378c: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x46378cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_463790:
    // 0x463790: 0x2408093c  addiu       $t0, $zero, 0x93C
    ctx->pc = 0x463790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2364));
label_463794:
    // 0x463794: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x463794u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_463798:
    // 0x463798: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x463798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
label_46379c:
    // 0x46379c: 0xc113940  jal         func_44E500
label_4637a0:
    if (ctx->pc == 0x4637A0u) {
        ctx->pc = 0x4637A4u;
        goto label_4637a4;
    }
    ctx->pc = 0x46379Cu;
    SET_GPR_U32(ctx, 31, 0x4637A4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46379Cu, 0x4637A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4637A4u;
label_4637a4:
    // 0x4637a4: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x4637a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4637a8:
    // 0x4637a8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4637a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4637ac:
    // 0x4637ac: 0x24a5f3e0  addiu       $a1, $a1, -0xC20
    ctx->pc = 0x4637acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
label_4637b0:
    // 0x4637b0: 0xc115c24  jal         func_457090
label_4637b4:
    if (ctx->pc == 0x4637B4u) {
        ctx->pc = 0x4637B8u;
        goto label_4637b8;
    }
    ctx->pc = 0x4637B0u;
    SET_GPR_U32(ctx, 31, 0x4637B8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4637B0u, 0x4637B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4637B8u;
label_4637b8:
    // 0x4637b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4637b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4637bc:
    // 0x4637bc: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x4637bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4637c0:
    // 0x4637c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4637c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4637c4:
    // 0x4637c4: 0x8fa60ae8  lw          $a2, 0xAE8($sp)
    ctx->pc = 0x4637c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2792)));
label_4637c8:
    // 0x4637c8: 0xc0f809  jalr        $a2
label_4637cc:
    if (ctx->pc == 0x4637CCu) {
        ctx->pc = 0x4637D0u;
        goto label_4637d0;
    }
    ctx->pc = 0x4637C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4637D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4637C8u, 0x4637D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4637D0u;
label_4637d0:
    // 0x4637d0: 0xaf82b278  sw          $v0, -0x4D88($gp)
    ctx->pc = 0x4637d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947448), GPR_U32(ctx, 2));
label_4637d4:
    // 0x4637d4: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x4637d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4637d8:
    // 0x4637d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4637dc:
    if (ctx->pc == 0x4637DCu) {
        ctx->pc = 0x4637E0u;
        goto label_4637e0;
    }
    ctx->pc = 0x4637D8u;
    {
        const bool branch_taken_0x4637d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4637d8) {
            ctx->pc = 0x4637E8u;
            goto label_4637e8;
        }
    }
    ctx->pc = 0x4637E0u;
label_4637e0:
    // 0x4637e0: 0xd  break       0
    ctx->pc = 0x4637e0u;
    runtime->handleBreak(rdram, ctx);
label_4637e4:
    // 0x4637e4: 0x0  nop
    ctx->pc = 0x4637e4u;
    // NOP
label_4637e8:
    // 0x4637e8: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x4637e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_4637ec:
    // 0x4637ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4637ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4637f0:
    // 0x4637f0: 0xc11392c  jal         func_44E4B0
label_4637f4:
    if (ctx->pc == 0x4637F4u) {
        ctx->pc = 0x4637F8u;
        goto label_4637f8;
    }
    ctx->pc = 0x4637F0u;
    SET_GPR_U32(ctx, 31, 0x4637F8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4637F0u, 0x4637F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4637F8u;
label_4637f8:
    // 0x4637f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4637f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4637fc:
    // 0x4637fc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4637fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_463800:
    // 0x463800: 0xaf87bfb0  sw          $a3, -0x4050($gp)
    ctx->pc = 0x463800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 7));
label_463804:
    // 0x463804: 0x10000089  b           . + 4 + (0x89 << 2)
label_463808:
    if (ctx->pc == 0x463808u) {
        ctx->pc = 0x46380Cu;
        goto label_46380c;
    }
    ctx->pc = 0x463804u;
    {
        const bool branch_taken_0x463804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463804) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x46380Cu;
label_46380c:
    // 0x46380c: 0x8fa80b50  lw          $t0, 0xB50($sp)
    ctx->pc = 0x46380cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2896)));
label_463810:
    // 0x463810: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x463810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463814:
    // 0x463814: 0x15090085  bne         $t0, $t1, . + 4 + (0x85 << 2)
label_463818:
    if (ctx->pc == 0x463818u) {
        ctx->pc = 0x46381Cu;
        goto label_46381c;
    }
    ctx->pc = 0x463814u;
    {
        const bool branch_taken_0x463814 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x463814) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x46381Cu;
label_46381c:
    // 0x46381c: 0x8fa20b30  lw          $v0, 0xB30($sp)
    ctx->pc = 0x46381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2864)));
label_463820:
    // 0x463820: 0x38440003  xori        $a0, $v0, 0x3
    ctx->pc = 0x463820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_463824:
    // 0x463824: 0x2c850001  sltiu       $a1, $a0, 0x1
    ctx->pc = 0x463824u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_463828:
    // 0x463828: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x463828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_46382c:
    // 0x46382c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_463830:
    if (ctx->pc == 0x463830u) {
        ctx->pc = 0x463834u;
        goto label_463834;
    }
    ctx->pc = 0x46382Cu;
    {
        const bool branch_taken_0x46382c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46382c) {
            ctx->pc = 0x463904u;
            goto label_463904;
        }
    }
    ctx->pc = 0x463834u;
label_463834:
    // 0x463834: 0x8f84b27c  lw          $a0, -0x4D84($gp)
    ctx->pc = 0x463834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947452)));
label_463838:
    // 0x463838: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_46383c:
    if (ctx->pc == 0x46383Cu) {
        ctx->pc = 0x463840u;
        goto label_463840;
    }
    ctx->pc = 0x463838u;
    {
        const bool branch_taken_0x463838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x463838) {
            ctx->pc = 0x463904u;
            goto label_463904;
        }
    }
    ctx->pc = 0x463840u;
label_463840:
    // 0x463840: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x463840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_463844:
    // 0x463844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x463844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463848:
    // 0x463848: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x463848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46384c:
    // 0x46384c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46384cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463850:
    // 0x463850: 0x27a60ad0  addiu       $a2, $sp, 0xAD0
    ctx->pc = 0x463850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2768));
label_463854:
    // 0x463854: 0xc115ee8  jal         func_457BA0
label_463858:
    if (ctx->pc == 0x463858u) {
        ctx->pc = 0x46385Cu;
        goto label_46385c;
    }
    ctx->pc = 0x463854u;
    SET_GPR_U32(ctx, 31, 0x46385Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x463854u, 0x46385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46385Cu;
label_46385c:
    // 0x46385c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x46385cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463860:
    // 0x463860: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
label_463864:
    if (ctx->pc == 0x463864u) {
        ctx->pc = 0x463868u;
        goto label_463868;
    }
    ctx->pc = 0x463860u;
    {
        const bool branch_taken_0x463860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x463860) {
            ctx->pc = 0x463904u;
            goto label_463904;
        }
    }
    ctx->pc = 0x463868u;
label_463868:
    // 0x463868: 0x8fa50ad8  lw          $a1, 0xAD8($sp)
    ctx->pc = 0x463868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2776)));
label_46386c:
    // 0x46386c: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
label_463870:
    if (ctx->pc == 0x463870u) {
        ctx->pc = 0x463874u;
        goto label_463874;
    }
    ctx->pc = 0x46386Cu;
    {
        const bool branch_taken_0x46386c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x46386c) {
            ctx->pc = 0x463904u;
            goto label_463904;
        }
    }
    ctx->pc = 0x463874u;
label_463874:
    // 0x463874: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x463874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_463878:
    // 0x463878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x463878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46387c:
    // 0x46387c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463880:
    // 0x463880: 0x8fa60ad4  lw          $a2, 0xAD4($sp)
    ctx->pc = 0x463880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2772)));
label_463884:
    // 0x463884: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x463884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_463888:
    // 0x463888: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x463888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_46388c:
    // 0x46388c: 0x24020947  addiu       $v0, $zero, 0x947
    ctx->pc = 0x46388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2375));
label_463890:
    // 0x463890: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x463890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463894:
    // 0x463894: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x463894u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_463898:
    // 0x463898: 0x2529f400  addiu       $t1, $t1, -0xC00
    ctx->pc = 0x463898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964224));
label_46389c:
    // 0x46389c: 0xc113940  jal         func_44E500
label_4638a0:
    if (ctx->pc == 0x4638A0u) {
        ctx->pc = 0x4638A4u;
        goto label_4638a4;
    }
    ctx->pc = 0x46389Cu;
    SET_GPR_U32(ctx, 31, 0x4638A4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46389Cu, 0x4638A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4638A4u;
label_4638a4:
    // 0x4638a4: 0x27b201c0  addiu       $s2, $sp, 0x1C0
    ctx->pc = 0x4638a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4638a8:
    // 0x4638a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4638a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4638ac:
    // 0x4638ac: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4638acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4638b0:
    // 0x4638b0: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x4638b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_4638b4:
    // 0x4638b4: 0xc115c24  jal         func_457090
label_4638b8:
    if (ctx->pc == 0x4638B8u) {
        ctx->pc = 0x4638BCu;
        goto label_4638bc;
    }
    ctx->pc = 0x4638B4u;
    SET_GPR_U32(ctx, 31, 0x4638BCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4638B4u, 0x4638BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4638BCu;
label_4638bc:
    // 0x4638bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4638bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4638c0:
    // 0x4638c0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x4638c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4638c4:
    // 0x4638c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4638c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4638c8:
    // 0x4638c8: 0x8fa70ad8  lw          $a3, 0xAD8($sp)
    ctx->pc = 0x4638c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2776)));
label_4638cc:
    // 0x4638cc: 0xe0f809  jalr        $a3
label_4638d0:
    if (ctx->pc == 0x4638D0u) {
        ctx->pc = 0x4638D4u;
        goto label_4638d4;
    }
    ctx->pc = 0x4638CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x4638D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4638CCu, 0x4638D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4638D4u;
label_4638d4:
    // 0x4638d4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4638d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4638d8:
    // 0x4638d8: 0xaf88b27c  sw          $t0, -0x4D84($gp)
    ctx->pc = 0x4638d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947452), GPR_U32(ctx, 8));
label_4638dc:
    // 0x4638dc: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x4638dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_4638e0:
    // 0x4638e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4638e4:
    if (ctx->pc == 0x4638E4u) {
        ctx->pc = 0x4638E8u;
        goto label_4638e8;
    }
    ctx->pc = 0x4638E0u;
    {
        const bool branch_taken_0x4638e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4638e0) {
            ctx->pc = 0x4638F0u;
            goto label_4638f0;
        }
    }
    ctx->pc = 0x4638E8u;
label_4638e8:
    // 0x4638e8: 0xd  break       0
    ctx->pc = 0x4638e8u;
    runtime->handleBreak(rdram, ctx);
label_4638ec:
    // 0x4638ec: 0x0  nop
    ctx->pc = 0x4638ecu;
    // NOP
label_4638f0:
    // 0x4638f0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4638f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4638f4:
    // 0x4638f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4638f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4638f8:
    // 0x4638f8: 0xc11392c  jal         func_44E4B0
label_4638fc:
    if (ctx->pc == 0x4638FCu) {
        ctx->pc = 0x463900u;
        goto label_463900;
    }
    ctx->pc = 0x4638F8u;
    SET_GPR_U32(ctx, 31, 0x463900u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4638F8u, 0x463900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463900u;
label_463900:
    // 0x463900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x463900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463904:
    // 0x463904: 0x8fa80b40  lw          $t0, 0xB40($sp)
    ctx->pc = 0x463904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_463908:
    // 0x463908: 0x501000b  bgez        $t0, . + 4 + (0xB << 2)
label_46390c:
    if (ctx->pc == 0x46390Cu) {
        ctx->pc = 0x463910u;
        goto label_463910;
    }
    ctx->pc = 0x463908u;
    {
        const bool branch_taken_0x463908 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x463908) {
            ctx->pc = 0x463938u;
            goto label_463938;
        }
    }
    ctx->pc = 0x463910u;
label_463910:
    // 0x463910: 0x8fa90b40  lw          $t1, 0xB40($sp)
    ctx->pc = 0x463910u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2880)));
label_463914:
    // 0x463914: 0xaf89bfb4  sw          $t1, -0x404C($gp)
    ctx->pc = 0x463914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 9));
label_463918:
    // 0x463918: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x463918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46391c:
    // 0x46391c: 0x8f82bfb4  lw          $v0, -0x404C($gp)
    ctx->pc = 0x46391cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_463920:
    // 0x463920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463924:
    // 0x463924: 0xc1181ac  jal         func_4606B0
label_463928:
    if (ctx->pc == 0x463928u) {
        ctx->pc = 0x46392Cu;
        goto label_46392c;
    }
    ctx->pc = 0x463924u;
    SET_GPR_U32(ctx, 31, 0x46392Cu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463924u, 0x46392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46392Cu;
label_46392c:
    // 0x46392c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46392cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463930:
    // 0x463930: 0x1000003e  b           . + 4 + (0x3E << 2)
label_463934:
    if (ctx->pc == 0x463934u) {
        ctx->pc = 0x463938u;
        goto label_463938;
    }
    ctx->pc = 0x463930u;
    {
        const bool branch_taken_0x463930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463930) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x463938u;
label_463938:
    // 0x463938: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x463938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46393c:
    // 0x46393c: 0xaf82b190  sw          $v0, -0x4E70($gp)
    ctx->pc = 0x46393cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947216), GPR_U32(ctx, 2));
label_463940:
    // 0x463940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x463940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_463944:
    // 0x463944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x463944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_463948:
    // 0x463948: 0xc1181ac  jal         func_4606B0
label_46394c:
    if (ctx->pc == 0x46394Cu) {
        ctx->pc = 0x463950u;
        goto label_463950;
    }
    ctx->pc = 0x463948u;
    SET_GPR_U32(ctx, 31, 0x463950u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x463948u, 0x463950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463950u;
label_463950:
    // 0x463950: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x463950u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463954:
    // 0x463954: 0x10000035  b           . + 4 + (0x35 << 2)
label_463958:
    if (ctx->pc == 0x463958u) {
        ctx->pc = 0x46395Cu;
        goto label_46395c;
    }
    ctx->pc = 0x463954u;
    {
        const bool branch_taken_0x463954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x463954) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x46395Cu;
label_46395c:
    // 0x46395c: 0x8f83b280  lw          $v1, -0x4D80($gp)
    ctx->pc = 0x46395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947456)));
label_463960:
    // 0x463960: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_463964:
    if (ctx->pc == 0x463964u) {
        ctx->pc = 0x463968u;
        goto label_463968;
    }
    ctx->pc = 0x463960u;
    {
        const bool branch_taken_0x463960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463960) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x463968u;
label_463968:
    // 0x463968: 0x8f85bf38  lw          $a1, -0x40C8($gp)
    ctx->pc = 0x463968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_46396c:
    // 0x46396c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x46396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_463970:
    // 0x463970: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x463970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_463974:
    // 0x463974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463978:
    // 0x463978: 0x27a60ac0  addiu       $a2, $sp, 0xAC0
    ctx->pc = 0x463978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2752));
label_46397c:
    // 0x46397c: 0xc115ee8  jal         func_457BA0
label_463980:
    if (ctx->pc == 0x463980u) {
        ctx->pc = 0x463984u;
        goto label_463984;
    }
    ctx->pc = 0x46397Cu;
    SET_GPR_U32(ctx, 31, 0x463984u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46397Cu, 0x463984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463984u;
label_463984:
    // 0x463984: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x463984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463988:
    // 0x463988: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_46398c:
    if (ctx->pc == 0x46398Cu) {
        ctx->pc = 0x463990u;
        goto label_463990;
    }
    ctx->pc = 0x463988u;
    {
        const bool branch_taken_0x463988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463988) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x463990u;
label_463990:
    // 0x463990: 0x8fa30ac8  lw          $v1, 0xAC8($sp)
    ctx->pc = 0x463990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2760)));
label_463994:
    // 0x463994: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_463998:
    if (ctx->pc == 0x463998u) {
        ctx->pc = 0x46399Cu;
        goto label_46399c;
    }
    ctx->pc = 0x463994u;
    {
        const bool branch_taken_0x463994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x463994) {
            ctx->pc = 0x463A2Cu;
            goto label_463a2c;
        }
    }
    ctx->pc = 0x46399Cu;
label_46399c:
    // 0x46399c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x46399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4639a0:
    // 0x4639a0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4639a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4639a4:
    // 0x4639a4: 0x8fa60ac4  lw          $a2, 0xAC4($sp)
    ctx->pc = 0x4639a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2756)));
label_4639a8:
    // 0x4639a8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4639a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4639ac:
    // 0x4639ac: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4639acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4639b0:
    // 0x4639b0: 0x2408095a  addiu       $t0, $zero, 0x95A
    ctx->pc = 0x4639b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2394));
label_4639b4:
    // 0x4639b4: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x4639b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_4639b8:
    // 0x4639b8: 0xc113940  jal         func_44E500
label_4639bc:
    if (ctx->pc == 0x4639BCu) {
        ctx->pc = 0x4639C0u;
        goto label_4639c0;
    }
    ctx->pc = 0x4639B8u;
    SET_GPR_U32(ctx, 31, 0x4639C0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4639B8u, 0x4639C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4639C0u;
label_4639c0:
    // 0x4639c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4639c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4639c4:
    // 0x4639c4: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x4639c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4639c8:
    // 0x4639c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4639c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4639cc:
    // 0x4639cc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4639ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4639d0:
    // 0x4639d0: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x4639d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_4639d4:
    // 0x4639d4: 0xc115c24  jal         func_457090
label_4639d8:
    if (ctx->pc == 0x4639D8u) {
        ctx->pc = 0x4639DCu;
        goto label_4639dc;
    }
    ctx->pc = 0x4639D4u;
    SET_GPR_U32(ctx, 31, 0x4639DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4639D4u, 0x4639DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4639DCu;
label_4639dc:
    // 0x4639dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4639dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4639e0:
    // 0x4639e0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x4639e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4639e4:
    // 0x4639e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4639e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4639e8:
    // 0x4639e8: 0x8fa60ac8  lw          $a2, 0xAC8($sp)
    ctx->pc = 0x4639e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2760)));
label_4639ec:
    // 0x4639ec: 0xc0f809  jalr        $a2
label_4639f0:
    if (ctx->pc == 0x4639F0u) {
        ctx->pc = 0x4639F4u;
        goto label_4639f4;
    }
    ctx->pc = 0x4639ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4639F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4639ECu, 0x4639F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4639F4u;
label_4639f4:
    // 0x4639f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4639f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4639f8:
    // 0x4639f8: 0xaf87b280  sw          $a3, -0x4D80($gp)
    ctx->pc = 0x4639f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947456), GPR_U32(ctx, 7));
label_4639fc:
    // 0x4639fc: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x4639fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_463a00:
    // 0x463a00: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_463a04:
    if (ctx->pc == 0x463A04u) {
        ctx->pc = 0x463A08u;
        goto label_463a08;
    }
    ctx->pc = 0x463A00u;
    {
        const bool branch_taken_0x463a00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x463a00) {
            ctx->pc = 0x463A10u;
            goto label_463a10;
        }
    }
    ctx->pc = 0x463A08u;
label_463a08:
    // 0x463a08: 0xd  break       0
    ctx->pc = 0x463a08u;
    runtime->handleBreak(rdram, ctx);
label_463a0c:
    // 0x463a0c: 0x0  nop
    ctx->pc = 0x463a0cu;
    // NOP
label_463a10:
    // 0x463a10: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x463a10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_463a14:
    // 0x463a14: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x463a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_463a18:
    // 0x463a18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x463a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_463a1c:
    // 0x463a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x463a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463a20:
    // 0x463a20: 0xc11392c  jal         func_44E4B0
label_463a24:
    if (ctx->pc == 0x463A24u) {
        ctx->pc = 0x463A28u;
        goto label_463a28;
    }
    ctx->pc = 0x463A20u;
    SET_GPR_U32(ctx, 31, 0x463A28u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x463A20u, 0x463A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x463A28u;
label_463a28:
    // 0x463a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x463a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463a2c:
    // 0x463a2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x463a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_463a30:
    // 0x463a30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x463a30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_463a34:
    // 0x463a34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x463a34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_463a38:
    // 0x463a38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x463a38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_463a3c:
    // 0x463a3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x463a3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_463a40:
    // 0x463a40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x463a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_463a44:
    // 0x463a44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x463a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_463a48:
    // 0x463a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x463a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_463a4c:
    // 0x463a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x463a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_463a50:
    // 0x463a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_463a54:
    // 0x463a54: 0x27bd0b60  addiu       $sp, $sp, 0xB60
    ctx->pc = 0x463a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2912));
label_463a58:
    // 0x463a58: 0x3e00008  jr          $ra
label_463a5c:
    if (ctx->pc == 0x463A5Cu) {
        ctx->pc = 0x463A60u;
        goto label_fallthrough_0x463a58;
    }
    ctx->pc = 0x463A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x463a58:
    ctx->pc = 0x463A60u;
}
