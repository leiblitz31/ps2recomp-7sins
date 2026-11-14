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

// Function: sub_00114CC0
// Address: 0x114cc0 - 0x115380
void sub_00114CC0_0x114cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114CC0_0x114cc0");
#endif

    switch (ctx->pc) {
        case 0x114cc0u: goto label_114cc0;
        case 0x114cc4u: goto label_114cc4;
        case 0x114cc8u: goto label_114cc8;
        case 0x114cccu: goto label_114ccc;
        case 0x114cd0u: goto label_114cd0;
        case 0x114cd4u: goto label_114cd4;
        case 0x114cd8u: goto label_114cd8;
        case 0x114cdcu: goto label_114cdc;
        case 0x114ce0u: goto label_114ce0;
        case 0x114ce4u: goto label_114ce4;
        case 0x114ce8u: goto label_114ce8;
        case 0x114cecu: goto label_114cec;
        case 0x114cf0u: goto label_114cf0;
        case 0x114cf4u: goto label_114cf4;
        case 0x114cf8u: goto label_114cf8;
        case 0x114cfcu: goto label_114cfc;
        case 0x114d00u: goto label_114d00;
        case 0x114d04u: goto label_114d04;
        case 0x114d08u: goto label_114d08;
        case 0x114d0cu: goto label_114d0c;
        case 0x114d10u: goto label_114d10;
        case 0x114d14u: goto label_114d14;
        case 0x114d18u: goto label_114d18;
        case 0x114d1cu: goto label_114d1c;
        case 0x114d20u: goto label_114d20;
        case 0x114d24u: goto label_114d24;
        case 0x114d28u: goto label_114d28;
        case 0x114d2cu: goto label_114d2c;
        case 0x114d30u: goto label_114d30;
        case 0x114d34u: goto label_114d34;
        case 0x114d38u: goto label_114d38;
        case 0x114d3cu: goto label_114d3c;
        case 0x114d40u: goto label_114d40;
        case 0x114d44u: goto label_114d44;
        case 0x114d48u: goto label_114d48;
        case 0x114d4cu: goto label_114d4c;
        case 0x114d50u: goto label_114d50;
        case 0x114d54u: goto label_114d54;
        case 0x114d58u: goto label_114d58;
        case 0x114d5cu: goto label_114d5c;
        case 0x114d60u: goto label_114d60;
        case 0x114d64u: goto label_114d64;
        case 0x114d68u: goto label_114d68;
        case 0x114d6cu: goto label_114d6c;
        case 0x114d70u: goto label_114d70;
        case 0x114d74u: goto label_114d74;
        case 0x114d78u: goto label_114d78;
        case 0x114d7cu: goto label_114d7c;
        case 0x114d80u: goto label_114d80;
        case 0x114d84u: goto label_114d84;
        case 0x114d88u: goto label_114d88;
        case 0x114d8cu: goto label_114d8c;
        case 0x114d90u: goto label_114d90;
        case 0x114d94u: goto label_114d94;
        case 0x114d98u: goto label_114d98;
        case 0x114d9cu: goto label_114d9c;
        case 0x114da0u: goto label_114da0;
        case 0x114da4u: goto label_114da4;
        case 0x114da8u: goto label_114da8;
        case 0x114dacu: goto label_114dac;
        case 0x114db0u: goto label_114db0;
        case 0x114db4u: goto label_114db4;
        case 0x114db8u: goto label_114db8;
        case 0x114dbcu: goto label_114dbc;
        case 0x114dc0u: goto label_114dc0;
        case 0x114dc4u: goto label_114dc4;
        case 0x114dc8u: goto label_114dc8;
        case 0x114dccu: goto label_114dcc;
        case 0x114dd0u: goto label_114dd0;
        case 0x114dd4u: goto label_114dd4;
        case 0x114dd8u: goto label_114dd8;
        case 0x114ddcu: goto label_114ddc;
        case 0x114de0u: goto label_114de0;
        case 0x114de4u: goto label_114de4;
        case 0x114de8u: goto label_114de8;
        case 0x114decu: goto label_114dec;
        case 0x114df0u: goto label_114df0;
        case 0x114df4u: goto label_114df4;
        case 0x114df8u: goto label_114df8;
        case 0x114dfcu: goto label_114dfc;
        case 0x114e00u: goto label_114e00;
        case 0x114e04u: goto label_114e04;
        case 0x114e08u: goto label_114e08;
        case 0x114e0cu: goto label_114e0c;
        case 0x114e10u: goto label_114e10;
        case 0x114e14u: goto label_114e14;
        case 0x114e18u: goto label_114e18;
        case 0x114e1cu: goto label_114e1c;
        case 0x114e20u: goto label_114e20;
        case 0x114e24u: goto label_114e24;
        case 0x114e28u: goto label_114e28;
        case 0x114e2cu: goto label_114e2c;
        case 0x114e30u: goto label_114e30;
        case 0x114e34u: goto label_114e34;
        case 0x114e38u: goto label_114e38;
        case 0x114e3cu: goto label_114e3c;
        case 0x114e40u: goto label_114e40;
        case 0x114e44u: goto label_114e44;
        case 0x114e48u: goto label_114e48;
        case 0x114e4cu: goto label_114e4c;
        case 0x114e50u: goto label_114e50;
        case 0x114e54u: goto label_114e54;
        case 0x114e58u: goto label_114e58;
        case 0x114e5cu: goto label_114e5c;
        case 0x114e60u: goto label_114e60;
        case 0x114e64u: goto label_114e64;
        case 0x114e68u: goto label_114e68;
        case 0x114e6cu: goto label_114e6c;
        case 0x114e70u: goto label_114e70;
        case 0x114e74u: goto label_114e74;
        case 0x114e78u: goto label_114e78;
        case 0x114e7cu: goto label_114e7c;
        case 0x114e80u: goto label_114e80;
        case 0x114e84u: goto label_114e84;
        case 0x114e88u: goto label_114e88;
        case 0x114e8cu: goto label_114e8c;
        case 0x114e90u: goto label_114e90;
        case 0x114e94u: goto label_114e94;
        case 0x114e98u: goto label_114e98;
        case 0x114e9cu: goto label_114e9c;
        case 0x114ea0u: goto label_114ea0;
        case 0x114ea4u: goto label_114ea4;
        case 0x114ea8u: goto label_114ea8;
        case 0x114eacu: goto label_114eac;
        case 0x114eb0u: goto label_114eb0;
        case 0x114eb4u: goto label_114eb4;
        case 0x114eb8u: goto label_114eb8;
        case 0x114ebcu: goto label_114ebc;
        case 0x114ec0u: goto label_114ec0;
        case 0x114ec4u: goto label_114ec4;
        case 0x114ec8u: goto label_114ec8;
        case 0x114eccu: goto label_114ecc;
        case 0x114ed0u: goto label_114ed0;
        case 0x114ed4u: goto label_114ed4;
        case 0x114ed8u: goto label_114ed8;
        case 0x114edcu: goto label_114edc;
        case 0x114ee0u: goto label_114ee0;
        case 0x114ee4u: goto label_114ee4;
        case 0x114ee8u: goto label_114ee8;
        case 0x114eecu: goto label_114eec;
        case 0x114ef0u: goto label_114ef0;
        case 0x114ef4u: goto label_114ef4;
        case 0x114ef8u: goto label_114ef8;
        case 0x114efcu: goto label_114efc;
        case 0x114f00u: goto label_114f00;
        case 0x114f04u: goto label_114f04;
        case 0x114f08u: goto label_114f08;
        case 0x114f0cu: goto label_114f0c;
        case 0x114f10u: goto label_114f10;
        case 0x114f14u: goto label_114f14;
        case 0x114f18u: goto label_114f18;
        case 0x114f1cu: goto label_114f1c;
        case 0x114f20u: goto label_114f20;
        case 0x114f24u: goto label_114f24;
        case 0x114f28u: goto label_114f28;
        case 0x114f2cu: goto label_114f2c;
        case 0x114f30u: goto label_114f30;
        case 0x114f34u: goto label_114f34;
        case 0x114f38u: goto label_114f38;
        case 0x114f3cu: goto label_114f3c;
        case 0x114f40u: goto label_114f40;
        case 0x114f44u: goto label_114f44;
        case 0x114f48u: goto label_114f48;
        case 0x114f4cu: goto label_114f4c;
        case 0x114f50u: goto label_114f50;
        case 0x114f54u: goto label_114f54;
        case 0x114f58u: goto label_114f58;
        case 0x114f5cu: goto label_114f5c;
        case 0x114f60u: goto label_114f60;
        case 0x114f64u: goto label_114f64;
        case 0x114f68u: goto label_114f68;
        case 0x114f6cu: goto label_114f6c;
        case 0x114f70u: goto label_114f70;
        case 0x114f74u: goto label_114f74;
        case 0x114f78u: goto label_114f78;
        case 0x114f7cu: goto label_114f7c;
        case 0x114f80u: goto label_114f80;
        case 0x114f84u: goto label_114f84;
        case 0x114f88u: goto label_114f88;
        case 0x114f8cu: goto label_114f8c;
        case 0x114f90u: goto label_114f90;
        case 0x114f94u: goto label_114f94;
        case 0x114f98u: goto label_114f98;
        case 0x114f9cu: goto label_114f9c;
        case 0x114fa0u: goto label_114fa0;
        case 0x114fa4u: goto label_114fa4;
        case 0x114fa8u: goto label_114fa8;
        case 0x114facu: goto label_114fac;
        case 0x114fb0u: goto label_114fb0;
        case 0x114fb4u: goto label_114fb4;
        case 0x114fb8u: goto label_114fb8;
        case 0x114fbcu: goto label_114fbc;
        case 0x114fc0u: goto label_114fc0;
        case 0x114fc4u: goto label_114fc4;
        case 0x114fc8u: goto label_114fc8;
        case 0x114fccu: goto label_114fcc;
        case 0x114fd0u: goto label_114fd0;
        case 0x114fd4u: goto label_114fd4;
        case 0x114fd8u: goto label_114fd8;
        case 0x114fdcu: goto label_114fdc;
        case 0x114fe0u: goto label_114fe0;
        case 0x114fe4u: goto label_114fe4;
        case 0x114fe8u: goto label_114fe8;
        case 0x114fecu: goto label_114fec;
        case 0x114ff0u: goto label_114ff0;
        case 0x114ff4u: goto label_114ff4;
        case 0x114ff8u: goto label_114ff8;
        case 0x114ffcu: goto label_114ffc;
        case 0x115000u: goto label_115000;
        case 0x115004u: goto label_115004;
        case 0x115008u: goto label_115008;
        case 0x11500cu: goto label_11500c;
        case 0x115010u: goto label_115010;
        case 0x115014u: goto label_115014;
        case 0x115018u: goto label_115018;
        case 0x11501cu: goto label_11501c;
        case 0x115020u: goto label_115020;
        case 0x115024u: goto label_115024;
        case 0x115028u: goto label_115028;
        case 0x11502cu: goto label_11502c;
        case 0x115030u: goto label_115030;
        case 0x115034u: goto label_115034;
        case 0x115038u: goto label_115038;
        case 0x11503cu: goto label_11503c;
        case 0x115040u: goto label_115040;
        case 0x115044u: goto label_115044;
        case 0x115048u: goto label_115048;
        case 0x11504cu: goto label_11504c;
        case 0x115050u: goto label_115050;
        case 0x115054u: goto label_115054;
        case 0x115058u: goto label_115058;
        case 0x11505cu: goto label_11505c;
        case 0x115060u: goto label_115060;
        case 0x115064u: goto label_115064;
        case 0x115068u: goto label_115068;
        case 0x11506cu: goto label_11506c;
        case 0x115070u: goto label_115070;
        case 0x115074u: goto label_115074;
        case 0x115078u: goto label_115078;
        case 0x11507cu: goto label_11507c;
        case 0x115080u: goto label_115080;
        case 0x115084u: goto label_115084;
        case 0x115088u: goto label_115088;
        case 0x11508cu: goto label_11508c;
        case 0x115090u: goto label_115090;
        case 0x115094u: goto label_115094;
        case 0x115098u: goto label_115098;
        case 0x11509cu: goto label_11509c;
        case 0x1150a0u: goto label_1150a0;
        case 0x1150a4u: goto label_1150a4;
        case 0x1150a8u: goto label_1150a8;
        case 0x1150acu: goto label_1150ac;
        case 0x1150b0u: goto label_1150b0;
        case 0x1150b4u: goto label_1150b4;
        case 0x1150b8u: goto label_1150b8;
        case 0x1150bcu: goto label_1150bc;
        case 0x1150c0u: goto label_1150c0;
        case 0x1150c4u: goto label_1150c4;
        case 0x1150c8u: goto label_1150c8;
        case 0x1150ccu: goto label_1150cc;
        case 0x1150d0u: goto label_1150d0;
        case 0x1150d4u: goto label_1150d4;
        case 0x1150d8u: goto label_1150d8;
        case 0x1150dcu: goto label_1150dc;
        case 0x1150e0u: goto label_1150e0;
        case 0x1150e4u: goto label_1150e4;
        case 0x1150e8u: goto label_1150e8;
        case 0x1150ecu: goto label_1150ec;
        case 0x1150f0u: goto label_1150f0;
        case 0x1150f4u: goto label_1150f4;
        case 0x1150f8u: goto label_1150f8;
        case 0x1150fcu: goto label_1150fc;
        case 0x115100u: goto label_115100;
        case 0x115104u: goto label_115104;
        case 0x115108u: goto label_115108;
        case 0x11510cu: goto label_11510c;
        case 0x115110u: goto label_115110;
        case 0x115114u: goto label_115114;
        case 0x115118u: goto label_115118;
        case 0x11511cu: goto label_11511c;
        case 0x115120u: goto label_115120;
        case 0x115124u: goto label_115124;
        case 0x115128u: goto label_115128;
        case 0x11512cu: goto label_11512c;
        case 0x115130u: goto label_115130;
        case 0x115134u: goto label_115134;
        case 0x115138u: goto label_115138;
        case 0x11513cu: goto label_11513c;
        case 0x115140u: goto label_115140;
        case 0x115144u: goto label_115144;
        case 0x115148u: goto label_115148;
        case 0x11514cu: goto label_11514c;
        case 0x115150u: goto label_115150;
        case 0x115154u: goto label_115154;
        case 0x115158u: goto label_115158;
        case 0x11515cu: goto label_11515c;
        case 0x115160u: goto label_115160;
        case 0x115164u: goto label_115164;
        case 0x115168u: goto label_115168;
        case 0x11516cu: goto label_11516c;
        case 0x115170u: goto label_115170;
        case 0x115174u: goto label_115174;
        case 0x115178u: goto label_115178;
        case 0x11517cu: goto label_11517c;
        case 0x115180u: goto label_115180;
        case 0x115184u: goto label_115184;
        case 0x115188u: goto label_115188;
        case 0x11518cu: goto label_11518c;
        case 0x115190u: goto label_115190;
        case 0x115194u: goto label_115194;
        case 0x115198u: goto label_115198;
        case 0x11519cu: goto label_11519c;
        case 0x1151a0u: goto label_1151a0;
        case 0x1151a4u: goto label_1151a4;
        case 0x1151a8u: goto label_1151a8;
        case 0x1151acu: goto label_1151ac;
        case 0x1151b0u: goto label_1151b0;
        case 0x1151b4u: goto label_1151b4;
        case 0x1151b8u: goto label_1151b8;
        case 0x1151bcu: goto label_1151bc;
        case 0x1151c0u: goto label_1151c0;
        case 0x1151c4u: goto label_1151c4;
        case 0x1151c8u: goto label_1151c8;
        case 0x1151ccu: goto label_1151cc;
        case 0x1151d0u: goto label_1151d0;
        case 0x1151d4u: goto label_1151d4;
        case 0x1151d8u: goto label_1151d8;
        case 0x1151dcu: goto label_1151dc;
        case 0x1151e0u: goto label_1151e0;
        case 0x1151e4u: goto label_1151e4;
        case 0x1151e8u: goto label_1151e8;
        case 0x1151ecu: goto label_1151ec;
        case 0x1151f0u: goto label_1151f0;
        case 0x1151f4u: goto label_1151f4;
        case 0x1151f8u: goto label_1151f8;
        case 0x1151fcu: goto label_1151fc;
        case 0x115200u: goto label_115200;
        case 0x115204u: goto label_115204;
        case 0x115208u: goto label_115208;
        case 0x11520cu: goto label_11520c;
        case 0x115210u: goto label_115210;
        case 0x115214u: goto label_115214;
        case 0x115218u: goto label_115218;
        case 0x11521cu: goto label_11521c;
        case 0x115220u: goto label_115220;
        case 0x115224u: goto label_115224;
        case 0x115228u: goto label_115228;
        case 0x11522cu: goto label_11522c;
        case 0x115230u: goto label_115230;
        case 0x115234u: goto label_115234;
        case 0x115238u: goto label_115238;
        case 0x11523cu: goto label_11523c;
        case 0x115240u: goto label_115240;
        case 0x115244u: goto label_115244;
        case 0x115248u: goto label_115248;
        case 0x11524cu: goto label_11524c;
        case 0x115250u: goto label_115250;
        case 0x115254u: goto label_115254;
        case 0x115258u: goto label_115258;
        case 0x11525cu: goto label_11525c;
        case 0x115260u: goto label_115260;
        case 0x115264u: goto label_115264;
        case 0x115268u: goto label_115268;
        case 0x11526cu: goto label_11526c;
        case 0x115270u: goto label_115270;
        case 0x115274u: goto label_115274;
        case 0x115278u: goto label_115278;
        case 0x11527cu: goto label_11527c;
        case 0x115280u: goto label_115280;
        case 0x115284u: goto label_115284;
        case 0x115288u: goto label_115288;
        case 0x11528cu: goto label_11528c;
        case 0x115290u: goto label_115290;
        case 0x115294u: goto label_115294;
        case 0x115298u: goto label_115298;
        case 0x11529cu: goto label_11529c;
        case 0x1152a0u: goto label_1152a0;
        case 0x1152a4u: goto label_1152a4;
        case 0x1152a8u: goto label_1152a8;
        case 0x1152acu: goto label_1152ac;
        case 0x1152b0u: goto label_1152b0;
        case 0x1152b4u: goto label_1152b4;
        case 0x1152b8u: goto label_1152b8;
        case 0x1152bcu: goto label_1152bc;
        case 0x1152c0u: goto label_1152c0;
        case 0x1152c4u: goto label_1152c4;
        case 0x1152c8u: goto label_1152c8;
        case 0x1152ccu: goto label_1152cc;
        case 0x1152d0u: goto label_1152d0;
        case 0x1152d4u: goto label_1152d4;
        case 0x1152d8u: goto label_1152d8;
        case 0x1152dcu: goto label_1152dc;
        case 0x1152e0u: goto label_1152e0;
        case 0x1152e4u: goto label_1152e4;
        case 0x1152e8u: goto label_1152e8;
        case 0x1152ecu: goto label_1152ec;
        case 0x1152f0u: goto label_1152f0;
        case 0x1152f4u: goto label_1152f4;
        case 0x1152f8u: goto label_1152f8;
        case 0x1152fcu: goto label_1152fc;
        case 0x115300u: goto label_115300;
        case 0x115304u: goto label_115304;
        case 0x115308u: goto label_115308;
        case 0x11530cu: goto label_11530c;
        case 0x115310u: goto label_115310;
        case 0x115314u: goto label_115314;
        case 0x115318u: goto label_115318;
        case 0x11531cu: goto label_11531c;
        case 0x115320u: goto label_115320;
        case 0x115324u: goto label_115324;
        case 0x115328u: goto label_115328;
        case 0x11532cu: goto label_11532c;
        case 0x115330u: goto label_115330;
        case 0x115334u: goto label_115334;
        case 0x115338u: goto label_115338;
        case 0x11533cu: goto label_11533c;
        case 0x115340u: goto label_115340;
        case 0x115344u: goto label_115344;
        case 0x115348u: goto label_115348;
        case 0x11534cu: goto label_11534c;
        case 0x115350u: goto label_115350;
        case 0x115354u: goto label_115354;
        case 0x115358u: goto label_115358;
        case 0x11535cu: goto label_11535c;
        case 0x115360u: goto label_115360;
        case 0x115364u: goto label_115364;
        case 0x115368u: goto label_115368;
        case 0x11536cu: goto label_11536c;
        case 0x115370u: goto label_115370;
        case 0x115374u: goto label_115374;
        case 0x115378u: goto label_115378;
        case 0x11537cu: goto label_11537c;
        default: break;
    }

    ctx->pc = 0x114cc0u;

label_114cc0:
    // 0x114cc0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x114cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_114cc4:
    // 0x114cc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x114cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_114cc8:
    // 0x114cc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x114cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_114ccc:
    // 0x114ccc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x114cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_114cd0:
    // 0x114cd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x114cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_114cd4:
    // 0x114cd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x114cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_114cd8:
    // 0x114cd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x114cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_114cdc:
    // 0x114cdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x114cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_114ce0:
    // 0x114ce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x114ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_114ce4:
    // 0x114ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x114ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_114ce8:
    // 0x114ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x114ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_114cec:
    // 0x114cec: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x114cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_114cf0:
    // 0x114cf0: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x114cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_114cf4:
    // 0x114cf4: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x114cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
label_114cf8:
    // 0x114cf8: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x114cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_114cfc:
    // 0x114cfc: 0xc041b48  jal         func_106D20
label_114d00:
    if (ctx->pc == 0x114D00u) {
        ctx->pc = 0x114D04u;
        goto label_114d04;
    }
    ctx->pc = 0x114CFCu;
    SET_GPR_U32(ctx, 31, 0x114D04u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x114CFCu, 0x114D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D04u;
label_114d04:
    // 0x114d04: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x114d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_114d08:
    // 0x114d08: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_114d0c:
    if (ctx->pc == 0x114D0Cu) {
        ctx->pc = 0x114D10u;
        goto label_114d10;
    }
    ctx->pc = 0x114D08u;
    {
        const bool branch_taken_0x114d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114d08) {
            ctx->pc = 0x114D58u;
            goto label_114d58;
        }
    }
    ctx->pc = 0x114D10u;
label_114d10:
    // 0x114d10: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x114d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_114d14:
    // 0x114d14: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x114d14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_114d18:
    // 0x114d18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_114d1c:
    if (ctx->pc == 0x114D1Cu) {
        ctx->pc = 0x114D20u;
        goto label_114d20;
    }
    ctx->pc = 0x114D18u;
    {
        const bool branch_taken_0x114d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114d18) {
            ctx->pc = 0x114D58u;
            goto label_114d58;
        }
    }
    ctx->pc = 0x114D20u;
label_114d20:
    // 0x114d20: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x114d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_114d24:
    // 0x114d24: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x114d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_114d28:
    // 0x114d28: 0xc040304  jal         func_100C10
label_114d2c:
    if (ctx->pc == 0x114D2Cu) {
        ctx->pc = 0x114D30u;
        goto label_114d30;
    }
    ctx->pc = 0x114D28u;
    SET_GPR_U32(ctx, 31, 0x114D30u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x114D28u, 0x114D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D30u;
label_114d30:
    // 0x114d30: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x114d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_114d34:
    // 0x114d34: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x114d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_114d38:
    // 0x114d38: 0xc1190f4  jal         func_4643D0
label_114d3c:
    if (ctx->pc == 0x114D3Cu) {
        ctx->pc = 0x114D40u;
        goto label_114d40;
    }
    ctx->pc = 0x114D38u;
    SET_GPR_U32(ctx, 31, 0x114D40u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x114D38u, 0x114D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D40u;
label_114d40:
    // 0x114d40: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x114d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_114d44:
    // 0x114d44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114d48:
    // 0x114d48: 0xc0402d4  jal         func_100B50
label_114d4c:
    if (ctx->pc == 0x114D4Cu) {
        ctx->pc = 0x114D50u;
        goto label_114d50;
    }
    ctx->pc = 0x114D48u;
    SET_GPR_U32(ctx, 31, 0x114D50u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x114D48u, 0x114D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D50u;
label_114d50:
    // 0x114d50: 0x10000014  b           . + 4 + (0x14 << 2)
label_114d54:
    if (ctx->pc == 0x114D54u) {
        ctx->pc = 0x114D58u;
        goto label_114d58;
    }
    ctx->pc = 0x114D50u;
    {
        const bool branch_taken_0x114d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114d50) {
            ctx->pc = 0x114DA4u;
            goto label_114da4;
        }
    }
    ctx->pc = 0x114D58u;
label_114d58:
    // 0x114d58: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x114d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_114d5c:
    // 0x114d5c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x114d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_114d60:
    // 0x114d60: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x114d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_114d64:
    // 0x114d64: 0x24a51bc0  addiu       $a1, $a1, 0x1BC0
    ctx->pc = 0x114d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7104));
label_114d68:
    // 0x114d68: 0x278689a0  addiu       $a2, $gp, -0x7660
    ctx->pc = 0x114d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936992));
label_114d6c:
    // 0x114d6c: 0xc04206c  jal         func_1081B0
label_114d70:
    if (ctx->pc == 0x114D70u) {
        ctx->pc = 0x114D74u;
        goto label_114d74;
    }
    ctx->pc = 0x114D6Cu;
    SET_GPR_U32(ctx, 31, 0x114D74u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x114D6Cu, 0x114D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D74u;
label_114d74:
    // 0x114d74: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x114d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_114d78:
    // 0x114d78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114d7c:
    // 0x114d7c: 0xc040304  jal         func_100C10
label_114d80:
    if (ctx->pc == 0x114D80u) {
        ctx->pc = 0x114D84u;
        goto label_114d84;
    }
    ctx->pc = 0x114D7Cu;
    SET_GPR_U32(ctx, 31, 0x114D84u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x114D7Cu, 0x114D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D84u;
label_114d84:
    // 0x114d84: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x114d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_114d88:
    // 0x114d88: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x114d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_114d8c:
    // 0x114d8c: 0xc1190f4  jal         func_4643D0
label_114d90:
    if (ctx->pc == 0x114D90u) {
        ctx->pc = 0x114D94u;
        goto label_114d94;
    }
    ctx->pc = 0x114D8Cu;
    SET_GPR_U32(ctx, 31, 0x114D94u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x114D8Cu, 0x114D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114D94u;
label_114d94:
    // 0x114d94: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x114d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_114d98:
    // 0x114d98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114d9c:
    // 0x114d9c: 0xc0402d4  jal         func_100B50
label_114da0:
    if (ctx->pc == 0x114DA0u) {
        ctx->pc = 0x114DA4u;
        goto label_114da4;
    }
    ctx->pc = 0x114D9Cu;
    SET_GPR_U32(ctx, 31, 0x114DA4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x114D9Cu, 0x114DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DA4u;
label_114da4:
    // 0x114da4: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x114da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_114da8:
    // 0x114da8: 0xc041b48  jal         func_106D20
label_114dac:
    if (ctx->pc == 0x114DACu) {
        ctx->pc = 0x114DB0u;
        goto label_114db0;
    }
    ctx->pc = 0x114DA8u;
    SET_GPR_U32(ctx, 31, 0x114DB0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x114DA8u, 0x114DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DB0u;
label_114db0:
    // 0x114db0: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x114db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_114db4:
    // 0x114db4: 0xc041b38  jal         func_106CE0
label_114db8:
    if (ctx->pc == 0x114DB8u) {
        ctx->pc = 0x114DBCu;
        goto label_114dbc;
    }
    ctx->pc = 0x114DB4u;
    SET_GPR_U32(ctx, 31, 0x114DBCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x114DB4u, 0x114DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DBCu;
label_114dbc:
    // 0x114dbc: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x114dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_114dc0:
    // 0x114dc0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x114dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_114dc4:
    // 0x114dc4: 0x24a51be0  addiu       $a1, $a1, 0x1BE0
    ctx->pc = 0x114dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7136));
label_114dc8:
    // 0x114dc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x114dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114dcc:
    // 0x114dcc: 0xc0424a8  jal         func_1092A0
label_114dd0:
    if (ctx->pc == 0x114DD0u) {
        ctx->pc = 0x114DD4u;
        goto label_114dd4;
    }
    ctx->pc = 0x114DCCu;
    SET_GPR_U32(ctx, 31, 0x114DD4u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x114DCCu, 0x114DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DD4u;
label_114dd4:
    // 0x114dd4: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x114dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_114dd8:
    // 0x114dd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x114dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_114ddc:
    // 0x114ddc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_114de0:
    if (ctx->pc == 0x114DE0u) {
        ctx->pc = 0x114DE4u;
        goto label_114de4;
    }
    ctx->pc = 0x114DDCu;
    {
        const bool branch_taken_0x114ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x114ddc) {
            ctx->pc = 0x114DF0u;
            goto label_114df0;
        }
    }
    ctx->pc = 0x114DE4u;
label_114de4:
    // 0x114de4: 0x279589a4  addiu       $s5, $gp, -0x765C
    ctx->pc = 0x114de4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936996));
label_114de8:
    // 0x114de8: 0x10000002  b           . + 4 + (0x2 << 2)
label_114dec:
    if (ctx->pc == 0x114DECu) {
        ctx->pc = 0x114DF0u;
        goto label_114df0;
    }
    ctx->pc = 0x114DE8u;
    {
        const bool branch_taken_0x114de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114de8) {
            ctx->pc = 0x114DF4u;
            goto label_114df4;
        }
    }
    ctx->pc = 0x114DF0u;
label_114df0:
    // 0x114df0: 0x27958994  addiu       $s5, $gp, -0x766C
    ctx->pc = 0x114df0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936980));
label_114df4:
    // 0x114df4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x114df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_114df8:
    // 0x114df8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x114df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_114dfc:
    // 0x114dfc: 0xc040304  jal         func_100C10
label_114e00:
    if (ctx->pc == 0x114E00u) {
        ctx->pc = 0x114E04u;
        goto label_114e04;
    }
    ctx->pc = 0x114DFCu;
    SET_GPR_U32(ctx, 31, 0x114E04u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x114DFCu, 0x114E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E04u;
label_114e04:
    // 0x114e04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x114e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_114e08:
    // 0x114e08: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x114e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_114e0c:
    // 0x114e0c: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x114e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_114e10:
    // 0x114e10: 0xc119d74  jal         func_4675D0
label_114e14:
    if (ctx->pc == 0x114E14u) {
        ctx->pc = 0x114E18u;
        goto label_114e18;
    }
    ctx->pc = 0x114E10u;
    SET_GPR_U32(ctx, 31, 0x114E18u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x114E10u, 0x114E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E18u;
label_114e18:
    // 0x114e18: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x114e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_114e1c:
    // 0x114e1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114e20:
    // 0x114e20: 0xc0402d4  jal         func_100B50
label_114e24:
    if (ctx->pc == 0x114E24u) {
        ctx->pc = 0x114E28u;
        goto label_114e28;
    }
    ctx->pc = 0x114E20u;
    SET_GPR_U32(ctx, 31, 0x114E28u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x114E20u, 0x114E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E28u;
label_114e28:
    // 0x114e28: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x114e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_114e2c:
    // 0x114e2c: 0xc119db4  jal         func_4676D0
label_114e30:
    if (ctx->pc == 0x114E30u) {
        ctx->pc = 0x114E34u;
        goto label_114e34;
    }
    ctx->pc = 0x114E2Cu;
    SET_GPR_U32(ctx, 31, 0x114E34u);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x114E2Cu, 0x114E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E34u;
label_114e34:
    // 0x114e34: 0x10400134  beqz        $v0, . + 4 + (0x134 << 2)
label_114e38:
    if (ctx->pc == 0x114E38u) {
        ctx->pc = 0x114E3Cu;
        goto label_114e3c;
    }
    ctx->pc = 0x114E34u;
    {
        const bool branch_taken_0x114e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e34) {
            ctx->pc = 0x115308u;
            goto label_115308;
        }
    }
    ctx->pc = 0x114E3Cu;
label_114e3c:
    // 0x114e3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x114e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_114e40:
    // 0x114e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114e44:
    // 0x114e44: 0xc08ec98  jal         func_23B260
label_114e48:
    if (ctx->pc == 0x114E48u) {
        ctx->pc = 0x114E4Cu;
        goto label_114e4c;
    }
    ctx->pc = 0x114E44u;
    SET_GPR_U32(ctx, 31, 0x114E4Cu);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x114E44u, 0x114E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E4Cu;
label_114e4c:
    // 0x114e4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x114e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_114e50:
    // 0x114e50: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x114e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_114e54:
    // 0x114e54: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x114e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_114e58:
    // 0x114e58: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x114e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_114e5c:
    // 0x114e5c: 0xc0422a8  jal         func_108AA0
label_114e60:
    if (ctx->pc == 0x114E60u) {
        ctx->pc = 0x114E64u;
        goto label_114e64;
    }
    ctx->pc = 0x114E5Cu;
    SET_GPR_U32(ctx, 31, 0x114E64u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x114E5Cu, 0x114E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E64u;
label_114e64:
    // 0x114e64: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x114e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_114e68:
    // 0x114e68: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x114e68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_114e6c:
    // 0x114e6c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_114e70:
    if (ctx->pc == 0x114E70u) {
        ctx->pc = 0x114E74u;
        goto label_114e74;
    }
    ctx->pc = 0x114E6Cu;
    {
        const bool branch_taken_0x114e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x114e6c) {
            ctx->pc = 0x114EB4u;
            goto label_114eb4;
        }
    }
    ctx->pc = 0x114E74u;
label_114e74:
    // 0x114e74: 0xa3a0014f  sb          $zero, 0x14F($sp)
    ctx->pc = 0x114e74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 335), (uint8_t)GPR_U32(ctx, 0));
label_114e78:
    // 0x114e78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x114e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_114e7c:
    // 0x114e7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114e80:
    // 0x114e80: 0xc119d90  jal         func_467640
label_114e84:
    if (ctx->pc == 0x114E84u) {
        ctx->pc = 0x114E88u;
        goto label_114e88;
    }
    ctx->pc = 0x114E80u;
    SET_GPR_U32(ctx, 31, 0x114E88u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x114E80u, 0x114E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E88u;
label_114e88:
    // 0x114e88: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x114e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_114e8c:
    // 0x114e8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114e90:
    // 0x114e90: 0xc0402d4  jal         func_100B50
label_114e94:
    if (ctx->pc == 0x114E94u) {
        ctx->pc = 0x114E98u;
        goto label_114e98;
    }
    ctx->pc = 0x114E90u;
    SET_GPR_U32(ctx, 31, 0x114E98u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x114E90u, 0x114E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E98u;
label_114e98:
    // 0x114e98: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x114e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_114e9c:
    // 0x114e9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x114e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_114ea0:
    // 0x114ea0: 0xc0402d4  jal         func_100B50
label_114ea4:
    if (ctx->pc == 0x114EA4u) {
        ctx->pc = 0x114EA8u;
        goto label_114ea8;
    }
    ctx->pc = 0x114EA0u;
    SET_GPR_U32(ctx, 31, 0x114EA8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x114EA0u, 0x114EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EA8u;
label_114ea8:
    // 0x114ea8: 0x93a2014f  lbu         $v0, 0x14F($sp)
    ctx->pc = 0x114ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 335)));
label_114eac:
    // 0x114eac: 0x10000125  b           . + 4 + (0x125 << 2)
label_114eb0:
    if (ctx->pc == 0x114EB0u) {
        ctx->pc = 0x114EB4u;
        goto label_114eb4;
    }
    ctx->pc = 0x114EACu;
    {
        const bool branch_taken_0x114eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114eac) {
            ctx->pc = 0x115344u;
            goto label_115344;
        }
    }
    ctx->pc = 0x114EB4u;
label_114eb4:
    // 0x114eb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x114eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_114eb8:
    // 0x114eb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x114eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_114ebc:
    // 0x114ebc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x114ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_114ec0:
    // 0x114ec0: 0x320f809  jalr        $t9
label_114ec4:
    if (ctx->pc == 0x114EC4u) {
        ctx->pc = 0x114EC8u;
        goto label_114ec8;
    }
    ctx->pc = 0x114EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114EC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114EC0u, 0x114EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114EC8u;
label_114ec8:
    // 0x114ec8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x114ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_114ecc:
    // 0x114ecc: 0x1443007c  bne         $v0, $v1, . + 4 + (0x7C << 2)
label_114ed0:
    if (ctx->pc == 0x114ED0u) {
        ctx->pc = 0x114ED4u;
        goto label_114ed4;
    }
    ctx->pc = 0x114ECCu;
    {
        const bool branch_taken_0x114ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x114ecc) {
            ctx->pc = 0x1150C0u;
            goto label_1150c0;
        }
    }
    ctx->pc = 0x114ED4u;
label_114ed4:
    // 0x114ed4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x114ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_114ed8:
    // 0x114ed8: 0xc045658  jal         func_115960
label_114edc:
    if (ctx->pc == 0x114EDCu) {
        ctx->pc = 0x114EE0u;
        goto label_114ee0;
    }
    ctx->pc = 0x114ED8u;
    SET_GPR_U32(ctx, 31, 0x114EE0u);
    ctx->pc = 0x115960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115960u, 0x114ED8u, 0x114EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EE0u;
label_114ee0:
    // 0x114ee0: 0xc090864  jal         func_242190
label_114ee4:
    if (ctx->pc == 0x114EE4u) {
        ctx->pc = 0x114EE8u;
        goto label_114ee8;
    }
    ctx->pc = 0x114EE0u;
    SET_GPR_U32(ctx, 31, 0x114EE8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x114EE0u, 0x114EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EE8u;
label_114ee8:
    // 0x114ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114eec:
    // 0x114eec: 0xc090590  jal         func_241640
label_114ef0:
    if (ctx->pc == 0x114EF0u) {
        ctx->pc = 0x114EF4u;
        goto label_114ef4;
    }
    ctx->pc = 0x114EECu;
    SET_GPR_U32(ctx, 31, 0x114EF4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x114EECu, 0x114EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114EF4u;
label_114ef4:
    // 0x114ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114ef8:
    // 0x114ef8: 0xc091574  jal         func_2455D0
label_114efc:
    if (ctx->pc == 0x114EFCu) {
        ctx->pc = 0x114F00u;
        goto label_114f00;
    }
    ctx->pc = 0x114EF8u;
    SET_GPR_U32(ctx, 31, 0x114F00u);
    ctx->pc = 0x2455D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455D0u, 0x114EF8u, 0x114F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F00u;
label_114f00:
    // 0x114f00: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x114f00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114f04:
    // 0x114f04: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x114f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_114f08:
    // 0x114f08: 0xc040e7c  jal         func_1039F0
label_114f0c:
    if (ctx->pc == 0x114F0Cu) {
        ctx->pc = 0x114F10u;
        goto label_114f10;
    }
    ctx->pc = 0x114F08u;
    SET_GPR_U32(ctx, 31, 0x114F10u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x114F08u, 0x114F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F10u;
label_114f10:
    // 0x114f10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x114f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114f14:
    // 0x114f14: 0x10000017  b           . + 4 + (0x17 << 2)
label_114f18:
    if (ctx->pc == 0x114F18u) {
        ctx->pc = 0x114F1Cu;
        goto label_114f1c;
    }
    ctx->pc = 0x114F14u;
    {
        const bool branch_taken_0x114f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114f14) {
            ctx->pc = 0x114F74u;
            goto label_114f74;
        }
    }
    ctx->pc = 0x114F1Cu;
label_114f1c:
    // 0x114f1c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x114f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_114f20:
    // 0x114f20: 0xc09138c  jal         func_244E30
label_114f24:
    if (ctx->pc == 0x114F24u) {
        ctx->pc = 0x114F28u;
        goto label_114f28;
    }
    ctx->pc = 0x114F20u;
    SET_GPR_U32(ctx, 31, 0x114F28u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x114F20u, 0x114F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F28u;
label_114f28:
    // 0x114f28: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x114f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_114f2c:
    // 0x114f2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114f30:
    // 0x114f30: 0xc044da4  jal         func_113690
label_114f34:
    if (ctx->pc == 0x114F34u) {
        ctx->pc = 0x114F38u;
        goto label_114f38;
    }
    ctx->pc = 0x114F30u;
    SET_GPR_U32(ctx, 31, 0x114F38u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x114F30u, 0x114F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F38u;
label_114f38:
    // 0x114f38: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x114f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_114f3c:
    // 0x114f3c: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x114f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_114f40:
    // 0x114f40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_114f44:
    if (ctx->pc == 0x114F44u) {
        ctx->pc = 0x114F48u;
        goto label_114f48;
    }
    ctx->pc = 0x114F40u;
    {
        const bool branch_taken_0x114f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114f40) {
            ctx->pc = 0x114F70u;
            goto label_114f70;
        }
    }
    ctx->pc = 0x114F48u;
label_114f48:
    // 0x114f48: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x114f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_114f4c:
    // 0x114f4c: 0xc0457f0  jal         func_115FC0
label_114f50:
    if (ctx->pc == 0x114F50u) {
        ctx->pc = 0x114F54u;
        goto label_114f54;
    }
    ctx->pc = 0x114F4Cu;
    SET_GPR_U32(ctx, 31, 0x114F54u);
    ctx->pc = 0x115FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FC0u, 0x114F4Cu, 0x114F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F54u;
label_114f54:
    // 0x114f54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_114f58:
    if (ctx->pc == 0x114F58u) {
        ctx->pc = 0x114F5Cu;
        goto label_114f5c;
    }
    ctx->pc = 0x114F54u;
    {
        const bool branch_taken_0x114f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114f54) {
            ctx->pc = 0x114F70u;
            goto label_114f70;
        }
    }
    ctx->pc = 0x114F5Cu;
label_114f5c:
    // 0x114f5c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x114f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_114f60:
    // 0x114f60: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x114f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_114f64:
    // 0x114f64: 0x27a60144  addiu       $a2, $sp, 0x144
    ctx->pc = 0x114f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_114f68:
    // 0x114f68: 0xc045624  jal         func_115890
label_114f6c:
    if (ctx->pc == 0x114F6Cu) {
        ctx->pc = 0x114F70u;
        goto label_114f70;
    }
    ctx->pc = 0x114F68u;
    SET_GPR_U32(ctx, 31, 0x114F70u);
    ctx->pc = 0x115890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115890u, 0x114F68u, 0x114F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F70u;
label_114f70:
    // 0x114f70: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x114f70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_114f74:
    // 0x114f74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x114f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_114f78:
    // 0x114f78: 0xc04147c  jal         func_1051F0
label_114f7c:
    if (ctx->pc == 0x114F7Cu) {
        ctx->pc = 0x114F80u;
        goto label_114f80;
    }
    ctx->pc = 0x114F78u;
    SET_GPR_U32(ctx, 31, 0x114F80u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x114F78u, 0x114F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F80u;
label_114f80:
    // 0x114f80: 0x1682ffe6  bne         $s4, $v0, . + 4 + (-0x1A << 2)
label_114f84:
    if (ctx->pc == 0x114F84u) {
        ctx->pc = 0x114F88u;
        goto label_114f88;
    }
    ctx->pc = 0x114F80u;
    {
        const bool branch_taken_0x114f80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x114f80) {
            ctx->pc = 0x114F1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114f1c;
        }
    }
    ctx->pc = 0x114F88u;
label_114f88:
    // 0x114f88: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x114f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_114f8c:
    // 0x114f8c: 0xc045610  jal         func_115840
label_114f90:
    if (ctx->pc == 0x114F90u) {
        ctx->pc = 0x114F94u;
        goto label_114f94;
    }
    ctx->pc = 0x114F8Cu;
    SET_GPR_U32(ctx, 31, 0x114F94u);
    ctx->pc = 0x115840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115840u, 0x114F8Cu, 0x114F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114F94u;
label_114f94:
    // 0x114f94: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x114f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_114f98:
    // 0x114f98: 0xc0b9f20  jal         func_2E7C80
label_114f9c:
    if (ctx->pc == 0x114F9Cu) {
        ctx->pc = 0x114FA0u;
        goto label_114fa0;
    }
    ctx->pc = 0x114F98u;
    SET_GPR_U32(ctx, 31, 0x114FA0u);
    ctx->pc = 0x2E7C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7C80u, 0x114F98u, 0x114FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FA0u;
label_114fa0:
    // 0x114fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114fa4:
    // 0x114fa4: 0xc045608  jal         func_115820
label_114fa8:
    if (ctx->pc == 0x114FA8u) {
        ctx->pc = 0x114FACu;
        goto label_114fac;
    }
    ctx->pc = 0x114FA4u;
    SET_GPR_U32(ctx, 31, 0x114FACu);
    ctx->pc = 0x115820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115820u, 0x114FA4u, 0x114FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FACu;
label_114fac:
    // 0x114fac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x114facu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114fb0:
    // 0x114fb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x114fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_114fb4:
    // 0x114fb4: 0xc045600  jal         func_115800
label_114fb8:
    if (ctx->pc == 0x114FB8u) {
        ctx->pc = 0x114FBCu;
        goto label_114fbc;
    }
    ctx->pc = 0x114FB4u;
    SET_GPR_U32(ctx, 31, 0x114FBCu);
    ctx->pc = 0x115800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115800u, 0x114FB4u, 0x114FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FBCu;
label_114fbc:
    // 0x114fbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x114fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114fc0:
    // 0x114fc0: 0x10000012  b           . + 4 + (0x12 << 2)
label_114fc4:
    if (ctx->pc == 0x114FC4u) {
        ctx->pc = 0x114FC8u;
        goto label_114fc8;
    }
    ctx->pc = 0x114FC0u;
    {
        const bool branch_taken_0x114fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114fc0) {
            ctx->pc = 0x11500Cu;
            goto label_11500c;
        }
    }
    ctx->pc = 0x114FC8u;
label_114fc8:
    // 0x114fc8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x114fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_114fcc:
    // 0x114fcc: 0xc0455f4  jal         func_1157D0
label_114fd0:
    if (ctx->pc == 0x114FD0u) {
        ctx->pc = 0x114FD4u;
        goto label_114fd4;
    }
    ctx->pc = 0x114FCCu;
    SET_GPR_U32(ctx, 31, 0x114FD4u);
    ctx->pc = 0x1157D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157D0u, 0x114FCCu, 0x114FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FD4u;
label_114fd4:
    // 0x114fd4: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x114fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_114fd8:
    // 0x114fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114fdc:
    // 0x114fdc: 0xc044edc  jal         func_113B70
label_114fe0:
    if (ctx->pc == 0x114FE0u) {
        ctx->pc = 0x114FE4u;
        goto label_114fe4;
    }
    ctx->pc = 0x114FDCu;
    SET_GPR_U32(ctx, 31, 0x114FE4u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x114FDCu, 0x114FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114FE4u;
label_114fe4:
    // 0x114fe4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x114fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_114fe8:
    // 0x114fe8: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x114fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_114fec:
    // 0x114fec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_114ff0:
    if (ctx->pc == 0x114FF0u) {
        ctx->pc = 0x114FF4u;
        goto label_114ff4;
    }
    ctx->pc = 0x114FECu;
    {
        const bool branch_taken_0x114fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114fec) {
            ctx->pc = 0x115008u;
            goto label_115008;
        }
    }
    ctx->pc = 0x114FF4u;
label_114ff4:
    // 0x114ff4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x114ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_114ff8:
    // 0x114ff8: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x114ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_114ffc:
    // 0x114ffc: 0x27a6013c  addiu       $a2, $sp, 0x13C
    ctx->pc = 0x114ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_115000:
    // 0x115000: 0xc045624  jal         func_115890
label_115004:
    if (ctx->pc == 0x115004u) {
        ctx->pc = 0x115008u;
        goto label_115008;
    }
    ctx->pc = 0x115000u;
    SET_GPR_U32(ctx, 31, 0x115008u);
    ctx->pc = 0x115890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115890u, 0x115000u, 0x115008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115008u;
label_115008:
    // 0x115008: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x115008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_11500c:
    // 0x11500c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11500cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_115010:
    // 0x115010: 0xc0455ec  jal         func_1157B0
label_115014:
    if (ctx->pc == 0x115014u) {
        ctx->pc = 0x115018u;
        goto label_115018;
    }
    ctx->pc = 0x115010u;
    SET_GPR_U32(ctx, 31, 0x115018u);
    ctx->pc = 0x1157B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157B0u, 0x115010u, 0x115018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115018u;
label_115018:
    // 0x115018: 0x1662ffeb  bne         $s3, $v0, . + 4 + (-0x15 << 2)
label_11501c:
    if (ctx->pc == 0x11501Cu) {
        ctx->pc = 0x115020u;
        goto label_115020;
    }
    ctx->pc = 0x115018u;
    {
        const bool branch_taken_0x115018 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x115018) {
            ctx->pc = 0x114FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114fc8;
        }
    }
    ctx->pc = 0x115020u;
label_115020:
    // 0x115020: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x115020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_115024:
    // 0x115024: 0xc045610  jal         func_115840
label_115028:
    if (ctx->pc == 0x115028u) {
        ctx->pc = 0x11502Cu;
        goto label_11502c;
    }
    ctx->pc = 0x115024u;
    SET_GPR_U32(ctx, 31, 0x11502Cu);
    ctx->pc = 0x115840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115840u, 0x115024u, 0x11502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11502Cu;
label_11502c:
    // 0x11502c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x11502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_115030:
    // 0x115030: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x115030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_115034:
    // 0x115034: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x115034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_115038:
    // 0x115038: 0xc0422a8  jal         func_108AA0
label_11503c:
    if (ctx->pc == 0x11503Cu) {
        ctx->pc = 0x115040u;
        goto label_115040;
    }
    ctx->pc = 0x115038u;
    SET_GPR_U32(ctx, 31, 0x115040u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x115038u, 0x115040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115040u;
label_115040:
    // 0x115040: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x115040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_115044:
    // 0x115044: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x115044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_115048:
    // 0x115048: 0xc0455cc  jal         func_115730
label_11504c:
    if (ctx->pc == 0x11504Cu) {
        ctx->pc = 0x115050u;
        goto label_115050;
    }
    ctx->pc = 0x115048u;
    SET_GPR_U32(ctx, 31, 0x115050u);
    ctx->pc = 0x115730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115730u, 0x115048u, 0x115050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115050u;
label_115050:
    // 0x115050: 0x1000000b  b           . + 4 + (0xB << 2)
label_115054:
    if (ctx->pc == 0x115054u) {
        ctx->pc = 0x115058u;
        goto label_115058;
    }
    ctx->pc = 0x115050u;
    {
        const bool branch_taken_0x115050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115050) {
            ctx->pc = 0x115080u;
            goto label_115080;
        }
    }
    ctx->pc = 0x115058u;
label_115058:
    // 0x115058: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x115058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_11505c:
    // 0x11505c: 0xc0455c4  jal         func_115710
label_115060:
    if (ctx->pc == 0x115060u) {
        ctx->pc = 0x115064u;
        goto label_115064;
    }
    ctx->pc = 0x11505Cu;
    SET_GPR_U32(ctx, 31, 0x115064u);
    ctx->pc = 0x115710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115710u, 0x11505Cu, 0x115064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115064u;
label_115064:
    // 0x115064: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x115064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_115068:
    // 0x115068: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x115068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11506c:
    // 0x11506c: 0xc0457fc  jal         func_115FF0
label_115070:
    if (ctx->pc == 0x115070u) {
        ctx->pc = 0x115074u;
        goto label_115074;
    }
    ctx->pc = 0x11506Cu;
    SET_GPR_U32(ctx, 31, 0x115074u);
    ctx->pc = 0x115FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FF0u, 0x11506Cu, 0x115074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115074u;
label_115074:
    // 0x115074: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x115074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_115078:
    // 0x115078: 0xc0455b4  jal         func_1156D0
label_11507c:
    if (ctx->pc == 0x11507Cu) {
        ctx->pc = 0x115080u;
        goto label_115080;
    }
    ctx->pc = 0x115078u;
    SET_GPR_U32(ctx, 31, 0x115080u);
    ctx->pc = 0x1156D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156D0u, 0x115078u, 0x115080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115080u;
label_115080:
    // 0x115080: 0x27a4012c  addiu       $a0, $sp, 0x12C
    ctx->pc = 0x115080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_115084:
    // 0x115084: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x115084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_115088:
    // 0x115088: 0xc045588  jal         func_115620
label_11508c:
    if (ctx->pc == 0x11508Cu) {
        ctx->pc = 0x115090u;
        goto label_115090;
    }
    ctx->pc = 0x115088u;
    SET_GPR_U32(ctx, 31, 0x115090u);
    ctx->pc = 0x115620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115620u, 0x115088u, 0x115090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115090u;
label_115090:
    // 0x115090: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x115090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_115094:
    // 0x115094: 0x27a5012c  addiu       $a1, $sp, 0x12C
    ctx->pc = 0x115094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_115098:
    // 0x115098: 0xc041998  jal         func_106660
label_11509c:
    if (ctx->pc == 0x11509Cu) {
        ctx->pc = 0x1150A0u;
        goto label_1150a0;
    }
    ctx->pc = 0x115098u;
    SET_GPR_U32(ctx, 31, 0x1150A0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x115098u, 0x1150A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150A0u;
label_1150a0:
    // 0x1150a0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1150a4:
    if (ctx->pc == 0x1150A4u) {
        ctx->pc = 0x1150A8u;
        goto label_1150a8;
    }
    ctx->pc = 0x1150A0u;
    {
        const bool branch_taken_0x1150a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1150a0) {
            ctx->pc = 0x115058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115058;
        }
    }
    ctx->pc = 0x1150A8u;
label_1150a8:
    // 0x1150a8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x1150a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_1150ac:
    // 0x1150ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1150acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1150b0:
    // 0x1150b0: 0xc0454e0  jal         func_115380
label_1150b4:
    if (ctx->pc == 0x1150B4u) {
        ctx->pc = 0x1150B8u;
        goto label_1150b8;
    }
    ctx->pc = 0x1150B0u;
    SET_GPR_U32(ctx, 31, 0x1150B8u);
    ctx->pc = 0x115380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115380u, 0x1150B0u, 0x1150B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150B8u;
label_1150b8:
    // 0x1150b8: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1150bc:
    if (ctx->pc == 0x1150BCu) {
        ctx->pc = 0x1150C0u;
        goto label_1150c0;
    }
    ctx->pc = 0x1150B8u;
    {
        const bool branch_taken_0x1150b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1150b8) {
            ctx->pc = 0x1152ECu;
            goto label_1152ec;
        }
    }
    ctx->pc = 0x1150C0u;
label_1150c0:
    // 0x1150c0: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x1150c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_1150c4:
    // 0x1150c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1150c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1150c8:
    // 0x1150c8: 0x27a50134  addiu       $a1, $sp, 0x134
    ctx->pc = 0x1150c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_1150cc:
    // 0x1150cc: 0xc0422a8  jal         func_108AA0
label_1150d0:
    if (ctx->pc == 0x1150D0u) {
        ctx->pc = 0x1150D4u;
        goto label_1150d4;
    }
    ctx->pc = 0x1150CCu;
    SET_GPR_U32(ctx, 31, 0x1150D4u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x1150CCu, 0x1150D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1150D4u;
label_1150d4:
    // 0x1150d4: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x1150d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_1150d8:
    // 0x1150d8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1150dc:
    if (ctx->pc == 0x1150DCu) {
        ctx->pc = 0x1150E0u;
        goto label_1150e0;
    }
    ctx->pc = 0x1150D8u;
    {
        const bool branch_taken_0x1150d8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1150d8) {
            ctx->pc = 0x1150F4u;
            goto label_1150f4;
        }
    }
    ctx->pc = 0x1150E0u;
label_1150e0:
    // 0x1150e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1150e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1150e4:
    // 0x1150e4: 0x0  nop
    ctx->pc = 0x1150e4u;
    // NOP
label_1150e8:
    // 0x1150e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1150e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1150ec:
    // 0x1150ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1150f0:
    if (ctx->pc == 0x1150F0u) {
        ctx->pc = 0x1150F4u;
        goto label_1150f4;
    }
    ctx->pc = 0x1150ECu;
    {
        const bool branch_taken_0x1150ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1150ec) {
            ctx->pc = 0x115110u;
            goto label_115110;
        }
    }
    ctx->pc = 0x1150F4u;
label_1150f4:
    // 0x1150f4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1150f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1150f8:
    // 0x1150f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1150f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1150fc:
    // 0x1150fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1150fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_115100:
    // 0x115100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x115100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_115104:
    // 0x115104: 0x0  nop
    ctx->pc = 0x115104u;
    // NOP
label_115108:
    // 0x115108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_11510c:
    // 0x11510c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11510cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_115110:
    // 0x115110: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x115110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_115114:
    // 0x115114: 0x10000070  b           . + 4 + (0x70 << 2)
label_115118:
    if (ctx->pc == 0x115118u) {
        ctx->pc = 0x11511Cu;
        goto label_11511c;
    }
    ctx->pc = 0x115114u;
    {
        const bool branch_taken_0x115114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115114) {
            ctx->pc = 0x1152D8u;
            goto label_1152d8;
        }
    }
    ctx->pc = 0x11511Cu;
label_11511c:
    // 0x11511c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x11511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_115120:
    // 0x115120: 0xc119b68  jal         func_466DA0
label_115124:
    if (ctx->pc == 0x115124u) {
        ctx->pc = 0x115128u;
        goto label_115128;
    }
    ctx->pc = 0x115120u;
    SET_GPR_U32(ctx, 31, 0x115128u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x115120u, 0x115128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115128u;
label_115128:
    // 0x115128: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x115128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_11512c:
    // 0x11512c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115130:
    // 0x115130: 0xc0400e0  jal         func_100380
label_115134:
    if (ctx->pc == 0x115134u) {
        ctx->pc = 0x115138u;
        goto label_115138;
    }
    ctx->pc = 0x115130u;
    SET_GPR_U32(ctx, 31, 0x115138u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x115130u, 0x115138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115138u;
label_115138:
    // 0x115138: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11513c:
    // 0x11513c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_115140:
    if (ctx->pc == 0x115140u) {
        ctx->pc = 0x115144u;
        goto label_115144;
    }
    ctx->pc = 0x11513Cu;
    {
        const bool branch_taken_0x11513c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11513c) {
            ctx->pc = 0x115154u;
            goto label_115154;
        }
    }
    ctx->pc = 0x115144u;
label_115144:
    // 0x115144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_115148:
    // 0x115148: 0xc0457c4  jal         func_115F10
label_11514c:
    if (ctx->pc == 0x11514Cu) {
        ctx->pc = 0x115150u;
        goto label_115150;
    }
    ctx->pc = 0x115148u;
    SET_GPR_U32(ctx, 31, 0x115150u);
    ctx->pc = 0x115F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F10u, 0x115148u, 0x115150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115150u;
label_115150:
    // 0x115150: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115154:
    // 0x115154: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x115154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_115158:
    // 0x115158: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x115158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_11515c:
    // 0x11515c: 0xc119b68  jal         func_466DA0
label_115160:
    if (ctx->pc == 0x115160u) {
        ctx->pc = 0x115164u;
        goto label_115164;
    }
    ctx->pc = 0x11515Cu;
    SET_GPR_U32(ctx, 31, 0x115164u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11515Cu, 0x115164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115164u;
label_115164:
    // 0x115164: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x115164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_115168:
    // 0x115168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11516c:
    // 0x11516c: 0xc0400e0  jal         func_100380
label_115170:
    if (ctx->pc == 0x115170u) {
        ctx->pc = 0x115174u;
        goto label_115174;
    }
    ctx->pc = 0x11516Cu;
    SET_GPR_U32(ctx, 31, 0x115174u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11516Cu, 0x115174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115174u;
label_115174:
    // 0x115174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x115174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115178:
    // 0x115178: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_11517c:
    if (ctx->pc == 0x11517Cu) {
        ctx->pc = 0x115180u;
        goto label_115180;
    }
    ctx->pc = 0x115178u;
    {
        const bool branch_taken_0x115178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x115178) {
            ctx->pc = 0x115190u;
            goto label_115190;
        }
    }
    ctx->pc = 0x115180u;
label_115180:
    // 0x115180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115184:
    // 0x115184: 0xc088560  jal         func_221580
label_115188:
    if (ctx->pc == 0x115188u) {
        ctx->pc = 0x11518Cu;
        goto label_11518c;
    }
    ctx->pc = 0x115184u;
    SET_GPR_U32(ctx, 31, 0x11518Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x115184u, 0x11518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11518Cu;
label_11518c:
    // 0x11518c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11518cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115190:
    // 0x115190: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x115190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_115194:
    // 0x115194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115198:
    // 0x115198: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x115198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_11519c:
    // 0x11519c: 0xc0457fc  jal         func_115FF0
label_1151a0:
    if (ctx->pc == 0x1151A0u) {
        ctx->pc = 0x1151A4u;
        goto label_1151a4;
    }
    ctx->pc = 0x11519Cu;
    SET_GPR_U32(ctx, 31, 0x1151A4u);
    ctx->pc = 0x115FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FF0u, 0x11519Cu, 0x1151A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151A4u;
label_1151a4:
    // 0x1151a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1151a8:
    if (ctx->pc == 0x1151A8u) {
        ctx->pc = 0x1151ACu;
        goto label_1151ac;
    }
    ctx->pc = 0x1151A4u;
    {
        const bool branch_taken_0x1151a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1151a4) {
            ctx->pc = 0x1151E0u;
            goto label_1151e0;
        }
    }
    ctx->pc = 0x1151ACu;
label_1151ac:
    // 0x1151ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1151acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1151b0:
    // 0x1151b0: 0xc0457d8  jal         func_115F60
label_1151b4:
    if (ctx->pc == 0x1151B4u) {
        ctx->pc = 0x1151B8u;
        goto label_1151b8;
    }
    ctx->pc = 0x1151B0u;
    SET_GPR_U32(ctx, 31, 0x1151B8u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x1151B0u, 0x1151B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151B8u;
label_1151b8:
    // 0x1151b8: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x1151b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_1151bc:
    // 0x1151bc: 0x27be0128  addiu       $fp, $sp, 0x128
    ctx->pc = 0x1151bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_1151c0:
    // 0x1151c0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1151c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1151c4:
    // 0x1151c4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1151c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1151c8:
    // 0x1151c8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1151c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1151cc:
    // 0x1151cc: 0xc045054  jal         func_114150
label_1151d0:
    if (ctx->pc == 0x1151D0u) {
        ctx->pc = 0x1151D4u;
        goto label_1151d4;
    }
    ctx->pc = 0x1151CCu;
    SET_GPR_U32(ctx, 31, 0x1151D4u);
    ctx->pc = 0x114150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114150u, 0x1151CCu, 0x1151D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151D4u;
label_1151d4:
    // 0x1151d4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1151d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1151d8:
    // 0x1151d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1151dc:
    if (ctx->pc == 0x1151DCu) {
        ctx->pc = 0x1151E0u;
        goto label_1151e0;
    }
    ctx->pc = 0x1151D8u;
    {
        const bool branch_taken_0x1151d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1151d8) {
            ctx->pc = 0x11522Cu;
            goto label_11522c;
        }
    }
    ctx->pc = 0x1151E0u;
label_1151e0:
    // 0x1151e0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1151e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1151e4:
    // 0x1151e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1151e8:
    if (ctx->pc == 0x1151E8u) {
        ctx->pc = 0x1151ECu;
        goto label_1151ec;
    }
    ctx->pc = 0x1151E4u;
    {
        const bool branch_taken_0x1151e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1151e4) {
            ctx->pc = 0x115208u;
            goto label_115208;
        }
    }
    ctx->pc = 0x1151ECu;
label_1151ec:
    // 0x1151ec: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1151ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1151f0:
    // 0x1151f0: 0xc044f78  jal         func_113DE0
label_1151f4:
    if (ctx->pc == 0x1151F4u) {
        ctx->pc = 0x1151F8u;
        goto label_1151f8;
    }
    ctx->pc = 0x1151F0u;
    SET_GPR_U32(ctx, 31, 0x1151F8u);
    ctx->pc = 0x113DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DE0u, 0x1151F0u, 0x1151F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151F8u;
label_1151f8:
    // 0x1151f8: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1151f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1151fc:
    // 0x1151fc: 0xc119c5c  jal         func_467170
label_115200:
    if (ctx->pc == 0x115200u) {
        ctx->pc = 0x115204u;
        goto label_115204;
    }
    ctx->pc = 0x1151FCu;
    SET_GPR_U32(ctx, 31, 0x115204u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1151FCu, 0x115204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115204u;
label_115204:
    // 0x115204: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x115204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_115208:
    // 0x115208: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_11520c:
    if (ctx->pc == 0x11520Cu) {
        ctx->pc = 0x115210u;
        goto label_115210;
    }
    ctx->pc = 0x115208u;
    {
        const bool branch_taken_0x115208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x115208) {
            ctx->pc = 0x11522Cu;
            goto label_11522c;
        }
    }
    ctx->pc = 0x115210u;
label_115210:
    // 0x115210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115214:
    // 0x115214: 0xc044f70  jal         func_113DC0
label_115218:
    if (ctx->pc == 0x115218u) {
        ctx->pc = 0x11521Cu;
        goto label_11521c;
    }
    ctx->pc = 0x115214u;
    SET_GPR_U32(ctx, 31, 0x11521Cu);
    ctx->pc = 0x113DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DC0u, 0x115214u, 0x11521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11521Cu;
label_11521c:
    // 0x11521c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11521cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115220:
    // 0x115220: 0xc119c5c  jal         func_467170
label_115224:
    if (ctx->pc == 0x115224u) {
        ctx->pc = 0x115228u;
        goto label_115228;
    }
    ctx->pc = 0x115220u;
    SET_GPR_U32(ctx, 31, 0x115228u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x115220u, 0x115228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115228u;
label_115228:
    // 0x115228: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x115228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11522c:
    // 0x11522c: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x11522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_115230:
    // 0x115230: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x115230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_115234:
    // 0x115234: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_115238:
    if (ctx->pc == 0x115238u) {
        ctx->pc = 0x11523Cu;
        goto label_11523c;
    }
    ctx->pc = 0x115234u;
    {
        const bool branch_taken_0x115234 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x115234) {
            ctx->pc = 0x115250u;
            goto label_115250;
        }
    }
    ctx->pc = 0x11523Cu;
label_11523c:
    // 0x11523c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11523cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_115240:
    // 0x115240: 0x0  nop
    ctx->pc = 0x115240u;
    // NOP
label_115244:
    // 0x115244: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_115248:
    // 0x115248: 0x10000008  b           . + 4 + (0x8 << 2)
label_11524c:
    if (ctx->pc == 0x11524Cu) {
        ctx->pc = 0x115250u;
        goto label_115250;
    }
    ctx->pc = 0x115248u;
    {
        const bool branch_taken_0x115248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115248) {
            ctx->pc = 0x11526Cu;
            goto label_11526c;
        }
    }
    ctx->pc = 0x115250u;
label_115250:
    // 0x115250: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x115250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_115254:
    // 0x115254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x115254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_115258:
    // 0x115258: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x115258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_11525c:
    // 0x11525c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11525cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_115260:
    // 0x115260: 0x0  nop
    ctx->pc = 0x115260u;
    // NOP
label_115264:
    // 0x115264: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x115264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_115268:
    // 0x115268: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x115268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11526c:
    // 0x11526c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11526cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_115270:
    // 0x115270: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_115274:
    // 0x115274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x115274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_115278:
    // 0x115278: 0x0  nop
    ctx->pc = 0x115278u;
    // NOP
label_11527c:
    // 0x11527c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x11527cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_115280:
    // 0x115280: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x115280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_115284:
    // 0x115284: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x115284u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_115288:
    // 0x115288: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x115288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_11528c:
    // 0x11528c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11528cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_115290:
    // 0x115290: 0x0  nop
    ctx->pc = 0x115290u;
    // NOP
label_115294:
    // 0x115294: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x115294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_115298:
    // 0x115298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_11529c:
    if (ctx->pc == 0x11529Cu) {
        ctx->pc = 0x1152A0u;
        goto label_1152a0;
    }
    ctx->pc = 0x115298u;
    {
        const bool branch_taken_0x115298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x115298) {
            ctx->pc = 0x1152B0u;
            goto label_1152b0;
        }
    }
    ctx->pc = 0x1152A0u;
label_1152a0:
    // 0x1152a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1152a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1152a4:
    // 0x1152a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1152a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1152a8:
    // 0x1152a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1152ac:
    if (ctx->pc == 0x1152ACu) {
        ctx->pc = 0x1152B0u;
        goto label_1152b0;
    }
    ctx->pc = 0x1152A8u;
    {
        const bool branch_taken_0x1152a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1152a8) {
            ctx->pc = 0x1152C4u;
            goto label_1152c4;
        }
    }
    ctx->pc = 0x1152B0u;
label_1152b0:
    // 0x1152b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1152b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1152b4:
    // 0x1152b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1152b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1152b8:
    // 0x1152b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1152b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1152bc:
    // 0x1152bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1152bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1152c0:
    // 0x1152c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1152c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1152c4:
    // 0x1152c4: 0x24650019  addiu       $a1, $v1, 0x19
    ctx->pc = 0x1152c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1152c8:
    // 0x1152c8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1152c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1152cc:
    // 0x1152cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1152ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1152d0:
    // 0x1152d0: 0xc08d48c  jal         func_235230
label_1152d4:
    if (ctx->pc == 0x1152D4u) {
        ctx->pc = 0x1152D8u;
        goto label_1152d8;
    }
    ctx->pc = 0x1152D0u;
    SET_GPR_U32(ctx, 31, 0x1152D8u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x1152D0u, 0x1152D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152D8u;
label_1152d8:
    // 0x1152d8: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x1152d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_1152dc:
    // 0x1152dc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1152dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1152e0:
    // 0x1152e0: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x1152e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_1152e4:
    // 0x1152e4: 0x1460ff8d  bnez        $v1, . + 4 + (-0x73 << 2)
label_1152e8:
    if (ctx->pc == 0x1152E8u) {
        ctx->pc = 0x1152ECu;
        goto label_1152ec;
    }
    ctx->pc = 0x1152E4u;
    {
        const bool branch_taken_0x1152e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1152e4) {
            ctx->pc = 0x11511Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11511c;
        }
    }
    ctx->pc = 0x1152ECu;
label_1152ec:
    // 0x1152ec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1152ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1152f0:
    // 0x1152f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1152f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1152f4:
    // 0x1152f4: 0xc08ec98  jal         func_23B260
label_1152f8:
    if (ctx->pc == 0x1152F8u) {
        ctx->pc = 0x1152FCu;
        goto label_1152fc;
    }
    ctx->pc = 0x1152F4u;
    SET_GPR_U32(ctx, 31, 0x1152FCu);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x1152F4u, 0x1152FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152FCu;
label_1152fc:
    // 0x1152fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1152fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_115300:
    // 0x115300: 0xc119e7c  jal         func_4679F0
label_115304:
    if (ctx->pc == 0x115304u) {
        ctx->pc = 0x115308u;
        goto label_115308;
    }
    ctx->pc = 0x115300u;
    SET_GPR_U32(ctx, 31, 0x115308u);
    ctx->pc = 0x4679F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4679F0u, 0x115300u, 0x115308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115308u;
label_115308:
    // 0x115308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11530c:
    // 0x11530c: 0xa3a2014e  sb          $v0, 0x14E($sp)
    ctx->pc = 0x11530cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 334), (uint8_t)GPR_U32(ctx, 2));
label_115310:
    // 0x115310: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x115310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_115314:
    // 0x115314: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115318:
    // 0x115318: 0xc119d90  jal         func_467640
label_11531c:
    if (ctx->pc == 0x11531Cu) {
        ctx->pc = 0x115320u;
        goto label_115320;
    }
    ctx->pc = 0x115318u;
    SET_GPR_U32(ctx, 31, 0x115320u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x115318u, 0x115320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115320u;
label_115320:
    // 0x115320: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x115320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_115324:
    // 0x115324: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x115324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115328:
    // 0x115328: 0xc0402d4  jal         func_100B50
label_11532c:
    if (ctx->pc == 0x11532Cu) {
        ctx->pc = 0x115330u;
        goto label_115330;
    }
    ctx->pc = 0x115328u;
    SET_GPR_U32(ctx, 31, 0x115330u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x115328u, 0x115330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115330u;
label_115330:
    // 0x115330: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x115330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_115334:
    // 0x115334: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x115334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115338:
    // 0x115338: 0xc0402d4  jal         func_100B50
label_11533c:
    if (ctx->pc == 0x11533Cu) {
        ctx->pc = 0x115340u;
        goto label_115340;
    }
    ctx->pc = 0x115338u;
    SET_GPR_U32(ctx, 31, 0x115340u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x115338u, 0x115340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115340u;
label_115340:
    // 0x115340: 0x93a2014e  lbu         $v0, 0x14E($sp)
    ctx->pc = 0x115340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 334)));
label_115344:
    // 0x115344: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x115344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_115348:
    // 0x115348: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x115348u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11534c:
    // 0x11534c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11534cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_115350:
    // 0x115350: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x115350u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_115354:
    // 0x115354: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x115354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_115358:
    // 0x115358: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x115358u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11535c:
    // 0x11535c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11535cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_115360:
    // 0x115360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x115360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_115364:
    // 0x115364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x115364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_115368:
    // 0x115368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11536c:
    // 0x11536c: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x11536cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_115370:
    // 0x115370: 0x3e00008  jr          $ra
label_115374:
    if (ctx->pc == 0x115374u) {
        ctx->pc = 0x115378u;
        goto label_115378;
    }
    ctx->pc = 0x115370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115378u;
label_115378:
    // 0x115378: 0x0  nop
    ctx->pc = 0x115378u;
    // NOP
label_11537c:
    // 0x11537c: 0x0  nop
    ctx->pc = 0x11537cu;
    // NOP
    ctx->pc = 0x115380u;
}
