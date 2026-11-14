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

// Function: sub_00204C60
// Address: 0x204c60 - 0x206120
void sub_00204C60_0x204c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204C60_0x204c60");
#endif

    switch (ctx->pc) {
        case 0x204c60u: goto label_204c60;
        case 0x204c64u: goto label_204c64;
        case 0x204c68u: goto label_204c68;
        case 0x204c6cu: goto label_204c6c;
        case 0x204c70u: goto label_204c70;
        case 0x204c74u: goto label_204c74;
        case 0x204c78u: goto label_204c78;
        case 0x204c7cu: goto label_204c7c;
        case 0x204c80u: goto label_204c80;
        case 0x204c84u: goto label_204c84;
        case 0x204c88u: goto label_204c88;
        case 0x204c8cu: goto label_204c8c;
        case 0x204c90u: goto label_204c90;
        case 0x204c94u: goto label_204c94;
        case 0x204c98u: goto label_204c98;
        case 0x204c9cu: goto label_204c9c;
        case 0x204ca0u: goto label_204ca0;
        case 0x204ca4u: goto label_204ca4;
        case 0x204ca8u: goto label_204ca8;
        case 0x204cacu: goto label_204cac;
        case 0x204cb0u: goto label_204cb0;
        case 0x204cb4u: goto label_204cb4;
        case 0x204cb8u: goto label_204cb8;
        case 0x204cbcu: goto label_204cbc;
        case 0x204cc0u: goto label_204cc0;
        case 0x204cc4u: goto label_204cc4;
        case 0x204cc8u: goto label_204cc8;
        case 0x204cccu: goto label_204ccc;
        case 0x204cd0u: goto label_204cd0;
        case 0x204cd4u: goto label_204cd4;
        case 0x204cd8u: goto label_204cd8;
        case 0x204cdcu: goto label_204cdc;
        case 0x204ce0u: goto label_204ce0;
        case 0x204ce4u: goto label_204ce4;
        case 0x204ce8u: goto label_204ce8;
        case 0x204cecu: goto label_204cec;
        case 0x204cf0u: goto label_204cf0;
        case 0x204cf4u: goto label_204cf4;
        case 0x204cf8u: goto label_204cf8;
        case 0x204cfcu: goto label_204cfc;
        case 0x204d00u: goto label_204d00;
        case 0x204d04u: goto label_204d04;
        case 0x204d08u: goto label_204d08;
        case 0x204d0cu: goto label_204d0c;
        case 0x204d10u: goto label_204d10;
        case 0x204d14u: goto label_204d14;
        case 0x204d18u: goto label_204d18;
        case 0x204d1cu: goto label_204d1c;
        case 0x204d20u: goto label_204d20;
        case 0x204d24u: goto label_204d24;
        case 0x204d28u: goto label_204d28;
        case 0x204d2cu: goto label_204d2c;
        case 0x204d30u: goto label_204d30;
        case 0x204d34u: goto label_204d34;
        case 0x204d38u: goto label_204d38;
        case 0x204d3cu: goto label_204d3c;
        case 0x204d40u: goto label_204d40;
        case 0x204d44u: goto label_204d44;
        case 0x204d48u: goto label_204d48;
        case 0x204d4cu: goto label_204d4c;
        case 0x204d50u: goto label_204d50;
        case 0x204d54u: goto label_204d54;
        case 0x204d58u: goto label_204d58;
        case 0x204d5cu: goto label_204d5c;
        case 0x204d60u: goto label_204d60;
        case 0x204d64u: goto label_204d64;
        case 0x204d68u: goto label_204d68;
        case 0x204d6cu: goto label_204d6c;
        case 0x204d70u: goto label_204d70;
        case 0x204d74u: goto label_204d74;
        case 0x204d78u: goto label_204d78;
        case 0x204d7cu: goto label_204d7c;
        case 0x204d80u: goto label_204d80;
        case 0x204d84u: goto label_204d84;
        case 0x204d88u: goto label_204d88;
        case 0x204d8cu: goto label_204d8c;
        case 0x204d90u: goto label_204d90;
        case 0x204d94u: goto label_204d94;
        case 0x204d98u: goto label_204d98;
        case 0x204d9cu: goto label_204d9c;
        case 0x204da0u: goto label_204da0;
        case 0x204da4u: goto label_204da4;
        case 0x204da8u: goto label_204da8;
        case 0x204dacu: goto label_204dac;
        case 0x204db0u: goto label_204db0;
        case 0x204db4u: goto label_204db4;
        case 0x204db8u: goto label_204db8;
        case 0x204dbcu: goto label_204dbc;
        case 0x204dc0u: goto label_204dc0;
        case 0x204dc4u: goto label_204dc4;
        case 0x204dc8u: goto label_204dc8;
        case 0x204dccu: goto label_204dcc;
        case 0x204dd0u: goto label_204dd0;
        case 0x204dd4u: goto label_204dd4;
        case 0x204dd8u: goto label_204dd8;
        case 0x204ddcu: goto label_204ddc;
        case 0x204de0u: goto label_204de0;
        case 0x204de4u: goto label_204de4;
        case 0x204de8u: goto label_204de8;
        case 0x204decu: goto label_204dec;
        case 0x204df0u: goto label_204df0;
        case 0x204df4u: goto label_204df4;
        case 0x204df8u: goto label_204df8;
        case 0x204dfcu: goto label_204dfc;
        case 0x204e00u: goto label_204e00;
        case 0x204e04u: goto label_204e04;
        case 0x204e08u: goto label_204e08;
        case 0x204e0cu: goto label_204e0c;
        case 0x204e10u: goto label_204e10;
        case 0x204e14u: goto label_204e14;
        case 0x204e18u: goto label_204e18;
        case 0x204e1cu: goto label_204e1c;
        case 0x204e20u: goto label_204e20;
        case 0x204e24u: goto label_204e24;
        case 0x204e28u: goto label_204e28;
        case 0x204e2cu: goto label_204e2c;
        case 0x204e30u: goto label_204e30;
        case 0x204e34u: goto label_204e34;
        case 0x204e38u: goto label_204e38;
        case 0x204e3cu: goto label_204e3c;
        case 0x204e40u: goto label_204e40;
        case 0x204e44u: goto label_204e44;
        case 0x204e48u: goto label_204e48;
        case 0x204e4cu: goto label_204e4c;
        case 0x204e50u: goto label_204e50;
        case 0x204e54u: goto label_204e54;
        case 0x204e58u: goto label_204e58;
        case 0x204e5cu: goto label_204e5c;
        case 0x204e60u: goto label_204e60;
        case 0x204e64u: goto label_204e64;
        case 0x204e68u: goto label_204e68;
        case 0x204e6cu: goto label_204e6c;
        case 0x204e70u: goto label_204e70;
        case 0x204e74u: goto label_204e74;
        case 0x204e78u: goto label_204e78;
        case 0x204e7cu: goto label_204e7c;
        case 0x204e80u: goto label_204e80;
        case 0x204e84u: goto label_204e84;
        case 0x204e88u: goto label_204e88;
        case 0x204e8cu: goto label_204e8c;
        case 0x204e90u: goto label_204e90;
        case 0x204e94u: goto label_204e94;
        case 0x204e98u: goto label_204e98;
        case 0x204e9cu: goto label_204e9c;
        case 0x204ea0u: goto label_204ea0;
        case 0x204ea4u: goto label_204ea4;
        case 0x204ea8u: goto label_204ea8;
        case 0x204eacu: goto label_204eac;
        case 0x204eb0u: goto label_204eb0;
        case 0x204eb4u: goto label_204eb4;
        case 0x204eb8u: goto label_204eb8;
        case 0x204ebcu: goto label_204ebc;
        case 0x204ec0u: goto label_204ec0;
        case 0x204ec4u: goto label_204ec4;
        case 0x204ec8u: goto label_204ec8;
        case 0x204eccu: goto label_204ecc;
        case 0x204ed0u: goto label_204ed0;
        case 0x204ed4u: goto label_204ed4;
        case 0x204ed8u: goto label_204ed8;
        case 0x204edcu: goto label_204edc;
        case 0x204ee0u: goto label_204ee0;
        case 0x204ee4u: goto label_204ee4;
        case 0x204ee8u: goto label_204ee8;
        case 0x204eecu: goto label_204eec;
        case 0x204ef0u: goto label_204ef0;
        case 0x204ef4u: goto label_204ef4;
        case 0x204ef8u: goto label_204ef8;
        case 0x204efcu: goto label_204efc;
        case 0x204f00u: goto label_204f00;
        case 0x204f04u: goto label_204f04;
        case 0x204f08u: goto label_204f08;
        case 0x204f0cu: goto label_204f0c;
        case 0x204f10u: goto label_204f10;
        case 0x204f14u: goto label_204f14;
        case 0x204f18u: goto label_204f18;
        case 0x204f1cu: goto label_204f1c;
        case 0x204f20u: goto label_204f20;
        case 0x204f24u: goto label_204f24;
        case 0x204f28u: goto label_204f28;
        case 0x204f2cu: goto label_204f2c;
        case 0x204f30u: goto label_204f30;
        case 0x204f34u: goto label_204f34;
        case 0x204f38u: goto label_204f38;
        case 0x204f3cu: goto label_204f3c;
        case 0x204f40u: goto label_204f40;
        case 0x204f44u: goto label_204f44;
        case 0x204f48u: goto label_204f48;
        case 0x204f4cu: goto label_204f4c;
        case 0x204f50u: goto label_204f50;
        case 0x204f54u: goto label_204f54;
        case 0x204f58u: goto label_204f58;
        case 0x204f5cu: goto label_204f5c;
        case 0x204f60u: goto label_204f60;
        case 0x204f64u: goto label_204f64;
        case 0x204f68u: goto label_204f68;
        case 0x204f6cu: goto label_204f6c;
        case 0x204f70u: goto label_204f70;
        case 0x204f74u: goto label_204f74;
        case 0x204f78u: goto label_204f78;
        case 0x204f7cu: goto label_204f7c;
        case 0x204f80u: goto label_204f80;
        case 0x204f84u: goto label_204f84;
        case 0x204f88u: goto label_204f88;
        case 0x204f8cu: goto label_204f8c;
        case 0x204f90u: goto label_204f90;
        case 0x204f94u: goto label_204f94;
        case 0x204f98u: goto label_204f98;
        case 0x204f9cu: goto label_204f9c;
        case 0x204fa0u: goto label_204fa0;
        case 0x204fa4u: goto label_204fa4;
        case 0x204fa8u: goto label_204fa8;
        case 0x204facu: goto label_204fac;
        case 0x204fb0u: goto label_204fb0;
        case 0x204fb4u: goto label_204fb4;
        case 0x204fb8u: goto label_204fb8;
        case 0x204fbcu: goto label_204fbc;
        case 0x204fc0u: goto label_204fc0;
        case 0x204fc4u: goto label_204fc4;
        case 0x204fc8u: goto label_204fc8;
        case 0x204fccu: goto label_204fcc;
        case 0x204fd0u: goto label_204fd0;
        case 0x204fd4u: goto label_204fd4;
        case 0x204fd8u: goto label_204fd8;
        case 0x204fdcu: goto label_204fdc;
        case 0x204fe0u: goto label_204fe0;
        case 0x204fe4u: goto label_204fe4;
        case 0x204fe8u: goto label_204fe8;
        case 0x204fecu: goto label_204fec;
        case 0x204ff0u: goto label_204ff0;
        case 0x204ff4u: goto label_204ff4;
        case 0x204ff8u: goto label_204ff8;
        case 0x204ffcu: goto label_204ffc;
        case 0x205000u: goto label_205000;
        case 0x205004u: goto label_205004;
        case 0x205008u: goto label_205008;
        case 0x20500cu: goto label_20500c;
        case 0x205010u: goto label_205010;
        case 0x205014u: goto label_205014;
        case 0x205018u: goto label_205018;
        case 0x20501cu: goto label_20501c;
        case 0x205020u: goto label_205020;
        case 0x205024u: goto label_205024;
        case 0x205028u: goto label_205028;
        case 0x20502cu: goto label_20502c;
        case 0x205030u: goto label_205030;
        case 0x205034u: goto label_205034;
        case 0x205038u: goto label_205038;
        case 0x20503cu: goto label_20503c;
        case 0x205040u: goto label_205040;
        case 0x205044u: goto label_205044;
        case 0x205048u: goto label_205048;
        case 0x20504cu: goto label_20504c;
        case 0x205050u: goto label_205050;
        case 0x205054u: goto label_205054;
        case 0x205058u: goto label_205058;
        case 0x20505cu: goto label_20505c;
        case 0x205060u: goto label_205060;
        case 0x205064u: goto label_205064;
        case 0x205068u: goto label_205068;
        case 0x20506cu: goto label_20506c;
        case 0x205070u: goto label_205070;
        case 0x205074u: goto label_205074;
        case 0x205078u: goto label_205078;
        case 0x20507cu: goto label_20507c;
        case 0x205080u: goto label_205080;
        case 0x205084u: goto label_205084;
        case 0x205088u: goto label_205088;
        case 0x20508cu: goto label_20508c;
        case 0x205090u: goto label_205090;
        case 0x205094u: goto label_205094;
        case 0x205098u: goto label_205098;
        case 0x20509cu: goto label_20509c;
        case 0x2050a0u: goto label_2050a0;
        case 0x2050a4u: goto label_2050a4;
        case 0x2050a8u: goto label_2050a8;
        case 0x2050acu: goto label_2050ac;
        case 0x2050b0u: goto label_2050b0;
        case 0x2050b4u: goto label_2050b4;
        case 0x2050b8u: goto label_2050b8;
        case 0x2050bcu: goto label_2050bc;
        case 0x2050c0u: goto label_2050c0;
        case 0x2050c4u: goto label_2050c4;
        case 0x2050c8u: goto label_2050c8;
        case 0x2050ccu: goto label_2050cc;
        case 0x2050d0u: goto label_2050d0;
        case 0x2050d4u: goto label_2050d4;
        case 0x2050d8u: goto label_2050d8;
        case 0x2050dcu: goto label_2050dc;
        case 0x2050e0u: goto label_2050e0;
        case 0x2050e4u: goto label_2050e4;
        case 0x2050e8u: goto label_2050e8;
        case 0x2050ecu: goto label_2050ec;
        case 0x2050f0u: goto label_2050f0;
        case 0x2050f4u: goto label_2050f4;
        case 0x2050f8u: goto label_2050f8;
        case 0x2050fcu: goto label_2050fc;
        case 0x205100u: goto label_205100;
        case 0x205104u: goto label_205104;
        case 0x205108u: goto label_205108;
        case 0x20510cu: goto label_20510c;
        case 0x205110u: goto label_205110;
        case 0x205114u: goto label_205114;
        case 0x205118u: goto label_205118;
        case 0x20511cu: goto label_20511c;
        case 0x205120u: goto label_205120;
        case 0x205124u: goto label_205124;
        case 0x205128u: goto label_205128;
        case 0x20512cu: goto label_20512c;
        case 0x205130u: goto label_205130;
        case 0x205134u: goto label_205134;
        case 0x205138u: goto label_205138;
        case 0x20513cu: goto label_20513c;
        case 0x205140u: goto label_205140;
        case 0x205144u: goto label_205144;
        case 0x205148u: goto label_205148;
        case 0x20514cu: goto label_20514c;
        case 0x205150u: goto label_205150;
        case 0x205154u: goto label_205154;
        case 0x205158u: goto label_205158;
        case 0x20515cu: goto label_20515c;
        case 0x205160u: goto label_205160;
        case 0x205164u: goto label_205164;
        case 0x205168u: goto label_205168;
        case 0x20516cu: goto label_20516c;
        case 0x205170u: goto label_205170;
        case 0x205174u: goto label_205174;
        case 0x205178u: goto label_205178;
        case 0x20517cu: goto label_20517c;
        case 0x205180u: goto label_205180;
        case 0x205184u: goto label_205184;
        case 0x205188u: goto label_205188;
        case 0x20518cu: goto label_20518c;
        case 0x205190u: goto label_205190;
        case 0x205194u: goto label_205194;
        case 0x205198u: goto label_205198;
        case 0x20519cu: goto label_20519c;
        case 0x2051a0u: goto label_2051a0;
        case 0x2051a4u: goto label_2051a4;
        case 0x2051a8u: goto label_2051a8;
        case 0x2051acu: goto label_2051ac;
        case 0x2051b0u: goto label_2051b0;
        case 0x2051b4u: goto label_2051b4;
        case 0x2051b8u: goto label_2051b8;
        case 0x2051bcu: goto label_2051bc;
        case 0x2051c0u: goto label_2051c0;
        case 0x2051c4u: goto label_2051c4;
        case 0x2051c8u: goto label_2051c8;
        case 0x2051ccu: goto label_2051cc;
        case 0x2051d0u: goto label_2051d0;
        case 0x2051d4u: goto label_2051d4;
        case 0x2051d8u: goto label_2051d8;
        case 0x2051dcu: goto label_2051dc;
        case 0x2051e0u: goto label_2051e0;
        case 0x2051e4u: goto label_2051e4;
        case 0x2051e8u: goto label_2051e8;
        case 0x2051ecu: goto label_2051ec;
        case 0x2051f0u: goto label_2051f0;
        case 0x2051f4u: goto label_2051f4;
        case 0x2051f8u: goto label_2051f8;
        case 0x2051fcu: goto label_2051fc;
        case 0x205200u: goto label_205200;
        case 0x205204u: goto label_205204;
        case 0x205208u: goto label_205208;
        case 0x20520cu: goto label_20520c;
        case 0x205210u: goto label_205210;
        case 0x205214u: goto label_205214;
        case 0x205218u: goto label_205218;
        case 0x20521cu: goto label_20521c;
        case 0x205220u: goto label_205220;
        case 0x205224u: goto label_205224;
        case 0x205228u: goto label_205228;
        case 0x20522cu: goto label_20522c;
        case 0x205230u: goto label_205230;
        case 0x205234u: goto label_205234;
        case 0x205238u: goto label_205238;
        case 0x20523cu: goto label_20523c;
        case 0x205240u: goto label_205240;
        case 0x205244u: goto label_205244;
        case 0x205248u: goto label_205248;
        case 0x20524cu: goto label_20524c;
        case 0x205250u: goto label_205250;
        case 0x205254u: goto label_205254;
        case 0x205258u: goto label_205258;
        case 0x20525cu: goto label_20525c;
        case 0x205260u: goto label_205260;
        case 0x205264u: goto label_205264;
        case 0x205268u: goto label_205268;
        case 0x20526cu: goto label_20526c;
        case 0x205270u: goto label_205270;
        case 0x205274u: goto label_205274;
        case 0x205278u: goto label_205278;
        case 0x20527cu: goto label_20527c;
        case 0x205280u: goto label_205280;
        case 0x205284u: goto label_205284;
        case 0x205288u: goto label_205288;
        case 0x20528cu: goto label_20528c;
        case 0x205290u: goto label_205290;
        case 0x205294u: goto label_205294;
        case 0x205298u: goto label_205298;
        case 0x20529cu: goto label_20529c;
        case 0x2052a0u: goto label_2052a0;
        case 0x2052a4u: goto label_2052a4;
        case 0x2052a8u: goto label_2052a8;
        case 0x2052acu: goto label_2052ac;
        case 0x2052b0u: goto label_2052b0;
        case 0x2052b4u: goto label_2052b4;
        case 0x2052b8u: goto label_2052b8;
        case 0x2052bcu: goto label_2052bc;
        case 0x2052c0u: goto label_2052c0;
        case 0x2052c4u: goto label_2052c4;
        case 0x2052c8u: goto label_2052c8;
        case 0x2052ccu: goto label_2052cc;
        case 0x2052d0u: goto label_2052d0;
        case 0x2052d4u: goto label_2052d4;
        case 0x2052d8u: goto label_2052d8;
        case 0x2052dcu: goto label_2052dc;
        case 0x2052e0u: goto label_2052e0;
        case 0x2052e4u: goto label_2052e4;
        case 0x2052e8u: goto label_2052e8;
        case 0x2052ecu: goto label_2052ec;
        case 0x2052f0u: goto label_2052f0;
        case 0x2052f4u: goto label_2052f4;
        case 0x2052f8u: goto label_2052f8;
        case 0x2052fcu: goto label_2052fc;
        case 0x205300u: goto label_205300;
        case 0x205304u: goto label_205304;
        case 0x205308u: goto label_205308;
        case 0x20530cu: goto label_20530c;
        case 0x205310u: goto label_205310;
        case 0x205314u: goto label_205314;
        case 0x205318u: goto label_205318;
        case 0x20531cu: goto label_20531c;
        case 0x205320u: goto label_205320;
        case 0x205324u: goto label_205324;
        case 0x205328u: goto label_205328;
        case 0x20532cu: goto label_20532c;
        case 0x205330u: goto label_205330;
        case 0x205334u: goto label_205334;
        case 0x205338u: goto label_205338;
        case 0x20533cu: goto label_20533c;
        case 0x205340u: goto label_205340;
        case 0x205344u: goto label_205344;
        case 0x205348u: goto label_205348;
        case 0x20534cu: goto label_20534c;
        case 0x205350u: goto label_205350;
        case 0x205354u: goto label_205354;
        case 0x205358u: goto label_205358;
        case 0x20535cu: goto label_20535c;
        case 0x205360u: goto label_205360;
        case 0x205364u: goto label_205364;
        case 0x205368u: goto label_205368;
        case 0x20536cu: goto label_20536c;
        case 0x205370u: goto label_205370;
        case 0x205374u: goto label_205374;
        case 0x205378u: goto label_205378;
        case 0x20537cu: goto label_20537c;
        case 0x205380u: goto label_205380;
        case 0x205384u: goto label_205384;
        case 0x205388u: goto label_205388;
        case 0x20538cu: goto label_20538c;
        case 0x205390u: goto label_205390;
        case 0x205394u: goto label_205394;
        case 0x205398u: goto label_205398;
        case 0x20539cu: goto label_20539c;
        case 0x2053a0u: goto label_2053a0;
        case 0x2053a4u: goto label_2053a4;
        case 0x2053a8u: goto label_2053a8;
        case 0x2053acu: goto label_2053ac;
        case 0x2053b0u: goto label_2053b0;
        case 0x2053b4u: goto label_2053b4;
        case 0x2053b8u: goto label_2053b8;
        case 0x2053bcu: goto label_2053bc;
        case 0x2053c0u: goto label_2053c0;
        case 0x2053c4u: goto label_2053c4;
        case 0x2053c8u: goto label_2053c8;
        case 0x2053ccu: goto label_2053cc;
        case 0x2053d0u: goto label_2053d0;
        case 0x2053d4u: goto label_2053d4;
        case 0x2053d8u: goto label_2053d8;
        case 0x2053dcu: goto label_2053dc;
        case 0x2053e0u: goto label_2053e0;
        case 0x2053e4u: goto label_2053e4;
        case 0x2053e8u: goto label_2053e8;
        case 0x2053ecu: goto label_2053ec;
        case 0x2053f0u: goto label_2053f0;
        case 0x2053f4u: goto label_2053f4;
        case 0x2053f8u: goto label_2053f8;
        case 0x2053fcu: goto label_2053fc;
        case 0x205400u: goto label_205400;
        case 0x205404u: goto label_205404;
        case 0x205408u: goto label_205408;
        case 0x20540cu: goto label_20540c;
        case 0x205410u: goto label_205410;
        case 0x205414u: goto label_205414;
        case 0x205418u: goto label_205418;
        case 0x20541cu: goto label_20541c;
        case 0x205420u: goto label_205420;
        case 0x205424u: goto label_205424;
        case 0x205428u: goto label_205428;
        case 0x20542cu: goto label_20542c;
        case 0x205430u: goto label_205430;
        case 0x205434u: goto label_205434;
        case 0x205438u: goto label_205438;
        case 0x20543cu: goto label_20543c;
        case 0x205440u: goto label_205440;
        case 0x205444u: goto label_205444;
        case 0x205448u: goto label_205448;
        case 0x20544cu: goto label_20544c;
        case 0x205450u: goto label_205450;
        case 0x205454u: goto label_205454;
        case 0x205458u: goto label_205458;
        case 0x20545cu: goto label_20545c;
        case 0x205460u: goto label_205460;
        case 0x205464u: goto label_205464;
        case 0x205468u: goto label_205468;
        case 0x20546cu: goto label_20546c;
        case 0x205470u: goto label_205470;
        case 0x205474u: goto label_205474;
        case 0x205478u: goto label_205478;
        case 0x20547cu: goto label_20547c;
        case 0x205480u: goto label_205480;
        case 0x205484u: goto label_205484;
        case 0x205488u: goto label_205488;
        case 0x20548cu: goto label_20548c;
        case 0x205490u: goto label_205490;
        case 0x205494u: goto label_205494;
        case 0x205498u: goto label_205498;
        case 0x20549cu: goto label_20549c;
        case 0x2054a0u: goto label_2054a0;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054a8u: goto label_2054a8;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b0u: goto label_2054b0;
        case 0x2054b4u: goto label_2054b4;
        case 0x2054b8u: goto label_2054b8;
        case 0x2054bcu: goto label_2054bc;
        case 0x2054c0u: goto label_2054c0;
        case 0x2054c4u: goto label_2054c4;
        case 0x2054c8u: goto label_2054c8;
        case 0x2054ccu: goto label_2054cc;
        case 0x2054d0u: goto label_2054d0;
        case 0x2054d4u: goto label_2054d4;
        case 0x2054d8u: goto label_2054d8;
        case 0x2054dcu: goto label_2054dc;
        case 0x2054e0u: goto label_2054e0;
        case 0x2054e4u: goto label_2054e4;
        case 0x2054e8u: goto label_2054e8;
        case 0x2054ecu: goto label_2054ec;
        case 0x2054f0u: goto label_2054f0;
        case 0x2054f4u: goto label_2054f4;
        case 0x2054f8u: goto label_2054f8;
        case 0x2054fcu: goto label_2054fc;
        case 0x205500u: goto label_205500;
        case 0x205504u: goto label_205504;
        case 0x205508u: goto label_205508;
        case 0x20550cu: goto label_20550c;
        case 0x205510u: goto label_205510;
        case 0x205514u: goto label_205514;
        case 0x205518u: goto label_205518;
        case 0x20551cu: goto label_20551c;
        case 0x205520u: goto label_205520;
        case 0x205524u: goto label_205524;
        case 0x205528u: goto label_205528;
        case 0x20552cu: goto label_20552c;
        case 0x205530u: goto label_205530;
        case 0x205534u: goto label_205534;
        case 0x205538u: goto label_205538;
        case 0x20553cu: goto label_20553c;
        case 0x205540u: goto label_205540;
        case 0x205544u: goto label_205544;
        case 0x205548u: goto label_205548;
        case 0x20554cu: goto label_20554c;
        case 0x205550u: goto label_205550;
        case 0x205554u: goto label_205554;
        case 0x205558u: goto label_205558;
        case 0x20555cu: goto label_20555c;
        case 0x205560u: goto label_205560;
        case 0x205564u: goto label_205564;
        case 0x205568u: goto label_205568;
        case 0x20556cu: goto label_20556c;
        case 0x205570u: goto label_205570;
        case 0x205574u: goto label_205574;
        case 0x205578u: goto label_205578;
        case 0x20557cu: goto label_20557c;
        case 0x205580u: goto label_205580;
        case 0x205584u: goto label_205584;
        case 0x205588u: goto label_205588;
        case 0x20558cu: goto label_20558c;
        case 0x205590u: goto label_205590;
        case 0x205594u: goto label_205594;
        case 0x205598u: goto label_205598;
        case 0x20559cu: goto label_20559c;
        case 0x2055a0u: goto label_2055a0;
        case 0x2055a4u: goto label_2055a4;
        case 0x2055a8u: goto label_2055a8;
        case 0x2055acu: goto label_2055ac;
        case 0x2055b0u: goto label_2055b0;
        case 0x2055b4u: goto label_2055b4;
        case 0x2055b8u: goto label_2055b8;
        case 0x2055bcu: goto label_2055bc;
        case 0x2055c0u: goto label_2055c0;
        case 0x2055c4u: goto label_2055c4;
        case 0x2055c8u: goto label_2055c8;
        case 0x2055ccu: goto label_2055cc;
        case 0x2055d0u: goto label_2055d0;
        case 0x2055d4u: goto label_2055d4;
        case 0x2055d8u: goto label_2055d8;
        case 0x2055dcu: goto label_2055dc;
        case 0x2055e0u: goto label_2055e0;
        case 0x2055e4u: goto label_2055e4;
        case 0x2055e8u: goto label_2055e8;
        case 0x2055ecu: goto label_2055ec;
        case 0x2055f0u: goto label_2055f0;
        case 0x2055f4u: goto label_2055f4;
        case 0x2055f8u: goto label_2055f8;
        case 0x2055fcu: goto label_2055fc;
        case 0x205600u: goto label_205600;
        case 0x205604u: goto label_205604;
        case 0x205608u: goto label_205608;
        case 0x20560cu: goto label_20560c;
        case 0x205610u: goto label_205610;
        case 0x205614u: goto label_205614;
        case 0x205618u: goto label_205618;
        case 0x20561cu: goto label_20561c;
        case 0x205620u: goto label_205620;
        case 0x205624u: goto label_205624;
        case 0x205628u: goto label_205628;
        case 0x20562cu: goto label_20562c;
        case 0x205630u: goto label_205630;
        case 0x205634u: goto label_205634;
        case 0x205638u: goto label_205638;
        case 0x20563cu: goto label_20563c;
        case 0x205640u: goto label_205640;
        case 0x205644u: goto label_205644;
        case 0x205648u: goto label_205648;
        case 0x20564cu: goto label_20564c;
        case 0x205650u: goto label_205650;
        case 0x205654u: goto label_205654;
        case 0x205658u: goto label_205658;
        case 0x20565cu: goto label_20565c;
        case 0x205660u: goto label_205660;
        case 0x205664u: goto label_205664;
        case 0x205668u: goto label_205668;
        case 0x20566cu: goto label_20566c;
        case 0x205670u: goto label_205670;
        case 0x205674u: goto label_205674;
        case 0x205678u: goto label_205678;
        case 0x20567cu: goto label_20567c;
        case 0x205680u: goto label_205680;
        case 0x205684u: goto label_205684;
        case 0x205688u: goto label_205688;
        case 0x20568cu: goto label_20568c;
        case 0x205690u: goto label_205690;
        case 0x205694u: goto label_205694;
        case 0x205698u: goto label_205698;
        case 0x20569cu: goto label_20569c;
        case 0x2056a0u: goto label_2056a0;
        case 0x2056a4u: goto label_2056a4;
        case 0x2056a8u: goto label_2056a8;
        case 0x2056acu: goto label_2056ac;
        case 0x2056b0u: goto label_2056b0;
        case 0x2056b4u: goto label_2056b4;
        case 0x2056b8u: goto label_2056b8;
        case 0x2056bcu: goto label_2056bc;
        case 0x2056c0u: goto label_2056c0;
        case 0x2056c4u: goto label_2056c4;
        case 0x2056c8u: goto label_2056c8;
        case 0x2056ccu: goto label_2056cc;
        case 0x2056d0u: goto label_2056d0;
        case 0x2056d4u: goto label_2056d4;
        case 0x2056d8u: goto label_2056d8;
        case 0x2056dcu: goto label_2056dc;
        case 0x2056e0u: goto label_2056e0;
        case 0x2056e4u: goto label_2056e4;
        case 0x2056e8u: goto label_2056e8;
        case 0x2056ecu: goto label_2056ec;
        case 0x2056f0u: goto label_2056f0;
        case 0x2056f4u: goto label_2056f4;
        case 0x2056f8u: goto label_2056f8;
        case 0x2056fcu: goto label_2056fc;
        case 0x205700u: goto label_205700;
        case 0x205704u: goto label_205704;
        case 0x205708u: goto label_205708;
        case 0x20570cu: goto label_20570c;
        case 0x205710u: goto label_205710;
        case 0x205714u: goto label_205714;
        case 0x205718u: goto label_205718;
        case 0x20571cu: goto label_20571c;
        case 0x205720u: goto label_205720;
        case 0x205724u: goto label_205724;
        case 0x205728u: goto label_205728;
        case 0x20572cu: goto label_20572c;
        case 0x205730u: goto label_205730;
        case 0x205734u: goto label_205734;
        case 0x205738u: goto label_205738;
        case 0x20573cu: goto label_20573c;
        case 0x205740u: goto label_205740;
        case 0x205744u: goto label_205744;
        case 0x205748u: goto label_205748;
        case 0x20574cu: goto label_20574c;
        case 0x205750u: goto label_205750;
        case 0x205754u: goto label_205754;
        case 0x205758u: goto label_205758;
        case 0x20575cu: goto label_20575c;
        case 0x205760u: goto label_205760;
        case 0x205764u: goto label_205764;
        case 0x205768u: goto label_205768;
        case 0x20576cu: goto label_20576c;
        case 0x205770u: goto label_205770;
        case 0x205774u: goto label_205774;
        case 0x205778u: goto label_205778;
        case 0x20577cu: goto label_20577c;
        case 0x205780u: goto label_205780;
        case 0x205784u: goto label_205784;
        case 0x205788u: goto label_205788;
        case 0x20578cu: goto label_20578c;
        case 0x205790u: goto label_205790;
        case 0x205794u: goto label_205794;
        case 0x205798u: goto label_205798;
        case 0x20579cu: goto label_20579c;
        case 0x2057a0u: goto label_2057a0;
        case 0x2057a4u: goto label_2057a4;
        case 0x2057a8u: goto label_2057a8;
        case 0x2057acu: goto label_2057ac;
        case 0x2057b0u: goto label_2057b0;
        case 0x2057b4u: goto label_2057b4;
        case 0x2057b8u: goto label_2057b8;
        case 0x2057bcu: goto label_2057bc;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057c4u: goto label_2057c4;
        case 0x2057c8u: goto label_2057c8;
        case 0x2057ccu: goto label_2057cc;
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d4u: goto label_2057d4;
        case 0x2057d8u: goto label_2057d8;
        case 0x2057dcu: goto label_2057dc;
        case 0x2057e0u: goto label_2057e0;
        case 0x2057e4u: goto label_2057e4;
        case 0x2057e8u: goto label_2057e8;
        case 0x2057ecu: goto label_2057ec;
        case 0x2057f0u: goto label_2057f0;
        case 0x2057f4u: goto label_2057f4;
        case 0x2057f8u: goto label_2057f8;
        case 0x2057fcu: goto label_2057fc;
        case 0x205800u: goto label_205800;
        case 0x205804u: goto label_205804;
        case 0x205808u: goto label_205808;
        case 0x20580cu: goto label_20580c;
        case 0x205810u: goto label_205810;
        case 0x205814u: goto label_205814;
        case 0x205818u: goto label_205818;
        case 0x20581cu: goto label_20581c;
        case 0x205820u: goto label_205820;
        case 0x205824u: goto label_205824;
        case 0x205828u: goto label_205828;
        case 0x20582cu: goto label_20582c;
        case 0x205830u: goto label_205830;
        case 0x205834u: goto label_205834;
        case 0x205838u: goto label_205838;
        case 0x20583cu: goto label_20583c;
        case 0x205840u: goto label_205840;
        case 0x205844u: goto label_205844;
        case 0x205848u: goto label_205848;
        case 0x20584cu: goto label_20584c;
        case 0x205850u: goto label_205850;
        case 0x205854u: goto label_205854;
        case 0x205858u: goto label_205858;
        case 0x20585cu: goto label_20585c;
        case 0x205860u: goto label_205860;
        case 0x205864u: goto label_205864;
        case 0x205868u: goto label_205868;
        case 0x20586cu: goto label_20586c;
        case 0x205870u: goto label_205870;
        case 0x205874u: goto label_205874;
        case 0x205878u: goto label_205878;
        case 0x20587cu: goto label_20587c;
        case 0x205880u: goto label_205880;
        case 0x205884u: goto label_205884;
        case 0x205888u: goto label_205888;
        case 0x20588cu: goto label_20588c;
        case 0x205890u: goto label_205890;
        case 0x205894u: goto label_205894;
        case 0x205898u: goto label_205898;
        case 0x20589cu: goto label_20589c;
        case 0x2058a0u: goto label_2058a0;
        case 0x2058a4u: goto label_2058a4;
        case 0x2058a8u: goto label_2058a8;
        case 0x2058acu: goto label_2058ac;
        case 0x2058b0u: goto label_2058b0;
        case 0x2058b4u: goto label_2058b4;
        case 0x2058b8u: goto label_2058b8;
        case 0x2058bcu: goto label_2058bc;
        case 0x2058c0u: goto label_2058c0;
        case 0x2058c4u: goto label_2058c4;
        case 0x2058c8u: goto label_2058c8;
        case 0x2058ccu: goto label_2058cc;
        case 0x2058d0u: goto label_2058d0;
        case 0x2058d4u: goto label_2058d4;
        case 0x2058d8u: goto label_2058d8;
        case 0x2058dcu: goto label_2058dc;
        case 0x2058e0u: goto label_2058e0;
        case 0x2058e4u: goto label_2058e4;
        case 0x2058e8u: goto label_2058e8;
        case 0x2058ecu: goto label_2058ec;
        case 0x2058f0u: goto label_2058f0;
        case 0x2058f4u: goto label_2058f4;
        case 0x2058f8u: goto label_2058f8;
        case 0x2058fcu: goto label_2058fc;
        case 0x205900u: goto label_205900;
        case 0x205904u: goto label_205904;
        case 0x205908u: goto label_205908;
        case 0x20590cu: goto label_20590c;
        case 0x205910u: goto label_205910;
        case 0x205914u: goto label_205914;
        case 0x205918u: goto label_205918;
        case 0x20591cu: goto label_20591c;
        case 0x205920u: goto label_205920;
        case 0x205924u: goto label_205924;
        case 0x205928u: goto label_205928;
        case 0x20592cu: goto label_20592c;
        case 0x205930u: goto label_205930;
        case 0x205934u: goto label_205934;
        case 0x205938u: goto label_205938;
        case 0x20593cu: goto label_20593c;
        case 0x205940u: goto label_205940;
        case 0x205944u: goto label_205944;
        case 0x205948u: goto label_205948;
        case 0x20594cu: goto label_20594c;
        case 0x205950u: goto label_205950;
        case 0x205954u: goto label_205954;
        case 0x205958u: goto label_205958;
        case 0x20595cu: goto label_20595c;
        case 0x205960u: goto label_205960;
        case 0x205964u: goto label_205964;
        case 0x205968u: goto label_205968;
        case 0x20596cu: goto label_20596c;
        case 0x205970u: goto label_205970;
        case 0x205974u: goto label_205974;
        case 0x205978u: goto label_205978;
        case 0x20597cu: goto label_20597c;
        case 0x205980u: goto label_205980;
        case 0x205984u: goto label_205984;
        case 0x205988u: goto label_205988;
        case 0x20598cu: goto label_20598c;
        case 0x205990u: goto label_205990;
        case 0x205994u: goto label_205994;
        case 0x205998u: goto label_205998;
        case 0x20599cu: goto label_20599c;
        case 0x2059a0u: goto label_2059a0;
        case 0x2059a4u: goto label_2059a4;
        case 0x2059a8u: goto label_2059a8;
        case 0x2059acu: goto label_2059ac;
        case 0x2059b0u: goto label_2059b0;
        case 0x2059b4u: goto label_2059b4;
        case 0x2059b8u: goto label_2059b8;
        case 0x2059bcu: goto label_2059bc;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059c4u: goto label_2059c4;
        case 0x2059c8u: goto label_2059c8;
        case 0x2059ccu: goto label_2059cc;
        case 0x2059d0u: goto label_2059d0;
        case 0x2059d4u: goto label_2059d4;
        case 0x2059d8u: goto label_2059d8;
        case 0x2059dcu: goto label_2059dc;
        case 0x2059e0u: goto label_2059e0;
        case 0x2059e4u: goto label_2059e4;
        case 0x2059e8u: goto label_2059e8;
        case 0x2059ecu: goto label_2059ec;
        case 0x2059f0u: goto label_2059f0;
        case 0x2059f4u: goto label_2059f4;
        case 0x2059f8u: goto label_2059f8;
        case 0x2059fcu: goto label_2059fc;
        case 0x205a00u: goto label_205a00;
        case 0x205a04u: goto label_205a04;
        case 0x205a08u: goto label_205a08;
        case 0x205a0cu: goto label_205a0c;
        case 0x205a10u: goto label_205a10;
        case 0x205a14u: goto label_205a14;
        case 0x205a18u: goto label_205a18;
        case 0x205a1cu: goto label_205a1c;
        case 0x205a20u: goto label_205a20;
        case 0x205a24u: goto label_205a24;
        case 0x205a28u: goto label_205a28;
        case 0x205a2cu: goto label_205a2c;
        case 0x205a30u: goto label_205a30;
        case 0x205a34u: goto label_205a34;
        case 0x205a38u: goto label_205a38;
        case 0x205a3cu: goto label_205a3c;
        case 0x205a40u: goto label_205a40;
        case 0x205a44u: goto label_205a44;
        case 0x205a48u: goto label_205a48;
        case 0x205a4cu: goto label_205a4c;
        case 0x205a50u: goto label_205a50;
        case 0x205a54u: goto label_205a54;
        case 0x205a58u: goto label_205a58;
        case 0x205a5cu: goto label_205a5c;
        case 0x205a60u: goto label_205a60;
        case 0x205a64u: goto label_205a64;
        case 0x205a68u: goto label_205a68;
        case 0x205a6cu: goto label_205a6c;
        case 0x205a70u: goto label_205a70;
        case 0x205a74u: goto label_205a74;
        case 0x205a78u: goto label_205a78;
        case 0x205a7cu: goto label_205a7c;
        case 0x205a80u: goto label_205a80;
        case 0x205a84u: goto label_205a84;
        case 0x205a88u: goto label_205a88;
        case 0x205a8cu: goto label_205a8c;
        case 0x205a90u: goto label_205a90;
        case 0x205a94u: goto label_205a94;
        case 0x205a98u: goto label_205a98;
        case 0x205a9cu: goto label_205a9c;
        case 0x205aa0u: goto label_205aa0;
        case 0x205aa4u: goto label_205aa4;
        case 0x205aa8u: goto label_205aa8;
        case 0x205aacu: goto label_205aac;
        case 0x205ab0u: goto label_205ab0;
        case 0x205ab4u: goto label_205ab4;
        case 0x205ab8u: goto label_205ab8;
        case 0x205abcu: goto label_205abc;
        case 0x205ac0u: goto label_205ac0;
        case 0x205ac4u: goto label_205ac4;
        case 0x205ac8u: goto label_205ac8;
        case 0x205accu: goto label_205acc;
        case 0x205ad0u: goto label_205ad0;
        case 0x205ad4u: goto label_205ad4;
        case 0x205ad8u: goto label_205ad8;
        case 0x205adcu: goto label_205adc;
        case 0x205ae0u: goto label_205ae0;
        case 0x205ae4u: goto label_205ae4;
        case 0x205ae8u: goto label_205ae8;
        case 0x205aecu: goto label_205aec;
        case 0x205af0u: goto label_205af0;
        case 0x205af4u: goto label_205af4;
        case 0x205af8u: goto label_205af8;
        case 0x205afcu: goto label_205afc;
        case 0x205b00u: goto label_205b00;
        case 0x205b04u: goto label_205b04;
        case 0x205b08u: goto label_205b08;
        case 0x205b0cu: goto label_205b0c;
        case 0x205b10u: goto label_205b10;
        case 0x205b14u: goto label_205b14;
        case 0x205b18u: goto label_205b18;
        case 0x205b1cu: goto label_205b1c;
        case 0x205b20u: goto label_205b20;
        case 0x205b24u: goto label_205b24;
        case 0x205b28u: goto label_205b28;
        case 0x205b2cu: goto label_205b2c;
        case 0x205b30u: goto label_205b30;
        case 0x205b34u: goto label_205b34;
        case 0x205b38u: goto label_205b38;
        case 0x205b3cu: goto label_205b3c;
        case 0x205b40u: goto label_205b40;
        case 0x205b44u: goto label_205b44;
        case 0x205b48u: goto label_205b48;
        case 0x205b4cu: goto label_205b4c;
        case 0x205b50u: goto label_205b50;
        case 0x205b54u: goto label_205b54;
        case 0x205b58u: goto label_205b58;
        case 0x205b5cu: goto label_205b5c;
        case 0x205b60u: goto label_205b60;
        case 0x205b64u: goto label_205b64;
        case 0x205b68u: goto label_205b68;
        case 0x205b6cu: goto label_205b6c;
        case 0x205b70u: goto label_205b70;
        case 0x205b74u: goto label_205b74;
        case 0x205b78u: goto label_205b78;
        case 0x205b7cu: goto label_205b7c;
        case 0x205b80u: goto label_205b80;
        case 0x205b84u: goto label_205b84;
        case 0x205b88u: goto label_205b88;
        case 0x205b8cu: goto label_205b8c;
        case 0x205b90u: goto label_205b90;
        case 0x205b94u: goto label_205b94;
        case 0x205b98u: goto label_205b98;
        case 0x205b9cu: goto label_205b9c;
        case 0x205ba0u: goto label_205ba0;
        case 0x205ba4u: goto label_205ba4;
        case 0x205ba8u: goto label_205ba8;
        case 0x205bacu: goto label_205bac;
        case 0x205bb0u: goto label_205bb0;
        case 0x205bb4u: goto label_205bb4;
        case 0x205bb8u: goto label_205bb8;
        case 0x205bbcu: goto label_205bbc;
        case 0x205bc0u: goto label_205bc0;
        case 0x205bc4u: goto label_205bc4;
        case 0x205bc8u: goto label_205bc8;
        case 0x205bccu: goto label_205bcc;
        case 0x205bd0u: goto label_205bd0;
        case 0x205bd4u: goto label_205bd4;
        case 0x205bd8u: goto label_205bd8;
        case 0x205bdcu: goto label_205bdc;
        case 0x205be0u: goto label_205be0;
        case 0x205be4u: goto label_205be4;
        case 0x205be8u: goto label_205be8;
        case 0x205becu: goto label_205bec;
        case 0x205bf0u: goto label_205bf0;
        case 0x205bf4u: goto label_205bf4;
        case 0x205bf8u: goto label_205bf8;
        case 0x205bfcu: goto label_205bfc;
        case 0x205c00u: goto label_205c00;
        case 0x205c04u: goto label_205c04;
        case 0x205c08u: goto label_205c08;
        case 0x205c0cu: goto label_205c0c;
        case 0x205c10u: goto label_205c10;
        case 0x205c14u: goto label_205c14;
        case 0x205c18u: goto label_205c18;
        case 0x205c1cu: goto label_205c1c;
        case 0x205c20u: goto label_205c20;
        case 0x205c24u: goto label_205c24;
        case 0x205c28u: goto label_205c28;
        case 0x205c2cu: goto label_205c2c;
        case 0x205c30u: goto label_205c30;
        case 0x205c34u: goto label_205c34;
        case 0x205c38u: goto label_205c38;
        case 0x205c3cu: goto label_205c3c;
        case 0x205c40u: goto label_205c40;
        case 0x205c44u: goto label_205c44;
        case 0x205c48u: goto label_205c48;
        case 0x205c4cu: goto label_205c4c;
        case 0x205c50u: goto label_205c50;
        case 0x205c54u: goto label_205c54;
        case 0x205c58u: goto label_205c58;
        case 0x205c5cu: goto label_205c5c;
        case 0x205c60u: goto label_205c60;
        case 0x205c64u: goto label_205c64;
        case 0x205c68u: goto label_205c68;
        case 0x205c6cu: goto label_205c6c;
        case 0x205c70u: goto label_205c70;
        case 0x205c74u: goto label_205c74;
        case 0x205c78u: goto label_205c78;
        case 0x205c7cu: goto label_205c7c;
        case 0x205c80u: goto label_205c80;
        case 0x205c84u: goto label_205c84;
        case 0x205c88u: goto label_205c88;
        case 0x205c8cu: goto label_205c8c;
        case 0x205c90u: goto label_205c90;
        case 0x205c94u: goto label_205c94;
        case 0x205c98u: goto label_205c98;
        case 0x205c9cu: goto label_205c9c;
        case 0x205ca0u: goto label_205ca0;
        case 0x205ca4u: goto label_205ca4;
        case 0x205ca8u: goto label_205ca8;
        case 0x205cacu: goto label_205cac;
        case 0x205cb0u: goto label_205cb0;
        case 0x205cb4u: goto label_205cb4;
        case 0x205cb8u: goto label_205cb8;
        case 0x205cbcu: goto label_205cbc;
        case 0x205cc0u: goto label_205cc0;
        case 0x205cc4u: goto label_205cc4;
        case 0x205cc8u: goto label_205cc8;
        case 0x205cccu: goto label_205ccc;
        case 0x205cd0u: goto label_205cd0;
        case 0x205cd4u: goto label_205cd4;
        case 0x205cd8u: goto label_205cd8;
        case 0x205cdcu: goto label_205cdc;
        case 0x205ce0u: goto label_205ce0;
        case 0x205ce4u: goto label_205ce4;
        case 0x205ce8u: goto label_205ce8;
        case 0x205cecu: goto label_205cec;
        case 0x205cf0u: goto label_205cf0;
        case 0x205cf4u: goto label_205cf4;
        case 0x205cf8u: goto label_205cf8;
        case 0x205cfcu: goto label_205cfc;
        case 0x205d00u: goto label_205d00;
        case 0x205d04u: goto label_205d04;
        case 0x205d08u: goto label_205d08;
        case 0x205d0cu: goto label_205d0c;
        case 0x205d10u: goto label_205d10;
        case 0x205d14u: goto label_205d14;
        case 0x205d18u: goto label_205d18;
        case 0x205d1cu: goto label_205d1c;
        case 0x205d20u: goto label_205d20;
        case 0x205d24u: goto label_205d24;
        case 0x205d28u: goto label_205d28;
        case 0x205d2cu: goto label_205d2c;
        case 0x205d30u: goto label_205d30;
        case 0x205d34u: goto label_205d34;
        case 0x205d38u: goto label_205d38;
        case 0x205d3cu: goto label_205d3c;
        case 0x205d40u: goto label_205d40;
        case 0x205d44u: goto label_205d44;
        case 0x205d48u: goto label_205d48;
        case 0x205d4cu: goto label_205d4c;
        case 0x205d50u: goto label_205d50;
        case 0x205d54u: goto label_205d54;
        case 0x205d58u: goto label_205d58;
        case 0x205d5cu: goto label_205d5c;
        case 0x205d60u: goto label_205d60;
        case 0x205d64u: goto label_205d64;
        case 0x205d68u: goto label_205d68;
        case 0x205d6cu: goto label_205d6c;
        case 0x205d70u: goto label_205d70;
        case 0x205d74u: goto label_205d74;
        case 0x205d78u: goto label_205d78;
        case 0x205d7cu: goto label_205d7c;
        case 0x205d80u: goto label_205d80;
        case 0x205d84u: goto label_205d84;
        case 0x205d88u: goto label_205d88;
        case 0x205d8cu: goto label_205d8c;
        case 0x205d90u: goto label_205d90;
        case 0x205d94u: goto label_205d94;
        case 0x205d98u: goto label_205d98;
        case 0x205d9cu: goto label_205d9c;
        case 0x205da0u: goto label_205da0;
        case 0x205da4u: goto label_205da4;
        case 0x205da8u: goto label_205da8;
        case 0x205dacu: goto label_205dac;
        case 0x205db0u: goto label_205db0;
        case 0x205db4u: goto label_205db4;
        case 0x205db8u: goto label_205db8;
        case 0x205dbcu: goto label_205dbc;
        case 0x205dc0u: goto label_205dc0;
        case 0x205dc4u: goto label_205dc4;
        case 0x205dc8u: goto label_205dc8;
        case 0x205dccu: goto label_205dcc;
        case 0x205dd0u: goto label_205dd0;
        case 0x205dd4u: goto label_205dd4;
        case 0x205dd8u: goto label_205dd8;
        case 0x205ddcu: goto label_205ddc;
        case 0x205de0u: goto label_205de0;
        case 0x205de4u: goto label_205de4;
        case 0x205de8u: goto label_205de8;
        case 0x205decu: goto label_205dec;
        case 0x205df0u: goto label_205df0;
        case 0x205df4u: goto label_205df4;
        case 0x205df8u: goto label_205df8;
        case 0x205dfcu: goto label_205dfc;
        case 0x205e00u: goto label_205e00;
        case 0x205e04u: goto label_205e04;
        case 0x205e08u: goto label_205e08;
        case 0x205e0cu: goto label_205e0c;
        case 0x205e10u: goto label_205e10;
        case 0x205e14u: goto label_205e14;
        case 0x205e18u: goto label_205e18;
        case 0x205e1cu: goto label_205e1c;
        case 0x205e20u: goto label_205e20;
        case 0x205e24u: goto label_205e24;
        case 0x205e28u: goto label_205e28;
        case 0x205e2cu: goto label_205e2c;
        case 0x205e30u: goto label_205e30;
        case 0x205e34u: goto label_205e34;
        case 0x205e38u: goto label_205e38;
        case 0x205e3cu: goto label_205e3c;
        case 0x205e40u: goto label_205e40;
        case 0x205e44u: goto label_205e44;
        case 0x205e48u: goto label_205e48;
        case 0x205e4cu: goto label_205e4c;
        case 0x205e50u: goto label_205e50;
        case 0x205e54u: goto label_205e54;
        case 0x205e58u: goto label_205e58;
        case 0x205e5cu: goto label_205e5c;
        case 0x205e60u: goto label_205e60;
        case 0x205e64u: goto label_205e64;
        case 0x205e68u: goto label_205e68;
        case 0x205e6cu: goto label_205e6c;
        case 0x205e70u: goto label_205e70;
        case 0x205e74u: goto label_205e74;
        case 0x205e78u: goto label_205e78;
        case 0x205e7cu: goto label_205e7c;
        case 0x205e80u: goto label_205e80;
        case 0x205e84u: goto label_205e84;
        case 0x205e88u: goto label_205e88;
        case 0x205e8cu: goto label_205e8c;
        case 0x205e90u: goto label_205e90;
        case 0x205e94u: goto label_205e94;
        case 0x205e98u: goto label_205e98;
        case 0x205e9cu: goto label_205e9c;
        case 0x205ea0u: goto label_205ea0;
        case 0x205ea4u: goto label_205ea4;
        case 0x205ea8u: goto label_205ea8;
        case 0x205eacu: goto label_205eac;
        case 0x205eb0u: goto label_205eb0;
        case 0x205eb4u: goto label_205eb4;
        case 0x205eb8u: goto label_205eb8;
        case 0x205ebcu: goto label_205ebc;
        case 0x205ec0u: goto label_205ec0;
        case 0x205ec4u: goto label_205ec4;
        case 0x205ec8u: goto label_205ec8;
        case 0x205eccu: goto label_205ecc;
        case 0x205ed0u: goto label_205ed0;
        case 0x205ed4u: goto label_205ed4;
        case 0x205ed8u: goto label_205ed8;
        case 0x205edcu: goto label_205edc;
        case 0x205ee0u: goto label_205ee0;
        case 0x205ee4u: goto label_205ee4;
        case 0x205ee8u: goto label_205ee8;
        case 0x205eecu: goto label_205eec;
        case 0x205ef0u: goto label_205ef0;
        case 0x205ef4u: goto label_205ef4;
        case 0x205ef8u: goto label_205ef8;
        case 0x205efcu: goto label_205efc;
        case 0x205f00u: goto label_205f00;
        case 0x205f04u: goto label_205f04;
        case 0x205f08u: goto label_205f08;
        case 0x205f0cu: goto label_205f0c;
        case 0x205f10u: goto label_205f10;
        case 0x205f14u: goto label_205f14;
        case 0x205f18u: goto label_205f18;
        case 0x205f1cu: goto label_205f1c;
        case 0x205f20u: goto label_205f20;
        case 0x205f24u: goto label_205f24;
        case 0x205f28u: goto label_205f28;
        case 0x205f2cu: goto label_205f2c;
        case 0x205f30u: goto label_205f30;
        case 0x205f34u: goto label_205f34;
        case 0x205f38u: goto label_205f38;
        case 0x205f3cu: goto label_205f3c;
        case 0x205f40u: goto label_205f40;
        case 0x205f44u: goto label_205f44;
        case 0x205f48u: goto label_205f48;
        case 0x205f4cu: goto label_205f4c;
        case 0x205f50u: goto label_205f50;
        case 0x205f54u: goto label_205f54;
        case 0x205f58u: goto label_205f58;
        case 0x205f5cu: goto label_205f5c;
        case 0x205f60u: goto label_205f60;
        case 0x205f64u: goto label_205f64;
        case 0x205f68u: goto label_205f68;
        case 0x205f6cu: goto label_205f6c;
        case 0x205f70u: goto label_205f70;
        case 0x205f74u: goto label_205f74;
        case 0x205f78u: goto label_205f78;
        case 0x205f7cu: goto label_205f7c;
        case 0x205f80u: goto label_205f80;
        case 0x205f84u: goto label_205f84;
        case 0x205f88u: goto label_205f88;
        case 0x205f8cu: goto label_205f8c;
        case 0x205f90u: goto label_205f90;
        case 0x205f94u: goto label_205f94;
        case 0x205f98u: goto label_205f98;
        case 0x205f9cu: goto label_205f9c;
        case 0x205fa0u: goto label_205fa0;
        case 0x205fa4u: goto label_205fa4;
        case 0x205fa8u: goto label_205fa8;
        case 0x205facu: goto label_205fac;
        case 0x205fb0u: goto label_205fb0;
        case 0x205fb4u: goto label_205fb4;
        case 0x205fb8u: goto label_205fb8;
        case 0x205fbcu: goto label_205fbc;
        case 0x205fc0u: goto label_205fc0;
        case 0x205fc4u: goto label_205fc4;
        case 0x205fc8u: goto label_205fc8;
        case 0x205fccu: goto label_205fcc;
        case 0x205fd0u: goto label_205fd0;
        case 0x205fd4u: goto label_205fd4;
        case 0x205fd8u: goto label_205fd8;
        case 0x205fdcu: goto label_205fdc;
        case 0x205fe0u: goto label_205fe0;
        case 0x205fe4u: goto label_205fe4;
        case 0x205fe8u: goto label_205fe8;
        case 0x205fecu: goto label_205fec;
        case 0x205ff0u: goto label_205ff0;
        case 0x205ff4u: goto label_205ff4;
        case 0x205ff8u: goto label_205ff8;
        case 0x205ffcu: goto label_205ffc;
        case 0x206000u: goto label_206000;
        case 0x206004u: goto label_206004;
        case 0x206008u: goto label_206008;
        case 0x20600cu: goto label_20600c;
        case 0x206010u: goto label_206010;
        case 0x206014u: goto label_206014;
        case 0x206018u: goto label_206018;
        case 0x20601cu: goto label_20601c;
        case 0x206020u: goto label_206020;
        case 0x206024u: goto label_206024;
        case 0x206028u: goto label_206028;
        case 0x20602cu: goto label_20602c;
        case 0x206030u: goto label_206030;
        case 0x206034u: goto label_206034;
        case 0x206038u: goto label_206038;
        case 0x20603cu: goto label_20603c;
        case 0x206040u: goto label_206040;
        case 0x206044u: goto label_206044;
        case 0x206048u: goto label_206048;
        case 0x20604cu: goto label_20604c;
        case 0x206050u: goto label_206050;
        case 0x206054u: goto label_206054;
        case 0x206058u: goto label_206058;
        case 0x20605cu: goto label_20605c;
        case 0x206060u: goto label_206060;
        case 0x206064u: goto label_206064;
        case 0x206068u: goto label_206068;
        case 0x20606cu: goto label_20606c;
        case 0x206070u: goto label_206070;
        case 0x206074u: goto label_206074;
        case 0x206078u: goto label_206078;
        case 0x20607cu: goto label_20607c;
        case 0x206080u: goto label_206080;
        case 0x206084u: goto label_206084;
        case 0x206088u: goto label_206088;
        case 0x20608cu: goto label_20608c;
        case 0x206090u: goto label_206090;
        case 0x206094u: goto label_206094;
        case 0x206098u: goto label_206098;
        case 0x20609cu: goto label_20609c;
        case 0x2060a0u: goto label_2060a0;
        case 0x2060a4u: goto label_2060a4;
        case 0x2060a8u: goto label_2060a8;
        case 0x2060acu: goto label_2060ac;
        case 0x2060b0u: goto label_2060b0;
        case 0x2060b4u: goto label_2060b4;
        case 0x2060b8u: goto label_2060b8;
        case 0x2060bcu: goto label_2060bc;
        case 0x2060c0u: goto label_2060c0;
        case 0x2060c4u: goto label_2060c4;
        case 0x2060c8u: goto label_2060c8;
        case 0x2060ccu: goto label_2060cc;
        case 0x2060d0u: goto label_2060d0;
        case 0x2060d4u: goto label_2060d4;
        case 0x2060d8u: goto label_2060d8;
        case 0x2060dcu: goto label_2060dc;
        case 0x2060e0u: goto label_2060e0;
        case 0x2060e4u: goto label_2060e4;
        case 0x2060e8u: goto label_2060e8;
        case 0x2060ecu: goto label_2060ec;
        case 0x2060f0u: goto label_2060f0;
        case 0x2060f4u: goto label_2060f4;
        case 0x2060f8u: goto label_2060f8;
        case 0x2060fcu: goto label_2060fc;
        case 0x206100u: goto label_206100;
        case 0x206104u: goto label_206104;
        case 0x206108u: goto label_206108;
        case 0x20610cu: goto label_20610c;
        case 0x206110u: goto label_206110;
        case 0x206114u: goto label_206114;
        case 0x206118u: goto label_206118;
        case 0x20611cu: goto label_20611c;
        default: break;
    }

    ctx->pc = 0x204c60u;

label_204c60:
    // 0x204c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_204c64:
    // 0x204c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204c68:
    // 0x204c68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x204c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_204c6c:
    // 0x204c6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x204c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_204c70:
    // 0x204c70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x204c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_204c74:
    // 0x204c74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x204c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204c78:
    // 0x204c78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x204c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_204c7c:
    // 0x204c7c: 0x320f809  jalr        $t9
label_204c80:
    if (ctx->pc == 0x204C80u) {
        ctx->pc = 0x204C84u;
        goto label_204c84;
    }
    ctx->pc = 0x204C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204C84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204C7Cu, 0x204C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204C84u;
label_204c84:
    // 0x204c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204c88:
    // 0x204c88: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x204c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_204c8c:
    // 0x204c8c: 0x3e00008  jr          $ra
label_204c90:
    if (ctx->pc == 0x204C90u) {
        ctx->pc = 0x204C94u;
        goto label_204c94;
    }
    ctx->pc = 0x204C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204C94u;
label_204c94:
    // 0x204c94: 0x0  nop
    ctx->pc = 0x204c94u;
    // NOP
label_204c98:
    // 0x204c98: 0x0  nop
    ctx->pc = 0x204c98u;
    // NOP
label_204c9c:
    // 0x204c9c: 0x0  nop
    ctx->pc = 0x204c9cu;
    // NOP
label_204ca0:
    // 0x204ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_204ca4:
    // 0x204ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204ca8:
    // 0x204ca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x204ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_204cac:
    // 0x204cac: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x204cacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_204cb0:
    // 0x204cb0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x204cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_204cb4:
    // 0x204cb4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x204cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204cb8:
    // 0x204cb8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x204cb8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_204cbc:
    // 0x204cbc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x204cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_204cc0:
    // 0x204cc0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x204cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204cc4:
    // 0x204cc4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x204cc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204cc8:
    // 0x204cc8: 0x8c6400d8  lw          $a0, 0xD8($v1)
    ctx->pc = 0x204cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_204ccc:
    // 0x204ccc: 0xc084abc  jal         func_212AF0
label_204cd0:
    if (ctx->pc == 0x204CD0u) {
        ctx->pc = 0x204CD4u;
        goto label_204cd4;
    }
    ctx->pc = 0x204CCCu;
    SET_GPR_U32(ctx, 31, 0x204CD4u);
    ctx->pc = 0x212AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AF0u, 0x204CCCu, 0x204CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CD4u;
label_204cd4:
    // 0x204cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204cd8:
    // 0x204cd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x204cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_204cdc:
    // 0x204cdc: 0x3e00008  jr          $ra
label_204ce0:
    if (ctx->pc == 0x204CE0u) {
        ctx->pc = 0x204CE4u;
        goto label_204ce4;
    }
    ctx->pc = 0x204CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204CE4u;
label_204ce4:
    // 0x204ce4: 0x0  nop
    ctx->pc = 0x204ce4u;
    // NOP
label_204ce8:
    // 0x204ce8: 0x0  nop
    ctx->pc = 0x204ce8u;
    // NOP
label_204cec:
    // 0x204cec: 0x0  nop
    ctx->pc = 0x204cecu;
    // NOP
label_204cf0:
    // 0x204cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_204cf4:
    // 0x204cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204cf8:
    // 0x204cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x204cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_204cfc:
    // 0x204cfc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x204cfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_204d00:
    // 0x204d00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x204d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_204d04:
    // 0x204d04: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x204d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_204d08:
    // 0x204d08: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x204d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204d0c:
    // 0x204d0c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x204d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204d10:
    // 0x204d10: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x204d10u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204d14:
    // 0x204d14: 0x8c6400d8  lw          $a0, 0xD8($v1)
    ctx->pc = 0x204d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_204d18:
    // 0x204d18: 0xc084abc  jal         func_212AF0
label_204d1c:
    if (ctx->pc == 0x204D1Cu) {
        ctx->pc = 0x204D20u;
        goto label_204d20;
    }
    ctx->pc = 0x204D18u;
    SET_GPR_U32(ctx, 31, 0x204D20u);
    ctx->pc = 0x212AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AF0u, 0x204D18u, 0x204D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D20u;
label_204d20:
    // 0x204d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204d24:
    // 0x204d24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x204d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_204d28:
    // 0x204d28: 0x3e00008  jr          $ra
label_204d2c:
    if (ctx->pc == 0x204D2Cu) {
        ctx->pc = 0x204D30u;
        goto label_204d30;
    }
    ctx->pc = 0x204D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D30u;
label_204d30:
    // 0x204d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_204d34:
    // 0x204d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204d38:
    // 0x204d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x204d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_204d3c:
    // 0x204d3c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x204d3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_204d40:
    // 0x204d40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_204d44:
    // 0x204d44: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x204d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_204d48:
    // 0x204d48: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x204d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204d4c:
    // 0x204d4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x204d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204d50:
    // 0x204d50: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x204d50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204d54:
    // 0x204d54: 0x8c6400d8  lw          $a0, 0xD8($v1)
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_204d58:
    // 0x204d58: 0xc084aec  jal         func_212BB0
label_204d5c:
    if (ctx->pc == 0x204D5Cu) {
        ctx->pc = 0x204D60u;
        goto label_204d60;
    }
    ctx->pc = 0x204D58u;
    SET_GPR_U32(ctx, 31, 0x204D60u);
    ctx->pc = 0x212BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BB0u, 0x204D58u, 0x204D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D60u;
label_204d60:
    // 0x204d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204d64:
    // 0x204d64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x204d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_204d68:
    // 0x204d68: 0x3e00008  jr          $ra
label_204d6c:
    if (ctx->pc == 0x204D6Cu) {
        ctx->pc = 0x204D70u;
        goto label_204d70;
    }
    ctx->pc = 0x204D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D70u;
label_204d70:
    // 0x204d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_204d74:
    // 0x204d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204d78:
    // 0x204d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x204d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_204d7c:
    // 0x204d7c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x204d7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_204d80:
    // 0x204d80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x204d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_204d84:
    // 0x204d84: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x204d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204d88:
    // 0x204d88: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x204d88u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_204d8c:
    // 0x204d8c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x204d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_204d90:
    // 0x204d90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x204d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_204d94:
    // 0x204d94: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x204d94u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_204d98:
    // 0x204d98: 0x8c6400d8  lw          $a0, 0xD8($v1)
    ctx->pc = 0x204d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_204d9c:
    // 0x204d9c: 0xc084aec  jal         func_212BB0
label_204da0:
    if (ctx->pc == 0x204DA0u) {
        ctx->pc = 0x204DA4u;
        goto label_204da4;
    }
    ctx->pc = 0x204D9Cu;
    SET_GPR_U32(ctx, 31, 0x204DA4u);
    ctx->pc = 0x212BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BB0u, 0x204D9Cu, 0x204DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DA4u;
label_204da4:
    // 0x204da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204da8:
    // 0x204da8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x204da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_204dac:
    // 0x204dac: 0x3e00008  jr          $ra
label_204db0:
    if (ctx->pc == 0x204DB0u) {
        ctx->pc = 0x204DB4u;
        goto label_204db4;
    }
    ctx->pc = 0x204DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204DB4u;
label_204db4:
    // 0x204db4: 0x0  nop
    ctx->pc = 0x204db4u;
    // NOP
label_204db8:
    // 0x204db8: 0x0  nop
    ctx->pc = 0x204db8u;
    // NOP
label_204dbc:
    // 0x204dbc: 0x0  nop
    ctx->pc = 0x204dbcu;
    // NOP
label_204dc0:
    // 0x204dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_204dc4:
    // 0x204dc4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x204dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_204dc8:
    // 0x204dc8: 0x3e00008  jr          $ra
label_204dcc:
    if (ctx->pc == 0x204DCCu) {
        ctx->pc = 0x204DD0u;
        goto label_204dd0;
    }
    ctx->pc = 0x204DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204DD0u;
label_204dd0:
    // 0x204dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x204dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_204dd4:
    // 0x204dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_204dd8:
    // 0x204dd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x204dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_204ddc:
    // 0x204ddc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x204ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_204de0:
    // 0x204de0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x204de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_204de4:
    // 0x204de4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x204de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_204de8:
    // 0x204de8: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x204de8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_204dec:
    // 0x204dec: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x204decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_204df0:
    // 0x204df0: 0xc064a4c  jal         func_192930
label_204df4:
    if (ctx->pc == 0x204DF4u) {
        ctx->pc = 0x204DF8u;
        goto label_204df8;
    }
    ctx->pc = 0x204DF0u;
    SET_GPR_U32(ctx, 31, 0x204DF8u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x204DF0u, 0x204DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DF8u;
label_204df8:
    // 0x204df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_204dfc:
    // 0x204dfc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x204dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_204e00:
    // 0x204e00: 0x3e00008  jr          $ra
label_204e04:
    if (ctx->pc == 0x204E04u) {
        ctx->pc = 0x204E08u;
        goto label_204e08;
    }
    ctx->pc = 0x204E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204E08u;
label_204e08:
    // 0x204e08: 0x0  nop
    ctx->pc = 0x204e08u;
    // NOP
label_204e0c:
    // 0x204e0c: 0x0  nop
    ctx->pc = 0x204e0cu;
    // NOP
label_204e10:
    // 0x204e10: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x204e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_204e14:
    // 0x204e14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x204e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_204e18:
    // 0x204e18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x204e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_204e1c:
    // 0x204e1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x204e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_204e20:
    // 0x204e20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x204e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_204e24:
    // 0x204e24: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x204e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_204e28:
    // 0x204e28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x204e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_204e2c:
    // 0x204e2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x204e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_204e30:
    // 0x204e30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x204e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_204e34:
    // 0x204e34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x204e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_204e38:
    // 0x204e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_204e3c:
    // 0x204e3c: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x204e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_204e40:
    // 0x204e40: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x204e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204e44:
    // 0x204e44: 0x904200ec  lbu         $v0, 0xEC($v0)
    ctx->pc = 0x204e44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 236)));
label_204e48:
    // 0x204e48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_204e4c:
    if (ctx->pc == 0x204E4Cu) {
        ctx->pc = 0x204E50u;
        goto label_204e50;
    }
    ctx->pc = 0x204E48u;
    {
        const bool branch_taken_0x204e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e48) {
            ctx->pc = 0x204E70u;
            goto label_204e70;
        }
    }
    ctx->pc = 0x204E50u;
label_204e50:
    // 0x204e50: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x204e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_204e54:
    // 0x204e54: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x204e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204e58:
    // 0x204e58: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x204e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_204e5c:
    // 0x204e5c: 0xc44c00f0  lwc1        $f12, 0xF0($v0)
    ctx->pc = 0x204e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_204e60:
    // 0x204e60: 0xc085844  jal         func_216110
label_204e64:
    if (ctx->pc == 0x204E64u) {
        ctx->pc = 0x204E68u;
        goto label_204e68;
    }
    ctx->pc = 0x204E60u;
    SET_GPR_U32(ctx, 31, 0x204E68u);
    ctx->pc = 0x216110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216110u, 0x204E60u, 0x204E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E68u;
label_204e68:
    // 0x204e68: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x204e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204e6c:
    // 0x204e6c: 0xa04000ec  sb          $zero, 0xEC($v0)
    ctx->pc = 0x204e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 0));
label_204e70:
    // 0x204e70: 0xc12242c  jal         func_4890B0
label_204e74:
    if (ctx->pc == 0x204E74u) {
        ctx->pc = 0x204E78u;
        goto label_204e78;
    }
    ctx->pc = 0x204E70u;
    SET_GPR_U32(ctx, 31, 0x204E78u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x204E70u, 0x204E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E78u;
label_204e78:
    // 0x204e78: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x204e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_204e7c:
    // 0x204e7c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204e80:
    // 0x204e80: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x204e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_204e84:
    // 0x204e84: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x204e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_204e88:
    // 0x204e88: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x204e88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_204e8c:
    // 0x204e8c: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x204e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_204e90:
    // 0x204e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204e94:
    // 0x204e94: 0xc084bb8  jal         func_212EE0
label_204e98:
    if (ctx->pc == 0x204E98u) {
        ctx->pc = 0x204E9Cu;
        goto label_204e9c;
    }
    ctx->pc = 0x204E94u;
    SET_GPR_U32(ctx, 31, 0x204E9Cu);
    ctx->pc = 0x212EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212EE0u, 0x204E94u, 0x204E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E9Cu;
label_204e9c:
    // 0x204e9c: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x204e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204ea0:
    // 0x204ea0: 0x8ca400d8  lw          $a0, 0xD8($a1)
    ctx->pc = 0x204ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
label_204ea4:
    // 0x204ea4: 0xc084a4c  jal         func_212930
label_204ea8:
    if (ctx->pc == 0x204EA8u) {
        ctx->pc = 0x204EACu;
        goto label_204eac;
    }
    ctx->pc = 0x204EA4u;
    SET_GPR_U32(ctx, 31, 0x204EACu);
    ctx->pc = 0x212930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212930u, 0x204EA4u, 0x204EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EACu;
label_204eac:
    // 0x204eac: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x204eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204eb0:
    // 0x204eb0: 0xc081d2c  jal         func_2074B0
label_204eb4:
    if (ctx->pc == 0x204EB4u) {
        ctx->pc = 0x204EB8u;
        goto label_204eb8;
    }
    ctx->pc = 0x204EB0u;
    SET_GPR_U32(ctx, 31, 0x204EB8u);
    ctx->pc = 0x2074B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074B0u, 0x204EB0u, 0x204EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EB8u;
label_204eb8:
    // 0x204eb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x204eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204ebc:
    // 0x204ebc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_204ec0:
    if (ctx->pc == 0x204EC0u) {
        ctx->pc = 0x204EC4u;
        goto label_204ec4;
    }
    ctx->pc = 0x204EBCu;
    {
        const bool branch_taken_0x204ebc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x204ebc) {
            ctx->pc = 0x204ED0u;
            goto label_204ed0;
        }
    }
    ctx->pc = 0x204EC4u;
label_204ec4:
    // 0x204ec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204ec8:
    // 0x204ec8: 0x1000046f  b           . + 4 + (0x46F << 2)
label_204ecc:
    if (ctx->pc == 0x204ECCu) {
        ctx->pc = 0x204ED0u;
        goto label_204ed0;
    }
    ctx->pc = 0x204EC8u;
    {
        const bool branch_taken_0x204ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204ec8) {
            ctx->pc = 0x206088u;
            goto label_206088;
        }
    }
    ctx->pc = 0x204ED0u;
label_204ed0:
    // 0x204ed0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204ed4:
    // 0x204ed4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_204ed8:
    // 0x204ed8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x204ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_204edc:
    // 0x204edc: 0x7ba50190  lq          $a1, 0x190($sp)
    ctx->pc = 0x204edcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_204ee0:
    // 0x204ee0: 0xc085538  jal         func_2154E0
label_204ee4:
    if (ctx->pc == 0x204EE4u) {
        ctx->pc = 0x204EE8u;
        goto label_204ee8;
    }
    ctx->pc = 0x204EE0u;
    SET_GPR_U32(ctx, 31, 0x204EE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x204EE0u, 0x204EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EE8u;
label_204ee8:
    // 0x204ee8: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x204ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_204eec:
    // 0x204eec: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x204eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_204ef0:
    // 0x204ef0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x204ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204ef4:
    // 0x204ef4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x204ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_204ef8:
    // 0x204ef8: 0x320f809  jalr        $t9
label_204efc:
    if (ctx->pc == 0x204EFCu) {
        ctx->pc = 0x204F00u;
        goto label_204f00;
    }
    ctx->pc = 0x204EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204F00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204EF8u, 0x204F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204F00u;
label_204f00:
    // 0x204f00: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x204f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_204f04:
    // 0x204f04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x204f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204f08:
    // 0x204f08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x204f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_204f0c:
    // 0x204f0c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x204f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_204f10:
    // 0x204f10: 0xc085538  jal         func_2154E0
label_204f14:
    if (ctx->pc == 0x204F14u) {
        ctx->pc = 0x204F18u;
        goto label_204f18;
    }
    ctx->pc = 0x204F10u;
    SET_GPR_U32(ctx, 31, 0x204F18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x204F10u, 0x204F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F18u;
label_204f18:
    // 0x204f18: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x204f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_204f1c:
    // 0x204f1c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x204f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_204f20:
    // 0x204f20: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x204f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_204f24:
    // 0x204f24: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x204f24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_204f28:
    // 0x204f28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x204f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204f2c:
    // 0x204f2c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x204f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_204f30:
    // 0x204f30: 0x320f809  jalr        $t9
label_204f34:
    if (ctx->pc == 0x204F34u) {
        ctx->pc = 0x204F38u;
        goto label_204f38;
    }
    ctx->pc = 0x204F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x204F38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204F30u, 0x204F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x204F38u;
label_204f38:
    // 0x204f38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204f3c:
    // 0x204f3c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_204f40:
    // 0x204f40: 0xc085538  jal         func_2154E0
label_204f44:
    if (ctx->pc == 0x204F44u) {
        ctx->pc = 0x204F48u;
        goto label_204f48;
    }
    ctx->pc = 0x204F40u;
    SET_GPR_U32(ctx, 31, 0x204F48u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x204F40u, 0x204F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F48u;
label_204f48:
    // 0x204f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204f4c:
    // 0x204f4c: 0xc096fc4  jal         func_25BF10
label_204f50:
    if (ctx->pc == 0x204F50u) {
        ctx->pc = 0x204F54u;
        goto label_204f54;
    }
    ctx->pc = 0x204F4Cu;
    SET_GPR_U32(ctx, 31, 0x204F54u);
    ctx->pc = 0x25BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF10u, 0x204F4Cu, 0x204F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F54u;
label_204f54:
    // 0x204f54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x204f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204f58:
    // 0x204f58: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_204f5c:
    if (ctx->pc == 0x204F5Cu) {
        ctx->pc = 0x204F60u;
        goto label_204f60;
    }
    ctx->pc = 0x204F58u;
    {
        const bool branch_taken_0x204f58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x204f58) {
            ctx->pc = 0x204F6Cu;
            goto label_204f6c;
        }
    }
    ctx->pc = 0x204F60u;
label_204f60:
    // 0x204f60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x204f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204f64:
    // 0x204f64: 0x10000448  b           . + 4 + (0x448 << 2)
label_204f68:
    if (ctx->pc == 0x204F68u) {
        ctx->pc = 0x204F6Cu;
        goto label_204f6c;
    }
    ctx->pc = 0x204F64u;
    {
        const bool branch_taken_0x204f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204f64) {
            ctx->pc = 0x206088u;
            goto label_206088;
        }
    }
    ctx->pc = 0x204F6Cu;
label_204f6c:
    // 0x204f6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_204f70:
    // 0x204f70: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x204f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_204f74:
    // 0x204f74: 0xc085538  jal         func_2154E0
label_204f78:
    if (ctx->pc == 0x204F78u) {
        ctx->pc = 0x204F7Cu;
        goto label_204f7c;
    }
    ctx->pc = 0x204F74u;
    SET_GPR_U32(ctx, 31, 0x204F7Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x204F74u, 0x204F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204F7Cu;
label_204f7c:
    // 0x204f7c: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x204f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_204f80:
    // 0x204f80: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x204f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_204f84:
    // 0x204f84: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x204f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_204f88:
    // 0x204f88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x204f88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_204f8c:
    // 0x204f8c: 0x0  nop
    ctx->pc = 0x204f8cu;
    // NOP
label_204f90:
    // 0x204f90: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x204f90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_204f94:
    // 0x204f94: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_204f98:
    if (ctx->pc == 0x204F98u) {
        ctx->pc = 0x204F9Cu;
        goto label_204f9c;
    }
    ctx->pc = 0x204F94u;
    {
        const bool branch_taken_0x204f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x204f94) {
            ctx->pc = 0x205004u;
            goto label_205004;
        }
    }
    ctx->pc = 0x204F9Cu;
label_204f9c:
    // 0x204f9c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x204f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204fa0:
    // 0x204fa0: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x204fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_204fa4:
    // 0x204fa4: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x204fa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_204fa8:
    // 0x204fa8: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x204fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
label_204fac:
    // 0x204fac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204fb0:
    // 0x204fb0: 0xc0bc48e  jal         func_2F1238
label_204fb4:
    if (ctx->pc == 0x204FB4u) {
        ctx->pc = 0x204FB8u;
        goto label_204fb8;
    }
    ctx->pc = 0x204FB0u;
    SET_GPR_U32(ctx, 31, 0x204FB8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x204FB0u, 0x204FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FB8u;
label_204fb8:
    // 0x204fb8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_204fbc:
    if (ctx->pc == 0x204FBCu) {
        ctx->pc = 0x204FC0u;
        goto label_204fc0;
    }
    ctx->pc = 0x204FB8u;
    {
        const bool branch_taken_0x204fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x204fb8) {
            ctx->pc = 0x205004u;
            goto label_205004;
        }
    }
    ctx->pc = 0x204FC0u;
label_204fc0:
    // 0x204fc0: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x204fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204fc4:
    // 0x204fc4: 0x24a400f4  addiu       $a0, $a1, 0xF4
    ctx->pc = 0x204fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 244));
label_204fc8:
    // 0x204fc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_204fcc:
    // 0x204fcc: 0xc0bc5c6  jal         func_2F1718
label_204fd0:
    if (ctx->pc == 0x204FD0u) {
        ctx->pc = 0x204FD4u;
        goto label_204fd4;
    }
    ctx->pc = 0x204FCCu;
    SET_GPR_U32(ctx, 31, 0x204FD4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x204FCCu, 0x204FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FD4u;
label_204fd4:
    // 0x204fd4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x204fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_204fd8:
    // 0x204fd8: 0xc0a82cc  jal         func_2A0B30
label_204fdc:
    if (ctx->pc == 0x204FDCu) {
        ctx->pc = 0x204FE0u;
        goto label_204fe0;
    }
    ctx->pc = 0x204FD8u;
    SET_GPR_U32(ctx, 31, 0x204FE0u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x204FD8u, 0x204FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204FE0u;
label_204fe0:
    // 0x204fe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x204fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_204fe4:
    // 0x204fe4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x204fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_204fe8:
    // 0x204fe8: 0x24423cf0  addiu       $v0, $v0, 0x3CF0
    ctx->pc = 0x204fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15600));
label_204fec:
    // 0x204fec: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x204fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_204ff0:
    // 0x204ff0: 0x7ba50160  lq          $a1, 0x160($sp)
    ctx->pc = 0x204ff0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_204ff4:
    // 0x204ff4: 0xc64c0080  lwc1        $f12, 0x80($s2)
    ctx->pc = 0x204ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_204ff8:
    // 0x204ff8: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x204ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_204ffc:
    // 0x204ffc: 0xc121c64  jal         func_487190
label_205000:
    if (ctx->pc == 0x205000u) {
        ctx->pc = 0x205004u;
        goto label_205004;
    }
    ctx->pc = 0x204FFCu;
    SET_GPR_U32(ctx, 31, 0x205004u);
    ctx->pc = 0x487190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487190u, 0x204FFCu, 0x205004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205004u;
label_205004:
    // 0x205004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x205004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_205008:
    // 0x205008: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x205008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20500c:
    // 0x20500c: 0xc085538  jal         func_2154E0
label_205010:
    if (ctx->pc == 0x205010u) {
        ctx->pc = 0x205014u;
        goto label_205014;
    }
    ctx->pc = 0x20500Cu;
    SET_GPR_U32(ctx, 31, 0x205014u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20500Cu, 0x205014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205014u;
label_205014:
    // 0x205014: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x205014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
label_205018:
    // 0x205018: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x205018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_20501c:
    // 0x20501c: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_205020:
    // 0x205020: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x205020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_205024:
    // 0x205024: 0xc040304  jal         func_100C10
label_205028:
    if (ctx->pc == 0x205028u) {
        ctx->pc = 0x20502Cu;
        goto label_20502c;
    }
    ctx->pc = 0x205024u;
    SET_GPR_U32(ctx, 31, 0x20502Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x205024u, 0x20502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20502Cu;
label_20502c:
    // 0x20502c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x20502cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_205030:
    // 0x205030: 0x27a20228  addiu       $v0, $sp, 0x228
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_205034:
    // 0x205034: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x205034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_205038:
    // 0x205038: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x205038u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_20503c:
    // 0x20503c: 0xc050ee0  jal         func_143B80
label_205040:
    if (ctx->pc == 0x205040u) {
        ctx->pc = 0x205044u;
        goto label_205044;
    }
    ctx->pc = 0x20503Cu;
    SET_GPR_U32(ctx, 31, 0x205044u);
    ctx->pc = 0x143B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B80u, 0x20503Cu, 0x205044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205044u;
label_205044:
    // 0x205044: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_205048:
    if (ctx->pc == 0x205048u) {
        ctx->pc = 0x20504Cu;
        goto label_20504c;
    }
    ctx->pc = 0x205044u;
    {
        const bool branch_taken_0x205044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205044) {
            ctx->pc = 0x205068u;
            goto label_205068;
        }
    }
    ctx->pc = 0x20504Cu;
label_20504c:
    // 0x20504c: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x20504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_205050:
    // 0x205050: 0xc041b38  jal         func_106CE0
label_205054:
    if (ctx->pc == 0x205054u) {
        ctx->pc = 0x205058u;
        goto label_205058;
    }
    ctx->pc = 0x205050u;
    SET_GPR_U32(ctx, 31, 0x205058u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x205050u, 0x205058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205058u;
label_205058:
    // 0x205058: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x205058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_20505c:
    // 0x20505c: 0xc0ba89e  jal         func_2EA278
label_205060:
    if (ctx->pc == 0x205060u) {
        ctx->pc = 0x205064u;
        goto label_205064;
    }
    ctx->pc = 0x20505Cu;
    SET_GPR_U32(ctx, 31, 0x205064u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x20505Cu, 0x205064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205064u;
label_205064:
    // 0x205064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x205064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205068:
    // 0x205068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x205068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20506c:
    // 0x20506c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x20506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_205070:
    // 0x205070: 0xc085538  jal         func_2154E0
label_205074:
    if (ctx->pc == 0x205074u) {
        ctx->pc = 0x205078u;
        goto label_205078;
    }
    ctx->pc = 0x205070u;
    SET_GPR_U32(ctx, 31, 0x205078u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x205070u, 0x205078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205078u;
label_205078:
    // 0x205078: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x205078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20507c:
    // 0x20507c: 0xafa60258  sw          $a2, 0x258($sp)
    ctx->pc = 0x20507cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 6));
label_205080:
    // 0x205080: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x205080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_205084:
    // 0x205084: 0xc0a82cc  jal         func_2A0B30
label_205088:
    if (ctx->pc == 0x205088u) {
        ctx->pc = 0x20508Cu;
        goto label_20508c;
    }
    ctx->pc = 0x205084u;
    SET_GPR_U32(ctx, 31, 0x20508Cu);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x205084u, 0x20508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20508Cu;
label_20508c:
    // 0x20508c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20508cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205090:
    // 0x205090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x205090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205094:
    // 0x205094: 0xc121e9c  jal         func_487A70
label_205098:
    if (ctx->pc == 0x205098u) {
        ctx->pc = 0x20509Cu;
        goto label_20509c;
    }
    ctx->pc = 0x205094u;
    SET_GPR_U32(ctx, 31, 0x20509Cu);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x205094u, 0x20509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20509Cu;
label_20509c:
    // 0x20509c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20509cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2050a0:
    // 0x2050a0: 0x16a0002c  bnez        $s5, . + 4 + (0x2C << 2)
label_2050a4:
    if (ctx->pc == 0x2050A4u) {
        ctx->pc = 0x2050A8u;
        goto label_2050a8;
    }
    ctx->pc = 0x2050A0u;
    {
        const bool branch_taken_0x2050a0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2050a0) {
            ctx->pc = 0x205154u;
            goto label_205154;
        }
    }
    ctx->pc = 0x2050A8u;
label_2050a8:
    // 0x2050a8: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2050a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2050ac:
    // 0x2050ac: 0xc06479c  jal         func_191E70
label_2050b0:
    if (ctx->pc == 0x2050B0u) {
        ctx->pc = 0x2050B4u;
        goto label_2050b4;
    }
    ctx->pc = 0x2050ACu;
    SET_GPR_U32(ctx, 31, 0x2050B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2050ACu, 0x2050B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050B4u;
label_2050b4:
    // 0x2050b4: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2050b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_2050b8:
    // 0x2050b8: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2050b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2050bc:
    // 0x2050bc: 0x24a400c0  addiu       $a0, $a1, 0xC0
    ctx->pc = 0x2050bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_2050c0:
    // 0x2050c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2050c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2050c4:
    // 0x2050c4: 0xc05612c  jal         func_1584B0
label_2050c8:
    if (ctx->pc == 0x2050C8u) {
        ctx->pc = 0x2050CCu;
        goto label_2050cc;
    }
    ctx->pc = 0x2050C4u;
    SET_GPR_U32(ctx, 31, 0x2050CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2050C4u, 0x2050CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050CCu;
label_2050cc:
    // 0x2050cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2050ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2050d0:
    // 0x2050d0: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x2050d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2050d4:
    // 0x2050d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2050d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2050d8:
    // 0x2050d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2050d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2050dc:
    // 0x2050dc: 0xc08c8dc  jal         func_232370
label_2050e0:
    if (ctx->pc == 0x2050E0u) {
        ctx->pc = 0x2050E4u;
        goto label_2050e4;
    }
    ctx->pc = 0x2050DCu;
    SET_GPR_U32(ctx, 31, 0x2050E4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x2050DCu, 0x2050E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050E4u;
label_2050e4:
    // 0x2050e4: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2050e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2050e8:
    // 0x2050e8: 0xc06479c  jal         func_191E70
label_2050ec:
    if (ctx->pc == 0x2050ECu) {
        ctx->pc = 0x2050F0u;
        goto label_2050f0;
    }
    ctx->pc = 0x2050E8u;
    SET_GPR_U32(ctx, 31, 0x2050F0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2050E8u, 0x2050F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050F0u;
label_2050f0:
    // 0x2050f0: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2050f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_2050f4:
    // 0x2050f4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2050f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2050f8:
    // 0x2050f8: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2050f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2050fc:
    // 0x2050fc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2050fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_205100:
    // 0x205100: 0xc05612c  jal         func_1584B0
label_205104:
    if (ctx->pc == 0x205104u) {
        ctx->pc = 0x205108u;
        goto label_205108;
    }
    ctx->pc = 0x205100u;
    SET_GPR_U32(ctx, 31, 0x205108u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205100u, 0x205108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205108u;
label_205108:
    // 0x205108: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20510c:
    // 0x20510c: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x20510cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_205110:
    // 0x205110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205114:
    // 0x205114: 0xc08c8dc  jal         func_232370
label_205118:
    if (ctx->pc == 0x205118u) {
        ctx->pc = 0x20511Cu;
        goto label_20511c;
    }
    ctx->pc = 0x205114u;
    SET_GPR_U32(ctx, 31, 0x20511Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205114u, 0x20511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20511Cu;
label_20511c:
    // 0x20511c: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x20511cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205120:
    // 0x205120: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x205120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_205124:
    // 0x205124: 0xc064cb0  jal         func_1932C0
label_205128:
    if (ctx->pc == 0x205128u) {
        ctx->pc = 0x20512Cu;
        goto label_20512c;
    }
    ctx->pc = 0x205124u;
    SET_GPR_U32(ctx, 31, 0x20512Cu);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x205124u, 0x20512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20512Cu;
label_20512c:
    // 0x20512c: 0xa3a2026f  sb          $v0, 0x26F($sp)
    ctx->pc = 0x20512cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 623), (uint8_t)GPR_U32(ctx, 2));
label_205130:
    // 0x205130: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x205130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_205134:
    // 0x205134: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_205138:
    // 0x205138: 0xc0402d4  jal         func_100B50
label_20513c:
    if (ctx->pc == 0x20513Cu) {
        ctx->pc = 0x205140u;
        goto label_205140;
    }
    ctx->pc = 0x205138u;
    SET_GPR_U32(ctx, 31, 0x205140u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x205138u, 0x205140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205140u;
label_205140:
    // 0x205140: 0x93a2026f  lbu         $v0, 0x26F($sp)
    ctx->pc = 0x205140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 623)));
label_205144:
    // 0x205144: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x205144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_205148:
    // 0x205148: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x205148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_20514c:
    // 0x20514c: 0x100003ce  b           . + 4 + (0x3CE << 2)
label_205150:
    if (ctx->pc == 0x205150u) {
        ctx->pc = 0x205154u;
        goto label_205154;
    }
    ctx->pc = 0x20514Cu;
    {
        const bool branch_taken_0x20514c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20514c) {
            ctx->pc = 0x206088u;
            goto label_206088;
        }
    }
    ctx->pc = 0x205154u;
label_205154:
    // 0x205154: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x205154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_205158:
    // 0x205158: 0xc106784  jal         func_419E10
label_20515c:
    if (ctx->pc == 0x20515Cu) {
        ctx->pc = 0x205160u;
        goto label_205160;
    }
    ctx->pc = 0x205158u;
    SET_GPR_U32(ctx, 31, 0x205160u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x205158u, 0x205160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205160u;
label_205160:
    // 0x205160: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x205160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_205164:
    // 0x205164: 0x27a50218  addiu       $a1, $sp, 0x218
    ctx->pc = 0x205164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_205168:
    // 0x205168: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x205168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20516c:
    // 0x20516c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x20516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205170:
    // 0x205170: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x205170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205174:
    // 0x205174: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x205174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_205178:
    // 0x205178: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x205178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_20517c:
    // 0x20517c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x20517cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_205180:
    // 0x205180: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x205180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_205184:
    // 0x205184: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
label_205188:
    if (ctx->pc == 0x205188u) {
        ctx->pc = 0x20518Cu;
        goto label_20518c;
    }
    ctx->pc = 0x205184u;
    {
        const bool branch_taken_0x205184 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x205184) {
            ctx->pc = 0x2051D8u;
            goto label_2051d8;
        }
    }
    ctx->pc = 0x20518Cu;
label_20518c:
    // 0x20518c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x20518cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_205190:
    // 0x205190: 0x24a591e8  addiu       $a1, $a1, -0x6E18
    ctx->pc = 0x205190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939112));
label_205194:
    // 0x205194: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x205194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_205198:
    // 0x205198: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x205198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_20519c:
    // 0x20519c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2051a0:
    // 0x2051a0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2051a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_2051a4:
    // 0x2051a4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2051a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2051a8:
    // 0x2051a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2051a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2051ac:
    // 0x2051ac: 0xc106784  jal         func_419E10
label_2051b0:
    if (ctx->pc == 0x2051B0u) {
        ctx->pc = 0x2051B4u;
        goto label_2051b4;
    }
    ctx->pc = 0x2051ACu;
    SET_GPR_U32(ctx, 31, 0x2051B4u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2051ACu, 0x2051B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051B4u;
label_2051b4:
    // 0x2051b4: 0x27a30218  addiu       $v1, $sp, 0x218
    ctx->pc = 0x2051b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_2051b8:
    // 0x2051b8: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x2051b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_2051bc:
    // 0x2051bc: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x2051bcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2051c0:
    // 0x2051c0: 0x27a50208  addiu       $a1, $sp, 0x208
    ctx->pc = 0x2051c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_2051c4:
    // 0x2051c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2051c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2051c8:
    // 0x2051c8: 0xc104d64  jal         func_413590
label_2051cc:
    if (ctx->pc == 0x2051CCu) {
        ctx->pc = 0x2051D0u;
        goto label_2051d0;
    }
    ctx->pc = 0x2051C8u;
    SET_GPR_U32(ctx, 31, 0x2051D0u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x2051C8u, 0x2051D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051D0u;
label_2051d0:
    // 0x2051d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2051d4:
    if (ctx->pc == 0x2051D4u) {
        ctx->pc = 0x2051D8u;
        goto label_2051d8;
    }
    ctx->pc = 0x2051D0u;
    {
        const bool branch_taken_0x2051d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2051d0) {
            ctx->pc = 0x205220u;
            goto label_205220;
        }
    }
    ctx->pc = 0x2051D8u;
label_2051d8:
    // 0x2051d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2051d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2051dc:
    // 0x2051dc: 0x16250010  bne         $s1, $a1, . + 4 + (0x10 << 2)
label_2051e0:
    if (ctx->pc == 0x2051E0u) {
        ctx->pc = 0x2051E4u;
        goto label_2051e4;
    }
    ctx->pc = 0x2051DCu;
    {
        const bool branch_taken_0x2051dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x2051dc) {
            ctx->pc = 0x205220u;
            goto label_205220;
        }
    }
    ctx->pc = 0x2051E4u;
label_2051e4:
    // 0x2051e4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2051e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2051e8:
    // 0x2051e8: 0x244291f8  addiu       $v0, $v0, -0x6E08
    ctx->pc = 0x2051e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939128));
label_2051ec:
    // 0x2051ec: 0x27a601f8  addiu       $a2, $sp, 0x1F8
    ctx->pc = 0x2051ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_2051f0:
    // 0x2051f0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2051f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2051f4:
    // 0x2051f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2051f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2051f8:
    // 0x2051f8: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x2051f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_2051fc:
    // 0x2051fc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2051fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_205200:
    // 0x205200: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x205200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_205204:
    // 0x205204: 0xc106784  jal         func_419E10
label_205208:
    if (ctx->pc == 0x205208u) {
        ctx->pc = 0x20520Cu;
        goto label_20520c;
    }
    ctx->pc = 0x205204u;
    SET_GPR_U32(ctx, 31, 0x20520Cu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x205204u, 0x20520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20520Cu;
label_20520c:
    // 0x20520c: 0x27a40218  addiu       $a0, $sp, 0x218
    ctx->pc = 0x20520cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_205210:
    // 0x205210: 0x27a501f8  addiu       $a1, $sp, 0x1F8
    ctx->pc = 0x205210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_205214:
    // 0x205214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x205214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205218:
    // 0x205218: 0xc104d64  jal         func_413590
label_20521c:
    if (ctx->pc == 0x20521Cu) {
        ctx->pc = 0x205220u;
        goto label_205220;
    }
    ctx->pc = 0x205218u;
    SET_GPR_U32(ctx, 31, 0x205220u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x205218u, 0x205220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205220u;
label_205220:
    // 0x205220: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x205220u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205224:
    // 0x205224: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205228:
    // 0x205228: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x205228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_20522c:
    // 0x20522c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_205230:
    // 0x205230: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_205234:
    if (ctx->pc == 0x205234u) {
        ctx->pc = 0x205238u;
        goto label_205238;
    }
    ctx->pc = 0x205230u;
    {
        const bool branch_taken_0x205230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x205230) {
            ctx->pc = 0x205280u;
            goto label_205280;
        }
    }
    ctx->pc = 0x205238u;
label_205238:
    // 0x205238: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20523c:
    // 0x20523c: 0xac5100b4  sw          $s1, 0xB4($v0)
    ctx->pc = 0x20523cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 17));
label_205240:
    // 0x205240: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205244:
    // 0x205244: 0x8c4400b4  lw          $a0, 0xB4($v0)
    ctx->pc = 0x205244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_205248:
    // 0x205248: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x205248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20524c:
    // 0x20524c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x20524cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_205250:
    // 0x205250: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x205250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_205254:
    // 0x205254: 0x14820070  bne         $a0, $v0, . + 4 + (0x70 << 2)
label_205258:
    if (ctx->pc == 0x205258u) {
        ctx->pc = 0x20525Cu;
        goto label_20525c;
    }
    ctx->pc = 0x205254u;
    {
        const bool branch_taken_0x205254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x205254) {
            ctx->pc = 0x205418u;
            goto label_205418;
        }
    }
    ctx->pc = 0x20525Cu;
label_20525c:
    // 0x20525c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20525cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205260:
    // 0x205260: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205264:
    // 0x205264: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x205264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_205268:
    // 0x205268: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20526c:
    // 0x20526c: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x20526cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_205270:
    // 0x205270: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x205270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205274:
    // 0x205274: 0xe4a000a8  swc1        $f0, 0xA8($a1)
    ctx->pc = 0x205274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
label_205278:
    // 0x205278: 0x10000067  b           . + 4 + (0x67 << 2)
label_20527c:
    if (ctx->pc == 0x20527Cu) {
        ctx->pc = 0x205280u;
        goto label_205280;
    }
    ctx->pc = 0x205278u;
    {
        const bool branch_taken_0x205278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205278) {
            ctx->pc = 0x205418u;
            goto label_205418;
        }
    }
    ctx->pc = 0x205280u;
label_205280:
    // 0x205280: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205284:
    // 0x205284: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x205284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_205288:
    // 0x205288: 0x14b10009  bne         $a1, $s1, . + 4 + (0x9 << 2)
label_20528c:
    if (ctx->pc == 0x20528Cu) {
        ctx->pc = 0x205290u;
        goto label_205290;
    }
    ctx->pc = 0x205288u;
    {
        const bool branch_taken_0x205288 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        if (branch_taken_0x205288) {
            ctx->pc = 0x2052B0u;
            goto label_2052b0;
        }
    }
    ctx->pc = 0x205290u;
label_205290:
    // 0x205290: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x205290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205294:
    // 0x205294: 0x24c700a8  addiu       $a3, $a2, 0xA8
    ctx->pc = 0x205294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 168));
label_205298:
    // 0x205298: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x205298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20529c:
    // 0x20529c: 0x27a50218  addiu       $a1, $sp, 0x218
    ctx->pc = 0x20529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_2052a0:
    // 0x2052a0: 0xc041d58  jal         func_107560
label_2052a4:
    if (ctx->pc == 0x2052A4u) {
        ctx->pc = 0x2052A8u;
        goto label_2052a8;
    }
    ctx->pc = 0x2052A0u;
    SET_GPR_U32(ctx, 31, 0x2052A8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2052A0u, 0x2052A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052A8u;
label_2052a8:
    // 0x2052a8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2052ac:
    if (ctx->pc == 0x2052ACu) {
        ctx->pc = 0x2052B0u;
        goto label_2052b0;
    }
    ctx->pc = 0x2052A8u;
    {
        const bool branch_taken_0x2052a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2052a8) {
            ctx->pc = 0x205418u;
            goto label_205418;
        }
    }
    ctx->pc = 0x2052B0u;
label_2052b0:
    // 0x2052b0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2052b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2052b4:
    // 0x2052b4: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x2052b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2052b8:
    // 0x2052b8: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x2052b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2052bc:
    // 0x2052bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2052bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2052c0:
    // 0x2052c0: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2052c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_2052c4:
    // 0x2052c4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2052c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2052c8:
    // 0x2052c8: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x2052c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2052cc:
    // 0x2052cc: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2052ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2052d0:
    // 0x2052d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2052d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2052d4:
    // 0x2052d4: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x2052d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_2052d8:
    // 0x2052d8: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2052d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2052dc:
    // 0x2052dc: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x2052dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2052e0:
    // 0x2052e0: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x2052e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2052e4:
    // 0x2052e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2052e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2052e8:
    // 0x2052e8: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2052e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_2052ec:
    // 0x2052ec: 0x27a401e8  addiu       $a0, $sp, 0x1E8
    ctx->pc = 0x2052ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_2052f0:
    // 0x2052f0: 0xc104d24  jal         func_413490
label_2052f4:
    if (ctx->pc == 0x2052F4u) {
        ctx->pc = 0x2052F8u;
        goto label_2052f8;
    }
    ctx->pc = 0x2052F0u;
    SET_GPR_U32(ctx, 31, 0x2052F8u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2052F0u, 0x2052F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2052F8u;
label_2052f8:
    // 0x2052f8: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x2052f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_2052fc:
    // 0x2052fc: 0xc7a10254  lwc1        $f1, 0x254($sp)
    ctx->pc = 0x2052fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205300:
    // 0x205300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205304:
    // 0x205304: 0x0  nop
    ctx->pc = 0x205304u;
    // NOP
label_205308:
    // 0x205308: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20530c:
    // 0x20530c: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_205310:
    if (ctx->pc == 0x205310u) {
        ctx->pc = 0x205314u;
        goto label_205314;
    }
    ctx->pc = 0x20530Cu;
    {
        const bool branch_taken_0x20530c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20530c) {
            ctx->pc = 0x205368u;
            goto label_205368;
        }
    }
    ctx->pc = 0x205314u;
label_205314:
    // 0x205314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205318:
    // 0x205318: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20531c:
    // 0x20531c: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x20531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205320:
    // 0x205320: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x205320u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_205324:
    // 0x205324: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x205324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205328:
    // 0x205328: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x205328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20532c:
    // 0x20532c: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x20532cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_205330:
    // 0x205330: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205334:
    // 0x205334: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205338:
    // 0x205338: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x205338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20533c:
    // 0x20533c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20533cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_205340:
    // 0x205340: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x205340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205344:
    // 0x205344: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x205344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_205348:
    // 0x205348: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x205348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_20534c:
    // 0x20534c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20534cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205350:
    // 0x205350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205354:
    // 0x205354: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x205354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205358:
    // 0x205358: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x205358u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_20535c:
    // 0x20535c: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x20535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205360:
    // 0x205360: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x205360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_205364:
    // 0x205364: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x205364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_205368:
    // 0x205368: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_20536c:
    // 0x20536c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_205370:
    // 0x205370: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205374:
    // 0x205374: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x205374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205378:
    // 0x205378: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20537c:
    // 0x20537c: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x20537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_205380:
    // 0x205380: 0xc7a10250  lwc1        $f1, 0x250($sp)
    ctx->pc = 0x205380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205384:
    // 0x205384: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x205384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205388:
    // 0x205388: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20538c:
    // 0x20538c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_205390:
    if (ctx->pc == 0x205390u) {
        ctx->pc = 0x205394u;
        goto label_205394;
    }
    ctx->pc = 0x20538Cu;
    {
        const bool branch_taken_0x20538c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20538c) {
            ctx->pc = 0x2053A4u;
            goto label_2053a4;
        }
    }
    ctx->pc = 0x205394u;
label_205394:
    // 0x205394: 0xc7a00254  lwc1        $f0, 0x254($sp)
    ctx->pc = 0x205394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205398:
    // 0x205398: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x205398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_20539c:
    // 0x20539c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x20539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2053a0:
    // 0x2053a0: 0xac5100b4  sw          $s1, 0xB4($v0)
    ctx->pc = 0x2053a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 17));
label_2053a4:
    // 0x2053a4: 0xc7a301e8  lwc1        $f3, 0x1E8($sp)
    ctx->pc = 0x2053a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2053a8:
    // 0x2053a8: 0xc7a20250  lwc1        $f2, 0x250($sp)
    ctx->pc = 0x2053a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2053ac:
    // 0x2053ac: 0x8fbe0270  lw          $fp, 0x270($sp)
    ctx->pc = 0x2053acu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2053b0:
    // 0x2053b0: 0xc7c100a8  lwc1        $f1, 0xA8($fp)
    ctx->pc = 0x2053b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2053b4:
    // 0x2053b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2053b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2053b8:
    // 0x2053b8: 0x0  nop
    ctx->pc = 0x2053b8u;
    // NOP
label_2053bc:
    // 0x2053bc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2053bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2053c0:
    // 0x2053c0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2053c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2053c4:
    // 0x2053c4: 0xe7c000a8  swc1        $f0, 0xA8($fp)
    ctx->pc = 0x2053c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 168), bits); }
label_2053c8:
    // 0x2053c8: 0xc7a301ec  lwc1        $f3, 0x1EC($sp)
    ctx->pc = 0x2053c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2053cc:
    // 0x2053cc: 0xc7a20250  lwc1        $f2, 0x250($sp)
    ctx->pc = 0x2053ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2053d0:
    // 0x2053d0: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2053d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2053d4:
    // 0x2053d4: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x2053d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2053d8:
    // 0x2053d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2053d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2053dc:
    // 0x2053dc: 0x0  nop
    ctx->pc = 0x2053dcu;
    // NOP
label_2053e0:
    // 0x2053e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2053e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2053e4:
    // 0x2053e4: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2053e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2053e8:
    // 0x2053e8: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x2053e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
label_2053ec:
    // 0x2053ec: 0xc7a301f0  lwc1        $f3, 0x1F0($sp)
    ctx->pc = 0x2053ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2053f0:
    // 0x2053f0: 0xc7a20250  lwc1        $f2, 0x250($sp)
    ctx->pc = 0x2053f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2053f4:
    // 0x2053f4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2053f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2053f8:
    // 0x2053f8: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x2053f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2053fc:
    // 0x2053fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2053fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205400:
    // 0x205400: 0x0  nop
    ctx->pc = 0x205400u;
    // NOP
label_205404:
    // 0x205404: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x205404u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_205408:
    // 0x205408: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x205408u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_20540c:
    // 0x20540c: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x20540cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
label_205410:
    // 0x205410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205414:
    // 0x205414: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x205414u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_205418:
    // 0x205418: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20541c:
    // 0x20541c: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x20541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205420:
    // 0x205420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205424:
    // 0x205424: 0x0  nop
    ctx->pc = 0x205424u;
    // NOP
label_205428:
    // 0x205428: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x205428u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20542c:
    // 0x20542c: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_205430:
    if (ctx->pc == 0x205430u) {
        ctx->pc = 0x205434u;
        goto label_205434;
    }
    ctx->pc = 0x20542Cu;
    {
        const bool branch_taken_0x20542c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20542c) {
            ctx->pc = 0x20551Cu;
            goto label_20551c;
        }
    }
    ctx->pc = 0x205434u;
label_205434:
    // 0x205434: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205438:
    // 0x205438: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x205438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20543c:
    // 0x20543c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20543cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205440:
    // 0x205440: 0x0  nop
    ctx->pc = 0x205440u;
    // NOP
label_205444:
    // 0x205444: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x205444u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205448:
    // 0x205448: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_20544c:
    if (ctx->pc == 0x20544Cu) {
        ctx->pc = 0x205450u;
        goto label_205450;
    }
    ctx->pc = 0x205448u;
    {
        const bool branch_taken_0x205448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205448) {
            ctx->pc = 0x20551Cu;
            goto label_20551c;
        }
    }
    ctx->pc = 0x205450u;
label_205450:
    // 0x205450: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x205450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205454:
    // 0x205454: 0xc4a100b0  lwc1        $f1, 0xB0($a1)
    ctx->pc = 0x205454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205458:
    // 0x205458: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20545c:
    // 0x20545c: 0x0  nop
    ctx->pc = 0x20545cu;
    // NOP
label_205460:
    // 0x205460: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x205460u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205464:
    // 0x205464: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_205468:
    if (ctx->pc == 0x205468u) {
        ctx->pc = 0x20546Cu;
        goto label_20546c;
    }
    ctx->pc = 0x205464u;
    {
        const bool branch_taken_0x205464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205464) {
            ctx->pc = 0x20551Cu;
            goto label_20551c;
        }
    }
    ctx->pc = 0x20546Cu;
label_20546c:
    // 0x20546c: 0x8f86bb80  lw          $a2, -0x4480($gp)
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_205470:
    // 0x205470: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x205470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_205474:
    // 0x205474: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
label_205478:
    if (ctx->pc == 0x205478u) {
        ctx->pc = 0x20547Cu;
        goto label_20547c;
    }
    ctx->pc = 0x205474u;
    {
        const bool branch_taken_0x205474 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x205474) {
            ctx->pc = 0x205490u;
            goto label_205490;
        }
    }
    ctx->pc = 0x20547Cu;
label_20547c:
    // 0x20547c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x20547cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205480:
    // 0x205480: 0x0  nop
    ctx->pc = 0x205480u;
    // NOP
label_205484:
    // 0x205484: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x205484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_205488:
    // 0x205488: 0x10000008  b           . + 4 + (0x8 << 2)
label_20548c:
    if (ctx->pc == 0x20548Cu) {
        ctx->pc = 0x205490u;
        goto label_205490;
    }
    ctx->pc = 0x205488u;
    {
        const bool branch_taken_0x205488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205488) {
            ctx->pc = 0x2054ACu;
            goto label_2054ac;
        }
    }
    ctx->pc = 0x205490u;
label_205490:
    // 0x205490: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x205490u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_205494:
    // 0x205494: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x205494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_205498:
    // 0x205498: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x205498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20549c:
    // 0x20549c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20549cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2054a0:
    // 0x2054a0: 0x0  nop
    ctx->pc = 0x2054a0u;
    // NOP
label_2054a4:
    // 0x2054a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2054a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2054a8:
    // 0x2054a8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2054a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2054ac:
    // 0x2054ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2054acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2054b0:
    // 0x2054b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2054b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2054b4:
    // 0x2054b4: 0x0  nop
    ctx->pc = 0x2054b4u;
    // NOP
label_2054b8:
    // 0x2054b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2054b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2054bc:
    // 0x2054bc: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2054bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_2054c0:
    // 0x2054c0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2054c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2054c4:
    // 0x2054c4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2054c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2054c8:
    // 0x2054c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2054cc:
    if (ctx->pc == 0x2054CCu) {
        ctx->pc = 0x2054D0u;
        goto label_2054d0;
    }
    ctx->pc = 0x2054C8u;
    {
        const bool branch_taken_0x2054c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2054c8) {
            ctx->pc = 0x2054E4u;
            goto label_2054e4;
        }
    }
    ctx->pc = 0x2054D0u;
label_2054d0:
    // 0x2054d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2054d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2054d4:
    // 0x2054d4: 0x0  nop
    ctx->pc = 0x2054d4u;
    // NOP
label_2054d8:
    // 0x2054d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2054d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2054dc:
    // 0x2054dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2054e0:
    if (ctx->pc == 0x2054E0u) {
        ctx->pc = 0x2054E4u;
        goto label_2054e4;
    }
    ctx->pc = 0x2054DCu;
    {
        const bool branch_taken_0x2054dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2054dc) {
            ctx->pc = 0x205500u;
            goto label_205500;
        }
    }
    ctx->pc = 0x2054E4u;
label_2054e4:
    // 0x2054e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2054e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2054e8:
    // 0x2054e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2054e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2054ec:
    // 0x2054ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2054ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2054f0:
    // 0x2054f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2054f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2054f4:
    // 0x2054f4: 0x0  nop
    ctx->pc = 0x2054f4u;
    // NOP
label_2054f8:
    // 0x2054f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2054f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2054fc:
    // 0x2054fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2054fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_205500:
    // 0x205500: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x205500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_205504:
    // 0x205504: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x205504u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205508:
    // 0x205508: 0x0  nop
    ctx->pc = 0x205508u;
    // NOP
label_20550c:
    // 0x20550c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20550cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_205510:
    // 0x205510: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x205510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_205514:
    // 0x205514: 0x10000008  b           . + 4 + (0x8 << 2)
label_205518:
    if (ctx->pc == 0x205518u) {
        ctx->pc = 0x20551Cu;
        goto label_20551c;
    }
    ctx->pc = 0x205514u;
    {
        const bool branch_taken_0x205514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205514) {
            ctx->pc = 0x205538u;
            goto label_205538;
        }
    }
    ctx->pc = 0x20551Cu;
label_20551c:
    // 0x20551c: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x20551cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205520:
    // 0x205520: 0x8fa701b0  lw          $a3, 0x1B0($sp)
    ctx->pc = 0x205520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_205524:
    // 0x205524: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x205524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_205528:
    // 0x205528: 0x24a500a8  addiu       $a1, $a1, 0xA8
    ctx->pc = 0x205528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
label_20552c:
    // 0x20552c: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x20552cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_205530:
    // 0x205530: 0xc122db4  jal         func_48B6D0
label_205534:
    if (ctx->pc == 0x205534u) {
        ctx->pc = 0x205538u;
        goto label_205538;
    }
    ctx->pc = 0x205530u;
    SET_GPR_U32(ctx, 31, 0x205538u);
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x205530u, 0x205538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205538u;
label_205538:
    // 0x205538: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20553c:
    // 0x20553c: 0xc06479c  jal         func_191E70
label_205540:
    if (ctx->pc == 0x205540u) {
        ctx->pc = 0x205544u;
        goto label_205544;
    }
    ctx->pc = 0x20553Cu;
    SET_GPR_U32(ctx, 31, 0x205544u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20553Cu, 0x205544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205544u;
label_205544:
    // 0x205544: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x205544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_205548:
    // 0x205548: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20554c:
    // 0x20554c: 0x248500c0  addiu       $a1, $a0, 0xC0
    ctx->pc = 0x20554cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_205550:
    // 0x205550: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x205550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205554:
    // 0x205554: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_205558:
    // 0x205558: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x205558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20555c:
    // 0x20555c: 0xc05612c  jal         func_1584B0
label_205560:
    if (ctx->pc == 0x205560u) {
        ctx->pc = 0x205564u;
        goto label_205564;
    }
    ctx->pc = 0x20555Cu;
    SET_GPR_U32(ctx, 31, 0x205564u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20555Cu, 0x205564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205564u;
label_205564:
    // 0x205564: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205568:
    // 0x205568: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x205568u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_20556c:
    // 0x20556c: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x20556cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_205570:
    // 0x205570: 0xc08c6c8  jal         func_231B20
label_205574:
    if (ctx->pc == 0x205574u) {
        ctx->pc = 0x205578u;
        goto label_205578;
    }
    ctx->pc = 0x205570u;
    SET_GPR_U32(ctx, 31, 0x205578u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x205570u, 0x205578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205578u;
label_205578:
    // 0x205578: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x205578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20557c:
    // 0x20557c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_205580:
    // 0x205580: 0xc06479c  jal         func_191E70
label_205584:
    if (ctx->pc == 0x205584u) {
        ctx->pc = 0x205588u;
        goto label_205588;
    }
    ctx->pc = 0x205580u;
    SET_GPR_U32(ctx, 31, 0x205588u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205580u, 0x205588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205588u;
label_205588:
    // 0x205588: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x205588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_20558c:
    // 0x20558c: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x20558cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205590:
    // 0x205590: 0x24a400c0  addiu       $a0, $a1, 0xC0
    ctx->pc = 0x205590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_205594:
    // 0x205594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205598:
    // 0x205598: 0xc05612c  jal         func_1584B0
label_20559c:
    if (ctx->pc == 0x20559Cu) {
        ctx->pc = 0x2055A0u;
        goto label_2055a0;
    }
    ctx->pc = 0x205598u;
    SET_GPR_U32(ctx, 31, 0x2055A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205598u, 0x2055A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055A0u;
label_2055a0:
    // 0x2055a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2055a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2055a4:
    // 0x2055a4: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x2055a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2055a8:
    // 0x2055a8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2055a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2055ac:
    // 0x2055ac: 0xc08c6c8  jal         func_231B20
label_2055b0:
    if (ctx->pc == 0x2055B0u) {
        ctx->pc = 0x2055B4u;
        goto label_2055b4;
    }
    ctx->pc = 0x2055ACu;
    SET_GPR_U32(ctx, 31, 0x2055B4u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x2055ACu, 0x2055B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055B4u;
label_2055b4:
    // 0x2055b4: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x2055b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2055b8:
    // 0x2055b8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2055b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_2055bc:
    // 0x2055bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2055bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2055c0:
    // 0x2055c0: 0x0  nop
    ctx->pc = 0x2055c0u;
    // NOP
label_2055c4:
    // 0x2055c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2055c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2055c8:
    // 0x2055c8: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2055c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_2055cc:
    // 0x2055cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2055ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2055d0:
    // 0x2055d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2055d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2055d4:
    // 0x2055d4: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2055d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2055d8:
    // 0x2055d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2055d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2055dc:
    // 0x2055dc: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2055dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_2055e0:
    // 0x2055e0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_2055e4:
    // 0x2055e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2055e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2055e8:
    // 0x2055e8: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x2055e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2055ec:
    // 0x2055ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2055ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2055f0:
    // 0x2055f0: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x2055f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_2055f4:
    // 0x2055f4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x2055f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_2055f8:
    // 0x2055f8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2055f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2055fc:
    // 0x2055fc: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2055fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205600:
    // 0x205600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205604:
    // 0x205604: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x205604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_205608:
    // 0x205608: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x205608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20560c:
    // 0x20560c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20560cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205610:
    // 0x205610: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x205610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205614:
    // 0x205614: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205614u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205618:
    // 0x205618: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x205618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_20561c:
    // 0x20561c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x20561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_205620:
    // 0x205620: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x205620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_205624:
    // 0x205624: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_205628:
    if (ctx->pc == 0x205628u) {
        ctx->pc = 0x20562Cu;
        goto label_20562c;
    }
    ctx->pc = 0x205624u;
    {
        const bool branch_taken_0x205624 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x205624) {
            ctx->pc = 0x205640u;
            goto label_205640;
        }
    }
    ctx->pc = 0x20562Cu;
label_20562c:
    // 0x20562c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20562cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205630:
    // 0x205630: 0x0  nop
    ctx->pc = 0x205630u;
    // NOP
label_205634:
    // 0x205634: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_205638:
    // 0x205638: 0x10000008  b           . + 4 + (0x8 << 2)
label_20563c:
    if (ctx->pc == 0x20563Cu) {
        ctx->pc = 0x205640u;
        goto label_205640;
    }
    ctx->pc = 0x205638u;
    {
        const bool branch_taken_0x205638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205638) {
            ctx->pc = 0x20565Cu;
            goto label_20565c;
        }
    }
    ctx->pc = 0x205640u;
label_205640:
    // 0x205640: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x205640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_205644:
    // 0x205644: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x205644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_205648:
    // 0x205648: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x205648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_20564c:
    // 0x20564c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20564cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205650:
    // 0x205650: 0x0  nop
    ctx->pc = 0x205650u;
    // NOP
label_205654:
    // 0x205654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_205658:
    // 0x205658: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x205658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_20565c:
    // 0x20565c: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x20565cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_205660:
    // 0x205660: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x205660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_205664:
    // 0x205664: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x205664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_205668:
    // 0x205668: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_20566c:
    if (ctx->pc == 0x20566Cu) {
        ctx->pc = 0x205670u;
        goto label_205670;
    }
    ctx->pc = 0x205668u;
    {
        const bool branch_taken_0x205668 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x205668) {
            ctx->pc = 0x205684u;
            goto label_205684;
        }
    }
    ctx->pc = 0x205670u;
label_205670:
    // 0x205670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205674:
    // 0x205674: 0x0  nop
    ctx->pc = 0x205674u;
    // NOP
label_205678:
    // 0x205678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20567c:
    // 0x20567c: 0x10000008  b           . + 4 + (0x8 << 2)
label_205680:
    if (ctx->pc == 0x205680u) {
        ctx->pc = 0x205684u;
        goto label_205684;
    }
    ctx->pc = 0x20567Cu;
    {
        const bool branch_taken_0x20567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20567c) {
            ctx->pc = 0x2056A0u;
            goto label_2056a0;
        }
    }
    ctx->pc = 0x205684u;
label_205684:
    // 0x205684: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x205684u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_205688:
    // 0x205688: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x205688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20568c:
    // 0x20568c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20568cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_205690:
    // 0x205690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205694:
    // 0x205694: 0x0  nop
    ctx->pc = 0x205694u;
    // NOP
label_205698:
    // 0x205698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x205698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20569c:
    // 0x20569c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20569cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2056a0:
    // 0x2056a0: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x2056a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_2056a4:
    // 0x2056a4: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2056a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2056a8:
    // 0x2056a8: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2056a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056ac:
    // 0x2056ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2056acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2056b0:
    // 0x2056b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2056b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2056b4:
    // 0x2056b4: 0x0  nop
    ctx->pc = 0x2056b4u;
    // NOP
label_2056b8:
    // 0x2056b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2056b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2056bc:
    // 0x2056bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2056c0:
    if (ctx->pc == 0x2056C0u) {
        ctx->pc = 0x2056C4u;
        goto label_2056c4;
    }
    ctx->pc = 0x2056BCu;
    {
        const bool branch_taken_0x2056bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2056bc) {
            ctx->pc = 0x2056D4u;
            goto label_2056d4;
        }
    }
    ctx->pc = 0x2056C4u;
label_2056c4:
    // 0x2056c4: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2056c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056c8:
    // 0x2056c8: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2056c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_2056cc:
    // 0x2056cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2056d0:
    if (ctx->pc == 0x2056D0u) {
        ctx->pc = 0x2056D4u;
        goto label_2056d4;
    }
    ctx->pc = 0x2056CCu;
    {
        const bool branch_taken_0x2056cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2056cc) {
            ctx->pc = 0x205700u;
            goto label_205700;
        }
    }
    ctx->pc = 0x2056D4u;
label_2056d4:
    // 0x2056d4: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2056d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2056d8:
    // 0x2056d8: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2056d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056dc:
    // 0x2056dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2056dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2056e0:
    // 0x2056e0: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x2056e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056e4:
    // 0x2056e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2056e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2056e8:
    // 0x2056e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2056ec:
    if (ctx->pc == 0x2056ECu) {
        ctx->pc = 0x2056F0u;
        goto label_2056f0;
    }
    ctx->pc = 0x2056E8u;
    {
        const bool branch_taken_0x2056e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2056e8) {
            ctx->pc = 0x205700u;
            goto label_205700;
        }
    }
    ctx->pc = 0x2056F0u;
label_2056f0:
    // 0x2056f0: 0xc7a1024c  lwc1        $f1, 0x24C($sp)
    ctx->pc = 0x2056f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2056f4:
    // 0x2056f4: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2056f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2056f8:
    // 0x2056f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2056f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2056fc:
    // 0x2056fc: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2056fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_205700:
    // 0x205700: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x205700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205704:
    // 0x205704: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x205704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205708:
    // 0x205708: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x205708u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20570c:
    // 0x20570c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20570cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205710:
    // 0x205710: 0x0  nop
    ctx->pc = 0x205710u;
    // NOP
label_205714:
    // 0x205714: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205718:
    // 0x205718: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_20571c:
    if (ctx->pc == 0x20571Cu) {
        ctx->pc = 0x205720u;
        goto label_205720;
    }
    ctx->pc = 0x205718u;
    {
        const bool branch_taken_0x205718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205718) {
            ctx->pc = 0x205730u;
            goto label_205730;
        }
    }
    ctx->pc = 0x205720u;
label_205720:
    // 0x205720: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x205720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205724:
    // 0x205724: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x205724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_205728:
    // 0x205728: 0x1000000c  b           . + 4 + (0xC << 2)
label_20572c:
    if (ctx->pc == 0x20572Cu) {
        ctx->pc = 0x205730u;
        goto label_205730;
    }
    ctx->pc = 0x205728u;
    {
        const bool branch_taken_0x205728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205728) {
            ctx->pc = 0x20575Cu;
            goto label_20575c;
        }
    }
    ctx->pc = 0x205730u;
label_205730:
    // 0x205730: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x205730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205734:
    // 0x205734: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x205734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205738:
    // 0x205738: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x205738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20573c:
    // 0x20573c: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x20573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205740:
    // 0x205740: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205744:
    // 0x205744: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_205748:
    if (ctx->pc == 0x205748u) {
        ctx->pc = 0x20574Cu;
        goto label_20574c;
    }
    ctx->pc = 0x205744u;
    {
        const bool branch_taken_0x205744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205744) {
            ctx->pc = 0x20575Cu;
            goto label_20575c;
        }
    }
    ctx->pc = 0x20574Cu;
label_20574c:
    // 0x20574c: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x20574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205750:
    // 0x205750: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x205750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205754:
    // 0x205754: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x205754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205758:
    // 0x205758: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x205758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_20575c:
    // 0x20575c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x20575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_205760:
    // 0x205760: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x205760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205764:
    // 0x205764: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205768:
    // 0x205768: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x205768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20576c:
    // 0x20576c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20576cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_205770:
    // 0x205770: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x205770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_205774:
    // 0x205774: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205778:
    // 0x205778: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x205778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20577c:
    // 0x20577c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20577cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205780:
    // 0x205780: 0x0  nop
    ctx->pc = 0x205780u;
    // NOP
label_205784:
    // 0x205784: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205788:
    // 0x205788: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_20578c:
    if (ctx->pc == 0x20578Cu) {
        ctx->pc = 0x205790u;
        goto label_205790;
    }
    ctx->pc = 0x205788u;
    {
        const bool branch_taken_0x205788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205788) {
            ctx->pc = 0x20579Cu;
            goto label_20579c;
        }
    }
    ctx->pc = 0x205790u;
label_205790:
    // 0x205790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205794:
    // 0x205794: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205798:
    // 0x205798: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x205798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_20579c:
    // 0x20579c: 0x16800028  bnez        $s4, . + 4 + (0x28 << 2)
label_2057a0:
    if (ctx->pc == 0x2057A0u) {
        ctx->pc = 0x2057A4u;
        goto label_2057a4;
    }
    ctx->pc = 0x20579Cu;
    {
        const bool branch_taken_0x20579c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x20579c) {
            ctx->pc = 0x205840u;
            goto label_205840;
        }
    }
    ctx->pc = 0x2057A4u;
label_2057a4:
    // 0x2057a4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2057a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2057a8:
    // 0x2057a8: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x2057a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2057ac:
    // 0x2057ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2057acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2057b0:
    // 0x2057b0: 0x0  nop
    ctx->pc = 0x2057b0u;
    // NOP
label_2057b4:
    // 0x2057b4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2057b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2057b8:
    // 0x2057b8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_2057bc:
    if (ctx->pc == 0x2057BCu) {
        ctx->pc = 0x2057C0u;
        goto label_2057c0;
    }
    ctx->pc = 0x2057B8u;
    {
        const bool branch_taken_0x2057b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2057b8) {
            ctx->pc = 0x2057F4u;
            goto label_2057f4;
        }
    }
    ctx->pc = 0x2057C0u;
label_2057c0:
    // 0x2057c0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2057c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2057c4:
    // 0x2057c4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2057c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2057c8:
    // 0x2057c8: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2057c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
label_2057cc:
    // 0x2057cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2057ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2057d0:
    // 0x2057d0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2057d4:
    // 0x2057d4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2057d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2057d8:
    // 0x2057d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2057d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2057dc:
    // 0x2057dc: 0x0  nop
    ctx->pc = 0x2057dcu;
    // NOP
label_2057e0:
    // 0x2057e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2057e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2057e4:
    // 0x2057e4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2057e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2057e8:
    // 0x2057e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2057e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2057ec:
    // 0x2057ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_2057f0:
    if (ctx->pc == 0x2057F0u) {
        ctx->pc = 0x2057F4u;
        goto label_2057f4;
    }
    ctx->pc = 0x2057ECu;
    {
        const bool branch_taken_0x2057ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057ec) {
            ctx->pc = 0x205820u;
            goto label_205820;
        }
    }
    ctx->pc = 0x2057F4u;
label_2057f4:
    // 0x2057f4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2057f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2057f8:
    // 0x2057f8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2057f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2057fc:
    // 0x2057fc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2057fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_205800:
    // 0x205800: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x205800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_205804:
    // 0x205804: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205808:
    // 0x205808: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x205808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20580c:
    // 0x20580c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20580cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205810:
    // 0x205810: 0x0  nop
    ctx->pc = 0x205810u;
    // NOP
label_205814:
    // 0x205814: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x205814u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_205818:
    // 0x205818: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x205818u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_20581c:
    // 0x20581c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20581cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_205820:
    // 0x205820: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x205820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205824:
    // 0x205824: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x205824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_205828:
    // 0x205828: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20582c:
    // 0x20582c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_205830:
    // 0x205830: 0xc0c39e2  jal         func_30E788
label_205834:
    if (ctx->pc == 0x205834u) {
        ctx->pc = 0x205838u;
        goto label_205838;
    }
    ctx->pc = 0x205830u;
    SET_GPR_U32(ctx, 31, 0x205838u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x205830u, 0x205838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205838u;
label_205838:
    // 0x205838: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20583c:
    // 0x20583c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20583cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_205840:
    // 0x205840: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205844:
    // 0x205844: 0xc06479c  jal         func_191E70
label_205848:
    if (ctx->pc == 0x205848u) {
        ctx->pc = 0x20584Cu;
        goto label_20584c;
    }
    ctx->pc = 0x205844u;
    SET_GPR_U32(ctx, 31, 0x20584Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205844u, 0x20584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20584Cu;
label_20584c:
    // 0x20584c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x20584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_205850:
    // 0x205850: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205854:
    // 0x205854: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x205854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205858:
    // 0x205858: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x205858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20585c:
    // 0x20585c: 0xc05612c  jal         func_1584B0
label_205860:
    if (ctx->pc == 0x205860u) {
        ctx->pc = 0x205864u;
        goto label_205864;
    }
    ctx->pc = 0x20585Cu;
    SET_GPR_U32(ctx, 31, 0x205864u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20585Cu, 0x205864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205864u;
label_205864:
    // 0x205864: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205868:
    // 0x205868: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x205868u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_20586c:
    // 0x20586c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20586cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_205870:
    // 0x205870: 0xc08c8dc  jal         func_232370
label_205874:
    if (ctx->pc == 0x205874u) {
        ctx->pc = 0x205878u;
        goto label_205878;
    }
    ctx->pc = 0x205870u;
    SET_GPR_U32(ctx, 31, 0x205878u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205870u, 0x205878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205878u;
label_205878:
    // 0x205878: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20587c:
    // 0x20587c: 0xc06479c  jal         func_191E70
label_205880:
    if (ctx->pc == 0x205880u) {
        ctx->pc = 0x205884u;
        goto label_205884;
    }
    ctx->pc = 0x20587Cu;
    SET_GPR_U32(ctx, 31, 0x205884u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x20587Cu, 0x205884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205884u;
label_205884:
    // 0x205884: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x205884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_205888:
    // 0x205888: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20588c:
    // 0x20588c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x20588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205890:
    // 0x205890: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x205890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_205894:
    // 0x205894: 0xc05612c  jal         func_1584B0
label_205898:
    if (ctx->pc == 0x205898u) {
        ctx->pc = 0x20589Cu;
        goto label_20589c;
    }
    ctx->pc = 0x205894u;
    SET_GPR_U32(ctx, 31, 0x20589Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205894u, 0x20589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20589Cu;
label_20589c:
    // 0x20589c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20589cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2058a0:
    // 0x2058a0: 0x14102b  sltu        $v0, $zero, $s4
    ctx->pc = 0x2058a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2058a4:
    // 0x2058a4: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x2058a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2058a8:
    // 0x2058a8: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2058a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2058ac:
    // 0x2058ac: 0xc08c8dc  jal         func_232370
label_2058b0:
    if (ctx->pc == 0x2058B0u) {
        ctx->pc = 0x2058B4u;
        goto label_2058b4;
    }
    ctx->pc = 0x2058ACu;
    SET_GPR_U32(ctx, 31, 0x2058B4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x2058ACu, 0x2058B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058B4u;
label_2058b4:
    // 0x2058b4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2058b8:
    if (ctx->pc == 0x2058B8u) {
        ctx->pc = 0x2058BCu;
        goto label_2058bc;
    }
    ctx->pc = 0x2058B4u;
    {
        const bool branch_taken_0x2058b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058b4) {
            ctx->pc = 0x2058C8u;
            goto label_2058c8;
        }
    }
    ctx->pc = 0x2058BCu;
label_2058bc:
    // 0x2058bc: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x2058bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2058c0:
    // 0x2058c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2058c4:
    if (ctx->pc == 0x2058C4u) {
        ctx->pc = 0x2058C8u;
        goto label_2058c8;
    }
    ctx->pc = 0x2058C0u;
    {
        const bool branch_taken_0x2058c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2058c0) {
            ctx->pc = 0x2058CCu;
            goto label_2058cc;
        }
    }
    ctx->pc = 0x2058C8u;
label_2058c8:
    // 0x2058c8: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x2058c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2058cc:
    // 0x2058cc: 0xafb70244  sw          $s7, 0x244($sp)
    ctx->pc = 0x2058ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 23));
label_2058d0:
    // 0x2058d0: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2058d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2058d4:
    // 0x2058d4: 0xc06479c  jal         func_191E70
label_2058d8:
    if (ctx->pc == 0x2058D8u) {
        ctx->pc = 0x2058DCu;
        goto label_2058dc;
    }
    ctx->pc = 0x2058D4u;
    SET_GPR_U32(ctx, 31, 0x2058DCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x2058D4u, 0x2058DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058DCu;
label_2058dc:
    // 0x2058dc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2058dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2058e0:
    // 0x2058e0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x2058e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_2058e4:
    // 0x2058e4: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2058e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2058e8:
    // 0x2058e8: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x2058e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_2058ec:
    // 0x2058ec: 0xc05612c  jal         func_1584B0
label_2058f0:
    if (ctx->pc == 0x2058F0u) {
        ctx->pc = 0x2058F4u;
        goto label_2058f4;
    }
    ctx->pc = 0x2058ECu;
    SET_GPR_U32(ctx, 31, 0x2058F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2058ECu, 0x2058F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2058F4u;
label_2058f4:
    // 0x2058f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2058f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2058f8:
    // 0x2058f8: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x2058f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2058fc:
    // 0x2058fc: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2058fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205900:
    // 0x205900: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x205900u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205904:
    // 0x205904: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x205904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205908:
    // 0x205908: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x205908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20590c:
    // 0x20590c: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x20590cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205910:
    // 0x205910: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x205910u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_205914:
    // 0x205914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205918:
    // 0x205918: 0xc08c208  jal         func_230820
label_20591c:
    if (ctx->pc == 0x20591Cu) {
        ctx->pc = 0x205920u;
        goto label_205920;
    }
    ctx->pc = 0x205918u;
    SET_GPR_U32(ctx, 31, 0x205920u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x205918u, 0x205920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205920u;
label_205920:
    // 0x205920: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205924:
    // 0x205924: 0xc06479c  jal         func_191E70
label_205928:
    if (ctx->pc == 0x205928u) {
        ctx->pc = 0x20592Cu;
        goto label_20592c;
    }
    ctx->pc = 0x205924u;
    SET_GPR_U32(ctx, 31, 0x20592Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205924u, 0x20592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20592Cu;
label_20592c:
    // 0x20592c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x20592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_205930:
    // 0x205930: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205934:
    // 0x205934: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x205934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205938:
    // 0x205938: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x205938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_20593c:
    // 0x20593c: 0xc05612c  jal         func_1584B0
label_205940:
    if (ctx->pc == 0x205940u) {
        ctx->pc = 0x205944u;
        goto label_205944;
    }
    ctx->pc = 0x20593Cu;
    SET_GPR_U32(ctx, 31, 0x205944u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x20593Cu, 0x205944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205944u;
label_205944:
    // 0x205944: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205948:
    // 0x205948: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20594c:
    // 0x20594c: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x20594cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_205950:
    // 0x205950: 0x27a601d8  addiu       $a2, $sp, 0x1D8
    ctx->pc = 0x205950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_205954:
    // 0x205954: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x205954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_205958:
    // 0x205958: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x205958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20595c:
    // 0x20595c: 0xc08c64c  jal         func_231930
label_205960:
    if (ctx->pc == 0x205960u) {
        ctx->pc = 0x205964u;
        goto label_205964;
    }
    ctx->pc = 0x20595Cu;
    SET_GPR_U32(ctx, 31, 0x205964u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x20595Cu, 0x205964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205964u;
label_205964:
    // 0x205964: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x205964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205968:
    // 0x205968: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x205968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20596c:
    // 0x20596c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205970:
    // 0x205970: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x205970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205974:
    // 0x205974: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x205974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205978:
    // 0x205978: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x205978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20597c:
    // 0x20597c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20597cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_205980:
    // 0x205980: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x205980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205984:
    // 0x205984: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x205984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205988:
    // 0x205988: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_20598c:
    if (ctx->pc == 0x20598Cu) {
        ctx->pc = 0x205990u;
        goto label_205990;
    }
    ctx->pc = 0x205988u;
    {
        const bool branch_taken_0x205988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205988) {
            ctx->pc = 0x205A3Cu;
            goto label_205a3c;
        }
    }
    ctx->pc = 0x205990u;
label_205990:
    // 0x205990: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x205990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_205994:
    // 0x205994: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x205994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_205998:
    // 0x205998: 0xc7a2024c  lwc1        $f2, 0x24C($sp)
    ctx->pc = 0x205998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20599c:
    // 0x20599c: 0xc7a101d0  lwc1        $f1, 0x1D0($sp)
    ctx->pc = 0x20599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2059a0:
    // 0x2059a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2059a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2059a4:
    // 0x2059a4: 0x0  nop
    ctx->pc = 0x2059a4u;
    // NOP
label_2059a8:
    // 0x2059a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2059a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2059ac:
    // 0x2059ac: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2059acu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2059b0:
    // 0x2059b0: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2059b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2059b4:
    // 0x2059b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2059b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2059b8:
    // 0x2059b8: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_2059bc:
    if (ctx->pc == 0x2059BCu) {
        ctx->pc = 0x2059C0u;
        goto label_2059c0;
    }
    ctx->pc = 0x2059B8u;
    {
        const bool branch_taken_0x2059b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2059b8) {
            ctx->pc = 0x205A3Cu;
            goto label_205a3c;
        }
    }
    ctx->pc = 0x2059C0u;
label_2059c0:
    // 0x2059c0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2059c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2059c4:
    // 0x2059c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2059c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2059c8:
    // 0x2059c8: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x2059c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2059cc:
    // 0x2059cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2059ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2059d0:
    // 0x2059d0: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2059d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2059d4:
    // 0x2059d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2059d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2059d8:
    // 0x2059d8: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2059d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2059dc:
    // 0x2059dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2059dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2059e0:
    // 0x2059e0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_2059e4:
    if (ctx->pc == 0x2059E4u) {
        ctx->pc = 0x2059E8u;
        goto label_2059e8;
    }
    ctx->pc = 0x2059E0u;
    {
        const bool branch_taken_0x2059e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2059e0) {
            ctx->pc = 0x205A3Cu;
            goto label_205a3c;
        }
    }
    ctx->pc = 0x2059E8u;
label_2059e8:
    // 0x2059e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2059e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2059ec:
    // 0x2059ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2059ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2059f0:
    // 0x2059f0: 0xc7a20248  lwc1        $f2, 0x248($sp)
    ctx->pc = 0x2059f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2059f4:
    // 0x2059f4: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x2059f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2059f8:
    // 0x2059f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2059f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2059fc:
    // 0x2059fc: 0x0  nop
    ctx->pc = 0x2059fcu;
    // NOP
label_205a00:
    // 0x205a00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x205a00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_205a04:
    // 0x205a04: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x205a04u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_205a08:
    // 0x205a08: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x205a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205a0c:
    // 0x205a0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x205a0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205a10:
    // 0x205a10: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_205a14:
    if (ctx->pc == 0x205A14u) {
        ctx->pc = 0x205A18u;
        goto label_205a18;
    }
    ctx->pc = 0x205A10u;
    {
        const bool branch_taken_0x205a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205a10) {
            ctx->pc = 0x205A3Cu;
            goto label_205a3c;
        }
    }
    ctx->pc = 0x205A18u;
label_205a18:
    // 0x205a18: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x205a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_205a1c:
    // 0x205a1c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x205a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205a20:
    // 0x205a20: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205a24:
    // 0x205a24: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x205a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205a28:
    // 0x205a28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x205a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_205a2c:
    // 0x205a2c: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x205a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_205a30:
    // 0x205a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205a34:
    // 0x205a34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x205a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_205a38:
    // 0x205a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x205a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a3c:
    // 0x205a3c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205a40:
    // 0x205a40: 0xc06479c  jal         func_191E70
label_205a44:
    if (ctx->pc == 0x205A44u) {
        ctx->pc = 0x205A48u;
        goto label_205a48;
    }
    ctx->pc = 0x205A40u;
    SET_GPR_U32(ctx, 31, 0x205A48u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205A40u, 0x205A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A48u;
label_205a48:
    // 0x205a48: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x205a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_205a4c:
    // 0x205a4c: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x205a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205a50:
    // 0x205a50: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x205a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_205a54:
    // 0x205a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a58:
    // 0x205a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x205a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205a5c:
    // 0x205a5c: 0xc05612c  jal         func_1584B0
label_205a60:
    if (ctx->pc == 0x205A60u) {
        ctx->pc = 0x205A64u;
        goto label_205a64;
    }
    ctx->pc = 0x205A5Cu;
    SET_GPR_U32(ctx, 31, 0x205A64u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205A5Cu, 0x205A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A64u;
label_205a64:
    // 0x205a64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a68:
    // 0x205a68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x205a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205a6c:
    // 0x205a6c: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x205a6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_205a70:
    // 0x205a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a74:
    // 0x205a74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205a78:
    // 0x205a78: 0xc08c8dc  jal         func_232370
label_205a7c:
    if (ctx->pc == 0x205A7Cu) {
        ctx->pc = 0x205A80u;
        goto label_205a80;
    }
    ctx->pc = 0x205A78u;
    SET_GPR_U32(ctx, 31, 0x205A80u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205A78u, 0x205A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A80u;
label_205a80:
    // 0x205a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a84:
    // 0x205a84: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205a88:
    // 0x205a88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205a8c:
    // 0x205a8c: 0xc06479c  jal         func_191E70
label_205a90:
    if (ctx->pc == 0x205A90u) {
        ctx->pc = 0x205A94u;
        goto label_205a94;
    }
    ctx->pc = 0x205A8Cu;
    SET_GPR_U32(ctx, 31, 0x205A94u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205A8Cu, 0x205A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205A94u;
label_205a94:
    // 0x205a94: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x205a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_205a98:
    // 0x205a98: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205a9c:
    // 0x205a9c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x205a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205aa0:
    // 0x205aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x205aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_205aa4:
    // 0x205aa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205aa8:
    // 0x205aa8: 0xc05612c  jal         func_1584B0
label_205aac:
    if (ctx->pc == 0x205AACu) {
        ctx->pc = 0x205AB0u;
        goto label_205ab0;
    }
    ctx->pc = 0x205AA8u;
    SET_GPR_U32(ctx, 31, 0x205AB0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205AA8u, 0x205AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AB0u;
label_205ab0:
    // 0x205ab0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205ab4:
    // 0x205ab4: 0x7ba40190  lq          $a0, 0x190($sp)
    ctx->pc = 0x205ab4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_205ab8:
    // 0x205ab8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205abc:
    // 0x205abc: 0xc08c8dc  jal         func_232370
label_205ac0:
    if (ctx->pc == 0x205AC0u) {
        ctx->pc = 0x205AC4u;
        goto label_205ac4;
    }
    ctx->pc = 0x205ABCu;
    SET_GPR_U32(ctx, 31, 0x205AC4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205ABCu, 0x205AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AC4u;
label_205ac4:
    // 0x205ac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205ac8:
    // 0x205ac8: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205acc:
    // 0x205acc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205ad0:
    // 0x205ad0: 0xc06479c  jal         func_191E70
label_205ad4:
    if (ctx->pc == 0x205AD4u) {
        ctx->pc = 0x205AD8u;
        goto label_205ad8;
    }
    ctx->pc = 0x205AD0u;
    SET_GPR_U32(ctx, 31, 0x205AD8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205AD0u, 0x205AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AD8u;
label_205ad8:
    // 0x205ad8: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x205ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_205adc:
    // 0x205adc: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205ae0:
    // 0x205ae0: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x205ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205ae4:
    // 0x205ae4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x205ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205ae8:
    // 0x205ae8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x205ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_205aec:
    // 0x205aec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205af0:
    // 0x205af0: 0xc05612c  jal         func_1584B0
label_205af4:
    if (ctx->pc == 0x205AF4u) {
        ctx->pc = 0x205AF8u;
        goto label_205af8;
    }
    ctx->pc = 0x205AF0u;
    SET_GPR_U32(ctx, 31, 0x205AF8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205AF0u, 0x205AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205AF8u;
label_205af8:
    // 0x205af8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205afc:
    // 0x205afc: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x205afcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_205b00:
    // 0x205b00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205b04:
    // 0x205b04: 0xc08c8dc  jal         func_232370
label_205b08:
    if (ctx->pc == 0x205B08u) {
        ctx->pc = 0x205B0Cu;
        goto label_205b0c;
    }
    ctx->pc = 0x205B04u;
    SET_GPR_U32(ctx, 31, 0x205B0Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205B04u, 0x205B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B0Cu;
label_205b0c:
    // 0x205b0c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205b10:
    // 0x205b10: 0xc06479c  jal         func_191E70
label_205b14:
    if (ctx->pc == 0x205B14u) {
        ctx->pc = 0x205B18u;
        goto label_205b18;
    }
    ctx->pc = 0x205B10u;
    SET_GPR_U32(ctx, 31, 0x205B18u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205B10u, 0x205B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B18u;
label_205b18:
    // 0x205b18: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x205b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_205b1c:
    // 0x205b1c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205b20:
    // 0x205b20: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x205b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_205b24:
    // 0x205b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b28:
    // 0x205b28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x205b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_205b2c:
    // 0x205b2c: 0xc05612c  jal         func_1584B0
label_205b30:
    if (ctx->pc == 0x205B30u) {
        ctx->pc = 0x205B34u;
        goto label_205b34;
    }
    ctx->pc = 0x205B2Cu;
    SET_GPR_U32(ctx, 31, 0x205B34u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205B2Cu, 0x205B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B34u;
label_205b34:
    // 0x205b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b38:
    // 0x205b38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x205b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205b3c:
    // 0x205b3c: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x205b3cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_205b40:
    // 0x205b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b44:
    // 0x205b44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x205b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_205b48:
    // 0x205b48: 0xc08c8dc  jal         func_232370
label_205b4c:
    if (ctx->pc == 0x205B4Cu) {
        ctx->pc = 0x205B50u;
        goto label_205b50;
    }
    ctx->pc = 0x205B48u;
    SET_GPR_U32(ctx, 31, 0x205B50u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205B48u, 0x205B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B50u;
label_205b50:
    // 0x205b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b54:
    // 0x205b54: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205b58:
    // 0x205b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b5c:
    // 0x205b5c: 0xc06479c  jal         func_191E70
label_205b60:
    if (ctx->pc == 0x205B60u) {
        ctx->pc = 0x205B64u;
        goto label_205b64;
    }
    ctx->pc = 0x205B5Cu;
    SET_GPR_U32(ctx, 31, 0x205B64u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205B5Cu, 0x205B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B64u;
label_205b64:
    // 0x205b64: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x205b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_205b68:
    // 0x205b68: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x205b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205b6c:
    // 0x205b6c: 0x24c200c0  addiu       $v0, $a2, 0xC0
    ctx->pc = 0x205b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
label_205b70:
    // 0x205b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b74:
    // 0x205b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205b78:
    // 0x205b78: 0xc05612c  jal         func_1584B0
label_205b7c:
    if (ctx->pc == 0x205B7Cu) {
        ctx->pc = 0x205B80u;
        goto label_205b80;
    }
    ctx->pc = 0x205B78u;
    SET_GPR_U32(ctx, 31, 0x205B80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205B78u, 0x205B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B80u;
label_205b80:
    // 0x205b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b84:
    // 0x205b84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x205b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_205b88:
    // 0x205b88: 0x10202b  sltu        $a0, $zero, $s0
    ctx->pc = 0x205b88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_205b8c:
    // 0x205b8c: 0x38860001  xori        $a2, $a0, 0x1
    ctx->pc = 0x205b8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_205b90:
    // 0x205b90: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x205b90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_205b94:
    // 0x205b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205b98:
    // 0x205b98: 0xc08c8dc  jal         func_232370
label_205b9c:
    if (ctx->pc == 0x205B9Cu) {
        ctx->pc = 0x205BA0u;
        goto label_205ba0;
    }
    ctx->pc = 0x205B98u;
    SET_GPR_U32(ctx, 31, 0x205BA0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205B98u, 0x205BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BA0u;
label_205ba0:
    // 0x205ba0: 0x8fb10270  lw          $s1, 0x270($sp)
    ctx->pc = 0x205ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205ba4:
    // 0x205ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205ba8:
    // 0x205ba8: 0xc06479c  jal         func_191E70
label_205bac:
    if (ctx->pc == 0x205BACu) {
        ctx->pc = 0x205BB0u;
        goto label_205bb0;
    }
    ctx->pc = 0x205BA8u;
    SET_GPR_U32(ctx, 31, 0x205BB0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205BA8u, 0x205BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BB0u;
label_205bb0:
    // 0x205bb0: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x205bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_205bb4:
    // 0x205bb4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205bb8:
    // 0x205bb8: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x205bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205bbc:
    // 0x205bbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x205bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205bc0:
    // 0x205bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205bc4:
    // 0x205bc4: 0xc05612c  jal         func_1584B0
label_205bc8:
    if (ctx->pc == 0x205BC8u) {
        ctx->pc = 0x205BCCu;
        goto label_205bcc;
    }
    ctx->pc = 0x205BC4u;
    SET_GPR_U32(ctx, 31, 0x205BCCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205BC4u, 0x205BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BCCu;
label_205bcc:
    // 0x205bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205bd0:
    // 0x205bd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x205bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205bd4:
    // 0x205bd4: 0x10282b  sltu        $a1, $zero, $s0
    ctx->pc = 0x205bd4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_205bd8:
    // 0x205bd8: 0x38a60001  xori        $a2, $a1, 0x1
    ctx->pc = 0x205bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_205bdc:
    // 0x205bdc: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x205bdcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_205be0:
    // 0x205be0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205be4:
    // 0x205be4: 0xc08c8dc  jal         func_232370
label_205be8:
    if (ctx->pc == 0x205BE8u) {
        ctx->pc = 0x205BECu;
        goto label_205bec;
    }
    ctx->pc = 0x205BE4u;
    SET_GPR_U32(ctx, 31, 0x205BECu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205BE4u, 0x205BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205BECu;
label_205bec:
    // 0x205bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205bf0:
    // 0x205bf0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205bf4:
    // 0x205bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205bf8:
    // 0x205bf8: 0xc06479c  jal         func_191E70
label_205bfc:
    if (ctx->pc == 0x205BFCu) {
        ctx->pc = 0x205C00u;
        goto label_205c00;
    }
    ctx->pc = 0x205BF8u;
    SET_GPR_U32(ctx, 31, 0x205C00u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205BF8u, 0x205C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C00u;
label_205c00:
    // 0x205c00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x205c00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205c04:
    // 0x205c04: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205c08:
    // 0x205c08: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x205c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_205c0c:
    // 0x205c0c: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x205c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_205c10:
    // 0x205c10: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x205c10u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_205c14:
    // 0x205c14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x205c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205c18:
    // 0x205c18: 0xc05612c  jal         func_1584B0
label_205c1c:
    if (ctx->pc == 0x205C1Cu) {
        ctx->pc = 0x205C20u;
        goto label_205c20;
    }
    ctx->pc = 0x205C18u;
    SET_GPR_U32(ctx, 31, 0x205C20u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205C18u, 0x205C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C20u;
label_205c20:
    // 0x205c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205c24:
    // 0x205c24: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x205c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_205c28:
    // 0x205c28: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x205c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_205c2c:
    // 0x205c2c: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x205c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_205c30:
    // 0x205c30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x205c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_205c34:
    // 0x205c34: 0xc08c8dc  jal         func_232370
label_205c38:
    if (ctx->pc == 0x205C38u) {
        ctx->pc = 0x205C3Cu;
        goto label_205c3c;
    }
    ctx->pc = 0x205C34u;
    SET_GPR_U32(ctx, 31, 0x205C3Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205C34u, 0x205C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C3Cu;
label_205c3c:
    // 0x205c3c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205c40:
    // 0x205c40: 0xc06479c  jal         func_191E70
label_205c44:
    if (ctx->pc == 0x205C44u) {
        ctx->pc = 0x205C48u;
        goto label_205c48;
    }
    ctx->pc = 0x205C40u;
    SET_GPR_U32(ctx, 31, 0x205C48u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205C40u, 0x205C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C48u;
label_205c48:
    // 0x205c48: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x205c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_205c4c:
    // 0x205c4c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205c50:
    // 0x205c50: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x205c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205c54:
    // 0x205c54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x205c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_205c58:
    // 0x205c58: 0xc05612c  jal         func_1584B0
label_205c5c:
    if (ctx->pc == 0x205C5Cu) {
        ctx->pc = 0x205C60u;
        goto label_205c60;
    }
    ctx->pc = 0x205C58u;
    SET_GPR_U32(ctx, 31, 0x205C60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205C58u, 0x205C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C60u;
label_205c60:
    // 0x205c60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205c64:
    // 0x205c64: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x205c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_205c68:
    // 0x205c68: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x205c68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_205c6c:
    // 0x205c6c: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x205c6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_205c70:
    // 0x205c70: 0xc08c8dc  jal         func_232370
label_205c74:
    if (ctx->pc == 0x205C74u) {
        ctx->pc = 0x205C78u;
        goto label_205c78;
    }
    ctx->pc = 0x205C70u;
    SET_GPR_U32(ctx, 31, 0x205C78u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x205C70u, 0x205C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205C78u;
label_205c78:
    // 0x205c78: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_205c7c:
    if (ctx->pc == 0x205C7Cu) {
        ctx->pc = 0x205C80u;
        goto label_205c80;
    }
    ctx->pc = 0x205C78u;
    {
        const bool branch_taken_0x205c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c78) {
            ctx->pc = 0x205C90u;
            goto label_205c90;
        }
    }
    ctx->pc = 0x205C80u;
label_205c80:
    // 0x205c80: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x205c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_205c84:
    // 0x205c84: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x205c84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205c88:
    // 0x205c88: 0x10000003  b           . + 4 + (0x3 << 2)
label_205c8c:
    if (ctx->pc == 0x205C8Cu) {
        ctx->pc = 0x205C90u;
        goto label_205c90;
    }
    ctx->pc = 0x205C88u;
    {
        const bool branch_taken_0x205c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205c88) {
            ctx->pc = 0x205C98u;
            goto label_205c98;
        }
    }
    ctx->pc = 0x205C90u;
label_205c90:
    // 0x205c90: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x205c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_205c94:
    // 0x205c94: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x205c94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_205c98:
    // 0x205c98: 0xafb60240  sw          $s6, 0x240($sp)
    ctx->pc = 0x205c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 22));
label_205c9c:
    // 0x205c9c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205ca0:
    // 0x205ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205ca4:
    // 0x205ca4: 0xc06479c  jal         func_191E70
label_205ca8:
    if (ctx->pc == 0x205CA8u) {
        ctx->pc = 0x205CACu;
        goto label_205cac;
    }
    ctx->pc = 0x205CA4u;
    SET_GPR_U32(ctx, 31, 0x205CACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205CA4u, 0x205CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CACu;
label_205cac:
    // 0x205cac: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x205cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_205cb0:
    // 0x205cb0: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205cb4:
    // 0x205cb4: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x205cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205cb8:
    // 0x205cb8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x205cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_205cbc:
    // 0x205cbc: 0xc05612c  jal         func_1584B0
label_205cc0:
    if (ctx->pc == 0x205CC0u) {
        ctx->pc = 0x205CC4u;
        goto label_205cc4;
    }
    ctx->pc = 0x205CBCu;
    SET_GPR_U32(ctx, 31, 0x205CC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205CBCu, 0x205CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CC4u;
label_205cc4:
    // 0x205cc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205cc8:
    // 0x205cc8: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x205cc8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_205ccc:
    // 0x205ccc: 0x27a601c8  addiu       $a2, $sp, 0x1C8
    ctx->pc = 0x205cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_205cd0:
    // 0x205cd0: 0xc08c6c8  jal         func_231B20
label_205cd4:
    if (ctx->pc == 0x205CD4u) {
        ctx->pc = 0x205CD8u;
        goto label_205cd8;
    }
    ctx->pc = 0x205CD0u;
    SET_GPR_U32(ctx, 31, 0x205CD8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x205CD0u, 0x205CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CD8u;
label_205cd8:
    // 0x205cd8: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205cdc:
    // 0x205cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205ce0:
    // 0x205ce0: 0xc06479c  jal         func_191E70
label_205ce4:
    if (ctx->pc == 0x205CE4u) {
        ctx->pc = 0x205CE8u;
        goto label_205ce8;
    }
    ctx->pc = 0x205CE0u;
    SET_GPR_U32(ctx, 31, 0x205CE8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205CE0u, 0x205CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205CE8u;
label_205ce8:
    // 0x205ce8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x205ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_205cec:
    // 0x205cec: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x205cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205cf0:
    // 0x205cf0: 0x24a200c0  addiu       $v0, $a1, 0xC0
    ctx->pc = 0x205cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
label_205cf4:
    // 0x205cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205cf8:
    // 0x205cf8: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x205cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_205cfc:
    // 0x205cfc: 0xc05612c  jal         func_1584B0
label_205d00:
    if (ctx->pc == 0x205D00u) {
        ctx->pc = 0x205D04u;
        goto label_205d04;
    }
    ctx->pc = 0x205CFCu;
    SET_GPR_U32(ctx, 31, 0x205D04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205CFCu, 0x205D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D04u;
label_205d04:
    // 0x205d04: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x205d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205d08:
    // 0x205d08: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x205d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_205d0c:
    // 0x205d0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x205d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_205d10:
    // 0x205d10: 0xc7a201c8  lwc1        $f2, 0x1C8($sp)
    ctx->pc = 0x205d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205d14:
    // 0x205d14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x205d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_205d18:
    // 0x205d18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205d1c:
    // 0x205d1c: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x205d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205d20:
    // 0x205d20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x205d20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205d24:
    // 0x205d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205d28:
    // 0x205d28: 0x0  nop
    ctx->pc = 0x205d28u;
    // NOP
label_205d2c:
    // 0x205d2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x205d2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_205d30:
    // 0x205d30: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x205d30u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_205d34:
    // 0x205d34: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x205d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_205d38:
    // 0x205d38: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x205d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_205d3c:
    // 0x205d3c: 0xc7a201cc  lwc1        $f2, 0x1CC($sp)
    ctx->pc = 0x205d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205d40:
    // 0x205d40: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x205d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_205d44:
    // 0x205d44: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x205d44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205d48:
    // 0x205d48: 0xc7a00248  lwc1        $f0, 0x248($sp)
    ctx->pc = 0x205d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205d4c:
    // 0x205d4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x205d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205d50:
    // 0x205d50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205d54:
    // 0x205d54: 0x0  nop
    ctx->pc = 0x205d54u;
    // NOP
label_205d58:
    // 0x205d58: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x205d58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_205d5c:
    // 0x205d5c: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x205d5cu;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_205d60:
    // 0x205d60: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x205d60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_205d64:
    // 0x205d64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x205d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_205d68:
    // 0x205d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205d6c:
    // 0x205d6c: 0xc08c208  jal         func_230820
label_205d70:
    if (ctx->pc == 0x205D70u) {
        ctx->pc = 0x205D74u;
        goto label_205d74;
    }
    ctx->pc = 0x205D6Cu;
    SET_GPR_U32(ctx, 31, 0x205D74u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x205D6Cu, 0x205D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D74u;
label_205d74:
    // 0x205d74: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x205d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_205d78:
    // 0x205d78: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x205d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_205d7c:
    // 0x205d7c: 0xc7a2024c  lwc1        $f2, 0x24C($sp)
    ctx->pc = 0x205d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_205d80:
    // 0x205d80: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x205d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205d84:
    // 0x205d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205d88:
    // 0x205d88: 0x0  nop
    ctx->pc = 0x205d88u;
    // NOP
label_205d8c:
    // 0x205d8c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x205d8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_205d90:
    // 0x205d90: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x205d90u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_205d94:
    // 0x205d94: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x205d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_205d98:
    // 0x205d98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x205d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205d9c:
    // 0x205d9c: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x205d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205da0:
    // 0x205da0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205da4:
    // 0x205da4: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x205da4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_205da8:
    // 0x205da8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x205da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_205dac:
    // 0x205dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205db0:
    // 0x205db0: 0x0  nop
    ctx->pc = 0x205db0u;
    // NOP
label_205db4:
    // 0x205db4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x205db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_205db8:
    // 0x205db8: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x205db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
label_205dbc:
    // 0x205dbc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x205dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_205dc0:
    // 0x205dc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205dc4:
    // 0x205dc4: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x205dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205dc8:
    // 0x205dc8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205dcc:
    // 0x205dcc: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x205dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_205dd0:
    // 0x205dd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x205dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_205dd4:
    // 0x205dd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205dd8:
    // 0x205dd8: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x205dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205ddc:
    // 0x205ddc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205de0:
    // 0x205de0: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x205de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_205de4:
    // 0x205de4: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205de8:
    // 0x205de8: 0xc06479c  jal         func_191E70
label_205dec:
    if (ctx->pc == 0x205DECu) {
        ctx->pc = 0x205DF0u;
        goto label_205df0;
    }
    ctx->pc = 0x205DE8u;
    SET_GPR_U32(ctx, 31, 0x205DF0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x205DE8u, 0x205DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DF0u;
label_205df0:
    // 0x205df0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x205df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_205df4:
    // 0x205df4: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205df8:
    // 0x205df8: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x205df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_205dfc:
    // 0x205dfc: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x205dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_205e00:
    // 0x205e00: 0xc05612c  jal         func_1584B0
label_205e04:
    if (ctx->pc == 0x205E04u) {
        ctx->pc = 0x205E08u;
        goto label_205e08;
    }
    ctx->pc = 0x205E00u;
    SET_GPR_U32(ctx, 31, 0x205E08u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x205E00u, 0x205E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E08u;
label_205e08:
    // 0x205e08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x205e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_205e0c:
    // 0x205e0c: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x205e0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_205e10:
    // 0x205e10: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x205e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_205e14:
    // 0x205e14: 0xc7ac023c  lwc1        $f12, 0x23C($sp)
    ctx->pc = 0x205e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_205e18:
    // 0x205e18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x205e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205e1c:
    // 0x205e1c: 0xc08c64c  jal         func_231930
label_205e20:
    if (ctx->pc == 0x205E20u) {
        ctx->pc = 0x205E24u;
        goto label_205e24;
    }
    ctx->pc = 0x205E1Cu;
    SET_GPR_U32(ctx, 31, 0x205E24u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x205E1Cu, 0x205E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E24u;
label_205e24:
    // 0x205e24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205e28:
    // 0x205e28: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205e2c:
    // 0x205e2c: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x205e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205e30:
    // 0x205e30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205e34:
    // 0x205e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205e38:
    // 0x205e38: 0x0  nop
    ctx->pc = 0x205e38u;
    // NOP
label_205e3c:
    // 0x205e3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205e40:
    // 0x205e40: 0x45010068  bc1t        . + 4 + (0x68 << 2)
label_205e44:
    if (ctx->pc == 0x205E44u) {
        ctx->pc = 0x205E48u;
        goto label_205e48;
    }
    ctx->pc = 0x205E40u;
    {
        const bool branch_taken_0x205e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205e40) {
            ctx->pc = 0x205FE4u;
            goto label_205fe4;
        }
    }
    ctx->pc = 0x205E48u;
label_205e48:
    // 0x205e48: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205e4c:
    // 0x205e4c: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x205e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e50:
    // 0x205e50: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x205e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_205e54:
    // 0x205e54: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205e58:
    // 0x205e58: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x205e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205e5c:
    // 0x205e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205e60:
    // 0x205e60: 0x0  nop
    ctx->pc = 0x205e60u;
    // NOP
label_205e64:
    // 0x205e64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x205e64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205e68:
    // 0x205e68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_205e6c:
    if (ctx->pc == 0x205E6Cu) {
        ctx->pc = 0x205E70u;
        goto label_205e70;
    }
    ctx->pc = 0x205E68u;
    {
        const bool branch_taken_0x205e68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205e68) {
            ctx->pc = 0x205E88u;
            goto label_205e88;
        }
    }
    ctx->pc = 0x205E70u;
label_205e70:
    // 0x205e70: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205e74:
    // 0x205e74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x205e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_205e78:
    // 0x205e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205e7c:
    // 0x205e7c: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x205e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205e80:
    // 0x205e80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x205e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_205e84:
    // 0x205e84: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x205e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_205e88:
    // 0x205e88: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x205e88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205e8c:
    // 0x205e8c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205e90:
    // 0x205e90: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x205e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205e94:
    // 0x205e94: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x205e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_205e98:
    // 0x205e98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205e98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205e9c:
    // 0x205e9c: 0x0  nop
    ctx->pc = 0x205e9cu;
    // NOP
label_205ea0:
    // 0x205ea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205ea4:
    // 0x205ea4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_205ea8:
    if (ctx->pc == 0x205EA8u) {
        ctx->pc = 0x205EACu;
        goto label_205eac;
    }
    ctx->pc = 0x205EA4u;
    {
        const bool branch_taken_0x205ea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205ea4) {
            ctx->pc = 0x205EDCu;
            goto label_205edc;
        }
    }
    ctx->pc = 0x205EACu;
label_205eac:
    // 0x205eac: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x205eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205eb0:
    // 0x205eb0: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x205eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205eb4:
    // 0x205eb4: 0xc7a00238  lwc1        $f0, 0x238($sp)
    ctx->pc = 0x205eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_205eb8:
    // 0x205eb8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x205eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_205ebc:
    // 0x205ebc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x205ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_205ec0:
    // 0x205ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205ec4:
    // 0x205ec4: 0x0  nop
    ctx->pc = 0x205ec4u;
    // NOP
label_205ec8:
    // 0x205ec8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205ecc:
    // 0x205ecc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_205ed0:
    if (ctx->pc == 0x205ED0u) {
        ctx->pc = 0x205ED4u;
        goto label_205ed4;
    }
    ctx->pc = 0x205ECCu;
    {
        const bool branch_taken_0x205ecc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205ecc) {
            ctx->pc = 0x205EDCu;
            goto label_205edc;
        }
    }
    ctx->pc = 0x205ED4u;
label_205ed4:
    // 0x205ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x205ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205ed8:
    // 0x205ed8: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x205ed8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_205edc:
    // 0x205edc: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x205edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_205ee0:
    // 0x205ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_205ee4:
    // 0x205ee4: 0x0  nop
    ctx->pc = 0x205ee4u;
    // NOP
label_205ee8:
    // 0x205ee8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_205eec:
    // 0x205eec: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_205ef0:
    if (ctx->pc == 0x205EF0u) {
        ctx->pc = 0x205EF4u;
        goto label_205ef4;
    }
    ctx->pc = 0x205EECu;
    {
        const bool branch_taken_0x205eec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205eec) {
            ctx->pc = 0x205F84u;
            goto label_205f84;
        }
    }
    ctx->pc = 0x205EF4u;
label_205ef4:
    // 0x205ef4: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x205ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205ef8:
    // 0x205ef8: 0xc7ac0238  lwc1        $f12, 0x238($sp)
    ctx->pc = 0x205ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_205efc:
    // 0x205efc: 0xc064d10  jal         func_193440
label_205f00:
    if (ctx->pc == 0x205F00u) {
        ctx->pc = 0x205F04u;
        goto label_205f04;
    }
    ctx->pc = 0x205EFCu;
    SET_GPR_U32(ctx, 31, 0x205F04u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x205EFCu, 0x205F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F04u;
label_205f04:
    // 0x205f04: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205f08:
    // 0x205f08: 0x8c54005c  lw          $s4, 0x5C($v0)
    ctx->pc = 0x205f08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_205f0c:
    // 0x205f0c: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
label_205f10:
    if (ctx->pc == 0x205F10u) {
        ctx->pc = 0x205F14u;
        goto label_205f14;
    }
    ctx->pc = 0x205F0Cu;
    {
        const bool branch_taken_0x205f0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f0c) {
            ctx->pc = 0x205F3Cu;
            goto label_205f3c;
        }
    }
    ctx->pc = 0x205F14u;
label_205f14:
    // 0x205f14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205f18:
    // 0x205f18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205f1c:
    // 0x205f1c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x205f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_205f20:
    // 0x205f20: 0x27859a50  addiu       $a1, $gp, -0x65B0
    ctx->pc = 0x205f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941264));
label_205f24:
    // 0x205f24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205f28:
    // 0x205f28: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x205f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205f2c:
    // 0x205f2c: 0xc08f558  jal         func_23D560
label_205f30:
    if (ctx->pc == 0x205F30u) {
        ctx->pc = 0x205F34u;
        goto label_205f34;
    }
    ctx->pc = 0x205F2Cu;
    SET_GPR_U32(ctx, 31, 0x205F34u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x205F2Cu, 0x205F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F34u;
label_205f34:
    // 0x205f34: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205f38:
    // 0x205f38: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x205f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_205f3c:
    // 0x205f3c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205f40:
    // 0x205f40: 0x904200e0  lbu         $v0, 0xE0($v0)
    ctx->pc = 0x205f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 224)));
label_205f44:
    // 0x205f44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_205f48:
    if (ctx->pc == 0x205F48u) {
        ctx->pc = 0x205F4Cu;
        goto label_205f4c;
    }
    ctx->pc = 0x205F44u;
    {
        const bool branch_taken_0x205f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205f44) {
            ctx->pc = 0x205F84u;
            goto label_205f84;
        }
    }
    ctx->pc = 0x205F4Cu;
label_205f4c:
    // 0x205f4c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x205f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205f50:
    // 0x205f50: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x205f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_205f54:
    // 0x205f54: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_205f58:
    if (ctx->pc == 0x205F58u) {
        ctx->pc = 0x205F5Cu;
        goto label_205f5c;
    }
    ctx->pc = 0x205F54u;
    {
        const bool branch_taken_0x205f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f54) {
            ctx->pc = 0x205F84u;
            goto label_205f84;
        }
    }
    ctx->pc = 0x205F5Cu;
label_205f5c:
    // 0x205f5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205f60:
    // 0x205f60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205f64:
    // 0x205f64: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x205f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_205f68:
    // 0x205f68: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x205f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_205f6c:
    // 0x205f6c: 0x24a59208  addiu       $a1, $a1, -0x6DF8
    ctx->pc = 0x205f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939144));
label_205f70:
    // 0x205f70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205f74:
    // 0x205f74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x205f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205f78:
    // 0x205f78: 0xc08f558  jal         func_23D560
label_205f7c:
    if (ctx->pc == 0x205F7Cu) {
        ctx->pc = 0x205F80u;
        goto label_205f80;
    }
    ctx->pc = 0x205F78u;
    SET_GPR_U32(ctx, 31, 0x205F80u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x205F78u, 0x205F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F80u;
label_205f80:
    // 0x205f80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205f84:
    // 0x205f84: 0x13c00012  beqz        $fp, . + 4 + (0x12 << 2)
label_205f88:
    if (ctx->pc == 0x205F88u) {
        ctx->pc = 0x205F8Cu;
        goto label_205f8c;
    }
    ctx->pc = 0x205F84u;
    {
        const bool branch_taken_0x205f84 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x205f84) {
            ctx->pc = 0x205FD0u;
            goto label_205fd0;
        }
    }
    ctx->pc = 0x205F8Cu;
label_205f8c:
    // 0x205f8c: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x205f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205f90:
    // 0x205f90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x205f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_205f94:
    // 0x205f94: 0x27829a58  addiu       $v0, $gp, -0x65A8
    ctx->pc = 0x205f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941272));
label_205f98:
    // 0x205f98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x205f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205f9c:
    // 0x205f9c: 0xc064d48  jal         func_193520
label_205fa0:
    if (ctx->pc == 0x205FA0u) {
        ctx->pc = 0x205FA4u;
        goto label_205fa4;
    }
    ctx->pc = 0x205F9Cu;
    SET_GPR_U32(ctx, 31, 0x205FA4u);
    ctx->pc = 0x193520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193520u, 0x205F9Cu, 0x205FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FA4u;
label_205fa4:
    // 0x205fa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_205fa8:
    // 0x205fa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_205fac:
    // 0x205fac: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x205facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_205fb0:
    // 0x205fb0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x205fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_205fb4:
    // 0x205fb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_205fb8:
    // 0x205fb8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x205fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_205fbc:
    // 0x205fbc: 0x27859a60  addiu       $a1, $gp, -0x65A0
    ctx->pc = 0x205fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941280));
label_205fc0:
    // 0x205fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x205fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205fc4:
    // 0x205fc4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x205fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_205fc8:
    // 0x205fc8: 0xc08f558  jal         func_23D560
label_205fcc:
    if (ctx->pc == 0x205FCCu) {
        ctx->pc = 0x205FD0u;
        goto label_205fd0;
    }
    ctx->pc = 0x205FC8u;
    SET_GPR_U32(ctx, 31, 0x205FD0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x205FC8u, 0x205FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FD0u;
label_205fd0:
    // 0x205fd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x205fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_205fd4:
    // 0x205fd4: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x205fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205fd8:
    // 0x205fd8: 0xe4a100b8  swc1        $f1, 0xB8($a1)
    ctx->pc = 0x205fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 184), bits); }
label_205fdc:
    // 0x205fdc: 0x10000020  b           . + 4 + (0x20 << 2)
label_205fe0:
    if (ctx->pc == 0x205FE0u) {
        ctx->pc = 0x205FE4u;
        goto label_205fe4;
    }
    ctx->pc = 0x205FDCu;
    {
        const bool branch_taken_0x205fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fdc) {
            ctx->pc = 0x206060u;
            goto label_206060;
        }
    }
    ctx->pc = 0x205FE4u;
label_205fe4:
    // 0x205fe4: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x205fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205fe8:
    // 0x205fe8: 0x8cc200e8  lw          $v0, 0xE8($a2)
    ctx->pc = 0x205fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 232)));
label_205fec:
    // 0x205fec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_205ff0:
    if (ctx->pc == 0x205FF0u) {
        ctx->pc = 0x205FF4u;
        goto label_205ff4;
    }
    ctx->pc = 0x205FECu;
    {
        const bool branch_taken_0x205fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fec) {
            ctx->pc = 0x206020u;
            goto label_206020;
        }
    }
    ctx->pc = 0x205FF4u;
label_205ff4:
    // 0x205ff4: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x205ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_205ff8:
    // 0x205ff8: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x205ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_205ffc:
    // 0x205ffc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x205ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_206000:
    // 0x206000: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x206000u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_206004:
    // 0x206004: 0x8c6500e8  lw          $a1, 0xE8($v1)
    ctx->pc = 0x206004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
label_206008:
    // 0x206008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20600c:
    // 0x20600c: 0xc08f71c  jal         func_23DC70
label_206010:
    if (ctx->pc == 0x206010u) {
        ctx->pc = 0x206014u;
        goto label_206014;
    }
    ctx->pc = 0x20600Cu;
    SET_GPR_U32(ctx, 31, 0x206014u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x20600Cu, 0x206014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206014u;
label_206014:
    // 0x206014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206018:
    // 0x206018: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x206018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20601c:
    // 0x20601c: 0xac4000e8  sw          $zero, 0xE8($v0)
    ctx->pc = 0x20601cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 232), GPR_U32(ctx, 0));
label_206020:
    // 0x206020: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x206020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_206024:
    // 0x206024: 0x90a600e0  lbu         $a2, 0xE0($a1)
    ctx->pc = 0x206024u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 224)));
label_206028:
    // 0x206028: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_20602c:
    if (ctx->pc == 0x20602Cu) {
        ctx->pc = 0x206030u;
        goto label_206030;
    }
    ctx->pc = 0x206028u;
    {
        const bool branch_taken_0x206028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x206028) {
            ctx->pc = 0x206060u;
            goto label_206060;
        }
    }
    ctx->pc = 0x206030u;
label_206030:
    // 0x206030: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x206030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_206034:
    // 0x206034: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x206034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_206038:
    // 0x206038: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20603c:
    if (ctx->pc == 0x20603Cu) {
        ctx->pc = 0x206040u;
        goto label_206040;
    }
    ctx->pc = 0x206038u;
    {
        const bool branch_taken_0x206038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206038) {
            ctx->pc = 0x206060u;
            goto label_206060;
        }
    }
    ctx->pc = 0x206040u;
label_206040:
    // 0x206040: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x206040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_206044:
    // 0x206044: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x206044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_206048:
    // 0x206048: 0x8c4500e4  lw          $a1, 0xE4($v0)
    ctx->pc = 0x206048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_20604c:
    // 0x20604c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20604cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206050:
    // 0x206050: 0xc08f71c  jal         func_23DC70
label_206054:
    if (ctx->pc == 0x206054u) {
        ctx->pc = 0x206058u;
        goto label_206058;
    }
    ctx->pc = 0x206050u;
    SET_GPR_U32(ctx, 31, 0x206058u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x206050u, 0x206058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206058u;
label_206058:
    // 0x206058: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x206058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_20605c:
    // 0x20605c: 0xac4000e4  sw          $zero, 0xE4($v0)
    ctx->pc = 0x20605cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 0));
label_206060:
    // 0x206060: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x206060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_206064:
    // 0x206064: 0xc064cb0  jal         func_1932C0
label_206068:
    if (ctx->pc == 0x206068u) {
        ctx->pc = 0x20606Cu;
        goto label_20606c;
    }
    ctx->pc = 0x206064u;
    SET_GPR_U32(ctx, 31, 0x20606Cu);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x206064u, 0x20606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20606Cu;
label_20606c:
    // 0x20606c: 0xa3a2026e  sb          $v0, 0x26E($sp)
    ctx->pc = 0x20606cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 622), (uint8_t)GPR_U32(ctx, 2));
label_206070:
    // 0x206070: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x206070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_206074:
    // 0x206074: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x206074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_206078:
    // 0x206078: 0xc0402d4  jal         func_100B50
label_20607c:
    if (ctx->pc == 0x20607Cu) {
        ctx->pc = 0x206080u;
        goto label_206080;
    }
    ctx->pc = 0x206078u;
    SET_GPR_U32(ctx, 31, 0x206080u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x206078u, 0x206080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206080u;
label_206080:
    // 0x206080: 0x93a3026e  lbu         $v1, 0x26E($sp)
    ctx->pc = 0x206080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 622)));
label_206084:
    // 0x206084: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x206084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_206088:
    // 0x206088: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x206088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20608c:
    // 0x20608c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x20608cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_206090:
    // 0x206090: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x206090u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_206094:
    // 0x206094: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x206094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_206098:
    // 0x206098: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x206098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20609c:
    // 0x20609c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20609cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2060a0:
    // 0x2060a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2060a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2060a4:
    // 0x2060a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2060a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2060a8:
    // 0x2060a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2060a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2060ac:
    // 0x2060ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2060acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2060b0:
    // 0x2060b0: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x2060b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2060b4:
    // 0x2060b4: 0x3e00008  jr          $ra
label_2060b8:
    if (ctx->pc == 0x2060B8u) {
        ctx->pc = 0x2060BCu;
        goto label_2060bc;
    }
    ctx->pc = 0x2060B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2060B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2060BCu;
label_2060bc:
    // 0x2060bc: 0x0  nop
    ctx->pc = 0x2060bcu;
    // NOP
label_2060c0:
    // 0x2060c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2060c4:
    // 0x2060c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2060c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2060c8:
    // 0x2060c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2060c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2060cc:
    // 0x2060cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2060ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2060d0:
    // 0x2060d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2060d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2060d4:
    // 0x2060d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2060d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2060d8:
    // 0x2060d8: 0xc064d00  jal         func_193400
label_2060dc:
    if (ctx->pc == 0x2060DCu) {
        ctx->pc = 0x2060E0u;
        goto label_2060e0;
    }
    ctx->pc = 0x2060D8u;
    SET_GPR_U32(ctx, 31, 0x2060E0u);
    ctx->pc = 0x193400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193400u, 0x2060D8u, 0x2060E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2060E0u;
label_2060e0:
    // 0x2060e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2060e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2060e4:
    // 0x2060e4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2060e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2060e8:
    // 0x2060e8: 0x3e00008  jr          $ra
label_2060ec:
    if (ctx->pc == 0x2060ECu) {
        ctx->pc = 0x2060F0u;
        goto label_2060f0;
    }
    ctx->pc = 0x2060E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2060E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2060F0u;
label_2060f0:
    // 0x2060f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2060f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2060f4:
    // 0x2060f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2060f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2060f8:
    // 0x2060f8: 0x3e00008  jr          $ra
label_2060fc:
    if (ctx->pc == 0x2060FCu) {
        ctx->pc = 0x206100u;
        goto label_206100;
    }
    ctx->pc = 0x2060F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2060F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206100u;
label_206100:
    // 0x206100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206104:
    // 0x206104: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x206104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_206108:
    // 0x206108: 0x24429220  addiu       $v0, $v0, -0x6DE0
    ctx->pc = 0x206108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939168));
label_20610c:
    // 0x20610c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20610cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_206110:
    // 0x206110: 0x3e00008  jr          $ra
label_206114:
    if (ctx->pc == 0x206114u) {
        ctx->pc = 0x206118u;
        goto label_206118;
    }
    ctx->pc = 0x206110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206118u;
label_206118:
    // 0x206118: 0x0  nop
    ctx->pc = 0x206118u;
    // NOP
label_20611c:
    // 0x20611c: 0x0  nop
    ctx->pc = 0x20611cu;
    // NOP
    ctx->pc = 0x206120u;
}
