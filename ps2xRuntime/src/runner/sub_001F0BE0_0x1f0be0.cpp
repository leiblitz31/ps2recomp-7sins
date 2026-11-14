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

// Function: sub_001F0BE0
// Address: 0x1f0be0 - 0x1f38b0
void sub_001F0BE0_0x1f0be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0BE0_0x1f0be0");
#endif

    switch (ctx->pc) {
        case 0x1f0bfcu: goto label_1f0bfc;
        case 0x1f0c1cu: goto label_1f0c1c;
        case 0x1f0c2cu: goto label_1f0c2c;
        case 0x1f0c3cu: goto label_1f0c3c;
        case 0x1f0c4cu: goto label_1f0c4c;
        case 0x1f0c5cu: goto label_1f0c5c;
        case 0x1f0c6cu: goto label_1f0c6c;
        case 0x1f0c7cu: goto label_1f0c7c;
        case 0x1f0c8cu: goto label_1f0c8c;
        case 0x1f0c9cu: goto label_1f0c9c;
        case 0x1f0cacu: goto label_1f0cac;
        case 0x1f0cbcu: goto label_1f0cbc;
        case 0x1f0cccu: goto label_1f0ccc;
        case 0x1f0ce8u: goto label_1f0ce8;
        case 0x1f0d50u: goto label_1f0d50;
        case 0x1f0d64u: goto label_1f0d64;
        case 0x1f0d78u: goto label_1f0d78;
        case 0x1f0d8cu: goto label_1f0d8c;
        case 0x1f0da0u: goto label_1f0da0;
        case 0x1f0db4u: goto label_1f0db4;
        case 0x1f0dc8u: goto label_1f0dc8;
        case 0x1f0ddcu: goto label_1f0ddc;
        case 0x1f0df0u: goto label_1f0df0;
        case 0x1f0e04u: goto label_1f0e04;
        case 0x1f0e18u: goto label_1f0e18;
        case 0x1f0e2cu: goto label_1f0e2c;
        case 0x1f0e3cu: goto label_1f0e3c;
        case 0x1f0e5cu: goto label_1f0e5c;
        case 0x1f0eb4u: goto label_1f0eb4;
        case 0x1f0eccu: goto label_1f0ecc;
        case 0x1f0ee4u: goto label_1f0ee4;
        case 0x1f0f00u: goto label_1f0f00;
        case 0x1f102cu: goto label_1f102c;
        case 0x1f1040u: goto label_1f1040;
        case 0x1f1058u: goto label_1f1058;
        case 0x1f1074u: goto label_1f1074;
        case 0x1f1088u: goto label_1f1088;
        case 0x1f1098u: goto label_1f1098;
        case 0x1f10a0u: goto label_1f10a0;
        case 0x1f10acu: goto label_1f10ac;
        case 0x1f10c4u: goto label_1f10c4;
        case 0x1f10e0u: goto label_1f10e0;
        case 0x1f10f4u: goto label_1f10f4;
        case 0x1f1128u: goto label_1f1128;
        case 0x1f1134u: goto label_1f1134;
        case 0x1f1168u: goto label_1f1168;
        case 0x1f1190u: goto label_1f1190;
        case 0x1f11a8u: goto label_1f11a8;
        case 0x1f11c4u: goto label_1f11c4;
        case 0x1f11dcu: goto label_1f11dc;
        case 0x1f11f0u: goto label_1f11f0;
        case 0x1f125cu: goto label_1f125c;
        case 0x1f1288u: goto label_1f1288;
        case 0x1f13d4u: goto label_1f13d4;
        case 0x1f1408u: goto label_1f1408;
        case 0x1f1428u: goto label_1f1428;
        case 0x1f1434u: goto label_1f1434;
        case 0x1f1454u: goto label_1f1454;
        case 0x1f147cu: goto label_1f147c;
        case 0x1f1508u: goto label_1f1508;
        case 0x1f1528u: goto label_1f1528;
        case 0x1f1534u: goto label_1f1534;
        case 0x1f154cu: goto label_1f154c;
        case 0x1f1560u: goto label_1f1560;
        case 0x1f1570u: goto label_1f1570;
        case 0x1f1580u: goto label_1f1580;
        case 0x1f15a4u: goto label_1f15a4;
        case 0x1f15ccu: goto label_1f15cc;
        case 0x1f15d8u: goto label_1f15d8;
        case 0x1f15e8u: goto label_1f15e8;
        case 0x1f1604u: goto label_1f1604;
        case 0x1f1620u: goto label_1f1620;
        case 0x1f1644u: goto label_1f1644;
        case 0x1f1658u: goto label_1f1658;
        case 0x1f1664u: goto label_1f1664;
        case 0x1f1670u: goto label_1f1670;
        case 0x1f1694u: goto label_1f1694;
        case 0x1f16acu: goto label_1f16ac;
        case 0x1f16d0u: goto label_1f16d0;
        case 0x1f16e0u: goto label_1f16e0;
        case 0x1f16ecu: goto label_1f16ec;
        case 0x1f16fcu: goto label_1f16fc;
        case 0x1f171cu: goto label_1f171c;
        case 0x1f173cu: goto label_1f173c;
        case 0x1f175cu: goto label_1f175c;
        case 0x1f176cu: goto label_1f176c;
        case 0x1f177cu: goto label_1f177c;
        case 0x1f178cu: goto label_1f178c;
        case 0x1f17acu: goto label_1f17ac;
        case 0x1f17c4u: goto label_1f17c4;
        case 0x1f17ecu: goto label_1f17ec;
        case 0x1f17fcu: goto label_1f17fc;
        case 0x1f1808u: goto label_1f1808;
        case 0x1f1848u: goto label_1f1848;
        case 0x1f1864u: goto label_1f1864;
        case 0x1f1884u: goto label_1f1884;
        case 0x1f1898u: goto label_1f1898;
        case 0x1f18a4u: goto label_1f18a4;
        case 0x1f18b8u: goto label_1f18b8;
        case 0x1f18ecu: goto label_1f18ec;
        case 0x1f18f8u: goto label_1f18f8;
        case 0x1f1900u: goto label_1f1900;
        case 0x1f1910u: goto label_1f1910;
        case 0x1f192cu: goto label_1f192c;
        case 0x1f194cu: goto label_1f194c;
        case 0x1f1958u: goto label_1f1958;
        case 0x1f1984u: goto label_1f1984;
        case 0x1f19acu: goto label_1f19ac;
        case 0x1f19c4u: goto label_1f19c4;
        case 0x1f19dcu: goto label_1f19dc;
        case 0x1f19ecu: goto label_1f19ec;
        case 0x1f1a10u: goto label_1f1a10;
        case 0x1f1a20u: goto label_1f1a20;
        case 0x1f1a30u: goto label_1f1a30;
        case 0x1f1a3cu: goto label_1f1a3c;
        case 0x1f1a5cu: goto label_1f1a5c;
        case 0x1f1a7cu: goto label_1f1a7c;
        case 0x1f1a9cu: goto label_1f1a9c;
        case 0x1f1aa8u: goto label_1f1aa8;
        case 0x1f1abcu: goto label_1f1abc;
        case 0x1f1ad0u: goto label_1f1ad0;
        case 0x1f1ae4u: goto label_1f1ae4;
        case 0x1f1af4u: goto label_1f1af4;
        case 0x1f1b08u: goto label_1f1b08;
        case 0x1f1b24u: goto label_1f1b24;
        case 0x1f1b38u: goto label_1f1b38;
        case 0x1f1b48u: goto label_1f1b48;
        case 0x1f1b88u: goto label_1f1b88;
        case 0x1f1bb4u: goto label_1f1bb4;
        case 0x1f1be0u: goto label_1f1be0;
        case 0x1f1c08u: goto label_1f1c08;
        case 0x1f1c34u: goto label_1f1c34;
        case 0x1f1c60u: goto label_1f1c60;
        case 0x1f1c88u: goto label_1f1c88;
        case 0x1f1cb4u: goto label_1f1cb4;
        case 0x1f1ce8u: goto label_1f1ce8;
        case 0x1f1d14u: goto label_1f1d14;
        case 0x1f1d3cu: goto label_1f1d3c;
        case 0x1f1d68u: goto label_1f1d68;
        case 0x1f1d90u: goto label_1f1d90;
        case 0x1f1dc0u: goto label_1f1dc0;
        case 0x1f1df4u: goto label_1f1df4;
        case 0x1f1e1cu: goto label_1f1e1c;
        case 0x1f1e4cu: goto label_1f1e4c;
        case 0x1f1e78u: goto label_1f1e78;
        case 0x1f1ea4u: goto label_1f1ea4;
        case 0x1f1ed4u: goto label_1f1ed4;
        case 0x1f1f00u: goto label_1f1f00;
        case 0x1f1f2cu: goto label_1f1f2c;
        case 0x1f1f5cu: goto label_1f1f5c;
        case 0x1f1f88u: goto label_1f1f88;
        case 0x1f1fb4u: goto label_1f1fb4;
        case 0x1f1fe4u: goto label_1f1fe4;
        case 0x1f2010u: goto label_1f2010;
        case 0x1f2038u: goto label_1f2038;
        case 0x1f2060u: goto label_1f2060;
        case 0x1f2090u: goto label_1f2090;
        case 0x1f20bcu: goto label_1f20bc;
        case 0x1f20e4u: goto label_1f20e4;
        case 0x1f2110u: goto label_1f2110;
        case 0x1f2140u: goto label_1f2140;
        case 0x1f216cu: goto label_1f216c;
        case 0x1f2194u: goto label_1f2194;
        case 0x1f21b8u: goto label_1f21b8;
        case 0x1f21d0u: goto label_1f21d0;
        case 0x1f21e4u: goto label_1f21e4;
        case 0x1f2204u: goto label_1f2204;
        case 0x1f2210u: goto label_1f2210;
        case 0x1f222cu: goto label_1f222c;
        case 0x1f223cu: goto label_1f223c;
        case 0x1f225cu: goto label_1f225c;
        case 0x1f2270u: goto label_1f2270;
        case 0x1f228cu: goto label_1f228c;
        case 0x1f22a0u: goto label_1f22a0;
        case 0x1f22bcu: goto label_1f22bc;
        case 0x1f22c8u: goto label_1f22c8;
        case 0x1f22e4u: goto label_1f22e4;
        case 0x1f2348u: goto label_1f2348;
        case 0x1f2364u: goto label_1f2364;
        case 0x1f2374u: goto label_1f2374;
        case 0x1f239cu: goto label_1f239c;
        case 0x1f23b0u: goto label_1f23b0;
        case 0x1f23d0u: goto label_1f23d0;
        case 0x1f23e4u: goto label_1f23e4;
        case 0x1f2404u: goto label_1f2404;
        case 0x1f2414u: goto label_1f2414;
        case 0x1f2438u: goto label_1f2438;
        case 0x1f244cu: goto label_1f244c;
        case 0x1f246cu: goto label_1f246c;
        case 0x1f2480u: goto label_1f2480;
        case 0x1f24a0u: goto label_1f24a0;
        case 0x1f24b4u: goto label_1f24b4;
        case 0x1f24dcu: goto label_1f24dc;
        case 0x1f24f0u: goto label_1f24f0;
        case 0x1f2514u: goto label_1f2514;
        case 0x1f2528u: goto label_1f2528;
        case 0x1f254cu: goto label_1f254c;
        case 0x1f2560u: goto label_1f2560;
        case 0x1f2578u: goto label_1f2578;
        case 0x1f258cu: goto label_1f258c;
        case 0x1f25acu: goto label_1f25ac;
        case 0x1f25c0u: goto label_1f25c0;
        case 0x1f25e0u: goto label_1f25e0;
        case 0x1f25f4u: goto label_1f25f4;
        case 0x1f2618u: goto label_1f2618;
        case 0x1f2628u: goto label_1f2628;
        case 0x1f2648u: goto label_1f2648;
        case 0x1f265cu: goto label_1f265c;
        case 0x1f267cu: goto label_1f267c;
        case 0x1f2690u: goto label_1f2690;
        case 0x1f26b4u: goto label_1f26b4;
        case 0x1f26c8u: goto label_1f26c8;
        case 0x1f26ecu: goto label_1f26ec;
        case 0x1f26fcu: goto label_1f26fc;
        case 0x1f2718u: goto label_1f2718;
        case 0x1f2728u: goto label_1f2728;
        case 0x1f274cu: goto label_1f274c;
        case 0x1f275cu: goto label_1f275c;
        case 0x1f2780u: goto label_1f2780;
        case 0x1f2794u: goto label_1f2794;
        case 0x1f27b0u: goto label_1f27b0;
        case 0x1f27c0u: goto label_1f27c0;
        case 0x1f27e0u: goto label_1f27e0;
        case 0x1f27f4u: goto label_1f27f4;
        case 0x1f281cu: goto label_1f281c;
        case 0x1f2830u: goto label_1f2830;
        case 0x1f2854u: goto label_1f2854;
        case 0x1f286cu: goto label_1f286c;
        case 0x1f2898u: goto label_1f2898;
        case 0x1f28a8u: goto label_1f28a8;
        case 0x1f28c8u: goto label_1f28c8;
        case 0x1f28d8u: goto label_1f28d8;
        case 0x1f28f8u: goto label_1f28f8;
        case 0x1f290cu: goto label_1f290c;
        case 0x1f2934u: goto label_1f2934;
        case 0x1f2948u: goto label_1f2948;
        case 0x1f2968u: goto label_1f2968;
        case 0x1f2978u: goto label_1f2978;
        case 0x1f299cu: goto label_1f299c;
        case 0x1f29b0u: goto label_1f29b0;
        case 0x1f29d0u: goto label_1f29d0;
        case 0x1f29e4u: goto label_1f29e4;
        case 0x1f2a00u: goto label_1f2a00;
        case 0x1f2a0cu: goto label_1f2a0c;
        case 0x1f2a34u: goto label_1f2a34;
        case 0x1f2a54u: goto label_1f2a54;
        case 0x1f2a78u: goto label_1f2a78;
        case 0x1f2a98u: goto label_1f2a98;
        case 0x1f2ab8u: goto label_1f2ab8;
        case 0x1f2ad8u: goto label_1f2ad8;
        case 0x1f2b18u: goto label_1f2b18;
        case 0x1f2b28u: goto label_1f2b28;
        case 0x1f2b44u: goto label_1f2b44;
        case 0x1f2b50u: goto label_1f2b50;
        case 0x1f2b8cu: goto label_1f2b8c;
        case 0x1f2ba8u: goto label_1f2ba8;
        case 0x1f2bbcu: goto label_1f2bbc;
        case 0x1f2bd8u: goto label_1f2bd8;
        case 0x1f2be4u: goto label_1f2be4;
        case 0x1f2c20u: goto label_1f2c20;
        case 0x1f2c3cu: goto label_1f2c3c;
        case 0x1f2c50u: goto label_1f2c50;
        case 0x1f2c6cu: goto label_1f2c6c;
        case 0x1f2c78u: goto label_1f2c78;
        case 0x1f2cb0u: goto label_1f2cb0;
        case 0x1f2cccu: goto label_1f2ccc;
        case 0x1f2ce0u: goto label_1f2ce0;
        case 0x1f2d00u: goto label_1f2d00;
        case 0x1f2d0cu: goto label_1f2d0c;
        case 0x1f2d4cu: goto label_1f2d4c;
        case 0x1f2d68u: goto label_1f2d68;
        case 0x1f2d78u: goto label_1f2d78;
        case 0x1f2d94u: goto label_1f2d94;
        case 0x1f2da0u: goto label_1f2da0;
        case 0x1f2dd8u: goto label_1f2dd8;
        case 0x1f2df4u: goto label_1f2df4;
        case 0x1f2e10u: goto label_1f2e10;
        case 0x1f2e2cu: goto label_1f2e2c;
        case 0x1f2e38u: goto label_1f2e38;
        case 0x1f2e70u: goto label_1f2e70;
        case 0x1f2e8cu: goto label_1f2e8c;
        case 0x1f2ea0u: goto label_1f2ea0;
        case 0x1f2ebcu: goto label_1f2ebc;
        case 0x1f2ec8u: goto label_1f2ec8;
        case 0x1f2f04u: goto label_1f2f04;
        case 0x1f2f20u: goto label_1f2f20;
        case 0x1f2f34u: goto label_1f2f34;
        case 0x1f2f50u: goto label_1f2f50;
        case 0x1f2f60u: goto label_1f2f60;
        case 0x1f2f9cu: goto label_1f2f9c;
        case 0x1f2fb8u: goto label_1f2fb8;
        case 0x1f2fd0u: goto label_1f2fd0;
        case 0x1f2fecu: goto label_1f2fec;
        case 0x1f2ffcu: goto label_1f2ffc;
        case 0x1f3034u: goto label_1f3034;
        case 0x1f3050u: goto label_1f3050;
        case 0x1f3068u: goto label_1f3068;
        case 0x1f3084u: goto label_1f3084;
        case 0x1f3090u: goto label_1f3090;
        case 0x1f30c8u: goto label_1f30c8;
        case 0x1f30e4u: goto label_1f30e4;
        case 0x1f30fcu: goto label_1f30fc;
        case 0x1f3118u: goto label_1f3118;
        case 0x1f3134u: goto label_1f3134;
        case 0x1f3148u: goto label_1f3148;
        case 0x1f3160u: goto label_1f3160;
        case 0x1f3174u: goto label_1f3174;
        case 0x1f3184u: goto label_1f3184;
        case 0x1f31a0u: goto label_1f31a0;
        case 0x1f31bcu: goto label_1f31bc;
        case 0x1f31d0u: goto label_1f31d0;
        case 0x1f31e8u: goto label_1f31e8;
        case 0x1f31fcu: goto label_1f31fc;
        case 0x1f320cu: goto label_1f320c;
        case 0x1f3228u: goto label_1f3228;
        case 0x1f3240u: goto label_1f3240;
        case 0x1f3270u: goto label_1f3270;
        case 0x1f32b4u: goto label_1f32b4;
        case 0x1f32ccu: goto label_1f32cc;
        case 0x1f3308u: goto label_1f3308;
        case 0x1f3320u: goto label_1f3320;
        case 0x1f3360u: goto label_1f3360;
        case 0x1f3374u: goto label_1f3374;
        case 0x1f33b4u: goto label_1f33b4;
        case 0x1f33ccu: goto label_1f33cc;
        case 0x1f33f4u: goto label_1f33f4;
        case 0x1f3400u: goto label_1f3400;
        case 0x1f341cu: goto label_1f341c;
        case 0x1f342cu: goto label_1f342c;
        case 0x1f3454u: goto label_1f3454;
        case 0x1f3468u: goto label_1f3468;
        case 0x1f3488u: goto label_1f3488;
        case 0x1f34b8u: goto label_1f34b8;
        case 0x1f34ccu: goto label_1f34cc;
        case 0x1f34e8u: goto label_1f34e8;
        case 0x1f34f8u: goto label_1f34f8;
        case 0x1f3530u: goto label_1f3530;
        case 0x1f3540u: goto label_1f3540;
        case 0x1f3570u: goto label_1f3570;
        case 0x1f3580u: goto label_1f3580;
        case 0x1f35b0u: goto label_1f35b0;
        case 0x1f35e4u: goto label_1f35e4;
        case 0x1f360cu: goto label_1f360c;
        case 0x1f3638u: goto label_1f3638;
        case 0x1f3664u: goto label_1f3664;
        case 0x1f3690u: goto label_1f3690;
        case 0x1f36b8u: goto label_1f36b8;
        case 0x1f36d4u: goto label_1f36d4;
        case 0x1f36f0u: goto label_1f36f0;
        case 0x1f3700u: goto label_1f3700;
        case 0x1f3720u: goto label_1f3720;
        case 0x1f372cu: goto label_1f372c;
        case 0x1f3748u: goto label_1f3748;
        case 0x1f375cu: goto label_1f375c;
        case 0x1f377cu: goto label_1f377c;
        case 0x1f378cu: goto label_1f378c;
        case 0x1f37acu: goto label_1f37ac;
        case 0x1f37b8u: goto label_1f37b8;
        case 0x1f37d4u: goto label_1f37d4;
        case 0x1f37e8u: goto label_1f37e8;
        case 0x1f3808u: goto label_1f3808;
        case 0x1f3820u: goto label_1f3820;
        case 0x1f3858u: goto label_1f3858;
        case 0x1f3870u: goto label_1f3870;
        default: break;
    }

    ctx->pc = 0x1f0be0u;

    // 0x1f0be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f0be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f0be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f0bec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f0becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0bf0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f0bf4: 0xc064924  jal         func_192490
    ctx->pc = 0x1F0BF4u;
    SET_GPR_U32(ctx, 31, 0x1F0BFCu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1F0BF4u, 0x1F0BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0BFCu;
label_1f0bfc:
    // 0x1f0bfc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1f0c00: 0x24634dc0  addiu       $v1, $v1, 0x4DC0
    ctx->pc = 0x1f0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19904));
    // 0x1f0c04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f0c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c10: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1f0c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f0c14: 0xc0452e0  jal         func_114B80
    ctx->pc = 0x1F0C14u;
    SET_GPR_U32(ctx, 31, 0x1F0C1Cu);
    ctx->pc = 0x114B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B80u, 0x1F0C14u, 0x1F0C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C1Cu;
label_1f0c1c:
    // 0x1f0c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c20: 0x24440104  addiu       $a0, $v0, 0x104
    ctx->pc = 0x1f0c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1f0c24: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1F0C24u;
    SET_GPR_U32(ctx, 31, 0x1F0C2Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1F0C24u, 0x1F0C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C2Cu;
label_1f0c2c:
    // 0x1f0c2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c30: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1f0c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1f0c34: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1F0C34u;
    SET_GPR_U32(ctx, 31, 0x1F0C3Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1F0C34u, 0x1F0C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C3Cu;
label_1f0c3c:
    // 0x1f0c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c40: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x1f0c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x1f0c44: 0xc056254  jal         func_158950
    ctx->pc = 0x1F0C44u;
    SET_GPR_U32(ctx, 31, 0x1F0C4Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F0C44u, 0x1F0C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C4Cu;
label_1f0c4c:
    // 0x1f0c4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c50: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1f0c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1f0c54: 0xc056254  jal         func_158950
    ctx->pc = 0x1F0C54u;
    SET_GPR_U32(ctx, 31, 0x1F0C5Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F0C54u, 0x1F0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C5Cu;
label_1f0c5c:
    // 0x1f0c5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c60: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1f0c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1f0c64: 0xc056254  jal         func_158950
    ctx->pc = 0x1F0C64u;
    SET_GPR_U32(ctx, 31, 0x1F0C6Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F0C64u, 0x1F0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C6Cu;
label_1f0c6c:
    // 0x1f0c6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c70: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1f0c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1f0c74: 0xc056254  jal         func_158950
    ctx->pc = 0x1F0C74u;
    SET_GPR_U32(ctx, 31, 0x1F0C7Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F0C74u, 0x1F0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C7Cu;
label_1f0c7c:
    // 0x1f0c7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c80: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x1f0c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x1f0c84: 0xc056254  jal         func_158950
    ctx->pc = 0x1F0C84u;
    SET_GPR_U32(ctx, 31, 0x1F0C8Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F0C84u, 0x1F0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C8Cu;
label_1f0c8c:
    // 0x1f0c8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0c90: 0x24440244  addiu       $a0, $v0, 0x244
    ctx->pc = 0x1f0c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 580));
    // 0x1f0c94: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1F0C94u;
    SET_GPR_U32(ctx, 31, 0x1F0C9Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1F0C94u, 0x1F0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0C9Cu;
label_1f0c9c:
    // 0x1f0c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0ca0: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x1f0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x1f0ca4: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1F0CA4u;
    SET_GPR_U32(ctx, 31, 0x1F0CACu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1F0CA4u, 0x1F0CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CACu;
label_1f0cac:
    // 0x1f0cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0cb0: 0x2444025c  addiu       $a0, $v0, 0x25C
    ctx->pc = 0x1f0cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 604));
    // 0x1f0cb4: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1F0CB4u;
    SET_GPR_U32(ctx, 31, 0x1F0CBCu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1F0CB4u, 0x1F0CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CBCu;
label_1f0cbc:
    // 0x1f0cbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0cc0: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x1f0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x1f0cc4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1F0CC4u;
    SET_GPR_U32(ctx, 31, 0x1F0CCCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1F0CC4u, 0x1F0CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CCCu;
label_1f0ccc:
    // 0x1f0ccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0cd0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1f0cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1f0cd4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f0cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f0cd8: 0x24a58470  addiu       $a1, $a1, -0x7B90
    ctx->pc = 0x1f0cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935664));
    // 0x1f0cdc: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1f0ce0: 0xc08e514  jal         func_239450
    ctx->pc = 0x1F0CE0u;
    SET_GPR_U32(ctx, 31, 0x1F0CE8u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1F0CE0u, 0x1F0CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0CE8u;
label_1f0ce8:
    // 0x1f0ce8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0cec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0cf0: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1f0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1f0cf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0cfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f0cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f0d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0D08u;
    // 0x1f0d08: 0x0  nop
    ctx->pc = 0x1f0d08u;
    // NOP
    // 0x1f0d0c: 0x0  nop
    ctx->pc = 0x1f0d0cu;
    // NOP
    // 0x1f0d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f0d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f0d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f0d1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1f0d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f0d20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d24: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1F0D24u;
    {
        const bool branch_taken_0x1f0d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d24) {
            ctx->pc = 0x1F0E5Cu;
            goto label_1f0e5c;
        }
    }
    ctx->pc = 0x1F0D2Cu;
    // 0x1f0d2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f0d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1f0d30: 0x24634dc0  addiu       $v1, $v1, 0x4DC0
    ctx->pc = 0x1f0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19904));
    // 0x1f0d34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f0d3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d40: 0x244402fc  addiu       $a0, $v0, 0x2FC
    ctx->pc = 0x1f0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 764));
    // 0x1f0d44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0d48: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1F0D48u;
    SET_GPR_U32(ctx, 31, 0x1F0D50u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1F0D48u, 0x1F0D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D50u;
label_1f0d50:
    // 0x1f0d50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d54: 0x2444025c  addiu       $a0, $v0, 0x25C
    ctx->pc = 0x1f0d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 604));
    // 0x1f0d58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0d5c: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1F0D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D64u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1F0D5Cu, 0x1F0D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D64u;
label_1f0d64:
    // 0x1f0d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d68: 0x24440250  addiu       $a0, $v0, 0x250
    ctx->pc = 0x1f0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
    // 0x1f0d6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0d70: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1F0D70u;
    SET_GPR_U32(ctx, 31, 0x1F0D78u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1F0D70u, 0x1F0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D78u;
label_1f0d78:
    // 0x1f0d78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d7c: 0x24440244  addiu       $a0, $v0, 0x244
    ctx->pc = 0x1f0d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 580));
    // 0x1f0d80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0d84: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1F0D84u;
    SET_GPR_U32(ctx, 31, 0x1F0D8Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1F0D84u, 0x1F0D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D8Cu;
label_1f0d8c:
    // 0x1f0d8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d90: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x1f0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x1f0d94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0d98: 0xc056094  jal         func_158250
    ctx->pc = 0x1F0D98u;
    SET_GPR_U32(ctx, 31, 0x1F0DA0u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F0D98u, 0x1F0DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DA0u;
label_1f0da0:
    // 0x1f0da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0da4: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1f0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1f0da8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0dac: 0xc056094  jal         func_158250
    ctx->pc = 0x1F0DACu;
    SET_GPR_U32(ctx, 31, 0x1F0DB4u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F0DACu, 0x1F0DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DB4u;
label_1f0db4:
    // 0x1f0db4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0db8: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1f0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1f0dbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0dc0: 0xc056094  jal         func_158250
    ctx->pc = 0x1F0DC0u;
    SET_GPR_U32(ctx, 31, 0x1F0DC8u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F0DC0u, 0x1F0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DC8u;
label_1f0dc8:
    // 0x1f0dc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0dcc: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1f0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1f0dd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0dd4: 0xc056094  jal         func_158250
    ctx->pc = 0x1F0DD4u;
    SET_GPR_U32(ctx, 31, 0x1F0DDCu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F0DD4u, 0x1F0DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DDCu;
label_1f0ddc:
    // 0x1f0ddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0de0: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x1f0de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x1f0de4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0de8: 0xc056094  jal         func_158250
    ctx->pc = 0x1F0DE8u;
    SET_GPR_U32(ctx, 31, 0x1F0DF0u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F0DE8u, 0x1F0DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DF0u;
label_1f0df0:
    // 0x1f0df0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0df4: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1f0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1f0df8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0dfc: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1F0DFCu;
    SET_GPR_U32(ctx, 31, 0x1F0E04u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1F0DFCu, 0x1F0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E04u;
label_1f0e04:
    // 0x1f0e04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e08: 0x24440104  addiu       $a0, $v0, 0x104
    ctx->pc = 0x1f0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1f0e0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0e10: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1F0E10u;
    SET_GPR_U32(ctx, 31, 0x1F0E18u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1F0E10u, 0x1F0E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E18u;
label_1f0e18:
    // 0x1f0e18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e1c: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1f0e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f0e20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f0e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0e24: 0xc045280  jal         func_114A00
    ctx->pc = 0x1F0E24u;
    SET_GPR_U32(ctx, 31, 0x1F0E2Cu);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x1F0E24u, 0x1F0E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E2Cu;
label_1f0e2c:
    // 0x1f0e2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f0e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f0e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e34: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1F0E34u;
    SET_GPR_U32(ctx, 31, 0x1F0E3Cu);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1F0E34u, 0x1F0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E3Cu;
label_1f0e3c:
    // 0x1f0e3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1f0e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0e40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f0e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f0e44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f0e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f0e48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0E48u;
    {
        const bool branch_taken_0x1f0e48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f0e48) {
            ctx->pc = 0x1F0E5Cu;
            goto label_1f0e5c;
        }
    }
    ctx->pc = 0x1F0E50u;
    // 0x1f0e50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f0e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1F0E54u;
    SET_GPR_U32(ctx, 31, 0x1F0E5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1F0E54u, 0x1F0E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E5Cu;
label_1f0e5c:
    // 0x1f0e5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0e64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f0e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0e68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0E70u;
    // 0x1f0e70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f0e74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f0e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1f0e78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f0e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1f0e7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f0e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f0e80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f0e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f0e84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f0e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f0e88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f0e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0e90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f0e94: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1f0e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1f0e98: 0xa3a500b0  sb          $a1, 0xB0($sp)
    ctx->pc = 0x1f0e98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f0e9c: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x1f0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x1f0ea0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1f0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0ea4: 0x93a500b0  lbu         $a1, 0xB0($sp)
    ctx->pc = 0x1f0ea4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f0ea8: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x1f0ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f0eac: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1F0EACu;
    SET_GPR_U32(ctx, 31, 0x1F0EB4u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1F0EACu, 0x1F0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EB4u;
label_1f0eb4:
    // 0x1f0eb4: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x1f0eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f0eb8: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1F0EB8u;
    {
        const bool branch_taken_0x1f0eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0eb8) {
            ctx->pc = 0x1F117Cu;
            goto label_1f117c;
        }
    }
    ctx->pc = 0x1F0EC0u;
    // 0x1f0ec0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ec4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F0EC4u;
    {
        const bool branch_taken_0x1f0ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ec4) {
            ctx->pc = 0x1F0F08u;
            goto label_1f0f08;
        }
    }
    ctx->pc = 0x1F0ECCu;
label_1f0ecc:
    // 0x1f0ecc: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1f0eccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0ed0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0ed4: 0x24440104  addiu       $a0, $v0, 0x104
    ctx->pc = 0x1f0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1f0ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0edc: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F0EDCu;
    SET_GPR_U32(ctx, 31, 0x1F0EE4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F0EDCu, 0x1F0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EE4u;
label_1f0ee4:
    // 0x1f0ee4: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1f0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1f0ee8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0eec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0ef0: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1f0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1f0ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ef8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F0EF8u;
    SET_GPR_U32(ctx, 31, 0x1F0F00u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F0EF8u, 0x1F0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F00u;
label_1f0f00:
    // 0x1f0f00: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1f0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1f0f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f0f08:
    // 0x1f0f08: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f0c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1f0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f0f10: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1f0f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f0f14: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F0F14u;
    {
        const bool branch_taken_0x1f0f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f14) {
            ctx->pc = 0x1F0ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0ecc;
        }
    }
    ctx->pc = 0x1F0F1Cu;
    // 0x1f0f1c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f20: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x1f0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x1f0f24: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f28: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1f0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x1f0f2c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f30: 0xa04000f8  sb          $zero, 0xF8($v0)
    ctx->pc = 0x1f0f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0f34: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f38: 0xa04000eb  sb          $zero, 0xEB($v0)
    ctx->pc = 0x1f0f38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 235), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0f3c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f40: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f0f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0f44: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f48: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f0f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f0f4c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f50: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f0f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0f54: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f58: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1f0f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x1f0f5c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f60: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f0f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0f64: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f68: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x1f0f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
    // 0x1f0f6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f70: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f74: 0xe44002c8  swc1        $f0, 0x2C8($v0)
    ctx->pc = 0x1f0f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 712), bits); }
    // 0x1f0f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f7c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f80: 0xe44002cc  swc1        $f0, 0x2CC($v0)
    ctx->pc = 0x1f0f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 716), bits); }
    // 0x1f0f84: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f88: 0xac4002d0  sw          $zero, 0x2D0($v0)
    ctx->pc = 0x1f0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 0));
    // 0x1f0f8c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f90: 0xac4002d4  sw          $zero, 0x2D4($v0)
    ctx->pc = 0x1f0f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 724), GPR_U32(ctx, 0));
    // 0x1f0f94: 0xc78081bc  lwc1        $f0, -0x7E44($gp)
    ctx->pc = 0x1f0f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0f98: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0f9c: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x1f0f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x1f0fa0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fa4: 0xa04000f0  sb          $zero, 0xF0($v0)
    ctx->pc = 0x1f0fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0fa8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fac: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f0facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0fb0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fb4: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x1f0fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x1f0fb8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fbc: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x1f0fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0fc0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fc4: 0xa0400101  sb          $zero, 0x101($v0)
    ctx->pc = 0x1f0fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0fc8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fcc: 0xa0400280  sb          $zero, 0x280($v0)
    ctx->pc = 0x1f0fccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0fd0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fd4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f0fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0fd8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fdc: 0xe4400284  swc1        $f0, 0x284($v0)
    ctx->pc = 0x1f0fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 644), bits); }
    // 0x1f0fe0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fe4: 0xa040028c  sb          $zero, 0x28C($v0)
    ctx->pc = 0x1f0fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 652), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0fe8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0fec: 0xa04002d8  sb          $zero, 0x2D8($v0)
    ctx->pc = 0x1f0fecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 728), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0ff0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0ff4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f0ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0ff8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f0ffc: 0xe44002ec  swc1        $f0, 0x2EC($v0)
    ctx->pc = 0x1f0ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 748), bits); }
    // 0x1f1000: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f1000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1004: 0xac4002dc  sw          $zero, 0x2DC($v0)
    ctx->pc = 0x1f1004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 732), GPR_U32(ctx, 0));
    // 0x1f1008: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f1008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f100c: 0xac4002e0  sw          $zero, 0x2E0($v0)
    ctx->pc = 0x1f100cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 0));
    // 0x1f1010: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f1010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1014: 0xac4002e4  sw          $zero, 0x2E4($v0)
    ctx->pc = 0x1f1014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 740), GPR_U32(ctx, 0));
    // 0x1f1018: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f1018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f101c: 0xac4002e8  sw          $zero, 0x2E8($v0)
    ctx->pc = 0x1f101cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 0));
    // 0x1f1020: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1f1020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1024: 0xc07e0cc  jal         func_1F8330
    ctx->pc = 0x1F1024u;
    SET_GPR_U32(ctx, 31, 0x1F102Cu);
    ctx->pc = 0x1F8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8330u, 0x1F1024u, 0x1F102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F102Cu;
label_1f102c:
    // 0x1f102c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1030: 0x8c44026c  lw          $a0, 0x26C($v0)
    ctx->pc = 0x1f1030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x1f1034: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f1034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f1038: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1F1038u;
    SET_GPR_U32(ctx, 31, 0x1F1040u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F1038u, 0x1F1040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1040u;
label_1f1040:
    // 0x1f1040: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f1040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1044: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F1044u;
    {
        const bool branch_taken_0x1f1044 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1044) {
            ctx->pc = 0x1F1098u;
            goto label_1f1098;
        }
    }
    ctx->pc = 0x1F104Cu;
    // 0x1f104c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1050: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x1F1050u;
    SET_GPR_U32(ctx, 31, 0x1F1058u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x1F1050u, 0x1F1058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1058u;
label_1f1058:
    // 0x1f1058: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1058u;
    {
        const bool branch_taken_0x1f1058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1058) {
            ctx->pc = 0x1F1098u;
            goto label_1f1098;
        }
    }
    ctx->pc = 0x1F1060u;
    // 0x1f1060: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1064: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x1f1064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1f1068: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f1068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f106c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1F106Cu;
    SET_GPR_U32(ctx, 31, 0x1F1074u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F106Cu, 0x1F1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1074u;
label_1f1074:
    // 0x1f1074: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f1074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f107c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1080: 0xc096888  jal         func_25A220
    ctx->pc = 0x1F1080u;
    SET_GPR_U32(ctx, 31, 0x1F1088u);
    ctx->pc = 0x25A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A220u, 0x1F1080u, 0x1F1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1088u;
label_1f1088:
    // 0x1f1088: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f1088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f108c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f108cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1090: 0xc096888  jal         func_25A220
    ctx->pc = 0x1F1090u;
    SET_GPR_U32(ctx, 31, 0x1F1098u);
    ctx->pc = 0x25A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A220u, 0x1F1090u, 0x1F1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1098u;
label_1f1098:
    // 0x1f1098: 0xc090864  jal         func_242190
    ctx->pc = 0x1F1098u;
    SET_GPR_U32(ctx, 31, 0x1F10A0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1F1098u, 0x1F10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10A0u;
label_1f10a0:
    // 0x1f10a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f10a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10a4: 0xc0905a0  jal         func_241680
    ctx->pc = 0x1F10A4u;
    SET_GPR_U32(ctx, 31, 0x1F10ACu);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x1F10A4u, 0x1F10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10ACu;
label_1f10ac:
    // 0x1f10ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f10acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f10b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f10b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f10b8: 0x24a58480  addiu       $a1, $a1, -0x7B80
    ctx->pc = 0x1f10b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935680));
    // 0x1f10bc: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1F10BCu;
    SET_GPR_U32(ctx, 31, 0x1F10C4u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1F10BCu, 0x1F10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10C4u;
label_1f10c4:
    // 0x1f10c4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1f10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f10c8: 0xac620274  sw          $v0, 0x274($v1)
    ctx->pc = 0x1f10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 628), GPR_U32(ctx, 2));
    // 0x1f10cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f10ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f10d0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f10d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f10d4: 0x24a58490  addiu       $a1, $a1, -0x7B70
    ctx->pc = 0x1f10d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935696));
    // 0x1f10d8: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1F10D8u;
    SET_GPR_U32(ctx, 31, 0x1F10E0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1F10D8u, 0x1F10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10E0u;
label_1f10e0:
    // 0x1f10e0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1f10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f10e4: 0xac620278  sw          $v0, 0x278($v1)
    ctx->pc = 0x1f10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 2));
    // 0x1f10e8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f10e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f10ec: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x1F10ECu;
    SET_GPR_U32(ctx, 31, 0x1F10F4u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1F10ECu, 0x1F10F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10F4u;
label_1f10f4:
    // 0x1f10f4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f10f8: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x1f10fc: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1f10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x1f1100: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f1100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1104: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x1f1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1f1108: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1f1108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1f110c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1110: 0x8c44026c  lw          $a0, 0x26C($v0)
    ctx->pc = 0x1f1110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x1f1114: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1f1114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f1118: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f111c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f111cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1120: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x1F1120u;
    SET_GPR_U32(ctx, 31, 0x1F1128u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1F1120u, 0x1F1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1128u;
label_1f1128:
    // 0x1f1128: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f1128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f112c: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x1F112Cu;
    SET_GPR_U32(ctx, 31, 0x1F1134u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1F112Cu, 0x1F1134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1134u;
label_1f1134:
    // 0x1f1134: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f1134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1138: 0x8c420278  lw          $v0, 0x278($v0)
    ctx->pc = 0x1f1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x1f113c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1f113cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1f1140: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f1140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1144: 0x8c42026c  lw          $v0, 0x26C($v0)
    ctx->pc = 0x1f1144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x1f1148: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1f1148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1f114c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1150: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x1f1150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1f1154: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1f1154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f1158: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f1158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f115c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f115cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1160: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x1F1160u;
    SET_GPR_U32(ctx, 31, 0x1F1168u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1F1160u, 0x1F1168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1168u;
label_1f1168:
    // 0x1f1168: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f116c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1f116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1170: 0xa06402f8  sb          $a0, 0x2F8($v1)
    ctx->pc = 0x1f1170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 760), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f1174: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1F1174u;
    {
        const bool branch_taken_0x1f1174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1174) {
            ctx->pc = 0x1F11F0u;
            goto label_1f11f0;
        }
    }
    ctx->pc = 0x1F117Cu;
label_1f117c:
    // 0x1f117c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f1180: 0x8c44026c  lw          $a0, 0x26C($v0)
    ctx->pc = 0x1f1180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x1f1184: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f1184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f1188: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1F1188u;
    SET_GPR_U32(ctx, 31, 0x1F1190u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F1188u, 0x1F1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1190u;
label_1f1190:
    // 0x1f1190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f1190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1194: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F1194u;
    {
        const bool branch_taken_0x1f1194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1194) {
            ctx->pc = 0x1F11F0u;
            goto label_1f11f0;
        }
    }
    ctx->pc = 0x1F119Cu;
    // 0x1f119c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11a0: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x1F11A0u;
    SET_GPR_U32(ctx, 31, 0x1F11A8u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x1F11A0u, 0x1F11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11A8u;
label_1f11a8:
    // 0x1f11a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F11A8u;
    {
        const bool branch_taken_0x1f11a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f11a8) {
            ctx->pc = 0x1F11F0u;
            goto label_1f11f0;
        }
    }
    ctx->pc = 0x1F11B0u;
    // 0x1f11b0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f11b4: 0x8c440270  lw          $a0, 0x270($v0)
    ctx->pc = 0x1f11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1f11b8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f11b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f11bc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1F11BCu;
    SET_GPR_U32(ctx, 31, 0x1F11C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F11BCu, 0x1F11C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11C4u;
label_1f11c4:
    // 0x1f11c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f11c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f11cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f11ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11d0: 0x8c450270  lw          $a1, 0x270($v0)
    ctx->pc = 0x1f11d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1f11d4: 0xc096888  jal         func_25A220
    ctx->pc = 0x1F11D4u;
    SET_GPR_U32(ctx, 31, 0x1F11DCu);
    ctx->pc = 0x25A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A220u, 0x1F11D4u, 0x1F11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11DCu;
label_1f11dc:
    // 0x1f11dc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f11e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f11e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f11e4: 0x8c45026c  lw          $a1, 0x26C($v0)
    ctx->pc = 0x1f11e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x1f11e8: 0xc096888  jal         func_25A220
    ctx->pc = 0x1F11E8u;
    SET_GPR_U32(ctx, 31, 0x1F11F0u);
    ctx->pc = 0x25A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A220u, 0x1F11E8u, 0x1F11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F11F0u;
label_1f11f0:
    // 0x1f11f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f11f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f11f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f11f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f11f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f11f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f11fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f11fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f1200: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f1200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f120c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f120cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1210: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1f1210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f1214: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F121Cu;
    // 0x1f121c: 0x0  nop
    ctx->pc = 0x1f121cu;
    // NOP
    // 0x1f1220: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x1f1220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x1f1224: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f1224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f1228: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1f1228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1f122c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1f122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1f1230: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1f1230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1f1234: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1f1234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1f1238: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f1238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1f123c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f1240: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f1240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f1244: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f1244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f1248: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f1248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f124c: 0xafa40320  sw          $a0, 0x320($sp)
    ctx->pc = 0x1f124cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 4));
    // 0x1f1250: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f1250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1254: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x1F1254u;
    SET_GPR_U32(ctx, 31, 0x1F125Cu);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1F1254u, 0x1F125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F125Cu;
label_1f125c:
    // 0x1f125c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F125Cu;
    {
        const bool branch_taken_0x1f125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f125c) {
            ctx->pc = 0x1F1270u;
            goto label_1f1270;
        }
    }
    ctx->pc = 0x1F1264u;
    // 0x1f1264: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f1264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1268: 0x10000982  b           . + 4 + (0x982 << 2)
    ctx->pc = 0x1F1268u;
    {
        const bool branch_taken_0x1f1268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1268) {
            ctx->pc = 0x1F3874u;
            goto label_1f3874;
        }
    }
    ctx->pc = 0x1F1270u;
label_1f1270:
    // 0x1f1270: 0x3c0741f0  lui         $a3, 0x41F0
    ctx->pc = 0x1f1270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16880 << 16));
    // 0x1f1274: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1f1274u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1278: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f127c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1280: 0xc064de4  jal         func_193790
    ctx->pc = 0x1F1280u;
    SET_GPR_U32(ctx, 31, 0x1F1288u);
    ctx->pc = 0x193790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193790u, 0x1F1280u, 0x1F1288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1288u;
label_1f1288:
    // 0x1f1288: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f1288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f128c: 0xa0c002f8  sb          $zero, 0x2F8($a2)
    ctx->pc = 0x1f128cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 760), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1290: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f1294: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1298: 0xad0200a4  sw          $v0, 0xA4($t0)
    ctx->pc = 0x1f1298u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 2));
    // 0x1f129c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f12a0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f12a4: 0xac45022c  sw          $a1, 0x22C($v0)
    ctx->pc = 0x1f12a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 556), GPR_U32(ctx, 5));
    // 0x1f12a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f12ac: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f12acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f12b0: 0xaca40230  sw          $a0, 0x230($a1)
    ctx->pc = 0x1f12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 560), GPR_U32(ctx, 4));
    // 0x1f12b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f12b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f12b8: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x1f12b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x1f12bc: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f12bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f12c0: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x1f12c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1f12c4: 0xac620234  sw          $v0, 0x234($v1)
    ctx->pc = 0x1f12c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 2));
    // 0x1f12c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f12cc: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f12ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f12d0: 0xac820238  sw          $v0, 0x238($a0)
    ctx->pc = 0x1f12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 568), GPR_U32(ctx, 2));
    // 0x1f12d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f12d8: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f12d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f12dc: 0xace2023c  sw          $v0, 0x23C($a3)
    ctx->pc = 0x1f12dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 572), GPR_U32(ctx, 2));
    // 0x1f12e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f12e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f12e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f12e8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f12ec: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x1f12ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x1f12f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f12f4: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f12f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f12f8: 0xa10200b4  sb          $v0, 0xB4($t0)
    ctx->pc = 0x1f12f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 180), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f12fc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1300: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x1f1300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x1f1304: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x1f1304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1f1308: 0xa04000eb  sb          $zero, 0xEB($v0)
    ctx->pc = 0x1f1308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 235), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f130c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f130cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1310: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1314: 0xaca200b8  sw          $v0, 0xB8($a1)
    ctx->pc = 0x1f1314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
    // 0x1f1318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f131c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f131cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1320: 0xac8200d0  sw          $v0, 0xD0($a0)
    ctx->pc = 0x1f1320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 2));
    // 0x1f1324: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f1324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f1328: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1f1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1f132c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f132cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1330: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x1f1330u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1f1334: 0xaca200c0  sw          $v0, 0xC0($a1)
    ctx->pc = 0x1f1334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 2));
    // 0x1f1338: 0x3c054040  lui         $a1, 0x4040
    ctx->pc = 0x1f1338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16448 << 16));
    // 0x1f133c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f133cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1340: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1344: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x1f1344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x1f1348: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x1f1348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x1f134c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f134cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1350: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f1350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1354: 0xe4e000c8  swc1        $f0, 0xC8($a3)
    ctx->pc = 0x1f1354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 200), bits); }
    // 0x1f1358: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f1358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1f135c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f135cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1360: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1364: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x1f1364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x1f1368: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f1368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f136c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f136cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1370: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1370u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1374: 0xe5000288  swc1        $f0, 0x288($t0)
    ctx->pc = 0x1f1374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 648), bits); }
    // 0x1f1378: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x1f1378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f137c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1380: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1f1380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1f1384: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1f1384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1f1388: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x1f1388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x1f138c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f138cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1390: 0xa0a000f9  sb          $zero, 0xF9($a1)
    ctx->pc = 0x1f1390u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 249), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1394: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1398: 0xa0a000f8  sb          $zero, 0xF8($a1)
    ctx->pc = 0x1f1398u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f139c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f13a0: 0xa0400101  sb          $zero, 0x101($v0)
    ctx->pc = 0x1f13a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 257), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f13a4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f13a8: 0xa0800100  sb          $zero, 0x100($a0)
    ctx->pc = 0x1f13a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f13ac: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f13acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f13b0: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f13b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1f13b4: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f13b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1f13b8: 0xa040028c  sb          $zero, 0x28C($v0)
    ctx->pc = 0x1f13b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 652), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f13bc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f13bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f13c0: 0xa0a00280  sb          $zero, 0x280($a1)
    ctx->pc = 0x1f13c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f13c4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f13c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f13c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f13c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13cc: 0xc07e0cc  jal         func_1F8330
    ctx->pc = 0x1F13CCu;
    SET_GPR_U32(ctx, 31, 0x1F13D4u);
    ctx->pc = 0x1F8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8330u, 0x1F13CCu, 0x1F13D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13D4u;
label_1f13d4:
    // 0x1f13d4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f13d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f13d8: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x1f13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1f13dc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f13e0: 0xaca300c0  sw          $v1, 0xC0($a1)
    ctx->pc = 0x1f13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 3));
    // 0x1f13e4: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f13e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f13e8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f13ec: 0x24c80104  addiu       $t0, $a2, 0x104
    ctx->pc = 0x1f13ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 260));
    // 0x1f13f0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f13f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f13f4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1f13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f13f8: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1f13f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1f13fc: 0x7ba501e0  lq          $a1, 0x1E0($sp)
    ctx->pc = 0x1f13fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1f1400: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x1F1400u;
    SET_GPR_U32(ctx, 31, 0x1F1408u);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x1F1400u, 0x1F1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1408u;
label_1f1408:
    // 0x1f1408: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f140c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1410: 0x24a40110  addiu       $a0, $a1, 0x110
    ctx->pc = 0x1f1410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1f1414: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1f1414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1f1418: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1f1418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1f141c: 0x7ba501d0  lq          $a1, 0x1D0($sp)
    ctx->pc = 0x1f141cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1f1420: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x1F1420u;
    SET_GPR_U32(ctx, 31, 0x1F1428u);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x1F1420u, 0x1F1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1428u;
label_1f1428:
    // 0x1f1428: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f1428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f142c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F142Cu;
    {
        const bool branch_taken_0x1f142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f142c) {
            ctx->pc = 0x1F1488u;
            goto label_1f1488;
        }
    }
    ctx->pc = 0x1F1434u;
label_1f1434:
    // 0x1f1434: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1438: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1f1438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1f143c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1440: 0x24450104  addiu       $a1, $v0, 0x104
    ctx->pc = 0x1f1440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 260));
    // 0x1f1444: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1448: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f1448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f144c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F144Cu;
    SET_GPR_U32(ctx, 31, 0x1F1454u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F144Cu, 0x1F1454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1454u;
label_1f1454:
    // 0x1f1454: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x1f1454u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1f1458: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f1458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f145c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1460: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1f1460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1f1464: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f1464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1468: 0x24c70110  addiu       $a3, $a2, 0x110
    ctx->pc = 0x1f1468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x1f146c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f146cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1470: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f1470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1474: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F1474u;
    SET_GPR_U32(ctx, 31, 0x1F147Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F1474u, 0x1F147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F147Cu;
label_1f147c:
    // 0x1f147c: 0x7ba301b0  lq          $v1, 0x1B0($sp)
    ctx->pc = 0x1f147cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f1480: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f1480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f1484: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f1484u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f1488:
    // 0x1f1488: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f148c: 0x8ca500c0  lw          $a1, 0xC0($a1)
    ctx->pc = 0x1f148cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x1f1490: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x1f1490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f1494: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1F1494u;
    {
        const bool branch_taken_0x1f1494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1494) {
            ctx->pc = 0x1F1434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1434;
        }
    }
    ctx->pc = 0x1F149Cu;
    // 0x1f149c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f149cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14a0: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x1f14a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x1f14a4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f14a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14a8: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f14a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1f14ac: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f14acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f14b0: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x1f14b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x1f14b4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f14b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14b8: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x1f14b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f14bc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14c0: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x1f14c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
    // 0x1f14c4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14c8: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f14c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f14cc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f14ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14d0: 0xe4a000d8  swc1        $f0, 0xD8($a1)
    ctx->pc = 0x1f14d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 216), bits); }
    // 0x1f14d4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14d8: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f14d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f14dc: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f14dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14e0: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1f14e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1f14e4: 0x3c0641a0  lui         $a2, 0x41A0
    ctx->pc = 0x1f14e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16800 << 16));
    // 0x1f14e8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f14e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14ec: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f14f0: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x1f14f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x1f14f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f14f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f14f8: 0x27a802b0  addiu       $t0, $sp, 0x2B0
    ctx->pc = 0x1f14f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1f14fc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f14fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1500: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x1F1500u;
    SET_GPR_U32(ctx, 31, 0x1F1508u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x1F1500u, 0x1F1508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1508u;
label_1f1508:
    // 0x1f1508: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1f1508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1f150c: 0x8f85bb70  lw          $a1, -0x4490($gp)
    ctx->pc = 0x1f150cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1f1510: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x1f1510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1f1514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1518: 0x24a50054  addiu       $a1, $a1, 0x54
    ctx->pc = 0x1f1518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 84));
    // 0x1f151c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f151cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1520: 0xc061bf0  jal         func_186FC0
    ctx->pc = 0x1F1520u;
    SET_GPR_U32(ctx, 31, 0x1F1528u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x1F1520u, 0x1F1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1528u;
label_1f1528:
    // 0x1f1528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f1528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f152c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1F152Cu;
    {
        const bool branch_taken_0x1f152c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f152c) {
            ctx->pc = 0x1F1854u;
            goto label_1f1854;
        }
    }
    ctx->pc = 0x1F1534u;
label_1f1534:
    // 0x1f1534: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x1f1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1f1538: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1f1538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1f153c: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x1f153cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f1540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f1540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1544: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x1F1544u;
    SET_GPR_U32(ctx, 31, 0x1F154Cu);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x1F1544u, 0x1F154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F154Cu;
label_1f154c:
    // 0x1f154c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f154cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1550: 0x27a30310  addiu       $v1, $sp, 0x310
    ctx->pc = 0x1f1550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f1554: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1558: 0xc042844  jal         func_10A110
    ctx->pc = 0x1F1558u;
    SET_GPR_U32(ctx, 31, 0x1F1560u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x1F1558u, 0x1F1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1560u;
label_1f1560:
    // 0x1f1560: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x1f1560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f1564: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1568: 0xc11931c  jal         func_464C70
    ctx->pc = 0x1F1568u;
    SET_GPR_U32(ctx, 31, 0x1F1570u);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x1F1568u, 0x1F1570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1570u;
label_1f1570:
    // 0x1f1570: 0x27a30310  addiu       $v1, $sp, 0x310
    ctx->pc = 0x1f1570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f1574: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1578: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F1578u;
    SET_GPR_U32(ctx, 31, 0x1F1580u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F1578u, 0x1F1580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1580u;
label_1f1580:
    // 0x1f1580: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1584: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f1584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1588: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f1588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f158c: 0x244284a0  addiu       $v0, $v0, -0x7B60
    ctx->pc = 0x1f158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935712));
    // 0x1f1590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1594: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x1f1594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f1598: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1f1598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f159c: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x1F159Cu;
    SET_GPR_U32(ctx, 31, 0x1F15A4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1F159Cu, 0x1F15A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15A4u;
label_1f15a4:
    // 0x1f15a4: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1f15a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1f15a8: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x1f15a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f15ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F15ACu;
    {
        const bool branch_taken_0x1f15ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f15ac) {
            ctx->pc = 0x1F15F8u;
            goto label_1f15f8;
        }
    }
    ctx->pc = 0x1F15B4u;
    // 0x1f15b4: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x1f15b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f15b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f15b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f15bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f15bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f15c0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f15c4: 0xc047848  jal         func_11E120
    ctx->pc = 0x1F15C4u;
    SET_GPR_U32(ctx, 31, 0x1F15CCu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1F15C4u, 0x1F15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15CCu;
label_1f15cc:
    // 0x1f15cc: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1f15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f15d0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F15D0u;
    SET_GPR_U32(ctx, 31, 0x1F15D8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F15D0u, 0x1F15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15D8u;
label_1f15d8:
    // 0x1f15d8: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1f15d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1f15dc: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x1f15dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f15e0: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1F15E0u;
    SET_GPR_U32(ctx, 31, 0x1F15E8u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1F15E0u, 0x1F15E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15E8u;
label_1f15e8:
    // 0x1f15e8: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f15ec: 0xaca200c0  sw          $v0, 0xC0($a1)
    ctx->pc = 0x1f15ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 192), GPR_U32(ctx, 2));
    // 0x1f15f0: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1F15F0u;
    {
        const bool branch_taken_0x1f15f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f15f0) {
            ctx->pc = 0x1F1830u;
            goto label_1f1830;
        }
    }
    ctx->pc = 0x1F15F8u;
label_1f15f8:
    // 0x1f15f8: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1f15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f15fc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F15FCu;
    SET_GPR_U32(ctx, 31, 0x1F1604u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F15FCu, 0x1F1604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1604u;
label_1f1604:
    // 0x1f1604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1608: 0x278798d0  addiu       $a3, $gp, -0x6730
    ctx->pc = 0x1f1608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940880));
    // 0x1f160c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f160cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1610: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1f1610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f1614: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f1614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1618: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x1F1618u;
    SET_GPR_U32(ctx, 31, 0x1F1620u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1F1618u, 0x1F1620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1620u;
label_1f1620:
    // 0x1f1620: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1620u;
    {
        const bool branch_taken_0x1f1620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1620) {
            ctx->pc = 0x1F1680u;
            goto label_1f1680;
        }
    }
    ctx->pc = 0x1F1628u;
    // 0x1f1628: 0x27a20310  addiu       $v0, $sp, 0x310
    ctx->pc = 0x1f1628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f162c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1634: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1f1634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f1638: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1f1638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f163c: 0xc047848  jal         func_11E120
    ctx->pc = 0x1F163Cu;
    SET_GPR_U32(ctx, 31, 0x1F1644u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1F163Cu, 0x1F1644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1644u;
label_1f1644:
    // 0x1f1644: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1f1644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1f1648: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x1f1648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f164c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1650: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F1650u;
    SET_GPR_U32(ctx, 31, 0x1F1658u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F1650u, 0x1F1658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1658u;
label_1f1658:
    // 0x1f1658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f165c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1F165Cu;
    SET_GPR_U32(ctx, 31, 0x1F1664u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1F165Cu, 0x1F1664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1664u;
label_1f1664:
    // 0x1f1664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1668: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1F1668u;
    SET_GPR_U32(ctx, 31, 0x1F1670u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1F1668u, 0x1F1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1670u;
label_1f1670:
    // 0x1f1670: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f1670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1674: 0xe48002f4  swc1        $f0, 0x2F4($a0)
    ctx->pc = 0x1f1674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 756), bits); }
    // 0x1f1678: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1F1678u;
    {
        const bool branch_taken_0x1f1678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1678) {
            ctx->pc = 0x1F1830u;
            goto label_1f1830;
        }
    }
    ctx->pc = 0x1F1680u;
label_1f1680:
    // 0x1f1680: 0x27a20310  addiu       $v0, $sp, 0x310
    ctx->pc = 0x1f1680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f1684: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1f1684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1f1688: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1f1688u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f168c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F168Cu;
    SET_GPR_U32(ctx, 31, 0x1F1694u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F168Cu, 0x1F1694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1694u;
label_1f1694:
    // 0x1f1694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1698: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f169c: 0x24a584b0  addiu       $a1, $a1, -0x7B50
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935728));
    // 0x1f16a0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1f16a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f16a4: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x1F16A4u;
    SET_GPR_U32(ctx, 31, 0x1F16ACu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1F16A4u, 0x1F16ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16ACu;
label_1f16ac:
    // 0x1f16ac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F16ACu;
    {
        const bool branch_taken_0x1f16ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f16ac) {
            ctx->pc = 0x1F170Cu;
            goto label_1f170c;
        }
    }
    ctx->pc = 0x1F16B4u;
    // 0x1f16b4: 0x27a70310  addiu       $a3, $sp, 0x310
    ctx->pc = 0x1f16b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f16b8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f16b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f16bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16c0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f16c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f16c4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f16c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16c8: 0xc047848  jal         func_11E120
    ctx->pc = 0x1F16C8u;
    SET_GPR_U32(ctx, 31, 0x1F16D0u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1F16C8u, 0x1F16D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16D0u;
label_1f16d0:
    // 0x1f16d0: 0x27a70310  addiu       $a3, $sp, 0x310
    ctx->pc = 0x1f16d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f16d4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f16d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16d8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F16D8u;
    SET_GPR_U32(ctx, 31, 0x1F16E0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F16D8u, 0x1F16E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16E0u;
label_1f16e0:
    // 0x1f16e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f16e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16e4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1F16E4u;
    SET_GPR_U32(ctx, 31, 0x1F16ECu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1F16E4u, 0x1F16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16ECu;
label_1f16ec:
    // 0x1f16ec: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1f16ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1f16f0: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x1f16f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f16f4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1F16F4u;
    SET_GPR_U32(ctx, 31, 0x1F16FCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1F16F4u, 0x1F16FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16FCu;
label_1f16fc:
    // 0x1f16fc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f16fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1700: 0xe4a000c4  swc1        $f0, 0xC4($a1)
    ctx->pc = 0x1f1700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 196), bits); }
    // 0x1f1704: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1F1704u;
    {
        const bool branch_taken_0x1f1704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1704) {
            ctx->pc = 0x1F1830u;
            goto label_1f1830;
        }
    }
    ctx->pc = 0x1F170Cu;
label_1f170c:
    // 0x1f170c: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x1f170cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f1710: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1714: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F1714u;
    SET_GPR_U32(ctx, 31, 0x1F171Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F1714u, 0x1F171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F171Cu;
label_1f171c:
    // 0x1f171c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1720: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1724: 0x24a584c0  addiu       $a1, $a1, -0x7B40
    ctx->pc = 0x1f1724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935744));
    // 0x1f1728: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1f1728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f172c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1f172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1f1730: 0x7ba60120  lq          $a2, 0x120($sp)
    ctx->pc = 0x1f1730u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f1734: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x1F1734u;
    SET_GPR_U32(ctx, 31, 0x1F173Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1F1734u, 0x1F173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F173Cu;
label_1f173c:
    // 0x1f173c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F173Cu;
    {
        const bool branch_taken_0x1f173c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f173c) {
            ctx->pc = 0x1F179Cu;
            goto label_1f179c;
        }
    }
    ctx->pc = 0x1F1744u;
    // 0x1f1744: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x1f1744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f1748: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f174c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1750: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1f1750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f1754: 0xc047848  jal         func_11E120
    ctx->pc = 0x1F1754u;
    SET_GPR_U32(ctx, 31, 0x1F175Cu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1F1754u, 0x1F175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F175Cu;
label_1f175c:
    // 0x1f175c: 0x27a70310  addiu       $a3, $sp, 0x310
    ctx->pc = 0x1f175cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f1760: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f1760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1764: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F1764u;
    SET_GPR_U32(ctx, 31, 0x1F176Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F1764u, 0x1F176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F176Cu;
label_1f176c:
    // 0x1f176c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f176cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1770: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1774: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1F1774u;
    SET_GPR_U32(ctx, 31, 0x1F177Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1F1774u, 0x1F177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F177Cu;
label_1f177c:
    // 0x1f177c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f177cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1780: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f1780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1784: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1F1784u;
    SET_GPR_U32(ctx, 31, 0x1F178Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1F1784u, 0x1F178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F178Cu;
label_1f178c:
    // 0x1f178c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1790: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x1f1790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x1f1794: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1F1794u;
    {
        const bool branch_taken_0x1f1794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1794) {
            ctx->pc = 0x1F1830u;
            goto label_1f1830;
        }
    }
    ctx->pc = 0x1F179Cu;
label_1f179c:
    // 0x1f179c: 0x27a80310  addiu       $t0, $sp, 0x310
    ctx->pc = 0x1f179cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f17a0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f17a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17a4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F17A4u;
    SET_GPR_U32(ctx, 31, 0x1F17ACu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F17A4u, 0x1F17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17ACu;
label_1f17ac:
    // 0x1f17ac: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1f17acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1f17b0: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x1f17b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f17b4: 0x278598d8  addiu       $a1, $gp, -0x6728
    ctx->pc = 0x1f17b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940888));
    // 0x1f17b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f17b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f17bc: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x1F17BCu;
    SET_GPR_U32(ctx, 31, 0x1F17C4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1F17BCu, 0x1F17C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17C4u;
label_1f17c4:
    // 0x1f17c4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F17C4u;
    {
        const bool branch_taken_0x1f17c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f17c4) {
            ctx->pc = 0x1F1830u;
            goto label_1f1830;
        }
    }
    ctx->pc = 0x1F17CCu;
    // 0x1f17cc: 0x27a30310  addiu       $v1, $sp, 0x310
    ctx->pc = 0x1f17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f17d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f17d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f17d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f17dc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1f17dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1f17e0: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x1f17e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f17e4: 0xc047848  jal         func_11E120
    ctx->pc = 0x1F17E4u;
    SET_GPR_U32(ctx, 31, 0x1F17ECu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1F17E4u, 0x1F17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17ECu;
label_1f17ec:
    // 0x1f17ec: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x1f17ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f17f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f17f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f17f4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F17F4u;
    SET_GPR_U32(ctx, 31, 0x1F17FCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F17F4u, 0x1F17FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F17FCu;
label_1f17fc:
    // 0x1f17fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f17fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1800: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1F1800u;
    SET_GPR_U32(ctx, 31, 0x1F1808u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1F1800u, 0x1F1808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1808u;
label_1f1808:
    // 0x1f1808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f180c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F180Cu;
    {
        const bool branch_taken_0x1f180c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f180c) {
            ctx->pc = 0x1F1824u;
            goto label_1f1824;
        }
    }
    ctx->pc = 0x1F1814u;
    // 0x1f1814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1818: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x1f1818u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f181c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F181Cu;
    {
        const bool branch_taken_0x1f181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f181c) {
            ctx->pc = 0x1F1828u;
            goto label_1f1828;
        }
    }
    ctx->pc = 0x1F1824u;
label_1f1824:
    // 0x1f1824: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f1824u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1828:
    // 0x1f1828: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f1828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f182c: 0xa0d600b4  sb          $s6, 0xB4($a2)
    ctx->pc = 0x1f182cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 180), (uint8_t)GPR_U32(ctx, 22));
label_1f1830:
    // 0x1f1830: 0x27a20310  addiu       $v0, $sp, 0x310
    ctx->pc = 0x1f1830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1f1834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1838: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f183c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1f183cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1840: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1F1840u;
    SET_GPR_U32(ctx, 31, 0x1F1848u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1F1840u, 0x1F1848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1848u;
label_1f1848:
    // 0x1f1848: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1f1848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1f184c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1f184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f1850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1854:
    // 0x1f1854: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1f1854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1f1858: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f185c: 0xc043104  jal         func_10C410
    ctx->pc = 0x1F185Cu;
    SET_GPR_U32(ctx, 31, 0x1F1864u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x1F185Cu, 0x1F1864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1864u;
label_1f1864:
    // 0x1f1864: 0x202302b  sltu        $a2, $s0, $v0
    ctx->pc = 0x1f1864u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f1868: 0x14c0ff32  bnez        $a2, . + 4 + (-0xCE << 2)
    ctx->pc = 0x1F1868u;
    {
        const bool branch_taken_0x1f1868 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1868) {
            ctx->pc = 0x1F1534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1534;
        }
    }
    ctx->pc = 0x1F1870u;
    // 0x1f1870: 0x27a20300  addiu       $v0, $sp, 0x300
    ctx->pc = 0x1f1870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1f1874: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1f1874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1f1878: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x1f1878u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f187c: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1F187Cu;
    SET_GPR_U32(ctx, 31, 0x1F1884u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1F187Cu, 0x1F1884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1884u;
label_1f1884:
    // 0x1f1884: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1f1888: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f1888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f188c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f188cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f1890: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x1F1890u;
    SET_GPR_U32(ctx, 31, 0x1F1898u);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x1F1890u, 0x1F1898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1898u;
label_1f1898:
    // 0x1f1898: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f1898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f189c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F189Cu;
    {
        const bool branch_taken_0x1f189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f189c) {
            ctx->pc = 0x1F18C0u;
            goto label_1f18c0;
        }
    }
    ctx->pc = 0x1F18A4u;
label_1f18a4:
    // 0x1f18a4: 0x27a30300  addiu       $v1, $sp, 0x300
    ctx->pc = 0x1f18a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1f18a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f18a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f18acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18b0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F18B0u;
    SET_GPR_U32(ctx, 31, 0x1F18B8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F18B0u, 0x1F18B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18B8u;
label_1f18b8:
    // 0x1f18b8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1f18b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1f18bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f18bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f18c0:
    // 0x1f18c0: 0x2e420014  sltiu       $v0, $s2, 0x14
    ctx->pc = 0x1f18c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f18c4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F18C4u;
    {
        const bool branch_taken_0x1f18c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f18c4) {
            ctx->pc = 0x1F18A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f18a4;
        }
    }
    ctx->pc = 0x1F18CCu;
    // 0x1f18cc: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f18ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f18d0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f18d4: 0x248500a8  addiu       $a1, $a0, 0xA8
    ctx->pc = 0x1f18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
    // 0x1f18d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f18d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18dc: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f18e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f18e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18e4: 0xc07ce44  jal         func_1F3910
    ctx->pc = 0x1F18E4u;
    SET_GPR_U32(ctx, 31, 0x1F18ECu);
    ctx->pc = 0x1F3910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3910u, 0x1F18E4u, 0x1F18ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18ECu;
label_1f18ec:
    // 0x1f18ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f18ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18f0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1F18F0u;
    {
        const bool branch_taken_0x1f18f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f18f0) {
            ctx->pc = 0x1F19F0u;
            goto label_1f19f0;
        }
    }
    ctx->pc = 0x1F18F8u;
label_1f18f8:
    // 0x1f18f8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1F18F8u;
    SET_GPR_U32(ctx, 31, 0x1F1900u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1F18F8u, 0x1F1900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1900u;
label_1f1900:
    // 0x1f1900: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1f1900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1f1904: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x1f1904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1f1908: 0xc044598  jal         func_111660
    ctx->pc = 0x1F1908u;
    SET_GPR_U32(ctx, 31, 0x1F1910u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1F1908u, 0x1F1910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1910u;
label_1f1910:
    // 0x1f1910: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1f1910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f1914: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1f1914u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1f1918: 0x2810  mfhi        $a1
    ctx->pc = 0x1f1918u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f191c: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x1f191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1f1920: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f1920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1924: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F1924u;
    SET_GPR_U32(ctx, 31, 0x1F192Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F1924u, 0x1F192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F192Cu;
label_1f192c:
    // 0x1f192c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f192cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1930: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x1f1930u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1934: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1938: 0x27a20300  addiu       $v0, $sp, 0x300
    ctx->pc = 0x1f1938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1f193c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1f193cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1f1940: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x1f1940u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f1944: 0xc07e0e0  jal         func_1F8380
    ctx->pc = 0x1F1944u;
    SET_GPR_U32(ctx, 31, 0x1F194Cu);
    ctx->pc = 0x1F8380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8380u, 0x1F1944u, 0x1F194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F194Cu;
label_1f194c:
    // 0x1f194c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x1f194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1f1950: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1F1950u;
    SET_GPR_U32(ctx, 31, 0x1F1958u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1F1950u, 0x1F1958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1958u;
label_1f1958:
    // 0x1f1958: 0x2e81000a  sltiu       $at, $s4, 0xA
    ctx->pc = 0x1f1958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f195c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1F195Cu;
    {
        const bool branch_taken_0x1f195c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f195c) {
            ctx->pc = 0x1F198Cu;
            goto label_1f198c;
        }
    }
    ctx->pc = 0x1F1964u;
    // 0x1f1964: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x1f1964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1f1968: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f196c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f196cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f1970: 0x244284d0  addiu       $v0, $v0, -0x7B30
    ctx->pc = 0x1f1970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935760));
    // 0x1f1974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1978: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f1978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f197c: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F197Cu;
    SET_GPR_U32(ctx, 31, 0x1F1984u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F197Cu, 0x1F1984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1984u;
label_1f1984:
    // 0x1f1984: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1984u;
    {
        const bool branch_taken_0x1f1984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1984) {
            ctx->pc = 0x1F19ACu;
            goto label_1f19ac;
        }
    }
    ctx->pc = 0x1F198Cu;
label_1f198c:
    // 0x1f198c: 0x27a202f0  addiu       $v0, $sp, 0x2F0
    ctx->pc = 0x1f198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1f1990: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1f1990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1f1994: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1f1994u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f1998: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f199c: 0x24a584e0  addiu       $a1, $a1, -0x7B20
    ctx->pc = 0x1f199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935776));
    // 0x1f19a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f19a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19a4: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F19A4u;
    SET_GPR_U32(ctx, 31, 0x1F19ACu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F19A4u, 0x1F19ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19ACu;
label_1f19ac:
    // 0x1f19ac: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f19acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f19b0: 0x248500a8  addiu       $a1, $a0, 0xA8
    ctx->pc = 0x1f19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
    // 0x1f19b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f19b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f19b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19bc: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F19BCu;
    SET_GPR_U32(ctx, 31, 0x1F19C4u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F19BCu, 0x1F19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19C4u;
label_1f19c4:
    // 0x1f19c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f19c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19c8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f19c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19cc: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x1f19ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1f19d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f19d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f19d4: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x1F19D4u;
    SET_GPR_U32(ctx, 31, 0x1F19DCu);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x1F19D4u, 0x1F19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19DCu;
label_1f19dc:
    // 0x1f19dc: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x1f19dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1f19e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f19e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f19e4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1F19E4u;
    SET_GPR_U32(ctx, 31, 0x1F19ECu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1F19E4u, 0x1F19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19ECu;
label_1f19ec:
    // 0x1f19ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f19ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f19f0:
    // 0x1f19f0: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f19f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f19f4: 0x8ce300a4  lw          $v1, 0xA4($a3)
    ctx->pc = 0x1f19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x1f19f8: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1f19f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f19fc: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1F19FCu;
    {
        const bool branch_taken_0x1f19fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f19fc) {
            ctx->pc = 0x1F18F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f18f8;
        }
    }
    ctx->pc = 0x1F1A04u;
    // 0x1f1a04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f1a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a08: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1F1A08u;
    {
        const bool branch_taken_0x1f1a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1a08) {
            ctx->pc = 0x1F1B54u;
            goto label_1f1b54;
        }
    }
    ctx->pc = 0x1F1A10u;
label_1f1a10:
    // 0x1f1a10: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x1f1a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1f1a14: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f1a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a18: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1F1A18u;
    SET_GPR_U32(ctx, 31, 0x1F1A20u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1F1A18u, 0x1F1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A20u;
label_1f1a20:
    // 0x1f1a20: 0x27a802d0  addiu       $t0, $sp, 0x2D0
    ctx->pc = 0x1f1a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1f1a24: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f1a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a28: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1F1A28u;
    SET_GPR_U32(ctx, 31, 0x1F1A30u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1F1A28u, 0x1F1A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A30u;
label_1f1a30:
    // 0x1f1a30: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1f1a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1f1a34: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1F1A34u;
    SET_GPR_U32(ctx, 31, 0x1F1A3Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1F1A34u, 0x1F1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A3Cu;
label_1f1a3c:
    // 0x1f1a3c: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x1f1a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1f1a40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a44: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1f1a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1f1a48: 0x246384f0  addiu       $v1, $v1, -0x7B10
    ctx->pc = 0x1f1a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935792));
    // 0x1f1a4c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f1a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f1a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a54: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F1A54u;
    SET_GPR_U32(ctx, 31, 0x1F1A5Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F1A54u, 0x1F1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A5Cu;
label_1f1a5c:
    // 0x1f1a5c: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x1f1a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1f1a60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a64: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f1a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f1a68: 0x24c68500  addiu       $a2, $a2, -0x7B00
    ctx->pc = 0x1f1a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935808));
    // 0x1f1a6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f1a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a74: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F1A74u;
    SET_GPR_U32(ctx, 31, 0x1F1A7Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F1A74u, 0x1F1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A7Cu;
label_1f1a7c:
    // 0x1f1a7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f1a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a80: 0x27a802c0  addiu       $t0, $sp, 0x2C0
    ctx->pc = 0x1f1a80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1f1a84: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f1a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a88: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1a88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1a8c: 0x24a58520  addiu       $a1, $a1, -0x7AE0
    ctx->pc = 0x1f1a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935840));
    // 0x1f1a90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f1a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1a94: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1F1A94u;
    SET_GPR_U32(ctx, 31, 0x1F1A9Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1F1A94u, 0x1F1A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1A9Cu;
label_1f1a9c:
    // 0x1f1a9c: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x1f1a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1f1aa0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F1AA0u;
    SET_GPR_U32(ctx, 31, 0x1F1AA8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F1AA0u, 0x1F1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AA8u;
label_1f1aa8:
    // 0x1f1aa8: 0x27a70290  addiu       $a3, $sp, 0x290
    ctx->pc = 0x1f1aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x1f1aac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f1aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ab4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1F1AB4u;
    SET_GPR_U32(ctx, 31, 0x1F1ABCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1F1AB4u, 0x1F1ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1ABCu;
label_1f1abc:
    // 0x1f1abc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f1abcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ac0: 0x27a202d0  addiu       $v0, $sp, 0x2D0
    ctx->pc = 0x1f1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1f1ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ac8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F1AC8u;
    SET_GPR_U32(ctx, 31, 0x1F1AD0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F1AC8u, 0x1F1AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AD0u;
label_1f1ad0:
    // 0x1f1ad0: 0x27a70270  addiu       $a3, $sp, 0x270
    ctx->pc = 0x1f1ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1f1ad4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f1ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1adc: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1F1ADCu;
    SET_GPR_U32(ctx, 31, 0x1F1AE4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1F1ADCu, 0x1F1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AE4u;
label_1f1ae4:
    // 0x1f1ae4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f1ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ae8: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1f1aec: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F1AECu;
    SET_GPR_U32(ctx, 31, 0x1F1AF4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F1AECu, 0x1F1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AF4u;
label_1f1af4:
    // 0x1f1af4: 0x27a70250  addiu       $a3, $sp, 0x250
    ctx->pc = 0x1f1af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x1f1af8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1afc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b00: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x1F1B00u;
    SET_GPR_U32(ctx, 31, 0x1F1B08u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1F1B00u, 0x1F1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B08u;
label_1f1b08:
    // 0x1f1b08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f1b08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b0c: 0x27a202c0  addiu       $v0, $sp, 0x2C0
    ctx->pc = 0x1f1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x1f1b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f1b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1b18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b1c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1F1B1Cu;
    SET_GPR_U32(ctx, 31, 0x1F1B24u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1F1B1Cu, 0x1F1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B24u;
label_1f1b24:
    // 0x1f1b24: 0x27a802d0  addiu       $t0, $sp, 0x2D0
    ctx->pc = 0x1f1b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x1f1b28: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f1b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f1b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1b30: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1F1B30u;
    SET_GPR_U32(ctx, 31, 0x1F1B38u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1F1B30u, 0x1F1B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B38u;
label_1f1b38:
    // 0x1f1b38: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x1f1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1f1b3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f1b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1b40: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1F1B40u;
    SET_GPR_U32(ctx, 31, 0x1F1B48u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1F1B40u, 0x1F1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B48u;
label_1f1b48:
    // 0x1f1b48: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x1f1b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x1f1b4c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1f1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f1b50: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1f1b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f1b54:
    // 0x1f1b54: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1b58: 0x8c4400d0  lw          $a0, 0xD0($v0)
    ctx->pc = 0x1f1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1f1b5c: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x1f1b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f1b60: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1F1B60u;
    {
        const bool branch_taken_0x1f1b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1b60) {
            ctx->pc = 0x1F1A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1a10;
        }
    }
    ctx->pc = 0x1F1B68u;
    // 0x1f1b68: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f1b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1b6c: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1f1b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f1b70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b74: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f1b78: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x1f1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x1f1b7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1b80: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1B80u;
    SET_GPR_U32(ctx, 31, 0x1F1B88u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1B80u, 0x1F1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B88u;
label_1f1b88:
    // 0x1f1b88: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1b88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1b8c: 0xad020240  sw          $v0, 0x240($t0)
    ctx->pc = 0x1f1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 576), GPR_U32(ctx, 2));
    // 0x1f1b90: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1b94: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x1f1b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x1f1b98: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x1f1b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1f1b9c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ba4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1ba8: 0x24a58560  addiu       $a1, $a1, -0x7AA0
    ctx->pc = 0x1f1ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935904));
    // 0x1f1bac: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1BACu;
    SET_GPR_U32(ctx, 31, 0x1F1BB4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1BACu, 0x1F1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BB4u;
label_1f1bb4:
    // 0x1f1bb4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f1bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1bb8: 0xac82011c  sw          $v0, 0x11C($a0)
    ctx->pc = 0x1f1bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 2));
    // 0x1f1bbc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1bc0: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1f1bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1f1bc4: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x1f1bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1f1bc8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1bcc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bd0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1bd4: 0x24a58580  addiu       $a1, $a1, -0x7A80
    ctx->pc = 0x1f1bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935936));
    // 0x1f1bd8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1BD8u;
    SET_GPR_U32(ctx, 31, 0x1F1BE0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1BD8u, 0x1F1BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1BE0u;
label_1f1be0:
    // 0x1f1be0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1be4: 0xaca2012c  sw          $v0, 0x12C($a1)
    ctx->pc = 0x1f1be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 2));
    // 0x1f1be8: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f1be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1bec: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1f1becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f1bf0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1bf4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f1bf8: 0x244285a0  addiu       $v0, $v0, -0x7A60
    ctx->pc = 0x1f1bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935968));
    // 0x1f1bfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c00: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1C00u;
    SET_GPR_U32(ctx, 31, 0x1F1C08u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1C00u, 0x1F1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C08u;
label_1f1c08:
    // 0x1f1c08: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1c08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1c0c: 0xad020120  sw          $v0, 0x120($t0)
    ctx->pc = 0x1f1c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 288), GPR_U32(ctx, 2));
    // 0x1f1c10: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1c14: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1f1c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1f1c18: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1f1c18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1f1c1c: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1c20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c24: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1c28: 0x24a585c0  addiu       $a1, $a1, -0x7A40
    ctx->pc = 0x1f1c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936000));
    // 0x1f1c2c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1C2Cu;
    SET_GPR_U32(ctx, 31, 0x1F1C34u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1C2Cu, 0x1F1C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C34u;
label_1f1c34:
    // 0x1f1c34: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f1c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1c38: 0xac820124  sw          $v0, 0x124($a0)
    ctx->pc = 0x1f1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
    // 0x1f1c3c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1c40: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f1c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1f1c44: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f1c44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1f1c48: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1c4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c50: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1c54: 0x24a585e0  addiu       $a1, $a1, -0x7A20
    ctx->pc = 0x1f1c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936032));
    // 0x1f1c58: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1C58u;
    SET_GPR_U32(ctx, 31, 0x1F1C60u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1C58u, 0x1F1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C60u;
label_1f1c60:
    // 0x1f1c60: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1c64: 0xaca20128  sw          $v0, 0x128($a1)
    ctx->pc = 0x1f1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 296), GPR_U32(ctx, 2));
    // 0x1f1c68: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1c6c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1c70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c74: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f1c74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f1c78: 0x24c68600  addiu       $a2, $a2, -0x7A00
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936064));
    // 0x1f1c7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c80: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1C80u;
    SET_GPR_U32(ctx, 31, 0x1F1C88u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1C80u, 0x1F1C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C88u;
label_1f1c88:
    // 0x1f1c88: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1c88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1c8c: 0xad020130  sw          $v0, 0x130($t0)
    ctx->pc = 0x1f1c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 2));
    // 0x1f1c90: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1c94: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1f1c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1f1c98: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1f1c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1f1c9c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ca4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1ca8: 0x24a58620  addiu       $a1, $a1, -0x79E0
    ctx->pc = 0x1f1ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936096));
    // 0x1f1cac: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1CACu;
    SET_GPR_U32(ctx, 31, 0x1F1CB4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1CACu, 0x1F1CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CB4u;
label_1f1cb4:
    // 0x1f1cb4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1cb8: 0xac820134  sw          $v0, 0x134($a0)
    ctx->pc = 0x1f1cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 308), GPR_U32(ctx, 2));
    // 0x1f1cbc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1cc0: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1f1cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1f1cc4: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x1f1cc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1f1cc8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cd0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f1cd4: 0x24428640  addiu       $v0, $v0, -0x79C0
    ctx->pc = 0x1f1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936128));
    // 0x1f1cd8: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1f1cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1f1cdc: 0x7ba501c0  lq          $a1, 0x1C0($sp)
    ctx->pc = 0x1f1cdcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1f1ce0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1CE0u;
    SET_GPR_U32(ctx, 31, 0x1F1CE8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1CE0u, 0x1F1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CE8u;
label_1f1ce8:
    // 0x1f1ce8: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1cec: 0xaca20138  sw          $v0, 0x138($a1)
    ctx->pc = 0x1f1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 2));
    // 0x1f1cf0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1cf4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1cf8: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1f1cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1f1cfc: 0x7ba401b0  lq          $a0, 0x1B0($sp)
    ctx->pc = 0x1f1cfcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f1d00: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f1d00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f1d04: 0x24c68660  addiu       $a2, $a2, -0x79A0
    ctx->pc = 0x1f1d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936160));
    // 0x1f1d08: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d0c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F1D14u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1D0Cu, 0x1F1D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D14u;
label_1f1d14:
    // 0x1f1d14: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f1d14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d18: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1d1c: 0xac470148  sw          $a3, 0x148($v0)
    ctx->pc = 0x1f1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 7));
    // 0x1f1d20: 0x8fb30320  lw          $s3, 0x320($sp)
    ctx->pc = 0x1f1d20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1d24: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x1f1d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1f1d28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d2c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1d30: 0x24a58680  addiu       $a1, $a1, -0x7980
    ctx->pc = 0x1f1d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936192));
    // 0x1f1d34: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1D34u;
    SET_GPR_U32(ctx, 31, 0x1F1D3Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1D34u, 0x1F1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D3Cu;
label_1f1d3c:
    // 0x1f1d3c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1d40: 0xac82013c  sw          $v0, 0x13C($a0)
    ctx->pc = 0x1f1d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 2));
    // 0x1f1d44: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1d48: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f1d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1f1d4c: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f1d4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f1d50: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1d54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d58: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1d5c: 0x24a586a0  addiu       $a1, $a1, -0x7960
    ctx->pc = 0x1f1d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936224));
    // 0x1f1d60: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1D60u;
    SET_GPR_U32(ctx, 31, 0x1F1D68u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1D60u, 0x1F1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D68u;
label_1f1d68:
    // 0x1f1d68: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1d6c: 0xaca20140  sw          $v0, 0x140($a1)
    ctx->pc = 0x1f1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 320), GPR_U32(ctx, 2));
    // 0x1f1d70: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1d74: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1d78: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d7c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f1d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f1d80: 0x24c686c0  addiu       $a2, $a2, -0x7940
    ctx->pc = 0x1f1d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936256));
    // 0x1f1d84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d88: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1D88u;
    SET_GPR_U32(ctx, 31, 0x1F1D90u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1D88u, 0x1F1D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D90u;
label_1f1d90:
    // 0x1f1d90: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1d90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1d94: 0xad020144  sw          $v0, 0x144($t0)
    ctx->pc = 0x1f1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 324), GPR_U32(ctx, 2));
    // 0x1f1d98: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1d9c: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1f1d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1f1da0: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1f1da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1f1da4: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1da8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1dac: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f1db0: 0x244286e0  addiu       $v0, $v0, -0x7920
    ctx->pc = 0x1f1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936288));
    // 0x1f1db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1db8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1DB8u;
    SET_GPR_U32(ctx, 31, 0x1F1DC0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1DB8u, 0x1F1DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DC0u;
label_1f1dc0:
    // 0x1f1dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1dc4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1dc8: 0xac450158  sw          $a1, 0x158($v0)
    ctx->pc = 0x1f1dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 5));
    // 0x1f1dcc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1dd0: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1f1dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1f1dd4: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x1f1dd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f1dd8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1ddc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1de0: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1f1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1f1de4: 0x24638700  addiu       $v1, $v1, -0x7900
    ctx->pc = 0x1f1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936320));
    // 0x1f1de8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f1de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1dec: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1DECu;
    SET_GPR_U32(ctx, 31, 0x1F1DF4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1DECu, 0x1F1DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DF4u;
label_1f1df4:
    // 0x1f1df4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1df8: 0xaca2014c  sw          $v0, 0x14C($a1)
    ctx->pc = 0x1f1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 2));
    // 0x1f1dfc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1e00: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f1e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1e04: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e08: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f1e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f1e0c: 0x24c68720  addiu       $a2, $a2, -0x78E0
    ctx->pc = 0x1f1e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936352));
    // 0x1f1e10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e14: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1E14u;
    SET_GPR_U32(ctx, 31, 0x1F1E1Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1E14u, 0x1F1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E1Cu;
label_1f1e1c:
    // 0x1f1e1c: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1e20: 0xad020150  sw          $v0, 0x150($t0)
    ctx->pc = 0x1f1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 336), GPR_U32(ctx, 2));
    // 0x1f1e24: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1e28: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1f1e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1f1e2c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x1f1e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f1e30: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1e34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e38: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f1e38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f1e3c: 0x24c68740  addiu       $a2, $a2, -0x78C0
    ctx->pc = 0x1f1e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936384));
    // 0x1f1e40: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e44: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1E44u;
    SET_GPR_U32(ctx, 31, 0x1F1E4Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1E44u, 0x1F1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E4Cu;
label_1f1e4c:
    // 0x1f1e4c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f1e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1e50: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1f1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1f1e54: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1e58: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1f1e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1f1e5c: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x1f1e5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f1e60: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e68: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1e6c: 0x24a58760  addiu       $a1, $a1, -0x78A0
    ctx->pc = 0x1f1e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936416));
    // 0x1f1e70: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1E70u;
    SET_GPR_U32(ctx, 31, 0x1F1E78u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1E70u, 0x1F1E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E78u;
label_1f1e78:
    // 0x1f1e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e7c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1e80: 0xac440168  sw          $a0, 0x168($v0)
    ctx->pc = 0x1f1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 4));
    // 0x1f1e84: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f1e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1e88: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1f1e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f1e8c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e90: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f1e94: 0x24428780  addiu       $v0, $v0, -0x7880
    ctx->pc = 0x1f1e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936448));
    // 0x1f1e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e9c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1F1EA4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1E9Cu, 0x1F1EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EA4u;
label_1f1ea4:
    // 0x1f1ea4: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1ea8: 0xad02015c  sw          $v0, 0x15C($t0)
    ctx->pc = 0x1f1ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 348), GPR_U32(ctx, 2));
    // 0x1f1eac: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1eb0: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1f1eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1f1eb4: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1f1eb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f1eb8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1ebc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ec0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f1ec4: 0x244287a0  addiu       $v0, $v0, -0x7860
    ctx->pc = 0x1f1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936480));
    // 0x1f1ec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ecc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1ECCu;
    SET_GPR_U32(ctx, 31, 0x1F1ED4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1ECCu, 0x1F1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1ED4u;
label_1f1ed4:
    // 0x1f1ed4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f1ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1ed8: 0xac820160  sw          $v0, 0x160($a0)
    ctx->pc = 0x1f1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 2));
    // 0x1f1edc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1ee0: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1f1ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1f1ee4: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1f1ee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f1ee8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ef0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1ef4: 0x24a587c0  addiu       $a1, $a1, -0x7840
    ctx->pc = 0x1f1ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
    // 0x1f1ef8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1EF8u;
    SET_GPR_U32(ctx, 31, 0x1F1F00u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1EF8u, 0x1F1F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F00u;
label_1f1f00:
    // 0x1f1f00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f04: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1f08: 0xac460164  sw          $a2, 0x164($v0)
    ctx->pc = 0x1f1f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 6));
    // 0x1f1f0c: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f1f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1f10: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1f1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f1f14: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f18: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f1f1c: 0x244287e0  addiu       $v0, $v0, -0x7820
    ctx->pc = 0x1f1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936544));
    // 0x1f1f20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f24: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1F24u;
    SET_GPR_U32(ctx, 31, 0x1F1F2Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1F24u, 0x1F1F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F2Cu;
label_1f1f2c:
    // 0x1f1f2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f1f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f30: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1f34: 0xac470178  sw          $a3, 0x178($v0)
    ctx->pc = 0x1f1f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 7));
    // 0x1f1f38: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1f3c: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1f1f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1f1f40: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1f1f40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f1f44: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1f48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f4c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1f50: 0x24a58800  addiu       $a1, $a1, -0x7800
    ctx->pc = 0x1f1f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936576));
    // 0x1f1f54: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1F54u;
    SET_GPR_U32(ctx, 31, 0x1F1F5Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1F54u, 0x1F1F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F5Cu;
label_1f1f5c:
    // 0x1f1f5c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f1f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1f60: 0xaca2016c  sw          $v0, 0x16C($a1)
    ctx->pc = 0x1f1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 364), GPR_U32(ctx, 2));
    // 0x1f1f64: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1f68: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1f1f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1f1f6c: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1f1f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f1f70: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1f74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f78: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f1f7c: 0x24a58820  addiu       $a1, $a1, -0x77E0
    ctx->pc = 0x1f1f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936608));
    // 0x1f1f80: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1F80u;
    SET_GPR_U32(ctx, 31, 0x1F1F88u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1F80u, 0x1F1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F88u;
label_1f1f88:
    // 0x1f1f88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f8c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1f90: 0xac460170  sw          $a2, 0x170($v0)
    ctx->pc = 0x1f1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 6));
    // 0x1f1f94: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f1f94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1f98: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1f1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1f1f9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f1f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fa0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f1fa4: 0x24c68840  addiu       $a2, $a2, -0x77C0
    ctx->pc = 0x1f1fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936640));
    // 0x1f1fa8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fac: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1FACu;
    SET_GPR_U32(ctx, 31, 0x1F1FB4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1FACu, 0x1F1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FB4u;
label_1f1fb4:
    // 0x1f1fb4: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f1fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1fb8: 0xad020174  sw          $v0, 0x174($t0)
    ctx->pc = 0x1f1fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 372), GPR_U32(ctx, 2));
    // 0x1f1fbc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1fc0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1f1fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1f1fc4: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1f1fc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f1fc8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f1fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1fcc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f1fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fd0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f1fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f1fd4: 0x24c68860  addiu       $a2, $a2, -0x77A0
    ctx->pc = 0x1f1fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936672));
    // 0x1f1fd8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f1fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fdc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F1FDCu;
    SET_GPR_U32(ctx, 31, 0x1F1FE4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F1FDCu, 0x1F1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1FE4u;
label_1f1fe4:
    // 0x1f1fe4: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1fe8: 0xac62018c  sw          $v0, 0x18C($v1)
    ctx->pc = 0x1f1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 396), GPR_U32(ctx, 2));
    // 0x1f1fec: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f1ff0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1f1ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1f1ff4: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x1f1ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f1ff8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f1ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2000: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f2000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f2004: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1f2004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1f2008: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F2008u;
    SET_GPR_U32(ctx, 31, 0x1F2010u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F2008u, 0x1F2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2010u;
label_1f2010:
    // 0x1f2010: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2014: 0xaca20180  sw          $v0, 0x180($a1)
    ctx->pc = 0x1f2014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 384), GPR_U32(ctx, 2));
    // 0x1f2018: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f201c: 0x8c760030  lw          $s6, 0x30($v1)
    ctx->pc = 0x1f201cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f2020: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f2020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2024: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f2024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f2028: 0x24c688a0  addiu       $a2, $a2, -0x7760
    ctx->pc = 0x1f2028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936736));
    // 0x1f202c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f202cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2030: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F2030u;
    SET_GPR_U32(ctx, 31, 0x1F2038u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F2030u, 0x1F2038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2038u;
label_1f2038:
    // 0x1f2038: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f203c: 0xad020184  sw          $v0, 0x184($t0)
    ctx->pc = 0x1f203cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 388), GPR_U32(ctx, 2));
    // 0x1f2040: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2044: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1f2044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1f2048: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1f2048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f204c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1f204cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2050: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f2050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f2054: 0x24a588c0  addiu       $a1, $a1, -0x7740
    ctx->pc = 0x1f2054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936768));
    // 0x1f2058: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F2058u;
    SET_GPR_U32(ctx, 31, 0x1F2060u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F2058u, 0x1F2060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2060u;
label_1f2060:
    // 0x1f2060: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f2060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2064: 0xacc20188  sw          $v0, 0x188($a2)
    ctx->pc = 0x1f2064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 392), GPR_U32(ctx, 2));
    // 0x1f2068: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f206c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1f206cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1f2070: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1f2070u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f2074: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f2074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f207c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x1f207cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x1f2080: 0x24c688e0  addiu       $a2, $a2, -0x7720
    ctx->pc = 0x1f2080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936800));
    // 0x1f2084: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f2084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2088: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F2088u;
    SET_GPR_U32(ctx, 31, 0x1F2090u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F2088u, 0x1F2090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2090u;
label_1f2090:
    // 0x1f2090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2094: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2098: 0xac45017c  sw          $a1, 0x17C($v0)
    ctx->pc = 0x1f2098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 5));
    // 0x1f209c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f20a0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f20a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f20a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f20a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20a8: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x1f20a8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x1f20ac: 0x26528900  addiu       $s2, $s2, -0x7700
    ctx->pc = 0x1f20acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294936832));
    // 0x1f20b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f20b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20b4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F20B4u;
    SET_GPR_U32(ctx, 31, 0x1F20BCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F20B4u, 0x1F20BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20BCu;
label_1f20bc:
    // 0x1f20bc: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f20bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f20c0: 0xac8202ac  sw          $v0, 0x2AC($a0)
    ctx->pc = 0x1f20c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 684), GPR_U32(ctx, 2));
    // 0x1f20c4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f20c8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1f20c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f20cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f20ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20d0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f20d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f20d4: 0x24428910  addiu       $v0, $v0, -0x76F0
    ctx->pc = 0x1f20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936848));
    // 0x1f20d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f20d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20dc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F20DCu;
    SET_GPR_U32(ctx, 31, 0x1F20E4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F20DCu, 0x1F20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20E4u;
label_1f20e4:
    // 0x1f20e4: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f20e8: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x1f20e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
    // 0x1f20ec: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1f20ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f20f0: 0xac6202b0  sw          $v0, 0x2B0($v1)
    ctx->pc = 0x1f20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 688), GPR_U32(ctx, 2));
    // 0x1f20f4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f20f8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1f20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f20fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f20fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2100: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f2100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f2104: 0x24a58930  addiu       $a1, $a1, -0x76D0
    ctx->pc = 0x1f2104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936880));
    // 0x1f2108: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F2108u;
    SET_GPR_U32(ctx, 31, 0x1F2110u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F2108u, 0x1F2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2110u;
label_1f2110:
    // 0x1f2110: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2114: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2118: 0xac6602b4  sw          $a2, 0x2B4($v1)
    ctx->pc = 0x1f2118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 692), GPR_U32(ctx, 6));
    // 0x1f211c: 0x8fb40320  lw          $s4, 0x320($sp)
    ctx->pc = 0x1f211cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2120: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x1f2120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1f2124: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1f2124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1f2128: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1f2128u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f212c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f212cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f2130: 0x24428950  addiu       $v0, $v0, -0x76B0
    ctx->pc = 0x1f2130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936912));
    // 0x1f2134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2138: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F2138u;
    SET_GPR_U32(ctx, 31, 0x1F2140u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F2138u, 0x1F2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2140u;
label_1f2140:
    // 0x1f2140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2144: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2148: 0xac4402b8  sw          $a0, 0x2B8($v0)
    ctx->pc = 0x1f2148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 696), GPR_U32(ctx, 4));
    // 0x1f214c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f214cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2150: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1f2150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f2154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2158: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f2158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f215c: 0x24428970  addiu       $v0, $v0, -0x7690
    ctx->pc = 0x1f215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
    // 0x1f2160: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2164: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F2164u;
    SET_GPR_U32(ctx, 31, 0x1F216Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F2164u, 0x1F216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F216Cu;
label_1f216c:
    // 0x1f216c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1f216cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1f2170: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2174: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1f2174u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f2178: 0xaca202bc  sw          $v0, 0x2BC($a1)
    ctx->pc = 0x1f2178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 700), GPR_U32(ctx, 2));
    // 0x1f217c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2180: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1f2180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f2184: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f2184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f2188: 0x24a58990  addiu       $a1, $a1, -0x7670
    ctx->pc = 0x1f2188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936976));
    // 0x1f218c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F218Cu;
    SET_GPR_U32(ctx, 31, 0x1F2194u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F218Cu, 0x1F2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2194u;
label_1f2194:
    // 0x1f2194: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f2194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2198: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f219c: 0xacc302c0  sw          $v1, 0x2C0($a2)
    ctx->pc = 0x1f219cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 704), GPR_U32(ctx, 3));
    // 0x1f21a0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f21a4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1f21a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f21a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f21a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f21ac: 0x24a589a8  addiu       $a1, $a1, -0x7658
    ctx->pc = 0x1f21acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937000));
    // 0x1f21b0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F21B0u;
    SET_GPR_U32(ctx, 31, 0x1F21B8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F21B0u, 0x1F21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21B8u;
label_1f21b8:
    // 0x1f21b8: 0x8fb00320  lw          $s0, 0x320($sp)
    ctx->pc = 0x1f21b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f21bc: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x1f21bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
    // 0x1f21c0: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f21c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f21c4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f21c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21c8: 0xc07e5a0  jal         func_1F9680
    ctx->pc = 0x1F21C8u;
    SET_GPR_U32(ctx, 31, 0x1F21D0u);
    ctx->pc = 0x1F9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9680u, 0x1F21C8u, 0x1F21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21D0u;
label_1f21d0:
    // 0x1f21d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f21d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21d4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f21d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F21DCu;
    SET_GPR_U32(ctx, 31, 0x1F21E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F21DCu, 0x1F21E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21E4u;
label_1f21e4:
    // 0x1f21e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f21e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21e8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f21e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f21ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f21ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21f0: 0x8c480240  lw          $t0, 0x240($v0)
    ctx->pc = 0x1f21f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x1f21f4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1f21f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f21f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f21fc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F21FCu;
    SET_GPR_U32(ctx, 31, 0x1F2204u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F21FCu, 0x1F2204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2204u;
label_1f2204:
    // 0x1f2204: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2208: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2208u;
    SET_GPR_U32(ctx, 31, 0x1F2210u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2208u, 0x1F2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2210u;
label_1f2210:
    // 0x1f2210: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2214: 0x8ca3018c  lw          $v1, 0x18C($a1)
    ctx->pc = 0x1f2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 396)));
    // 0x1f2218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f221c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f221cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2224: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2224u;
    SET_GPR_U32(ctx, 31, 0x1F222Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2224u, 0x1F222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F222Cu;
label_1f222c:
    // 0x1f222c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f222cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2230: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2234: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2234u;
    SET_GPR_U32(ctx, 31, 0x1F223Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2234u, 0x1F223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F223Cu;
label_1f223c:
    // 0x1f223c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f223cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2240: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2244: 0x8ce80180  lw          $t0, 0x180($a3)
    ctx->pc = 0x1f2244u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 384)));
    // 0x1f2248: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f2248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f224c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1f224cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2250: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2254: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2254u;
    SET_GPR_U32(ctx, 31, 0x1F225Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2254u, 0x1F225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F225Cu;
label_1f225c:
    // 0x1f225c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2260: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2268: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2268u;
    SET_GPR_U32(ctx, 31, 0x1F2270u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2268u, 0x1F2270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2270u;
label_1f2270:
    // 0x1f2270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2274: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2278: 0x8c470184  lw          $a3, 0x184($v0)
    ctx->pc = 0x1f2278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1f227c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1f227cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2284: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2284u;
    SET_GPR_U32(ctx, 31, 0x1F228Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2284u, 0x1F228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F228Cu;
label_1f228c:
    // 0x1f228c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f228cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2290: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2298: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2298u;
    SET_GPR_U32(ctx, 31, 0x1F22A0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2298u, 0x1F22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22A0u;
label_1f22a0:
    // 0x1f22a0: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f22a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f22a4: 0x8ce80188  lw          $t0, 0x188($a3)
    ctx->pc = 0x1f22a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x1f22a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f22a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22ac: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1f22acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f22b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22b4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F22B4u;
    SET_GPR_U32(ctx, 31, 0x1F22BCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F22B4u, 0x1F22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22BCu;
label_1f22bc:
    // 0x1f22bc: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f22bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f22c0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F22C0u;
    SET_GPR_U32(ctx, 31, 0x1F22C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F22C0u, 0x1F22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22C8u;
label_1f22c8:
    // 0x1f22c8: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f22c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f22cc: 0x8ce3017c  lw          $v1, 0x17C($a3)
    ctx->pc = 0x1f22ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 380)));
    // 0x1f22d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f22d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22d4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f22d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f22d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f22dc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F22DCu;
    SET_GPR_U32(ctx, 31, 0x1F22E4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F22DCu, 0x1F22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22E4u;
label_1f22e4:
    // 0x1f22e4: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f22e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f22e8: 0xa0c000f0  sb          $zero, 0xF0($a2)
    ctx->pc = 0x1f22e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 240), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f22ec: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f22f0: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f22f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f22f4: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f22f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f22f8: 0xe50000f4  swc1        $f0, 0xF4($t0)
    ctx->pc = 0x1f22f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 244), bits); }
    // 0x1f22fc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f22fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2300: 0xa0a002d8  sb          $zero, 0x2D8($a1)
    ctx->pc = 0x1f2300u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 728), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2304: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2308: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1f2308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f230c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f230cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2310: 0xe48002ec  swc1        $f0, 0x2EC($a0)
    ctx->pc = 0x1f2310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 748), bits); }
    // 0x1f2314: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2318: 0xaca002dc  sw          $zero, 0x2DC($a1)
    ctx->pc = 0x1f2318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 732), GPR_U32(ctx, 0));
    // 0x1f231c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2320: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x1f2320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x1f2324: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x1f2324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1f2328: 0xac4002e0  sw          $zero, 0x2E0($v0)
    ctx->pc = 0x1f2328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 736), GPR_U32(ctx, 0));
    // 0x1f232c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2330: 0xac6002e4  sw          $zero, 0x2E4($v1)
    ctx->pc = 0x1f2330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 740), GPR_U32(ctx, 0));
    // 0x1f2334: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2338: 0xac4002e8  sw          $zero, 0x2E8($v0)
    ctx->pc = 0x1f2338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 0));
    // 0x1f233c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2340: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2340u;
    SET_GPR_U32(ctx, 31, 0x1F2348u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2340u, 0x1F2348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2348u;
label_1f2348:
    // 0x1f2348: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f234c: 0x8ce3011c  lw          $v1, 0x11C($a3)
    ctx->pc = 0x1f234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
    // 0x1f2350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2354: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f2354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f235c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F235Cu;
    SET_GPR_U32(ctx, 31, 0x1F2364u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F235Cu, 0x1F2364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2364u;
label_1f2364:
    // 0x1f2364: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f236c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F236Cu;
    SET_GPR_U32(ctx, 31, 0x1F2374u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F236Cu, 0x1F2374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2374u;
label_1f2374:
    // 0x1f2374: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f2374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2378: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f237c: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x1f237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x1f2380: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x1f2380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1f2384: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x1f2384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x1f2388: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f2388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f238c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f238cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2394: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2394u;
    SET_GPR_U32(ctx, 31, 0x1F239Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2394u, 0x1F239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F239Cu;
label_1f239c:
    // 0x1f239c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f239cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23a0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f23a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f23a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23a8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F23A8u;
    SET_GPR_U32(ctx, 31, 0x1F23B0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F23A8u, 0x1F23B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23B0u;
label_1f23b0:
    // 0x1f23b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f23b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23b4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f23b8: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1f23b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1f23bc: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x1f23bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1f23c0: 0x8c450120  lw          $a1, 0x120($v0)
    ctx->pc = 0x1f23c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1f23c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f23c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23c8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F23C8u;
    SET_GPR_U32(ctx, 31, 0x1F23D0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F23C8u, 0x1F23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23D0u;
label_1f23d0:
    // 0x1f23d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f23d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23d4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f23d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f23d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F23DCu;
    SET_GPR_U32(ctx, 31, 0x1F23E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F23DCu, 0x1F23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23E4u;
label_1f23e4:
    // 0x1f23e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f23e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23e8: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f23e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f23ec: 0x8ce30124  lw          $v1, 0x124($a3)
    ctx->pc = 0x1f23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
    // 0x1f23f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f23f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f23f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f23f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f23fc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F23FCu;
    SET_GPR_U32(ctx, 31, 0x1F2404u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F23FCu, 0x1F2404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2404u;
label_1f2404:
    // 0x1f2404: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f240c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F240Cu;
    SET_GPR_U32(ctx, 31, 0x1F2414u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F240Cu, 0x1F2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2414u;
label_1f2414:
    // 0x1f2414: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f2414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2418: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f241c: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1f241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1f2420: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1f2420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1f2424: 0x8c450128  lw          $a1, 0x128($v0)
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x1f2428: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f2428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f242c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f242cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2430: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2430u;
    SET_GPR_U32(ctx, 31, 0x1F2438u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2430u, 0x1F2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2438u;
label_1f2438:
    // 0x1f2438: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f243c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2444: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2444u;
    SET_GPR_U32(ctx, 31, 0x1F244Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2444u, 0x1F244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F244Cu;
label_1f244c:
    // 0x1f244c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f244cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2450: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2454: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f2454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1f2458: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f2458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1f245c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1f245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f2460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2464: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2464u;
    SET_GPR_U32(ctx, 31, 0x1F246Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2464u, 0x1F246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F246Cu;
label_1f246c:
    // 0x1f246c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f246cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2470: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2478: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2478u;
    SET_GPR_U32(ctx, 31, 0x1F2480u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2478u, 0x1F2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2480u;
label_1f2480:
    // 0x1f2480: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2484: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2488: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x1f2488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x1f248c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f248cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2490: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f2490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2498: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2498u;
    SET_GPR_U32(ctx, 31, 0x1F24A0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2498u, 0x1F24A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24A0u;
label_1f24a0:
    // 0x1f24a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f24a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24a4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f24a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f24a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F24ACu;
    SET_GPR_U32(ctx, 31, 0x1F24B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F24ACu, 0x1F24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24B4u;
label_1f24b4:
    // 0x1f24b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f24b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24b8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f24bc: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1f24bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1f24c0: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1f24c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1f24c4: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x1f24c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1f24c8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f24c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f24ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f24d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24d4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F24D4u;
    SET_GPR_U32(ctx, 31, 0x1F24DCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F24D4u, 0x1F24DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24DCu;
label_1f24dc:
    // 0x1f24dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f24dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24e0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f24e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f24e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24e8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F24E8u;
    SET_GPR_U32(ctx, 31, 0x1F24F0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F24E8u, 0x1F24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24F0u;
label_1f24f0:
    // 0x1f24f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f24f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f24f4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f24f8: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1f24f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1f24fc: 0x7ba201d0  lq          $v0, 0x1D0($sp)
    ctx->pc = 0x1f24fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1f2500: 0x8c42013c  lw          $v0, 0x13C($v0)
    ctx->pc = 0x1f2500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
    // 0x1f2504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f250c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F250Cu;
    SET_GPR_U32(ctx, 31, 0x1F2514u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F250Cu, 0x1F2514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2514u;
label_1f2514:
    // 0x1f2514: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1f2514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1f2518: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f251c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2520: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2520u;
    SET_GPR_U32(ctx, 31, 0x1F2528u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2520u, 0x1F2528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2528u;
label_1f2528:
    // 0x1f2528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f252c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2530: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1f2530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1f2534: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1f2534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1f2538: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f253c: 0x7ba501b0  lq          $a1, 0x1B0($sp)
    ctx->pc = 0x1f253cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f2540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2544: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2544u;
    SET_GPR_U32(ctx, 31, 0x1F254Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2544u, 0x1F254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F254Cu;
label_1f254c:
    // 0x1f254c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f254cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2550: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2554: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f2554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2558: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2558u;
    SET_GPR_U32(ctx, 31, 0x1F2560u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2558u, 0x1F2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2560u;
label_1f2560:
    // 0x1f2560: 0x8fb30320  lw          $s3, 0x320($sp)
    ctx->pc = 0x1f2560u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2564: 0x8e650144  lw          $a1, 0x144($s3)
    ctx->pc = 0x1f2564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
    // 0x1f2568: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f256c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f256cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2570: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2570u;
    SET_GPR_U32(ctx, 31, 0x1F2578u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2570u, 0x1F2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2578u;
label_1f2578:
    // 0x1f2578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f257c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2584: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2584u;
    SET_GPR_U32(ctx, 31, 0x1F258Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2584u, 0x1F258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F258Cu;
label_1f258c:
    // 0x1f258c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f258cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2590: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2594: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f2594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1f2598: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f2598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f259c: 0x8c450148  lw          $a1, 0x148($v0)
    ctx->pc = 0x1f259cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x1f25a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f25a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25a4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F25A4u;
    SET_GPR_U32(ctx, 31, 0x1F25ACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F25A4u, 0x1F25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25ACu;
label_1f25ac:
    // 0x1f25ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f25acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25b0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f25b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f25b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F25B8u;
    SET_GPR_U32(ctx, 31, 0x1F25C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F25B8u, 0x1F25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25C0u;
label_1f25c0:
    // 0x1f25c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f25c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25c4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f25c8: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x1f25cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f25ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f25d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f25d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25d8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F25D8u;
    SET_GPR_U32(ctx, 31, 0x1F25E0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F25D8u, 0x1F25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25E0u;
label_1f25e0:
    // 0x1f25e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f25e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25e4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f25e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f25e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25ec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F25ECu;
    SET_GPR_U32(ctx, 31, 0x1F25F4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F25ECu, 0x1F25F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25F4u;
label_1f25f4:
    // 0x1f25f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f25f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f25f8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f25fc: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1f25fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1f2600: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1f2600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1f2604: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x1f2604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x1f2608: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f2608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f260c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f260cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2610: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2610u;
    SET_GPR_U32(ctx, 31, 0x1F2618u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2610u, 0x1F2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2618u;
label_1f2618:
    // 0x1f2618: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f261c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2620: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2620u;
    SET_GPR_U32(ctx, 31, 0x1F2628u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2620u, 0x1F2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2628u;
label_1f2628:
    // 0x1f2628: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f262c: 0x7fa30180  sq          $v1, 0x180($sp)
    ctx->pc = 0x1f262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 3));
    // 0x1f2630: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x1f2630u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f2634: 0x8c650154  lw          $a1, 0x154($v1)
    ctx->pc = 0x1f2634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1f2638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f263c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f263cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2640: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2640u;
    SET_GPR_U32(ctx, 31, 0x1F2648u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2640u, 0x1F2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2648u;
label_1f2648:
    // 0x1f2648: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f2648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f264c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2654: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2654u;
    SET_GPR_U32(ctx, 31, 0x1F265Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2654u, 0x1F265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F265Cu;
label_1f265c:
    // 0x1f265c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f265cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2660: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2664: 0x8c430158  lw          $v1, 0x158($v0)
    ctx->pc = 0x1f2664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x1f2668: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f266c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f266cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2674: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2674u;
    SET_GPR_U32(ctx, 31, 0x1F267Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2674u, 0x1F267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F267Cu;
label_1f267c:
    // 0x1f267c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f267cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2680: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2688: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2688u;
    SET_GPR_U32(ctx, 31, 0x1F2690u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2688u, 0x1F2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2690u;
label_1f2690:
    // 0x1f2690: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f2690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2694: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2698: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1f2698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1f269c: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x1f269cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f26a0: 0x8c45015c  lw          $a1, 0x15C($v0)
    ctx->pc = 0x1f26a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x1f26a4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f26a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f26a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26ac: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F26ACu;
    SET_GPR_U32(ctx, 31, 0x1F26B4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F26ACu, 0x1F26B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26B4u;
label_1f26b4:
    // 0x1f26b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f26b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26b8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f26bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f26bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26c0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F26C0u;
    SET_GPR_U32(ctx, 31, 0x1F26C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F26C0u, 0x1F26C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26C8u;
label_1f26c8:
    // 0x1f26c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f26c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26cc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f26d0: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1f26d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1f26d4: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x1f26d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f26d8: 0x8c420160  lw          $v0, 0x160($v0)
    ctx->pc = 0x1f26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x1f26dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f26dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f26e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26e4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F26E4u;
    SET_GPR_U32(ctx, 31, 0x1F26ECu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F26E4u, 0x1F26ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26ECu;
label_1f26ec:
    // 0x1f26ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f26ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26f0: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f26f4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F26F4u;
    SET_GPR_U32(ctx, 31, 0x1F26FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F26F4u, 0x1F26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26FCu;
label_1f26fc:
    // 0x1f26fc: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2700: 0x8ce30164  lw          $v1, 0x164($a3)
    ctx->pc = 0x1f2700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 356)));
    // 0x1f2704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2708: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f2708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f270c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f270cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2710: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2710u;
    SET_GPR_U32(ctx, 31, 0x1F2718u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2710u, 0x1F2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2718u;
label_1f2718:
    // 0x1f2718: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f271c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f271cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2720: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2720u;
    SET_GPR_U32(ctx, 31, 0x1F2728u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2720u, 0x1F2728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2728u;
label_1f2728:
    // 0x1f2728: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f2728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f272c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f272cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2730: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1f2730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1f2734: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1f2734u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f2738: 0x8c450168  lw          $a1, 0x168($v0)
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    // 0x1f273c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f273cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2744: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2744u;
    SET_GPR_U32(ctx, 31, 0x1F274Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2744u, 0x1F274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F274Cu;
label_1f274c:
    // 0x1f274c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2754: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2754u;
    SET_GPR_U32(ctx, 31, 0x1F275Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2754u, 0x1F275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F275Cu;
label_1f275c:
    // 0x1f275c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f275cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2760: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2764: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1f2764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1f2768: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1f2768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f276c: 0x8c42016c  lw          $v0, 0x16C($v0)
    ctx->pc = 0x1f276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x1f2770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2774: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2778: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2778u;
    SET_GPR_U32(ctx, 31, 0x1F2780u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2778u, 0x1F2780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2780u;
label_1f2780:
    // 0x1f2780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2784: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f2784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2788: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f2788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f278c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F278Cu;
    SET_GPR_U32(ctx, 31, 0x1F2794u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F278Cu, 0x1F2794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2794u;
label_1f2794:
    // 0x1f2794: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2798: 0x8ce30170  lw          $v1, 0x170($a3)
    ctx->pc = 0x1f2798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 368)));
    // 0x1f279c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f27a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f27a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27a8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F27A8u;
    SET_GPR_U32(ctx, 31, 0x1F27B0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F27A8u, 0x1F27B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27B0u;
label_1f27b0:
    // 0x1f27b0: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f27b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f27b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f27b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F27B8u;
    SET_GPR_U32(ctx, 31, 0x1F27C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F27B8u, 0x1F27C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27C0u;
label_1f27c0:
    // 0x1f27c0: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f27c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f27c4: 0x7fa30130  sq          $v1, 0x130($sp)
    ctx->pc = 0x1f27c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 3));
    // 0x1f27c8: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x1f27c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f27cc: 0x8c650174  lw          $a1, 0x174($v1)
    ctx->pc = 0x1f27ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x1f27d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f27d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f27d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27d8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F27D8u;
    SET_GPR_U32(ctx, 31, 0x1F27E0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F27D8u, 0x1F27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27E0u;
label_1f27e0:
    // 0x1f27e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f27e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27e4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f27e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f27e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27ec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F27ECu;
    SET_GPR_U32(ctx, 31, 0x1F27F4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F27ECu, 0x1F27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27F4u;
label_1f27f4:
    // 0x1f27f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f27f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27f8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f27fc: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1f27fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1f2800: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1f2800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f2804: 0x8c420178  lw          $v0, 0x178($v0)
    ctx->pc = 0x1f2804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1f2808: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f280c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f280cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2810: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2814: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F2814u;
    SET_GPR_U32(ctx, 31, 0x1F281Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F2814u, 0x1F281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F281Cu;
label_1f281c:
    // 0x1f281c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f281cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2820: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f2820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2824: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f2824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2828: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2828u;
    SET_GPR_U32(ctx, 31, 0x1F2830u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2828u, 0x1F2830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2830u;
label_1f2830:
    // 0x1f2830: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2834: 0x8ce3011c  lw          $v1, 0x11C($a3)
    ctx->pc = 0x1f2834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
    // 0x1f2838: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f2838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f283c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f283cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2840: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f2840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2844: 0x24c201a0  addiu       $v0, $a2, 0x1A0
    ctx->pc = 0x1f2844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 416));
    // 0x1f2848: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f284c: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1F284Cu;
    SET_GPR_U32(ctx, 31, 0x1F2854u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1F284Cu, 0x1F2854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2854u;
label_1f2854:
    // 0x1f2854: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f2854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2858: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f285c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1f285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1f2860: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x1f2860u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f2864: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2864u;
    SET_GPR_U32(ctx, 31, 0x1F286Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2864u, 0x1F286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F286Cu;
label_1f286c:
    // 0x1f286c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f286cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2870: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f2870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2874: 0x8cc2012c  lw          $v0, 0x12C($a2)
    ctx->pc = 0x1f2874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 300)));
    // 0x1f2878: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f287c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f287cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2880: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2884: 0x246201a8  addiu       $v0, $v1, 0x1A8
    ctx->pc = 0x1f2884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 424));
    // 0x1f2888: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1f2888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1f288c: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x1f288cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f2890: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1F2890u;
    SET_GPR_U32(ctx, 31, 0x1F2898u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1F2890u, 0x1F2898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2898u;
label_1f2898:
    // 0x1f2898: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f289c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28a0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F28A0u;
    SET_GPR_U32(ctx, 31, 0x1F28A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F28A0u, 0x1F28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28A8u;
label_1f28a8:
    // 0x1f28a8: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f28a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f28ac: 0x8ca30120  lw          $v1, 0x120($a1)
    ctx->pc = 0x1f28acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x1f28b0: 0x8fb60320  lw          $s6, 0x320($sp)
    ctx->pc = 0x1f28b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f28b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f28b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f28b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28bc: 0x26c601b0  addiu       $a2, $s6, 0x1B0
    ctx->pc = 0x1f28bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 432));
    // 0x1f28c0: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1F28C0u;
    SET_GPR_U32(ctx, 31, 0x1F28C8u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1F28C0u, 0x1F28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28C8u;
label_1f28c8:
    // 0x1f28c8: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f28c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f28cc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f28ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f28d0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F28D0u;
    SET_GPR_U32(ctx, 31, 0x1F28D8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F28D0u, 0x1F28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28D8u;
label_1f28d8:
    // 0x1f28d8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1f28d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1f28dc: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f28e0: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x1f28e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x1f28e4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f28e8: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x1f28e8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f28ec: 0x244601b8  addiu       $a2, $v0, 0x1B8
    ctx->pc = 0x1f28ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
    // 0x1f28f0: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1F28F0u;
    SET_GPR_U32(ctx, 31, 0x1F28F8u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1F28F0u, 0x1F28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28F8u;
label_1f28f8:
    // 0x1f28f8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1f28f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1f28fc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2904: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2904u;
    SET_GPR_U32(ctx, 31, 0x1F290Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2904u, 0x1F290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F290Cu;
label_1f290c:
    // 0x1f290c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f290cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2910: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2914: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x1f2914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
    // 0x1f2918: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f291c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f291cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2924: 0x246201c0  addiu       $v0, $v1, 0x1C0
    ctx->pc = 0x1f2924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x1f2928: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f292c: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1F292Cu;
    SET_GPR_U32(ctx, 31, 0x1F2934u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1F292Cu, 0x1F2934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2934u;
label_1f2934:
    // 0x1f2934: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f2934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2938: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f293c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2940: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2940u;
    SET_GPR_U32(ctx, 31, 0x1F2948u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2940u, 0x1F2948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2948u;
label_1f2948:
    // 0x1f2948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f294c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2950: 0x8c45011c  lw          $a1, 0x11C($v0)
    ctx->pc = 0x1f2950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x1f2954: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2958: 0x244201c8  addiu       $v0, $v0, 0x1C8
    ctx->pc = 0x1f2958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x1f295c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f295cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2960: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1F2960u;
    SET_GPR_U32(ctx, 31, 0x1F2968u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1F2960u, 0x1F2968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2968u;
label_1f2968:
    // 0x1f2968: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1f2968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1f296c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f296cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2970: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2970u;
    SET_GPR_U32(ctx, 31, 0x1F2978u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2970u, 0x1F2978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2978u;
label_1f2978:
    // 0x1f2978: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f297c: 0x8ca6012c  lw          $a2, 0x12C($a1)
    ctx->pc = 0x1f297cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 300)));
    // 0x1f2980: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2988: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f2988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f298c: 0x247401d0  addiu       $s4, $v1, 0x1D0
    ctx->pc = 0x1f298cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x1f2990: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f2990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2994: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1F2994u;
    SET_GPR_U32(ctx, 31, 0x1F299Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1F2994u, 0x1F299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F299Cu;
label_1f299c:
    // 0x1f299c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1f299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1f29a0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f29a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f29a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29a8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F29A8u;
    SET_GPR_U32(ctx, 31, 0x1F29B0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F29A8u, 0x1F29B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29B0u;
label_1f29b0:
    // 0x1f29b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f29b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29b4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f29b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f29b8: 0x8c450120  lw          $a1, 0x120($v0)
    ctx->pc = 0x1f29b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1f29bc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f29c0: 0x244201d8  addiu       $v0, $v0, 0x1D8
    ctx->pc = 0x1f29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
    // 0x1f29c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f29c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29c8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1F29C8u;
    SET_GPR_U32(ctx, 31, 0x1F29D0u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1F29C8u, 0x1F29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29D0u;
label_1f29d0:
    // 0x1f29d0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1f29d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1f29d4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f29d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f29d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f29d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F29DCu;
    SET_GPR_U32(ctx, 31, 0x1F29E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F29DCu, 0x1F29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29E4u;
label_1f29e4:
    // 0x1f29e4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f29e8: 0x8c850124  lw          $a1, 0x124($a0)
    ctx->pc = 0x1f29e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x1f29ec: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f29f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f29f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29f4: 0x246601e0  addiu       $a2, $v1, 0x1E0
    ctx->pc = 0x1f29f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x1f29f8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1F29F8u;
    SET_GPR_U32(ctx, 31, 0x1F2A00u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1F29F8u, 0x1F2A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A00u;
label_1f2a00:
    // 0x1f2a00: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a04: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2A04u;
    SET_GPR_U32(ctx, 31, 0x1F2A0Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2A04u, 0x1F2A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A0Cu;
label_1f2a0c:
    // 0x1f2a0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a10: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a14: 0x8c500128  lw          $s0, 0x128($v0)
    ctx->pc = 0x1f2a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x1f2a18: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a24: 0x24e301e8  addiu       $v1, $a3, 0x1E8
    ctx->pc = 0x1f2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 488));
    // 0x1f2a28: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f2a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a2c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1F2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A34u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1F2A2Cu, 0x1F2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A34u;
label_1f2a34:
    // 0x1f2a34: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f2a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a38: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a3c: 0x24c801f0  addiu       $t0, $a2, 0x1F0
    ctx->pc = 0x1f2a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
    // 0x1f2a40: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f2a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a44: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f2a48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a4c: 0xc056708  jal         func_159C20
    ctx->pc = 0x1F2A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A54u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1F2A4Cu, 0x1F2A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A54u;
label_1f2a54:
    // 0x1f2a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a58: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a5c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a60: 0x244301fc  addiu       $v1, $v0, 0x1FC
    ctx->pc = 0x1f2a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1f2a64: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f2a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a68: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x1f2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x1f2a6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a70: 0xc056708  jal         func_159C20
    ctx->pc = 0x1F2A70u;
    SET_GPR_U32(ctx, 31, 0x1F2A78u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1F2A70u, 0x1F2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A78u;
label_1f2a78:
    // 0x1f2a78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a7c: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f2a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a80: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2a80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a84: 0x24c80208  addiu       $t0, $a2, 0x208
    ctx->pc = 0x1f2a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 520));
    // 0x1f2a88: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f2a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a8c: 0x8ce500a4  lw          $a1, 0xA4($a3)
    ctx->pc = 0x1f2a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x1f2a90: 0xc056708  jal         func_159C20
    ctx->pc = 0x1F2A90u;
    SET_GPR_U32(ctx, 31, 0x1F2A98u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1F2A90u, 0x1F2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A98u;
label_1f2a98:
    // 0x1f2a98: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2a9c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2aa0: 0x24870214  addiu       $a3, $a0, 0x214
    ctx->pc = 0x1f2aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 532));
    // 0x1f2aa4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f2aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2aa8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1f2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f2aac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f2aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ab0: 0xc056708  jal         func_159C20
    ctx->pc = 0x1F2AB0u;
    SET_GPR_U32(ctx, 31, 0x1F2AB8u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1F2AB0u, 0x1F2AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AB8u;
label_1f2ab8:
    // 0x1f2ab8: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2abc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2ac0: 0x24870220  addiu       $a3, $a0, 0x220
    ctx->pc = 0x1f2ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x1f2ac4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f2ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ac8: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1f2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f2acc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f2accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ad0: 0xc056708  jal         func_159C20
    ctx->pc = 0x1F2AD0u;
    SET_GPR_U32(ctx, 31, 0x1F2AD8u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1F2AD0u, 0x1F2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AD8u;
label_1f2ad8:
    // 0x1f2ad8: 0x2786b6c0  addiu       $a2, $gp, -0x4940
    ctx->pc = 0x1f2ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1f2adc: 0xafa60240  sw          $a2, 0x240($sp)
    ctx->pc = 0x1f2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 6));
    // 0x1f2ae0: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1f2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1f2ae4: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x1f2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x1f2ae8: 0x2788b6c0  addiu       $t0, $gp, -0x4940
    ctx->pc = 0x1f2ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1f2aec: 0xafa80248  sw          $t0, 0x248($sp)
    ctx->pc = 0x1f2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 8));
    // 0x1f2af0: 0x2785b6c0  addiu       $a1, $gp, -0x4940
    ctx->pc = 0x1f2af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1f2af4: 0xafa5024c  sw          $a1, 0x24C($sp)
    ctx->pc = 0x1f2af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 5));
    // 0x1f2af8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2afc: 0x36220004  ori         $v0, $s1, 0x4
    ctx->pc = 0x1f2afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x1f2b00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f2b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b04: 0x36240008  ori         $a0, $s1, 0x8
    ctx->pc = 0x1f2b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x1f2b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f2b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f2b0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b10: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x1F2B10u;
    {
        const bool branch_taken_0x1f2b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2b10) {
            ctx->pc = 0x1F324Cu;
            goto label_1f324c;
        }
    }
    ctx->pc = 0x1F2B18u;
label_1f2b18:
    // 0x1f2b18: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2b1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b20: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2B20u;
    SET_GPR_U32(ctx, 31, 0x1F2B28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2B20u, 0x1F2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B28u;
label_1f2b28:
    // 0x1f2b28: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x1f2b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x1f2b2c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2b30: 0x246200a8  addiu       $v0, $v1, 0xA8
    ctx->pc = 0x1f2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
    // 0x1f2b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b3c: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2B3Cu;
    SET_GPR_U32(ctx, 31, 0x1F2B44u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2B3Cu, 0x1F2B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B44u;
label_1f2b44:
    // 0x1f2b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b48: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2B48u;
    SET_GPR_U32(ctx, 31, 0x1F2B50u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2B48u, 0x1F2B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B50u;
label_1f2b50:
    // 0x1f2b50: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f2b54: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2b54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2b58: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2b5c: 0x7ba40230  lq          $a0, 0x230($sp)
    ctx->pc = 0x1f2b5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1f2b60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b64: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x1f2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f2b68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b6c: 0x24e201a0  addiu       $v0, $a3, 0x1A0
    ctx->pc = 0x1f2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 416));
    // 0x1f2b70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b74: 0x246801c8  addiu       $t0, $v1, 0x1C8
    ctx->pc = 0x1f2b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 456));
    // 0x1f2b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b7c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f2b7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b80: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2b80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b84: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F2B84u;
    SET_GPR_U32(ctx, 31, 0x1F2B8Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F2B84u, 0x1F2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B8Cu;
label_1f2b8c:
    // 0x1f2b8c: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x1f2b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x1f2b90: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2b94: 0x244501f0  addiu       $a1, $v0, 0x1F0
    ctx->pc = 0x1f2b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x1f2b98: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ba0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F2BA0u;
    SET_GPR_U32(ctx, 31, 0x1F2BA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F2BA0u, 0x1F2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BA8u;
label_1f2ba8:
    // 0x1f2ba8: 0x7ba30220  lq          $v1, 0x220($sp)
    ctx->pc = 0x1f2ba8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1f2bac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f2bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f2bb0: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2bb4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2BB4u;
    SET_GPR_U32(ctx, 31, 0x1F2BBCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2BB4u, 0x1F2BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BBCu;
label_1f2bbc:
    // 0x1f2bbc: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1f2bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1f2bc0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2bc4: 0x24a500a8  addiu       $a1, $a1, 0xA8
    ctx->pc = 0x1f2bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
    // 0x1f2bc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bd0: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2BD0u;
    SET_GPR_U32(ctx, 31, 0x1F2BD8u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2BD0u, 0x1F2BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BD8u;
label_1f2bd8:
    // 0x1f2bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bdc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2BDCu;
    SET_GPR_U32(ctx, 31, 0x1F2BE4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2BDCu, 0x1F2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2BE4u;
label_1f2be4:
    // 0x1f2be4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2be8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f2bec: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2becu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2bf0: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2bf4: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x1f2bf4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1f2bf8: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x1f2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f2bfc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c00: 0x24e201a8  addiu       $v0, $a3, 0x1A8
    ctx->pc = 0x1f2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 424));
    // 0x1f2c04: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c08: 0x246801d0  addiu       $t0, $v1, 0x1D0
    ctx->pc = 0x1f2c08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x1f2c0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c10: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f2c10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2c14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c18: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F2C18u;
    SET_GPR_U32(ctx, 31, 0x1F2C20u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F2C18u, 0x1F2C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C20u;
label_1f2c20:
    // 0x1f2c20: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1f2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1f2c24: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2c28: 0x24a501fc  addiu       $a1, $a1, 0x1FC
    ctx->pc = 0x1f2c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 508));
    // 0x1f2c2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c34: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F2C34u;
    SET_GPR_U32(ctx, 31, 0x1F2C3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F2C34u, 0x1F2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C3Cu;
label_1f2c3c:
    // 0x1f2c3c: 0x7ba30200  lq          $v1, 0x200($sp)
    ctx->pc = 0x1f2c3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1f2c40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f2c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f2c44: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2c48: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2C48u;
    SET_GPR_U32(ctx, 31, 0x1F2C50u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2C48u, 0x1F2C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C50u;
label_1f2c50:
    // 0x1f2c50: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f2c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1f2c54: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2c58: 0x24a500a8  addiu       $a1, $a1, 0xA8
    ctx->pc = 0x1f2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
    // 0x1f2c5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c64: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2C64u;
    SET_GPR_U32(ctx, 31, 0x1F2C6Cu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2C64u, 0x1F2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C6Cu;
label_1f2c6c:
    // 0x1f2c6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c70: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2C70u;
    SET_GPR_U32(ctx, 31, 0x1F2C78u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2C70u, 0x1F2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C78u;
label_1f2c78:
    // 0x1f2c78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c7c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f2c80: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2c84: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2c88: 0x7ba401f0  lq          $a0, 0x1F0($sp)
    ctx->pc = 0x1f2c88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1f2c8c: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f2c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f2c90: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x1f2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x1f2c94: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2c98: 0x246801d8  addiu       $t0, $v1, 0x1D8
    ctx->pc = 0x1f2c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 472));
    // 0x1f2c9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ca0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f2ca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ca4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2ca4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ca8: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F2CA8u;
    SET_GPR_U32(ctx, 31, 0x1F2CB0u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F2CA8u, 0x1F2CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CB0u;
label_1f2cb0:
    // 0x1f2cb0: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1f2cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1f2cb4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2cb8: 0x24450208  addiu       $a1, $v0, 0x208
    ctx->pc = 0x1f2cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1f2cbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cc4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F2CC4u;
    SET_GPR_U32(ctx, 31, 0x1F2CCCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F2CC4u, 0x1F2CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CCCu;
label_1f2ccc:
    // 0x1f2ccc: 0x7ba301e0  lq          $v1, 0x1E0($sp)
    ctx->pc = 0x1f2cccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1f2cd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f2cd4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2cd8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2CD8u;
    SET_GPR_U32(ctx, 31, 0x1F2CE0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2CD8u, 0x1F2CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CE0u;
label_1f2ce0:
    // 0x1f2ce0: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1f2ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1f2ce4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2ce8: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x1f2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f2cec: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1f2cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1f2cf0: 0x7ba401c0  lq          $a0, 0x1C0($sp)
    ctx->pc = 0x1f2cf0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1f2cf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cf8: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2CF8u;
    SET_GPR_U32(ctx, 31, 0x1F2D00u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2CF8u, 0x1F2D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D00u;
label_1f2d00:
    // 0x1f2d00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d04: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2D04u;
    SET_GPR_U32(ctx, 31, 0x1F2D0Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2D04u, 0x1F2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D0Cu;
label_1f2d0c:
    // 0x1f2d0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d10: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f2d14: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2d18: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2d1c: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x1f2d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
    // 0x1f2d20: 0x7ba401d0  lq          $a0, 0x1D0($sp)
    ctx->pc = 0x1f2d20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1f2d24: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f2d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f2d28: 0x244701b8  addiu       $a3, $v0, 0x1B8
    ctx->pc = 0x1f2d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
    // 0x1f2d2c: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x1f2d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f2d30: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1f2d34: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f2d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2d38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d3c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f2d3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2d40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d44: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F2D44u;
    SET_GPR_U32(ctx, 31, 0x1F2D4Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F2D44u, 0x1F2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D4Cu;
label_1f2d4c:
    // 0x1f2d4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f2d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d50: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2d54: 0x24a50214  addiu       $a1, $a1, 0x214
    ctx->pc = 0x1f2d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 532));
    // 0x1f2d58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d60: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F2D60u;
    SET_GPR_U32(ctx, 31, 0x1F2D68u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F2D60u, 0x1F2D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D68u;
label_1f2d68:
    // 0x1f2d68: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1f2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x1f2d6c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2d70: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2D70u;
    SET_GPR_U32(ctx, 31, 0x1F2D78u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2D70u, 0x1F2D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D78u;
label_1f2d78:
    // 0x1f2d78: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1f2d7c: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2d80: 0x24a500a8  addiu       $a1, $a1, 0xA8
    ctx->pc = 0x1f2d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
    // 0x1f2d84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d8c: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F2D94u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2D8Cu, 0x1F2D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D94u;
label_1f2d94:
    // 0x1f2d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d98: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2D98u;
    SET_GPR_U32(ctx, 31, 0x1F2DA0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2D98u, 0x1F2DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DA0u;
label_1f2da0:
    // 0x1f2da0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2da4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f2da8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2dac: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2db0: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x1f2db0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f2db4: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f2db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f2db8: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x1f2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x1f2dbc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dc0: 0x246801e8  addiu       $t0, $v1, 0x1E8
    ctx->pc = 0x1f2dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 488));
    // 0x1f2dc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2dc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dc8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f2dc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2dccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dd0: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F2DD0u;
    SET_GPR_U32(ctx, 31, 0x1F2DD8u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F2DD0u, 0x1F2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DD8u;
label_1f2dd8:
    // 0x1f2dd8: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1f2dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1f2ddc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2de0: 0x24a20220  addiu       $v0, $a1, 0x220
    ctx->pc = 0x1f2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
    // 0x1f2de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2dec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F2DECu;
    SET_GPR_U32(ctx, 31, 0x1F2DF4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F2DECu, 0x1F2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2DF4u;
label_1f2df4:
    // 0x1f2df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2df8: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1f2df8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1f2dfc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1f2e00: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e08: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2E08u;
    SET_GPR_U32(ctx, 31, 0x1F2E10u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2E08u, 0x1F2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E10u;
label_1f2e10:
    // 0x1f2e10: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1f2e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1f2e14: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2e18: 0x24a300a8  addiu       $v1, $a1, 0xA8
    ctx->pc = 0x1f2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 168));
    // 0x1f2e1c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f2e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e24: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2E24u;
    SET_GPR_U32(ctx, 31, 0x1F2E2Cu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2E24u, 0x1F2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E2Cu;
label_1f2e2c:
    // 0x1f2e2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e30: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2E30u;
    SET_GPR_U32(ctx, 31, 0x1F2E38u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2E30u, 0x1F2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E38u;
label_1f2e38:
    // 0x1f2e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e3c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f2e40: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2e44: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2e48: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x1f2e48u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f2e4c: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f2e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f2e50: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x1f2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1f2e54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e58: 0x246801c8  addiu       $t0, $v1, 0x1C8
    ctx->pc = 0x1f2e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 456));
    // 0x1f2e5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2e5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e60: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f2e60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2e64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e68: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F2E68u;
    SET_GPR_U32(ctx, 31, 0x1F2E70u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F2E68u, 0x1F2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E70u;
label_1f2e70:
    // 0x1f2e70: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1f2e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1f2e74: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2e78: 0x24a601f0  addiu       $a2, $a1, 0x1F0
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x1f2e7c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f2e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e84: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F2E84u;
    SET_GPR_U32(ctx, 31, 0x1F2E8Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F2E84u, 0x1F2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E8Cu;
label_1f2e8c:
    // 0x1f2e8c: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x1f2e8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f2e90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f2e94: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2e98: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2E98u;
    SET_GPR_U32(ctx, 31, 0x1F2EA0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2E98u, 0x1F2EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EA0u;
label_1f2ea0:
    // 0x1f2ea0: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1f2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1f2ea4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2ea8: 0x244500a8  addiu       $a1, $v0, 0xA8
    ctx->pc = 0x1f2ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f2eac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eb4: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2EB4u;
    SET_GPR_U32(ctx, 31, 0x1F2EBCu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2EB4u, 0x1F2EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EBCu;
label_1f2ebc:
    // 0x1f2ebc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ec0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2EC0u;
    SET_GPR_U32(ctx, 31, 0x1F2EC8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2EC0u, 0x1F2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EC8u;
label_1f2ec8:
    // 0x1f2ec8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f2ecc: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2ed0: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2ed4: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x1f2ed4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f2ed8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2edc: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x1f2edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f2ee0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ee4: 0x24e201a8  addiu       $v0, $a3, 0x1A8
    ctx->pc = 0x1f2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 424));
    // 0x1f2ee8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f2ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eec: 0x246801d0  addiu       $t0, $v1, 0x1D0
    ctx->pc = 0x1f2eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x1f2ef0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2ef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ef4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f2ef4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ef8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2ef8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2efc: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F2EFCu;
    SET_GPR_U32(ctx, 31, 0x1F2F04u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F2EFCu, 0x1F2F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F04u;
label_1f2f04:
    // 0x1f2f04: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1f2f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1f2f08: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2f0c: 0x24a201fc  addiu       $v0, $a1, 0x1FC
    ctx->pc = 0x1f2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 508));
    // 0x1f2f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f18: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F2F18u;
    SET_GPR_U32(ctx, 31, 0x1F2F20u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F2F18u, 0x1F2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F20u;
label_1f2f20:
    // 0x1f2f20: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x1f2f20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f2f24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f2f28: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f2f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2f2c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2F34u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2F2Cu, 0x1F2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F34u;
label_1f2f34:
    // 0x1f2f34: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1f2f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1f2f38: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2f3c: 0x244500a8  addiu       $a1, $v0, 0xA8
    ctx->pc = 0x1f2f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f2f40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f48: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2F48u;
    SET_GPR_U32(ctx, 31, 0x1F2F50u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2F48u, 0x1F2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F50u;
label_1f2f50:
    // 0x1f2f50: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f54: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f2f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f58: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2F58u;
    SET_GPR_U32(ctx, 31, 0x1F2F60u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2F58u, 0x1F2F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F60u;
label_1f2f60:
    // 0x1f2f60: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f2f64: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f2f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2f68: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2f6c: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1f2f6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f2f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f74: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x1f2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f2f78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f7c: 0x24e701b0  addiu       $a3, $a3, 0x1B0
    ctx->pc = 0x1f2f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
    // 0x1f2f80: 0x246201d8  addiu       $v0, $v1, 0x1D8
    ctx->pc = 0x1f2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 472));
    // 0x1f2f84: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f2f84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2f88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f8c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f2f8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f90: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f2f90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f94: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F2F94u;
    SET_GPR_U32(ctx, 31, 0x1F2F9Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F2F94u, 0x1F2F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F9Cu;
label_1f2f9c:
    // 0x1f2f9c: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1f2f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1f2fa0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2fa4: 0x24a50208  addiu       $a1, $a1, 0x208
    ctx->pc = 0x1f2fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 520));
    // 0x1f2fa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fb0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F2FB0u;
    SET_GPR_U32(ctx, 31, 0x1F2FB8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F2FB0u, 0x1F2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FB8u;
label_1f2fb8:
    // 0x1f2fb8: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x1f2fb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f2fbc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f2fc0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f2fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2fc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fc8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F2FC8u;
    SET_GPR_U32(ctx, 31, 0x1F2FD0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F2FC8u, 0x1F2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FD0u;
label_1f2fd0:
    // 0x1f2fd0: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1f2fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1f2fd4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f2fd8: 0x244500a8  addiu       $a1, $v0, 0xA8
    ctx->pc = 0x1f2fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f2fdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f2fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fe4: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F2FE4u;
    SET_GPR_U32(ctx, 31, 0x1F2FECu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F2FE4u, 0x1F2FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FECu;
label_1f2fec:
    // 0x1f2fec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ff0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f2ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ff4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F2FF4u;
    SET_GPR_U32(ctx, 31, 0x1F2FFCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F2FF4u, 0x1F2FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FFCu;
label_1f2ffc:
    // 0x1f2ffc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f3000: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f3000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3004: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f3004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3008: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1f3008u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f300c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f300cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3010: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f3010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f3014: 0x24e201b8  addiu       $v0, $a3, 0x1B8
    ctx->pc = 0x1f3014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 440));
    // 0x1f3018: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f3018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f301c: 0x246801e0  addiu       $t0, $v1, 0x1E0
    ctx->pc = 0x1f301cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x1f3020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f3020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3024: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f3024u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3028: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3028u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f302c: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F302Cu;
    SET_GPR_U32(ctx, 31, 0x1F3034u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F302Cu, 0x1F3034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3034u;
label_1f3034:
    // 0x1f3034: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1f3034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x1f3038: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f3038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f303c: 0x24a60214  addiu       $a2, $a1, 0x214
    ctx->pc = 0x1f303cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 532));
    // 0x1f3040: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f3040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3048: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F3048u;
    SET_GPR_U32(ctx, 31, 0x1F3050u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F3048u, 0x1F3050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3050u;
label_1f3050:
    // 0x1f3050: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x1f3050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f3054: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f3054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f3058: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f3058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f305c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3060: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3060u;
    SET_GPR_U32(ctx, 31, 0x1F3068u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3060u, 0x1F3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3068u;
label_1f3068:
    // 0x1f3068: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1f3068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x1f306c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3070: 0x244500a8  addiu       $a1, $v0, 0xA8
    ctx->pc = 0x1f3070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f3074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f3074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f307c: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x1F307Cu;
    SET_GPR_U32(ctx, 31, 0x1F3084u);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x1F307Cu, 0x1F3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3084u;
label_1f3084:
    // 0x1f3084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3088: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1F3088u;
    SET_GPR_U32(ctx, 31, 0x1F3090u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1F3088u, 0x1F3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3090u;
label_1f3090:
    // 0x1f3090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3094: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f3094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f3098: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f3098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f309c: 0x8fb60320  lw          $s6, 0x320($sp)
    ctx->pc = 0x1f309cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f30a0: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x1f30a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f30a4: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f30a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f30a8: 0x246201c0  addiu       $v0, $v1, 0x1C0
    ctx->pc = 0x1f30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x1f30ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f30acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30b0: 0x26c801e8  addiu       $t0, $s6, 0x1E8
    ctx->pc = 0x1f30b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 488));
    // 0x1f30b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f30b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30b8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f30b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f30bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30c0: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F30C0u;
    SET_GPR_U32(ctx, 31, 0x1F30C8u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F30C0u, 0x1F30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30C8u;
label_1f30c8:
    // 0x1f30c8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1f30c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1f30cc: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f30ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f30d0: 0x24850220  addiu       $a1, $a0, 0x220
    ctx->pc = 0x1f30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x1f30d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f30d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f30d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30dc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F30DCu;
    SET_GPR_U32(ctx, 31, 0x1F30E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F30DCu, 0x1F30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30E4u;
label_1f30e4:
    // 0x1f30e4: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1f30e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f30e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f30e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f30ec: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x1f30ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f30f0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f30f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30f4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F30F4u;
    SET_GPR_U32(ctx, 31, 0x1F30FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F30F4u, 0x1F30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30FCu;
label_1f30fc:
    // 0x1f30fc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1f30fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1f3100: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3104: 0x244601f0  addiu       $a2, $v0, 0x1F0
    ctx->pc = 0x1f3104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x1f3108: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1f3108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f310c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f310cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3110: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F3110u;
    SET_GPR_U32(ctx, 31, 0x1F3118u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F3110u, 0x1F3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3118u;
label_1f3118:
    // 0x1f3118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f311c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f3120: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x1f3120u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f3124: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f312c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F312Cu;
    SET_GPR_U32(ctx, 31, 0x1F3134u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F312Cu, 0x1F3134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3134u;
label_1f3134:
    // 0x1f3134: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f3134u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3138: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f313c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f313cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3140: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3140u;
    SET_GPR_U32(ctx, 31, 0x1F3148u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3140u, 0x1F3148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3148u;
label_1f3148:
    // 0x1f3148: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f3148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f314c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3150: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1f3150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1f3154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3158: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F3158u;
    SET_GPR_U32(ctx, 31, 0x1F3160u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F3158u, 0x1F3160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3160u;
label_1f3160:
    // 0x1f3160: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f3160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f3164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f316c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F316Cu;
    SET_GPR_U32(ctx, 31, 0x1F3174u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F316Cu, 0x1F3174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3174u;
label_1f3174:
    // 0x1f3174: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f317c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F317Cu;
    SET_GPR_U32(ctx, 31, 0x1F3184u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F317Cu, 0x1F3184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3184u;
label_1f3184:
    // 0x1f3184: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1f3184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1f3188: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f3188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f318c: 0x24820208  addiu       $v0, $a0, 0x208
    ctx->pc = 0x1f318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 520));
    // 0x1f3190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f3194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3198: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F3198u;
    SET_GPR_U32(ctx, 31, 0x1F31A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F3198u, 0x1F31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31A0u;
label_1f31a0:
    // 0x1f31a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f31a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31a4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1f31a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f31a8: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x1f31a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f31ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f31acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f31b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31b4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F31B4u;
    SET_GPR_U32(ctx, 31, 0x1F31BCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F31B4u, 0x1F31BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31BCu;
label_1f31bc:
    // 0x1f31bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f31bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31c0: 0x8fb40320  lw          $s4, 0x320($sp)
    ctx->pc = 0x1f31c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f31c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f31c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31c8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F31C8u;
    SET_GPR_U32(ctx, 31, 0x1F31D0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F31C8u, 0x1F31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31D0u;
label_1f31d0:
    // 0x1f31d0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1f31d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1f31d4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f31d8: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1f31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1f31dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f31dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31e0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F31E0u;
    SET_GPR_U32(ctx, 31, 0x1F31E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F31E0u, 0x1F31E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31E8u;
label_1f31e8:
    // 0x1f31e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f31e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f31ec: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1f31ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f31f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f31f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f31f4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F31F4u;
    SET_GPR_U32(ctx, 31, 0x1F31FCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F31F4u, 0x1F31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31FCu;
label_1f31fc:
    // 0x1f31fc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3204: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3204u;
    SET_GPR_U32(ctx, 31, 0x1F320Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3204u, 0x1F320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F320Cu;
label_1f320c:
    // 0x1f320c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1f320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1f3210: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f3210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3214: 0x24a20220  addiu       $v0, $a1, 0x220
    ctx->pc = 0x1f3214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 544));
    // 0x1f3218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f321c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f321cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3220: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F3220u;
    SET_GPR_U32(ctx, 31, 0x1F3228u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F3220u, 0x1F3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3228u;
label_1f3228:
    // 0x1f3228: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f322c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f322cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f3230: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1f3230u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f3234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3238: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F3238u;
    SET_GPR_U32(ctx, 31, 0x1F3240u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F3238u, 0x1F3240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3240u;
label_1f3240:
    // 0x1f3240: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f3240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3244: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x1f3244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f3248: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f3248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f324c:
    // 0x1f324c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3250: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1f3250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f3254: 0x204282b  sltu        $a1, $s0, $a0
    ctx->pc = 0x1f3254u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f3258: 0x14a0fe2f  bnez        $a1, . + 4 + (-0x1D1 << 2)
    ctx->pc = 0x1F3258u;
    {
        const bool branch_taken_0x1f3258 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3258) {
            ctx->pc = 0x1F2B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2b18;
        }
    }
    ctx->pc = 0x1F3260u;
    // 0x1f3260: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3268: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3268u;
    SET_GPR_U32(ctx, 31, 0x1F3270u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3268u, 0x1F3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3270u;
label_1f3270:
    // 0x1f3270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f3270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3274: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f3274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f3278: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f3278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f327c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f327cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3284: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f3284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f3288: 0x244289c0  addiu       $v0, $v0, -0x7640
    ctx->pc = 0x1f3288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937024));
    // 0x1f328c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f328cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3290: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f3290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f3294: 0x24e201b0  addiu       $v0, $a3, 0x1B0
    ctx->pc = 0x1f3294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 432));
    // 0x1f3298: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f3298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f329c: 0x246801c8  addiu       $t0, $v1, 0x1C8
    ctx->pc = 0x1f329cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 456));
    // 0x1f32a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f32a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32a4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f32a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f32a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32ac: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F32ACu;
    SET_GPR_U32(ctx, 31, 0x1F32B4u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F32ACu, 0x1F32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32B4u;
label_1f32b4:
    // 0x1f32b4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f32b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f32b8: 0xac820190  sw          $v0, 0x190($a0)
    ctx->pc = 0x1f32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 2));
    // 0x1f32bc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f32c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f32c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32c4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F32C4u;
    SET_GPR_U32(ctx, 31, 0x1F32CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F32C4u, 0x1F32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32CCu;
label_1f32cc:
    // 0x1f32cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f32ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32d0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f32d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f32d4: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f32d8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f32dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f32dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32e0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f32e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f32e4: 0x24a589c0  addiu       $a1, $a1, -0x7640
    ctx->pc = 0x1f32e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937024));
    // 0x1f32e8: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f32e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f32ec: 0x246701b8  addiu       $a3, $v1, 0x1B8
    ctx->pc = 0x1f32ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 440));
    // 0x1f32f0: 0x244801c8  addiu       $t0, $v0, 0x1C8
    ctx->pc = 0x1f32f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 456));
    // 0x1f32f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f32f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32f8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f32f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f32fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f32fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3300: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F3300u;
    SET_GPR_U32(ctx, 31, 0x1F3308u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F3300u, 0x1F3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3308u;
label_1f3308:
    // 0x1f3308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f330c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3310: 0xac450194  sw          $a1, 0x194($v0)
    ctx->pc = 0x1f3310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 5));
    // 0x1f3314: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f3314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3318: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3318u;
    SET_GPR_U32(ctx, 31, 0x1F3320u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3318u, 0x1F3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3320u;
label_1f3320:
    // 0x1f3320: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f3320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f3324: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f3324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3328: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f3328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f332c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3330: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f3330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f3334: 0x244289c0  addiu       $v0, $v0, -0x7640
    ctx->pc = 0x1f3334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937024));
    // 0x1f3338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f333c: 0x27a20240  addiu       $v0, $sp, 0x240
    ctx->pc = 0x1f333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f3340: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3344: 0x24e701c0  addiu       $a3, $a3, 0x1C0
    ctx->pc = 0x1f3344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x1f3348: 0x246801c8  addiu       $t0, $v1, 0x1C8
    ctx->pc = 0x1f3348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 456));
    // 0x1f334c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f334cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3350: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f3350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3354: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f3354u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3358: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F3358u;
    SET_GPR_U32(ctx, 31, 0x1F3360u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F3358u, 0x1F3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3360u;
label_1f3360:
    // 0x1f3360: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f3360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3364: 0xac620198  sw          $v0, 0x198($v1)
    ctx->pc = 0x1f3364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 408), GPR_U32(ctx, 2));
    // 0x1f3368: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f3368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f336c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F336Cu;
    SET_GPR_U32(ctx, 31, 0x1F3374u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F336Cu, 0x1F3374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3374u;
label_1f3374:
    // 0x1f3374: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1f3374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1f3378: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f3378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f337c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3384: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f3384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f3388: 0x244289c0  addiu       $v0, $v0, -0x7640
    ctx->pc = 0x1f3388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937024));
    // 0x1f338c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f338cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3390: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x1f3390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x1f3394: 0x24e201a8  addiu       $v0, $a3, 0x1A8
    ctx->pc = 0x1f3394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 424));
    // 0x1f3398: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f3398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f339c: 0x246801c8  addiu       $t0, $v1, 0x1C8
    ctx->pc = 0x1f339cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 456));
    // 0x1f33a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f33a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33a4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1f33a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f33a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33ac: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1F33ACu;
    SET_GPR_U32(ctx, 31, 0x1F33B4u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1F33ACu, 0x1F33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33B4u;
label_1f33b4:
    // 0x1f33b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f33b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33b8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f33bc: 0xac45019c  sw          $a1, 0x19C($v0)
    ctx->pc = 0x1f33bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 412), GPR_U32(ctx, 5));
    // 0x1f33c0: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f33c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f33c4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F33C4u;
    SET_GPR_U32(ctx, 31, 0x1F33CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F33C4u, 0x1F33CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33CCu;
label_1f33cc:
    // 0x1f33cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f33ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33d0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f33d4: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x1f33d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x1f33d8: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x1f33d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1f33dc: 0x8c430190  lw          $v1, 0x190($v0)
    ctx->pc = 0x1f33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 400)));
    // 0x1f33e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f33e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33e4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f33e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f33e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f33ec: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F33ECu;
    SET_GPR_U32(ctx, 31, 0x1F33F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F33ECu, 0x1F33F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33F4u;
label_1f33f4:
    // 0x1f33f4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f33f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f33f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F33F8u;
    SET_GPR_U32(ctx, 31, 0x1F3400u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F33F8u, 0x1F3400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3400u;
label_1f3400:
    // 0x1f3400: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f3400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3404: 0x8ce30194  lw          $v1, 0x194($a3)
    ctx->pc = 0x1f3404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x1f3408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f340c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f340cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3410: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3414: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F3414u;
    SET_GPR_U32(ctx, 31, 0x1F341Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F3414u, 0x1F341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F341Cu;
label_1f341c:
    // 0x1f341c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3424: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3424u;
    SET_GPR_U32(ctx, 31, 0x1F342Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3424u, 0x1F342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F342Cu;
label_1f342c:
    // 0x1f342c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f342cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3430: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3434: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x1f3434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x1f3438: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x1f3438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1f343c: 0x8c420198  lw          $v0, 0x198($v0)
    ctx->pc = 0x1f343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x1f3440: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f3440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f344c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F344Cu;
    SET_GPR_U32(ctx, 31, 0x1F3454u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F344Cu, 0x1F3454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3454u;
label_1f3454:
    // 0x1f3454: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3458: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f345c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3460: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3460u;
    SET_GPR_U32(ctx, 31, 0x1F3468u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3460u, 0x1F3468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3468u;
label_1f3468:
    // 0x1f3468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f346c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3470: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1f3470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x1f3474: 0x7ba20210  lq          $v0, 0x210($sp)
    ctx->pc = 0x1f3474u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1f3478: 0x8c45019c  lw          $a1, 0x19C($v0)
    ctx->pc = 0x1f3478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x1f347c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f347cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3480: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F3480u;
    SET_GPR_U32(ctx, 31, 0x1F3488u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F3480u, 0x1F3488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3488u;
label_1f3488:
    // 0x1f3488: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f348c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1f348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1f3490: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f3490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3494: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f3494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3498: 0xace5026c  sw          $a1, 0x26C($a3)
    ctx->pc = 0x1f3498u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 620), GPR_U32(ctx, 5));
    // 0x1f349c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f34a0: 0x8c62026c  lw          $v0, 0x26C($v1)
    ctx->pc = 0x1f34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 620)));
    // 0x1f34a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f34a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34a8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1f34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1f34ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f34acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34b0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1F34B0u;
    SET_GPR_U32(ctx, 31, 0x1F34B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F34B0u, 0x1F34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34B8u;
label_1f34b8:
    // 0x1f34b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f34b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34bc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1f34bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f34c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34c4: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x1F34C4u;
    SET_GPR_U32(ctx, 31, 0x1F34CCu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F34C4u, 0x1F34CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34CCu;
label_1f34cc:
    // 0x1f34cc: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1f34ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1f34d0: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1f34d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1f34d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F34D4u;
    {
        const bool branch_taken_0x1f34d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f34d4) {
            ctx->pc = 0x1F3510u;
            goto label_1f3510;
        }
    }
    ctx->pc = 0x1F34DCu;
    // 0x1f34dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f34dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34e0: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x1F34E0u;
    SET_GPR_U32(ctx, 31, 0x1F34E8u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F34E0u, 0x1F34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34E8u;
label_1f34e8:
    // 0x1f34e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f34e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f34ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34f0: 0xc0aeea8  jal         func_2BBAA0
    ctx->pc = 0x1F34F0u;
    SET_GPR_U32(ctx, 31, 0x1F34F8u);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x1F34F0u, 0x1F34F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F34F8u;
label_1f34f8:
    // 0x1f34f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f34f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f34fc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1f34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1f3500: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f3500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3504: 0xac820270  sw          $v0, 0x270($a0)
    ctx->pc = 0x1f3504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
    // 0x1f3508: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F3508u;
    {
        const bool branch_taken_0x1f3508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3508) {
            ctx->pc = 0x1F354Cu;
            goto label_1f354c;
        }
    }
    ctx->pc = 0x1F3510u;
label_1f3510:
    // 0x1f3510: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3514: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f3514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x1f3518: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x1f3518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1f351c: 0x8c45026c  lw          $a1, 0x26C($v0)
    ctx->pc = 0x1f351cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x1f3520: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f3520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3524: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f3524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f3528: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1F3528u;
    SET_GPR_U32(ctx, 31, 0x1F3530u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1F3528u, 0x1F3530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3530u;
label_1f3530:
    // 0x1f3530: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f3530u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3534: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1f3534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3538: 0xc096880  jal         func_25A200
    ctx->pc = 0x1F3538u;
    SET_GPR_U32(ctx, 31, 0x1F3540u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x1F3538u, 0x1F3540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3540u;
label_1f3540:
    // 0x1f3540: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3544: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3548: 0xac450270  sw          $a1, 0x270($v0)
    ctx->pc = 0x1f3548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 624), GPR_U32(ctx, 5));
label_1f354c:
    // 0x1f354c: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3550: 0x8c660270  lw          $a2, 0x270($v1)
    ctx->pc = 0x1f3550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x1f3554: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3558: 0x8c48026c  lw          $t0, 0x26C($v0)
    ctx->pc = 0x1f3558u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 620)));
    // 0x1f355c: 0x14c8000b  bne         $a2, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F355Cu;
    {
        const bool branch_taken_0x1f355c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f355c) {
            ctx->pc = 0x1F358Cu;
            goto label_1f358c;
        }
    }
    ctx->pc = 0x1F3564u;
    // 0x1f3564: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f3564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3568: 0xc063dd0  jal         func_18F740
    ctx->pc = 0x1F3568u;
    SET_GPR_U32(ctx, 31, 0x1F3570u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1F3568u, 0x1F3570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3570u;
label_1f3570:
    // 0x1f3570: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1f3570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x1f3574: 0x7ba401e0  lq          $a0, 0x1E0($sp)
    ctx->pc = 0x1f3574u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1f3578: 0xc0aeea8  jal         func_2BBAA0
    ctx->pc = 0x1F3578u;
    SET_GPR_U32(ctx, 31, 0x1F3580u);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x1F3578u, 0x1F3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3580u;
label_1f3580:
    // 0x1f3580: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1f3580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f3584: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3588: 0xac450270  sw          $a1, 0x270($v0)
    ctx->pc = 0x1f3588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 624), GPR_U32(ctx, 5));
label_1f358c:
    // 0x1f358c: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f358cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3590: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1f3590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f3594: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1f3594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
    // 0x1f3598: 0x7ba401d0  lq          $a0, 0x1D0($sp)
    ctx->pc = 0x1f3598u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1f359c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f35a0: 0x244289d8  addiu       $v0, $v0, -0x7628
    ctx->pc = 0x1f35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937048));
    // 0x1f35a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f35a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35a8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F35A8u;
    SET_GPR_U32(ctx, 31, 0x1F35B0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F35A8u, 0x1F35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35B0u;
label_1f35b0:
    // 0x1f35b0: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1f35b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
    // 0x1f35b4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f35b8: 0x7ba301c0  lq          $v1, 0x1C0($sp)
    ctx->pc = 0x1f35b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1f35bc: 0xac430290  sw          $v1, 0x290($v0)
    ctx->pc = 0x1f35bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 656), GPR_U32(ctx, 3));
    // 0x1f35c0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f35c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f35c4: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1f35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f35c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f35c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35cc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f35d0: 0x244289f0  addiu       $v0, $v0, -0x7610
    ctx->pc = 0x1f35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937072));
    // 0x1f35d4: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1f35d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
    // 0x1f35d8: 0x7ba501b0  lq          $a1, 0x1B0($sp)
    ctx->pc = 0x1f35d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f35dc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F35DCu;
    SET_GPR_U32(ctx, 31, 0x1F35E4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F35DCu, 0x1F35E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F35E4u;
label_1f35e4:
    // 0x1f35e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f35e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35e8: 0x8fa70320  lw          $a3, 0x320($sp)
    ctx->pc = 0x1f35e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f35ec: 0xace60294  sw          $a2, 0x294($a3)
    ctx->pc = 0x1f35ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 660), GPR_U32(ctx, 6));
    // 0x1f35f0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f35f4: 0x8c530030  lw          $s3, 0x30($v0)
    ctx->pc = 0x1f35f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f35f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f35f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f35fc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f35fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f3600: 0x24a58a10  addiu       $a1, $a1, -0x75F0
    ctx->pc = 0x1f3600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937104));
    // 0x1f3604: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F3604u;
    SET_GPR_U32(ctx, 31, 0x1F360Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F3604u, 0x1F360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F360Cu;
label_1f360c:
    // 0x1f360c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f360cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3610: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3614: 0xac450298  sw          $a1, 0x298($v0)
    ctx->pc = 0x1f3614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 5));
    // 0x1f3618: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f3618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f361c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1f361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f3620: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1f3620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x1f3624: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x1f3624u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f3628: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f3628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f362c: 0x24a58a30  addiu       $a1, $a1, -0x75D0
    ctx->pc = 0x1f362cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937136));
    // 0x1f3630: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F3630u;
    SET_GPR_U32(ctx, 31, 0x1F3638u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F3630u, 0x1F3638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3638u;
label_1f3638:
    // 0x1f3638: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f3638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f363c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3640: 0xac45029c  sw          $a1, 0x29C($v0)
    ctx->pc = 0x1f3640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 668), GPR_U32(ctx, 5));
    // 0x1f3644: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f3644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3648: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1f3648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f364c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3650: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1f3650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1f3654: 0x24638a50  addiu       $v1, $v1, -0x75B0
    ctx->pc = 0x1f3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937168));
    // 0x1f3658: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f3658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f365c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F365Cu;
    SET_GPR_U32(ctx, 31, 0x1F3664u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F365Cu, 0x1F3664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3664u;
label_1f3664:
    // 0x1f3664: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3668: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f366c: 0xac4602a0  sw          $a2, 0x2A0($v0)
    ctx->pc = 0x1f366cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 672), GPR_U32(ctx, 6));
    // 0x1f3670: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f3670u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3674: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x1f3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1f3678: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1f3678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1f367c: 0x7ba40190  lq          $a0, 0x190($sp)
    ctx->pc = 0x1f367cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1f3680: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f3680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f3684: 0x24a58a70  addiu       $a1, $a1, -0x7590
    ctx->pc = 0x1f3684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937200));
    // 0x1f3688: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F3688u;
    SET_GPR_U32(ctx, 31, 0x1F3690u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F3688u, 0x1F3690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3690u;
label_1f3690:
    // 0x1f3690: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f3690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3694: 0xaca202a4  sw          $v0, 0x2A4($a1)
    ctx->pc = 0x1f3694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 676), GPR_U32(ctx, 2));
    // 0x1f3698: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f369c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f36a0: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1f36a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x1f36a4: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x1f36a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1f36a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f36ac: 0x24a58a88  addiu       $a1, $a1, -0x7578
    ctx->pc = 0x1f36acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937224));
    // 0x1f36b0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1F36B0u;
    SET_GPR_U32(ctx, 31, 0x1F36B8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1F36B0u, 0x1F36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36B8u;
label_1f36b8:
    // 0x1f36b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f36b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36bc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f36c0: 0xac4302a8  sw          $v1, 0x2A8($v0)
    ctx->pc = 0x1f36c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 680), GPR_U32(ctx, 3));
    // 0x1f36c4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f36c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f36c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f36c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36cc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F36CCu;
    SET_GPR_U32(ctx, 31, 0x1F36D4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F36CCu, 0x1F36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36D4u;
label_1f36d4:
    // 0x1f36d4: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f36d8: 0x8c660290  lw          $a2, 0x290($v1)
    ctx->pc = 0x1f36d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 656)));
    // 0x1f36dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f36dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36e0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f36e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f36e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36e8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F36E8u;
    SET_GPR_U32(ctx, 31, 0x1F36F0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F36E8u, 0x1F36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F36F0u;
label_1f36f0:
    // 0x1f36f0: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f36f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f36f4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f36f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f36f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F36F8u;
    SET_GPR_U32(ctx, 31, 0x1F3700u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F36F8u, 0x1F3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3700u;
label_1f3700:
    // 0x1f3700: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1f3700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1f3704: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f3704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3708: 0x8ca60294  lw          $a2, 0x294($a1)
    ctx->pc = 0x1f3708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 660)));
    // 0x1f370c: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x1f370cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f3710: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f3710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3718: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F3718u;
    SET_GPR_U32(ctx, 31, 0x1F3720u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F3718u, 0x1F3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3720u;
label_1f3720:
    // 0x1f3720: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f3720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3724: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3724u;
    SET_GPR_U32(ctx, 31, 0x1F372Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3724u, 0x1F372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F372Cu;
label_1f372c:
    // 0x1f372c: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1f372cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x1f3730: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3734: 0x8c450298  lw          $a1, 0x298($v0)
    ctx->pc = 0x1f3734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 664)));
    // 0x1f3738: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x1f3738u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f373c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f373cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3740: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F3740u;
    SET_GPR_U32(ctx, 31, 0x1F3748u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F3740u, 0x1F3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3748u;
label_1f3748:
    // 0x1f3748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f374c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3754: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3754u;
    SET_GPR_U32(ctx, 31, 0x1F375Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3754u, 0x1F375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F375Cu;
label_1f375c:
    // 0x1f375c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f375cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3760: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f3760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3764: 0x8c62029c  lw          $v0, 0x29C($v1)
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 668)));
    // 0x1f3768: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f3768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f376c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f376cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3774: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F3774u;
    SET_GPR_U32(ctx, 31, 0x1F377Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F3774u, 0x1F377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F377Cu;
label_1f377c:
    // 0x1f377c: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x1f377cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3780: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3784: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F3784u;
    SET_GPR_U32(ctx, 31, 0x1F378Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F3784u, 0x1F378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F378Cu;
label_1f378c:
    // 0x1f378c: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1f378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1f3790: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f3790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3794: 0x8ca202a0  lw          $v0, 0x2A0($a1)
    ctx->pc = 0x1f3794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 672)));
    // 0x1f3798: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x1f3798u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f379c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f379cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f37a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37a4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F37A4u;
    SET_GPR_U32(ctx, 31, 0x1F37ACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F37A4u, 0x1F37ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37ACu;
label_1f37ac:
    // 0x1f37ac: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x1f37acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f37b0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F37B0u;
    SET_GPR_U32(ctx, 31, 0x1F37B8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F37B0u, 0x1F37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37B8u;
label_1f37b8:
    // 0x1f37b8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1f37b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x1f37bc: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f37c0: 0x8c4502a4  lw          $a1, 0x2A4($v0)
    ctx->pc = 0x1f37c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
    // 0x1f37c4: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1f37c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f37c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f37c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37cc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F37CCu;
    SET_GPR_U32(ctx, 31, 0x1F37D4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F37CCu, 0x1F37D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37D4u;
label_1f37d4:
    // 0x1f37d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f37d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37d8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x1f37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f37dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f37dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37e0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F37E0u;
    SET_GPR_U32(ctx, 31, 0x1F37E8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F37E0u, 0x1F37E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F37E8u;
label_1f37e8:
    // 0x1f37e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f37e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37ec: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x1f37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f37f0: 0x8c6202a8  lw          $v0, 0x2A8($v1)
    ctx->pc = 0x1f37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 680)));
    // 0x1f37f4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f37f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f37f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f37fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f37fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3800: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F3800u;
    SET_GPR_U32(ctx, 31, 0x1F3808u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F3800u, 0x1F3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3808u;
label_1f3808:
    // 0x1f3808: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f3808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f380c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1f380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1f3810: 0x24428aa0  addiu       $v0, $v0, -0x7560
    ctx->pc = 0x1f3810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937248));
    // 0x1f3814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3818: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1F3818u;
    SET_GPR_U32(ctx, 31, 0x1F3820u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1F3818u, 0x1F3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3820u;
label_1f3820:
    // 0x1f3820: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1f3820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x1f3824: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x1f3824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1f3828: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1f3828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f382c: 0xaca20060  sw          $v0, 0x60($a1)
    ctx->pc = 0x1f382cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 2));
    // 0x1f3830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3834: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1f3834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f3838: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f3838u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f383c: 0x27a50300  addiu       $a1, $sp, 0x300
    ctx->pc = 0x1f383cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1f3840: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f3840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3844: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f3844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3848: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1f3848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x1f384c: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x1f384cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f3850: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1F3850u;
    SET_GPR_U32(ctx, 31, 0x1F3858u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1F3850u, 0x1F3858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3858u;
label_1f3858:
    // 0x1f3858: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1f3858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x1f385c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f385cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3860: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f3860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3864: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f3864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3868: 0xc051428  jal         func_1450A0
    ctx->pc = 0x1F3868u;
    SET_GPR_U32(ctx, 31, 0x1F3870u);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x1F3868u, 0x1F3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3870u;
label_1f3870:
    // 0x1f3870: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1f3870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3874:
    // 0x1f3874: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f3874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f3878: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1f3878u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f387c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1f387cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f3880: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1f3880u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f3884: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1f3884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f3888: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f3888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f388c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f388cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f3890: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f3890u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3894: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f3894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3898: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f389c: 0x27bd0330  addiu       $sp, $sp, 0x330
    ctx->pc = 0x1f389cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x1f38a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F38A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F38A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F38A8u;
    // 0x1f38a8: 0x0  nop
    ctx->pc = 0x1f38a8u;
    // NOP
    // 0x1f38ac: 0x0  nop
    ctx->pc = 0x1f38acu;
    // NOP
    ctx->pc = 0x1f38b0u;
}
