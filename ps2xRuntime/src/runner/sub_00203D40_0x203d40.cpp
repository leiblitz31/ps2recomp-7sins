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

// Function: sub_00203D40
// Address: 0x203d40 - 0x204c60
void sub_00203D40_0x203d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203D40_0x203d40");
#endif

    switch (ctx->pc) {
        case 0x203d40u: goto label_203d40;
        case 0x203d44u: goto label_203d44;
        case 0x203d48u: goto label_203d48;
        case 0x203d4cu: goto label_203d4c;
        case 0x203d50u: goto label_203d50;
        case 0x203d54u: goto label_203d54;
        case 0x203d58u: goto label_203d58;
        case 0x203d5cu: goto label_203d5c;
        case 0x203d60u: goto label_203d60;
        case 0x203d64u: goto label_203d64;
        case 0x203d68u: goto label_203d68;
        case 0x203d6cu: goto label_203d6c;
        case 0x203d70u: goto label_203d70;
        case 0x203d74u: goto label_203d74;
        case 0x203d78u: goto label_203d78;
        case 0x203d7cu: goto label_203d7c;
        case 0x203d80u: goto label_203d80;
        case 0x203d84u: goto label_203d84;
        case 0x203d88u: goto label_203d88;
        case 0x203d8cu: goto label_203d8c;
        case 0x203d90u: goto label_203d90;
        case 0x203d94u: goto label_203d94;
        case 0x203d98u: goto label_203d98;
        case 0x203d9cu: goto label_203d9c;
        case 0x203da0u: goto label_203da0;
        case 0x203da4u: goto label_203da4;
        case 0x203da8u: goto label_203da8;
        case 0x203dacu: goto label_203dac;
        case 0x203db0u: goto label_203db0;
        case 0x203db4u: goto label_203db4;
        case 0x203db8u: goto label_203db8;
        case 0x203dbcu: goto label_203dbc;
        case 0x203dc0u: goto label_203dc0;
        case 0x203dc4u: goto label_203dc4;
        case 0x203dc8u: goto label_203dc8;
        case 0x203dccu: goto label_203dcc;
        case 0x203dd0u: goto label_203dd0;
        case 0x203dd4u: goto label_203dd4;
        case 0x203dd8u: goto label_203dd8;
        case 0x203ddcu: goto label_203ddc;
        case 0x203de0u: goto label_203de0;
        case 0x203de4u: goto label_203de4;
        case 0x203de8u: goto label_203de8;
        case 0x203decu: goto label_203dec;
        case 0x203df0u: goto label_203df0;
        case 0x203df4u: goto label_203df4;
        case 0x203df8u: goto label_203df8;
        case 0x203dfcu: goto label_203dfc;
        case 0x203e00u: goto label_203e00;
        case 0x203e04u: goto label_203e04;
        case 0x203e08u: goto label_203e08;
        case 0x203e0cu: goto label_203e0c;
        case 0x203e10u: goto label_203e10;
        case 0x203e14u: goto label_203e14;
        case 0x203e18u: goto label_203e18;
        case 0x203e1cu: goto label_203e1c;
        case 0x203e20u: goto label_203e20;
        case 0x203e24u: goto label_203e24;
        case 0x203e28u: goto label_203e28;
        case 0x203e2cu: goto label_203e2c;
        case 0x203e30u: goto label_203e30;
        case 0x203e34u: goto label_203e34;
        case 0x203e38u: goto label_203e38;
        case 0x203e3cu: goto label_203e3c;
        case 0x203e40u: goto label_203e40;
        case 0x203e44u: goto label_203e44;
        case 0x203e48u: goto label_203e48;
        case 0x203e4cu: goto label_203e4c;
        case 0x203e50u: goto label_203e50;
        case 0x203e54u: goto label_203e54;
        case 0x203e58u: goto label_203e58;
        case 0x203e5cu: goto label_203e5c;
        case 0x203e60u: goto label_203e60;
        case 0x203e64u: goto label_203e64;
        case 0x203e68u: goto label_203e68;
        case 0x203e6cu: goto label_203e6c;
        case 0x203e70u: goto label_203e70;
        case 0x203e74u: goto label_203e74;
        case 0x203e78u: goto label_203e78;
        case 0x203e7cu: goto label_203e7c;
        case 0x203e80u: goto label_203e80;
        case 0x203e84u: goto label_203e84;
        case 0x203e88u: goto label_203e88;
        case 0x203e8cu: goto label_203e8c;
        case 0x203e90u: goto label_203e90;
        case 0x203e94u: goto label_203e94;
        case 0x203e98u: goto label_203e98;
        case 0x203e9cu: goto label_203e9c;
        case 0x203ea0u: goto label_203ea0;
        case 0x203ea4u: goto label_203ea4;
        case 0x203ea8u: goto label_203ea8;
        case 0x203eacu: goto label_203eac;
        case 0x203eb0u: goto label_203eb0;
        case 0x203eb4u: goto label_203eb4;
        case 0x203eb8u: goto label_203eb8;
        case 0x203ebcu: goto label_203ebc;
        case 0x203ec0u: goto label_203ec0;
        case 0x203ec4u: goto label_203ec4;
        case 0x203ec8u: goto label_203ec8;
        case 0x203eccu: goto label_203ecc;
        case 0x203ed0u: goto label_203ed0;
        case 0x203ed4u: goto label_203ed4;
        case 0x203ed8u: goto label_203ed8;
        case 0x203edcu: goto label_203edc;
        case 0x203ee0u: goto label_203ee0;
        case 0x203ee4u: goto label_203ee4;
        case 0x203ee8u: goto label_203ee8;
        case 0x203eecu: goto label_203eec;
        case 0x203ef0u: goto label_203ef0;
        case 0x203ef4u: goto label_203ef4;
        case 0x203ef8u: goto label_203ef8;
        case 0x203efcu: goto label_203efc;
        case 0x203f00u: goto label_203f00;
        case 0x203f04u: goto label_203f04;
        case 0x203f08u: goto label_203f08;
        case 0x203f0cu: goto label_203f0c;
        case 0x203f10u: goto label_203f10;
        case 0x203f14u: goto label_203f14;
        case 0x203f18u: goto label_203f18;
        case 0x203f1cu: goto label_203f1c;
        case 0x203f20u: goto label_203f20;
        case 0x203f24u: goto label_203f24;
        case 0x203f28u: goto label_203f28;
        case 0x203f2cu: goto label_203f2c;
        case 0x203f30u: goto label_203f30;
        case 0x203f34u: goto label_203f34;
        case 0x203f38u: goto label_203f38;
        case 0x203f3cu: goto label_203f3c;
        case 0x203f40u: goto label_203f40;
        case 0x203f44u: goto label_203f44;
        case 0x203f48u: goto label_203f48;
        case 0x203f4cu: goto label_203f4c;
        case 0x203f50u: goto label_203f50;
        case 0x203f54u: goto label_203f54;
        case 0x203f58u: goto label_203f58;
        case 0x203f5cu: goto label_203f5c;
        case 0x203f60u: goto label_203f60;
        case 0x203f64u: goto label_203f64;
        case 0x203f68u: goto label_203f68;
        case 0x203f6cu: goto label_203f6c;
        case 0x203f70u: goto label_203f70;
        case 0x203f74u: goto label_203f74;
        case 0x203f78u: goto label_203f78;
        case 0x203f7cu: goto label_203f7c;
        case 0x203f80u: goto label_203f80;
        case 0x203f84u: goto label_203f84;
        case 0x203f88u: goto label_203f88;
        case 0x203f8cu: goto label_203f8c;
        case 0x203f90u: goto label_203f90;
        case 0x203f94u: goto label_203f94;
        case 0x203f98u: goto label_203f98;
        case 0x203f9cu: goto label_203f9c;
        case 0x203fa0u: goto label_203fa0;
        case 0x203fa4u: goto label_203fa4;
        case 0x203fa8u: goto label_203fa8;
        case 0x203facu: goto label_203fac;
        case 0x203fb0u: goto label_203fb0;
        case 0x203fb4u: goto label_203fb4;
        case 0x203fb8u: goto label_203fb8;
        case 0x203fbcu: goto label_203fbc;
        case 0x203fc0u: goto label_203fc0;
        case 0x203fc4u: goto label_203fc4;
        case 0x203fc8u: goto label_203fc8;
        case 0x203fccu: goto label_203fcc;
        case 0x203fd0u: goto label_203fd0;
        case 0x203fd4u: goto label_203fd4;
        case 0x203fd8u: goto label_203fd8;
        case 0x203fdcu: goto label_203fdc;
        case 0x203fe0u: goto label_203fe0;
        case 0x203fe4u: goto label_203fe4;
        case 0x203fe8u: goto label_203fe8;
        case 0x203fecu: goto label_203fec;
        case 0x203ff0u: goto label_203ff0;
        case 0x203ff4u: goto label_203ff4;
        case 0x203ff8u: goto label_203ff8;
        case 0x203ffcu: goto label_203ffc;
        case 0x204000u: goto label_204000;
        case 0x204004u: goto label_204004;
        case 0x204008u: goto label_204008;
        case 0x20400cu: goto label_20400c;
        case 0x204010u: goto label_204010;
        case 0x204014u: goto label_204014;
        case 0x204018u: goto label_204018;
        case 0x20401cu: goto label_20401c;
        case 0x204020u: goto label_204020;
        case 0x204024u: goto label_204024;
        case 0x204028u: goto label_204028;
        case 0x20402cu: goto label_20402c;
        case 0x204030u: goto label_204030;
        case 0x204034u: goto label_204034;
        case 0x204038u: goto label_204038;
        case 0x20403cu: goto label_20403c;
        case 0x204040u: goto label_204040;
        case 0x204044u: goto label_204044;
        case 0x204048u: goto label_204048;
        case 0x20404cu: goto label_20404c;
        case 0x204050u: goto label_204050;
        case 0x204054u: goto label_204054;
        case 0x204058u: goto label_204058;
        case 0x20405cu: goto label_20405c;
        case 0x204060u: goto label_204060;
        case 0x204064u: goto label_204064;
        case 0x204068u: goto label_204068;
        case 0x20406cu: goto label_20406c;
        case 0x204070u: goto label_204070;
        case 0x204074u: goto label_204074;
        case 0x204078u: goto label_204078;
        case 0x20407cu: goto label_20407c;
        case 0x204080u: goto label_204080;
        case 0x204084u: goto label_204084;
        case 0x204088u: goto label_204088;
        case 0x20408cu: goto label_20408c;
        case 0x204090u: goto label_204090;
        case 0x204094u: goto label_204094;
        case 0x204098u: goto label_204098;
        case 0x20409cu: goto label_20409c;
        case 0x2040a0u: goto label_2040a0;
        case 0x2040a4u: goto label_2040a4;
        case 0x2040a8u: goto label_2040a8;
        case 0x2040acu: goto label_2040ac;
        case 0x2040b0u: goto label_2040b0;
        case 0x2040b4u: goto label_2040b4;
        case 0x2040b8u: goto label_2040b8;
        case 0x2040bcu: goto label_2040bc;
        case 0x2040c0u: goto label_2040c0;
        case 0x2040c4u: goto label_2040c4;
        case 0x2040c8u: goto label_2040c8;
        case 0x2040ccu: goto label_2040cc;
        case 0x2040d0u: goto label_2040d0;
        case 0x2040d4u: goto label_2040d4;
        case 0x2040d8u: goto label_2040d8;
        case 0x2040dcu: goto label_2040dc;
        case 0x2040e0u: goto label_2040e0;
        case 0x2040e4u: goto label_2040e4;
        case 0x2040e8u: goto label_2040e8;
        case 0x2040ecu: goto label_2040ec;
        case 0x2040f0u: goto label_2040f0;
        case 0x2040f4u: goto label_2040f4;
        case 0x2040f8u: goto label_2040f8;
        case 0x2040fcu: goto label_2040fc;
        case 0x204100u: goto label_204100;
        case 0x204104u: goto label_204104;
        case 0x204108u: goto label_204108;
        case 0x20410cu: goto label_20410c;
        case 0x204110u: goto label_204110;
        case 0x204114u: goto label_204114;
        case 0x204118u: goto label_204118;
        case 0x20411cu: goto label_20411c;
        case 0x204120u: goto label_204120;
        case 0x204124u: goto label_204124;
        case 0x204128u: goto label_204128;
        case 0x20412cu: goto label_20412c;
        case 0x204130u: goto label_204130;
        case 0x204134u: goto label_204134;
        case 0x204138u: goto label_204138;
        case 0x20413cu: goto label_20413c;
        case 0x204140u: goto label_204140;
        case 0x204144u: goto label_204144;
        case 0x204148u: goto label_204148;
        case 0x20414cu: goto label_20414c;
        case 0x204150u: goto label_204150;
        case 0x204154u: goto label_204154;
        case 0x204158u: goto label_204158;
        case 0x20415cu: goto label_20415c;
        case 0x204160u: goto label_204160;
        case 0x204164u: goto label_204164;
        case 0x204168u: goto label_204168;
        case 0x20416cu: goto label_20416c;
        case 0x204170u: goto label_204170;
        case 0x204174u: goto label_204174;
        case 0x204178u: goto label_204178;
        case 0x20417cu: goto label_20417c;
        case 0x204180u: goto label_204180;
        case 0x204184u: goto label_204184;
        case 0x204188u: goto label_204188;
        case 0x20418cu: goto label_20418c;
        case 0x204190u: goto label_204190;
        case 0x204194u: goto label_204194;
        case 0x204198u: goto label_204198;
        case 0x20419cu: goto label_20419c;
        case 0x2041a0u: goto label_2041a0;
        case 0x2041a4u: goto label_2041a4;
        case 0x2041a8u: goto label_2041a8;
        case 0x2041acu: goto label_2041ac;
        case 0x2041b0u: goto label_2041b0;
        case 0x2041b4u: goto label_2041b4;
        case 0x2041b8u: goto label_2041b8;
        case 0x2041bcu: goto label_2041bc;
        case 0x2041c0u: goto label_2041c0;
        case 0x2041c4u: goto label_2041c4;
        case 0x2041c8u: goto label_2041c8;
        case 0x2041ccu: goto label_2041cc;
        case 0x2041d0u: goto label_2041d0;
        case 0x2041d4u: goto label_2041d4;
        case 0x2041d8u: goto label_2041d8;
        case 0x2041dcu: goto label_2041dc;
        case 0x2041e0u: goto label_2041e0;
        case 0x2041e4u: goto label_2041e4;
        case 0x2041e8u: goto label_2041e8;
        case 0x2041ecu: goto label_2041ec;
        case 0x2041f0u: goto label_2041f0;
        case 0x2041f4u: goto label_2041f4;
        case 0x2041f8u: goto label_2041f8;
        case 0x2041fcu: goto label_2041fc;
        case 0x204200u: goto label_204200;
        case 0x204204u: goto label_204204;
        case 0x204208u: goto label_204208;
        case 0x20420cu: goto label_20420c;
        case 0x204210u: goto label_204210;
        case 0x204214u: goto label_204214;
        case 0x204218u: goto label_204218;
        case 0x20421cu: goto label_20421c;
        case 0x204220u: goto label_204220;
        case 0x204224u: goto label_204224;
        case 0x204228u: goto label_204228;
        case 0x20422cu: goto label_20422c;
        case 0x204230u: goto label_204230;
        case 0x204234u: goto label_204234;
        case 0x204238u: goto label_204238;
        case 0x20423cu: goto label_20423c;
        case 0x204240u: goto label_204240;
        case 0x204244u: goto label_204244;
        case 0x204248u: goto label_204248;
        case 0x20424cu: goto label_20424c;
        case 0x204250u: goto label_204250;
        case 0x204254u: goto label_204254;
        case 0x204258u: goto label_204258;
        case 0x20425cu: goto label_20425c;
        case 0x204260u: goto label_204260;
        case 0x204264u: goto label_204264;
        case 0x204268u: goto label_204268;
        case 0x20426cu: goto label_20426c;
        case 0x204270u: goto label_204270;
        case 0x204274u: goto label_204274;
        case 0x204278u: goto label_204278;
        case 0x20427cu: goto label_20427c;
        case 0x204280u: goto label_204280;
        case 0x204284u: goto label_204284;
        case 0x204288u: goto label_204288;
        case 0x20428cu: goto label_20428c;
        case 0x204290u: goto label_204290;
        case 0x204294u: goto label_204294;
        case 0x204298u: goto label_204298;
        case 0x20429cu: goto label_20429c;
        case 0x2042a0u: goto label_2042a0;
        case 0x2042a4u: goto label_2042a4;
        case 0x2042a8u: goto label_2042a8;
        case 0x2042acu: goto label_2042ac;
        case 0x2042b0u: goto label_2042b0;
        case 0x2042b4u: goto label_2042b4;
        case 0x2042b8u: goto label_2042b8;
        case 0x2042bcu: goto label_2042bc;
        case 0x2042c0u: goto label_2042c0;
        case 0x2042c4u: goto label_2042c4;
        case 0x2042c8u: goto label_2042c8;
        case 0x2042ccu: goto label_2042cc;
        case 0x2042d0u: goto label_2042d0;
        case 0x2042d4u: goto label_2042d4;
        case 0x2042d8u: goto label_2042d8;
        case 0x2042dcu: goto label_2042dc;
        case 0x2042e0u: goto label_2042e0;
        case 0x2042e4u: goto label_2042e4;
        case 0x2042e8u: goto label_2042e8;
        case 0x2042ecu: goto label_2042ec;
        case 0x2042f0u: goto label_2042f0;
        case 0x2042f4u: goto label_2042f4;
        case 0x2042f8u: goto label_2042f8;
        case 0x2042fcu: goto label_2042fc;
        case 0x204300u: goto label_204300;
        case 0x204304u: goto label_204304;
        case 0x204308u: goto label_204308;
        case 0x20430cu: goto label_20430c;
        case 0x204310u: goto label_204310;
        case 0x204314u: goto label_204314;
        case 0x204318u: goto label_204318;
        case 0x20431cu: goto label_20431c;
        case 0x204320u: goto label_204320;
        case 0x204324u: goto label_204324;
        case 0x204328u: goto label_204328;
        case 0x20432cu: goto label_20432c;
        case 0x204330u: goto label_204330;
        case 0x204334u: goto label_204334;
        case 0x204338u: goto label_204338;
        case 0x20433cu: goto label_20433c;
        case 0x204340u: goto label_204340;
        case 0x204344u: goto label_204344;
        case 0x204348u: goto label_204348;
        case 0x20434cu: goto label_20434c;
        case 0x204350u: goto label_204350;
        case 0x204354u: goto label_204354;
        case 0x204358u: goto label_204358;
        case 0x20435cu: goto label_20435c;
        case 0x204360u: goto label_204360;
        case 0x204364u: goto label_204364;
        case 0x204368u: goto label_204368;
        case 0x20436cu: goto label_20436c;
        case 0x204370u: goto label_204370;
        case 0x204374u: goto label_204374;
        case 0x204378u: goto label_204378;
        case 0x20437cu: goto label_20437c;
        case 0x204380u: goto label_204380;
        case 0x204384u: goto label_204384;
        case 0x204388u: goto label_204388;
        case 0x20438cu: goto label_20438c;
        case 0x204390u: goto label_204390;
        case 0x204394u: goto label_204394;
        case 0x204398u: goto label_204398;
        case 0x20439cu: goto label_20439c;
        case 0x2043a0u: goto label_2043a0;
        case 0x2043a4u: goto label_2043a4;
        case 0x2043a8u: goto label_2043a8;
        case 0x2043acu: goto label_2043ac;
        case 0x2043b0u: goto label_2043b0;
        case 0x2043b4u: goto label_2043b4;
        case 0x2043b8u: goto label_2043b8;
        case 0x2043bcu: goto label_2043bc;
        case 0x2043c0u: goto label_2043c0;
        case 0x2043c4u: goto label_2043c4;
        case 0x2043c8u: goto label_2043c8;
        case 0x2043ccu: goto label_2043cc;
        case 0x2043d0u: goto label_2043d0;
        case 0x2043d4u: goto label_2043d4;
        case 0x2043d8u: goto label_2043d8;
        case 0x2043dcu: goto label_2043dc;
        case 0x2043e0u: goto label_2043e0;
        case 0x2043e4u: goto label_2043e4;
        case 0x2043e8u: goto label_2043e8;
        case 0x2043ecu: goto label_2043ec;
        case 0x2043f0u: goto label_2043f0;
        case 0x2043f4u: goto label_2043f4;
        case 0x2043f8u: goto label_2043f8;
        case 0x2043fcu: goto label_2043fc;
        case 0x204400u: goto label_204400;
        case 0x204404u: goto label_204404;
        case 0x204408u: goto label_204408;
        case 0x20440cu: goto label_20440c;
        case 0x204410u: goto label_204410;
        case 0x204414u: goto label_204414;
        case 0x204418u: goto label_204418;
        case 0x20441cu: goto label_20441c;
        case 0x204420u: goto label_204420;
        case 0x204424u: goto label_204424;
        case 0x204428u: goto label_204428;
        case 0x20442cu: goto label_20442c;
        case 0x204430u: goto label_204430;
        case 0x204434u: goto label_204434;
        case 0x204438u: goto label_204438;
        case 0x20443cu: goto label_20443c;
        case 0x204440u: goto label_204440;
        case 0x204444u: goto label_204444;
        case 0x204448u: goto label_204448;
        case 0x20444cu: goto label_20444c;
        case 0x204450u: goto label_204450;
        case 0x204454u: goto label_204454;
        case 0x204458u: goto label_204458;
        case 0x20445cu: goto label_20445c;
        case 0x204460u: goto label_204460;
        case 0x204464u: goto label_204464;
        case 0x204468u: goto label_204468;
        case 0x20446cu: goto label_20446c;
        case 0x204470u: goto label_204470;
        case 0x204474u: goto label_204474;
        case 0x204478u: goto label_204478;
        case 0x20447cu: goto label_20447c;
        case 0x204480u: goto label_204480;
        case 0x204484u: goto label_204484;
        case 0x204488u: goto label_204488;
        case 0x20448cu: goto label_20448c;
        case 0x204490u: goto label_204490;
        case 0x204494u: goto label_204494;
        case 0x204498u: goto label_204498;
        case 0x20449cu: goto label_20449c;
        case 0x2044a0u: goto label_2044a0;
        case 0x2044a4u: goto label_2044a4;
        case 0x2044a8u: goto label_2044a8;
        case 0x2044acu: goto label_2044ac;
        case 0x2044b0u: goto label_2044b0;
        case 0x2044b4u: goto label_2044b4;
        case 0x2044b8u: goto label_2044b8;
        case 0x2044bcu: goto label_2044bc;
        case 0x2044c0u: goto label_2044c0;
        case 0x2044c4u: goto label_2044c4;
        case 0x2044c8u: goto label_2044c8;
        case 0x2044ccu: goto label_2044cc;
        case 0x2044d0u: goto label_2044d0;
        case 0x2044d4u: goto label_2044d4;
        case 0x2044d8u: goto label_2044d8;
        case 0x2044dcu: goto label_2044dc;
        case 0x2044e0u: goto label_2044e0;
        case 0x2044e4u: goto label_2044e4;
        case 0x2044e8u: goto label_2044e8;
        case 0x2044ecu: goto label_2044ec;
        case 0x2044f0u: goto label_2044f0;
        case 0x2044f4u: goto label_2044f4;
        case 0x2044f8u: goto label_2044f8;
        case 0x2044fcu: goto label_2044fc;
        case 0x204500u: goto label_204500;
        case 0x204504u: goto label_204504;
        case 0x204508u: goto label_204508;
        case 0x20450cu: goto label_20450c;
        case 0x204510u: goto label_204510;
        case 0x204514u: goto label_204514;
        case 0x204518u: goto label_204518;
        case 0x20451cu: goto label_20451c;
        case 0x204520u: goto label_204520;
        case 0x204524u: goto label_204524;
        case 0x204528u: goto label_204528;
        case 0x20452cu: goto label_20452c;
        case 0x204530u: goto label_204530;
        case 0x204534u: goto label_204534;
        case 0x204538u: goto label_204538;
        case 0x20453cu: goto label_20453c;
        case 0x204540u: goto label_204540;
        case 0x204544u: goto label_204544;
        case 0x204548u: goto label_204548;
        case 0x20454cu: goto label_20454c;
        case 0x204550u: goto label_204550;
        case 0x204554u: goto label_204554;
        case 0x204558u: goto label_204558;
        case 0x20455cu: goto label_20455c;
        case 0x204560u: goto label_204560;
        case 0x204564u: goto label_204564;
        case 0x204568u: goto label_204568;
        case 0x20456cu: goto label_20456c;
        case 0x204570u: goto label_204570;
        case 0x204574u: goto label_204574;
        case 0x204578u: goto label_204578;
        case 0x20457cu: goto label_20457c;
        case 0x204580u: goto label_204580;
        case 0x204584u: goto label_204584;
        case 0x204588u: goto label_204588;
        case 0x20458cu: goto label_20458c;
        case 0x204590u: goto label_204590;
        case 0x204594u: goto label_204594;
        case 0x204598u: goto label_204598;
        case 0x20459cu: goto label_20459c;
        case 0x2045a0u: goto label_2045a0;
        case 0x2045a4u: goto label_2045a4;
        case 0x2045a8u: goto label_2045a8;
        case 0x2045acu: goto label_2045ac;
        case 0x2045b0u: goto label_2045b0;
        case 0x2045b4u: goto label_2045b4;
        case 0x2045b8u: goto label_2045b8;
        case 0x2045bcu: goto label_2045bc;
        case 0x2045c0u: goto label_2045c0;
        case 0x2045c4u: goto label_2045c4;
        case 0x2045c8u: goto label_2045c8;
        case 0x2045ccu: goto label_2045cc;
        case 0x2045d0u: goto label_2045d0;
        case 0x2045d4u: goto label_2045d4;
        case 0x2045d8u: goto label_2045d8;
        case 0x2045dcu: goto label_2045dc;
        case 0x2045e0u: goto label_2045e0;
        case 0x2045e4u: goto label_2045e4;
        case 0x2045e8u: goto label_2045e8;
        case 0x2045ecu: goto label_2045ec;
        case 0x2045f0u: goto label_2045f0;
        case 0x2045f4u: goto label_2045f4;
        case 0x2045f8u: goto label_2045f8;
        case 0x2045fcu: goto label_2045fc;
        case 0x204600u: goto label_204600;
        case 0x204604u: goto label_204604;
        case 0x204608u: goto label_204608;
        case 0x20460cu: goto label_20460c;
        case 0x204610u: goto label_204610;
        case 0x204614u: goto label_204614;
        case 0x204618u: goto label_204618;
        case 0x20461cu: goto label_20461c;
        case 0x204620u: goto label_204620;
        case 0x204624u: goto label_204624;
        case 0x204628u: goto label_204628;
        case 0x20462cu: goto label_20462c;
        case 0x204630u: goto label_204630;
        case 0x204634u: goto label_204634;
        case 0x204638u: goto label_204638;
        case 0x20463cu: goto label_20463c;
        case 0x204640u: goto label_204640;
        case 0x204644u: goto label_204644;
        case 0x204648u: goto label_204648;
        case 0x20464cu: goto label_20464c;
        case 0x204650u: goto label_204650;
        case 0x204654u: goto label_204654;
        case 0x204658u: goto label_204658;
        case 0x20465cu: goto label_20465c;
        case 0x204660u: goto label_204660;
        case 0x204664u: goto label_204664;
        case 0x204668u: goto label_204668;
        case 0x20466cu: goto label_20466c;
        case 0x204670u: goto label_204670;
        case 0x204674u: goto label_204674;
        case 0x204678u: goto label_204678;
        case 0x20467cu: goto label_20467c;
        case 0x204680u: goto label_204680;
        case 0x204684u: goto label_204684;
        case 0x204688u: goto label_204688;
        case 0x20468cu: goto label_20468c;
        case 0x204690u: goto label_204690;
        case 0x204694u: goto label_204694;
        case 0x204698u: goto label_204698;
        case 0x20469cu: goto label_20469c;
        case 0x2046a0u: goto label_2046a0;
        case 0x2046a4u: goto label_2046a4;
        case 0x2046a8u: goto label_2046a8;
        case 0x2046acu: goto label_2046ac;
        case 0x2046b0u: goto label_2046b0;
        case 0x2046b4u: goto label_2046b4;
        case 0x2046b8u: goto label_2046b8;
        case 0x2046bcu: goto label_2046bc;
        case 0x2046c0u: goto label_2046c0;
        case 0x2046c4u: goto label_2046c4;
        case 0x2046c8u: goto label_2046c8;
        case 0x2046ccu: goto label_2046cc;
        case 0x2046d0u: goto label_2046d0;
        case 0x2046d4u: goto label_2046d4;
        case 0x2046d8u: goto label_2046d8;
        case 0x2046dcu: goto label_2046dc;
        case 0x2046e0u: goto label_2046e0;
        case 0x2046e4u: goto label_2046e4;
        case 0x2046e8u: goto label_2046e8;
        case 0x2046ecu: goto label_2046ec;
        case 0x2046f0u: goto label_2046f0;
        case 0x2046f4u: goto label_2046f4;
        case 0x2046f8u: goto label_2046f8;
        case 0x2046fcu: goto label_2046fc;
        case 0x204700u: goto label_204700;
        case 0x204704u: goto label_204704;
        case 0x204708u: goto label_204708;
        case 0x20470cu: goto label_20470c;
        case 0x204710u: goto label_204710;
        case 0x204714u: goto label_204714;
        case 0x204718u: goto label_204718;
        case 0x20471cu: goto label_20471c;
        case 0x204720u: goto label_204720;
        case 0x204724u: goto label_204724;
        case 0x204728u: goto label_204728;
        case 0x20472cu: goto label_20472c;
        case 0x204730u: goto label_204730;
        case 0x204734u: goto label_204734;
        case 0x204738u: goto label_204738;
        case 0x20473cu: goto label_20473c;
        case 0x204740u: goto label_204740;
        case 0x204744u: goto label_204744;
        case 0x204748u: goto label_204748;
        case 0x20474cu: goto label_20474c;
        case 0x204750u: goto label_204750;
        case 0x204754u: goto label_204754;
        case 0x204758u: goto label_204758;
        case 0x20475cu: goto label_20475c;
        case 0x204760u: goto label_204760;
        case 0x204764u: goto label_204764;
        case 0x204768u: goto label_204768;
        case 0x20476cu: goto label_20476c;
        case 0x204770u: goto label_204770;
        case 0x204774u: goto label_204774;
        case 0x204778u: goto label_204778;
        case 0x20477cu: goto label_20477c;
        case 0x204780u: goto label_204780;
        case 0x204784u: goto label_204784;
        case 0x204788u: goto label_204788;
        case 0x20478cu: goto label_20478c;
        case 0x204790u: goto label_204790;
        case 0x204794u: goto label_204794;
        case 0x204798u: goto label_204798;
        case 0x20479cu: goto label_20479c;
        case 0x2047a0u: goto label_2047a0;
        case 0x2047a4u: goto label_2047a4;
        case 0x2047a8u: goto label_2047a8;
        case 0x2047acu: goto label_2047ac;
        case 0x2047b0u: goto label_2047b0;
        case 0x2047b4u: goto label_2047b4;
        case 0x2047b8u: goto label_2047b8;
        case 0x2047bcu: goto label_2047bc;
        case 0x2047c0u: goto label_2047c0;
        case 0x2047c4u: goto label_2047c4;
        case 0x2047c8u: goto label_2047c8;
        case 0x2047ccu: goto label_2047cc;
        case 0x2047d0u: goto label_2047d0;
        case 0x2047d4u: goto label_2047d4;
        case 0x2047d8u: goto label_2047d8;
        case 0x2047dcu: goto label_2047dc;
        case 0x2047e0u: goto label_2047e0;
        case 0x2047e4u: goto label_2047e4;
        case 0x2047e8u: goto label_2047e8;
        case 0x2047ecu: goto label_2047ec;
        case 0x2047f0u: goto label_2047f0;
        case 0x2047f4u: goto label_2047f4;
        case 0x2047f8u: goto label_2047f8;
        case 0x2047fcu: goto label_2047fc;
        case 0x204800u: goto label_204800;
        case 0x204804u: goto label_204804;
        case 0x204808u: goto label_204808;
        case 0x20480cu: goto label_20480c;
        case 0x204810u: goto label_204810;
        case 0x204814u: goto label_204814;
        case 0x204818u: goto label_204818;
        case 0x20481cu: goto label_20481c;
        case 0x204820u: goto label_204820;
        case 0x204824u: goto label_204824;
        case 0x204828u: goto label_204828;
        case 0x20482cu: goto label_20482c;
        case 0x204830u: goto label_204830;
        case 0x204834u: goto label_204834;
        case 0x204838u: goto label_204838;
        case 0x20483cu: goto label_20483c;
        case 0x204840u: goto label_204840;
        case 0x204844u: goto label_204844;
        case 0x204848u: goto label_204848;
        case 0x20484cu: goto label_20484c;
        case 0x204850u: goto label_204850;
        case 0x204854u: goto label_204854;
        case 0x204858u: goto label_204858;
        case 0x20485cu: goto label_20485c;
        case 0x204860u: goto label_204860;
        case 0x204864u: goto label_204864;
        case 0x204868u: goto label_204868;
        case 0x20486cu: goto label_20486c;
        case 0x204870u: goto label_204870;
        case 0x204874u: goto label_204874;
        case 0x204878u: goto label_204878;
        case 0x20487cu: goto label_20487c;
        case 0x204880u: goto label_204880;
        case 0x204884u: goto label_204884;
        case 0x204888u: goto label_204888;
        case 0x20488cu: goto label_20488c;
        case 0x204890u: goto label_204890;
        case 0x204894u: goto label_204894;
        case 0x204898u: goto label_204898;
        case 0x20489cu: goto label_20489c;
        case 0x2048a0u: goto label_2048a0;
        case 0x2048a4u: goto label_2048a4;
        case 0x2048a8u: goto label_2048a8;
        case 0x2048acu: goto label_2048ac;
        case 0x2048b0u: goto label_2048b0;
        case 0x2048b4u: goto label_2048b4;
        case 0x2048b8u: goto label_2048b8;
        case 0x2048bcu: goto label_2048bc;
        case 0x2048c0u: goto label_2048c0;
        case 0x2048c4u: goto label_2048c4;
        case 0x2048c8u: goto label_2048c8;
        case 0x2048ccu: goto label_2048cc;
        case 0x2048d0u: goto label_2048d0;
        case 0x2048d4u: goto label_2048d4;
        case 0x2048d8u: goto label_2048d8;
        case 0x2048dcu: goto label_2048dc;
        case 0x2048e0u: goto label_2048e0;
        case 0x2048e4u: goto label_2048e4;
        case 0x2048e8u: goto label_2048e8;
        case 0x2048ecu: goto label_2048ec;
        case 0x2048f0u: goto label_2048f0;
        case 0x2048f4u: goto label_2048f4;
        case 0x2048f8u: goto label_2048f8;
        case 0x2048fcu: goto label_2048fc;
        case 0x204900u: goto label_204900;
        case 0x204904u: goto label_204904;
        case 0x204908u: goto label_204908;
        case 0x20490cu: goto label_20490c;
        case 0x204910u: goto label_204910;
        case 0x204914u: goto label_204914;
        case 0x204918u: goto label_204918;
        case 0x20491cu: goto label_20491c;
        case 0x204920u: goto label_204920;
        case 0x204924u: goto label_204924;
        case 0x204928u: goto label_204928;
        case 0x20492cu: goto label_20492c;
        case 0x204930u: goto label_204930;
        case 0x204934u: goto label_204934;
        case 0x204938u: goto label_204938;
        case 0x20493cu: goto label_20493c;
        case 0x204940u: goto label_204940;
        case 0x204944u: goto label_204944;
        case 0x204948u: goto label_204948;
        case 0x20494cu: goto label_20494c;
        case 0x204950u: goto label_204950;
        case 0x204954u: goto label_204954;
        case 0x204958u: goto label_204958;
        case 0x20495cu: goto label_20495c;
        case 0x204960u: goto label_204960;
        case 0x204964u: goto label_204964;
        case 0x204968u: goto label_204968;
        case 0x20496cu: goto label_20496c;
        case 0x204970u: goto label_204970;
        case 0x204974u: goto label_204974;
        case 0x204978u: goto label_204978;
        case 0x20497cu: goto label_20497c;
        case 0x204980u: goto label_204980;
        case 0x204984u: goto label_204984;
        case 0x204988u: goto label_204988;
        case 0x20498cu: goto label_20498c;
        case 0x204990u: goto label_204990;
        case 0x204994u: goto label_204994;
        case 0x204998u: goto label_204998;
        case 0x20499cu: goto label_20499c;
        case 0x2049a0u: goto label_2049a0;
        case 0x2049a4u: goto label_2049a4;
        case 0x2049a8u: goto label_2049a8;
        case 0x2049acu: goto label_2049ac;
        case 0x2049b0u: goto label_2049b0;
        case 0x2049b4u: goto label_2049b4;
        case 0x2049b8u: goto label_2049b8;
        case 0x2049bcu: goto label_2049bc;
        case 0x2049c0u: goto label_2049c0;
        case 0x2049c4u: goto label_2049c4;
        case 0x2049c8u: goto label_2049c8;
        case 0x2049ccu: goto label_2049cc;
        case 0x2049d0u: goto label_2049d0;
        case 0x2049d4u: goto label_2049d4;
        case 0x2049d8u: goto label_2049d8;
        case 0x2049dcu: goto label_2049dc;
        case 0x2049e0u: goto label_2049e0;
        case 0x2049e4u: goto label_2049e4;
        case 0x2049e8u: goto label_2049e8;
        case 0x2049ecu: goto label_2049ec;
        case 0x2049f0u: goto label_2049f0;
        case 0x2049f4u: goto label_2049f4;
        case 0x2049f8u: goto label_2049f8;
        case 0x2049fcu: goto label_2049fc;
        case 0x204a00u: goto label_204a00;
        case 0x204a04u: goto label_204a04;
        case 0x204a08u: goto label_204a08;
        case 0x204a0cu: goto label_204a0c;
        case 0x204a10u: goto label_204a10;
        case 0x204a14u: goto label_204a14;
        case 0x204a18u: goto label_204a18;
        case 0x204a1cu: goto label_204a1c;
        case 0x204a20u: goto label_204a20;
        case 0x204a24u: goto label_204a24;
        case 0x204a28u: goto label_204a28;
        case 0x204a2cu: goto label_204a2c;
        case 0x204a30u: goto label_204a30;
        case 0x204a34u: goto label_204a34;
        case 0x204a38u: goto label_204a38;
        case 0x204a3cu: goto label_204a3c;
        case 0x204a40u: goto label_204a40;
        case 0x204a44u: goto label_204a44;
        case 0x204a48u: goto label_204a48;
        case 0x204a4cu: goto label_204a4c;
        case 0x204a50u: goto label_204a50;
        case 0x204a54u: goto label_204a54;
        case 0x204a58u: goto label_204a58;
        case 0x204a5cu: goto label_204a5c;
        case 0x204a60u: goto label_204a60;
        case 0x204a64u: goto label_204a64;
        case 0x204a68u: goto label_204a68;
        case 0x204a6cu: goto label_204a6c;
        case 0x204a70u: goto label_204a70;
        case 0x204a74u: goto label_204a74;
        case 0x204a78u: goto label_204a78;
        case 0x204a7cu: goto label_204a7c;
        case 0x204a80u: goto label_204a80;
        case 0x204a84u: goto label_204a84;
        case 0x204a88u: goto label_204a88;
        case 0x204a8cu: goto label_204a8c;
        case 0x204a90u: goto label_204a90;
        case 0x204a94u: goto label_204a94;
        case 0x204a98u: goto label_204a98;
        case 0x204a9cu: goto label_204a9c;
        case 0x204aa0u: goto label_204aa0;
        case 0x204aa4u: goto label_204aa4;
        case 0x204aa8u: goto label_204aa8;
        case 0x204aacu: goto label_204aac;
        case 0x204ab0u: goto label_204ab0;
        case 0x204ab4u: goto label_204ab4;
        case 0x204ab8u: goto label_204ab8;
        case 0x204abcu: goto label_204abc;
        case 0x204ac0u: goto label_204ac0;
        case 0x204ac4u: goto label_204ac4;
        case 0x204ac8u: goto label_204ac8;
        case 0x204accu: goto label_204acc;
        case 0x204ad0u: goto label_204ad0;
        case 0x204ad4u: goto label_204ad4;
        case 0x204ad8u: goto label_204ad8;
        case 0x204adcu: goto label_204adc;
        case 0x204ae0u: goto label_204ae0;
        case 0x204ae4u: goto label_204ae4;
        case 0x204ae8u: goto label_204ae8;
        case 0x204aecu: goto label_204aec;
        case 0x204af0u: goto label_204af0;
        case 0x204af4u: goto label_204af4;
        case 0x204af8u: goto label_204af8;
        case 0x204afcu: goto label_204afc;
        case 0x204b00u: goto label_204b00;
        case 0x204b04u: goto label_204b04;
        case 0x204b08u: goto label_204b08;
        case 0x204b0cu: goto label_204b0c;
        case 0x204b10u: goto label_204b10;
        case 0x204b14u: goto label_204b14;
        case 0x204b18u: goto label_204b18;
        case 0x204b1cu: goto label_204b1c;
        case 0x204b20u: goto label_204b20;
        case 0x204b24u: goto label_204b24;
        case 0x204b28u: goto label_204b28;
        case 0x204b2cu: goto label_204b2c;
        case 0x204b30u: goto label_204b30;
        case 0x204b34u: goto label_204b34;
        case 0x204b38u: goto label_204b38;
        case 0x204b3cu: goto label_204b3c;
        case 0x204b40u: goto label_204b40;
        case 0x204b44u: goto label_204b44;
        case 0x204b48u: goto label_204b48;
        case 0x204b4cu: goto label_204b4c;
        case 0x204b50u: goto label_204b50;
        case 0x204b54u: goto label_204b54;
        case 0x204b58u: goto label_204b58;
        case 0x204b5cu: goto label_204b5c;
        case 0x204b60u: goto label_204b60;
        case 0x204b64u: goto label_204b64;
        case 0x204b68u: goto label_204b68;
        case 0x204b6cu: goto label_204b6c;
        case 0x204b70u: goto label_204b70;
        case 0x204b74u: goto label_204b74;
        case 0x204b78u: goto label_204b78;
        case 0x204b7cu: goto label_204b7c;
        case 0x204b80u: goto label_204b80;
        case 0x204b84u: goto label_204b84;
        case 0x204b88u: goto label_204b88;
        case 0x204b8cu: goto label_204b8c;
        case 0x204b90u: goto label_204b90;
        case 0x204b94u: goto label_204b94;
        case 0x204b98u: goto label_204b98;
        case 0x204b9cu: goto label_204b9c;
        case 0x204ba0u: goto label_204ba0;
        case 0x204ba4u: goto label_204ba4;
        case 0x204ba8u: goto label_204ba8;
        case 0x204bacu: goto label_204bac;
        case 0x204bb0u: goto label_204bb0;
        case 0x204bb4u: goto label_204bb4;
        case 0x204bb8u: goto label_204bb8;
        case 0x204bbcu: goto label_204bbc;
        case 0x204bc0u: goto label_204bc0;
        case 0x204bc4u: goto label_204bc4;
        case 0x204bc8u: goto label_204bc8;
        case 0x204bccu: goto label_204bcc;
        case 0x204bd0u: goto label_204bd0;
        case 0x204bd4u: goto label_204bd4;
        case 0x204bd8u: goto label_204bd8;
        case 0x204bdcu: goto label_204bdc;
        case 0x204be0u: goto label_204be0;
        case 0x204be4u: goto label_204be4;
        case 0x204be8u: goto label_204be8;
        case 0x204becu: goto label_204bec;
        case 0x204bf0u: goto label_204bf0;
        case 0x204bf4u: goto label_204bf4;
        case 0x204bf8u: goto label_204bf8;
        case 0x204bfcu: goto label_204bfc;
        case 0x204c00u: goto label_204c00;
        case 0x204c04u: goto label_204c04;
        case 0x204c08u: goto label_204c08;
        case 0x204c0cu: goto label_204c0c;
        case 0x204c10u: goto label_204c10;
        case 0x204c14u: goto label_204c14;
        case 0x204c18u: goto label_204c18;
        case 0x204c1cu: goto label_204c1c;
        case 0x204c20u: goto label_204c20;
        case 0x204c24u: goto label_204c24;
        case 0x204c28u: goto label_204c28;
        case 0x204c2cu: goto label_204c2c;
        case 0x204c30u: goto label_204c30;
        case 0x204c34u: goto label_204c34;
        case 0x204c38u: goto label_204c38;
        case 0x204c3cu: goto label_204c3c;
        case 0x204c40u: goto label_204c40;
        case 0x204c44u: goto label_204c44;
        case 0x204c48u: goto label_204c48;
        case 0x204c4cu: goto label_204c4c;
        case 0x204c50u: goto label_204c50;
        case 0x204c54u: goto label_204c54;
        case 0x204c58u: goto label_204c58;
        case 0x204c5cu: goto label_204c5c;
        default: break;
    }

    ctx->pc = 0x203d40u;

label_203d40:
    // 0x203d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_203d44:
    // 0x203d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203d48:
    // 0x203d48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x203d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_203d4c:
    // 0x203d4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x203d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203d50:
    // 0x203d50: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x203d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_203d54:
    // 0x203d54: 0xc064924  jal         func_192490
label_203d58:
    if (ctx->pc == 0x203D58u) {
        ctx->pc = 0x203D5Cu;
        goto label_203d5c;
    }
    ctx->pc = 0x203D54u;
    SET_GPR_U32(ctx, 31, 0x203D5Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x203D54u, 0x203D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D5Cu;
label_203d5c:
    // 0x203d5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x203d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_203d60:
    // 0x203d60: 0x24635000  addiu       $v1, $v1, 0x5000
    ctx->pc = 0x203d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20480));
label_203d64:
    // 0x203d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203d68:
    // 0x203d68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_203d6c:
    // 0x203d6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203d70:
    // 0x203d70: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_203d74:
    // 0x203d74: 0xc056254  jal         func_158950
label_203d78:
    if (ctx->pc == 0x203D78u) {
        ctx->pc = 0x203D7Cu;
        goto label_203d7c;
    }
    ctx->pc = 0x203D74u;
    SET_GPR_U32(ctx, 31, 0x203D7Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x203D74u, 0x203D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203D7Cu;
label_203d7c:
    // 0x203d7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203d80:
    // 0x203d80: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x203d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
label_203d84:
    // 0x203d84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203d88:
    // 0x203d88: 0xa04000a4  sb          $zero, 0xA4($v0)
    ctx->pc = 0x203d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 164), (uint8_t)GPR_U32(ctx, 0));
label_203d8c:
    // 0x203d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203d90:
    // 0x203d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203d94:
    // 0x203d94: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x203d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_203d98:
    // 0x203d98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203d9c:
    // 0x203d9c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x203d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_203da0:
    // 0x203da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203da4:
    // 0x203da4: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x203da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_203da8:
    // 0x203da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203dac:
    // 0x203dac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203db0:
    // 0x203db0: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x203db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_203db4:
    // 0x203db4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x203db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203db8:
    // 0x203db8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203dbc:
    // 0x203dbc: 0xac4300b4  sw          $v1, 0xB4($v0)
    ctx->pc = 0x203dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 3));
label_203dc0:
    // 0x203dc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203dc4:
    // 0x203dc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203dc8:
    // 0x203dc8: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x203dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_203dcc:
    // 0x203dcc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x203dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_203dd0:
    // 0x203dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203dd4:
    // 0x203dd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203dd8:
    // 0x203dd8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x203dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_203ddc:
    // 0x203ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x203ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203de0:
    // 0x203de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203de4:
    // 0x203de4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x203de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_203de8:
    // 0x203de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203dec:
    // 0x203dec: 0xa04000e0  sb          $zero, 0xE0($v0)
    ctx->pc = 0x203decu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 224), (uint8_t)GPR_U32(ctx, 0));
label_203df0:
    // 0x203df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203df4:
    // 0x203df4: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x203df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
label_203df8:
    // 0x203df8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203dfc:
    // 0x203dfc: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x203dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
label_203e00:
    // 0x203e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203e04:
    // 0x203e04: 0xa04000f4  sb          $zero, 0xF4($v0)
    ctx->pc = 0x203e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 244), (uint8_t)GPR_U32(ctx, 0));
label_203e08:
    // 0x203e08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203e0c:
    // 0x203e0c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x203e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_203e10:
    // 0x203e10: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_203e14:
    // 0x203e14: 0x24a590a0  addiu       $a1, $a1, -0x6F60
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938784));
label_203e18:
    // 0x203e18: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x203e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_203e1c:
    // 0x203e1c: 0xc08e514  jal         func_239450
label_203e20:
    if (ctx->pc == 0x203E20u) {
        ctx->pc = 0x203E24u;
        goto label_203e24;
    }
    ctx->pc = 0x203E1Cu;
    SET_GPR_U32(ctx, 31, 0x203E24u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x203E1Cu, 0x203E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E24u;
label_203e24:
    // 0x203e24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x203e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_203e28:
    // 0x203e28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203e2c:
    // 0x203e2c: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x203e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
label_203e30:
    // 0x203e30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203e34:
    // 0x203e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203e38:
    // 0x203e38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_203e3c:
    // 0x203e3c: 0x3e00008  jr          $ra
label_203e40:
    if (ctx->pc == 0x203E40u) {
        ctx->pc = 0x203E44u;
        goto label_203e44;
    }
    ctx->pc = 0x203E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203E44u;
label_203e44:
    // 0x203e44: 0x0  nop
    ctx->pc = 0x203e44u;
    // NOP
label_203e48:
    // 0x203e48: 0x0  nop
    ctx->pc = 0x203e48u;
    // NOP
label_203e4c:
    // 0x203e4c: 0x0  nop
    ctx->pc = 0x203e4cu;
    // NOP
label_203e50:
    // 0x203e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_203e54:
    // 0x203e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_203e58:
    // 0x203e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x203e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_203e5c:
    // 0x203e5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x203e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_203e60:
    // 0x203e60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203e64:
    // 0x203e64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_203e68:
    if (ctx->pc == 0x203E68u) {
        ctx->pc = 0x203E6Cu;
        goto label_203e6c;
    }
    ctx->pc = 0x203E64u;
    {
        const bool branch_taken_0x203e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203e64) {
            ctx->pc = 0x203EC0u;
            goto label_203ec0;
        }
    }
    ctx->pc = 0x203E6Cu;
label_203e6c:
    // 0x203e6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x203e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_203e70:
    // 0x203e70: 0x24635000  addiu       $v1, $v1, 0x5000
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20480));
label_203e74:
    // 0x203e74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203e78:
    // 0x203e78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x203e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_203e7c:
    // 0x203e7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203e80:
    // 0x203e80: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x203e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_203e84:
    // 0x203e84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x203e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203e88:
    // 0x203e88: 0xc056094  jal         func_158250
label_203e8c:
    if (ctx->pc == 0x203E8Cu) {
        ctx->pc = 0x203E90u;
        goto label_203e90;
    }
    ctx->pc = 0x203E88u;
    SET_GPR_U32(ctx, 31, 0x203E90u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x203E88u, 0x203E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E90u;
label_203e90:
    // 0x203e90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x203e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203e94:
    // 0x203e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203e98:
    // 0x203e98: 0xc064970  jal         func_1925C0
label_203e9c:
    if (ctx->pc == 0x203E9Cu) {
        ctx->pc = 0x203EA0u;
        goto label_203ea0;
    }
    ctx->pc = 0x203E98u;
    SET_GPR_U32(ctx, 31, 0x203EA0u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x203E98u, 0x203EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203EA0u;
label_203ea0:
    // 0x203ea0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x203ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_203ea4:
    // 0x203ea4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x203ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_203ea8:
    // 0x203ea8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x203ea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_203eac:
    // 0x203eac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_203eb0:
    if (ctx->pc == 0x203EB0u) {
        ctx->pc = 0x203EB4u;
        goto label_203eb4;
    }
    ctx->pc = 0x203EACu;
    {
        const bool branch_taken_0x203eac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x203eac) {
            ctx->pc = 0x203EC0u;
            goto label_203ec0;
        }
    }
    ctx->pc = 0x203EB4u;
label_203eb4:
    // 0x203eb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x203eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203eb8:
    // 0x203eb8: 0xc0ba070  jal         func_2E81C0
label_203ebc:
    if (ctx->pc == 0x203EBCu) {
        ctx->pc = 0x203EC0u;
        goto label_203ec0;
    }
    ctx->pc = 0x203EB8u;
    SET_GPR_U32(ctx, 31, 0x203EC0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x203EB8u, 0x203EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203EC0u;
label_203ec0:
    // 0x203ec0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x203ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_203ec4:
    // 0x203ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203ec8:
    // 0x203ec8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x203ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_203ecc:
    // 0x203ecc: 0x3e00008  jr          $ra
label_203ed0:
    if (ctx->pc == 0x203ED0u) {
        ctx->pc = 0x203ED4u;
        goto label_203ed4;
    }
    ctx->pc = 0x203ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203ED4u;
label_203ed4:
    // 0x203ed4: 0x0  nop
    ctx->pc = 0x203ed4u;
    // NOP
label_203ed8:
    // 0x203ed8: 0x0  nop
    ctx->pc = 0x203ed8u;
    // NOP
label_203edc:
    // 0x203edc: 0x0  nop
    ctx->pc = 0x203edcu;
    // NOP
label_203ee0:
    // 0x203ee0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x203ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_203ee4:
    // 0x203ee4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x203ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_203ee8:
    // 0x203ee8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x203ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_203eec:
    // 0x203eec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x203eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_203ef0:
    // 0x203ef0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x203ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_203ef4:
    // 0x203ef4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x203ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_203ef8:
    // 0x203ef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x203ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_203efc:
    // 0x203efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x203efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_203f00:
    // 0x203f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x203f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_203f04:
    // 0x203f04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203f08:
    // 0x203f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203f0c:
    // 0x203f0c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x203f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_203f10:
    // 0x203f10: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x203f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_203f14:
    // 0x203f14: 0xc064a74  jal         func_1929D0
label_203f18:
    if (ctx->pc == 0x203F18u) {
        ctx->pc = 0x203F1Cu;
        goto label_203f1c;
    }
    ctx->pc = 0x203F14u;
    SET_GPR_U32(ctx, 31, 0x203F1Cu);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x203F14u, 0x203F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F1Cu;
label_203f1c:
    // 0x203f1c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x203f1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f20:
    // 0x203f20: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x203f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_203f24:
    // 0x203f24: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x203f24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f28:
    // 0x203f28: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x203f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_203f2c:
    // 0x203f2c: 0xc119b68  jal         func_466DA0
label_203f30:
    if (ctx->pc == 0x203F30u) {
        ctx->pc = 0x203F34u;
        goto label_203f34;
    }
    ctx->pc = 0x203F2Cu;
    SET_GPR_U32(ctx, 31, 0x203F34u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x203F2Cu, 0x203F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F34u;
label_203f34:
    // 0x203f34: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x203f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_203f38:
    // 0x203f38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f3c:
    // 0x203f3c: 0xc0400e0  jal         func_100380
label_203f40:
    if (ctx->pc == 0x203F40u) {
        ctx->pc = 0x203F44u;
        goto label_203f44;
    }
    ctx->pc = 0x203F3Cu;
    SET_GPR_U32(ctx, 31, 0x203F44u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x203F3Cu, 0x203F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F44u;
label_203f44:
    // 0x203f44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f48:
    // 0x203f48: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_203f4c:
    if (ctx->pc == 0x203F4Cu) {
        ctx->pc = 0x203F50u;
        goto label_203f50;
    }
    ctx->pc = 0x203F48u;
    {
        const bool branch_taken_0x203f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f48) {
            ctx->pc = 0x203F60u;
            goto label_203f60;
        }
    }
    ctx->pc = 0x203F50u;
label_203f50:
    // 0x203f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203f54:
    // 0x203f54: 0xc0849e0  jal         func_212780
label_203f58:
    if (ctx->pc == 0x203F58u) {
        ctx->pc = 0x203F5Cu;
        goto label_203f5c;
    }
    ctx->pc = 0x203F54u;
    SET_GPR_U32(ctx, 31, 0x203F5Cu);
    ctx->pc = 0x212780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212780u, 0x203F54u, 0x203F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F5Cu;
label_203f5c:
    // 0x203f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f60:
    // 0x203f60: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x203f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_203f64:
    // 0x203f64: 0xac7000d8  sw          $s0, 0xD8($v1)
    ctx->pc = 0x203f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 16));
label_203f68:
    // 0x203f68: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x203f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_203f6c:
    // 0x203f6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x203f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_203f70:
    // 0x203f70: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_203f74:
    // 0x203f74: 0xc085538  jal         func_2154E0
label_203f78:
    if (ctx->pc == 0x203F78u) {
        ctx->pc = 0x203F7Cu;
        goto label_203f7c;
    }
    ctx->pc = 0x203F74u;
    SET_GPR_U32(ctx, 31, 0x203F7Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x203F74u, 0x203F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F7Cu;
label_203f7c:
    // 0x203f7c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x203f7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f80:
    // 0x203f80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x203f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_203f84:
    // 0x203f84: 0xc063dd0  jal         func_18F740
label_203f88:
    if (ctx->pc == 0x203F88u) {
        ctx->pc = 0x203F8Cu;
        goto label_203f8c;
    }
    ctx->pc = 0x203F84u;
    SET_GPR_U32(ctx, 31, 0x203F8Cu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x203F84u, 0x203F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F8Cu;
label_203f8c:
    // 0x203f8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f90:
    // 0x203f90: 0xc0aeea8  jal         func_2BBAA0
label_203f94:
    if (ctx->pc == 0x203F94u) {
        ctx->pc = 0x203F98u;
        goto label_203f98;
    }
    ctx->pc = 0x203F90u;
    SET_GPR_U32(ctx, 31, 0x203F98u);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x203F90u, 0x203F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F98u;
label_203f98:
    // 0x203f98: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x203f98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f9c:
    // 0x203f9c: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x203f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_203fa0:
    // 0x203fa0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x203fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_203fa4:
    // 0x203fa4: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x203fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
label_203fa8:
    // 0x203fa8: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x203fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_203fac:
    // 0x203fac: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x203facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203fb0:
    // 0x203fb0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x203fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_203fb4:
    // 0x203fb4: 0xc085538  jal         func_2154E0
label_203fb8:
    if (ctx->pc == 0x203FB8u) {
        ctx->pc = 0x203FBCu;
        goto label_203fbc;
    }
    ctx->pc = 0x203FB4u;
    SET_GPR_U32(ctx, 31, 0x203FBCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x203FB4u, 0x203FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FBCu;
label_203fbc:
    // 0x203fbc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x203fbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203fc0:
    // 0x203fc0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x203fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_203fc4:
    // 0x203fc4: 0xc081d2c  jal         func_2074B0
label_203fc8:
    if (ctx->pc == 0x203FC8u) {
        ctx->pc = 0x203FCCu;
        goto label_203fcc;
    }
    ctx->pc = 0x203FC4u;
    SET_GPR_U32(ctx, 31, 0x203FCCu);
    ctx->pc = 0x2074B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074B0u, 0x203FC4u, 0x203FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FCCu;
label_203fcc:
    // 0x203fcc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x203fccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203fd0:
    // 0x203fd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203fd4:
    // 0x203fd4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x203fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_203fd8:
    // 0x203fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203fdc:
    // 0x203fdc: 0xc085538  jal         func_2154E0
label_203fe0:
    if (ctx->pc == 0x203FE0u) {
        ctx->pc = 0x203FE4u;
        goto label_203fe4;
    }
    ctx->pc = 0x203FDCu;
    SET_GPR_U32(ctx, 31, 0x203FE4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x203FDCu, 0x203FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FE4u;
label_203fe4:
    // 0x203fe4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x203fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203fe8:
    // 0x203fe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x203fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_203fec:
    // 0x203fec: 0xc0a88a8  jal         func_2A22A0
label_203ff0:
    if (ctx->pc == 0x203FF0u) {
        ctx->pc = 0x203FF4u;
        goto label_203ff4;
    }
    ctx->pc = 0x203FECu;
    SET_GPR_U32(ctx, 31, 0x203FF4u);
    ctx->pc = 0x2A22A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A22A0u, 0x203FECu, 0x203FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FF4u;
label_203ff4:
    // 0x203ff4: 0x27be00d0  addiu       $fp, $sp, 0xD0
    ctx->pc = 0x203ff4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_203ff8:
    // 0x203ff8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x203ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_203ffc:
    // 0x203ffc: 0xc084e2c  jal         func_2138B0
label_204000:
    if (ctx->pc == 0x204000u) {
        ctx->pc = 0x204004u;
        goto label_204004;
    }
    ctx->pc = 0x203FFCu;
    SET_GPR_U32(ctx, 31, 0x204004u);
    ctx->pc = 0x2138B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2138B0u, 0x203FFCu, 0x204004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204004u;
label_204004:
    // 0x204004: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x204004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204008:
    // 0x204008: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x204008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_20400c:
    // 0x20400c: 0xc0818e4  jal         func_206390
label_204010:
    if (ctx->pc == 0x204010u) {
        ctx->pc = 0x204014u;
        goto label_204014;
    }
    ctx->pc = 0x20400Cu;
    SET_GPR_U32(ctx, 31, 0x204014u);
    ctx->pc = 0x206390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206390u, 0x20400Cu, 0x204014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204014u;
label_204014:
    // 0x204014: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x204014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204018:
    // 0x204018: 0x8c6400d8  lw          $a0, 0xD8($v1)
    ctx->pc = 0x204018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_20401c:
    // 0x20401c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x20401cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_204020:
    // 0x204020: 0xc084b1c  jal         func_212C70
label_204024:
    if (ctx->pc == 0x204024u) {
        ctx->pc = 0x204028u;
        goto label_204028;
    }
    ctx->pc = 0x204020u;
    SET_GPR_U32(ctx, 31, 0x204028u);
    ctx->pc = 0x212C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212C70u, 0x204020u, 0x204028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204028u;
label_204028:
    // 0x204028: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20402c:
    // 0x20402c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20402cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204030:
    // 0x204030: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x204030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204034:
    // 0x204034: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x204034u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204038:
    // 0x204038: 0xc0c39a0  jal         func_30E680
label_20403c:
    if (ctx->pc == 0x20403Cu) {
        ctx->pc = 0x204040u;
        goto label_204040;
    }
    ctx->pc = 0x204038u;
    SET_GPR_U32(ctx, 31, 0x204040u);
    ctx->pc = 0x30E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E680u, 0x204038u, 0x204040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204040u;
label_204040:
    // 0x204040: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204044:
    // 0x204044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204048:
    // 0x204048: 0x0  nop
    ctx->pc = 0x204048u;
    // NOP
label_20404c:
    // 0x20404c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x20404cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204050:
    // 0x204050: 0xc0c3816  jal         func_30E058
label_204054:
    if (ctx->pc == 0x204054u) {
        ctx->pc = 0x204058u;
        goto label_204058;
    }
    ctx->pc = 0x204050u;
    SET_GPR_U32(ctx, 31, 0x204058u);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x204050u, 0x204058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204058u;
label_204058:
    // 0x204058: 0xc7818184  lwc1        $f1, -0x7E7C($gp)
    ctx->pc = 0x204058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20405c:
    // 0x20405c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20405cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204060:
    // 0x204060: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x204060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_204064:
    // 0x204064: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x204064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_204068:
    // 0x204068: 0xc050530  jal         func_1414C0
label_20406c:
    if (ctx->pc == 0x20406Cu) {
        ctx->pc = 0x204070u;
        goto label_204070;
    }
    ctx->pc = 0x204068u;
    SET_GPR_U32(ctx, 31, 0x204070u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x204068u, 0x204070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204070u;
label_204070:
    // 0x204070: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204070u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204074:
    // 0x204074: 0xc05035c  jal         func_140D70
label_204078:
    if (ctx->pc == 0x204078u) {
        ctx->pc = 0x20407Cu;
        goto label_20407c;
    }
    ctx->pc = 0x204074u;
    SET_GPR_U32(ctx, 31, 0x20407Cu);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x204074u, 0x20407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20407Cu;
label_20407c:
    // 0x20407c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20407cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204080:
    // 0x204080: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x204080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_204084:
    // 0x204084: 0xc050240  jal         func_140900
label_204088:
    if (ctx->pc == 0x204088u) {
        ctx->pc = 0x20408Cu;
        goto label_20408c;
    }
    ctx->pc = 0x204084u;
    SET_GPR_U32(ctx, 31, 0x20408Cu);
    ctx->pc = 0x140900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140900u, 0x204084u, 0x20408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20408Cu;
label_20408c:
    // 0x20408c: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x20408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204090:
    // 0x204090: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x204090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_204094:
    // 0x204094: 0xc05035c  jal         func_140D70
label_204098:
    if (ctx->pc == 0x204098u) {
        ctx->pc = 0x20409Cu;
        goto label_20409c;
    }
    ctx->pc = 0x204094u;
    SET_GPR_U32(ctx, 31, 0x20409Cu);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x204094u, 0x20409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20409Cu;
label_20409c:
    // 0x20409c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2040a0:
    // 0x2040a0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2040a4:
    // 0x2040a4: 0xc050194  jal         func_140650
label_2040a8:
    if (ctx->pc == 0x2040A8u) {
        ctx->pc = 0x2040ACu;
        goto label_2040ac;
    }
    ctx->pc = 0x2040A4u;
    SET_GPR_U32(ctx, 31, 0x2040ACu);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x2040A4u, 0x2040ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040ACu;
label_2040ac:
    // 0x2040ac: 0xc05035c  jal         func_140D70
label_2040b0:
    if (ctx->pc == 0x2040B0u) {
        ctx->pc = 0x2040B4u;
        goto label_2040b4;
    }
    ctx->pc = 0x2040ACu;
    SET_GPR_U32(ctx, 31, 0x2040B4u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x2040ACu, 0x2040B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040B4u;
label_2040b4:
    // 0x2040b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2040b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2040b8:
    // 0x2040b8: 0xc050360  jal         func_140D80
label_2040bc:
    if (ctx->pc == 0x2040BCu) {
        ctx->pc = 0x2040C0u;
        goto label_2040c0;
    }
    ctx->pc = 0x2040B8u;
    SET_GPR_U32(ctx, 31, 0x2040C0u);
    ctx->pc = 0x140D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D80u, 0x2040B8u, 0x2040C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040C0u;
label_2040c0:
    // 0x2040c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2040c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2040c4:
    // 0x2040c4: 0xc097444  jal         func_25D110
label_2040c8:
    if (ctx->pc == 0x2040C8u) {
        ctx->pc = 0x2040CCu;
        goto label_2040cc;
    }
    ctx->pc = 0x2040C4u;
    SET_GPR_U32(ctx, 31, 0x2040CCu);
    ctx->pc = 0x25D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D110u, 0x2040C4u, 0x2040CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040CCu;
label_2040cc:
    // 0x2040cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2040ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2040d0:
    // 0x2040d0: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x2040d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2040d4:
    // 0x2040d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2040d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2040d8:
    // 0x2040d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2040d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2040dc:
    // 0x2040dc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2040dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2040e0:
    // 0x2040e0: 0x320f809  jalr        $t9
label_2040e4:
    if (ctx->pc == 0x2040E4u) {
        ctx->pc = 0x2040E8u;
        goto label_2040e8;
    }
    ctx->pc = 0x2040E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2040E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2040E0u, 0x2040E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2040E8u;
label_2040e8:
    // 0x2040e8: 0x8fbe0150  lw          $fp, 0x150($sp)
    ctx->pc = 0x2040e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2040ec:
    // 0x2040ec: 0x93c200e0  lbu         $v0, 0xE0($fp)
    ctx->pc = 0x2040ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 224)));
label_2040f0:
    // 0x2040f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2040f4:
    if (ctx->pc == 0x2040F4u) {
        ctx->pc = 0x2040F8u;
        goto label_2040f8;
    }
    ctx->pc = 0x2040F0u;
    {
        const bool branch_taken_0x2040f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2040f0) {
            ctx->pc = 0x204118u;
            goto label_204118;
        }
    }
    ctx->pc = 0x2040F8u;
label_2040f8:
    // 0x2040f8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2040f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_2040fc:
    // 0x2040fc: 0x248490b0  addiu       $a0, $a0, -0x6F50
    ctx->pc = 0x2040fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938800));
label_204100:
    // 0x204100: 0xc0ac004  jal         func_2B0010
label_204104:
    if (ctx->pc == 0x204104u) {
        ctx->pc = 0x204108u;
        goto label_204108;
    }
    ctx->pc = 0x204100u;
    SET_GPR_U32(ctx, 31, 0x204108u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x204100u, 0x204108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204108u;
label_204108:
    // 0x204108: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x204108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20410c:
    // 0x20410c: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x20410cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_204110:
    // 0x204110: 0x10000008  b           . + 4 + (0x8 << 2)
label_204114:
    if (ctx->pc == 0x204114u) {
        ctx->pc = 0x204118u;
        goto label_204118;
    }
    ctx->pc = 0x204110u;
    {
        const bool branch_taken_0x204110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204110) {
            ctx->pc = 0x204134u;
            goto label_204134;
        }
    }
    ctx->pc = 0x204118u;
label_204118:
    // 0x204118: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x204118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_20411c:
    // 0x20411c: 0x24a590e0  addiu       $a1, $a1, -0x6F20
    ctx->pc = 0x20411cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938848));
label_204120:
    // 0x204120: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204124:
    // 0x204124: 0xc0ac004  jal         func_2B0010
label_204128:
    if (ctx->pc == 0x204128u) {
        ctx->pc = 0x20412Cu;
        goto label_20412c;
    }
    ctx->pc = 0x204124u;
    SET_GPR_U32(ctx, 31, 0x20412Cu);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x204124u, 0x20412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20412Cu;
label_20412c:
    // 0x20412c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x20412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204130:
    // 0x204130: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x204130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_204134:
    // 0x204134: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204138:
    // 0x204138: 0xa04000f4  sb          $zero, 0xF4($v0)
    ctx->pc = 0x204138u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 244), (uint8_t)GPR_U32(ctx, 0));
label_20413c:
    // 0x20413c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20413cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204140:
    // 0x204140: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204144:
    // 0x204144: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x204144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_204148:
    // 0x204148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20414c:
    // 0x20414c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x20414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204150:
    // 0x204150: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x204150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_204154:
    // 0x204154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204158:
    // 0x204158: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x204158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20415c:
    // 0x20415c: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x20415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_204160:
    // 0x204160: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204164:
    // 0x204164: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x204164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_204168:
    // 0x204168: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20416c:
    // 0x20416c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x20416cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_204170:
    // 0x204170: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x204170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204174:
    // 0x204174: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204178:
    // 0x204178: 0xac4400b4  sw          $a0, 0xB4($v0)
    ctx->pc = 0x204178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 4));
label_20417c:
    // 0x20417c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20417cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204180:
    // 0x204180: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204184:
    // 0x204184: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x204184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_204188:
    // 0x204188: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20418c:
    // 0x20418c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x20418cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204190:
    // 0x204190: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x204190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_204194:
    // 0x204194: 0xc056708  jal         func_159C20
label_204198:
    if (ctx->pc == 0x204198u) {
        ctx->pc = 0x20419Cu;
        goto label_20419c;
    }
    ctx->pc = 0x204194u;
    SET_GPR_U32(ctx, 31, 0x20419Cu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x204194u, 0x20419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20419Cu;
label_20419c:
    // 0x20419c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x20419cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2041a0:
    // 0x2041a0: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x2041a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2041a4:
    // 0x2041a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2041a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2041a8:
    // 0x2041a8: 0x24a59110  addiu       $a1, $a1, -0x6EF0
    ctx->pc = 0x2041a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938896));
label_2041ac:
    // 0x2041ac: 0xc064ad0  jal         func_192B40
label_2041b0:
    if (ctx->pc == 0x2041B0u) {
        ctx->pc = 0x2041B4u;
        goto label_2041b4;
    }
    ctx->pc = 0x2041ACu;
    SET_GPR_U32(ctx, 31, 0x2041B4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2041ACu, 0x2041B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041B4u;
label_2041b4:
    // 0x2041b4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2041b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2041b8:
    // 0x2041b8: 0x8fb20150  lw          $s2, 0x150($sp)
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2041bc:
    // 0x2041bc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x2041bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_2041c0:
    // 0x2041c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2041c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2041c4:
    // 0x2041c4: 0xc05612c  jal         func_1584B0
label_2041c8:
    if (ctx->pc == 0x2041C8u) {
        ctx->pc = 0x2041CCu;
        goto label_2041cc;
    }
    ctx->pc = 0x2041C4u;
    SET_GPR_U32(ctx, 31, 0x2041CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2041C4u, 0x2041CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041CCu;
label_2041cc:
    // 0x2041cc: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x2041ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_2041d0:
    // 0x2041d0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2041d4:
    // 0x2041d4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2041d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2041d8:
    // 0x2041d8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2041d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2041dc:
    // 0x2041dc: 0x24a59120  addiu       $a1, $a1, -0x6EE0
    ctx->pc = 0x2041dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938912));
label_2041e0:
    // 0x2041e0: 0xc064ad0  jal         func_192B40
label_2041e4:
    if (ctx->pc == 0x2041E4u) {
        ctx->pc = 0x2041E8u;
        goto label_2041e8;
    }
    ctx->pc = 0x2041E0u;
    SET_GPR_U32(ctx, 31, 0x2041E8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2041E0u, 0x2041E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041E8u;
label_2041e8:
    // 0x2041e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2041e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2041ec:
    // 0x2041ec: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2041ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2041f0:
    // 0x2041f0: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2041f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2041f4:
    // 0x2041f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2041f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2041f8:
    // 0x2041f8: 0xc05612c  jal         func_1584B0
label_2041fc:
    if (ctx->pc == 0x2041FCu) {
        ctx->pc = 0x204200u;
        goto label_204200;
    }
    ctx->pc = 0x2041F8u;
    SET_GPR_U32(ctx, 31, 0x204200u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2041F8u, 0x204200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204200u;
label_204200:
    // 0x204200: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x204200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_204204:
    // 0x204204: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204208:
    // 0x204208: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x204208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_20420c:
    // 0x20420c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_204210:
    // 0x204210: 0x24a59138  addiu       $a1, $a1, -0x6EC8
    ctx->pc = 0x204210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938936));
label_204214:
    // 0x204214: 0xc064ad0  jal         func_192B40
label_204218:
    if (ctx->pc == 0x204218u) {
        ctx->pc = 0x20421Cu;
        goto label_20421c;
    }
    ctx->pc = 0x204214u;
    SET_GPR_U32(ctx, 31, 0x20421Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x204214u, 0x20421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20421Cu;
label_20421c:
    // 0x20421c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x20421cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204220:
    // 0x204220: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204224:
    // 0x204224: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204228:
    // 0x204228: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20422c:
    // 0x20422c: 0xc05612c  jal         func_1584B0
label_204230:
    if (ctx->pc == 0x204230u) {
        ctx->pc = 0x204234u;
        goto label_204234;
    }
    ctx->pc = 0x20422Cu;
    SET_GPR_U32(ctx, 31, 0x204234u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20422Cu, 0x204234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204234u;
label_204234:
    // 0x204234: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x204234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_204238:
    // 0x204238: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20423c:
    // 0x20423c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_204240:
    // 0x204240: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x204240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_204244:
    // 0x204244: 0x24a59150  addiu       $a1, $a1, -0x6EB0
    ctx->pc = 0x204244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938960));
label_204248:
    // 0x204248: 0xc064ad0  jal         func_192B40
label_20424c:
    if (ctx->pc == 0x20424Cu) {
        ctx->pc = 0x204250u;
        goto label_204250;
    }
    ctx->pc = 0x204248u;
    SET_GPR_U32(ctx, 31, 0x204250u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x204248u, 0x204250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204250u;
label_204250:
    // 0x204250: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204250u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204254:
    // 0x204254: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204258:
    // 0x204258: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x204258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_20425c:
    // 0x20425c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_204260:
    // 0x204260: 0xc05612c  jal         func_1584B0
label_204264:
    if (ctx->pc == 0x204264u) {
        ctx->pc = 0x204268u;
        goto label_204268;
    }
    ctx->pc = 0x204260u;
    SET_GPR_U32(ctx, 31, 0x204268u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204260u, 0x204268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204268u;
label_204268:
    // 0x204268: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x204268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_20426c:
    // 0x20426c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204270:
    // 0x204270: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x204270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_204274:
    // 0x204274: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x204274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_204278:
    // 0x204278: 0x24a59168  addiu       $a1, $a1, -0x6E98
    ctx->pc = 0x204278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938984));
label_20427c:
    // 0x20427c: 0xc064ad0  jal         func_192B40
label_204280:
    if (ctx->pc == 0x204280u) {
        ctx->pc = 0x204284u;
        goto label_204284;
    }
    ctx->pc = 0x20427Cu;
    SET_GPR_U32(ctx, 31, 0x204284u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x20427Cu, 0x204284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204284u;
label_204284:
    // 0x204284: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204284u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204288:
    // 0x204288: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20428c:
    // 0x20428c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x20428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204290:
    // 0x204290: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x204290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_204294:
    // 0x204294: 0xc05612c  jal         func_1584B0
label_204298:
    if (ctx->pc == 0x204298u) {
        ctx->pc = 0x20429Cu;
        goto label_20429c;
    }
    ctx->pc = 0x204294u;
    SET_GPR_U32(ctx, 31, 0x20429Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204294u, 0x20429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20429Cu;
label_20429c:
    // 0x20429c: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x20429cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_2042a0:
    // 0x2042a0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2042a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2042a4:
    // 0x2042a4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2042a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2042a8:
    // 0x2042a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2042a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2042ac:
    // 0x2042ac: 0x24a59178  addiu       $a1, $a1, -0x6E88
    ctx->pc = 0x2042acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939000));
label_2042b0:
    // 0x2042b0: 0xc064ad0  jal         func_192B40
label_2042b4:
    if (ctx->pc == 0x2042B4u) {
        ctx->pc = 0x2042B8u;
        goto label_2042b8;
    }
    ctx->pc = 0x2042B0u;
    SET_GPR_U32(ctx, 31, 0x2042B8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2042B0u, 0x2042B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042B8u;
label_2042b8:
    // 0x2042b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2042b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2042bc:
    // 0x2042bc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2042bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2042c0:
    // 0x2042c0: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2042c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2042c4:
    // 0x2042c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2042c8:
    // 0x2042c8: 0xc05612c  jal         func_1584B0
label_2042cc:
    if (ctx->pc == 0x2042CCu) {
        ctx->pc = 0x2042D0u;
        goto label_2042d0;
    }
    ctx->pc = 0x2042C8u;
    SET_GPR_U32(ctx, 31, 0x2042D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2042C8u, 0x2042D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042D0u;
label_2042d0:
    // 0x2042d0: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x2042d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_2042d4:
    // 0x2042d4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2042d8:
    // 0x2042d8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2042d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2042dc:
    // 0x2042dc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2042dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2042e0:
    // 0x2042e0: 0x24a59190  addiu       $a1, $a1, -0x6E70
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939024));
label_2042e4:
    // 0x2042e4: 0xc064ad0  jal         func_192B40
label_2042e8:
    if (ctx->pc == 0x2042E8u) {
        ctx->pc = 0x2042ECu;
        goto label_2042ec;
    }
    ctx->pc = 0x2042E4u;
    SET_GPR_U32(ctx, 31, 0x2042ECu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x2042E4u, 0x2042ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042ECu;
label_2042ec:
    // 0x2042ec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2042ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2042f0:
    // 0x2042f0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2042f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2042f4:
    // 0x2042f4: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2042f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2042f8:
    // 0x2042f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2042fc:
    // 0x2042fc: 0xc05612c  jal         func_1584B0
label_204300:
    if (ctx->pc == 0x204300u) {
        ctx->pc = 0x204304u;
        goto label_204304;
    }
    ctx->pc = 0x2042FCu;
    SET_GPR_U32(ctx, 31, 0x204304u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2042FCu, 0x204304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204304u;
label_204304:
    // 0x204304: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x204304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_204308:
    // 0x204308: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20430c:
    // 0x20430c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x20430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_204310:
    // 0x204310: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x204310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_204314:
    // 0x204314: 0x24a591b0  addiu       $a1, $a1, -0x6E50
    ctx->pc = 0x204314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939056));
label_204318:
    // 0x204318: 0xc064ad0  jal         func_192B40
label_20431c:
    if (ctx->pc == 0x20431Cu) {
        ctx->pc = 0x204320u;
        goto label_204320;
    }
    ctx->pc = 0x204318u;
    SET_GPR_U32(ctx, 31, 0x204320u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x204318u, 0x204320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204320u;
label_204320:
    // 0x204320: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204320u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204324:
    // 0x204324: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204328:
    // 0x204328: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x204328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_20432c:
    // 0x20432c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20432cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_204330:
    // 0x204330: 0xc05612c  jal         func_1584B0
label_204334:
    if (ctx->pc == 0x204334u) {
        ctx->pc = 0x204338u;
        goto label_204338;
    }
    ctx->pc = 0x204330u;
    SET_GPR_U32(ctx, 31, 0x204338u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204330u, 0x204338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204338u;
label_204338:
    // 0x204338: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x204338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_20433c:
    // 0x20433c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x20433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204340:
    // 0x204340: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x204340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_204344:
    // 0x204344: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x204344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_204348:
    // 0x204348: 0x24a591c8  addiu       $a1, $a1, -0x6E38
    ctx->pc = 0x204348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939080));
label_20434c:
    // 0x20434c: 0xc064ad0  jal         func_192B40
label_204350:
    if (ctx->pc == 0x204350u) {
        ctx->pc = 0x204354u;
        goto label_204354;
    }
    ctx->pc = 0x20434Cu;
    SET_GPR_U32(ctx, 31, 0x204354u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x20434Cu, 0x204354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204354u;
label_204354:
    // 0x204354: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204354u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204358:
    // 0x204358: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20435c:
    // 0x20435c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x20435cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204360:
    // 0x204360: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x204360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_204364:
    // 0x204364: 0xc05612c  jal         func_1584B0
label_204368:
    if (ctx->pc == 0x204368u) {
        ctx->pc = 0x20436Cu;
        goto label_20436c;
    }
    ctx->pc = 0x204364u;
    SET_GPR_U32(ctx, 31, 0x20436Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204364u, 0x20436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20436Cu;
label_20436c:
    // 0x20436c: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x20436cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_204370:
    // 0x204370: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204374:
    // 0x204374: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x204374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_204378:
    // 0x204378: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x204378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_20437c:
    // 0x20437c: 0x24a591d8  addiu       $a1, $a1, -0x6E28
    ctx->pc = 0x20437cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939096));
label_204380:
    // 0x204380: 0xc064ad0  jal         func_192B40
label_204384:
    if (ctx->pc == 0x204384u) {
        ctx->pc = 0x204388u;
        goto label_204388;
    }
    ctx->pc = 0x204380u;
    SET_GPR_U32(ctx, 31, 0x204388u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x204380u, 0x204388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204388u;
label_204388:
    // 0x204388: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204388u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20438c:
    // 0x20438c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x20438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204390:
    // 0x204390: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x204390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204394:
    // 0x204394: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x204394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_204398:
    // 0x204398: 0xc05612c  jal         func_1584B0
label_20439c:
    if (ctx->pc == 0x20439Cu) {
        ctx->pc = 0x2043A0u;
        goto label_2043a0;
    }
    ctx->pc = 0x204398u;
    SET_GPR_U32(ctx, 31, 0x2043A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204398u, 0x2043A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043A0u;
label_2043a0:
    // 0x2043a0: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x2043a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_2043a4:
    // 0x2043a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2043a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2043a8:
    // 0x2043a8: 0x10000010  b           . + 4 + (0x10 << 2)
label_2043ac:
    if (ctx->pc == 0x2043ACu) {
        ctx->pc = 0x2043B0u;
        goto label_2043b0;
    }
    ctx->pc = 0x2043A8u;
    {
        const bool branch_taken_0x2043a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2043a8) {
            ctx->pc = 0x2043ECu;
            goto label_2043ec;
        }
    }
    ctx->pc = 0x2043B0u;
label_2043b0:
    // 0x2043b0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2043b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2043b4:
    // 0x2043b4: 0xc06479c  jal         func_191E70
label_2043b8:
    if (ctx->pc == 0x2043B8u) {
        ctx->pc = 0x2043BCu;
        goto label_2043bc;
    }
    ctx->pc = 0x2043B4u;
    SET_GPR_U32(ctx, 31, 0x2043BCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2043B4u, 0x2043BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043BCu;
label_2043bc:
    // 0x2043bc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2043bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2043c0:
    // 0x2043c0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2043c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2043c4:
    // 0x2043c4: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2043c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2043c8:
    // 0x2043c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2043c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2043cc:
    // 0x2043cc: 0xc05612c  jal         func_1584B0
label_2043d0:
    if (ctx->pc == 0x2043D0u) {
        ctx->pc = 0x2043D4u;
        goto label_2043d4;
    }
    ctx->pc = 0x2043CCu;
    SET_GPR_U32(ctx, 31, 0x2043D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2043CCu, 0x2043D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043D4u;
label_2043d4:
    // 0x2043d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2043d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2043d8:
    // 0x2043d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2043d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2043dc:
    // 0x2043dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2043dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2043e0:
    // 0x2043e0: 0xc08c8dc  jal         func_232370
label_2043e4:
    if (ctx->pc == 0x2043E4u) {
        ctx->pc = 0x2043E8u;
        goto label_2043e8;
    }
    ctx->pc = 0x2043E0u;
    SET_GPR_U32(ctx, 31, 0x2043E8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x2043E0u, 0x2043E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2043E8u;
label_2043e8:
    // 0x2043e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2043e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2043ec:
    // 0x2043ec: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x2043ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2043f0:
    // 0x2043f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_2043f4:
    if (ctx->pc == 0x2043F4u) {
        ctx->pc = 0x2043F8u;
        goto label_2043f8;
    }
    ctx->pc = 0x2043F0u;
    {
        const bool branch_taken_0x2043f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2043f0) {
            ctx->pc = 0x2043B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2043b0;
        }
    }
    ctx->pc = 0x2043F8u;
label_2043f8:
    // 0x2043f8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2043f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2043fc:
    // 0x2043fc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2043fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_204400:
    // 0x204400: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_204404:
    if (ctx->pc == 0x204404u) {
        ctx->pc = 0x204408u;
        goto label_204408;
    }
    ctx->pc = 0x204400u;
    {
        const bool branch_taken_0x204400 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x204400) {
            ctx->pc = 0x20441Cu;
            goto label_20441c;
        }
    }
    ctx->pc = 0x204408u;
label_204408:
    // 0x204408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x204408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20440c:
    // 0x20440c: 0x0  nop
    ctx->pc = 0x20440cu;
    // NOP
label_204410:
    // 0x204410: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x204410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_204414:
    // 0x204414: 0x10000008  b           . + 4 + (0x8 << 2)
label_204418:
    if (ctx->pc == 0x204418u) {
        ctx->pc = 0x20441Cu;
        goto label_20441c;
    }
    ctx->pc = 0x204414u;
    {
        const bool branch_taken_0x204414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204414) {
            ctx->pc = 0x204438u;
            goto label_204438;
        }
    }
    ctx->pc = 0x20441Cu;
label_20441c:
    // 0x20441c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20441cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_204420:
    // 0x204420: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x204420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_204424:
    // 0x204424: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x204424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_204428:
    // 0x204428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x204428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20442c:
    // 0x20442c: 0x0  nop
    ctx->pc = 0x20442cu;
    // NOP
label_204430:
    // 0x204430: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x204430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_204434:
    // 0x204434: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x204434u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_204438:
    // 0x204438: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x204438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_20443c:
    // 0x20443c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20443cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204440:
    // 0x204440: 0x0  nop
    ctx->pc = 0x204440u;
    // NOP
label_204444:
    // 0x204444: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x204444u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_204448:
    // 0x204448: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x204448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_20444c:
    // 0x20444c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20444cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204450:
    // 0x204450: 0x0  nop
    ctx->pc = 0x204450u;
    // NOP
label_204454:
    // 0x204454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x204454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_204458:
    // 0x204458: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x204458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_20445c:
    // 0x20445c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x20445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_204460:
    // 0x204460: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x204460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_204464:
    // 0x204464: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_204468:
    if (ctx->pc == 0x204468u) {
        ctx->pc = 0x20446Cu;
        goto label_20446c;
    }
    ctx->pc = 0x204464u;
    {
        const bool branch_taken_0x204464 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x204464) {
            ctx->pc = 0x204480u;
            goto label_204480;
        }
    }
    ctx->pc = 0x20446Cu;
label_20446c:
    // 0x20446c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20446cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204470:
    // 0x204470: 0x0  nop
    ctx->pc = 0x204470u;
    // NOP
label_204474:
    // 0x204474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_204478:
    // 0x204478: 0x10000008  b           . + 4 + (0x8 << 2)
label_20447c:
    if (ctx->pc == 0x20447Cu) {
        ctx->pc = 0x204480u;
        goto label_204480;
    }
    ctx->pc = 0x204478u;
    {
        const bool branch_taken_0x204478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204478) {
            ctx->pc = 0x20449Cu;
            goto label_20449c;
        }
    }
    ctx->pc = 0x204480u;
label_204480:
    // 0x204480: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x204480u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_204484:
    // 0x204484: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x204484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_204488:
    // 0x204488: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x204488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20448c:
    // 0x20448c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20448cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204490:
    // 0x204490: 0x0  nop
    ctx->pc = 0x204490u;
    // NOP
label_204494:
    // 0x204494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x204494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_204498:
    // 0x204498: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x204498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_20449c:
    // 0x20449c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x20449cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_2044a0:
    // 0x2044a0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2044a4:
    // 0x2044a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2044a8:
    // 0x2044a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2044ac:
    if (ctx->pc == 0x2044ACu) {
        ctx->pc = 0x2044B0u;
        goto label_2044b0;
    }
    ctx->pc = 0x2044A8u;
    {
        const bool branch_taken_0x2044a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2044a8) {
            ctx->pc = 0x2044C4u;
            goto label_2044c4;
        }
    }
    ctx->pc = 0x2044B0u;
label_2044b0:
    // 0x2044b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2044b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2044b4:
    // 0x2044b4: 0x0  nop
    ctx->pc = 0x2044b4u;
    // NOP
label_2044b8:
    // 0x2044b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2044b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2044bc:
    // 0x2044bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2044c0:
    if (ctx->pc == 0x2044C0u) {
        ctx->pc = 0x2044C4u;
        goto label_2044c4;
    }
    ctx->pc = 0x2044BCu;
    {
        const bool branch_taken_0x2044bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2044bc) {
            ctx->pc = 0x2044E0u;
            goto label_2044e0;
        }
    }
    ctx->pc = 0x2044C4u;
label_2044c4:
    // 0x2044c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2044c8:
    // 0x2044c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2044c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2044cc:
    // 0x2044cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2044ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2044d0:
    // 0x2044d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2044d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2044d4:
    // 0x2044d4: 0x0  nop
    ctx->pc = 0x2044d4u;
    // NOP
label_2044d8:
    // 0x2044d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2044d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2044dc:
    // 0x2044dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2044dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2044e0:
    // 0x2044e0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2044e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2044e4:
    // 0x2044e4: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2044e8:
    // 0x2044e8: 0xc06479c  jal         func_191E70
label_2044ec:
    if (ctx->pc == 0x2044ECu) {
        ctx->pc = 0x2044F0u;
        goto label_2044f0;
    }
    ctx->pc = 0x2044E8u;
    SET_GPR_U32(ctx, 31, 0x2044F0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2044E8u, 0x2044F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044F0u;
label_2044f0:
    // 0x2044f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2044f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2044f4:
    // 0x2044f4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2044f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2044f8:
    // 0x2044f8: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2044f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2044fc:
    // 0x2044fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2044fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204500:
    // 0x204500: 0xc05612c  jal         func_1584B0
label_204504:
    if (ctx->pc == 0x204504u) {
        ctx->pc = 0x204508u;
        goto label_204508;
    }
    ctx->pc = 0x204500u;
    SET_GPR_U32(ctx, 31, 0x204508u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204500u, 0x204508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204508u;
label_204508:
    // 0x204508: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20450c:
    // 0x20450c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_204510:
    // 0x204510: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x204510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_204514:
    // 0x204514: 0xc08c6c8  jal         func_231B20
label_204518:
    if (ctx->pc == 0x204518u) {
        ctx->pc = 0x20451Cu;
        goto label_20451c;
    }
    ctx->pc = 0x204514u;
    SET_GPR_U32(ctx, 31, 0x20451Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x204514u, 0x20451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20451Cu;
label_20451c:
    // 0x20451c: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x20451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204520:
    // 0x204520: 0xc06479c  jal         func_191E70
label_204524:
    if (ctx->pc == 0x204524u) {
        ctx->pc = 0x204528u;
        goto label_204528;
    }
    ctx->pc = 0x204520u;
    SET_GPR_U32(ctx, 31, 0x204528u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x204520u, 0x204528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204528u;
label_204528:
    // 0x204528: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204528u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20452c:
    // 0x20452c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x20452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204530:
    // 0x204530: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x204530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204534:
    // 0x204534: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x204534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_204538:
    // 0x204538: 0xc05612c  jal         func_1584B0
label_20453c:
    if (ctx->pc == 0x20453Cu) {
        ctx->pc = 0x204540u;
        goto label_204540;
    }
    ctx->pc = 0x204538u;
    SET_GPR_U32(ctx, 31, 0x204540u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204538u, 0x204540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204540u;
label_204540:
    // 0x204540: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204544:
    // 0x204544: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x204544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_204548:
    // 0x204548: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x204548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_20454c:
    // 0x20454c: 0xc08c6c8  jal         func_231B20
label_204550:
    if (ctx->pc == 0x204550u) {
        ctx->pc = 0x204554u;
        goto label_204554;
    }
    ctx->pc = 0x20454Cu;
    SET_GPR_U32(ctx, 31, 0x204554u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x20454Cu, 0x204554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204554u;
label_204554:
    // 0x204554: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x204554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204558:
    // 0x204558: 0xc06479c  jal         func_191E70
label_20455c:
    if (ctx->pc == 0x20455Cu) {
        ctx->pc = 0x204560u;
        goto label_204560;
    }
    ctx->pc = 0x204558u;
    SET_GPR_U32(ctx, 31, 0x204560u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x204558u, 0x204560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204560u;
label_204560:
    // 0x204560: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204560u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204564:
    // 0x204564: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204568:
    // 0x204568: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_20456c:
    // 0x20456c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20456cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204570:
    // 0x204570: 0xc05612c  jal         func_1584B0
label_204574:
    if (ctx->pc == 0x204574u) {
        ctx->pc = 0x204578u;
        goto label_204578;
    }
    ctx->pc = 0x204570u;
    SET_GPR_U32(ctx, 31, 0x204578u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204570u, 0x204578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204578u;
label_204578:
    // 0x204578: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20457c:
    // 0x20457c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204580:
    // 0x204580: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x204580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_204584:
    // 0x204584: 0xc7a40138  lwc1        $f4, 0x138($sp)
    ctx->pc = 0x204584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_204588:
    // 0x204588: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20458c:
    // 0x20458c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x20458cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204590:
    // 0x204590: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x204590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204594:
    // 0x204594: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204598:
    // 0x204598: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20459c:
    // 0x20459c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x20459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2045a0:
    // 0x2045a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2045a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2045a4:
    // 0x2045a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2045a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2045a8:
    // 0x2045a8: 0x0  nop
    ctx->pc = 0x2045a8u;
    // NOP
label_2045ac:
    // 0x2045ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2045acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2045b0:
    // 0x2045b0: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x2045b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2045b4:
    // 0x2045b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2045b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2045b8:
    // 0x2045b8: 0x0  nop
    ctx->pc = 0x2045b8u;
    // NOP
label_2045bc:
    // 0x2045bc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2045bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2045c0:
    // 0x2045c0: 0x46042b1d  msub.s      $f12, $f5, $f4
    ctx->pc = 0x2045c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_2045c4:
    // 0x2045c4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2045c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2045c8:
    // 0x2045c8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2045c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2045cc:
    // 0x2045cc: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x2045ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2045d0:
    // 0x2045d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2045d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2045d4:
    // 0x2045d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2045d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2045d8:
    // 0x2045d8: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2045d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2045dc:
    // 0x2045dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2045dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2045e0:
    // 0x2045e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2045e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2045e4:
    // 0x2045e4: 0x0  nop
    ctx->pc = 0x2045e4u;
    // NOP
label_2045e8:
    // 0x2045e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2045e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2045ec:
    // 0x2045ec: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x2045ecu;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2045f0:
    // 0x2045f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2045f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2045f4:
    // 0x2045f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2045f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2045f8:
    // 0x2045f8: 0xc08c208  jal         func_230820
label_2045fc:
    if (ctx->pc == 0x2045FCu) {
        ctx->pc = 0x204600u;
        goto label_204600;
    }
    ctx->pc = 0x2045F8u;
    SET_GPR_U32(ctx, 31, 0x204600u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2045F8u, 0x204600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204600u;
label_204600:
    // 0x204600: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204604:
    // 0x204604: 0xc06479c  jal         func_191E70
label_204608:
    if (ctx->pc == 0x204608u) {
        ctx->pc = 0x20460Cu;
        goto label_20460c;
    }
    ctx->pc = 0x204604u;
    SET_GPR_U32(ctx, 31, 0x20460Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x204604u, 0x20460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20460Cu;
label_20460c:
    // 0x20460c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x20460cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204610:
    // 0x204610: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204614:
    // 0x204614: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x204614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204618:
    // 0x204618: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20461c:
    // 0x20461c: 0xc05612c  jal         func_1584B0
label_204620:
    if (ctx->pc == 0x204620u) {
        ctx->pc = 0x204624u;
        goto label_204624;
    }
    ctx->pc = 0x20461Cu;
    SET_GPR_U32(ctx, 31, 0x204624u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20461Cu, 0x204624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204624u;
label_204624:
    // 0x204624: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204628:
    // 0x204628: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20462c:
    // 0x20462c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x20462cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_204630:
    // 0x204630: 0xc7a40138  lwc1        $f4, 0x138($sp)
    ctx->pc = 0x204630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_204634:
    // 0x204634: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204638:
    // 0x204638: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20463c:
    // 0x20463c: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x20463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204640:
    // 0x204640: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204644:
    // 0x204644: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204648:
    // 0x204648: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x204648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20464c:
    // 0x20464c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20464cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204650:
    // 0x204650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204654:
    // 0x204654: 0x0  nop
    ctx->pc = 0x204654u;
    // NOP
label_204658:
    // 0x204658: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204658u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20465c:
    // 0x20465c: 0x4602185d  msub.s      $f1, $f3, $f2
    ctx->pc = 0x20465cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_204660:
    // 0x204660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204664:
    // 0x204664: 0x0  nop
    ctx->pc = 0x204664u;
    // NOP
label_204668:
    // 0x204668: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204668u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_20466c:
    // 0x20466c: 0x46042b1d  msub.s      $f12, $f5, $f4
    ctx->pc = 0x20466cu;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_204670:
    // 0x204670: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204674:
    // 0x204674: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204678:
    // 0x204678: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x204678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20467c:
    // 0x20467c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204680:
    // 0x204680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204684:
    // 0x204684: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x204684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204688:
    // 0x204688: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20468c:
    // 0x20468c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20468cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204690:
    // 0x204690: 0x0  nop
    ctx->pc = 0x204690u;
    // NOP
label_204694:
    // 0x204694: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204694u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204698:
    // 0x204698: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x204698u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20469c:
    // 0x20469c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20469cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2046a0:
    // 0x2046a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2046a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2046a4:
    // 0x2046a4: 0xc08c208  jal         func_230820
label_2046a8:
    if (ctx->pc == 0x2046A8u) {
        ctx->pc = 0x2046ACu;
        goto label_2046ac;
    }
    ctx->pc = 0x2046A4u;
    SET_GPR_U32(ctx, 31, 0x2046ACu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2046A4u, 0x2046ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046ACu;
label_2046ac:
    // 0x2046ac: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2046acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2046b0:
    // 0x2046b0: 0xc06479c  jal         func_191E70
label_2046b4:
    if (ctx->pc == 0x2046B4u) {
        ctx->pc = 0x2046B8u;
        goto label_2046b8;
    }
    ctx->pc = 0x2046B0u;
    SET_GPR_U32(ctx, 31, 0x2046B8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2046B0u, 0x2046B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046B8u;
label_2046b8:
    // 0x2046b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2046b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2046bc:
    // 0x2046bc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2046bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2046c0:
    // 0x2046c0: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2046c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2046c4:
    // 0x2046c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2046c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2046c8:
    // 0x2046c8: 0xc05612c  jal         func_1584B0
label_2046cc:
    if (ctx->pc == 0x2046CCu) {
        ctx->pc = 0x2046D0u;
        goto label_2046d0;
    }
    ctx->pc = 0x2046C8u;
    SET_GPR_U32(ctx, 31, 0x2046D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2046C8u, 0x2046D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2046D0u;
label_2046d0:
    // 0x2046d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2046d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2046d4:
    // 0x2046d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2046d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2046d8:
    // 0x2046d8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2046d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2046dc:
    // 0x2046dc: 0xc7a40138  lwc1        $f4, 0x138($sp)
    ctx->pc = 0x2046dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2046e0:
    // 0x2046e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2046e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2046e4:
    // 0x2046e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2046e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2046e8:
    // 0x2046e8: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x2046e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2046ec:
    // 0x2046ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2046ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2046f0:
    // 0x2046f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2046f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2046f4:
    // 0x2046f4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2046f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2046f8:
    // 0x2046f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2046f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2046fc:
    // 0x2046fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2046fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204700:
    // 0x204700: 0x0  nop
    ctx->pc = 0x204700u;
    // NOP
label_204704:
    // 0x204704: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204704u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204708:
    // 0x204708: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x204708u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20470c:
    // 0x20470c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20470cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204710:
    // 0x204710: 0x0  nop
    ctx->pc = 0x204710u;
    // NOP
label_204714:
    // 0x204714: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204714u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204718:
    // 0x204718: 0x46042b1d  msub.s      $f12, $f5, $f4
    ctx->pc = 0x204718u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_20471c:
    // 0x20471c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204720:
    // 0x204720: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204724:
    // 0x204724: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x204724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204728:
    // 0x204728: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20472c:
    // 0x20472c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20472cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204730:
    // 0x204730: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x204730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204734:
    // 0x204734: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204738:
    // 0x204738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20473c:
    // 0x20473c: 0x0  nop
    ctx->pc = 0x20473cu;
    // NOP
label_204740:
    // 0x204740: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204740u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204744:
    // 0x204744: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x204744u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_204748:
    // 0x204748: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x204748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20474c:
    // 0x20474c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20474cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204750:
    // 0x204750: 0xc08c208  jal         func_230820
label_204754:
    if (ctx->pc == 0x204754u) {
        ctx->pc = 0x204758u;
        goto label_204758;
    }
    ctx->pc = 0x204750u;
    SET_GPR_U32(ctx, 31, 0x204758u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x204750u, 0x204758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204758u;
label_204758:
    // 0x204758: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x204758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20475c:
    // 0x20475c: 0xc06479c  jal         func_191E70
label_204760:
    if (ctx->pc == 0x204760u) {
        ctx->pc = 0x204764u;
        goto label_204764;
    }
    ctx->pc = 0x20475Cu;
    SET_GPR_U32(ctx, 31, 0x204764u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20475Cu, 0x204764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204764u;
label_204764:
    // 0x204764: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204764u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204768:
    // 0x204768: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_20476c:
    // 0x20476c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x20476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204770:
    // 0x204770: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_204774:
    // 0x204774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204778:
    // 0x204778: 0xc05612c  jal         func_1584B0
label_20477c:
    if (ctx->pc == 0x20477Cu) {
        ctx->pc = 0x204780u;
        goto label_204780;
    }
    ctx->pc = 0x204778u;
    SET_GPR_U32(ctx, 31, 0x204780u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204778u, 0x204780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204780u;
label_204780:
    // 0x204780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204784:
    // 0x204784: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204788:
    // 0x204788: 0x3c103f00  lui         $s0, 0x3F00
    ctx->pc = 0x204788u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16128 << 16));
label_20478c:
    // 0x20478c: 0x44902800  mtc1        $s0, $f5
    ctx->pc = 0x20478cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_204790:
    // 0x204790: 0xc7a40138  lwc1        $f4, 0x138($sp)
    ctx->pc = 0x204790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_204794:
    // 0x204794: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x204794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_204798:
    // 0x204798: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x204798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_20479c:
    // 0x20479c: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x20479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2047a0:
    // 0x2047a0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2047a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2047a4:
    // 0x2047a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2047a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2047a8:
    // 0x2047a8: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2047a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2047ac:
    // 0x2047ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2047acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2047b0:
    // 0x2047b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2047b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2047b4:
    // 0x2047b4: 0x0  nop
    ctx->pc = 0x2047b4u;
    // NOP
label_2047b8:
    // 0x2047b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2047b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2047bc:
    // 0x2047bc: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2047bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2047c0:
    // 0x2047c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2047c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2047c4:
    // 0x2047c4: 0x0  nop
    ctx->pc = 0x2047c4u;
    // NOP
label_2047c8:
    // 0x2047c8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2047c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2047cc:
    // 0x2047cc: 0x46042b1d  msub.s      $f12, $f5, $f4
    ctx->pc = 0x2047ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_2047d0:
    // 0x2047d0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_2047d4:
    // 0x2047d4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2047d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2047d8:
    // 0x2047d8: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x2047d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2047dc:
    // 0x2047dc: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2047dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_2047e0:
    // 0x2047e0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2047e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2047e4:
    // 0x2047e4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2047e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2047e8:
    // 0x2047e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2047e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2047ec:
    // 0x2047ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2047ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2047f0:
    // 0x2047f0: 0x0  nop
    ctx->pc = 0x2047f0u;
    // NOP
label_2047f4:
    // 0x2047f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2047f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2047f8:
    // 0x2047f8: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x2047f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2047fc:
    // 0x2047fc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2047fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_204800:
    // 0x204800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204804:
    // 0x204804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204808:
    // 0x204808: 0xc08c208  jal         func_230820
label_20480c:
    if (ctx->pc == 0x20480Cu) {
        ctx->pc = 0x204810u;
        goto label_204810;
    }
    ctx->pc = 0x204808u;
    SET_GPR_U32(ctx, 31, 0x204810u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x204808u, 0x204810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204810u;
label_204810:
    // 0x204810: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204814:
    // 0x204814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204818:
    // 0x204818: 0xc06479c  jal         func_191E70
label_20481c:
    if (ctx->pc == 0x20481Cu) {
        ctx->pc = 0x204820u;
        goto label_204820;
    }
    ctx->pc = 0x204818u;
    SET_GPR_U32(ctx, 31, 0x204820u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x204818u, 0x204820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204820u;
label_204820:
    // 0x204820: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x204820u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204824:
    // 0x204824: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204828:
    // 0x204828: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x204828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_20482c:
    // 0x20482c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20482cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_204830:
    // 0x204830: 0xc05612c  jal         func_1584B0
label_204834:
    if (ctx->pc == 0x204834u) {
        ctx->pc = 0x204838u;
        goto label_204838;
    }
    ctx->pc = 0x204830u;
    SET_GPR_U32(ctx, 31, 0x204838u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204830u, 0x204838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204838u;
label_204838:
    // 0x204838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20483c:
    // 0x20483c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x20483cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204840:
    // 0x204840: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204844:
    // 0x204844: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204848:
    // 0x204848: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x204848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20484c:
    // 0x20484c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x20484cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_204850:
    // 0x204850: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x204850u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204854:
    // 0x204854: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x204854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204858:
    // 0x204858: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20485c:
    // 0x20485c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20485cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204860:
    // 0x204860: 0x0  nop
    ctx->pc = 0x204860u;
    // NOP
label_204864:
    // 0x204864: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204864u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204868:
    // 0x204868: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x204868u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20486c:
    // 0x20486c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204870:
    // 0x204870: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204874:
    // 0x204874: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x204874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204878:
    // 0x204878: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20487c:
    // 0x20487c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20487cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204880:
    // 0x204880: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x204880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204884:
    // 0x204884: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204888:
    // 0x204888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20488c:
    // 0x20488c: 0x0  nop
    ctx->pc = 0x20488cu;
    // NOP
label_204890:
    // 0x204890: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204890u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204894:
    // 0x204894: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x204894u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_204898:
    // 0x204898: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x204898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20489c:
    // 0x20489c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20489cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2048a0:
    // 0x2048a0: 0xc08c208  jal         func_230820
label_2048a4:
    if (ctx->pc == 0x2048A4u) {
        ctx->pc = 0x2048A8u;
        goto label_2048a8;
    }
    ctx->pc = 0x2048A0u;
    SET_GPR_U32(ctx, 31, 0x2048A8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2048A0u, 0x2048A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048A8u;
label_2048a8:
    // 0x2048a8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2048a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2048ac:
    // 0x2048ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2048acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2048b0:
    // 0x2048b0: 0xc06479c  jal         func_191E70
label_2048b4:
    if (ctx->pc == 0x2048B4u) {
        ctx->pc = 0x2048B8u;
        goto label_2048b8;
    }
    ctx->pc = 0x2048B0u;
    SET_GPR_U32(ctx, 31, 0x2048B8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2048B0u, 0x2048B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048B8u;
label_2048b8:
    // 0x2048b8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2048b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2048bc:
    // 0x2048bc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2048bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2048c0:
    // 0x2048c0: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2048c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2048c4:
    // 0x2048c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2048c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2048c8:
    // 0x2048c8: 0xc05612c  jal         func_1584B0
label_2048cc:
    if (ctx->pc == 0x2048CCu) {
        ctx->pc = 0x2048D0u;
        goto label_2048d0;
    }
    ctx->pc = 0x2048C8u;
    SET_GPR_U32(ctx, 31, 0x2048D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2048C8u, 0x2048D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048D0u;
label_2048d0:
    // 0x2048d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2048d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2048d4:
    // 0x2048d4: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_2048d8:
    // 0x2048d8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2048d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2048dc:
    // 0x2048dc: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x2048dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2048e0:
    // 0x2048e0: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2048e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_2048e4:
    // 0x2048e4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2048e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2048e8:
    // 0x2048e8: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x2048e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2048ec:
    // 0x2048ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2048ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2048f0:
    // 0x2048f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2048f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2048f4:
    // 0x2048f4: 0x0  nop
    ctx->pc = 0x2048f4u;
    // NOP
label_2048f8:
    // 0x2048f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2048f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2048fc:
    // 0x2048fc: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x2048fcu;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_204900:
    // 0x204900: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204904:
    // 0x204904: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204908:
    // 0x204908: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x204908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20490c:
    // 0x20490c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204910:
    // 0x204910: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204914:
    // 0x204914: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x204914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204918:
    // 0x204918: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20491c:
    // 0x20491c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20491cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204920:
    // 0x204920: 0x0  nop
    ctx->pc = 0x204920u;
    // NOP
label_204924:
    // 0x204924: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204924u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204928:
    // 0x204928: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x204928u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20492c:
    // 0x20492c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_204930:
    // 0x204930: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x204930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_204934:
    // 0x204934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204938:
    // 0x204938: 0xc08c208  jal         func_230820
label_20493c:
    if (ctx->pc == 0x20493Cu) {
        ctx->pc = 0x204940u;
        goto label_204940;
    }
    ctx->pc = 0x204938u;
    SET_GPR_U32(ctx, 31, 0x204940u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x204938u, 0x204940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204940u;
label_204940:
    // 0x204940: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x204940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204944:
    // 0x204944: 0xc06479c  jal         func_191E70
label_204948:
    if (ctx->pc == 0x204948u) {
        ctx->pc = 0x20494Cu;
        goto label_20494c;
    }
    ctx->pc = 0x204944u;
    SET_GPR_U32(ctx, 31, 0x20494Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x204944u, 0x20494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20494Cu;
label_20494c:
    // 0x20494c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x20494cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204950:
    // 0x204950: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204954:
    // 0x204954: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x204954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_204958:
    // 0x204958: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20495c:
    // 0x20495c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x20495cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_204960:
    // 0x204960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204964:
    // 0x204964: 0xc05612c  jal         func_1584B0
label_204968:
    if (ctx->pc == 0x204968u) {
        ctx->pc = 0x20496Cu;
        goto label_20496c;
    }
    ctx->pc = 0x204964u;
    SET_GPR_U32(ctx, 31, 0x20496Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204964u, 0x20496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20496Cu;
label_20496c:
    // 0x20496c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204970:
    // 0x204970: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204974:
    // 0x204974: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204978:
    // 0x204978: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x204978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20497c:
    // 0x20497c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204980:
    // 0x204980: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204984:
    // 0x204984: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x204984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204988:
    // 0x204988: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20498c:
    // 0x20498c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20498cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204990:
    // 0x204990: 0x0  nop
    ctx->pc = 0x204990u;
    // NOP
label_204994:
    // 0x204994: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204994u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204998:
    // 0x204998: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x204998u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20499c:
    // 0x20499c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2049a0:
    // 0x2049a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2049a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2049a4:
    // 0x2049a4: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x2049a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2049a8:
    // 0x2049a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2049a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2049ac:
    // 0x2049ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2049acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2049b0:
    // 0x2049b0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2049b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2049b4:
    // 0x2049b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2049b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2049b8:
    // 0x2049b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2049b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2049bc:
    // 0x2049bc: 0x0  nop
    ctx->pc = 0x2049bcu;
    // NOP
label_2049c0:
    // 0x2049c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2049c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2049c4:
    // 0x2049c4: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x2049c4u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2049c8:
    // 0x2049c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2049c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2049cc:
    // 0x2049cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2049ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2049d0:
    // 0x2049d0: 0xc08c208  jal         func_230820
label_2049d4:
    if (ctx->pc == 0x2049D4u) {
        ctx->pc = 0x2049D8u;
        goto label_2049d8;
    }
    ctx->pc = 0x2049D0u;
    SET_GPR_U32(ctx, 31, 0x2049D8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x2049D0u, 0x2049D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049D8u;
label_2049d8:
    // 0x2049d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2049d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2049dc:
    // 0x2049dc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2049dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2049e0:
    // 0x2049e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2049e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2049e4:
    // 0x2049e4: 0xc06479c  jal         func_191E70
label_2049e8:
    if (ctx->pc == 0x2049E8u) {
        ctx->pc = 0x2049ECu;
        goto label_2049ec;
    }
    ctx->pc = 0x2049E4u;
    SET_GPR_U32(ctx, 31, 0x2049ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2049E4u, 0x2049ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049ECu;
label_2049ec:
    // 0x2049ec: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2049ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2049f0:
    // 0x2049f0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2049f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_2049f4:
    // 0x2049f4: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2049f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2049f8:
    // 0x2049f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2049f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2049fc:
    // 0x2049fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2049fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204a00:
    // 0x204a00: 0xc05612c  jal         func_1584B0
label_204a04:
    if (ctx->pc == 0x204A04u) {
        ctx->pc = 0x204A08u;
        goto label_204a08;
    }
    ctx->pc = 0x204A00u;
    SET_GPR_U32(ctx, 31, 0x204A08u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x204A00u, 0x204A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A08u;
label_204a08:
    // 0x204a08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204a08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204a0c:
    // 0x204a0c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x204a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_204a10:
    // 0x204a10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204a14:
    // 0x204a14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204a18:
    // 0x204a18: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x204a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204a1c:
    // 0x204a1c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x204a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_204a20:
    // 0x204a20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x204a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204a24:
    // 0x204a24: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x204a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204a28:
    // 0x204a28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204a28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204a2c:
    // 0x204a2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204a30:
    // 0x204a30: 0x0  nop
    ctx->pc = 0x204a30u;
    // NOP
label_204a34:
    // 0x204a34: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204a34u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204a38:
    // 0x204a38: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x204a38u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_204a3c:
    // 0x204a3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204a40:
    // 0x204a40: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x204a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_204a44:
    // 0x204a44: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x204a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_204a48:
    // 0x204a48: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x204a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_204a4c:
    // 0x204a4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x204a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_204a50:
    // 0x204a50: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x204a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204a54:
    // 0x204a54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x204a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204a58:
    // 0x204a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204a5c:
    // 0x204a5c: 0x0  nop
    ctx->pc = 0x204a5cu;
    // NOP
label_204a60:
    // 0x204a60: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x204a60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_204a64:
    // 0x204a64: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x204a64u;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_204a68:
    // 0x204a68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x204a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_204a6c:
    // 0x204a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204a70:
    // 0x204a70: 0xc08c208  jal         func_230820
label_204a74:
    if (ctx->pc == 0x204A74u) {
        ctx->pc = 0x204A78u;
        goto label_204a78;
    }
    ctx->pc = 0x204A70u;
    SET_GPR_U32(ctx, 31, 0x204A78u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x204A70u, 0x204A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A78u;
label_204a78:
    // 0x204a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204a7c:
    // 0x204a7c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204a80:
    // 0x204a80: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x204a80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
label_204a84:
    // 0x204a84: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x204a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_204a88:
    // 0x204a88: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x204a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_204a8c:
    // 0x204a8c: 0xc0858ac  jal         func_2162B0
label_204a90:
    if (ctx->pc == 0x204A90u) {
        ctx->pc = 0x204A94u;
        goto label_204a94;
    }
    ctx->pc = 0x204A8Cu;
    SET_GPR_U32(ctx, 31, 0x204A94u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x204A8Cu, 0x204A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A94u;
label_204a94:
    // 0x204a94: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204a98:
    // 0x204a98: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x204a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_204a9c:
    // 0x204a9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x204a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204aa0:
    // 0x204aa0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x204aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204aa4:
    // 0x204aa4: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x204aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_204aa8:
    // 0x204aa8: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x204aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
label_204aac:
    // 0x204aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x204aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204ab0:
    // 0x204ab0: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x204ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204ab4:
    // 0x204ab4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x204ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_204ab8:
    // 0x204ab8: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x204ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_204abc:
    // 0x204abc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x204abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_204ac0:
    // 0x204ac0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_204ac4:
    if (ctx->pc == 0x204AC4u) {
        ctx->pc = 0x204AC8u;
        goto label_204ac8;
    }
    ctx->pc = 0x204AC0u;
    {
        const bool branch_taken_0x204ac0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x204ac0) {
            ctx->pc = 0x204ADCu;
            goto label_204adc;
        }
    }
    ctx->pc = 0x204AC8u;
label_204ac8:
    // 0x204ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x204ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204acc:
    // 0x204acc: 0x0  nop
    ctx->pc = 0x204accu;
    // NOP
label_204ad0:
    // 0x204ad0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x204ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_204ad4:
    // 0x204ad4: 0x10000008  b           . + 4 + (0x8 << 2)
label_204ad8:
    if (ctx->pc == 0x204AD8u) {
        ctx->pc = 0x204ADCu;
        goto label_204adc;
    }
    ctx->pc = 0x204AD4u;
    {
        const bool branch_taken_0x204ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ad4) {
            ctx->pc = 0x204AF8u;
            goto label_204af8;
        }
    }
    ctx->pc = 0x204ADCu;
label_204adc:
    // 0x204adc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_204ae0:
    // 0x204ae0: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x204ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_204ae4:
    // 0x204ae4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x204ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_204ae8:
    // 0x204ae8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x204ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204aec:
    // 0x204aec: 0x0  nop
    ctx->pc = 0x204aecu;
    // NOP
label_204af0:
    // 0x204af0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x204af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_204af4:
    // 0x204af4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x204af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_204af8:
    // 0x204af8: 0x3c0543e0  lui         $a1, 0x43E0
    ctx->pc = 0x204af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17376 << 16));
label_204afc:
    // 0x204afc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x204afcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204b00:
    // 0x204b00: 0x0  nop
    ctx->pc = 0x204b00u;
    // NOP
label_204b04:
    // 0x204b04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x204b04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_204b08:
    // 0x204b08: 0x8fbe0150  lw          $fp, 0x150($sp)
    ctx->pc = 0x204b08u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_204b0c:
    // 0x204b0c: 0xc7c00074  lwc1        $f0, 0x74($fp)
    ctx->pc = 0x204b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204b10:
    // 0x204b10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x204b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_204b14:
    // 0x204b14: 0xe7c00074  swc1        $f0, 0x74($fp)
    ctx->pc = 0x204b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 116), bits); }
label_204b18:
    // 0x204b18: 0x32d200ff  andi        $s2, $s6, 0xFF
    ctx->pc = 0x204b18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_204b1c:
    // 0x204b1c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x204b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_204b20:
    // 0x204b20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204b24:
    // 0x204b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204b28:
    // 0x204b28: 0xc084e78  jal         func_2139E0
label_204b2c:
    if (ctx->pc == 0x204B2Cu) {
        ctx->pc = 0x204B30u;
        goto label_204b30;
    }
    ctx->pc = 0x204B28u;
    SET_GPR_U32(ctx, 31, 0x204B30u);
    ctx->pc = 0x2139E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2139E0u, 0x204B28u, 0x204B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B30u;
label_204b30:
    // 0x204b30: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x204b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204b34:
    // 0x204b34: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x204b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_204b38:
    // 0x204b38: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x204b38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_204b3c:
    // 0x204b3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x204b3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_204b40:
    // 0x204b40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x204b40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_204b44:
    // 0x204b44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x204b44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_204b48:
    // 0x204b48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x204b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204b4c:
    // 0x204b4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204b50:
    // 0x204b50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204b54:
    // 0x204b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204b58:
    // 0x204b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_204b5c:
    // 0x204b5c: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x204b5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_204b60:
    // 0x204b60: 0x3e00008  jr          $ra
label_204b64:
    if (ctx->pc == 0x204B64u) {
        ctx->pc = 0x204B68u;
        goto label_204b68;
    }
    ctx->pc = 0x204B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204B68u;
label_204b68:
    // 0x204b68: 0x0  nop
    ctx->pc = 0x204b68u;
    // NOP
label_204b6c:
    // 0x204b6c: 0x0  nop
    ctx->pc = 0x204b6cu;
    // NOP
label_204b70:
    // 0x204b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x204b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_204b74:
    // 0x204b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x204b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_204b78:
    // 0x204b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_204b7c:
    // 0x204b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204b80:
    // 0x204b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_204b84:
    // 0x204b84: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x204b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_204b88:
    // 0x204b88: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x204b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_204b8c:
    // 0x204b8c: 0x8c4200d8  lw          $v0, 0xD8($v0)
    ctx->pc = 0x204b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_204b90:
    // 0x204b90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_204b94:
    if (ctx->pc == 0x204B94u) {
        ctx->pc = 0x204B98u;
        goto label_204b98;
    }
    ctx->pc = 0x204B90u;
    {
        const bool branch_taken_0x204b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204b90) {
            ctx->pc = 0x204BC0u;
            goto label_204bc0;
        }
    }
    ctx->pc = 0x204B98u;
label_204b98:
    // 0x204b98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x204b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_204b9c:
    // 0x204b9c: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x204b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_204ba0:
    // 0x204ba0: 0xc081318  jal         func_204C60
label_204ba4:
    if (ctx->pc == 0x204BA4u) {
        ctx->pc = 0x204BA8u;
        goto label_204ba8;
    }
    ctx->pc = 0x204BA0u;
    SET_GPR_U32(ctx, 31, 0x204BA8u);
    ctx->pc = 0x204C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204C60u, 0x204BA0u, 0x204BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BA8u;
label_204ba8:
    // 0x204ba8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x204ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_204bac:
    // 0x204bac: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x204bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_204bb0:
    // 0x204bb0: 0xc119c5c  jal         func_467170
label_204bb4:
    if (ctx->pc == 0x204BB4u) {
        ctx->pc = 0x204BB8u;
        goto label_204bb8;
    }
    ctx->pc = 0x204BB0u;
    SET_GPR_U32(ctx, 31, 0x204BB8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x204BB0u, 0x204BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BB8u;
label_204bb8:
    // 0x204bb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_204bbc:
    // 0x204bbc: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x204bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
label_204bc0:
    // 0x204bc0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x204bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_204bc4:
    // 0x204bc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204bc8:
    // 0x204bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204bcc:
    // 0x204bcc: 0xc08f740  jal         func_23DD00
label_204bd0:
    if (ctx->pc == 0x204BD0u) {
        ctx->pc = 0x204BD4u;
        goto label_204bd4;
    }
    ctx->pc = 0x204BCCu;
    SET_GPR_U32(ctx, 31, 0x204BD4u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x204BCCu, 0x204BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BD4u;
label_204bd4:
    // 0x204bd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x204bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_204bd8:
    // 0x204bd8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x204bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_204bdc:
    // 0x204bdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204be0:
    // 0x204be0: 0xc0ac13c  jal         func_2B04F0
label_204be4:
    if (ctx->pc == 0x204BE4u) {
        ctx->pc = 0x204BE8u;
        goto label_204be8;
    }
    ctx->pc = 0x204BE0u;
    SET_GPR_U32(ctx, 31, 0x204BE8u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x204BE0u, 0x204BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BE8u;
label_204be8:
    // 0x204be8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x204be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_204bec:
    // 0x204bec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x204becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204bf0:
    // 0x204bf0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_204bf4:
    // 0x204bf4: 0xc085538  jal         func_2154E0
label_204bf8:
    if (ctx->pc == 0x204BF8u) {
        ctx->pc = 0x204BFCu;
        goto label_204bfc;
    }
    ctx->pc = 0x204BF4u;
    SET_GPR_U32(ctx, 31, 0x204BFCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x204BF4u, 0x204BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BFCu;
label_204bfc:
    // 0x204bfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x204bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204c00:
    // 0x204c00: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x204c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_204c04:
    // 0x204c04: 0xc081d2c  jal         func_2074B0
label_204c08:
    if (ctx->pc == 0x204C08u) {
        ctx->pc = 0x204C0Cu;
        goto label_204c0c;
    }
    ctx->pc = 0x204C04u;
    SET_GPR_U32(ctx, 31, 0x204C0Cu);
    ctx->pc = 0x2074B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074B0u, 0x204C04u, 0x204C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C0Cu;
label_204c0c:
    // 0x204c0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x204c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204c10:
    // 0x204c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_204c14:
    // 0x204c14: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x204c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_204c18:
    // 0x204c18: 0xc085538  jal         func_2154E0
label_204c1c:
    if (ctx->pc == 0x204C1Cu) {
        ctx->pc = 0x204C20u;
        goto label_204c20;
    }
    ctx->pc = 0x204C18u;
    SET_GPR_U32(ctx, 31, 0x204C20u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x204C18u, 0x204C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C20u;
label_204c20:
    // 0x204c20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204c24:
    // 0x204c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_204c28:
    // 0x204c28: 0xc0a88d4  jal         func_2A2350
label_204c2c:
    if (ctx->pc == 0x204C2Cu) {
        ctx->pc = 0x204C30u;
        goto label_204c30;
    }
    ctx->pc = 0x204C28u;
    SET_GPR_U32(ctx, 31, 0x204C30u);
    ctx->pc = 0x2A2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2350u, 0x204C28u, 0x204C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C30u;
label_204c30:
    // 0x204c30: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_204c34:
    // 0x204c34: 0xc064adc  jal         func_192B70
label_204c38:
    if (ctx->pc == 0x204C38u) {
        ctx->pc = 0x204C3Cu;
        goto label_204c3c;
    }
    ctx->pc = 0x204C34u;
    SET_GPR_U32(ctx, 31, 0x204C3Cu);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x204C34u, 0x204C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C3Cu;
label_204c3c:
    // 0x204c3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x204c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_204c40:
    // 0x204c40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_204c44:
    // 0x204c44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204c48:
    // 0x204c48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_204c4c:
    // 0x204c4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x204c4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_204c50:
    // 0x204c50: 0x3e00008  jr          $ra
label_204c54:
    if (ctx->pc == 0x204C54u) {
        ctx->pc = 0x204C58u;
        goto label_204c58;
    }
    ctx->pc = 0x204C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204C58u;
label_204c58:
    // 0x204c58: 0x0  nop
    ctx->pc = 0x204c58u;
    // NOP
label_204c5c:
    // 0x204c5c: 0x0  nop
    ctx->pc = 0x204c5cu;
    // NOP
    ctx->pc = 0x204c60u;
}
