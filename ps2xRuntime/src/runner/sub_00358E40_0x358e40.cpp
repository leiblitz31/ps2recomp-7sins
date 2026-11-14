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

// Function: sub_00358E40
// Address: 0x358e40 - 0x359528
void sub_00358E40_0x358e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358E40_0x358e40");
#endif

    switch (ctx->pc) {
        case 0x358e40u: goto label_358e40;
        case 0x358e44u: goto label_358e44;
        case 0x358e48u: goto label_358e48;
        case 0x358e4cu: goto label_358e4c;
        case 0x358e50u: goto label_358e50;
        case 0x358e54u: goto label_358e54;
        case 0x358e58u: goto label_358e58;
        case 0x358e5cu: goto label_358e5c;
        case 0x358e60u: goto label_358e60;
        case 0x358e64u: goto label_358e64;
        case 0x358e68u: goto label_358e68;
        case 0x358e6cu: goto label_358e6c;
        case 0x358e70u: goto label_358e70;
        case 0x358e74u: goto label_358e74;
        case 0x358e78u: goto label_358e78;
        case 0x358e7cu: goto label_358e7c;
        case 0x358e80u: goto label_358e80;
        case 0x358e84u: goto label_358e84;
        case 0x358e88u: goto label_358e88;
        case 0x358e8cu: goto label_358e8c;
        case 0x358e90u: goto label_358e90;
        case 0x358e94u: goto label_358e94;
        case 0x358e98u: goto label_358e98;
        case 0x358e9cu: goto label_358e9c;
        case 0x358ea0u: goto label_358ea0;
        case 0x358ea4u: goto label_358ea4;
        case 0x358ea8u: goto label_358ea8;
        case 0x358eacu: goto label_358eac;
        case 0x358eb0u: goto label_358eb0;
        case 0x358eb4u: goto label_358eb4;
        case 0x358eb8u: goto label_358eb8;
        case 0x358ebcu: goto label_358ebc;
        case 0x358ec0u: goto label_358ec0;
        case 0x358ec4u: goto label_358ec4;
        case 0x358ec8u: goto label_358ec8;
        case 0x358eccu: goto label_358ecc;
        case 0x358ed0u: goto label_358ed0;
        case 0x358ed4u: goto label_358ed4;
        case 0x358ed8u: goto label_358ed8;
        case 0x358edcu: goto label_358edc;
        case 0x358ee0u: goto label_358ee0;
        case 0x358ee4u: goto label_358ee4;
        case 0x358ee8u: goto label_358ee8;
        case 0x358eecu: goto label_358eec;
        case 0x358ef0u: goto label_358ef0;
        case 0x358ef4u: goto label_358ef4;
        case 0x358ef8u: goto label_358ef8;
        case 0x358efcu: goto label_358efc;
        case 0x358f00u: goto label_358f00;
        case 0x358f04u: goto label_358f04;
        case 0x358f08u: goto label_358f08;
        case 0x358f0cu: goto label_358f0c;
        case 0x358f10u: goto label_358f10;
        case 0x358f14u: goto label_358f14;
        case 0x358f18u: goto label_358f18;
        case 0x358f1cu: goto label_358f1c;
        case 0x358f20u: goto label_358f20;
        case 0x358f24u: goto label_358f24;
        case 0x358f28u: goto label_358f28;
        case 0x358f2cu: goto label_358f2c;
        case 0x358f30u: goto label_358f30;
        case 0x358f34u: goto label_358f34;
        case 0x358f38u: goto label_358f38;
        case 0x358f3cu: goto label_358f3c;
        case 0x358f40u: goto label_358f40;
        case 0x358f44u: goto label_358f44;
        case 0x358f48u: goto label_358f48;
        case 0x358f4cu: goto label_358f4c;
        case 0x358f50u: goto label_358f50;
        case 0x358f54u: goto label_358f54;
        case 0x358f58u: goto label_358f58;
        case 0x358f5cu: goto label_358f5c;
        case 0x358f60u: goto label_358f60;
        case 0x358f64u: goto label_358f64;
        case 0x358f68u: goto label_358f68;
        case 0x358f6cu: goto label_358f6c;
        case 0x358f70u: goto label_358f70;
        case 0x358f74u: goto label_358f74;
        case 0x358f78u: goto label_358f78;
        case 0x358f7cu: goto label_358f7c;
        case 0x358f80u: goto label_358f80;
        case 0x358f84u: goto label_358f84;
        case 0x358f88u: goto label_358f88;
        case 0x358f8cu: goto label_358f8c;
        case 0x358f90u: goto label_358f90;
        case 0x358f94u: goto label_358f94;
        case 0x358f98u: goto label_358f98;
        case 0x358f9cu: goto label_358f9c;
        case 0x358fa0u: goto label_358fa0;
        case 0x358fa4u: goto label_358fa4;
        case 0x358fa8u: goto label_358fa8;
        case 0x358facu: goto label_358fac;
        case 0x358fb0u: goto label_358fb0;
        case 0x358fb4u: goto label_358fb4;
        case 0x358fb8u: goto label_358fb8;
        case 0x358fbcu: goto label_358fbc;
        case 0x358fc0u: goto label_358fc0;
        case 0x358fc4u: goto label_358fc4;
        case 0x358fc8u: goto label_358fc8;
        case 0x358fccu: goto label_358fcc;
        case 0x358fd0u: goto label_358fd0;
        case 0x358fd4u: goto label_358fd4;
        case 0x358fd8u: goto label_358fd8;
        case 0x358fdcu: goto label_358fdc;
        case 0x358fe0u: goto label_358fe0;
        case 0x358fe4u: goto label_358fe4;
        case 0x358fe8u: goto label_358fe8;
        case 0x358fecu: goto label_358fec;
        case 0x358ff0u: goto label_358ff0;
        case 0x358ff4u: goto label_358ff4;
        case 0x358ff8u: goto label_358ff8;
        case 0x358ffcu: goto label_358ffc;
        case 0x359000u: goto label_359000;
        case 0x359004u: goto label_359004;
        case 0x359008u: goto label_359008;
        case 0x35900cu: goto label_35900c;
        case 0x359010u: goto label_359010;
        case 0x359014u: goto label_359014;
        case 0x359018u: goto label_359018;
        case 0x35901cu: goto label_35901c;
        case 0x359020u: goto label_359020;
        case 0x359024u: goto label_359024;
        case 0x359028u: goto label_359028;
        case 0x35902cu: goto label_35902c;
        case 0x359030u: goto label_359030;
        case 0x359034u: goto label_359034;
        case 0x359038u: goto label_359038;
        case 0x35903cu: goto label_35903c;
        case 0x359040u: goto label_359040;
        case 0x359044u: goto label_359044;
        case 0x359048u: goto label_359048;
        case 0x35904cu: goto label_35904c;
        case 0x359050u: goto label_359050;
        case 0x359054u: goto label_359054;
        case 0x359058u: goto label_359058;
        case 0x35905cu: goto label_35905c;
        case 0x359060u: goto label_359060;
        case 0x359064u: goto label_359064;
        case 0x359068u: goto label_359068;
        case 0x35906cu: goto label_35906c;
        case 0x359070u: goto label_359070;
        case 0x359074u: goto label_359074;
        case 0x359078u: goto label_359078;
        case 0x35907cu: goto label_35907c;
        case 0x359080u: goto label_359080;
        case 0x359084u: goto label_359084;
        case 0x359088u: goto label_359088;
        case 0x35908cu: goto label_35908c;
        case 0x359090u: goto label_359090;
        case 0x359094u: goto label_359094;
        case 0x359098u: goto label_359098;
        case 0x35909cu: goto label_35909c;
        case 0x3590a0u: goto label_3590a0;
        case 0x3590a4u: goto label_3590a4;
        case 0x3590a8u: goto label_3590a8;
        case 0x3590acu: goto label_3590ac;
        case 0x3590b0u: goto label_3590b0;
        case 0x3590b4u: goto label_3590b4;
        case 0x3590b8u: goto label_3590b8;
        case 0x3590bcu: goto label_3590bc;
        case 0x3590c0u: goto label_3590c0;
        case 0x3590c4u: goto label_3590c4;
        case 0x3590c8u: goto label_3590c8;
        case 0x3590ccu: goto label_3590cc;
        case 0x3590d0u: goto label_3590d0;
        case 0x3590d4u: goto label_3590d4;
        case 0x3590d8u: goto label_3590d8;
        case 0x3590dcu: goto label_3590dc;
        case 0x3590e0u: goto label_3590e0;
        case 0x3590e4u: goto label_3590e4;
        case 0x3590e8u: goto label_3590e8;
        case 0x3590ecu: goto label_3590ec;
        case 0x3590f0u: goto label_3590f0;
        case 0x3590f4u: goto label_3590f4;
        case 0x3590f8u: goto label_3590f8;
        case 0x3590fcu: goto label_3590fc;
        case 0x359100u: goto label_359100;
        case 0x359104u: goto label_359104;
        case 0x359108u: goto label_359108;
        case 0x35910cu: goto label_35910c;
        case 0x359110u: goto label_359110;
        case 0x359114u: goto label_359114;
        case 0x359118u: goto label_359118;
        case 0x35911cu: goto label_35911c;
        case 0x359120u: goto label_359120;
        case 0x359124u: goto label_359124;
        case 0x359128u: goto label_359128;
        case 0x35912cu: goto label_35912c;
        case 0x359130u: goto label_359130;
        case 0x359134u: goto label_359134;
        case 0x359138u: goto label_359138;
        case 0x35913cu: goto label_35913c;
        case 0x359140u: goto label_359140;
        case 0x359144u: goto label_359144;
        case 0x359148u: goto label_359148;
        case 0x35914cu: goto label_35914c;
        case 0x359150u: goto label_359150;
        case 0x359154u: goto label_359154;
        case 0x359158u: goto label_359158;
        case 0x35915cu: goto label_35915c;
        case 0x359160u: goto label_359160;
        case 0x359164u: goto label_359164;
        case 0x359168u: goto label_359168;
        case 0x35916cu: goto label_35916c;
        case 0x359170u: goto label_359170;
        case 0x359174u: goto label_359174;
        case 0x359178u: goto label_359178;
        case 0x35917cu: goto label_35917c;
        case 0x359180u: goto label_359180;
        case 0x359184u: goto label_359184;
        case 0x359188u: goto label_359188;
        case 0x35918cu: goto label_35918c;
        case 0x359190u: goto label_359190;
        case 0x359194u: goto label_359194;
        case 0x359198u: goto label_359198;
        case 0x35919cu: goto label_35919c;
        case 0x3591a0u: goto label_3591a0;
        case 0x3591a4u: goto label_3591a4;
        case 0x3591a8u: goto label_3591a8;
        case 0x3591acu: goto label_3591ac;
        case 0x3591b0u: goto label_3591b0;
        case 0x3591b4u: goto label_3591b4;
        case 0x3591b8u: goto label_3591b8;
        case 0x3591bcu: goto label_3591bc;
        case 0x3591c0u: goto label_3591c0;
        case 0x3591c4u: goto label_3591c4;
        case 0x3591c8u: goto label_3591c8;
        case 0x3591ccu: goto label_3591cc;
        case 0x3591d0u: goto label_3591d0;
        case 0x3591d4u: goto label_3591d4;
        case 0x3591d8u: goto label_3591d8;
        case 0x3591dcu: goto label_3591dc;
        case 0x3591e0u: goto label_3591e0;
        case 0x3591e4u: goto label_3591e4;
        case 0x3591e8u: goto label_3591e8;
        case 0x3591ecu: goto label_3591ec;
        case 0x3591f0u: goto label_3591f0;
        case 0x3591f4u: goto label_3591f4;
        case 0x3591f8u: goto label_3591f8;
        case 0x3591fcu: goto label_3591fc;
        case 0x359200u: goto label_359200;
        case 0x359204u: goto label_359204;
        case 0x359208u: goto label_359208;
        case 0x35920cu: goto label_35920c;
        case 0x359210u: goto label_359210;
        case 0x359214u: goto label_359214;
        case 0x359218u: goto label_359218;
        case 0x35921cu: goto label_35921c;
        case 0x359220u: goto label_359220;
        case 0x359224u: goto label_359224;
        case 0x359228u: goto label_359228;
        case 0x35922cu: goto label_35922c;
        case 0x359230u: goto label_359230;
        case 0x359234u: goto label_359234;
        case 0x359238u: goto label_359238;
        case 0x35923cu: goto label_35923c;
        case 0x359240u: goto label_359240;
        case 0x359244u: goto label_359244;
        case 0x359248u: goto label_359248;
        case 0x35924cu: goto label_35924c;
        case 0x359250u: goto label_359250;
        case 0x359254u: goto label_359254;
        case 0x359258u: goto label_359258;
        case 0x35925cu: goto label_35925c;
        case 0x359260u: goto label_359260;
        case 0x359264u: goto label_359264;
        case 0x359268u: goto label_359268;
        case 0x35926cu: goto label_35926c;
        case 0x359270u: goto label_359270;
        case 0x359274u: goto label_359274;
        case 0x359278u: goto label_359278;
        case 0x35927cu: goto label_35927c;
        case 0x359280u: goto label_359280;
        case 0x359284u: goto label_359284;
        case 0x359288u: goto label_359288;
        case 0x35928cu: goto label_35928c;
        case 0x359290u: goto label_359290;
        case 0x359294u: goto label_359294;
        case 0x359298u: goto label_359298;
        case 0x35929cu: goto label_35929c;
        case 0x3592a0u: goto label_3592a0;
        case 0x3592a4u: goto label_3592a4;
        case 0x3592a8u: goto label_3592a8;
        case 0x3592acu: goto label_3592ac;
        case 0x3592b0u: goto label_3592b0;
        case 0x3592b4u: goto label_3592b4;
        case 0x3592b8u: goto label_3592b8;
        case 0x3592bcu: goto label_3592bc;
        case 0x3592c0u: goto label_3592c0;
        case 0x3592c4u: goto label_3592c4;
        case 0x3592c8u: goto label_3592c8;
        case 0x3592ccu: goto label_3592cc;
        case 0x3592d0u: goto label_3592d0;
        case 0x3592d4u: goto label_3592d4;
        case 0x3592d8u: goto label_3592d8;
        case 0x3592dcu: goto label_3592dc;
        case 0x3592e0u: goto label_3592e0;
        case 0x3592e4u: goto label_3592e4;
        case 0x3592e8u: goto label_3592e8;
        case 0x3592ecu: goto label_3592ec;
        case 0x3592f0u: goto label_3592f0;
        case 0x3592f4u: goto label_3592f4;
        case 0x3592f8u: goto label_3592f8;
        case 0x3592fcu: goto label_3592fc;
        case 0x359300u: goto label_359300;
        case 0x359304u: goto label_359304;
        case 0x359308u: goto label_359308;
        case 0x35930cu: goto label_35930c;
        case 0x359310u: goto label_359310;
        case 0x359314u: goto label_359314;
        case 0x359318u: goto label_359318;
        case 0x35931cu: goto label_35931c;
        case 0x359320u: goto label_359320;
        case 0x359324u: goto label_359324;
        case 0x359328u: goto label_359328;
        case 0x35932cu: goto label_35932c;
        case 0x359330u: goto label_359330;
        case 0x359334u: goto label_359334;
        case 0x359338u: goto label_359338;
        case 0x35933cu: goto label_35933c;
        case 0x359340u: goto label_359340;
        case 0x359344u: goto label_359344;
        case 0x359348u: goto label_359348;
        case 0x35934cu: goto label_35934c;
        case 0x359350u: goto label_359350;
        case 0x359354u: goto label_359354;
        case 0x359358u: goto label_359358;
        case 0x35935cu: goto label_35935c;
        case 0x359360u: goto label_359360;
        case 0x359364u: goto label_359364;
        case 0x359368u: goto label_359368;
        case 0x35936cu: goto label_35936c;
        case 0x359370u: goto label_359370;
        case 0x359374u: goto label_359374;
        case 0x359378u: goto label_359378;
        case 0x35937cu: goto label_35937c;
        case 0x359380u: goto label_359380;
        case 0x359384u: goto label_359384;
        case 0x359388u: goto label_359388;
        case 0x35938cu: goto label_35938c;
        case 0x359390u: goto label_359390;
        case 0x359394u: goto label_359394;
        case 0x359398u: goto label_359398;
        case 0x35939cu: goto label_35939c;
        case 0x3593a0u: goto label_3593a0;
        case 0x3593a4u: goto label_3593a4;
        case 0x3593a8u: goto label_3593a8;
        case 0x3593acu: goto label_3593ac;
        case 0x3593b0u: goto label_3593b0;
        case 0x3593b4u: goto label_3593b4;
        case 0x3593b8u: goto label_3593b8;
        case 0x3593bcu: goto label_3593bc;
        case 0x3593c0u: goto label_3593c0;
        case 0x3593c4u: goto label_3593c4;
        case 0x3593c8u: goto label_3593c8;
        case 0x3593ccu: goto label_3593cc;
        case 0x3593d0u: goto label_3593d0;
        case 0x3593d4u: goto label_3593d4;
        case 0x3593d8u: goto label_3593d8;
        case 0x3593dcu: goto label_3593dc;
        case 0x3593e0u: goto label_3593e0;
        case 0x3593e4u: goto label_3593e4;
        case 0x3593e8u: goto label_3593e8;
        case 0x3593ecu: goto label_3593ec;
        case 0x3593f0u: goto label_3593f0;
        case 0x3593f4u: goto label_3593f4;
        case 0x3593f8u: goto label_3593f8;
        case 0x3593fcu: goto label_3593fc;
        case 0x359400u: goto label_359400;
        case 0x359404u: goto label_359404;
        case 0x359408u: goto label_359408;
        case 0x35940cu: goto label_35940c;
        case 0x359410u: goto label_359410;
        case 0x359414u: goto label_359414;
        case 0x359418u: goto label_359418;
        case 0x35941cu: goto label_35941c;
        case 0x359420u: goto label_359420;
        case 0x359424u: goto label_359424;
        case 0x359428u: goto label_359428;
        case 0x35942cu: goto label_35942c;
        case 0x359430u: goto label_359430;
        case 0x359434u: goto label_359434;
        case 0x359438u: goto label_359438;
        case 0x35943cu: goto label_35943c;
        case 0x359440u: goto label_359440;
        case 0x359444u: goto label_359444;
        case 0x359448u: goto label_359448;
        case 0x35944cu: goto label_35944c;
        case 0x359450u: goto label_359450;
        case 0x359454u: goto label_359454;
        case 0x359458u: goto label_359458;
        case 0x35945cu: goto label_35945c;
        case 0x359460u: goto label_359460;
        case 0x359464u: goto label_359464;
        case 0x359468u: goto label_359468;
        case 0x35946cu: goto label_35946c;
        case 0x359470u: goto label_359470;
        case 0x359474u: goto label_359474;
        case 0x359478u: goto label_359478;
        case 0x35947cu: goto label_35947c;
        case 0x359480u: goto label_359480;
        case 0x359484u: goto label_359484;
        case 0x359488u: goto label_359488;
        case 0x35948cu: goto label_35948c;
        case 0x359490u: goto label_359490;
        case 0x359494u: goto label_359494;
        case 0x359498u: goto label_359498;
        case 0x35949cu: goto label_35949c;
        case 0x3594a0u: goto label_3594a0;
        case 0x3594a4u: goto label_3594a4;
        case 0x3594a8u: goto label_3594a8;
        case 0x3594acu: goto label_3594ac;
        case 0x3594b0u: goto label_3594b0;
        case 0x3594b4u: goto label_3594b4;
        case 0x3594b8u: goto label_3594b8;
        case 0x3594bcu: goto label_3594bc;
        case 0x3594c0u: goto label_3594c0;
        case 0x3594c4u: goto label_3594c4;
        case 0x3594c8u: goto label_3594c8;
        case 0x3594ccu: goto label_3594cc;
        case 0x3594d0u: goto label_3594d0;
        case 0x3594d4u: goto label_3594d4;
        case 0x3594d8u: goto label_3594d8;
        case 0x3594dcu: goto label_3594dc;
        case 0x3594e0u: goto label_3594e0;
        case 0x3594e4u: goto label_3594e4;
        case 0x3594e8u: goto label_3594e8;
        case 0x3594ecu: goto label_3594ec;
        case 0x3594f0u: goto label_3594f0;
        case 0x3594f4u: goto label_3594f4;
        case 0x3594f8u: goto label_3594f8;
        case 0x3594fcu: goto label_3594fc;
        case 0x359500u: goto label_359500;
        case 0x359504u: goto label_359504;
        case 0x359508u: goto label_359508;
        case 0x35950cu: goto label_35950c;
        case 0x359510u: goto label_359510;
        case 0x359514u: goto label_359514;
        case 0x359518u: goto label_359518;
        case 0x35951cu: goto label_35951c;
        case 0x359520u: goto label_359520;
        case 0x359524u: goto label_359524;
        default: break;
    }

    ctx->pc = 0x358e40u;

label_358e40:
    // 0x358e40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x358e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_358e44:
    // 0x358e44: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x358e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_358e48:
    // 0x358e48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x358e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_358e4c:
    // 0x358e4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x358e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_358e50:
    // 0x358e50: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x358e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_358e54:
    // 0x358e54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x358e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358e58:
    // 0x358e58: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x358e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_358e5c:
    // 0x358e5c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x358e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_358e60:
    // 0x358e60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x358e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_358e64:
    // 0x358e64: 0x30d40002  andi        $s4, $a2, 0x2
    ctx->pc = 0x358e64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_358e68:
    // 0x358e68: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x358e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_358e6c:
    // 0x358e6c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x358e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_358e70:
    // 0x358e70: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_358e74:
    if (ctx->pc == 0x358E74u) {
        ctx->pc = 0x358E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E70u;
        // 0x358e74: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E78u;
        goto label_358e78;
    }
    ctx->pc = 0x358E70u;
    {
        const bool branch_taken_0x358e70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x358E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E70u;
        // 0x358e74: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e70) {
            ctx->pc = 0x358E80u;
            goto label_358e80;
        }
    }
    ctx->pc = 0x358E78u;
label_358e78:
    // 0x358e78: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x358e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_358e7c:
    // 0x358e7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x358e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_358e80:
    // 0x358e80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x358e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_358e84:
    // 0x358e84: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x358e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_358e88:
    // 0x358e88: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x358e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_358e8c:
    // 0x358e8c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x358e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_358e90:
    // 0x358e90: 0x40f809  jalr        $v0
label_358e94:
    if (ctx->pc == 0x358E94u) {
        ctx->pc = 0x358E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E90u;
        // 0x358e94: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = 0x358E98u;
        goto label_358e98;
    }
    ctx->pc = 0x358E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x358E98u);
        ctx->pc = 0x358E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E90u;
        // 0x358e94: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358E90u, 0x358E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x358E98u;
label_358e98:
    // 0x358e98: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x358e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358e9c:
    // 0x358e9c: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_358ea0:
    if (ctx->pc == 0x358EA0u) {
        ctx->pc = 0x358EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E9Cu;
        // 0x358ea0: 0x26b0000f  addiu       $s0, $s5, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358EA4u;
        goto label_358ea4;
    }
    ctx->pc = 0x358E9Cu;
    {
        const bool branch_taken_0x358e9c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x358EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E9Cu;
        // 0x358ea0: 0x26b0000f  addiu       $s0, $s5, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e9c) {
            ctx->pc = 0x358EACu;
            goto label_358eac;
        }
    }
    ctx->pc = 0x358EA4u;
label_358ea4:
    // 0x358ea4: 0x100000bb  b           . + 4 + (0xBB << 2)
label_358ea8:
    if (ctx->pc == 0x358EA8u) {
        ctx->pc = 0x358EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358EA4u;
        // 0x358ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358EACu;
        goto label_358eac;
    }
    ctx->pc = 0x358EA4u;
    {
        const bool branch_taken_0x358ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358EA4u;
        // 0x358ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358ea4) {
            ctx->pc = 0x359194u;
            goto label_359194;
        }
    }
    ctx->pc = 0x358EACu;
label_358eac:
    // 0x358eac: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x358eacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_358eb0:
    // 0x358eb0: 0x3631fff0  ori         $s1, $s1, 0xFFF0
    ctx->pc = 0x358eb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65520);
label_358eb4:
    // 0x358eb4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x358eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_358eb8:
    // 0x358eb8: 0x2118024  and         $s0, $s0, $s1
    ctx->pc = 0x358eb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
label_358ebc:
    // 0x358ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358ec0:
    // 0x358ec0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x358ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_358ec4:
    // 0x358ec4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x358ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_358ec8:
    // 0x358ec8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x358ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_358ecc:
    // 0x358ecc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x358eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_358ed0:
    // 0x358ed0: 0xc0bb7e6  jal         func_2EDF98
label_358ed4:
    if (ctx->pc == 0x358ED4u) {
        ctx->pc = 0x358ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358ED0u;
        // 0x358ed4: 0xae50004c  sw          $s0, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358ED8u;
        goto label_358ed8;
    }
    ctx->pc = 0x358ED0u;
    SET_GPR_U32(ctx, 31, 0x358ED8u);
    ctx->pc = 0x358ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358ED0u;
    // 0x358ed4: 0xae50004c  sw          $s0, 0x4C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x358ED0u, 0x358ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358ED8u;
label_358ed8:
    // 0x358ed8: 0x2610001b  addiu       $s0, $s0, 0x1B
    ctx->pc = 0x358ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27));
label_358edc:
    // 0x358edc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x358edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_358ee0:
    // 0x358ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358ee4:
    // 0x358ee4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x358ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_358ee8:
    // 0x358ee8: 0x2118024  and         $s0, $s0, $s1
    ctx->pc = 0x358ee8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
label_358eec:
    // 0x358eec: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x358eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_358ef0:
    // 0x358ef0: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x358ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_358ef4:
    // 0x358ef4: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x358ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
label_358ef8:
    // 0x358ef8: 0xae440058  sw          $a0, 0x58($s2)
    ctx->pc = 0x358ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 4));
label_358efc:
    // 0x358efc: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x358efcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_358f00:
    // 0x358f00: 0x6a420013  ldl         $v0, 0x13($s2)
    ctx->pc = 0x358f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_358f04:
    // 0x358f04: 0x6e42000c  ldr         $v0, 0xC($s2)
    ctx->pc = 0x358f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_358f08:
    // 0x358f08: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x358f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_358f0c:
    // 0x358f0c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x358f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_358f10:
    // 0x358f10: 0x1a60008e  blez        $s3, . + 4 + (0x8E << 2)
label_358f14:
    if (ctx->pc == 0x358F14u) {
        ctx->pc = 0x358F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F10u;
        // 0x358f14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358F18u;
        goto label_358f18;
    }
    ctx->pc = 0x358F10u;
    {
        const bool branch_taken_0x358f10 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x358F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F10u;
        // 0x358f14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f10) {
            ctx->pc = 0x35914Cu;
            goto label_35914c;
        }
    }
    ctx->pc = 0x358F18u;
label_358f18:
    // 0x358f18: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x358f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_358f1c:
    // 0x358f1c: 0x131023  negu        $v0, $s3
    ctx->pc = 0x358f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_358f20:
    // 0x358f20: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x358f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_358f24:
    // 0x358f24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x358f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_358f28:
    // 0x358f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x358f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_358f2c:
    // 0x358f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x358f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_358f30:
    // 0x358f30: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x358f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
label_358f34:
    // 0x358f34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x358f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_358f38:
    // 0x358f38: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
label_358f3c:
    if (ctx->pc == 0x358F3Cu) {
        ctx->pc = 0x358F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F38u;
        // 0x358f3c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358F40u;
        goto label_358f40;
    }
    ctx->pc = 0x358F38u;
    {
        const bool branch_taken_0x358f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x358F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F38u;
        // 0x358f3c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f38) {
            ctx->pc = 0x359030u;
            goto label_359030;
        }
    }
    ctx->pc = 0x358F40u;
label_358f40:
    // 0x358f40: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x358f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_358f44:
    // 0x358f44: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_358f48:
    if (ctx->pc == 0x358F48u) {
        ctx->pc = 0x358F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F44u;
        // 0x358f48: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x358F4Cu;
        goto label_358f4c;
    }
    ctx->pc = 0x358F44u;
    {
        const bool branch_taken_0x358f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F44u;
        // 0x358f48: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f44) {
            ctx->pc = 0x358FE4u;
            goto label_358fe4;
        }
    }
    ctx->pc = 0x358F4Cu;
label_358f4c:
    // 0x358f4c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_358f50:
    if (ctx->pc == 0x358F50u) {
        ctx->pc = 0x358F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F4Cu;
        // 0x358f50: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x358F54u;
        goto label_358f54;
    }
    ctx->pc = 0x358F4Cu;
    {
        const bool branch_taken_0x358f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358F4Cu;
        // 0x358f50: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358f4c) {
            ctx->pc = 0x358FA0u;
            goto label_358fa0;
        }
    }
    ctx->pc = 0x358F54u;
label_358f54:
    // 0x358f54: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x358f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_358f58:
    // 0x358f58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x358f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_358f5c:
    // 0x358f5c: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x358f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_358f60:
    // 0x358f60: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x358f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_358f64:
    // 0x358f64: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x358f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_358f68:
    // 0x358f68: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x358f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_358f6c:
    // 0x358f6c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x358f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_358f70:
    // 0x358f70: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x358f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_358f74:
    // 0x358f74: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x358f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_358f78:
    // 0x358f78: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x358f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_358f7c:
    // 0x358f7c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x358f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_358f80:
    // 0x358f80: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x358f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_358f84:
    // 0x358f84: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x358f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_358f88:
    // 0x358f88: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x358f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_358f8c:
    // 0x358f8c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x358f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_358f90:
    // 0x358f90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x358f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_358f94:
    // 0x358f94: 0x2667ffff  addiu       $a3, $s3, -0x1
    ctx->pc = 0x358f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_358f98:
    // 0x358f98: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x358f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_358f9c:
    // 0x358f9c: 0x0  nop
    ctx->pc = 0x358f9cu;
    // NOP
label_358fa0:
    // 0x358fa0: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x358fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_358fa4:
    // 0x358fa4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x358fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_358fa8:
    // 0x358fa8: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x358fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_358fac:
    // 0x358fac: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x358facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_358fb0:
    // 0x358fb0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x358fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_358fb4:
    // 0x358fb4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x358fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_358fb8:
    // 0x358fb8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x358fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_358fbc:
    // 0x358fbc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x358fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_358fc0:
    // 0x358fc0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x358fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_358fc4:
    // 0x358fc4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x358fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_358fc8:
    // 0x358fc8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x358fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_358fcc:
    // 0x358fcc: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x358fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_358fd0:
    // 0x358fd0: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x358fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_358fd4:
    // 0x358fd4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x358fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_358fd8:
    // 0x358fd8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x358fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_358fdc:
    // 0x358fdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x358fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_358fe0:
    // 0x358fe0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x358fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_358fe4:
    // 0x358fe4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x358fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_358fe8:
    // 0x358fe8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x358fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_358fec:
    // 0x358fec: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x358fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_358ff0:
    // 0x358ff0: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x358ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_358ff4:
    // 0x358ff4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x358ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_358ff8:
    // 0x358ff8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x358ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_358ffc:
    // 0x358ffc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x358ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_359000:
    // 0x359000: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x359000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_359004:
    // 0x359004: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x359004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_359008:
    // 0x359008: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x359008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_35900c:
    // 0x35900c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x35900cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_359010:
    // 0x359010: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x359010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_359014:
    // 0x359014: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x359014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_359018:
    // 0x359018: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x359018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_35901c:
    // 0x35901c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x35901cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_359020:
    // 0x359020: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x359020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_359024:
    // 0x359024: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x359024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_359028:
    // 0x359028: 0x10e00047  beqz        $a3, . + 4 + (0x47 << 2)
label_35902c:
    if (ctx->pc == 0x35902Cu) {
        ctx->pc = 0x35902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359028u;
        // 0x35902c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359030u;
        goto label_359030;
    }
    ctx->pc = 0x359028u;
    {
        const bool branch_taken_0x359028 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x35902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359028u;
        // 0x35902c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359028) {
            ctx->pc = 0x359148u;
            goto label_359148;
        }
    }
    ctx->pc = 0x359030u;
label_359030:
    // 0x359030: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x359030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_359034:
    // 0x359034: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x359034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_359038:
    // 0x359038: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x359038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_35903c:
    // 0x35903c: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x35903cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_359040:
    // 0x359040: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x359040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_359044:
    // 0x359044: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x359044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_359048:
    // 0x359048: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x359048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_35904c:
    // 0x35904c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x35904cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_359050:
    // 0x359050: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x359050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_359054:
    // 0x359054: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x359054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_359058:
    // 0x359058: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x359058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_35905c:
    // 0x35905c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x35905cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_359060:
    // 0x359060: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x359060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_359064:
    // 0x359064: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x359064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_359068:
    // 0x359068: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x359068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_35906c:
    // 0x35906c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x35906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_359070:
    // 0x359070: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x359070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_359074:
    // 0x359074: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x359074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_359078:
    // 0x359078: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x359078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_35907c:
    // 0x35907c: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x35907cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_359080:
    // 0x359080: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x359080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_359084:
    // 0x359084: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x359084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_359088:
    // 0x359088: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x359088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_35908c:
    // 0x35908c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x35908cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_359090:
    // 0x359090: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x359090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_359094:
    // 0x359094: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x359094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_359098:
    // 0x359098: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x359098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_35909c:
    // 0x35909c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x35909cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_3590a0:
    // 0x3590a0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x3590a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_3590a4:
    // 0x3590a4: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x3590a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_3590a8:
    // 0x3590a8: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x3590a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_3590ac:
    // 0x3590ac: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3590acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_3590b0:
    // 0x3590b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3590b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3590b4:
    // 0x3590b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3590b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3590b8:
    // 0x3590b8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x3590b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_3590bc:
    // 0x3590bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3590bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3590c0:
    // 0x3590c0: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x3590c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_3590c4:
    // 0x3590c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3590c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3590c8:
    // 0x3590c8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3590c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3590cc:
    // 0x3590cc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3590ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_3590d0:
    // 0x3590d0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3590d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_3590d4:
    // 0x3590d4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3590d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3590d8:
    // 0x3590d8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3590d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3590dc:
    // 0x3590dc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x3590dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_3590e0:
    // 0x3590e0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x3590e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_3590e4:
    // 0x3590e4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x3590e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_3590e8:
    // 0x3590e8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x3590e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_3590ec:
    // 0x3590ec: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x3590ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_3590f0:
    // 0x3590f0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3590f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_3590f4:
    // 0x3590f4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3590f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3590f8:
    // 0x3590f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3590f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3590fc:
    // 0x3590fc: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x3590fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_359100:
    // 0x359100: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x359100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_359104:
    // 0x359104: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x359104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_359108:
    // 0x359108: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x359108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_35910c:
    // 0x35910c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x35910cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_359110:
    // 0x359110: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x359110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_359114:
    // 0x359114: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x359114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_359118:
    // 0x359118: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x359118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_35911c:
    // 0x35911c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x35911cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_359120:
    // 0x359120: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x359120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_359124:
    // 0x359124: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x359124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_359128:
    // 0x359128: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x359128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_35912c:
    // 0x35912c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x35912cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_359130:
    // 0x359130: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x359130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_359134:
    // 0x359134: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x359134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_359138:
    // 0x359138: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x359138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_35913c:
    // 0x35913c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x35913cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_359140:
    // 0x359140: 0x14e0ffbb  bnez        $a3, . + 4 + (-0x45 << 2)
label_359144:
    if (ctx->pc == 0x359144u) {
        ctx->pc = 0x359144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359140u;
        // 0x359144: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359148u;
        goto label_359148;
    }
    ctx->pc = 0x359140u;
    {
        const bool branch_taken_0x359140 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x359144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359140u;
        // 0x359144: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359140) {
            ctx->pc = 0x359030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359030;
        }
    }
    ctx->pc = 0x359148u;
label_359148:
    // 0x359148: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x359148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_35914c:
    // 0x35914c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_359150:
    if (ctx->pc == 0x359150u) {
        ctx->pc = 0x359150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35914Cu;
        // 0x359150: 0x133180  sll         $a2, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359154u;
        goto label_359154;
    }
    ctx->pc = 0x35914Cu;
    {
        const bool branch_taken_0x35914c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x359150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35914Cu;
        // 0x359150: 0x133180  sll         $a2, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35914c) {
            ctx->pc = 0x359190u;
            goto label_359190;
        }
    }
    ctx->pc = 0x359154u;
label_359154:
    // 0x359154: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x359154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_359158:
    // 0x359158: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x359158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_35915c:
    // 0x35915c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35915cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_359160:
    // 0x359160: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x359160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_359164:
    // 0x359164: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x359164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_359168:
    // 0x359168: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x359168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_35916c:
    // 0x35916c: 0xae450028  sw          $a1, 0x28($s2)
    ctx->pc = 0x35916cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 5));
label_359170:
    // 0x359170: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x359170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_359174:
    // 0x359174: 0xae440050  sw          $a0, 0x50($s2)
    ctx->pc = 0x359174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 4));
label_359178:
    // 0x359178: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x359178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_35917c:
    // 0x35917c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x35917cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_359180:
    // 0x359180: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x359180u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_359184:
    // 0x359184: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x359184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_359188:
    // 0x359188: 0xc0bb7e6  jal         func_2EDF98
label_35918c:
    if (ctx->pc == 0x35918Cu) {
        ctx->pc = 0x35918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359188u;
        // 0x35918c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359190u;
        goto label_359190;
    }
    ctx->pc = 0x359188u;
    SET_GPR_U32(ctx, 31, 0x359190u);
    ctx->pc = 0x35918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359188u;
    // 0x35918c: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x359188u, 0x359190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359190u;
label_359190:
    // 0x359190: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x359190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_359194:
    // 0x359194: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x359194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_359198:
    // 0x359198: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x359198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35919c:
    // 0x35919c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x35919cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3591a0:
    // 0x3591a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3591a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3591a4:
    // 0x3591a4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3591a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3591a8:
    // 0x3591a8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3591a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3591ac:
    // 0x3591ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3591acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3591b0:
    // 0x3591b0: 0x3e00008  jr          $ra
label_3591b4:
    if (ctx->pc == 0x3591B4u) {
        ctx->pc = 0x3591B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591B0u;
        // 0x3591b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3591B8u;
        goto label_3591b8;
    }
    ctx->pc = 0x3591B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3591B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591B0u;
        // 0x3591b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3591B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3591B8u;
label_3591b8:
    // 0x3591b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3591b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3591bc:
    // 0x3591bc: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x3591bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_3591c0:
    // 0x3591c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3591c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3591c4:
    // 0x3591c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3591c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3591c8:
    // 0x3591c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3591c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3591cc:
    // 0x3591cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3591ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3591d0:
    // 0x3591d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3591d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3591d4:
    // 0x3591d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3591d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3591d8:
    // 0x3591d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3591d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3591dc:
    // 0x3591dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3591dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3591e0:
    // 0x3591e0: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x3591e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_3591e4:
    // 0x3591e4: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x3591e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_3591e8:
    // 0x3591e8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3591e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3591ec:
    // 0x3591ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_3591f0:
    if (ctx->pc == 0x3591F0u) {
        ctx->pc = 0x3591F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591ECu;
        // 0x3591f0: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3591F4u;
        goto label_3591f4;
    }
    ctx->pc = 0x3591ECu;
    {
        const bool branch_taken_0x3591ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3591F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591ECu;
        // 0x3591f0: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3591ec) {
            ctx->pc = 0x359230u;
            goto label_359230;
        }
    }
    ctx->pc = 0x3591F4u;
label_3591f4:
    // 0x3591f4: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x3591f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_3591f8:
    // 0x3591f8: 0xc0caa5e  jal         func_32A978
label_3591fc:
    if (ctx->pc == 0x3591FCu) {
        ctx->pc = 0x3591FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591F8u;
        // 0x3591fc: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x359200u;
        goto label_359200;
    }
    ctx->pc = 0x3591F8u;
    SET_GPR_U32(ctx, 31, 0x359200u);
    ctx->pc = 0x3591FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3591F8u;
    // 0x3591fc: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x3591F8u, 0x359200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359200u;
label_359200:
    // 0x359200: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x359200u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_359204:
    // 0x359204: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x359204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_359208:
    // 0x359208: 0x26109528  addiu       $s0, $s0, -0x6AD8
    ctx->pc = 0x359208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939944));
label_35920c:
    // 0x35920c: 0x34840017  ori         $a0, $a0, 0x17
    ctx->pc = 0x35920cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)23);
label_359210:
    // 0x359210: 0xc0caa5e  jal         func_32A978
label_359214:
    if (ctx->pc == 0x359214u) {
        ctx->pc = 0x359214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359210u;
        // 0x359214: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359218u;
        goto label_359218;
    }
    ctx->pc = 0x359210u;
    SET_GPR_U32(ctx, 31, 0x359218u);
    ctx->pc = 0x359214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359210u;
    // 0x359214: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x359210u, 0x359218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359218u;
label_359218:
    // 0x359218: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x359218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_35921c:
    // 0x35921c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359220:
    // 0x359220: 0xc0e3396  jal         func_38CE58
label_359224:
    if (ctx->pc == 0x359224u) {
        ctx->pc = 0x359224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359220u;
        // 0x359224: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359228u;
        goto label_359228;
    }
    ctx->pc = 0x359220u;
    SET_GPR_U32(ctx, 31, 0x359228u);
    ctx->pc = 0x359224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359220u;
    // 0x359224: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x359220u, 0x359228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359228u;
label_359228:
    // 0x359228: 0x1000000f  b           . + 4 + (0xF << 2)
label_35922c:
    if (ctx->pc == 0x35922Cu) {
        ctx->pc = 0x35922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359228u;
        // 0x35922c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359230u;
        goto label_359230;
    }
    ctx->pc = 0x359228u;
    {
        const bool branch_taken_0x359228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359228u;
        // 0x35922c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359228) {
            ctx->pc = 0x359268u;
            goto label_359268;
        }
    }
    ctx->pc = 0x359230u;
label_359230:
    // 0x359230: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x359230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_359234:
    // 0x359234: 0xc0caa5e  jal         func_32A978
label_359238:
    if (ctx->pc == 0x359238u) {
        ctx->pc = 0x359238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359234u;
        // 0x359238: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35923Cu;
        goto label_35923c;
    }
    ctx->pc = 0x359234u;
    SET_GPR_U32(ctx, 31, 0x35923Cu);
    ctx->pc = 0x359238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359234u;
    // 0x359238: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x359234u, 0x35923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35923Cu;
label_35923c:
    // 0x35923c: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x35923cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_359240:
    // 0x359240: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x359240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
label_359244:
    // 0x359244: 0x26109528  addiu       $s0, $s0, -0x6AD8
    ctx->pc = 0x359244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939944));
label_359248:
    // 0x359248: 0x34840015  ori         $a0, $a0, 0x15
    ctx->pc = 0x359248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21);
label_35924c:
    // 0x35924c: 0xc0caa5e  jal         func_32A978
label_359250:
    if (ctx->pc == 0x359250u) {
        ctx->pc = 0x359250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35924Cu;
        // 0x359250: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359254u;
        goto label_359254;
    }
    ctx->pc = 0x35924Cu;
    SET_GPR_U32(ctx, 31, 0x359254u);
    ctx->pc = 0x359250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35924Cu;
    // 0x359250: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x35924Cu, 0x359254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359254u;
label_359254:
    // 0x359254: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x359254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_359258:
    // 0x359258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x359258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35925c:
    // 0x35925c: 0xc0e3396  jal         func_38CE58
label_359260:
    if (ctx->pc == 0x359260u) {
        ctx->pc = 0x359260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35925Cu;
        // 0x359260: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359264u;
        goto label_359264;
    }
    ctx->pc = 0x35925Cu;
    SET_GPR_U32(ctx, 31, 0x359264u);
    ctx->pc = 0x359260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35925Cu;
    // 0x359260: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x35925Cu, 0x359264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359264u;
label_359264:
    // 0x359264: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x359264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_359268:
    // 0x359268: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x359268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_35926c:
    // 0x35926c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35926cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_359270:
    // 0x359270: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x359270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_359274:
    // 0x359274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359278:
    // 0x359278: 0x3e00008  jr          $ra
label_35927c:
    if (ctx->pc == 0x35927Cu) {
        ctx->pc = 0x35927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359278u;
        // 0x35927c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359280u;
        goto label_359280;
    }
    ctx->pc = 0x359278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359278u;
        // 0x35927c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359280u;
label_359280:
    // 0x359280: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x359280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_359284:
    // 0x359284: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x359284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_359288:
    // 0x359288: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x359288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35928c:
    // 0x35928c: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x35928cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_359290:
    // 0x359290: 0x3e00008  jr          $ra
label_359294:
    if (ctx->pc == 0x359294u) {
        ctx->pc = 0x359294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359290u;
        // 0x359294: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359298u;
        goto label_359298;
    }
    ctx->pc = 0x359290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359290u;
        // 0x359294: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359298u;
label_359298:
    // 0x359298: 0x8f86a858  lw          $a2, -0x57A8($gp)
    ctx->pc = 0x359298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_35929c:
    // 0x35929c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35929cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3592a0:
    // 0x3592a0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3592a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3592a4:
    // 0x3592a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3592a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3592a8:
    // 0x3592a8: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x3592a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_3592ac:
    // 0x3592ac: 0x3e00008  jr          $ra
label_3592b0:
    if (ctx->pc == 0x3592B0u) {
        ctx->pc = 0x3592B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3592ACu;
        // 0x3592b0: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3592B4u;
        goto label_3592b4;
    }
    ctx->pc = 0x3592ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3592B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3592ACu;
        // 0x3592b0: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3592ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3592B4u;
label_3592b4:
    // 0x3592b4: 0x0  nop
    ctx->pc = 0x3592b4u;
    // NOP
label_3592b8:
    // 0x3592b8: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x3592b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_3592bc:
    // 0x3592bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3592bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3592c0:
    // 0x3592c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3592c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3592c4:
    // 0x3592c4: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x3592c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_3592c8:
    // 0x3592c8: 0x3e00008  jr          $ra
label_3592cc:
    if (ctx->pc == 0x3592CCu) {
        ctx->pc = 0x3592CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3592C8u;
        // 0x3592cc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3592D0u;
        goto label_3592d0;
    }
    ctx->pc = 0x3592C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3592CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3592C8u;
        // 0x3592cc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3592C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3592D0u;
label_3592d0:
    // 0x3592d0: 0x8f86a858  lw          $a2, -0x57A8($gp)
    ctx->pc = 0x3592d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_3592d4:
    // 0x3592d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3592d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3592d8:
    // 0x3592d8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3592d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3592dc:
    // 0x3592dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3592dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3592e0:
    // 0x3592e0: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x3592e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_3592e4:
    // 0x3592e4: 0x3e00008  jr          $ra
label_3592e8:
    if (ctx->pc == 0x3592E8u) {
        ctx->pc = 0x3592E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3592E4u;
        // 0x3592e8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3592ECu;
        goto label_3592ec;
    }
    ctx->pc = 0x3592E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3592E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3592E4u;
        // 0x3592e8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3592E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3592ECu;
label_3592ec:
    // 0x3592ec: 0x0  nop
    ctx->pc = 0x3592ecu;
    // NOP
label_3592f0:
    // 0x3592f0: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x3592f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_3592f4:
    // 0x3592f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3592f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3592f8:
    // 0x3592f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3592f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3592fc:
    // 0x3592fc: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x3592fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_359300:
    // 0x359300: 0x3e00008  jr          $ra
label_359304:
    if (ctx->pc == 0x359304u) {
        ctx->pc = 0x359304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359300u;
        // 0x359304: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359308u;
        goto label_359308;
    }
    ctx->pc = 0x359300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359300u;
        // 0x359304: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359308u;
label_359308:
    // 0x359308: 0x3e00008  jr          $ra
label_35930c:
    if (ctx->pc == 0x35930Cu) {
        ctx->pc = 0x35930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359308u;
        // 0x35930c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359310u;
        goto label_359310;
    }
    ctx->pc = 0x359308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359308u;
        // 0x35930c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359310u;
label_359310:
    // 0x359310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x359310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_359314:
    // 0x359314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x359314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359318:
    // 0x359318: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x359318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_35931c:
    // 0x35931c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35931cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359320:
    // 0x359320: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x359320u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_359324:
    // 0x359324: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x359324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_359328:
    // 0x359328: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x359328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_35932c:
    // 0x35932c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35932cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_359330:
    // 0x359330: 0xc0e2dbc  jal         func_38B6F0
label_359334:
    if (ctx->pc == 0x359334u) {
        ctx->pc = 0x359334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359330u;
        // 0x359334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359338u;
        goto label_359338;
    }
    ctx->pc = 0x359330u;
    SET_GPR_U32(ctx, 31, 0x359338u);
    ctx->pc = 0x359334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359330u;
    // 0x359334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x359330u, 0x359338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359338u;
label_359338:
    // 0x359338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35933c:
    // 0x35933c: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_359340:
    if (ctx->pc == 0x359340u) {
        ctx->pc = 0x359340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35933Cu;
        // 0x359340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359344u;
        goto label_359344;
    }
    ctx->pc = 0x35933Cu;
    {
        const bool branch_taken_0x35933c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x359340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35933Cu;
        // 0x359340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35933c) {
            ctx->pc = 0x3593D4u;
            goto label_3593d4;
        }
    }
    ctx->pc = 0x359344u;
label_359344:
    // 0x359344: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x359344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_359348:
    // 0x359348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x359348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35934c:
    // 0x35934c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_359350:
    // 0x359350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x359350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_359354:
    // 0x359354: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x359354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_359358:
    // 0x359358: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x359358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_35935c:
    // 0x35935c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x35935cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_359360:
    // 0x359360: 0xc0e2d08  jal         func_38B420
label_359364:
    if (ctx->pc == 0x359364u) {
        ctx->pc = 0x359364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359360u;
        // 0x359364: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359368u;
        goto label_359368;
    }
    ctx->pc = 0x359360u;
    SET_GPR_U32(ctx, 31, 0x359368u);
    ctx->pc = 0x359364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359360u;
    // 0x359364: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x359360u, 0x359368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359368u;
label_359368:
    // 0x359368: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_35936c:
    if (ctx->pc == 0x35936Cu) {
        ctx->pc = 0x35936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359368u;
        // 0x35936c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359370u;
        goto label_359370;
    }
    ctx->pc = 0x359368u;
    {
        const bool branch_taken_0x359368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359368u;
        // 0x35936c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359368) {
            ctx->pc = 0x3593D0u;
            goto label_3593d0;
        }
    }
    ctx->pc = 0x359370u;
label_359370:
    // 0x359370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x359370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_359374:
    // 0x359374: 0xc0e2836  jal         func_38A0D8
label_359378:
    if (ctx->pc == 0x359378u) {
        ctx->pc = 0x359378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359374u;
        // 0x359378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35937Cu;
        goto label_35937c;
    }
    ctx->pc = 0x359374u;
    SET_GPR_U32(ctx, 31, 0x35937Cu);
    ctx->pc = 0x359378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359374u;
    // 0x359378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x359374u, 0x35937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35937Cu;
label_35937c:
    // 0x35937c: 0xc0e3414  jal         func_38D050
label_359380:
    if (ctx->pc == 0x359380u) {
        ctx->pc = 0x359380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35937Cu;
        // 0x359380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359384u;
        goto label_359384;
    }
    ctx->pc = 0x35937Cu;
    SET_GPR_U32(ctx, 31, 0x359384u);
    ctx->pc = 0x359380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35937Cu;
    // 0x359380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x35937Cu, 0x359384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359384u;
label_359384:
    // 0x359384: 0xc0e3992  jal         func_38E648
label_359388:
    if (ctx->pc == 0x359388u) {
        ctx->pc = 0x35938Cu;
        goto label_35938c;
    }
    ctx->pc = 0x359384u;
    SET_GPR_U32(ctx, 31, 0x35938Cu);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x359384u, 0x35938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35938Cu;
label_35938c:
    // 0x35938c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35938cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_359390:
    // 0x359390: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x359390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_359394:
    // 0x359394: 0xc0e3b14  jal         func_38EC50
label_359398:
    if (ctx->pc == 0x359398u) {
        ctx->pc = 0x359398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359394u;
        // 0x359398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35939Cu;
        goto label_35939c;
    }
    ctx->pc = 0x359394u;
    SET_GPR_U32(ctx, 31, 0x35939Cu);
    ctx->pc = 0x359398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359394u;
    // 0x359398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC50u, 0x359394u, 0x35939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35939Cu;
label_35939c:
    // 0x35939c: 0xc0e39c0  jal         func_38E700
label_3593a0:
    if (ctx->pc == 0x3593A0u) {
        ctx->pc = 0x3593A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35939Cu;
        // 0x3593a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3593A4u;
        goto label_3593a4;
    }
    ctx->pc = 0x35939Cu;
    SET_GPR_U32(ctx, 31, 0x3593A4u);
    ctx->pc = 0x3593A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35939Cu;
    // 0x3593a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x35939Cu, 0x3593A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593A4u;
label_3593a4:
    // 0x3593a4: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x3593a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_3593a8:
    // 0x3593a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3593a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3593ac:
    // 0x3593ac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3593acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3593b0:
    // 0x3593b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3593b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3593b4:
    // 0x3593b4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x3593b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_3593b8:
    // 0x3593b8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3593b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_3593bc:
    // 0x3593bc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3593bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_3593c0:
    // 0x3593c0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3593c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_3593c4:
    // 0x3593c4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3593c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
label_3593c8:
    // 0x3593c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3593cc:
    if (ctx->pc == 0x3593CCu) {
        ctx->pc = 0x3593CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593C8u;
        // 0x3593cc: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3593D0u;
        goto label_3593d0;
    }
    ctx->pc = 0x3593C8u;
    {
        const bool branch_taken_0x3593c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3593CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593C8u;
        // 0x3593cc: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3593c8) {
            ctx->pc = 0x3593D4u;
            goto label_3593d4;
        }
    }
    ctx->pc = 0x3593D0u;
label_3593d0:
    // 0x3593d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3593d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3593d4:
    // 0x3593d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3593d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3593d8:
    // 0x3593d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3593d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3593dc:
    // 0x3593dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3593dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3593e0:
    // 0x3593e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3593e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3593e4:
    // 0x3593e4: 0x3e00008  jr          $ra
label_3593e8:
    if (ctx->pc == 0x3593E8u) {
        ctx->pc = 0x3593E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593E4u;
        // 0x3593e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3593ECu;
        goto label_3593ec;
    }
    ctx->pc = 0x3593E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3593E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593E4u;
        // 0x3593e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3593E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3593ECu;
label_3593ec:
    // 0x3593ec: 0x0  nop
    ctx->pc = 0x3593ecu;
    // NOP
label_3593f0:
    // 0x3593f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3593f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3593f4:
    // 0x3593f4: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x3593f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_3593f8:
    // 0x3593f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3593f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3593fc:
    // 0x3593fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3593fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_359400:
    // 0x359400: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x359400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_359404:
    // 0x359404: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x359404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_359408:
    // 0x359408: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x359408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35940c:
    // 0x35940c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_359410:
    // 0x359410: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x359410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_359414:
    // 0x359414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_359418:
    // 0x359418: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x359418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35941c:
    // 0x35941c: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x35941cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_359420:
    // 0x359420: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_359424:
    if (ctx->pc == 0x359424u) {
        ctx->pc = 0x359424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359420u;
        // 0x359424: 0x8c52009c  lw          $s2, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359428u;
        goto label_359428;
    }
    ctx->pc = 0x359420u;
    {
        const bool branch_taken_0x359420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x359424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359420u;
        // 0x359424: 0x8c52009c  lw          $s2, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359420) {
            ctx->pc = 0x359480u;
            goto label_359480;
        }
    }
    ctx->pc = 0x359428u;
label_359428:
    // 0x359428: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x359428u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_35942c:
    // 0x35942c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x35942cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_359430:
    // 0x359430: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x359430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_359434:
    // 0x359434: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x359434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_359438:
    // 0x359438: 0x40f809  jalr        $v0
label_35943c:
    if (ctx->pc == 0x35943Cu) {
        ctx->pc = 0x35943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359438u;
        // 0x35943c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359440u;
        goto label_359440;
    }
    ctx->pc = 0x359438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359440u);
        ctx->pc = 0x35943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359438u;
        // 0x35943c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359438u, 0x359440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359440u;
label_359440:
    // 0x359440: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x359440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_359444:
    // 0x359444: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x359444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_359448:
    // 0x359448: 0x40f809  jalr        $v0
label_35944c:
    if (ctx->pc == 0x35944Cu) {
        ctx->pc = 0x35944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359448u;
        // 0x35944c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359450u;
        goto label_359450;
    }
    ctx->pc = 0x359448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359450u);
        ctx->pc = 0x35944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359448u;
        // 0x35944c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359448u, 0x359450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359450u;
label_359450:
    // 0x359450: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x359450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_359454:
    // 0x359454: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x359454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_359458:
    // 0x359458: 0x40f809  jalr        $v0
label_35945c:
    if (ctx->pc == 0x35945Cu) {
        ctx->pc = 0x35945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359458u;
        // 0x35945c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359460u;
        goto label_359460;
    }
    ctx->pc = 0x359458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359460u);
        ctx->pc = 0x35945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359458u;
        // 0x35945c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359458u, 0x359460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359460u;
label_359460:
    // 0x359460: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x359460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_359464:
    // 0x359464: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x359464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_359468:
    // 0x359468: 0x40f809  jalr        $v0
label_35946c:
    if (ctx->pc == 0x35946Cu) {
        ctx->pc = 0x35946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359468u;
        // 0x35946c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x359470u;
        goto label_359470;
    }
    ctx->pc = 0x359468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359470u);
        ctx->pc = 0x35946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359468u;
        // 0x35946c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359468u, 0x359470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359470u;
label_359470:
    // 0x359470: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x359470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_359474:
    // 0x359474: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x359474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_359478:
    // 0x359478: 0x40f809  jalr        $v0
label_35947c:
    if (ctx->pc == 0x35947Cu) {
        ctx->pc = 0x35947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359478u;
        // 0x35947c: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359480u;
        goto label_359480;
    }
    ctx->pc = 0x359478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359480u);
        ctx->pc = 0x35947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359478u;
        // 0x35947c: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359478u, 0x359480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359480u;
label_359480:
    // 0x359480: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x359480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_359484:
    // 0x359484: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x359484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_359488:
    // 0x359488: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_35948c:
    if (ctx->pc == 0x35948Cu) {
        ctx->pc = 0x35948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359488u;
        // 0x35948c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359490u;
        goto label_359490;
    }
    ctx->pc = 0x359488u;
    {
        const bool branch_taken_0x359488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359488u;
        // 0x35948c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359488) {
            ctx->pc = 0x3594A8u;
            goto label_3594a8;
        }
    }
    ctx->pc = 0x359490u;
label_359490:
    // 0x359490: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x359490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_359494:
    // 0x359494: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x359494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_359498:
    // 0x359498: 0xc0d619e  jal         func_358678
label_35949c:
    if (ctx->pc == 0x35949Cu) {
        ctx->pc = 0x35949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359498u;
        // 0x35949c: 0x8e270024  lw          $a3, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3594A0u;
        goto label_3594a0;
    }
    ctx->pc = 0x359498u;
    SET_GPR_U32(ctx, 31, 0x3594A0u);
    ctx->pc = 0x35949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359498u;
    // 0x35949c: 0x8e270024  lw          $a3, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358678u, 0x359498u, 0x3594A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594A0u;
label_3594a0:
    // 0x3594a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_3594a4:
    if (ctx->pc == 0x3594A4u) {
        ctx->pc = 0x3594A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594A0u;
        // 0x3594a4: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3594A8u;
        goto label_3594a8;
    }
    ctx->pc = 0x3594A0u;
    {
        const bool branch_taken_0x3594a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3594A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594A0u;
        // 0x3594a4: 0x8e220064  lw          $v0, 0x64($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3594a0) {
            ctx->pc = 0x3594DCu;
            goto label_3594dc;
        }
    }
    ctx->pc = 0x3594A8u;
label_3594a8:
    // 0x3594a8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3594a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3594ac:
    // 0x3594ac: 0xc106784  jal         func_419E10
label_3594b0:
    if (ctx->pc == 0x3594B0u) {
        ctx->pc = 0x3594B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594ACu;
        // 0x3594b0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3594B4u;
        goto label_3594b4;
    }
    ctx->pc = 0x3594ACu;
    SET_GPR_U32(ctx, 31, 0x3594B4u);
    ctx->pc = 0x3594B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3594ACu;
    // 0x3594b0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3594ACu, 0x3594B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594B4u;
label_3594b4:
    // 0x3594b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3594b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3594b8:
    // 0x3594b8: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x3594b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_3594bc:
    // 0x3594bc: 0xc0cd3f2  jal         func_334FC8
label_3594c0:
    if (ctx->pc == 0x3594C0u) {
        ctx->pc = 0x3594C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594BCu;
        // 0x3594c0: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3594C4u;
        goto label_3594c4;
    }
    ctx->pc = 0x3594BCu;
    SET_GPR_U32(ctx, 31, 0x3594C4u);
    ctx->pc = 0x3594C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3594BCu;
    // 0x3594c0: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334FC8u, 0x3594BCu, 0x3594C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594C4u;
label_3594c4:
    // 0x3594c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3594c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3594c8:
    // 0x3594c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3594c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3594cc:
    // 0x3594cc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3594ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3594d0:
    // 0x3594d0: 0xc0d6294  jal         func_358A50
label_3594d4:
    if (ctx->pc == 0x3594D4u) {
        ctx->pc = 0x3594D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594D0u;
        // 0x3594d4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3594D8u;
        goto label_3594d8;
    }
    ctx->pc = 0x3594D0u;
    SET_GPR_U32(ctx, 31, 0x3594D8u);
    ctx->pc = 0x3594D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3594D0u;
    // 0x3594d4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A50u, 0x3594D0u, 0x3594D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3594D8u;
label_3594d8:
    // 0x3594d8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x3594d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3594dc:
    // 0x3594dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3594e0:
    if (ctx->pc == 0x3594E0u) {
        ctx->pc = 0x3594E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594DCu;
        // 0x3594e0: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3594E4u;
        goto label_3594e4;
    }
    ctx->pc = 0x3594DCu;
    {
        const bool branch_taken_0x3594dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3594E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594DCu;
        // 0x3594e0: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3594dc) {
            ctx->pc = 0x359508u;
            goto label_359508;
        }
    }
    ctx->pc = 0x3594E4u;
label_3594e4:
    // 0x3594e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3594e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3594e8:
    // 0x3594e8: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x3594e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_3594ec:
    // 0x3594ec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3594ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3594f0:
    // 0x3594f0: 0x40f809  jalr        $v0
label_3594f4:
    if (ctx->pc == 0x3594F4u) {
        ctx->pc = 0x3594F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594F0u;
        // 0x3594f4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3594F8u;
        goto label_3594f8;
    }
    ctx->pc = 0x3594F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3594F8u);
        ctx->pc = 0x3594F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594F0u;
        // 0x3594f4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3594F0u, 0x3594F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3594F8u;
label_3594f8:
    // 0x3594f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3594f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3594fc:
    // 0x3594fc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3594fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_359500:
    // 0x359500: 0x40f809  jalr        $v0
label_359504:
    if (ctx->pc == 0x359504u) {
        ctx->pc = 0x359504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359500u;
        // 0x359504: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359508u;
        goto label_359508;
    }
    ctx->pc = 0x359500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359508u);
        ctx->pc = 0x359504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359500u;
        // 0x359504: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359500u, 0x359508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x359508u;
label_359508:
    // 0x359508: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x359508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35950c:
    // 0x35950c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35950cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359510:
    // 0x359510: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x359510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_359514:
    // 0x359514: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x359514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_359518:
    // 0x359518: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x359518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35951c:
    // 0x35951c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35951cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_359520:
    // 0x359520: 0x3e00008  jr          $ra
label_359524:
    if (ctx->pc == 0x359524u) {
        ctx->pc = 0x359524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359520u;
        // 0x359524: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x359528u;
        goto label_fallthrough_0x359520;
    }
    ctx->pc = 0x359520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359520u;
        // 0x359524: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x359520:
    ctx->pc = 0x359528u;
}
