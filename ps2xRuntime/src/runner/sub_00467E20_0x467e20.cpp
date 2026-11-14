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

// Function: sub_00467E20
// Address: 0x467e20 - 0x4684b0
void sub_00467E20_0x467e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467E20_0x467e20");
#endif

    switch (ctx->pc) {
        case 0x467e20u: goto label_467e20;
        case 0x467e24u: goto label_467e24;
        case 0x467e28u: goto label_467e28;
        case 0x467e2cu: goto label_467e2c;
        case 0x467e30u: goto label_467e30;
        case 0x467e34u: goto label_467e34;
        case 0x467e38u: goto label_467e38;
        case 0x467e3cu: goto label_467e3c;
        case 0x467e40u: goto label_467e40;
        case 0x467e44u: goto label_467e44;
        case 0x467e48u: goto label_467e48;
        case 0x467e4cu: goto label_467e4c;
        case 0x467e50u: goto label_467e50;
        case 0x467e54u: goto label_467e54;
        case 0x467e58u: goto label_467e58;
        case 0x467e5cu: goto label_467e5c;
        case 0x467e60u: goto label_467e60;
        case 0x467e64u: goto label_467e64;
        case 0x467e68u: goto label_467e68;
        case 0x467e6cu: goto label_467e6c;
        case 0x467e70u: goto label_467e70;
        case 0x467e74u: goto label_467e74;
        case 0x467e78u: goto label_467e78;
        case 0x467e7cu: goto label_467e7c;
        case 0x467e80u: goto label_467e80;
        case 0x467e84u: goto label_467e84;
        case 0x467e88u: goto label_467e88;
        case 0x467e8cu: goto label_467e8c;
        case 0x467e90u: goto label_467e90;
        case 0x467e94u: goto label_467e94;
        case 0x467e98u: goto label_467e98;
        case 0x467e9cu: goto label_467e9c;
        case 0x467ea0u: goto label_467ea0;
        case 0x467ea4u: goto label_467ea4;
        case 0x467ea8u: goto label_467ea8;
        case 0x467eacu: goto label_467eac;
        case 0x467eb0u: goto label_467eb0;
        case 0x467eb4u: goto label_467eb4;
        case 0x467eb8u: goto label_467eb8;
        case 0x467ebcu: goto label_467ebc;
        case 0x467ec0u: goto label_467ec0;
        case 0x467ec4u: goto label_467ec4;
        case 0x467ec8u: goto label_467ec8;
        case 0x467eccu: goto label_467ecc;
        case 0x467ed0u: goto label_467ed0;
        case 0x467ed4u: goto label_467ed4;
        case 0x467ed8u: goto label_467ed8;
        case 0x467edcu: goto label_467edc;
        case 0x467ee0u: goto label_467ee0;
        case 0x467ee4u: goto label_467ee4;
        case 0x467ee8u: goto label_467ee8;
        case 0x467eecu: goto label_467eec;
        case 0x467ef0u: goto label_467ef0;
        case 0x467ef4u: goto label_467ef4;
        case 0x467ef8u: goto label_467ef8;
        case 0x467efcu: goto label_467efc;
        case 0x467f00u: goto label_467f00;
        case 0x467f04u: goto label_467f04;
        case 0x467f08u: goto label_467f08;
        case 0x467f0cu: goto label_467f0c;
        case 0x467f10u: goto label_467f10;
        case 0x467f14u: goto label_467f14;
        case 0x467f18u: goto label_467f18;
        case 0x467f1cu: goto label_467f1c;
        case 0x467f20u: goto label_467f20;
        case 0x467f24u: goto label_467f24;
        case 0x467f28u: goto label_467f28;
        case 0x467f2cu: goto label_467f2c;
        case 0x467f30u: goto label_467f30;
        case 0x467f34u: goto label_467f34;
        case 0x467f38u: goto label_467f38;
        case 0x467f3cu: goto label_467f3c;
        case 0x467f40u: goto label_467f40;
        case 0x467f44u: goto label_467f44;
        case 0x467f48u: goto label_467f48;
        case 0x467f4cu: goto label_467f4c;
        case 0x467f50u: goto label_467f50;
        case 0x467f54u: goto label_467f54;
        case 0x467f58u: goto label_467f58;
        case 0x467f5cu: goto label_467f5c;
        case 0x467f60u: goto label_467f60;
        case 0x467f64u: goto label_467f64;
        case 0x467f68u: goto label_467f68;
        case 0x467f6cu: goto label_467f6c;
        case 0x467f70u: goto label_467f70;
        case 0x467f74u: goto label_467f74;
        case 0x467f78u: goto label_467f78;
        case 0x467f7cu: goto label_467f7c;
        case 0x467f80u: goto label_467f80;
        case 0x467f84u: goto label_467f84;
        case 0x467f88u: goto label_467f88;
        case 0x467f8cu: goto label_467f8c;
        case 0x467f90u: goto label_467f90;
        case 0x467f94u: goto label_467f94;
        case 0x467f98u: goto label_467f98;
        case 0x467f9cu: goto label_467f9c;
        case 0x467fa0u: goto label_467fa0;
        case 0x467fa4u: goto label_467fa4;
        case 0x467fa8u: goto label_467fa8;
        case 0x467facu: goto label_467fac;
        case 0x467fb0u: goto label_467fb0;
        case 0x467fb4u: goto label_467fb4;
        case 0x467fb8u: goto label_467fb8;
        case 0x467fbcu: goto label_467fbc;
        case 0x467fc0u: goto label_467fc0;
        case 0x467fc4u: goto label_467fc4;
        case 0x467fc8u: goto label_467fc8;
        case 0x467fccu: goto label_467fcc;
        case 0x467fd0u: goto label_467fd0;
        case 0x467fd4u: goto label_467fd4;
        case 0x467fd8u: goto label_467fd8;
        case 0x467fdcu: goto label_467fdc;
        case 0x467fe0u: goto label_467fe0;
        case 0x467fe4u: goto label_467fe4;
        case 0x467fe8u: goto label_467fe8;
        case 0x467fecu: goto label_467fec;
        case 0x467ff0u: goto label_467ff0;
        case 0x467ff4u: goto label_467ff4;
        case 0x467ff8u: goto label_467ff8;
        case 0x467ffcu: goto label_467ffc;
        case 0x468000u: goto label_468000;
        case 0x468004u: goto label_468004;
        case 0x468008u: goto label_468008;
        case 0x46800cu: goto label_46800c;
        case 0x468010u: goto label_468010;
        case 0x468014u: goto label_468014;
        case 0x468018u: goto label_468018;
        case 0x46801cu: goto label_46801c;
        case 0x468020u: goto label_468020;
        case 0x468024u: goto label_468024;
        case 0x468028u: goto label_468028;
        case 0x46802cu: goto label_46802c;
        case 0x468030u: goto label_468030;
        case 0x468034u: goto label_468034;
        case 0x468038u: goto label_468038;
        case 0x46803cu: goto label_46803c;
        case 0x468040u: goto label_468040;
        case 0x468044u: goto label_468044;
        case 0x468048u: goto label_468048;
        case 0x46804cu: goto label_46804c;
        case 0x468050u: goto label_468050;
        case 0x468054u: goto label_468054;
        case 0x468058u: goto label_468058;
        case 0x46805cu: goto label_46805c;
        case 0x468060u: goto label_468060;
        case 0x468064u: goto label_468064;
        case 0x468068u: goto label_468068;
        case 0x46806cu: goto label_46806c;
        case 0x468070u: goto label_468070;
        case 0x468074u: goto label_468074;
        case 0x468078u: goto label_468078;
        case 0x46807cu: goto label_46807c;
        case 0x468080u: goto label_468080;
        case 0x468084u: goto label_468084;
        case 0x468088u: goto label_468088;
        case 0x46808cu: goto label_46808c;
        case 0x468090u: goto label_468090;
        case 0x468094u: goto label_468094;
        case 0x468098u: goto label_468098;
        case 0x46809cu: goto label_46809c;
        case 0x4680a0u: goto label_4680a0;
        case 0x4680a4u: goto label_4680a4;
        case 0x4680a8u: goto label_4680a8;
        case 0x4680acu: goto label_4680ac;
        case 0x4680b0u: goto label_4680b0;
        case 0x4680b4u: goto label_4680b4;
        case 0x4680b8u: goto label_4680b8;
        case 0x4680bcu: goto label_4680bc;
        case 0x4680c0u: goto label_4680c0;
        case 0x4680c4u: goto label_4680c4;
        case 0x4680c8u: goto label_4680c8;
        case 0x4680ccu: goto label_4680cc;
        case 0x4680d0u: goto label_4680d0;
        case 0x4680d4u: goto label_4680d4;
        case 0x4680d8u: goto label_4680d8;
        case 0x4680dcu: goto label_4680dc;
        case 0x4680e0u: goto label_4680e0;
        case 0x4680e4u: goto label_4680e4;
        case 0x4680e8u: goto label_4680e8;
        case 0x4680ecu: goto label_4680ec;
        case 0x4680f0u: goto label_4680f0;
        case 0x4680f4u: goto label_4680f4;
        case 0x4680f8u: goto label_4680f8;
        case 0x4680fcu: goto label_4680fc;
        case 0x468100u: goto label_468100;
        case 0x468104u: goto label_468104;
        case 0x468108u: goto label_468108;
        case 0x46810cu: goto label_46810c;
        case 0x468110u: goto label_468110;
        case 0x468114u: goto label_468114;
        case 0x468118u: goto label_468118;
        case 0x46811cu: goto label_46811c;
        case 0x468120u: goto label_468120;
        case 0x468124u: goto label_468124;
        case 0x468128u: goto label_468128;
        case 0x46812cu: goto label_46812c;
        case 0x468130u: goto label_468130;
        case 0x468134u: goto label_468134;
        case 0x468138u: goto label_468138;
        case 0x46813cu: goto label_46813c;
        case 0x468140u: goto label_468140;
        case 0x468144u: goto label_468144;
        case 0x468148u: goto label_468148;
        case 0x46814cu: goto label_46814c;
        case 0x468150u: goto label_468150;
        case 0x468154u: goto label_468154;
        case 0x468158u: goto label_468158;
        case 0x46815cu: goto label_46815c;
        case 0x468160u: goto label_468160;
        case 0x468164u: goto label_468164;
        case 0x468168u: goto label_468168;
        case 0x46816cu: goto label_46816c;
        case 0x468170u: goto label_468170;
        case 0x468174u: goto label_468174;
        case 0x468178u: goto label_468178;
        case 0x46817cu: goto label_46817c;
        case 0x468180u: goto label_468180;
        case 0x468184u: goto label_468184;
        case 0x468188u: goto label_468188;
        case 0x46818cu: goto label_46818c;
        case 0x468190u: goto label_468190;
        case 0x468194u: goto label_468194;
        case 0x468198u: goto label_468198;
        case 0x46819cu: goto label_46819c;
        case 0x4681a0u: goto label_4681a0;
        case 0x4681a4u: goto label_4681a4;
        case 0x4681a8u: goto label_4681a8;
        case 0x4681acu: goto label_4681ac;
        case 0x4681b0u: goto label_4681b0;
        case 0x4681b4u: goto label_4681b4;
        case 0x4681b8u: goto label_4681b8;
        case 0x4681bcu: goto label_4681bc;
        case 0x4681c0u: goto label_4681c0;
        case 0x4681c4u: goto label_4681c4;
        case 0x4681c8u: goto label_4681c8;
        case 0x4681ccu: goto label_4681cc;
        case 0x4681d0u: goto label_4681d0;
        case 0x4681d4u: goto label_4681d4;
        case 0x4681d8u: goto label_4681d8;
        case 0x4681dcu: goto label_4681dc;
        case 0x4681e0u: goto label_4681e0;
        case 0x4681e4u: goto label_4681e4;
        case 0x4681e8u: goto label_4681e8;
        case 0x4681ecu: goto label_4681ec;
        case 0x4681f0u: goto label_4681f0;
        case 0x4681f4u: goto label_4681f4;
        case 0x4681f8u: goto label_4681f8;
        case 0x4681fcu: goto label_4681fc;
        case 0x468200u: goto label_468200;
        case 0x468204u: goto label_468204;
        case 0x468208u: goto label_468208;
        case 0x46820cu: goto label_46820c;
        case 0x468210u: goto label_468210;
        case 0x468214u: goto label_468214;
        case 0x468218u: goto label_468218;
        case 0x46821cu: goto label_46821c;
        case 0x468220u: goto label_468220;
        case 0x468224u: goto label_468224;
        case 0x468228u: goto label_468228;
        case 0x46822cu: goto label_46822c;
        case 0x468230u: goto label_468230;
        case 0x468234u: goto label_468234;
        case 0x468238u: goto label_468238;
        case 0x46823cu: goto label_46823c;
        case 0x468240u: goto label_468240;
        case 0x468244u: goto label_468244;
        case 0x468248u: goto label_468248;
        case 0x46824cu: goto label_46824c;
        case 0x468250u: goto label_468250;
        case 0x468254u: goto label_468254;
        case 0x468258u: goto label_468258;
        case 0x46825cu: goto label_46825c;
        case 0x468260u: goto label_468260;
        case 0x468264u: goto label_468264;
        case 0x468268u: goto label_468268;
        case 0x46826cu: goto label_46826c;
        case 0x468270u: goto label_468270;
        case 0x468274u: goto label_468274;
        case 0x468278u: goto label_468278;
        case 0x46827cu: goto label_46827c;
        case 0x468280u: goto label_468280;
        case 0x468284u: goto label_468284;
        case 0x468288u: goto label_468288;
        case 0x46828cu: goto label_46828c;
        case 0x468290u: goto label_468290;
        case 0x468294u: goto label_468294;
        case 0x468298u: goto label_468298;
        case 0x46829cu: goto label_46829c;
        case 0x4682a0u: goto label_4682a0;
        case 0x4682a4u: goto label_4682a4;
        case 0x4682a8u: goto label_4682a8;
        case 0x4682acu: goto label_4682ac;
        case 0x4682b0u: goto label_4682b0;
        case 0x4682b4u: goto label_4682b4;
        case 0x4682b8u: goto label_4682b8;
        case 0x4682bcu: goto label_4682bc;
        case 0x4682c0u: goto label_4682c0;
        case 0x4682c4u: goto label_4682c4;
        case 0x4682c8u: goto label_4682c8;
        case 0x4682ccu: goto label_4682cc;
        case 0x4682d0u: goto label_4682d0;
        case 0x4682d4u: goto label_4682d4;
        case 0x4682d8u: goto label_4682d8;
        case 0x4682dcu: goto label_4682dc;
        case 0x4682e0u: goto label_4682e0;
        case 0x4682e4u: goto label_4682e4;
        case 0x4682e8u: goto label_4682e8;
        case 0x4682ecu: goto label_4682ec;
        case 0x4682f0u: goto label_4682f0;
        case 0x4682f4u: goto label_4682f4;
        case 0x4682f8u: goto label_4682f8;
        case 0x4682fcu: goto label_4682fc;
        case 0x468300u: goto label_468300;
        case 0x468304u: goto label_468304;
        case 0x468308u: goto label_468308;
        case 0x46830cu: goto label_46830c;
        case 0x468310u: goto label_468310;
        case 0x468314u: goto label_468314;
        case 0x468318u: goto label_468318;
        case 0x46831cu: goto label_46831c;
        case 0x468320u: goto label_468320;
        case 0x468324u: goto label_468324;
        case 0x468328u: goto label_468328;
        case 0x46832cu: goto label_46832c;
        case 0x468330u: goto label_468330;
        case 0x468334u: goto label_468334;
        case 0x468338u: goto label_468338;
        case 0x46833cu: goto label_46833c;
        case 0x468340u: goto label_468340;
        case 0x468344u: goto label_468344;
        case 0x468348u: goto label_468348;
        case 0x46834cu: goto label_46834c;
        case 0x468350u: goto label_468350;
        case 0x468354u: goto label_468354;
        case 0x468358u: goto label_468358;
        case 0x46835cu: goto label_46835c;
        case 0x468360u: goto label_468360;
        case 0x468364u: goto label_468364;
        case 0x468368u: goto label_468368;
        case 0x46836cu: goto label_46836c;
        case 0x468370u: goto label_468370;
        case 0x468374u: goto label_468374;
        case 0x468378u: goto label_468378;
        case 0x46837cu: goto label_46837c;
        case 0x468380u: goto label_468380;
        case 0x468384u: goto label_468384;
        case 0x468388u: goto label_468388;
        case 0x46838cu: goto label_46838c;
        case 0x468390u: goto label_468390;
        case 0x468394u: goto label_468394;
        case 0x468398u: goto label_468398;
        case 0x46839cu: goto label_46839c;
        case 0x4683a0u: goto label_4683a0;
        case 0x4683a4u: goto label_4683a4;
        case 0x4683a8u: goto label_4683a8;
        case 0x4683acu: goto label_4683ac;
        case 0x4683b0u: goto label_4683b0;
        case 0x4683b4u: goto label_4683b4;
        case 0x4683b8u: goto label_4683b8;
        case 0x4683bcu: goto label_4683bc;
        case 0x4683c0u: goto label_4683c0;
        case 0x4683c4u: goto label_4683c4;
        case 0x4683c8u: goto label_4683c8;
        case 0x4683ccu: goto label_4683cc;
        case 0x4683d0u: goto label_4683d0;
        case 0x4683d4u: goto label_4683d4;
        case 0x4683d8u: goto label_4683d8;
        case 0x4683dcu: goto label_4683dc;
        case 0x4683e0u: goto label_4683e0;
        case 0x4683e4u: goto label_4683e4;
        case 0x4683e8u: goto label_4683e8;
        case 0x4683ecu: goto label_4683ec;
        case 0x4683f0u: goto label_4683f0;
        case 0x4683f4u: goto label_4683f4;
        case 0x4683f8u: goto label_4683f8;
        case 0x4683fcu: goto label_4683fc;
        case 0x468400u: goto label_468400;
        case 0x468404u: goto label_468404;
        case 0x468408u: goto label_468408;
        case 0x46840cu: goto label_46840c;
        case 0x468410u: goto label_468410;
        case 0x468414u: goto label_468414;
        case 0x468418u: goto label_468418;
        case 0x46841cu: goto label_46841c;
        case 0x468420u: goto label_468420;
        case 0x468424u: goto label_468424;
        case 0x468428u: goto label_468428;
        case 0x46842cu: goto label_46842c;
        case 0x468430u: goto label_468430;
        case 0x468434u: goto label_468434;
        case 0x468438u: goto label_468438;
        case 0x46843cu: goto label_46843c;
        case 0x468440u: goto label_468440;
        case 0x468444u: goto label_468444;
        case 0x468448u: goto label_468448;
        case 0x46844cu: goto label_46844c;
        case 0x468450u: goto label_468450;
        case 0x468454u: goto label_468454;
        case 0x468458u: goto label_468458;
        case 0x46845cu: goto label_46845c;
        case 0x468460u: goto label_468460;
        case 0x468464u: goto label_468464;
        case 0x468468u: goto label_468468;
        case 0x46846cu: goto label_46846c;
        case 0x468470u: goto label_468470;
        case 0x468474u: goto label_468474;
        case 0x468478u: goto label_468478;
        case 0x46847cu: goto label_46847c;
        case 0x468480u: goto label_468480;
        case 0x468484u: goto label_468484;
        case 0x468488u: goto label_468488;
        case 0x46848cu: goto label_46848c;
        case 0x468490u: goto label_468490;
        case 0x468494u: goto label_468494;
        case 0x468498u: goto label_468498;
        case 0x46849cu: goto label_46849c;
        case 0x4684a0u: goto label_4684a0;
        case 0x4684a4u: goto label_4684a4;
        case 0x4684a8u: goto label_4684a8;
        case 0x4684acu: goto label_4684ac;
        default: break;
    }

    ctx->pc = 0x467e20u;

label_467e20:
    // 0x467e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x467e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_467e24:
    // 0x467e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_467e28:
    // 0x467e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_467e2c:
    // 0x467e2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467e30:
    // 0x467e30: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x467e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_467e34:
    // 0x467e34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_467e38:
    if (ctx->pc == 0x467E38u) {
        ctx->pc = 0x467E3Cu;
        goto label_467e3c;
    }
    ctx->pc = 0x467E34u;
    {
        const bool branch_taken_0x467e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467e34) {
            ctx->pc = 0x467E64u;
            goto label_467e64;
        }
    }
    ctx->pc = 0x467E3Cu;
label_467e3c:
    // 0x467e3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467e40:
    // 0x467e40: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x467e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_467e44:
    // 0x467e44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_467e48:
    if (ctx->pc == 0x467E48u) {
        ctx->pc = 0x467E4Cu;
        goto label_467e4c;
    }
    ctx->pc = 0x467E44u;
    {
        const bool branch_taken_0x467e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467e44) {
            ctx->pc = 0x467E64u;
            goto label_467e64;
        }
    }
    ctx->pc = 0x467E4Cu;
label_467e4c:
    // 0x467e4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467e50:
    // 0x467e50: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x467e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_467e54:
    // 0x467e54: 0xc119c5c  jal         func_467170
label_467e58:
    if (ctx->pc == 0x467E58u) {
        ctx->pc = 0x467E5Cu;
        goto label_467e5c;
    }
    ctx->pc = 0x467E54u;
    SET_GPR_U32(ctx, 31, 0x467E5Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x467E54u, 0x467E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467E5Cu;
label_467e5c:
    // 0x467e5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467e60:
    // 0x467e60: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x467e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_467e64:
    // 0x467e64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467e68:
    // 0x467e68: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x467e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_467e6c:
    // 0x467e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467e70:
    // 0x467e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_467e74:
    // 0x467e74: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x467e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_467e78:
    // 0x467e78: 0x3e00008  jr          $ra
label_467e7c:
    if (ctx->pc == 0x467E7Cu) {
        ctx->pc = 0x467E80u;
        goto label_467e80;
    }
    ctx->pc = 0x467E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467E80u;
label_467e80:
    // 0x467e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x467e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_467e84:
    // 0x467e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_467e88:
    // 0x467e88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_467e8c:
    // 0x467e8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x467e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_467e90:
    // 0x467e90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467e94:
    // 0x467e94: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_467e98:
    if (ctx->pc == 0x467E98u) {
        ctx->pc = 0x467E9Cu;
        goto label_467e9c;
    }
    ctx->pc = 0x467E94u;
    {
        const bool branch_taken_0x467e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467e94) {
            ctx->pc = 0x467EF8u;
            goto label_467ef8;
        }
    }
    ctx->pc = 0x467E9Cu;
label_467e9c:
    // 0x467e9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x467e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_467ea0:
    // 0x467ea0: 0x24636be0  addiu       $v1, $v1, 0x6BE0
    ctx->pc = 0x467ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27616));
label_467ea4:
    // 0x467ea4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467ea8:
    // 0x467ea8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x467ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_467eac:
    // 0x467eac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x467eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_467eb0:
    // 0x467eb0: 0x24636bf8  addiu       $v1, $v1, 0x6BF8
    ctx->pc = 0x467eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27640));
label_467eb4:
    // 0x467eb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467eb8:
    // 0x467eb8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x467eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_467ebc:
    // 0x467ebc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x467ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467ec0:
    // 0x467ec0: 0xc119f88  jal         func_467E20
label_467ec4:
    if (ctx->pc == 0x467EC4u) {
        ctx->pc = 0x467EC8u;
        goto label_467ec8;
    }
    ctx->pc = 0x467EC0u;
    SET_GPR_U32(ctx, 31, 0x467EC8u);
    ctx->pc = 0x467E20u;
    goto label_467e20;
    ctx->pc = 0x467EC8u;
label_467ec8:
    // 0x467ec8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x467ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467ecc:
    // 0x467ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x467eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467ed0:
    // 0x467ed0: 0xc11a2b0  jal         func_468AC0
label_467ed4:
    if (ctx->pc == 0x467ED4u) {
        ctx->pc = 0x467ED8u;
        goto label_467ed8;
    }
    ctx->pc = 0x467ED0u;
    SET_GPR_U32(ctx, 31, 0x467ED8u);
    ctx->pc = 0x468AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x468AC0u, 0x467ED0u, 0x467ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467ED8u;
label_467ed8:
    // 0x467ed8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x467ed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_467edc:
    // 0x467edc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x467edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_467ee0:
    // 0x467ee0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x467ee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_467ee4:
    // 0x467ee4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_467ee8:
    if (ctx->pc == 0x467EE8u) {
        ctx->pc = 0x467EECu;
        goto label_467eec;
    }
    ctx->pc = 0x467EE4u;
    {
        const bool branch_taken_0x467ee4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x467ee4) {
            ctx->pc = 0x467EF8u;
            goto label_467ef8;
        }
    }
    ctx->pc = 0x467EECu;
label_467eec:
    // 0x467eec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x467eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467ef0:
    // 0x467ef0: 0xc0ba070  jal         func_2E81C0
label_467ef4:
    if (ctx->pc == 0x467EF4u) {
        ctx->pc = 0x467EF8u;
        goto label_467ef8;
    }
    ctx->pc = 0x467EF0u;
    SET_GPR_U32(ctx, 31, 0x467EF8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x467EF0u, 0x467EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467EF8u;
label_467ef8:
    // 0x467ef8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_467efc:
    // 0x467efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_467f00:
    // 0x467f00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x467f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_467f04:
    // 0x467f04: 0x3e00008  jr          $ra
label_467f08:
    if (ctx->pc == 0x467F08u) {
        ctx->pc = 0x467F0Cu;
        goto label_467f0c;
    }
    ctx->pc = 0x467F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467F0Cu;
label_467f0c:
    // 0x467f0c: 0x0  nop
    ctx->pc = 0x467f0cu;
    // NOP
label_467f10:
    // 0x467f10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x467f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_467f14:
    // 0x467f14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x467f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_467f18:
    // 0x467f18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x467f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_467f1c:
    // 0x467f1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x467f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_467f20:
    // 0x467f20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x467f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_467f24:
    // 0x467f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x467f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_467f28:
    // 0x467f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467f2c:
    // 0x467f2c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x467f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_467f30:
    // 0x467f30: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x467f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_467f34:
    // 0x467f34: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x467f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_467f38:
    // 0x467f38: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x467f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
label_467f3c:
    // 0x467f3c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x467f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_467f40:
    // 0x467f40: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x467f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_467f44:
    // 0x467f44: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x467f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_467f48:
    // 0x467f48: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467f4c:
    // 0x467f4c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x467f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_467f50:
    // 0x467f50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_467f54:
    if (ctx->pc == 0x467F54u) {
        ctx->pc = 0x467F58u;
        goto label_467f58;
    }
    ctx->pc = 0x467F50u;
    {
        const bool branch_taken_0x467f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467f50) {
            ctx->pc = 0x467F68u;
            goto label_467f68;
        }
    }
    ctx->pc = 0x467F58u;
label_467f58:
    // 0x467f58: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x467f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467f5c:
    // 0x467f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x467f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_467f60:
    // 0x467f60: 0xc119f5c  jal         func_467D70
label_467f64:
    if (ctx->pc == 0x467F64u) {
        ctx->pc = 0x467F68u;
        goto label_467f68;
    }
    ctx->pc = 0x467F60u;
    SET_GPR_U32(ctx, 31, 0x467F68u);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x467F60u, 0x467F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467F68u;
label_467f68:
    // 0x467f68: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x467f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467f6c:
    // 0x467f6c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467f70:
    // 0x467f70: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x467f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_467f74:
    // 0x467f74: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x467f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_467f78:
    // 0x467f78: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x467f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_467f7c:
    // 0x467f7c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467f80:
    // 0x467f80: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x467f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_467f84:
    // 0x467f84: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x467f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_467f88:
    // 0x467f88: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467f8c:
    // 0x467f8c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x467f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_467f90:
    // 0x467f90: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x467f90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_467f94:
    // 0x467f94: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_467f98:
    if (ctx->pc == 0x467F98u) {
        ctx->pc = 0x467F9Cu;
        goto label_467f9c;
    }
    ctx->pc = 0x467F94u;
    {
        const bool branch_taken_0x467f94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x467f94) {
            ctx->pc = 0x467FF8u;
            goto label_467ff8;
        }
    }
    ctx->pc = 0x467F9Cu;
label_467f9c:
    // 0x467f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x467f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_467fa0:
    // 0x467fa0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x467fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_467fa4:
    // 0x467fa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x467fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_467fa8:
    // 0x467fa8: 0xc0bb778  jal         func_2EDDE0
label_467fac:
    if (ctx->pc == 0x467FACu) {
        ctx->pc = 0x467FB0u;
        goto label_467fb0;
    }
    ctx->pc = 0x467FA8u;
    SET_GPR_U32(ctx, 31, 0x467FB0u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x467FA8u, 0x467FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467FB0u;
label_467fb0:
    // 0x467fb0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x467fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467fb4:
    // 0x467fb4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x467fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_467fb8:
    // 0x467fb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x467fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_467fbc:
    // 0x467fbc: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x467fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_467fc0:
    // 0x467fc0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467fc4:
    // 0x467fc4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x467fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_467fc8:
    // 0x467fc8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467fcc:
    // 0x467fcc: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x467fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_467fd0:
    // 0x467fd0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x467fd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_467fd4:
    // 0x467fd4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_467fd8:
    if (ctx->pc == 0x467FD8u) {
        ctx->pc = 0x467FDCu;
        goto label_467fdc;
    }
    ctx->pc = 0x467FD4u;
    {
        const bool branch_taken_0x467fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x467fd4) {
            ctx->pc = 0x467FECu;
            goto label_467fec;
        }
    }
    ctx->pc = 0x467FDCu;
label_467fdc:
    // 0x467fdc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467fe0:
    // 0x467fe0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x467fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_467fe4:
    // 0x467fe4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467fe8:
    // 0x467fe8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x467fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_467fec:
    // 0x467fec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x467fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_467ff0:
    // 0x467ff0: 0x10000075  b           . + 4 + (0x75 << 2)
label_467ff4:
    if (ctx->pc == 0x467FF4u) {
        ctx->pc = 0x467FF8u;
        goto label_467ff8;
    }
    ctx->pc = 0x467FF0u;
    {
        const bool branch_taken_0x467ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467ff0) {
            ctx->pc = 0x4681C8u;
            goto label_4681c8;
        }
    }
    ctx->pc = 0x467FF8u;
label_467ff8:
    // 0x467ff8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x467ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_467ffc:
    // 0x467ffc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x467ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_468000:
    // 0x468000: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_468004:
    if (ctx->pc == 0x468004u) {
        ctx->pc = 0x468008u;
        goto label_468008;
    }
    ctx->pc = 0x468000u;
    {
        const bool branch_taken_0x468000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468000) {
            ctx->pc = 0x468124u;
            goto label_468124;
        }
    }
    ctx->pc = 0x468008u;
label_468008:
    // 0x468008: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x468008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_46800c:
    // 0x46800c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x46800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_468010:
    // 0x468010: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x468010u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_468014:
    // 0x468014: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_468018:
    if (ctx->pc == 0x468018u) {
        ctx->pc = 0x46801Cu;
        goto label_46801c;
    }
    ctx->pc = 0x468014u;
    {
        const bool branch_taken_0x468014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x468014) {
            ctx->pc = 0x46805Cu;
            goto label_46805c;
        }
    }
    ctx->pc = 0x46801Cu;
label_46801c:
    // 0x46801c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468020:
    // 0x468020: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x468020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_468024:
    // 0x468024: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x468024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_468028:
    // 0x468028: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x468028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_46802c:
    // 0x46802c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x46802cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_468030:
    // 0x468030: 0x6443000f  daddiu      $v1, $v0, 0xF
    ctx->pc = 0x468030u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)15);
label_468034:
    // 0x468034: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x468034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_468038:
    // 0x468038: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x468038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_46803c:
    // 0x46803c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x46803cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_468040:
    // 0x468040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x468040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_468044:
    // 0x468044: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x468044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_468048:
    // 0x468048: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x468048u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_46804c:
    // 0x46804c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468050:
    // 0x468050: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x468050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_468054:
    // 0x468054: 0x1000000f  b           . + 4 + (0xF << 2)
label_468058:
    if (ctx->pc == 0x468058u) {
        ctx->pc = 0x46805Cu;
        goto label_46805c;
    }
    ctx->pc = 0x468054u;
    {
        const bool branch_taken_0x468054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468054) {
            ctx->pc = 0x468094u;
            goto label_468094;
        }
    }
    ctx->pc = 0x46805Cu;
label_46805c:
    // 0x46805c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468060:
    // 0x468060: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x468060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_468064:
    // 0x468064: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x468064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_468068:
    // 0x468068: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x468068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_46806c:
    // 0x46806c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x46806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_468070:
    // 0x468070: 0x6443000f  daddiu      $v1, $v0, 0xF
    ctx->pc = 0x468070u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)15);
label_468074:
    // 0x468074: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x468074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_468078:
    // 0x468078: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x468078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_46807c:
    // 0x46807c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x46807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_468080:
    // 0x468080: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x468080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_468084:
    // 0x468084: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x468084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_468088:
    // 0x468088: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x468088u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_46808c:
    // 0x46808c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468090:
    // 0x468090: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x468090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_468094:
    // 0x468094: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x468094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468098:
    // 0x468098: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x468098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_46809c:
    // 0x46809c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x46809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4680a0:
    // 0x4680a0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x4680a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4680a4:
    // 0x4680a4: 0xc119d08  jal         func_467420
label_4680a8:
    if (ctx->pc == 0x4680A8u) {
        ctx->pc = 0x4680ACu;
        goto label_4680ac;
    }
    ctx->pc = 0x4680A4u;
    SET_GPR_U32(ctx, 31, 0x4680ACu);
    ctx->pc = 0x467420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467420u, 0x4680A4u, 0x4680ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4680ACu;
label_4680ac:
    // 0x4680ac: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4680acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4680b0:
    // 0x4680b0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x4680b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_4680b4:
    // 0x4680b4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4680b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4680b8:
    // 0x4680b8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4680b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4680bc:
    // 0x4680bc: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4680bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4680c0:
    // 0x4680c0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x4680c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4680c4:
    // 0x4680c4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x4680c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4680c8:
    // 0x4680c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4680c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4680cc:
    // 0x4680cc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x4680ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4680d0:
    // 0x4680d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4680d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4680d4:
    // 0x4680d4: 0xc0bb778  jal         func_2EDDE0
label_4680d8:
    if (ctx->pc == 0x4680D8u) {
        ctx->pc = 0x4680DCu;
        goto label_4680dc;
    }
    ctx->pc = 0x4680D4u;
    SET_GPR_U32(ctx, 31, 0x4680DCu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4680D4u, 0x4680DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4680DCu;
label_4680dc:
    // 0x4680dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x4680dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4680e0:
    // 0x4680e0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4680e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_4680e4:
    // 0x4680e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4680e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4680e8:
    // 0x4680e8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x4680e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_4680ec:
    // 0x4680ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4680ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4680f0:
    // 0x4680f0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4680f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4680f4:
    // 0x4680f4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4680f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4680f8:
    // 0x4680f8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x4680f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4680fc:
    // 0x4680fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4680fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_468100:
    // 0x468100: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_468104:
    if (ctx->pc == 0x468104u) {
        ctx->pc = 0x468108u;
        goto label_468108;
    }
    ctx->pc = 0x468100u;
    {
        const bool branch_taken_0x468100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x468100) {
            ctx->pc = 0x468118u;
            goto label_468118;
        }
    }
    ctx->pc = 0x468108u;
label_468108:
    // 0x468108: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x468108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_46810c:
    // 0x46810c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x46810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_468110:
    // 0x468110: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x468110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468114:
    // 0x468114: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x468114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_468118:
    // 0x468118: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x468118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_46811c:
    // 0x46811c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_468120:
    if (ctx->pc == 0x468120u) {
        ctx->pc = 0x468124u;
        goto label_468124;
    }
    ctx->pc = 0x46811Cu;
    {
        const bool branch_taken_0x46811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46811c) {
            ctx->pc = 0x4681C8u;
            goto label_4681c8;
        }
    }
    ctx->pc = 0x468124u;
label_468124:
    // 0x468124: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x468124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468128:
    // 0x468128: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x468128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_46812c:
    // 0x46812c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46812cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468130:
    // 0x468130: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x468130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_468134:
    // 0x468134: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x468134u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_468138:
    // 0x468138: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_46813c:
    if (ctx->pc == 0x46813Cu) {
        ctx->pc = 0x468140u;
        goto label_468140;
    }
    ctx->pc = 0x468138u;
    {
        const bool branch_taken_0x468138 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x468138) {
            ctx->pc = 0x46814Cu;
            goto label_46814c;
        }
    }
    ctx->pc = 0x468140u;
label_468140:
    // 0x468140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x468140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468144:
    // 0x468144: 0x10000020  b           . + 4 + (0x20 << 2)
label_468148:
    if (ctx->pc == 0x468148u) {
        ctx->pc = 0x46814Cu;
        goto label_46814c;
    }
    ctx->pc = 0x468144u;
    {
        const bool branch_taken_0x468144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468144) {
            ctx->pc = 0x4681C8u;
            goto label_4681c8;
        }
    }
    ctx->pc = 0x46814Cu;
label_46814c:
    // 0x46814c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x46814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_468150:
    // 0x468150: 0x282001b  divu        $zero, $s4, $v0
    ctx->pc = 0x468150u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_468154:
    // 0x468154: 0x9012  mflo        $s2
    ctx->pc = 0x468154u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_468158:
    // 0x468158: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
label_46815c:
    if (ctx->pc == 0x46815Cu) {
        ctx->pc = 0x468160u;
        goto label_468160;
    }
    ctx->pc = 0x468158u;
    {
        const bool branch_taken_0x468158 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x468158) {
            ctx->pc = 0x46816Cu;
            goto label_46816c;
        }
    }
    ctx->pc = 0x468160u;
label_468160:
    // 0x468160: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x468160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468164:
    // 0x468164: 0x10000018  b           . + 4 + (0x18 << 2)
label_468168:
    if (ctx->pc == 0x468168u) {
        ctx->pc = 0x46816Cu;
        goto label_46816c;
    }
    ctx->pc = 0x468164u;
    {
        const bool branch_taken_0x468164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468164) {
            ctx->pc = 0x4681C8u;
            goto label_4681c8;
        }
    }
    ctx->pc = 0x46816Cu;
label_46816c:
    // 0x46816c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x46816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_468170:
    // 0x468170: 0x529818  mult        $s3, $v0, $s2
    ctx->pc = 0x468170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_468174:
    // 0x468174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x468174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_468178:
    // 0x468178: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x468178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_46817c:
    // 0x46817c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x46817cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_468180:
    // 0x468180: 0xc0bb778  jal         func_2EDDE0
label_468184:
    if (ctx->pc == 0x468184u) {
        ctx->pc = 0x468188u;
        goto label_468188;
    }
    ctx->pc = 0x468180u;
    SET_GPR_U32(ctx, 31, 0x468188u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x468180u, 0x468188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468188u;
label_468188:
    // 0x468188: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x468188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_46818c:
    // 0x46818c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x46818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_468190:
    // 0x468190: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x468190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_468194:
    // 0x468194: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x468194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_468198:
    // 0x468198: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x468198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_46819c:
    // 0x46819c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x46819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4681a0:
    // 0x4681a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4681a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4681a4:
    // 0x4681a4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x4681a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4681a8:
    // 0x4681a8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4681a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4681ac:
    // 0x4681ac: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_4681b0:
    if (ctx->pc == 0x4681B0u) {
        ctx->pc = 0x4681B4u;
        goto label_4681b4;
    }
    ctx->pc = 0x4681ACu;
    {
        const bool branch_taken_0x4681ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4681ac) {
            ctx->pc = 0x4681C4u;
            goto label_4681c4;
        }
    }
    ctx->pc = 0x4681B4u;
label_4681b4:
    // 0x4681b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4681b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4681b8:
    // 0x4681b8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4681b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4681bc:
    // 0x4681bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4681bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4681c0:
    // 0x4681c0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x4681c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_4681c4:
    // 0x4681c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4681c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4681c8:
    // 0x4681c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4681c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4681cc:
    // 0x4681cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4681ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4681d0:
    // 0x4681d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4681d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4681d4:
    // 0x4681d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4681d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4681d8:
    // 0x4681d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4681d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4681dc:
    // 0x4681dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4681dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4681e0:
    // 0x4681e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x4681e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4681e4:
    // 0x4681e4: 0x3e00008  jr          $ra
label_4681e8:
    if (ctx->pc == 0x4681E8u) {
        ctx->pc = 0x4681ECu;
        goto label_4681ec;
    }
    ctx->pc = 0x4681E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4681E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4681ECu;
label_4681ec:
    // 0x4681ec: 0x0  nop
    ctx->pc = 0x4681ecu;
    // NOP
label_4681f0:
    // 0x4681f0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x4681f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_4681f4:
    // 0x4681f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4681f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4681f8:
    // 0x4681f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4681f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4681fc:
    // 0x4681fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4681fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_468200:
    // 0x468200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x468200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_468204:
    // 0x468204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x468204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_468208:
    // 0x468208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x468208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46820c:
    // 0x46820c: 0xafa402c0  sw          $a0, 0x2C0($sp)
    ctx->pc = 0x46820cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 4));
label_468210:
    // 0x468210: 0xafa502d0  sw          $a1, 0x2D0($sp)
    ctx->pc = 0x468210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 5));
label_468214:
    // 0x468214: 0xafa602e0  sw          $a2, 0x2E0($sp)
    ctx->pc = 0x468214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 6));
label_468218:
    // 0x468218: 0xafa702f0  sw          $a3, 0x2F0($sp)
    ctx->pc = 0x468218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 7));
label_46821c:
    // 0x46821c: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x46821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_468220:
    // 0x468220: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x468220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_468224:
    // 0x468224: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x468224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_468228:
    // 0x468228: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x468228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46822c:
    // 0x46822c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_468230:
    if (ctx->pc == 0x468230u) {
        ctx->pc = 0x468234u;
        goto label_468234;
    }
    ctx->pc = 0x46822Cu;
    {
        const bool branch_taken_0x46822c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46822c) {
            ctx->pc = 0x4682DCu;
            goto label_4682dc;
        }
    }
    ctx->pc = 0x468234u;
label_468234:
    // 0x468234: 0x8f82b2d0  lw          $v0, -0x4D30($gp)
    ctx->pc = 0x468234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947536)));
label_468238:
    // 0x468238: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46823c:
    if (ctx->pc == 0x46823Cu) {
        ctx->pc = 0x468240u;
        goto label_468240;
    }
    ctx->pc = 0x468238u;
    {
        const bool branch_taken_0x468238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468238) {
            ctx->pc = 0x4682DCu;
            goto label_4682dc;
        }
    }
    ctx->pc = 0x468240u;
label_468240:
    // 0x468240: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x468240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_468244:
    // 0x468244: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468248:
    // 0x468248: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x468248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_46824c:
    // 0x46824c: 0xc115ee8  jal         func_457BA0
label_468250:
    if (ctx->pc == 0x468250u) {
        ctx->pc = 0x468254u;
        goto label_468254;
    }
    ctx->pc = 0x46824Cu;
    SET_GPR_U32(ctx, 31, 0x468254u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46824Cu, 0x468254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468254u;
label_468254:
    // 0x468254: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_468258:
    if (ctx->pc == 0x468258u) {
        ctx->pc = 0x46825Cu;
        goto label_46825c;
    }
    ctx->pc = 0x468254u;
    {
        const bool branch_taken_0x468254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468254) {
            ctx->pc = 0x4682DCu;
            goto label_4682dc;
        }
    }
    ctx->pc = 0x46825Cu;
label_46825c:
    // 0x46825c: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x46825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_468260:
    // 0x468260: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_468264:
    if (ctx->pc == 0x468264u) {
        ctx->pc = 0x468268u;
        goto label_468268;
    }
    ctx->pc = 0x468260u;
    {
        const bool branch_taken_0x468260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468260) {
            ctx->pc = 0x4682DCu;
            goto label_4682dc;
        }
    }
    ctx->pc = 0x468268u;
label_468268:
    // 0x468268: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x468268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_46826c:
    // 0x46826c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468270:
    // 0x468270: 0x8fa602b4  lw          $a2, 0x2B4($sp)
    ctx->pc = 0x468270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_468274:
    // 0x468274: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x468274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_468278:
    // 0x468278: 0x24e7f780  addiu       $a3, $a3, -0x880
    ctx->pc = 0x468278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965120));
label_46827c:
    // 0x46827c: 0x240800a5  addiu       $t0, $zero, 0xA5
    ctx->pc = 0x46827cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
label_468280:
    // 0x468280: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x468280u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_468284:
    // 0x468284: 0x2529f7a0  addiu       $t1, $t1, -0x860
    ctx->pc = 0x468284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965152));
label_468288:
    // 0x468288: 0xc113940  jal         func_44E500
label_46828c:
    if (ctx->pc == 0x46828Cu) {
        ctx->pc = 0x468290u;
        goto label_468290;
    }
    ctx->pc = 0x468288u;
    SET_GPR_U32(ctx, 31, 0x468290u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x468288u, 0x468290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468290u;
label_468290:
    // 0x468290: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x468290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_468294:
    // 0x468294: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x468294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_468298:
    // 0x468298: 0x24a5f7c0  addiu       $a1, $a1, -0x840
    ctx->pc = 0x468298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965184));
label_46829c:
    // 0x46829c: 0xc115c24  jal         func_457090
label_4682a0:
    if (ctx->pc == 0x4682A0u) {
        ctx->pc = 0x4682A4u;
        goto label_4682a4;
    }
    ctx->pc = 0x46829Cu;
    SET_GPR_U32(ctx, 31, 0x4682A4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46829Cu, 0x4682A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4682A4u;
label_4682a4:
    // 0x4682a4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4682a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4682a8:
    // 0x4682a8: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x4682a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_4682ac:
    // 0x4682ac: 0x40f809  jalr        $v0
label_4682b0:
    if (ctx->pc == 0x4682B0u) {
        ctx->pc = 0x4682B4u;
        goto label_4682b4;
    }
    ctx->pc = 0x4682ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4682B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4682ACu, 0x4682B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4682B4u;
label_4682b4:
    // 0x4682b4: 0xaf82b2d0  sw          $v0, -0x4D30($gp)
    ctx->pc = 0x4682b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947536), GPR_U32(ctx, 2));
label_4682b8:
    // 0x4682b8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4682b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4682bc:
    // 0x4682bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4682c0:
    if (ctx->pc == 0x4682C0u) {
        ctx->pc = 0x4682C4u;
        goto label_4682c4;
    }
    ctx->pc = 0x4682BCu;
    {
        const bool branch_taken_0x4682bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4682bc) {
            ctx->pc = 0x4682CCu;
            goto label_4682cc;
        }
    }
    ctx->pc = 0x4682C4u;
label_4682c4:
    // 0x4682c4: 0xd  break       0
    ctx->pc = 0x4682c4u;
    runtime->handleBreak(rdram, ctx);
label_4682c8:
    // 0x4682c8: 0x0  nop
    ctx->pc = 0x4682c8u;
    // NOP
label_4682cc:
    // 0x4682cc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4682ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4682d0:
    // 0x4682d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4682d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4682d4:
    // 0x4682d4: 0xc11392c  jal         func_44E4B0
label_4682d8:
    if (ctx->pc == 0x4682D8u) {
        ctx->pc = 0x4682DCu;
        goto label_4682dc;
    }
    ctx->pc = 0x4682D4u;
    SET_GPR_U32(ctx, 31, 0x4682DCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4682D4u, 0x4682DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4682DCu;
label_4682dc:
    // 0x4682dc: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x4682dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_4682e0:
    // 0x4682e0: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x4682e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_4682e4:
    // 0x4682e4: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x4682e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_4682e8:
    // 0x4682e8: 0x16000032  bnez        $s0, . + 4 + (0x32 << 2)
label_4682ec:
    if (ctx->pc == 0x4682ECu) {
        ctx->pc = 0x4682F0u;
        goto label_4682f0;
    }
    ctx->pc = 0x4682E8u;
    {
        const bool branch_taken_0x4682e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4682e8) {
            ctx->pc = 0x4683B4u;
            goto label_4683b4;
        }
    }
    ctx->pc = 0x4682F0u;
label_4682f0:
    // 0x4682f0: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x4682f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4682f4:
    // 0x4682f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4682f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4682f8:
    // 0x4682f8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4682fc:
    if (ctx->pc == 0x4682FCu) {
        ctx->pc = 0x468300u;
        goto label_468300;
    }
    ctx->pc = 0x4682F8u;
    {
        const bool branch_taken_0x4682f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4682f8) {
            ctx->pc = 0x4683A8u;
            goto label_4683a8;
        }
    }
    ctx->pc = 0x468300u;
label_468300:
    // 0x468300: 0x8f82b2d4  lw          $v0, -0x4D2C($gp)
    ctx->pc = 0x468300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947540)));
label_468304:
    // 0x468304: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_468308:
    if (ctx->pc == 0x468308u) {
        ctx->pc = 0x46830Cu;
        goto label_46830c;
    }
    ctx->pc = 0x468304u;
    {
        const bool branch_taken_0x468304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468304) {
            ctx->pc = 0x4683A8u;
            goto label_4683a8;
        }
    }
    ctx->pc = 0x46830Cu;
label_46830c:
    // 0x46830c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_468310:
    // 0x468310: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468314:
    // 0x468314: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x468314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_468318:
    // 0x468318: 0xc115ee8  jal         func_457BA0
label_46831c:
    if (ctx->pc == 0x46831Cu) {
        ctx->pc = 0x468320u;
        goto label_468320;
    }
    ctx->pc = 0x468318u;
    SET_GPR_U32(ctx, 31, 0x468320u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x468318u, 0x468320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468320u;
label_468320:
    // 0x468320: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_468324:
    if (ctx->pc == 0x468324u) {
        ctx->pc = 0x468328u;
        goto label_468328;
    }
    ctx->pc = 0x468320u;
    {
        const bool branch_taken_0x468320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468320) {
            ctx->pc = 0x4683A8u;
            goto label_4683a8;
        }
    }
    ctx->pc = 0x468328u;
label_468328:
    // 0x468328: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x468328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_46832c:
    // 0x46832c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_468330:
    if (ctx->pc == 0x468330u) {
        ctx->pc = 0x468334u;
        goto label_468334;
    }
    ctx->pc = 0x46832Cu;
    {
        const bool branch_taken_0x46832c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46832c) {
            ctx->pc = 0x4683A8u;
            goto label_4683a8;
        }
    }
    ctx->pc = 0x468334u;
label_468334:
    // 0x468334: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x468334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_468338:
    // 0x468338: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46833c:
    // 0x46833c: 0x8fa602a4  lw          $a2, 0x2A4($sp)
    ctx->pc = 0x46833cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_468340:
    // 0x468340: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x468340u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_468344:
    // 0x468344: 0x24e7f780  addiu       $a3, $a3, -0x880
    ctx->pc = 0x468344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965120));
label_468348:
    // 0x468348: 0x240800aa  addiu       $t0, $zero, 0xAA
    ctx->pc = 0x468348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_46834c:
    // 0x46834c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x46834cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_468350:
    // 0x468350: 0x2529f7f0  addiu       $t1, $t1, -0x810
    ctx->pc = 0x468350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965232));
label_468354:
    // 0x468354: 0xc113940  jal         func_44E500
label_468358:
    if (ctx->pc == 0x468358u) {
        ctx->pc = 0x46835Cu;
        goto label_46835c;
    }
    ctx->pc = 0x468354u;
    SET_GPR_U32(ctx, 31, 0x46835Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x468354u, 0x46835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46835Cu;
label_46835c:
    // 0x46835c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x46835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_468360:
    // 0x468360: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x468360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_468364:
    // 0x468364: 0x24a5f800  addiu       $a1, $a1, -0x800
    ctx->pc = 0x468364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965248));
label_468368:
    // 0x468368: 0xc115c24  jal         func_457090
label_46836c:
    if (ctx->pc == 0x46836Cu) {
        ctx->pc = 0x468370u;
        goto label_468370;
    }
    ctx->pc = 0x468368u;
    SET_GPR_U32(ctx, 31, 0x468370u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x468368u, 0x468370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468370u;
label_468370:
    // 0x468370: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x468370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_468374:
    // 0x468374: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x468374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_468378:
    // 0x468378: 0x40f809  jalr        $v0
label_46837c:
    if (ctx->pc == 0x46837Cu) {
        ctx->pc = 0x468380u;
        goto label_468380;
    }
    ctx->pc = 0x468378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x468380u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468378u, 0x468380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468380u;
label_468380:
    // 0x468380: 0xaf82b2d4  sw          $v0, -0x4D2C($gp)
    ctx->pc = 0x468380u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947540), GPR_U32(ctx, 2));
label_468384:
    // 0x468384: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x468384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_468388:
    // 0x468388: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46838c:
    if (ctx->pc == 0x46838Cu) {
        ctx->pc = 0x468390u;
        goto label_468390;
    }
    ctx->pc = 0x468388u;
    {
        const bool branch_taken_0x468388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468388) {
            ctx->pc = 0x468398u;
            goto label_468398;
        }
    }
    ctx->pc = 0x468390u;
label_468390:
    // 0x468390: 0xd  break       0
    ctx->pc = 0x468390u;
    runtime->handleBreak(rdram, ctx);
label_468394:
    // 0x468394: 0x0  nop
    ctx->pc = 0x468394u;
    // NOP
label_468398:
    // 0x468398: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x468398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_46839c:
    // 0x46839c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46839cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4683a0:
    // 0x4683a0: 0xc11392c  jal         func_44E4B0
label_4683a4:
    if (ctx->pc == 0x4683A4u) {
        ctx->pc = 0x4683A8u;
        goto label_4683a8;
    }
    ctx->pc = 0x4683A0u;
    SET_GPR_U32(ctx, 31, 0x4683A8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4683A0u, 0x4683A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4683A8u;
label_4683a8:
    // 0x4683a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4683a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4683ac:
    // 0x4683ac: 0x10000037  b           . + 4 + (0x37 << 2)
label_4683b0:
    if (ctx->pc == 0x4683B0u) {
        ctx->pc = 0x4683B4u;
        goto label_4683b4;
    }
    ctx->pc = 0x4683ACu;
    {
        const bool branch_taken_0x4683ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4683ac) {
            ctx->pc = 0x46848Cu;
            goto label_46848c;
        }
    }
    ctx->pc = 0x4683B4u;
label_4683b4:
    // 0x4683b4: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x4683b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4683b8:
    // 0x4683b8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4683b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4683bc:
    // 0x4683bc: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x4683bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4683c0:
    // 0x4683c0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x4683c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4683c4:
    // 0x4683c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_4683c8:
    if (ctx->pc == 0x4683C8u) {
        ctx->pc = 0x4683CCu;
        goto label_4683cc;
    }
    ctx->pc = 0x4683C4u;
    {
        const bool branch_taken_0x4683c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4683c4) {
            ctx->pc = 0x4683D8u;
            goto label_4683d8;
        }
    }
    ctx->pc = 0x4683CCu;
label_4683cc:
    // 0x4683cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4683ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4683d0:
    // 0x4683d0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_4683d4:
    if (ctx->pc == 0x4683D4u) {
        ctx->pc = 0x4683D8u;
        goto label_4683d8;
    }
    ctx->pc = 0x4683D0u;
    {
        const bool branch_taken_0x4683d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4683d0) {
            ctx->pc = 0x46848Cu;
            goto label_46848c;
        }
    }
    ctx->pc = 0x4683D8u;
label_4683d8:
    // 0x4683d8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x4683d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4683dc:
    // 0x4683dc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x4683dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_4683e0:
    // 0x4683e0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x4683e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4683e4:
    // 0x4683e4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x4683e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4683e8:
    // 0x4683e8: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x4683e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4683ec:
    // 0x4683ec: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x4683ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4683f0:
    // 0x4683f0: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x4683f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_4683f4:
    // 0x4683f4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x4683f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4683f8:
    // 0x4683f8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x4683f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4683fc:
    // 0x4683fc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x4683fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_468400:
    // 0x468400: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x468400u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_468404:
    // 0x468404: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_468408:
    if (ctx->pc == 0x468408u) {
        ctx->pc = 0x46840Cu;
        goto label_46840c;
    }
    ctx->pc = 0x468404u;
    {
        const bool branch_taken_0x468404 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x468404) {
            ctx->pc = 0x46843Cu;
            goto label_46843c;
        }
    }
    ctx->pc = 0x46840Cu;
label_46840c:
    // 0x46840c: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x46840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_468410:
    // 0x468410: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x468410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_468414:
    // 0x468414: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x468414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_468418:
    // 0x468418: 0xc0bb778  jal         func_2EDDE0
label_46841c:
    if (ctx->pc == 0x46841Cu) {
        ctx->pc = 0x468420u;
        goto label_468420;
    }
    ctx->pc = 0x468418u;
    SET_GPR_U32(ctx, 31, 0x468420u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x468418u, 0x468420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468420u;
label_468420:
    // 0x468420: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x468420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_468424:
    // 0x468424: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x468424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_468428:
    // 0x468428: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x468428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_46842c:
    // 0x46842c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x46842cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_468430:
    // 0x468430: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x468430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_468434:
    // 0x468434: 0x10000015  b           . + 4 + (0x15 << 2)
label_468438:
    if (ctx->pc == 0x468438u) {
        ctx->pc = 0x46843Cu;
        goto label_46843c;
    }
    ctx->pc = 0x468434u;
    {
        const bool branch_taken_0x468434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468434) {
            ctx->pc = 0x46848Cu;
            goto label_46848c;
        }
    }
    ctx->pc = 0x46843Cu;
label_46843c:
    // 0x46843c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x46843cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_468440:
    // 0x468440: 0x282001b  divu        $zero, $s4, $v0
    ctx->pc = 0x468440u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 20) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,20); } }
label_468444:
    // 0x468444: 0x8812  mflo        $s1
    ctx->pc = 0x468444u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_468448:
    // 0x468448: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_46844c:
    if (ctx->pc == 0x46844Cu) {
        ctx->pc = 0x468450u;
        goto label_468450;
    }
    ctx->pc = 0x468448u;
    {
        const bool branch_taken_0x468448 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x468448) {
            ctx->pc = 0x46845Cu;
            goto label_46845c;
        }
    }
    ctx->pc = 0x468450u;
label_468450:
    // 0x468450: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x468450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468454:
    // 0x468454: 0x1000000d  b           . + 4 + (0xD << 2)
label_468458:
    if (ctx->pc == 0x468458u) {
        ctx->pc = 0x46845Cu;
        goto label_46845c;
    }
    ctx->pc = 0x468454u;
    {
        const bool branch_taken_0x468454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468454) {
            ctx->pc = 0x46848Cu;
            goto label_46848c;
        }
    }
    ctx->pc = 0x46845Cu;
label_46845c:
    // 0x46845c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x46845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_468460:
    // 0x468460: 0x519018  mult        $s2, $v0, $s1
    ctx->pc = 0x468460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_468464:
    // 0x468464: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x468464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_468468:
    // 0x468468: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x468468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46846c:
    // 0x46846c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46846cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_468470:
    // 0x468470: 0xc0bb778  jal         func_2EDDE0
label_468474:
    if (ctx->pc == 0x468474u) {
        ctx->pc = 0x468478u;
        goto label_468478;
    }
    ctx->pc = 0x468470u;
    SET_GPR_U32(ctx, 31, 0x468478u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x468470u, 0x468478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468478u;
label_468478:
    // 0x468478: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x468478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_46847c:
    // 0x46847c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x46847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_468480:
    // 0x468480: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x468480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_468484:
    // 0x468484: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x468484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_468488:
    // 0x468488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x468488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46848c:
    // 0x46848c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x46848cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_468490:
    // 0x468490: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x468490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_468494:
    // 0x468494: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x468494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_468498:
    // 0x468498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x468498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46849c:
    // 0x46849c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46849cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4684a0:
    // 0x4684a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4684a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4684a4:
    // 0x4684a4: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x4684a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_4684a8:
    // 0x4684a8: 0x3e00008  jr          $ra
label_4684ac:
    if (ctx->pc == 0x4684ACu) {
        ctx->pc = 0x4684B0u;
        goto label_fallthrough_0x4684a8;
    }
    ctx->pc = 0x4684A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4684A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4684a8:
    ctx->pc = 0x4684B0u;
}
