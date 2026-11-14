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

// Function: sub_002B2CE0
// Address: 0x2b2ce0 - 0x2b4b70
void sub_002B2CE0_0x2b2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2CE0_0x2b2ce0");
#endif

    switch (ctx->pc) {
        case 0x2b2ce0u: goto label_2b2ce0;
        case 0x2b2ce4u: goto label_2b2ce4;
        case 0x2b2ce8u: goto label_2b2ce8;
        case 0x2b2cecu: goto label_2b2cec;
        case 0x2b2cf0u: goto label_2b2cf0;
        case 0x2b2cf4u: goto label_2b2cf4;
        case 0x2b2cf8u: goto label_2b2cf8;
        case 0x2b2cfcu: goto label_2b2cfc;
        case 0x2b2d00u: goto label_2b2d00;
        case 0x2b2d04u: goto label_2b2d04;
        case 0x2b2d08u: goto label_2b2d08;
        case 0x2b2d0cu: goto label_2b2d0c;
        case 0x2b2d10u: goto label_2b2d10;
        case 0x2b2d14u: goto label_2b2d14;
        case 0x2b2d18u: goto label_2b2d18;
        case 0x2b2d1cu: goto label_2b2d1c;
        case 0x2b2d20u: goto label_2b2d20;
        case 0x2b2d24u: goto label_2b2d24;
        case 0x2b2d28u: goto label_2b2d28;
        case 0x2b2d2cu: goto label_2b2d2c;
        case 0x2b2d30u: goto label_2b2d30;
        case 0x2b2d34u: goto label_2b2d34;
        case 0x2b2d38u: goto label_2b2d38;
        case 0x2b2d3cu: goto label_2b2d3c;
        case 0x2b2d40u: goto label_2b2d40;
        case 0x2b2d44u: goto label_2b2d44;
        case 0x2b2d48u: goto label_2b2d48;
        case 0x2b2d4cu: goto label_2b2d4c;
        case 0x2b2d50u: goto label_2b2d50;
        case 0x2b2d54u: goto label_2b2d54;
        case 0x2b2d58u: goto label_2b2d58;
        case 0x2b2d5cu: goto label_2b2d5c;
        case 0x2b2d60u: goto label_2b2d60;
        case 0x2b2d64u: goto label_2b2d64;
        case 0x2b2d68u: goto label_2b2d68;
        case 0x2b2d6cu: goto label_2b2d6c;
        case 0x2b2d70u: goto label_2b2d70;
        case 0x2b2d74u: goto label_2b2d74;
        case 0x2b2d78u: goto label_2b2d78;
        case 0x2b2d7cu: goto label_2b2d7c;
        case 0x2b2d80u: goto label_2b2d80;
        case 0x2b2d84u: goto label_2b2d84;
        case 0x2b2d88u: goto label_2b2d88;
        case 0x2b2d8cu: goto label_2b2d8c;
        case 0x2b2d90u: goto label_2b2d90;
        case 0x2b2d94u: goto label_2b2d94;
        case 0x2b2d98u: goto label_2b2d98;
        case 0x2b2d9cu: goto label_2b2d9c;
        case 0x2b2da0u: goto label_2b2da0;
        case 0x2b2da4u: goto label_2b2da4;
        case 0x2b2da8u: goto label_2b2da8;
        case 0x2b2dacu: goto label_2b2dac;
        case 0x2b2db0u: goto label_2b2db0;
        case 0x2b2db4u: goto label_2b2db4;
        case 0x2b2db8u: goto label_2b2db8;
        case 0x2b2dbcu: goto label_2b2dbc;
        case 0x2b2dc0u: goto label_2b2dc0;
        case 0x2b2dc4u: goto label_2b2dc4;
        case 0x2b2dc8u: goto label_2b2dc8;
        case 0x2b2dccu: goto label_2b2dcc;
        case 0x2b2dd0u: goto label_2b2dd0;
        case 0x2b2dd4u: goto label_2b2dd4;
        case 0x2b2dd8u: goto label_2b2dd8;
        case 0x2b2ddcu: goto label_2b2ddc;
        case 0x2b2de0u: goto label_2b2de0;
        case 0x2b2de4u: goto label_2b2de4;
        case 0x2b2de8u: goto label_2b2de8;
        case 0x2b2decu: goto label_2b2dec;
        case 0x2b2df0u: goto label_2b2df0;
        case 0x2b2df4u: goto label_2b2df4;
        case 0x2b2df8u: goto label_2b2df8;
        case 0x2b2dfcu: goto label_2b2dfc;
        case 0x2b2e00u: goto label_2b2e00;
        case 0x2b2e04u: goto label_2b2e04;
        case 0x2b2e08u: goto label_2b2e08;
        case 0x2b2e0cu: goto label_2b2e0c;
        case 0x2b2e10u: goto label_2b2e10;
        case 0x2b2e14u: goto label_2b2e14;
        case 0x2b2e18u: goto label_2b2e18;
        case 0x2b2e1cu: goto label_2b2e1c;
        case 0x2b2e20u: goto label_2b2e20;
        case 0x2b2e24u: goto label_2b2e24;
        case 0x2b2e28u: goto label_2b2e28;
        case 0x2b2e2cu: goto label_2b2e2c;
        case 0x2b2e30u: goto label_2b2e30;
        case 0x2b2e34u: goto label_2b2e34;
        case 0x2b2e38u: goto label_2b2e38;
        case 0x2b2e3cu: goto label_2b2e3c;
        case 0x2b2e40u: goto label_2b2e40;
        case 0x2b2e44u: goto label_2b2e44;
        case 0x2b2e48u: goto label_2b2e48;
        case 0x2b2e4cu: goto label_2b2e4c;
        case 0x2b2e50u: goto label_2b2e50;
        case 0x2b2e54u: goto label_2b2e54;
        case 0x2b2e58u: goto label_2b2e58;
        case 0x2b2e5cu: goto label_2b2e5c;
        case 0x2b2e60u: goto label_2b2e60;
        case 0x2b2e64u: goto label_2b2e64;
        case 0x2b2e68u: goto label_2b2e68;
        case 0x2b2e6cu: goto label_2b2e6c;
        case 0x2b2e70u: goto label_2b2e70;
        case 0x2b2e74u: goto label_2b2e74;
        case 0x2b2e78u: goto label_2b2e78;
        case 0x2b2e7cu: goto label_2b2e7c;
        case 0x2b2e80u: goto label_2b2e80;
        case 0x2b2e84u: goto label_2b2e84;
        case 0x2b2e88u: goto label_2b2e88;
        case 0x2b2e8cu: goto label_2b2e8c;
        case 0x2b2e90u: goto label_2b2e90;
        case 0x2b2e94u: goto label_2b2e94;
        case 0x2b2e98u: goto label_2b2e98;
        case 0x2b2e9cu: goto label_2b2e9c;
        case 0x2b2ea0u: goto label_2b2ea0;
        case 0x2b2ea4u: goto label_2b2ea4;
        case 0x2b2ea8u: goto label_2b2ea8;
        case 0x2b2eacu: goto label_2b2eac;
        case 0x2b2eb0u: goto label_2b2eb0;
        case 0x2b2eb4u: goto label_2b2eb4;
        case 0x2b2eb8u: goto label_2b2eb8;
        case 0x2b2ebcu: goto label_2b2ebc;
        case 0x2b2ec0u: goto label_2b2ec0;
        case 0x2b2ec4u: goto label_2b2ec4;
        case 0x2b2ec8u: goto label_2b2ec8;
        case 0x2b2eccu: goto label_2b2ecc;
        case 0x2b2ed0u: goto label_2b2ed0;
        case 0x2b2ed4u: goto label_2b2ed4;
        case 0x2b2ed8u: goto label_2b2ed8;
        case 0x2b2edcu: goto label_2b2edc;
        case 0x2b2ee0u: goto label_2b2ee0;
        case 0x2b2ee4u: goto label_2b2ee4;
        case 0x2b2ee8u: goto label_2b2ee8;
        case 0x2b2eecu: goto label_2b2eec;
        case 0x2b2ef0u: goto label_2b2ef0;
        case 0x2b2ef4u: goto label_2b2ef4;
        case 0x2b2ef8u: goto label_2b2ef8;
        case 0x2b2efcu: goto label_2b2efc;
        case 0x2b2f00u: goto label_2b2f00;
        case 0x2b2f04u: goto label_2b2f04;
        case 0x2b2f08u: goto label_2b2f08;
        case 0x2b2f0cu: goto label_2b2f0c;
        case 0x2b2f10u: goto label_2b2f10;
        case 0x2b2f14u: goto label_2b2f14;
        case 0x2b2f18u: goto label_2b2f18;
        case 0x2b2f1cu: goto label_2b2f1c;
        case 0x2b2f20u: goto label_2b2f20;
        case 0x2b2f24u: goto label_2b2f24;
        case 0x2b2f28u: goto label_2b2f28;
        case 0x2b2f2cu: goto label_2b2f2c;
        case 0x2b2f30u: goto label_2b2f30;
        case 0x2b2f34u: goto label_2b2f34;
        case 0x2b2f38u: goto label_2b2f38;
        case 0x2b2f3cu: goto label_2b2f3c;
        case 0x2b2f40u: goto label_2b2f40;
        case 0x2b2f44u: goto label_2b2f44;
        case 0x2b2f48u: goto label_2b2f48;
        case 0x2b2f4cu: goto label_2b2f4c;
        case 0x2b2f50u: goto label_2b2f50;
        case 0x2b2f54u: goto label_2b2f54;
        case 0x2b2f58u: goto label_2b2f58;
        case 0x2b2f5cu: goto label_2b2f5c;
        case 0x2b2f60u: goto label_2b2f60;
        case 0x2b2f64u: goto label_2b2f64;
        case 0x2b2f68u: goto label_2b2f68;
        case 0x2b2f6cu: goto label_2b2f6c;
        case 0x2b2f70u: goto label_2b2f70;
        case 0x2b2f74u: goto label_2b2f74;
        case 0x2b2f78u: goto label_2b2f78;
        case 0x2b2f7cu: goto label_2b2f7c;
        case 0x2b2f80u: goto label_2b2f80;
        case 0x2b2f84u: goto label_2b2f84;
        case 0x2b2f88u: goto label_2b2f88;
        case 0x2b2f8cu: goto label_2b2f8c;
        case 0x2b2f90u: goto label_2b2f90;
        case 0x2b2f94u: goto label_2b2f94;
        case 0x2b2f98u: goto label_2b2f98;
        case 0x2b2f9cu: goto label_2b2f9c;
        case 0x2b2fa0u: goto label_2b2fa0;
        case 0x2b2fa4u: goto label_2b2fa4;
        case 0x2b2fa8u: goto label_2b2fa8;
        case 0x2b2facu: goto label_2b2fac;
        case 0x2b2fb0u: goto label_2b2fb0;
        case 0x2b2fb4u: goto label_2b2fb4;
        case 0x2b2fb8u: goto label_2b2fb8;
        case 0x2b2fbcu: goto label_2b2fbc;
        case 0x2b2fc0u: goto label_2b2fc0;
        case 0x2b2fc4u: goto label_2b2fc4;
        case 0x2b2fc8u: goto label_2b2fc8;
        case 0x2b2fccu: goto label_2b2fcc;
        case 0x2b2fd0u: goto label_2b2fd0;
        case 0x2b2fd4u: goto label_2b2fd4;
        case 0x2b2fd8u: goto label_2b2fd8;
        case 0x2b2fdcu: goto label_2b2fdc;
        case 0x2b2fe0u: goto label_2b2fe0;
        case 0x2b2fe4u: goto label_2b2fe4;
        case 0x2b2fe8u: goto label_2b2fe8;
        case 0x2b2fecu: goto label_2b2fec;
        case 0x2b2ff0u: goto label_2b2ff0;
        case 0x2b2ff4u: goto label_2b2ff4;
        case 0x2b2ff8u: goto label_2b2ff8;
        case 0x2b2ffcu: goto label_2b2ffc;
        case 0x2b3000u: goto label_2b3000;
        case 0x2b3004u: goto label_2b3004;
        case 0x2b3008u: goto label_2b3008;
        case 0x2b300cu: goto label_2b300c;
        case 0x2b3010u: goto label_2b3010;
        case 0x2b3014u: goto label_2b3014;
        case 0x2b3018u: goto label_2b3018;
        case 0x2b301cu: goto label_2b301c;
        case 0x2b3020u: goto label_2b3020;
        case 0x2b3024u: goto label_2b3024;
        case 0x2b3028u: goto label_2b3028;
        case 0x2b302cu: goto label_2b302c;
        case 0x2b3030u: goto label_2b3030;
        case 0x2b3034u: goto label_2b3034;
        case 0x2b3038u: goto label_2b3038;
        case 0x2b303cu: goto label_2b303c;
        case 0x2b3040u: goto label_2b3040;
        case 0x2b3044u: goto label_2b3044;
        case 0x2b3048u: goto label_2b3048;
        case 0x2b304cu: goto label_2b304c;
        case 0x2b3050u: goto label_2b3050;
        case 0x2b3054u: goto label_2b3054;
        case 0x2b3058u: goto label_2b3058;
        case 0x2b305cu: goto label_2b305c;
        case 0x2b3060u: goto label_2b3060;
        case 0x2b3064u: goto label_2b3064;
        case 0x2b3068u: goto label_2b3068;
        case 0x2b306cu: goto label_2b306c;
        case 0x2b3070u: goto label_2b3070;
        case 0x2b3074u: goto label_2b3074;
        case 0x2b3078u: goto label_2b3078;
        case 0x2b307cu: goto label_2b307c;
        case 0x2b3080u: goto label_2b3080;
        case 0x2b3084u: goto label_2b3084;
        case 0x2b3088u: goto label_2b3088;
        case 0x2b308cu: goto label_2b308c;
        case 0x2b3090u: goto label_2b3090;
        case 0x2b3094u: goto label_2b3094;
        case 0x2b3098u: goto label_2b3098;
        case 0x2b309cu: goto label_2b309c;
        case 0x2b30a0u: goto label_2b30a0;
        case 0x2b30a4u: goto label_2b30a4;
        case 0x2b30a8u: goto label_2b30a8;
        case 0x2b30acu: goto label_2b30ac;
        case 0x2b30b0u: goto label_2b30b0;
        case 0x2b30b4u: goto label_2b30b4;
        case 0x2b30b8u: goto label_2b30b8;
        case 0x2b30bcu: goto label_2b30bc;
        case 0x2b30c0u: goto label_2b30c0;
        case 0x2b30c4u: goto label_2b30c4;
        case 0x2b30c8u: goto label_2b30c8;
        case 0x2b30ccu: goto label_2b30cc;
        case 0x2b30d0u: goto label_2b30d0;
        case 0x2b30d4u: goto label_2b30d4;
        case 0x2b30d8u: goto label_2b30d8;
        case 0x2b30dcu: goto label_2b30dc;
        case 0x2b30e0u: goto label_2b30e0;
        case 0x2b30e4u: goto label_2b30e4;
        case 0x2b30e8u: goto label_2b30e8;
        case 0x2b30ecu: goto label_2b30ec;
        case 0x2b30f0u: goto label_2b30f0;
        case 0x2b30f4u: goto label_2b30f4;
        case 0x2b30f8u: goto label_2b30f8;
        case 0x2b30fcu: goto label_2b30fc;
        case 0x2b3100u: goto label_2b3100;
        case 0x2b3104u: goto label_2b3104;
        case 0x2b3108u: goto label_2b3108;
        case 0x2b310cu: goto label_2b310c;
        case 0x2b3110u: goto label_2b3110;
        case 0x2b3114u: goto label_2b3114;
        case 0x2b3118u: goto label_2b3118;
        case 0x2b311cu: goto label_2b311c;
        case 0x2b3120u: goto label_2b3120;
        case 0x2b3124u: goto label_2b3124;
        case 0x2b3128u: goto label_2b3128;
        case 0x2b312cu: goto label_2b312c;
        case 0x2b3130u: goto label_2b3130;
        case 0x2b3134u: goto label_2b3134;
        case 0x2b3138u: goto label_2b3138;
        case 0x2b313cu: goto label_2b313c;
        case 0x2b3140u: goto label_2b3140;
        case 0x2b3144u: goto label_2b3144;
        case 0x2b3148u: goto label_2b3148;
        case 0x2b314cu: goto label_2b314c;
        case 0x2b3150u: goto label_2b3150;
        case 0x2b3154u: goto label_2b3154;
        case 0x2b3158u: goto label_2b3158;
        case 0x2b315cu: goto label_2b315c;
        case 0x2b3160u: goto label_2b3160;
        case 0x2b3164u: goto label_2b3164;
        case 0x2b3168u: goto label_2b3168;
        case 0x2b316cu: goto label_2b316c;
        case 0x2b3170u: goto label_2b3170;
        case 0x2b3174u: goto label_2b3174;
        case 0x2b3178u: goto label_2b3178;
        case 0x2b317cu: goto label_2b317c;
        case 0x2b3180u: goto label_2b3180;
        case 0x2b3184u: goto label_2b3184;
        case 0x2b3188u: goto label_2b3188;
        case 0x2b318cu: goto label_2b318c;
        case 0x2b3190u: goto label_2b3190;
        case 0x2b3194u: goto label_2b3194;
        case 0x2b3198u: goto label_2b3198;
        case 0x2b319cu: goto label_2b319c;
        case 0x2b31a0u: goto label_2b31a0;
        case 0x2b31a4u: goto label_2b31a4;
        case 0x2b31a8u: goto label_2b31a8;
        case 0x2b31acu: goto label_2b31ac;
        case 0x2b31b0u: goto label_2b31b0;
        case 0x2b31b4u: goto label_2b31b4;
        case 0x2b31b8u: goto label_2b31b8;
        case 0x2b31bcu: goto label_2b31bc;
        case 0x2b31c0u: goto label_2b31c0;
        case 0x2b31c4u: goto label_2b31c4;
        case 0x2b31c8u: goto label_2b31c8;
        case 0x2b31ccu: goto label_2b31cc;
        case 0x2b31d0u: goto label_2b31d0;
        case 0x2b31d4u: goto label_2b31d4;
        case 0x2b31d8u: goto label_2b31d8;
        case 0x2b31dcu: goto label_2b31dc;
        case 0x2b31e0u: goto label_2b31e0;
        case 0x2b31e4u: goto label_2b31e4;
        case 0x2b31e8u: goto label_2b31e8;
        case 0x2b31ecu: goto label_2b31ec;
        case 0x2b31f0u: goto label_2b31f0;
        case 0x2b31f4u: goto label_2b31f4;
        case 0x2b31f8u: goto label_2b31f8;
        case 0x2b31fcu: goto label_2b31fc;
        case 0x2b3200u: goto label_2b3200;
        case 0x2b3204u: goto label_2b3204;
        case 0x2b3208u: goto label_2b3208;
        case 0x2b320cu: goto label_2b320c;
        case 0x2b3210u: goto label_2b3210;
        case 0x2b3214u: goto label_2b3214;
        case 0x2b3218u: goto label_2b3218;
        case 0x2b321cu: goto label_2b321c;
        case 0x2b3220u: goto label_2b3220;
        case 0x2b3224u: goto label_2b3224;
        case 0x2b3228u: goto label_2b3228;
        case 0x2b322cu: goto label_2b322c;
        case 0x2b3230u: goto label_2b3230;
        case 0x2b3234u: goto label_2b3234;
        case 0x2b3238u: goto label_2b3238;
        case 0x2b323cu: goto label_2b323c;
        case 0x2b3240u: goto label_2b3240;
        case 0x2b3244u: goto label_2b3244;
        case 0x2b3248u: goto label_2b3248;
        case 0x2b324cu: goto label_2b324c;
        case 0x2b3250u: goto label_2b3250;
        case 0x2b3254u: goto label_2b3254;
        case 0x2b3258u: goto label_2b3258;
        case 0x2b325cu: goto label_2b325c;
        case 0x2b3260u: goto label_2b3260;
        case 0x2b3264u: goto label_2b3264;
        case 0x2b3268u: goto label_2b3268;
        case 0x2b326cu: goto label_2b326c;
        case 0x2b3270u: goto label_2b3270;
        case 0x2b3274u: goto label_2b3274;
        case 0x2b3278u: goto label_2b3278;
        case 0x2b327cu: goto label_2b327c;
        case 0x2b3280u: goto label_2b3280;
        case 0x2b3284u: goto label_2b3284;
        case 0x2b3288u: goto label_2b3288;
        case 0x2b328cu: goto label_2b328c;
        case 0x2b3290u: goto label_2b3290;
        case 0x2b3294u: goto label_2b3294;
        case 0x2b3298u: goto label_2b3298;
        case 0x2b329cu: goto label_2b329c;
        case 0x2b32a0u: goto label_2b32a0;
        case 0x2b32a4u: goto label_2b32a4;
        case 0x2b32a8u: goto label_2b32a8;
        case 0x2b32acu: goto label_2b32ac;
        case 0x2b32b0u: goto label_2b32b0;
        case 0x2b32b4u: goto label_2b32b4;
        case 0x2b32b8u: goto label_2b32b8;
        case 0x2b32bcu: goto label_2b32bc;
        case 0x2b32c0u: goto label_2b32c0;
        case 0x2b32c4u: goto label_2b32c4;
        case 0x2b32c8u: goto label_2b32c8;
        case 0x2b32ccu: goto label_2b32cc;
        case 0x2b32d0u: goto label_2b32d0;
        case 0x2b32d4u: goto label_2b32d4;
        case 0x2b32d8u: goto label_2b32d8;
        case 0x2b32dcu: goto label_2b32dc;
        case 0x2b32e0u: goto label_2b32e0;
        case 0x2b32e4u: goto label_2b32e4;
        case 0x2b32e8u: goto label_2b32e8;
        case 0x2b32ecu: goto label_2b32ec;
        case 0x2b32f0u: goto label_2b32f0;
        case 0x2b32f4u: goto label_2b32f4;
        case 0x2b32f8u: goto label_2b32f8;
        case 0x2b32fcu: goto label_2b32fc;
        case 0x2b3300u: goto label_2b3300;
        case 0x2b3304u: goto label_2b3304;
        case 0x2b3308u: goto label_2b3308;
        case 0x2b330cu: goto label_2b330c;
        case 0x2b3310u: goto label_2b3310;
        case 0x2b3314u: goto label_2b3314;
        case 0x2b3318u: goto label_2b3318;
        case 0x2b331cu: goto label_2b331c;
        case 0x2b3320u: goto label_2b3320;
        case 0x2b3324u: goto label_2b3324;
        case 0x2b3328u: goto label_2b3328;
        case 0x2b332cu: goto label_2b332c;
        case 0x2b3330u: goto label_2b3330;
        case 0x2b3334u: goto label_2b3334;
        case 0x2b3338u: goto label_2b3338;
        case 0x2b333cu: goto label_2b333c;
        case 0x2b3340u: goto label_2b3340;
        case 0x2b3344u: goto label_2b3344;
        case 0x2b3348u: goto label_2b3348;
        case 0x2b334cu: goto label_2b334c;
        case 0x2b3350u: goto label_2b3350;
        case 0x2b3354u: goto label_2b3354;
        case 0x2b3358u: goto label_2b3358;
        case 0x2b335cu: goto label_2b335c;
        case 0x2b3360u: goto label_2b3360;
        case 0x2b3364u: goto label_2b3364;
        case 0x2b3368u: goto label_2b3368;
        case 0x2b336cu: goto label_2b336c;
        case 0x2b3370u: goto label_2b3370;
        case 0x2b3374u: goto label_2b3374;
        case 0x2b3378u: goto label_2b3378;
        case 0x2b337cu: goto label_2b337c;
        case 0x2b3380u: goto label_2b3380;
        case 0x2b3384u: goto label_2b3384;
        case 0x2b3388u: goto label_2b3388;
        case 0x2b338cu: goto label_2b338c;
        case 0x2b3390u: goto label_2b3390;
        case 0x2b3394u: goto label_2b3394;
        case 0x2b3398u: goto label_2b3398;
        case 0x2b339cu: goto label_2b339c;
        case 0x2b33a0u: goto label_2b33a0;
        case 0x2b33a4u: goto label_2b33a4;
        case 0x2b33a8u: goto label_2b33a8;
        case 0x2b33acu: goto label_2b33ac;
        case 0x2b33b0u: goto label_2b33b0;
        case 0x2b33b4u: goto label_2b33b4;
        case 0x2b33b8u: goto label_2b33b8;
        case 0x2b33bcu: goto label_2b33bc;
        case 0x2b33c0u: goto label_2b33c0;
        case 0x2b33c4u: goto label_2b33c4;
        case 0x2b33c8u: goto label_2b33c8;
        case 0x2b33ccu: goto label_2b33cc;
        case 0x2b33d0u: goto label_2b33d0;
        case 0x2b33d4u: goto label_2b33d4;
        case 0x2b33d8u: goto label_2b33d8;
        case 0x2b33dcu: goto label_2b33dc;
        case 0x2b33e0u: goto label_2b33e0;
        case 0x2b33e4u: goto label_2b33e4;
        case 0x2b33e8u: goto label_2b33e8;
        case 0x2b33ecu: goto label_2b33ec;
        case 0x2b33f0u: goto label_2b33f0;
        case 0x2b33f4u: goto label_2b33f4;
        case 0x2b33f8u: goto label_2b33f8;
        case 0x2b33fcu: goto label_2b33fc;
        case 0x2b3400u: goto label_2b3400;
        case 0x2b3404u: goto label_2b3404;
        case 0x2b3408u: goto label_2b3408;
        case 0x2b340cu: goto label_2b340c;
        case 0x2b3410u: goto label_2b3410;
        case 0x2b3414u: goto label_2b3414;
        case 0x2b3418u: goto label_2b3418;
        case 0x2b341cu: goto label_2b341c;
        case 0x2b3420u: goto label_2b3420;
        case 0x2b3424u: goto label_2b3424;
        case 0x2b3428u: goto label_2b3428;
        case 0x2b342cu: goto label_2b342c;
        case 0x2b3430u: goto label_2b3430;
        case 0x2b3434u: goto label_2b3434;
        case 0x2b3438u: goto label_2b3438;
        case 0x2b343cu: goto label_2b343c;
        case 0x2b3440u: goto label_2b3440;
        case 0x2b3444u: goto label_2b3444;
        case 0x2b3448u: goto label_2b3448;
        case 0x2b344cu: goto label_2b344c;
        case 0x2b3450u: goto label_2b3450;
        case 0x2b3454u: goto label_2b3454;
        case 0x2b3458u: goto label_2b3458;
        case 0x2b345cu: goto label_2b345c;
        case 0x2b3460u: goto label_2b3460;
        case 0x2b3464u: goto label_2b3464;
        case 0x2b3468u: goto label_2b3468;
        case 0x2b346cu: goto label_2b346c;
        case 0x2b3470u: goto label_2b3470;
        case 0x2b3474u: goto label_2b3474;
        case 0x2b3478u: goto label_2b3478;
        case 0x2b347cu: goto label_2b347c;
        case 0x2b3480u: goto label_2b3480;
        case 0x2b3484u: goto label_2b3484;
        case 0x2b3488u: goto label_2b3488;
        case 0x2b348cu: goto label_2b348c;
        case 0x2b3490u: goto label_2b3490;
        case 0x2b3494u: goto label_2b3494;
        case 0x2b3498u: goto label_2b3498;
        case 0x2b349cu: goto label_2b349c;
        case 0x2b34a0u: goto label_2b34a0;
        case 0x2b34a4u: goto label_2b34a4;
        case 0x2b34a8u: goto label_2b34a8;
        case 0x2b34acu: goto label_2b34ac;
        case 0x2b34b0u: goto label_2b34b0;
        case 0x2b34b4u: goto label_2b34b4;
        case 0x2b34b8u: goto label_2b34b8;
        case 0x2b34bcu: goto label_2b34bc;
        case 0x2b34c0u: goto label_2b34c0;
        case 0x2b34c4u: goto label_2b34c4;
        case 0x2b34c8u: goto label_2b34c8;
        case 0x2b34ccu: goto label_2b34cc;
        case 0x2b34d0u: goto label_2b34d0;
        case 0x2b34d4u: goto label_2b34d4;
        case 0x2b34d8u: goto label_2b34d8;
        case 0x2b34dcu: goto label_2b34dc;
        case 0x2b34e0u: goto label_2b34e0;
        case 0x2b34e4u: goto label_2b34e4;
        case 0x2b34e8u: goto label_2b34e8;
        case 0x2b34ecu: goto label_2b34ec;
        case 0x2b34f0u: goto label_2b34f0;
        case 0x2b34f4u: goto label_2b34f4;
        case 0x2b34f8u: goto label_2b34f8;
        case 0x2b34fcu: goto label_2b34fc;
        case 0x2b3500u: goto label_2b3500;
        case 0x2b3504u: goto label_2b3504;
        case 0x2b3508u: goto label_2b3508;
        case 0x2b350cu: goto label_2b350c;
        case 0x2b3510u: goto label_2b3510;
        case 0x2b3514u: goto label_2b3514;
        case 0x2b3518u: goto label_2b3518;
        case 0x2b351cu: goto label_2b351c;
        case 0x2b3520u: goto label_2b3520;
        case 0x2b3524u: goto label_2b3524;
        case 0x2b3528u: goto label_2b3528;
        case 0x2b352cu: goto label_2b352c;
        case 0x2b3530u: goto label_2b3530;
        case 0x2b3534u: goto label_2b3534;
        case 0x2b3538u: goto label_2b3538;
        case 0x2b353cu: goto label_2b353c;
        case 0x2b3540u: goto label_2b3540;
        case 0x2b3544u: goto label_2b3544;
        case 0x2b3548u: goto label_2b3548;
        case 0x2b354cu: goto label_2b354c;
        case 0x2b3550u: goto label_2b3550;
        case 0x2b3554u: goto label_2b3554;
        case 0x2b3558u: goto label_2b3558;
        case 0x2b355cu: goto label_2b355c;
        case 0x2b3560u: goto label_2b3560;
        case 0x2b3564u: goto label_2b3564;
        case 0x2b3568u: goto label_2b3568;
        case 0x2b356cu: goto label_2b356c;
        case 0x2b3570u: goto label_2b3570;
        case 0x2b3574u: goto label_2b3574;
        case 0x2b3578u: goto label_2b3578;
        case 0x2b357cu: goto label_2b357c;
        case 0x2b3580u: goto label_2b3580;
        case 0x2b3584u: goto label_2b3584;
        case 0x2b3588u: goto label_2b3588;
        case 0x2b358cu: goto label_2b358c;
        case 0x2b3590u: goto label_2b3590;
        case 0x2b3594u: goto label_2b3594;
        case 0x2b3598u: goto label_2b3598;
        case 0x2b359cu: goto label_2b359c;
        case 0x2b35a0u: goto label_2b35a0;
        case 0x2b35a4u: goto label_2b35a4;
        case 0x2b35a8u: goto label_2b35a8;
        case 0x2b35acu: goto label_2b35ac;
        case 0x2b35b0u: goto label_2b35b0;
        case 0x2b35b4u: goto label_2b35b4;
        case 0x2b35b8u: goto label_2b35b8;
        case 0x2b35bcu: goto label_2b35bc;
        case 0x2b35c0u: goto label_2b35c0;
        case 0x2b35c4u: goto label_2b35c4;
        case 0x2b35c8u: goto label_2b35c8;
        case 0x2b35ccu: goto label_2b35cc;
        case 0x2b35d0u: goto label_2b35d0;
        case 0x2b35d4u: goto label_2b35d4;
        case 0x2b35d8u: goto label_2b35d8;
        case 0x2b35dcu: goto label_2b35dc;
        case 0x2b35e0u: goto label_2b35e0;
        case 0x2b35e4u: goto label_2b35e4;
        case 0x2b35e8u: goto label_2b35e8;
        case 0x2b35ecu: goto label_2b35ec;
        case 0x2b35f0u: goto label_2b35f0;
        case 0x2b35f4u: goto label_2b35f4;
        case 0x2b35f8u: goto label_2b35f8;
        case 0x2b35fcu: goto label_2b35fc;
        case 0x2b3600u: goto label_2b3600;
        case 0x2b3604u: goto label_2b3604;
        case 0x2b3608u: goto label_2b3608;
        case 0x2b360cu: goto label_2b360c;
        case 0x2b3610u: goto label_2b3610;
        case 0x2b3614u: goto label_2b3614;
        case 0x2b3618u: goto label_2b3618;
        case 0x2b361cu: goto label_2b361c;
        case 0x2b3620u: goto label_2b3620;
        case 0x2b3624u: goto label_2b3624;
        case 0x2b3628u: goto label_2b3628;
        case 0x2b362cu: goto label_2b362c;
        case 0x2b3630u: goto label_2b3630;
        case 0x2b3634u: goto label_2b3634;
        case 0x2b3638u: goto label_2b3638;
        case 0x2b363cu: goto label_2b363c;
        case 0x2b3640u: goto label_2b3640;
        case 0x2b3644u: goto label_2b3644;
        case 0x2b3648u: goto label_2b3648;
        case 0x2b364cu: goto label_2b364c;
        case 0x2b3650u: goto label_2b3650;
        case 0x2b3654u: goto label_2b3654;
        case 0x2b3658u: goto label_2b3658;
        case 0x2b365cu: goto label_2b365c;
        case 0x2b3660u: goto label_2b3660;
        case 0x2b3664u: goto label_2b3664;
        case 0x2b3668u: goto label_2b3668;
        case 0x2b366cu: goto label_2b366c;
        case 0x2b3670u: goto label_2b3670;
        case 0x2b3674u: goto label_2b3674;
        case 0x2b3678u: goto label_2b3678;
        case 0x2b367cu: goto label_2b367c;
        case 0x2b3680u: goto label_2b3680;
        case 0x2b3684u: goto label_2b3684;
        case 0x2b3688u: goto label_2b3688;
        case 0x2b368cu: goto label_2b368c;
        case 0x2b3690u: goto label_2b3690;
        case 0x2b3694u: goto label_2b3694;
        case 0x2b3698u: goto label_2b3698;
        case 0x2b369cu: goto label_2b369c;
        case 0x2b36a0u: goto label_2b36a0;
        case 0x2b36a4u: goto label_2b36a4;
        case 0x2b36a8u: goto label_2b36a8;
        case 0x2b36acu: goto label_2b36ac;
        case 0x2b36b0u: goto label_2b36b0;
        case 0x2b36b4u: goto label_2b36b4;
        case 0x2b36b8u: goto label_2b36b8;
        case 0x2b36bcu: goto label_2b36bc;
        case 0x2b36c0u: goto label_2b36c0;
        case 0x2b36c4u: goto label_2b36c4;
        case 0x2b36c8u: goto label_2b36c8;
        case 0x2b36ccu: goto label_2b36cc;
        case 0x2b36d0u: goto label_2b36d0;
        case 0x2b36d4u: goto label_2b36d4;
        case 0x2b36d8u: goto label_2b36d8;
        case 0x2b36dcu: goto label_2b36dc;
        case 0x2b36e0u: goto label_2b36e0;
        case 0x2b36e4u: goto label_2b36e4;
        case 0x2b36e8u: goto label_2b36e8;
        case 0x2b36ecu: goto label_2b36ec;
        case 0x2b36f0u: goto label_2b36f0;
        case 0x2b36f4u: goto label_2b36f4;
        case 0x2b36f8u: goto label_2b36f8;
        case 0x2b36fcu: goto label_2b36fc;
        case 0x2b3700u: goto label_2b3700;
        case 0x2b3704u: goto label_2b3704;
        case 0x2b3708u: goto label_2b3708;
        case 0x2b370cu: goto label_2b370c;
        case 0x2b3710u: goto label_2b3710;
        case 0x2b3714u: goto label_2b3714;
        case 0x2b3718u: goto label_2b3718;
        case 0x2b371cu: goto label_2b371c;
        case 0x2b3720u: goto label_2b3720;
        case 0x2b3724u: goto label_2b3724;
        case 0x2b3728u: goto label_2b3728;
        case 0x2b372cu: goto label_2b372c;
        case 0x2b3730u: goto label_2b3730;
        case 0x2b3734u: goto label_2b3734;
        case 0x2b3738u: goto label_2b3738;
        case 0x2b373cu: goto label_2b373c;
        case 0x2b3740u: goto label_2b3740;
        case 0x2b3744u: goto label_2b3744;
        case 0x2b3748u: goto label_2b3748;
        case 0x2b374cu: goto label_2b374c;
        case 0x2b3750u: goto label_2b3750;
        case 0x2b3754u: goto label_2b3754;
        case 0x2b3758u: goto label_2b3758;
        case 0x2b375cu: goto label_2b375c;
        case 0x2b3760u: goto label_2b3760;
        case 0x2b3764u: goto label_2b3764;
        case 0x2b3768u: goto label_2b3768;
        case 0x2b376cu: goto label_2b376c;
        case 0x2b3770u: goto label_2b3770;
        case 0x2b3774u: goto label_2b3774;
        case 0x2b3778u: goto label_2b3778;
        case 0x2b377cu: goto label_2b377c;
        case 0x2b3780u: goto label_2b3780;
        case 0x2b3784u: goto label_2b3784;
        case 0x2b3788u: goto label_2b3788;
        case 0x2b378cu: goto label_2b378c;
        case 0x2b3790u: goto label_2b3790;
        case 0x2b3794u: goto label_2b3794;
        case 0x2b3798u: goto label_2b3798;
        case 0x2b379cu: goto label_2b379c;
        case 0x2b37a0u: goto label_2b37a0;
        case 0x2b37a4u: goto label_2b37a4;
        case 0x2b37a8u: goto label_2b37a8;
        case 0x2b37acu: goto label_2b37ac;
        case 0x2b37b0u: goto label_2b37b0;
        case 0x2b37b4u: goto label_2b37b4;
        case 0x2b37b8u: goto label_2b37b8;
        case 0x2b37bcu: goto label_2b37bc;
        case 0x2b37c0u: goto label_2b37c0;
        case 0x2b37c4u: goto label_2b37c4;
        case 0x2b37c8u: goto label_2b37c8;
        case 0x2b37ccu: goto label_2b37cc;
        case 0x2b37d0u: goto label_2b37d0;
        case 0x2b37d4u: goto label_2b37d4;
        case 0x2b37d8u: goto label_2b37d8;
        case 0x2b37dcu: goto label_2b37dc;
        case 0x2b37e0u: goto label_2b37e0;
        case 0x2b37e4u: goto label_2b37e4;
        case 0x2b37e8u: goto label_2b37e8;
        case 0x2b37ecu: goto label_2b37ec;
        case 0x2b37f0u: goto label_2b37f0;
        case 0x2b37f4u: goto label_2b37f4;
        case 0x2b37f8u: goto label_2b37f8;
        case 0x2b37fcu: goto label_2b37fc;
        case 0x2b3800u: goto label_2b3800;
        case 0x2b3804u: goto label_2b3804;
        case 0x2b3808u: goto label_2b3808;
        case 0x2b380cu: goto label_2b380c;
        case 0x2b3810u: goto label_2b3810;
        case 0x2b3814u: goto label_2b3814;
        case 0x2b3818u: goto label_2b3818;
        case 0x2b381cu: goto label_2b381c;
        case 0x2b3820u: goto label_2b3820;
        case 0x2b3824u: goto label_2b3824;
        case 0x2b3828u: goto label_2b3828;
        case 0x2b382cu: goto label_2b382c;
        case 0x2b3830u: goto label_2b3830;
        case 0x2b3834u: goto label_2b3834;
        case 0x2b3838u: goto label_2b3838;
        case 0x2b383cu: goto label_2b383c;
        case 0x2b3840u: goto label_2b3840;
        case 0x2b3844u: goto label_2b3844;
        case 0x2b3848u: goto label_2b3848;
        case 0x2b384cu: goto label_2b384c;
        case 0x2b3850u: goto label_2b3850;
        case 0x2b3854u: goto label_2b3854;
        case 0x2b3858u: goto label_2b3858;
        case 0x2b385cu: goto label_2b385c;
        case 0x2b3860u: goto label_2b3860;
        case 0x2b3864u: goto label_2b3864;
        case 0x2b3868u: goto label_2b3868;
        case 0x2b386cu: goto label_2b386c;
        case 0x2b3870u: goto label_2b3870;
        case 0x2b3874u: goto label_2b3874;
        case 0x2b3878u: goto label_2b3878;
        case 0x2b387cu: goto label_2b387c;
        case 0x2b3880u: goto label_2b3880;
        case 0x2b3884u: goto label_2b3884;
        case 0x2b3888u: goto label_2b3888;
        case 0x2b388cu: goto label_2b388c;
        case 0x2b3890u: goto label_2b3890;
        case 0x2b3894u: goto label_2b3894;
        case 0x2b3898u: goto label_2b3898;
        case 0x2b389cu: goto label_2b389c;
        case 0x2b38a0u: goto label_2b38a0;
        case 0x2b38a4u: goto label_2b38a4;
        case 0x2b38a8u: goto label_2b38a8;
        case 0x2b38acu: goto label_2b38ac;
        case 0x2b38b0u: goto label_2b38b0;
        case 0x2b38b4u: goto label_2b38b4;
        case 0x2b38b8u: goto label_2b38b8;
        case 0x2b38bcu: goto label_2b38bc;
        case 0x2b38c0u: goto label_2b38c0;
        case 0x2b38c4u: goto label_2b38c4;
        case 0x2b38c8u: goto label_2b38c8;
        case 0x2b38ccu: goto label_2b38cc;
        case 0x2b38d0u: goto label_2b38d0;
        case 0x2b38d4u: goto label_2b38d4;
        case 0x2b38d8u: goto label_2b38d8;
        case 0x2b38dcu: goto label_2b38dc;
        case 0x2b38e0u: goto label_2b38e0;
        case 0x2b38e4u: goto label_2b38e4;
        case 0x2b38e8u: goto label_2b38e8;
        case 0x2b38ecu: goto label_2b38ec;
        case 0x2b38f0u: goto label_2b38f0;
        case 0x2b38f4u: goto label_2b38f4;
        case 0x2b38f8u: goto label_2b38f8;
        case 0x2b38fcu: goto label_2b38fc;
        case 0x2b3900u: goto label_2b3900;
        case 0x2b3904u: goto label_2b3904;
        case 0x2b3908u: goto label_2b3908;
        case 0x2b390cu: goto label_2b390c;
        case 0x2b3910u: goto label_2b3910;
        case 0x2b3914u: goto label_2b3914;
        case 0x2b3918u: goto label_2b3918;
        case 0x2b391cu: goto label_2b391c;
        case 0x2b3920u: goto label_2b3920;
        case 0x2b3924u: goto label_2b3924;
        case 0x2b3928u: goto label_2b3928;
        case 0x2b392cu: goto label_2b392c;
        case 0x2b3930u: goto label_2b3930;
        case 0x2b3934u: goto label_2b3934;
        case 0x2b3938u: goto label_2b3938;
        case 0x2b393cu: goto label_2b393c;
        case 0x2b3940u: goto label_2b3940;
        case 0x2b3944u: goto label_2b3944;
        case 0x2b3948u: goto label_2b3948;
        case 0x2b394cu: goto label_2b394c;
        case 0x2b3950u: goto label_2b3950;
        case 0x2b3954u: goto label_2b3954;
        case 0x2b3958u: goto label_2b3958;
        case 0x2b395cu: goto label_2b395c;
        case 0x2b3960u: goto label_2b3960;
        case 0x2b3964u: goto label_2b3964;
        case 0x2b3968u: goto label_2b3968;
        case 0x2b396cu: goto label_2b396c;
        case 0x2b3970u: goto label_2b3970;
        case 0x2b3974u: goto label_2b3974;
        case 0x2b3978u: goto label_2b3978;
        case 0x2b397cu: goto label_2b397c;
        case 0x2b3980u: goto label_2b3980;
        case 0x2b3984u: goto label_2b3984;
        case 0x2b3988u: goto label_2b3988;
        case 0x2b398cu: goto label_2b398c;
        case 0x2b3990u: goto label_2b3990;
        case 0x2b3994u: goto label_2b3994;
        case 0x2b3998u: goto label_2b3998;
        case 0x2b399cu: goto label_2b399c;
        case 0x2b39a0u: goto label_2b39a0;
        case 0x2b39a4u: goto label_2b39a4;
        case 0x2b39a8u: goto label_2b39a8;
        case 0x2b39acu: goto label_2b39ac;
        case 0x2b39b0u: goto label_2b39b0;
        case 0x2b39b4u: goto label_2b39b4;
        case 0x2b39b8u: goto label_2b39b8;
        case 0x2b39bcu: goto label_2b39bc;
        case 0x2b39c0u: goto label_2b39c0;
        case 0x2b39c4u: goto label_2b39c4;
        case 0x2b39c8u: goto label_2b39c8;
        case 0x2b39ccu: goto label_2b39cc;
        case 0x2b39d0u: goto label_2b39d0;
        case 0x2b39d4u: goto label_2b39d4;
        case 0x2b39d8u: goto label_2b39d8;
        case 0x2b39dcu: goto label_2b39dc;
        case 0x2b39e0u: goto label_2b39e0;
        case 0x2b39e4u: goto label_2b39e4;
        case 0x2b39e8u: goto label_2b39e8;
        case 0x2b39ecu: goto label_2b39ec;
        case 0x2b39f0u: goto label_2b39f0;
        case 0x2b39f4u: goto label_2b39f4;
        case 0x2b39f8u: goto label_2b39f8;
        case 0x2b39fcu: goto label_2b39fc;
        case 0x2b3a00u: goto label_2b3a00;
        case 0x2b3a04u: goto label_2b3a04;
        case 0x2b3a08u: goto label_2b3a08;
        case 0x2b3a0cu: goto label_2b3a0c;
        case 0x2b3a10u: goto label_2b3a10;
        case 0x2b3a14u: goto label_2b3a14;
        case 0x2b3a18u: goto label_2b3a18;
        case 0x2b3a1cu: goto label_2b3a1c;
        case 0x2b3a20u: goto label_2b3a20;
        case 0x2b3a24u: goto label_2b3a24;
        case 0x2b3a28u: goto label_2b3a28;
        case 0x2b3a2cu: goto label_2b3a2c;
        case 0x2b3a30u: goto label_2b3a30;
        case 0x2b3a34u: goto label_2b3a34;
        case 0x2b3a38u: goto label_2b3a38;
        case 0x2b3a3cu: goto label_2b3a3c;
        case 0x2b3a40u: goto label_2b3a40;
        case 0x2b3a44u: goto label_2b3a44;
        case 0x2b3a48u: goto label_2b3a48;
        case 0x2b3a4cu: goto label_2b3a4c;
        case 0x2b3a50u: goto label_2b3a50;
        case 0x2b3a54u: goto label_2b3a54;
        case 0x2b3a58u: goto label_2b3a58;
        case 0x2b3a5cu: goto label_2b3a5c;
        case 0x2b3a60u: goto label_2b3a60;
        case 0x2b3a64u: goto label_2b3a64;
        case 0x2b3a68u: goto label_2b3a68;
        case 0x2b3a6cu: goto label_2b3a6c;
        case 0x2b3a70u: goto label_2b3a70;
        case 0x2b3a74u: goto label_2b3a74;
        case 0x2b3a78u: goto label_2b3a78;
        case 0x2b3a7cu: goto label_2b3a7c;
        case 0x2b3a80u: goto label_2b3a80;
        case 0x2b3a84u: goto label_2b3a84;
        case 0x2b3a88u: goto label_2b3a88;
        case 0x2b3a8cu: goto label_2b3a8c;
        case 0x2b3a90u: goto label_2b3a90;
        case 0x2b3a94u: goto label_2b3a94;
        case 0x2b3a98u: goto label_2b3a98;
        case 0x2b3a9cu: goto label_2b3a9c;
        case 0x2b3aa0u: goto label_2b3aa0;
        case 0x2b3aa4u: goto label_2b3aa4;
        case 0x2b3aa8u: goto label_2b3aa8;
        case 0x2b3aacu: goto label_2b3aac;
        case 0x2b3ab0u: goto label_2b3ab0;
        case 0x2b3ab4u: goto label_2b3ab4;
        case 0x2b3ab8u: goto label_2b3ab8;
        case 0x2b3abcu: goto label_2b3abc;
        case 0x2b3ac0u: goto label_2b3ac0;
        case 0x2b3ac4u: goto label_2b3ac4;
        case 0x2b3ac8u: goto label_2b3ac8;
        case 0x2b3accu: goto label_2b3acc;
        case 0x2b3ad0u: goto label_2b3ad0;
        case 0x2b3ad4u: goto label_2b3ad4;
        case 0x2b3ad8u: goto label_2b3ad8;
        case 0x2b3adcu: goto label_2b3adc;
        case 0x2b3ae0u: goto label_2b3ae0;
        case 0x2b3ae4u: goto label_2b3ae4;
        case 0x2b3ae8u: goto label_2b3ae8;
        case 0x2b3aecu: goto label_2b3aec;
        case 0x2b3af0u: goto label_2b3af0;
        case 0x2b3af4u: goto label_2b3af4;
        case 0x2b3af8u: goto label_2b3af8;
        case 0x2b3afcu: goto label_2b3afc;
        case 0x2b3b00u: goto label_2b3b00;
        case 0x2b3b04u: goto label_2b3b04;
        case 0x2b3b08u: goto label_2b3b08;
        case 0x2b3b0cu: goto label_2b3b0c;
        case 0x2b3b10u: goto label_2b3b10;
        case 0x2b3b14u: goto label_2b3b14;
        case 0x2b3b18u: goto label_2b3b18;
        case 0x2b3b1cu: goto label_2b3b1c;
        case 0x2b3b20u: goto label_2b3b20;
        case 0x2b3b24u: goto label_2b3b24;
        case 0x2b3b28u: goto label_2b3b28;
        case 0x2b3b2cu: goto label_2b3b2c;
        case 0x2b3b30u: goto label_2b3b30;
        case 0x2b3b34u: goto label_2b3b34;
        case 0x2b3b38u: goto label_2b3b38;
        case 0x2b3b3cu: goto label_2b3b3c;
        case 0x2b3b40u: goto label_2b3b40;
        case 0x2b3b44u: goto label_2b3b44;
        case 0x2b3b48u: goto label_2b3b48;
        case 0x2b3b4cu: goto label_2b3b4c;
        case 0x2b3b50u: goto label_2b3b50;
        case 0x2b3b54u: goto label_2b3b54;
        case 0x2b3b58u: goto label_2b3b58;
        case 0x2b3b5cu: goto label_2b3b5c;
        case 0x2b3b60u: goto label_2b3b60;
        case 0x2b3b64u: goto label_2b3b64;
        case 0x2b3b68u: goto label_2b3b68;
        case 0x2b3b6cu: goto label_2b3b6c;
        case 0x2b3b70u: goto label_2b3b70;
        case 0x2b3b74u: goto label_2b3b74;
        case 0x2b3b78u: goto label_2b3b78;
        case 0x2b3b7cu: goto label_2b3b7c;
        case 0x2b3b80u: goto label_2b3b80;
        case 0x2b3b84u: goto label_2b3b84;
        case 0x2b3b88u: goto label_2b3b88;
        case 0x2b3b8cu: goto label_2b3b8c;
        case 0x2b3b90u: goto label_2b3b90;
        case 0x2b3b94u: goto label_2b3b94;
        case 0x2b3b98u: goto label_2b3b98;
        case 0x2b3b9cu: goto label_2b3b9c;
        case 0x2b3ba0u: goto label_2b3ba0;
        case 0x2b3ba4u: goto label_2b3ba4;
        case 0x2b3ba8u: goto label_2b3ba8;
        case 0x2b3bacu: goto label_2b3bac;
        case 0x2b3bb0u: goto label_2b3bb0;
        case 0x2b3bb4u: goto label_2b3bb4;
        case 0x2b3bb8u: goto label_2b3bb8;
        case 0x2b3bbcu: goto label_2b3bbc;
        case 0x2b3bc0u: goto label_2b3bc0;
        case 0x2b3bc4u: goto label_2b3bc4;
        case 0x2b3bc8u: goto label_2b3bc8;
        case 0x2b3bccu: goto label_2b3bcc;
        case 0x2b3bd0u: goto label_2b3bd0;
        case 0x2b3bd4u: goto label_2b3bd4;
        case 0x2b3bd8u: goto label_2b3bd8;
        case 0x2b3bdcu: goto label_2b3bdc;
        case 0x2b3be0u: goto label_2b3be0;
        case 0x2b3be4u: goto label_2b3be4;
        case 0x2b3be8u: goto label_2b3be8;
        case 0x2b3becu: goto label_2b3bec;
        case 0x2b3bf0u: goto label_2b3bf0;
        case 0x2b3bf4u: goto label_2b3bf4;
        case 0x2b3bf8u: goto label_2b3bf8;
        case 0x2b3bfcu: goto label_2b3bfc;
        case 0x2b3c00u: goto label_2b3c00;
        case 0x2b3c04u: goto label_2b3c04;
        case 0x2b3c08u: goto label_2b3c08;
        case 0x2b3c0cu: goto label_2b3c0c;
        case 0x2b3c10u: goto label_2b3c10;
        case 0x2b3c14u: goto label_2b3c14;
        case 0x2b3c18u: goto label_2b3c18;
        case 0x2b3c1cu: goto label_2b3c1c;
        case 0x2b3c20u: goto label_2b3c20;
        case 0x2b3c24u: goto label_2b3c24;
        case 0x2b3c28u: goto label_2b3c28;
        case 0x2b3c2cu: goto label_2b3c2c;
        case 0x2b3c30u: goto label_2b3c30;
        case 0x2b3c34u: goto label_2b3c34;
        case 0x2b3c38u: goto label_2b3c38;
        case 0x2b3c3cu: goto label_2b3c3c;
        case 0x2b3c40u: goto label_2b3c40;
        case 0x2b3c44u: goto label_2b3c44;
        case 0x2b3c48u: goto label_2b3c48;
        case 0x2b3c4cu: goto label_2b3c4c;
        case 0x2b3c50u: goto label_2b3c50;
        case 0x2b3c54u: goto label_2b3c54;
        case 0x2b3c58u: goto label_2b3c58;
        case 0x2b3c5cu: goto label_2b3c5c;
        case 0x2b3c60u: goto label_2b3c60;
        case 0x2b3c64u: goto label_2b3c64;
        case 0x2b3c68u: goto label_2b3c68;
        case 0x2b3c6cu: goto label_2b3c6c;
        case 0x2b3c70u: goto label_2b3c70;
        case 0x2b3c74u: goto label_2b3c74;
        case 0x2b3c78u: goto label_2b3c78;
        case 0x2b3c7cu: goto label_2b3c7c;
        case 0x2b3c80u: goto label_2b3c80;
        case 0x2b3c84u: goto label_2b3c84;
        case 0x2b3c88u: goto label_2b3c88;
        case 0x2b3c8cu: goto label_2b3c8c;
        case 0x2b3c90u: goto label_2b3c90;
        case 0x2b3c94u: goto label_2b3c94;
        case 0x2b3c98u: goto label_2b3c98;
        case 0x2b3c9cu: goto label_2b3c9c;
        case 0x2b3ca0u: goto label_2b3ca0;
        case 0x2b3ca4u: goto label_2b3ca4;
        case 0x2b3ca8u: goto label_2b3ca8;
        case 0x2b3cacu: goto label_2b3cac;
        case 0x2b3cb0u: goto label_2b3cb0;
        case 0x2b3cb4u: goto label_2b3cb4;
        case 0x2b3cb8u: goto label_2b3cb8;
        case 0x2b3cbcu: goto label_2b3cbc;
        case 0x2b3cc0u: goto label_2b3cc0;
        case 0x2b3cc4u: goto label_2b3cc4;
        case 0x2b3cc8u: goto label_2b3cc8;
        case 0x2b3cccu: goto label_2b3ccc;
        case 0x2b3cd0u: goto label_2b3cd0;
        case 0x2b3cd4u: goto label_2b3cd4;
        case 0x2b3cd8u: goto label_2b3cd8;
        case 0x2b3cdcu: goto label_2b3cdc;
        case 0x2b3ce0u: goto label_2b3ce0;
        case 0x2b3ce4u: goto label_2b3ce4;
        case 0x2b3ce8u: goto label_2b3ce8;
        case 0x2b3cecu: goto label_2b3cec;
        case 0x2b3cf0u: goto label_2b3cf0;
        case 0x2b3cf4u: goto label_2b3cf4;
        case 0x2b3cf8u: goto label_2b3cf8;
        case 0x2b3cfcu: goto label_2b3cfc;
        case 0x2b3d00u: goto label_2b3d00;
        case 0x2b3d04u: goto label_2b3d04;
        case 0x2b3d08u: goto label_2b3d08;
        case 0x2b3d0cu: goto label_2b3d0c;
        case 0x2b3d10u: goto label_2b3d10;
        case 0x2b3d14u: goto label_2b3d14;
        case 0x2b3d18u: goto label_2b3d18;
        case 0x2b3d1cu: goto label_2b3d1c;
        case 0x2b3d20u: goto label_2b3d20;
        case 0x2b3d24u: goto label_2b3d24;
        case 0x2b3d28u: goto label_2b3d28;
        case 0x2b3d2cu: goto label_2b3d2c;
        case 0x2b3d30u: goto label_2b3d30;
        case 0x2b3d34u: goto label_2b3d34;
        case 0x2b3d38u: goto label_2b3d38;
        case 0x2b3d3cu: goto label_2b3d3c;
        case 0x2b3d40u: goto label_2b3d40;
        case 0x2b3d44u: goto label_2b3d44;
        case 0x2b3d48u: goto label_2b3d48;
        case 0x2b3d4cu: goto label_2b3d4c;
        case 0x2b3d50u: goto label_2b3d50;
        case 0x2b3d54u: goto label_2b3d54;
        case 0x2b3d58u: goto label_2b3d58;
        case 0x2b3d5cu: goto label_2b3d5c;
        case 0x2b3d60u: goto label_2b3d60;
        case 0x2b3d64u: goto label_2b3d64;
        case 0x2b3d68u: goto label_2b3d68;
        case 0x2b3d6cu: goto label_2b3d6c;
        case 0x2b3d70u: goto label_2b3d70;
        case 0x2b3d74u: goto label_2b3d74;
        case 0x2b3d78u: goto label_2b3d78;
        case 0x2b3d7cu: goto label_2b3d7c;
        case 0x2b3d80u: goto label_2b3d80;
        case 0x2b3d84u: goto label_2b3d84;
        case 0x2b3d88u: goto label_2b3d88;
        case 0x2b3d8cu: goto label_2b3d8c;
        case 0x2b3d90u: goto label_2b3d90;
        case 0x2b3d94u: goto label_2b3d94;
        case 0x2b3d98u: goto label_2b3d98;
        case 0x2b3d9cu: goto label_2b3d9c;
        case 0x2b3da0u: goto label_2b3da0;
        case 0x2b3da4u: goto label_2b3da4;
        case 0x2b3da8u: goto label_2b3da8;
        case 0x2b3dacu: goto label_2b3dac;
        case 0x2b3db0u: goto label_2b3db0;
        case 0x2b3db4u: goto label_2b3db4;
        case 0x2b3db8u: goto label_2b3db8;
        case 0x2b3dbcu: goto label_2b3dbc;
        case 0x2b3dc0u: goto label_2b3dc0;
        case 0x2b3dc4u: goto label_2b3dc4;
        case 0x2b3dc8u: goto label_2b3dc8;
        case 0x2b3dccu: goto label_2b3dcc;
        case 0x2b3dd0u: goto label_2b3dd0;
        case 0x2b3dd4u: goto label_2b3dd4;
        case 0x2b3dd8u: goto label_2b3dd8;
        case 0x2b3ddcu: goto label_2b3ddc;
        case 0x2b3de0u: goto label_2b3de0;
        case 0x2b3de4u: goto label_2b3de4;
        case 0x2b3de8u: goto label_2b3de8;
        case 0x2b3decu: goto label_2b3dec;
        case 0x2b3df0u: goto label_2b3df0;
        case 0x2b3df4u: goto label_2b3df4;
        case 0x2b3df8u: goto label_2b3df8;
        case 0x2b3dfcu: goto label_2b3dfc;
        case 0x2b3e00u: goto label_2b3e00;
        case 0x2b3e04u: goto label_2b3e04;
        case 0x2b3e08u: goto label_2b3e08;
        case 0x2b3e0cu: goto label_2b3e0c;
        case 0x2b3e10u: goto label_2b3e10;
        case 0x2b3e14u: goto label_2b3e14;
        case 0x2b3e18u: goto label_2b3e18;
        case 0x2b3e1cu: goto label_2b3e1c;
        case 0x2b3e20u: goto label_2b3e20;
        case 0x2b3e24u: goto label_2b3e24;
        case 0x2b3e28u: goto label_2b3e28;
        case 0x2b3e2cu: goto label_2b3e2c;
        case 0x2b3e30u: goto label_2b3e30;
        case 0x2b3e34u: goto label_2b3e34;
        case 0x2b3e38u: goto label_2b3e38;
        case 0x2b3e3cu: goto label_2b3e3c;
        case 0x2b3e40u: goto label_2b3e40;
        case 0x2b3e44u: goto label_2b3e44;
        case 0x2b3e48u: goto label_2b3e48;
        case 0x2b3e4cu: goto label_2b3e4c;
        case 0x2b3e50u: goto label_2b3e50;
        case 0x2b3e54u: goto label_2b3e54;
        case 0x2b3e58u: goto label_2b3e58;
        case 0x2b3e5cu: goto label_2b3e5c;
        case 0x2b3e60u: goto label_2b3e60;
        case 0x2b3e64u: goto label_2b3e64;
        case 0x2b3e68u: goto label_2b3e68;
        case 0x2b3e6cu: goto label_2b3e6c;
        case 0x2b3e70u: goto label_2b3e70;
        case 0x2b3e74u: goto label_2b3e74;
        case 0x2b3e78u: goto label_2b3e78;
        case 0x2b3e7cu: goto label_2b3e7c;
        case 0x2b3e80u: goto label_2b3e80;
        case 0x2b3e84u: goto label_2b3e84;
        case 0x2b3e88u: goto label_2b3e88;
        case 0x2b3e8cu: goto label_2b3e8c;
        case 0x2b3e90u: goto label_2b3e90;
        case 0x2b3e94u: goto label_2b3e94;
        case 0x2b3e98u: goto label_2b3e98;
        case 0x2b3e9cu: goto label_2b3e9c;
        case 0x2b3ea0u: goto label_2b3ea0;
        case 0x2b3ea4u: goto label_2b3ea4;
        case 0x2b3ea8u: goto label_2b3ea8;
        case 0x2b3eacu: goto label_2b3eac;
        case 0x2b3eb0u: goto label_2b3eb0;
        case 0x2b3eb4u: goto label_2b3eb4;
        case 0x2b3eb8u: goto label_2b3eb8;
        case 0x2b3ebcu: goto label_2b3ebc;
        case 0x2b3ec0u: goto label_2b3ec0;
        case 0x2b3ec4u: goto label_2b3ec4;
        case 0x2b3ec8u: goto label_2b3ec8;
        case 0x2b3eccu: goto label_2b3ecc;
        case 0x2b3ed0u: goto label_2b3ed0;
        case 0x2b3ed4u: goto label_2b3ed4;
        case 0x2b3ed8u: goto label_2b3ed8;
        case 0x2b3edcu: goto label_2b3edc;
        case 0x2b3ee0u: goto label_2b3ee0;
        case 0x2b3ee4u: goto label_2b3ee4;
        case 0x2b3ee8u: goto label_2b3ee8;
        case 0x2b3eecu: goto label_2b3eec;
        case 0x2b3ef0u: goto label_2b3ef0;
        case 0x2b3ef4u: goto label_2b3ef4;
        case 0x2b3ef8u: goto label_2b3ef8;
        case 0x2b3efcu: goto label_2b3efc;
        case 0x2b3f00u: goto label_2b3f00;
        case 0x2b3f04u: goto label_2b3f04;
        case 0x2b3f08u: goto label_2b3f08;
        case 0x2b3f0cu: goto label_2b3f0c;
        case 0x2b3f10u: goto label_2b3f10;
        case 0x2b3f14u: goto label_2b3f14;
        case 0x2b3f18u: goto label_2b3f18;
        case 0x2b3f1cu: goto label_2b3f1c;
        case 0x2b3f20u: goto label_2b3f20;
        case 0x2b3f24u: goto label_2b3f24;
        case 0x2b3f28u: goto label_2b3f28;
        case 0x2b3f2cu: goto label_2b3f2c;
        case 0x2b3f30u: goto label_2b3f30;
        case 0x2b3f34u: goto label_2b3f34;
        case 0x2b3f38u: goto label_2b3f38;
        case 0x2b3f3cu: goto label_2b3f3c;
        case 0x2b3f40u: goto label_2b3f40;
        case 0x2b3f44u: goto label_2b3f44;
        case 0x2b3f48u: goto label_2b3f48;
        case 0x2b3f4cu: goto label_2b3f4c;
        case 0x2b3f50u: goto label_2b3f50;
        case 0x2b3f54u: goto label_2b3f54;
        case 0x2b3f58u: goto label_2b3f58;
        case 0x2b3f5cu: goto label_2b3f5c;
        case 0x2b3f60u: goto label_2b3f60;
        case 0x2b3f64u: goto label_2b3f64;
        case 0x2b3f68u: goto label_2b3f68;
        case 0x2b3f6cu: goto label_2b3f6c;
        case 0x2b3f70u: goto label_2b3f70;
        case 0x2b3f74u: goto label_2b3f74;
        case 0x2b3f78u: goto label_2b3f78;
        case 0x2b3f7cu: goto label_2b3f7c;
        case 0x2b3f80u: goto label_2b3f80;
        case 0x2b3f84u: goto label_2b3f84;
        case 0x2b3f88u: goto label_2b3f88;
        case 0x2b3f8cu: goto label_2b3f8c;
        case 0x2b3f90u: goto label_2b3f90;
        case 0x2b3f94u: goto label_2b3f94;
        case 0x2b3f98u: goto label_2b3f98;
        case 0x2b3f9cu: goto label_2b3f9c;
        case 0x2b3fa0u: goto label_2b3fa0;
        case 0x2b3fa4u: goto label_2b3fa4;
        case 0x2b3fa8u: goto label_2b3fa8;
        case 0x2b3facu: goto label_2b3fac;
        case 0x2b3fb0u: goto label_2b3fb0;
        case 0x2b3fb4u: goto label_2b3fb4;
        case 0x2b3fb8u: goto label_2b3fb8;
        case 0x2b3fbcu: goto label_2b3fbc;
        case 0x2b3fc0u: goto label_2b3fc0;
        case 0x2b3fc4u: goto label_2b3fc4;
        case 0x2b3fc8u: goto label_2b3fc8;
        case 0x2b3fccu: goto label_2b3fcc;
        case 0x2b3fd0u: goto label_2b3fd0;
        case 0x2b3fd4u: goto label_2b3fd4;
        case 0x2b3fd8u: goto label_2b3fd8;
        case 0x2b3fdcu: goto label_2b3fdc;
        case 0x2b3fe0u: goto label_2b3fe0;
        case 0x2b3fe4u: goto label_2b3fe4;
        case 0x2b3fe8u: goto label_2b3fe8;
        case 0x2b3fecu: goto label_2b3fec;
        case 0x2b3ff0u: goto label_2b3ff0;
        case 0x2b3ff4u: goto label_2b3ff4;
        case 0x2b3ff8u: goto label_2b3ff8;
        case 0x2b3ffcu: goto label_2b3ffc;
        case 0x2b4000u: goto label_2b4000;
        case 0x2b4004u: goto label_2b4004;
        case 0x2b4008u: goto label_2b4008;
        case 0x2b400cu: goto label_2b400c;
        case 0x2b4010u: goto label_2b4010;
        case 0x2b4014u: goto label_2b4014;
        case 0x2b4018u: goto label_2b4018;
        case 0x2b401cu: goto label_2b401c;
        case 0x2b4020u: goto label_2b4020;
        case 0x2b4024u: goto label_2b4024;
        case 0x2b4028u: goto label_2b4028;
        case 0x2b402cu: goto label_2b402c;
        case 0x2b4030u: goto label_2b4030;
        case 0x2b4034u: goto label_2b4034;
        case 0x2b4038u: goto label_2b4038;
        case 0x2b403cu: goto label_2b403c;
        case 0x2b4040u: goto label_2b4040;
        case 0x2b4044u: goto label_2b4044;
        case 0x2b4048u: goto label_2b4048;
        case 0x2b404cu: goto label_2b404c;
        case 0x2b4050u: goto label_2b4050;
        case 0x2b4054u: goto label_2b4054;
        case 0x2b4058u: goto label_2b4058;
        case 0x2b405cu: goto label_2b405c;
        case 0x2b4060u: goto label_2b4060;
        case 0x2b4064u: goto label_2b4064;
        case 0x2b4068u: goto label_2b4068;
        case 0x2b406cu: goto label_2b406c;
        case 0x2b4070u: goto label_2b4070;
        case 0x2b4074u: goto label_2b4074;
        case 0x2b4078u: goto label_2b4078;
        case 0x2b407cu: goto label_2b407c;
        case 0x2b4080u: goto label_2b4080;
        case 0x2b4084u: goto label_2b4084;
        case 0x2b4088u: goto label_2b4088;
        case 0x2b408cu: goto label_2b408c;
        case 0x2b4090u: goto label_2b4090;
        case 0x2b4094u: goto label_2b4094;
        case 0x2b4098u: goto label_2b4098;
        case 0x2b409cu: goto label_2b409c;
        case 0x2b40a0u: goto label_2b40a0;
        case 0x2b40a4u: goto label_2b40a4;
        case 0x2b40a8u: goto label_2b40a8;
        case 0x2b40acu: goto label_2b40ac;
        case 0x2b40b0u: goto label_2b40b0;
        case 0x2b40b4u: goto label_2b40b4;
        case 0x2b40b8u: goto label_2b40b8;
        case 0x2b40bcu: goto label_2b40bc;
        case 0x2b40c0u: goto label_2b40c0;
        case 0x2b40c4u: goto label_2b40c4;
        case 0x2b40c8u: goto label_2b40c8;
        case 0x2b40ccu: goto label_2b40cc;
        case 0x2b40d0u: goto label_2b40d0;
        case 0x2b40d4u: goto label_2b40d4;
        case 0x2b40d8u: goto label_2b40d8;
        case 0x2b40dcu: goto label_2b40dc;
        case 0x2b40e0u: goto label_2b40e0;
        case 0x2b40e4u: goto label_2b40e4;
        case 0x2b40e8u: goto label_2b40e8;
        case 0x2b40ecu: goto label_2b40ec;
        case 0x2b40f0u: goto label_2b40f0;
        case 0x2b40f4u: goto label_2b40f4;
        case 0x2b40f8u: goto label_2b40f8;
        case 0x2b40fcu: goto label_2b40fc;
        case 0x2b4100u: goto label_2b4100;
        case 0x2b4104u: goto label_2b4104;
        case 0x2b4108u: goto label_2b4108;
        case 0x2b410cu: goto label_2b410c;
        case 0x2b4110u: goto label_2b4110;
        case 0x2b4114u: goto label_2b4114;
        case 0x2b4118u: goto label_2b4118;
        case 0x2b411cu: goto label_2b411c;
        case 0x2b4120u: goto label_2b4120;
        case 0x2b4124u: goto label_2b4124;
        case 0x2b4128u: goto label_2b4128;
        case 0x2b412cu: goto label_2b412c;
        case 0x2b4130u: goto label_2b4130;
        case 0x2b4134u: goto label_2b4134;
        case 0x2b4138u: goto label_2b4138;
        case 0x2b413cu: goto label_2b413c;
        case 0x2b4140u: goto label_2b4140;
        case 0x2b4144u: goto label_2b4144;
        case 0x2b4148u: goto label_2b4148;
        case 0x2b414cu: goto label_2b414c;
        case 0x2b4150u: goto label_2b4150;
        case 0x2b4154u: goto label_2b4154;
        case 0x2b4158u: goto label_2b4158;
        case 0x2b415cu: goto label_2b415c;
        case 0x2b4160u: goto label_2b4160;
        case 0x2b4164u: goto label_2b4164;
        case 0x2b4168u: goto label_2b4168;
        case 0x2b416cu: goto label_2b416c;
        case 0x2b4170u: goto label_2b4170;
        case 0x2b4174u: goto label_2b4174;
        case 0x2b4178u: goto label_2b4178;
        case 0x2b417cu: goto label_2b417c;
        case 0x2b4180u: goto label_2b4180;
        case 0x2b4184u: goto label_2b4184;
        case 0x2b4188u: goto label_2b4188;
        case 0x2b418cu: goto label_2b418c;
        case 0x2b4190u: goto label_2b4190;
        case 0x2b4194u: goto label_2b4194;
        case 0x2b4198u: goto label_2b4198;
        case 0x2b419cu: goto label_2b419c;
        case 0x2b41a0u: goto label_2b41a0;
        case 0x2b41a4u: goto label_2b41a4;
        case 0x2b41a8u: goto label_2b41a8;
        case 0x2b41acu: goto label_2b41ac;
        case 0x2b41b0u: goto label_2b41b0;
        case 0x2b41b4u: goto label_2b41b4;
        case 0x2b41b8u: goto label_2b41b8;
        case 0x2b41bcu: goto label_2b41bc;
        case 0x2b41c0u: goto label_2b41c0;
        case 0x2b41c4u: goto label_2b41c4;
        case 0x2b41c8u: goto label_2b41c8;
        case 0x2b41ccu: goto label_2b41cc;
        case 0x2b41d0u: goto label_2b41d0;
        case 0x2b41d4u: goto label_2b41d4;
        case 0x2b41d8u: goto label_2b41d8;
        case 0x2b41dcu: goto label_2b41dc;
        case 0x2b41e0u: goto label_2b41e0;
        case 0x2b41e4u: goto label_2b41e4;
        case 0x2b41e8u: goto label_2b41e8;
        case 0x2b41ecu: goto label_2b41ec;
        case 0x2b41f0u: goto label_2b41f0;
        case 0x2b41f4u: goto label_2b41f4;
        case 0x2b41f8u: goto label_2b41f8;
        case 0x2b41fcu: goto label_2b41fc;
        case 0x2b4200u: goto label_2b4200;
        case 0x2b4204u: goto label_2b4204;
        case 0x2b4208u: goto label_2b4208;
        case 0x2b420cu: goto label_2b420c;
        case 0x2b4210u: goto label_2b4210;
        case 0x2b4214u: goto label_2b4214;
        case 0x2b4218u: goto label_2b4218;
        case 0x2b421cu: goto label_2b421c;
        case 0x2b4220u: goto label_2b4220;
        case 0x2b4224u: goto label_2b4224;
        case 0x2b4228u: goto label_2b4228;
        case 0x2b422cu: goto label_2b422c;
        case 0x2b4230u: goto label_2b4230;
        case 0x2b4234u: goto label_2b4234;
        case 0x2b4238u: goto label_2b4238;
        case 0x2b423cu: goto label_2b423c;
        case 0x2b4240u: goto label_2b4240;
        case 0x2b4244u: goto label_2b4244;
        case 0x2b4248u: goto label_2b4248;
        case 0x2b424cu: goto label_2b424c;
        case 0x2b4250u: goto label_2b4250;
        case 0x2b4254u: goto label_2b4254;
        case 0x2b4258u: goto label_2b4258;
        case 0x2b425cu: goto label_2b425c;
        case 0x2b4260u: goto label_2b4260;
        case 0x2b4264u: goto label_2b4264;
        case 0x2b4268u: goto label_2b4268;
        case 0x2b426cu: goto label_2b426c;
        case 0x2b4270u: goto label_2b4270;
        case 0x2b4274u: goto label_2b4274;
        case 0x2b4278u: goto label_2b4278;
        case 0x2b427cu: goto label_2b427c;
        case 0x2b4280u: goto label_2b4280;
        case 0x2b4284u: goto label_2b4284;
        case 0x2b4288u: goto label_2b4288;
        case 0x2b428cu: goto label_2b428c;
        case 0x2b4290u: goto label_2b4290;
        case 0x2b4294u: goto label_2b4294;
        case 0x2b4298u: goto label_2b4298;
        case 0x2b429cu: goto label_2b429c;
        case 0x2b42a0u: goto label_2b42a0;
        case 0x2b42a4u: goto label_2b42a4;
        case 0x2b42a8u: goto label_2b42a8;
        case 0x2b42acu: goto label_2b42ac;
        case 0x2b42b0u: goto label_2b42b0;
        case 0x2b42b4u: goto label_2b42b4;
        case 0x2b42b8u: goto label_2b42b8;
        case 0x2b42bcu: goto label_2b42bc;
        case 0x2b42c0u: goto label_2b42c0;
        case 0x2b42c4u: goto label_2b42c4;
        case 0x2b42c8u: goto label_2b42c8;
        case 0x2b42ccu: goto label_2b42cc;
        case 0x2b42d0u: goto label_2b42d0;
        case 0x2b42d4u: goto label_2b42d4;
        case 0x2b42d8u: goto label_2b42d8;
        case 0x2b42dcu: goto label_2b42dc;
        case 0x2b42e0u: goto label_2b42e0;
        case 0x2b42e4u: goto label_2b42e4;
        case 0x2b42e8u: goto label_2b42e8;
        case 0x2b42ecu: goto label_2b42ec;
        case 0x2b42f0u: goto label_2b42f0;
        case 0x2b42f4u: goto label_2b42f4;
        case 0x2b42f8u: goto label_2b42f8;
        case 0x2b42fcu: goto label_2b42fc;
        case 0x2b4300u: goto label_2b4300;
        case 0x2b4304u: goto label_2b4304;
        case 0x2b4308u: goto label_2b4308;
        case 0x2b430cu: goto label_2b430c;
        case 0x2b4310u: goto label_2b4310;
        case 0x2b4314u: goto label_2b4314;
        case 0x2b4318u: goto label_2b4318;
        case 0x2b431cu: goto label_2b431c;
        case 0x2b4320u: goto label_2b4320;
        case 0x2b4324u: goto label_2b4324;
        case 0x2b4328u: goto label_2b4328;
        case 0x2b432cu: goto label_2b432c;
        case 0x2b4330u: goto label_2b4330;
        case 0x2b4334u: goto label_2b4334;
        case 0x2b4338u: goto label_2b4338;
        case 0x2b433cu: goto label_2b433c;
        case 0x2b4340u: goto label_2b4340;
        case 0x2b4344u: goto label_2b4344;
        case 0x2b4348u: goto label_2b4348;
        case 0x2b434cu: goto label_2b434c;
        case 0x2b4350u: goto label_2b4350;
        case 0x2b4354u: goto label_2b4354;
        case 0x2b4358u: goto label_2b4358;
        case 0x2b435cu: goto label_2b435c;
        case 0x2b4360u: goto label_2b4360;
        case 0x2b4364u: goto label_2b4364;
        case 0x2b4368u: goto label_2b4368;
        case 0x2b436cu: goto label_2b436c;
        case 0x2b4370u: goto label_2b4370;
        case 0x2b4374u: goto label_2b4374;
        case 0x2b4378u: goto label_2b4378;
        case 0x2b437cu: goto label_2b437c;
        case 0x2b4380u: goto label_2b4380;
        case 0x2b4384u: goto label_2b4384;
        case 0x2b4388u: goto label_2b4388;
        case 0x2b438cu: goto label_2b438c;
        case 0x2b4390u: goto label_2b4390;
        case 0x2b4394u: goto label_2b4394;
        case 0x2b4398u: goto label_2b4398;
        case 0x2b439cu: goto label_2b439c;
        case 0x2b43a0u: goto label_2b43a0;
        case 0x2b43a4u: goto label_2b43a4;
        case 0x2b43a8u: goto label_2b43a8;
        case 0x2b43acu: goto label_2b43ac;
        case 0x2b43b0u: goto label_2b43b0;
        case 0x2b43b4u: goto label_2b43b4;
        case 0x2b43b8u: goto label_2b43b8;
        case 0x2b43bcu: goto label_2b43bc;
        case 0x2b43c0u: goto label_2b43c0;
        case 0x2b43c4u: goto label_2b43c4;
        case 0x2b43c8u: goto label_2b43c8;
        case 0x2b43ccu: goto label_2b43cc;
        case 0x2b43d0u: goto label_2b43d0;
        case 0x2b43d4u: goto label_2b43d4;
        case 0x2b43d8u: goto label_2b43d8;
        case 0x2b43dcu: goto label_2b43dc;
        case 0x2b43e0u: goto label_2b43e0;
        case 0x2b43e4u: goto label_2b43e4;
        case 0x2b43e8u: goto label_2b43e8;
        case 0x2b43ecu: goto label_2b43ec;
        case 0x2b43f0u: goto label_2b43f0;
        case 0x2b43f4u: goto label_2b43f4;
        case 0x2b43f8u: goto label_2b43f8;
        case 0x2b43fcu: goto label_2b43fc;
        case 0x2b4400u: goto label_2b4400;
        case 0x2b4404u: goto label_2b4404;
        case 0x2b4408u: goto label_2b4408;
        case 0x2b440cu: goto label_2b440c;
        case 0x2b4410u: goto label_2b4410;
        case 0x2b4414u: goto label_2b4414;
        case 0x2b4418u: goto label_2b4418;
        case 0x2b441cu: goto label_2b441c;
        case 0x2b4420u: goto label_2b4420;
        case 0x2b4424u: goto label_2b4424;
        case 0x2b4428u: goto label_2b4428;
        case 0x2b442cu: goto label_2b442c;
        case 0x2b4430u: goto label_2b4430;
        case 0x2b4434u: goto label_2b4434;
        case 0x2b4438u: goto label_2b4438;
        case 0x2b443cu: goto label_2b443c;
        case 0x2b4440u: goto label_2b4440;
        case 0x2b4444u: goto label_2b4444;
        case 0x2b4448u: goto label_2b4448;
        case 0x2b444cu: goto label_2b444c;
        case 0x2b4450u: goto label_2b4450;
        case 0x2b4454u: goto label_2b4454;
        case 0x2b4458u: goto label_2b4458;
        case 0x2b445cu: goto label_2b445c;
        case 0x2b4460u: goto label_2b4460;
        case 0x2b4464u: goto label_2b4464;
        case 0x2b4468u: goto label_2b4468;
        case 0x2b446cu: goto label_2b446c;
        case 0x2b4470u: goto label_2b4470;
        case 0x2b4474u: goto label_2b4474;
        case 0x2b4478u: goto label_2b4478;
        case 0x2b447cu: goto label_2b447c;
        case 0x2b4480u: goto label_2b4480;
        case 0x2b4484u: goto label_2b4484;
        case 0x2b4488u: goto label_2b4488;
        case 0x2b448cu: goto label_2b448c;
        case 0x2b4490u: goto label_2b4490;
        case 0x2b4494u: goto label_2b4494;
        case 0x2b4498u: goto label_2b4498;
        case 0x2b449cu: goto label_2b449c;
        case 0x2b44a0u: goto label_2b44a0;
        case 0x2b44a4u: goto label_2b44a4;
        case 0x2b44a8u: goto label_2b44a8;
        case 0x2b44acu: goto label_2b44ac;
        case 0x2b44b0u: goto label_2b44b0;
        case 0x2b44b4u: goto label_2b44b4;
        case 0x2b44b8u: goto label_2b44b8;
        case 0x2b44bcu: goto label_2b44bc;
        case 0x2b44c0u: goto label_2b44c0;
        case 0x2b44c4u: goto label_2b44c4;
        case 0x2b44c8u: goto label_2b44c8;
        case 0x2b44ccu: goto label_2b44cc;
        case 0x2b44d0u: goto label_2b44d0;
        case 0x2b44d4u: goto label_2b44d4;
        case 0x2b44d8u: goto label_2b44d8;
        case 0x2b44dcu: goto label_2b44dc;
        case 0x2b44e0u: goto label_2b44e0;
        case 0x2b44e4u: goto label_2b44e4;
        case 0x2b44e8u: goto label_2b44e8;
        case 0x2b44ecu: goto label_2b44ec;
        case 0x2b44f0u: goto label_2b44f0;
        case 0x2b44f4u: goto label_2b44f4;
        case 0x2b44f8u: goto label_2b44f8;
        case 0x2b44fcu: goto label_2b44fc;
        case 0x2b4500u: goto label_2b4500;
        case 0x2b4504u: goto label_2b4504;
        case 0x2b4508u: goto label_2b4508;
        case 0x2b450cu: goto label_2b450c;
        case 0x2b4510u: goto label_2b4510;
        case 0x2b4514u: goto label_2b4514;
        case 0x2b4518u: goto label_2b4518;
        case 0x2b451cu: goto label_2b451c;
        case 0x2b4520u: goto label_2b4520;
        case 0x2b4524u: goto label_2b4524;
        case 0x2b4528u: goto label_2b4528;
        case 0x2b452cu: goto label_2b452c;
        case 0x2b4530u: goto label_2b4530;
        case 0x2b4534u: goto label_2b4534;
        case 0x2b4538u: goto label_2b4538;
        case 0x2b453cu: goto label_2b453c;
        case 0x2b4540u: goto label_2b4540;
        case 0x2b4544u: goto label_2b4544;
        case 0x2b4548u: goto label_2b4548;
        case 0x2b454cu: goto label_2b454c;
        case 0x2b4550u: goto label_2b4550;
        case 0x2b4554u: goto label_2b4554;
        case 0x2b4558u: goto label_2b4558;
        case 0x2b455cu: goto label_2b455c;
        case 0x2b4560u: goto label_2b4560;
        case 0x2b4564u: goto label_2b4564;
        case 0x2b4568u: goto label_2b4568;
        case 0x2b456cu: goto label_2b456c;
        case 0x2b4570u: goto label_2b4570;
        case 0x2b4574u: goto label_2b4574;
        case 0x2b4578u: goto label_2b4578;
        case 0x2b457cu: goto label_2b457c;
        case 0x2b4580u: goto label_2b4580;
        case 0x2b4584u: goto label_2b4584;
        case 0x2b4588u: goto label_2b4588;
        case 0x2b458cu: goto label_2b458c;
        case 0x2b4590u: goto label_2b4590;
        case 0x2b4594u: goto label_2b4594;
        case 0x2b4598u: goto label_2b4598;
        case 0x2b459cu: goto label_2b459c;
        case 0x2b45a0u: goto label_2b45a0;
        case 0x2b45a4u: goto label_2b45a4;
        case 0x2b45a8u: goto label_2b45a8;
        case 0x2b45acu: goto label_2b45ac;
        case 0x2b45b0u: goto label_2b45b0;
        case 0x2b45b4u: goto label_2b45b4;
        case 0x2b45b8u: goto label_2b45b8;
        case 0x2b45bcu: goto label_2b45bc;
        case 0x2b45c0u: goto label_2b45c0;
        case 0x2b45c4u: goto label_2b45c4;
        case 0x2b45c8u: goto label_2b45c8;
        case 0x2b45ccu: goto label_2b45cc;
        case 0x2b45d0u: goto label_2b45d0;
        case 0x2b45d4u: goto label_2b45d4;
        case 0x2b45d8u: goto label_2b45d8;
        case 0x2b45dcu: goto label_2b45dc;
        case 0x2b45e0u: goto label_2b45e0;
        case 0x2b45e4u: goto label_2b45e4;
        case 0x2b45e8u: goto label_2b45e8;
        case 0x2b45ecu: goto label_2b45ec;
        case 0x2b45f0u: goto label_2b45f0;
        case 0x2b45f4u: goto label_2b45f4;
        case 0x2b45f8u: goto label_2b45f8;
        case 0x2b45fcu: goto label_2b45fc;
        case 0x2b4600u: goto label_2b4600;
        case 0x2b4604u: goto label_2b4604;
        case 0x2b4608u: goto label_2b4608;
        case 0x2b460cu: goto label_2b460c;
        case 0x2b4610u: goto label_2b4610;
        case 0x2b4614u: goto label_2b4614;
        case 0x2b4618u: goto label_2b4618;
        case 0x2b461cu: goto label_2b461c;
        case 0x2b4620u: goto label_2b4620;
        case 0x2b4624u: goto label_2b4624;
        case 0x2b4628u: goto label_2b4628;
        case 0x2b462cu: goto label_2b462c;
        case 0x2b4630u: goto label_2b4630;
        case 0x2b4634u: goto label_2b4634;
        case 0x2b4638u: goto label_2b4638;
        case 0x2b463cu: goto label_2b463c;
        case 0x2b4640u: goto label_2b4640;
        case 0x2b4644u: goto label_2b4644;
        case 0x2b4648u: goto label_2b4648;
        case 0x2b464cu: goto label_2b464c;
        case 0x2b4650u: goto label_2b4650;
        case 0x2b4654u: goto label_2b4654;
        case 0x2b4658u: goto label_2b4658;
        case 0x2b465cu: goto label_2b465c;
        case 0x2b4660u: goto label_2b4660;
        case 0x2b4664u: goto label_2b4664;
        case 0x2b4668u: goto label_2b4668;
        case 0x2b466cu: goto label_2b466c;
        case 0x2b4670u: goto label_2b4670;
        case 0x2b4674u: goto label_2b4674;
        case 0x2b4678u: goto label_2b4678;
        case 0x2b467cu: goto label_2b467c;
        case 0x2b4680u: goto label_2b4680;
        case 0x2b4684u: goto label_2b4684;
        case 0x2b4688u: goto label_2b4688;
        case 0x2b468cu: goto label_2b468c;
        case 0x2b4690u: goto label_2b4690;
        case 0x2b4694u: goto label_2b4694;
        case 0x2b4698u: goto label_2b4698;
        case 0x2b469cu: goto label_2b469c;
        case 0x2b46a0u: goto label_2b46a0;
        case 0x2b46a4u: goto label_2b46a4;
        case 0x2b46a8u: goto label_2b46a8;
        case 0x2b46acu: goto label_2b46ac;
        case 0x2b46b0u: goto label_2b46b0;
        case 0x2b46b4u: goto label_2b46b4;
        case 0x2b46b8u: goto label_2b46b8;
        case 0x2b46bcu: goto label_2b46bc;
        case 0x2b46c0u: goto label_2b46c0;
        case 0x2b46c4u: goto label_2b46c4;
        case 0x2b46c8u: goto label_2b46c8;
        case 0x2b46ccu: goto label_2b46cc;
        case 0x2b46d0u: goto label_2b46d0;
        case 0x2b46d4u: goto label_2b46d4;
        case 0x2b46d8u: goto label_2b46d8;
        case 0x2b46dcu: goto label_2b46dc;
        case 0x2b46e0u: goto label_2b46e0;
        case 0x2b46e4u: goto label_2b46e4;
        case 0x2b46e8u: goto label_2b46e8;
        case 0x2b46ecu: goto label_2b46ec;
        case 0x2b46f0u: goto label_2b46f0;
        case 0x2b46f4u: goto label_2b46f4;
        case 0x2b46f8u: goto label_2b46f8;
        case 0x2b46fcu: goto label_2b46fc;
        case 0x2b4700u: goto label_2b4700;
        case 0x2b4704u: goto label_2b4704;
        case 0x2b4708u: goto label_2b4708;
        case 0x2b470cu: goto label_2b470c;
        case 0x2b4710u: goto label_2b4710;
        case 0x2b4714u: goto label_2b4714;
        case 0x2b4718u: goto label_2b4718;
        case 0x2b471cu: goto label_2b471c;
        case 0x2b4720u: goto label_2b4720;
        case 0x2b4724u: goto label_2b4724;
        case 0x2b4728u: goto label_2b4728;
        case 0x2b472cu: goto label_2b472c;
        case 0x2b4730u: goto label_2b4730;
        case 0x2b4734u: goto label_2b4734;
        case 0x2b4738u: goto label_2b4738;
        case 0x2b473cu: goto label_2b473c;
        case 0x2b4740u: goto label_2b4740;
        case 0x2b4744u: goto label_2b4744;
        case 0x2b4748u: goto label_2b4748;
        case 0x2b474cu: goto label_2b474c;
        case 0x2b4750u: goto label_2b4750;
        case 0x2b4754u: goto label_2b4754;
        case 0x2b4758u: goto label_2b4758;
        case 0x2b475cu: goto label_2b475c;
        case 0x2b4760u: goto label_2b4760;
        case 0x2b4764u: goto label_2b4764;
        case 0x2b4768u: goto label_2b4768;
        case 0x2b476cu: goto label_2b476c;
        case 0x2b4770u: goto label_2b4770;
        case 0x2b4774u: goto label_2b4774;
        case 0x2b4778u: goto label_2b4778;
        case 0x2b477cu: goto label_2b477c;
        case 0x2b4780u: goto label_2b4780;
        case 0x2b4784u: goto label_2b4784;
        case 0x2b4788u: goto label_2b4788;
        case 0x2b478cu: goto label_2b478c;
        case 0x2b4790u: goto label_2b4790;
        case 0x2b4794u: goto label_2b4794;
        case 0x2b4798u: goto label_2b4798;
        case 0x2b479cu: goto label_2b479c;
        case 0x2b47a0u: goto label_2b47a0;
        case 0x2b47a4u: goto label_2b47a4;
        case 0x2b47a8u: goto label_2b47a8;
        case 0x2b47acu: goto label_2b47ac;
        case 0x2b47b0u: goto label_2b47b0;
        case 0x2b47b4u: goto label_2b47b4;
        case 0x2b47b8u: goto label_2b47b8;
        case 0x2b47bcu: goto label_2b47bc;
        case 0x2b47c0u: goto label_2b47c0;
        case 0x2b47c4u: goto label_2b47c4;
        case 0x2b47c8u: goto label_2b47c8;
        case 0x2b47ccu: goto label_2b47cc;
        case 0x2b47d0u: goto label_2b47d0;
        case 0x2b47d4u: goto label_2b47d4;
        case 0x2b47d8u: goto label_2b47d8;
        case 0x2b47dcu: goto label_2b47dc;
        case 0x2b47e0u: goto label_2b47e0;
        case 0x2b47e4u: goto label_2b47e4;
        case 0x2b47e8u: goto label_2b47e8;
        case 0x2b47ecu: goto label_2b47ec;
        case 0x2b47f0u: goto label_2b47f0;
        case 0x2b47f4u: goto label_2b47f4;
        case 0x2b47f8u: goto label_2b47f8;
        case 0x2b47fcu: goto label_2b47fc;
        case 0x2b4800u: goto label_2b4800;
        case 0x2b4804u: goto label_2b4804;
        case 0x2b4808u: goto label_2b4808;
        case 0x2b480cu: goto label_2b480c;
        case 0x2b4810u: goto label_2b4810;
        case 0x2b4814u: goto label_2b4814;
        case 0x2b4818u: goto label_2b4818;
        case 0x2b481cu: goto label_2b481c;
        case 0x2b4820u: goto label_2b4820;
        case 0x2b4824u: goto label_2b4824;
        case 0x2b4828u: goto label_2b4828;
        case 0x2b482cu: goto label_2b482c;
        case 0x2b4830u: goto label_2b4830;
        case 0x2b4834u: goto label_2b4834;
        case 0x2b4838u: goto label_2b4838;
        case 0x2b483cu: goto label_2b483c;
        case 0x2b4840u: goto label_2b4840;
        case 0x2b4844u: goto label_2b4844;
        case 0x2b4848u: goto label_2b4848;
        case 0x2b484cu: goto label_2b484c;
        case 0x2b4850u: goto label_2b4850;
        case 0x2b4854u: goto label_2b4854;
        case 0x2b4858u: goto label_2b4858;
        case 0x2b485cu: goto label_2b485c;
        case 0x2b4860u: goto label_2b4860;
        case 0x2b4864u: goto label_2b4864;
        case 0x2b4868u: goto label_2b4868;
        case 0x2b486cu: goto label_2b486c;
        case 0x2b4870u: goto label_2b4870;
        case 0x2b4874u: goto label_2b4874;
        case 0x2b4878u: goto label_2b4878;
        case 0x2b487cu: goto label_2b487c;
        case 0x2b4880u: goto label_2b4880;
        case 0x2b4884u: goto label_2b4884;
        case 0x2b4888u: goto label_2b4888;
        case 0x2b488cu: goto label_2b488c;
        case 0x2b4890u: goto label_2b4890;
        case 0x2b4894u: goto label_2b4894;
        case 0x2b4898u: goto label_2b4898;
        case 0x2b489cu: goto label_2b489c;
        case 0x2b48a0u: goto label_2b48a0;
        case 0x2b48a4u: goto label_2b48a4;
        case 0x2b48a8u: goto label_2b48a8;
        case 0x2b48acu: goto label_2b48ac;
        case 0x2b48b0u: goto label_2b48b0;
        case 0x2b48b4u: goto label_2b48b4;
        case 0x2b48b8u: goto label_2b48b8;
        case 0x2b48bcu: goto label_2b48bc;
        case 0x2b48c0u: goto label_2b48c0;
        case 0x2b48c4u: goto label_2b48c4;
        case 0x2b48c8u: goto label_2b48c8;
        case 0x2b48ccu: goto label_2b48cc;
        case 0x2b48d0u: goto label_2b48d0;
        case 0x2b48d4u: goto label_2b48d4;
        case 0x2b48d8u: goto label_2b48d8;
        case 0x2b48dcu: goto label_2b48dc;
        case 0x2b48e0u: goto label_2b48e0;
        case 0x2b48e4u: goto label_2b48e4;
        case 0x2b48e8u: goto label_2b48e8;
        case 0x2b48ecu: goto label_2b48ec;
        case 0x2b48f0u: goto label_2b48f0;
        case 0x2b48f4u: goto label_2b48f4;
        case 0x2b48f8u: goto label_2b48f8;
        case 0x2b48fcu: goto label_2b48fc;
        case 0x2b4900u: goto label_2b4900;
        case 0x2b4904u: goto label_2b4904;
        case 0x2b4908u: goto label_2b4908;
        case 0x2b490cu: goto label_2b490c;
        case 0x2b4910u: goto label_2b4910;
        case 0x2b4914u: goto label_2b4914;
        case 0x2b4918u: goto label_2b4918;
        case 0x2b491cu: goto label_2b491c;
        case 0x2b4920u: goto label_2b4920;
        case 0x2b4924u: goto label_2b4924;
        case 0x2b4928u: goto label_2b4928;
        case 0x2b492cu: goto label_2b492c;
        case 0x2b4930u: goto label_2b4930;
        case 0x2b4934u: goto label_2b4934;
        case 0x2b4938u: goto label_2b4938;
        case 0x2b493cu: goto label_2b493c;
        case 0x2b4940u: goto label_2b4940;
        case 0x2b4944u: goto label_2b4944;
        case 0x2b4948u: goto label_2b4948;
        case 0x2b494cu: goto label_2b494c;
        case 0x2b4950u: goto label_2b4950;
        case 0x2b4954u: goto label_2b4954;
        case 0x2b4958u: goto label_2b4958;
        case 0x2b495cu: goto label_2b495c;
        case 0x2b4960u: goto label_2b4960;
        case 0x2b4964u: goto label_2b4964;
        case 0x2b4968u: goto label_2b4968;
        case 0x2b496cu: goto label_2b496c;
        case 0x2b4970u: goto label_2b4970;
        case 0x2b4974u: goto label_2b4974;
        case 0x2b4978u: goto label_2b4978;
        case 0x2b497cu: goto label_2b497c;
        case 0x2b4980u: goto label_2b4980;
        case 0x2b4984u: goto label_2b4984;
        case 0x2b4988u: goto label_2b4988;
        case 0x2b498cu: goto label_2b498c;
        case 0x2b4990u: goto label_2b4990;
        case 0x2b4994u: goto label_2b4994;
        case 0x2b4998u: goto label_2b4998;
        case 0x2b499cu: goto label_2b499c;
        case 0x2b49a0u: goto label_2b49a0;
        case 0x2b49a4u: goto label_2b49a4;
        case 0x2b49a8u: goto label_2b49a8;
        case 0x2b49acu: goto label_2b49ac;
        case 0x2b49b0u: goto label_2b49b0;
        case 0x2b49b4u: goto label_2b49b4;
        case 0x2b49b8u: goto label_2b49b8;
        case 0x2b49bcu: goto label_2b49bc;
        case 0x2b49c0u: goto label_2b49c0;
        case 0x2b49c4u: goto label_2b49c4;
        case 0x2b49c8u: goto label_2b49c8;
        case 0x2b49ccu: goto label_2b49cc;
        case 0x2b49d0u: goto label_2b49d0;
        case 0x2b49d4u: goto label_2b49d4;
        case 0x2b49d8u: goto label_2b49d8;
        case 0x2b49dcu: goto label_2b49dc;
        case 0x2b49e0u: goto label_2b49e0;
        case 0x2b49e4u: goto label_2b49e4;
        case 0x2b49e8u: goto label_2b49e8;
        case 0x2b49ecu: goto label_2b49ec;
        case 0x2b49f0u: goto label_2b49f0;
        case 0x2b49f4u: goto label_2b49f4;
        case 0x2b49f8u: goto label_2b49f8;
        case 0x2b49fcu: goto label_2b49fc;
        case 0x2b4a00u: goto label_2b4a00;
        case 0x2b4a04u: goto label_2b4a04;
        case 0x2b4a08u: goto label_2b4a08;
        case 0x2b4a0cu: goto label_2b4a0c;
        case 0x2b4a10u: goto label_2b4a10;
        case 0x2b4a14u: goto label_2b4a14;
        case 0x2b4a18u: goto label_2b4a18;
        case 0x2b4a1cu: goto label_2b4a1c;
        case 0x2b4a20u: goto label_2b4a20;
        case 0x2b4a24u: goto label_2b4a24;
        case 0x2b4a28u: goto label_2b4a28;
        case 0x2b4a2cu: goto label_2b4a2c;
        case 0x2b4a30u: goto label_2b4a30;
        case 0x2b4a34u: goto label_2b4a34;
        case 0x2b4a38u: goto label_2b4a38;
        case 0x2b4a3cu: goto label_2b4a3c;
        case 0x2b4a40u: goto label_2b4a40;
        case 0x2b4a44u: goto label_2b4a44;
        case 0x2b4a48u: goto label_2b4a48;
        case 0x2b4a4cu: goto label_2b4a4c;
        case 0x2b4a50u: goto label_2b4a50;
        case 0x2b4a54u: goto label_2b4a54;
        case 0x2b4a58u: goto label_2b4a58;
        case 0x2b4a5cu: goto label_2b4a5c;
        case 0x2b4a60u: goto label_2b4a60;
        case 0x2b4a64u: goto label_2b4a64;
        case 0x2b4a68u: goto label_2b4a68;
        case 0x2b4a6cu: goto label_2b4a6c;
        case 0x2b4a70u: goto label_2b4a70;
        case 0x2b4a74u: goto label_2b4a74;
        case 0x2b4a78u: goto label_2b4a78;
        case 0x2b4a7cu: goto label_2b4a7c;
        case 0x2b4a80u: goto label_2b4a80;
        case 0x2b4a84u: goto label_2b4a84;
        case 0x2b4a88u: goto label_2b4a88;
        case 0x2b4a8cu: goto label_2b4a8c;
        case 0x2b4a90u: goto label_2b4a90;
        case 0x2b4a94u: goto label_2b4a94;
        case 0x2b4a98u: goto label_2b4a98;
        case 0x2b4a9cu: goto label_2b4a9c;
        case 0x2b4aa0u: goto label_2b4aa0;
        case 0x2b4aa4u: goto label_2b4aa4;
        case 0x2b4aa8u: goto label_2b4aa8;
        case 0x2b4aacu: goto label_2b4aac;
        case 0x2b4ab0u: goto label_2b4ab0;
        case 0x2b4ab4u: goto label_2b4ab4;
        case 0x2b4ab8u: goto label_2b4ab8;
        case 0x2b4abcu: goto label_2b4abc;
        case 0x2b4ac0u: goto label_2b4ac0;
        case 0x2b4ac4u: goto label_2b4ac4;
        case 0x2b4ac8u: goto label_2b4ac8;
        case 0x2b4accu: goto label_2b4acc;
        case 0x2b4ad0u: goto label_2b4ad0;
        case 0x2b4ad4u: goto label_2b4ad4;
        case 0x2b4ad8u: goto label_2b4ad8;
        case 0x2b4adcu: goto label_2b4adc;
        case 0x2b4ae0u: goto label_2b4ae0;
        case 0x2b4ae4u: goto label_2b4ae4;
        case 0x2b4ae8u: goto label_2b4ae8;
        case 0x2b4aecu: goto label_2b4aec;
        case 0x2b4af0u: goto label_2b4af0;
        case 0x2b4af4u: goto label_2b4af4;
        case 0x2b4af8u: goto label_2b4af8;
        case 0x2b4afcu: goto label_2b4afc;
        case 0x2b4b00u: goto label_2b4b00;
        case 0x2b4b04u: goto label_2b4b04;
        case 0x2b4b08u: goto label_2b4b08;
        case 0x2b4b0cu: goto label_2b4b0c;
        case 0x2b4b10u: goto label_2b4b10;
        case 0x2b4b14u: goto label_2b4b14;
        case 0x2b4b18u: goto label_2b4b18;
        case 0x2b4b1cu: goto label_2b4b1c;
        case 0x2b4b20u: goto label_2b4b20;
        case 0x2b4b24u: goto label_2b4b24;
        case 0x2b4b28u: goto label_2b4b28;
        case 0x2b4b2cu: goto label_2b4b2c;
        case 0x2b4b30u: goto label_2b4b30;
        case 0x2b4b34u: goto label_2b4b34;
        case 0x2b4b38u: goto label_2b4b38;
        case 0x2b4b3cu: goto label_2b4b3c;
        case 0x2b4b40u: goto label_2b4b40;
        case 0x2b4b44u: goto label_2b4b44;
        case 0x2b4b48u: goto label_2b4b48;
        case 0x2b4b4cu: goto label_2b4b4c;
        case 0x2b4b50u: goto label_2b4b50;
        case 0x2b4b54u: goto label_2b4b54;
        case 0x2b4b58u: goto label_2b4b58;
        case 0x2b4b5cu: goto label_2b4b5c;
        case 0x2b4b60u: goto label_2b4b60;
        case 0x2b4b64u: goto label_2b4b64;
        case 0x2b4b68u: goto label_2b4b68;
        case 0x2b4b6cu: goto label_2b4b6c;
        default: break;
    }

    ctx->pc = 0x2b2ce0u;

label_2b2ce0:
    // 0x2b2ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b2ce4:
    // 0x2b2ce4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2b2ce8:
    // 0x2b2ce8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2cec:
    // 0x2b2cec: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2b2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2cf0:
    // 0x2b2cf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b2cf4:
    // 0x2b2cf4: 0x3e00008  jr          $ra
label_2b2cf8:
    if (ctx->pc == 0x2B2CF8u) {
        ctx->pc = 0x2B2CFCu;
        goto label_2b2cfc;
    }
    ctx->pc = 0x2B2CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2CFCu;
label_2b2cfc:
    // 0x2b2cfc: 0x0  nop
    ctx->pc = 0x2b2cfcu;
    // NOP
label_2b2d00:
    // 0x2b2d00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b2d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2b2d04:
    // 0x2b2d04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b2d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2b2d08:
    // 0x2b2d08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b2d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b2d0c:
    // 0x2b2d0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b2d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b2d10:
    // 0x2b2d10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b2d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b2d14:
    // 0x2b2d14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b2d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b2d18:
    // 0x2b2d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b2d1c:
    // 0x2b2d1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b2d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b2d20:
    // 0x2b2d20: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2b2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_2b2d24:
    // 0x2b2d24: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b2d28:
    // 0x2b2d28: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2b2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2d2c:
    // 0x2b2d2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2b2d30:
    if (ctx->pc == 0x2B2D30u) {
        ctx->pc = 0x2B2D34u;
        goto label_2b2d34;
    }
    ctx->pc = 0x2B2D2Cu;
    {
        const bool branch_taken_0x2b2d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2d2c) {
            ctx->pc = 0x2B2D48u;
            goto label_2b2d48;
        }
    }
    ctx->pc = 0x2B2D34u;
label_2b2d34:
    // 0x2b2d34: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2b2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b2d38:
    // 0x2b2d38: 0xc0ad720  jal         func_2B5C80
label_2b2d3c:
    if (ctx->pc == 0x2B2D3Cu) {
        ctx->pc = 0x2B2D40u;
        goto label_2b2d40;
    }
    ctx->pc = 0x2B2D38u;
    SET_GPR_U32(ctx, 31, 0x2B2D40u);
    ctx->pc = 0x2B5C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C80u, 0x2B2D38u, 0x2B2D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D40u;
label_2b2d40:
    // 0x2b2d40: 0x10000068  b           . + 4 + (0x68 << 2)
label_2b2d44:
    if (ctx->pc == 0x2B2D44u) {
        ctx->pc = 0x2B2D48u;
        goto label_2b2d48;
    }
    ctx->pc = 0x2B2D40u;
    {
        const bool branch_taken_0x2b2d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2d40) {
            ctx->pc = 0x2B2EE4u;
            goto label_2b2ee4;
        }
    }
    ctx->pc = 0x2B2D48u;
label_2b2d48:
    // 0x2b2d48: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b2d4c:
    // 0x2b2d4c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2d50:
    // 0x2b2d50: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b2d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b2d54:
    // 0x2b2d54: 0xc085538  jal         func_2154E0
label_2b2d58:
    if (ctx->pc == 0x2B2D58u) {
        ctx->pc = 0x2B2D5Cu;
        goto label_2b2d5c;
    }
    ctx->pc = 0x2B2D54u;
    SET_GPR_U32(ctx, 31, 0x2B2D5Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B2D54u, 0x2B2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D5Cu;
label_2b2d5c:
    // 0x2b2d5c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b2d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2d60:
    // 0x2b2d60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b2d64:
    // 0x2b2d64: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2d68:
    // 0x2b2d68: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b2d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b2d6c:
    // 0x2b2d6c: 0xc085538  jal         func_2154E0
label_2b2d70:
    if (ctx->pc == 0x2B2D70u) {
        ctx->pc = 0x2B2D74u;
        goto label_2b2d74;
    }
    ctx->pc = 0x2B2D6Cu;
    SET_GPR_U32(ctx, 31, 0x2B2D74u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B2D6Cu, 0x2B2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D74u;
label_2b2d74:
    // 0x2b2d74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b2d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2d78:
    // 0x2b2d78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b2d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b2d7c:
    // 0x2b2d7c: 0xc096880  jal         func_25A200
label_2b2d80:
    if (ctx->pc == 0x2B2D80u) {
        ctx->pc = 0x2B2D84u;
        goto label_2b2d84;
    }
    ctx->pc = 0x2B2D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B2D84u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2B2D7Cu, 0x2B2D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2D84u;
label_2b2d84:
    // 0x2b2d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2d88:
    // 0x2b2d88: 0x10100053  beq         $zero, $s0, . + 4 + (0x53 << 2)
label_2b2d8c:
    if (ctx->pc == 0x2B2D8Cu) {
        ctx->pc = 0x2B2D90u;
        goto label_2b2d90;
    }
    ctx->pc = 0x2B2D88u;
    {
        const bool branch_taken_0x2b2d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b2d88) {
            ctx->pc = 0x2B2ED8u;
            goto label_2b2ed8;
        }
    }
    ctx->pc = 0x2B2D90u;
label_2b2d90:
    // 0x2b2d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2d94:
    // 0x2b2d94: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b2d98:
    // 0x2b2d98: 0xc085538  jal         func_2154E0
label_2b2d9c:
    if (ctx->pc == 0x2B2D9Cu) {
        ctx->pc = 0x2B2DA0u;
        goto label_2b2da0;
    }
    ctx->pc = 0x2B2D98u;
    SET_GPR_U32(ctx, 31, 0x2B2DA0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B2D98u, 0x2B2DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DA0u;
label_2b2da0:
    // 0x2b2da0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b2da0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2da4:
    // 0x2b2da4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2b2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b2da8:
    // 0x2b2da8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b2dac:
    // 0x2b2dac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b2dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b2db0:
    // 0x2b2db0: 0xc085538  jal         func_2154E0
label_2b2db4:
    if (ctx->pc == 0x2B2DB4u) {
        ctx->pc = 0x2B2DB8u;
        goto label_2b2db8;
    }
    ctx->pc = 0x2B2DB0u;
    SET_GPR_U32(ctx, 31, 0x2B2DB8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B2DB0u, 0x2B2DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DB8u;
label_2b2db8:
    // 0x2b2db8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b2db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2dbc:
    // 0x2b2dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b2dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b2dc0:
    // 0x2b2dc0: 0xc0a82cc  jal         func_2A0B30
label_2b2dc4:
    if (ctx->pc == 0x2B2DC4u) {
        ctx->pc = 0x2B2DC8u;
        goto label_2b2dc8;
    }
    ctx->pc = 0x2B2DC0u;
    SET_GPR_U32(ctx, 31, 0x2B2DC8u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2B2DC0u, 0x2B2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DC8u;
label_2b2dc8:
    // 0x2b2dc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2dcc:
    // 0x2b2dcc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b2dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b2dd0:
    // 0x2b2dd0: 0xc121e84  jal         func_487A10
label_2b2dd4:
    if (ctx->pc == 0x2B2DD4u) {
        ctx->pc = 0x2B2DD8u;
        goto label_2b2dd8;
    }
    ctx->pc = 0x2B2DD0u;
    SET_GPR_U32(ctx, 31, 0x2B2DD8u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2B2DD0u, 0x2B2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DD8u;
label_2b2dd8:
    // 0x2b2dd8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2b2dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2b2ddc:
    // 0x2b2ddc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b2ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b2de0:
    // 0x2b2de0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b2de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2de4:
    // 0x2b2de4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b2de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2de8:
    // 0x2b2de8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2b2de8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b2dec:
    // 0x2b2dec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b2decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b2df0:
    // 0x2b2df0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b2df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b2df4:
    // 0x2b2df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2df8:
    // 0x2b2df8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b2df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b2dfc:
    // 0x2b2dfc: 0xc085538  jal         func_2154E0
label_2b2e00:
    if (ctx->pc == 0x2B2E00u) {
        ctx->pc = 0x2B2E04u;
        goto label_2b2e04;
    }
    ctx->pc = 0x2B2DFCu;
    SET_GPR_U32(ctx, 31, 0x2B2E04u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B2DFCu, 0x2B2E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E04u;
label_2b2e04:
    // 0x2b2e04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b2e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2e08:
    // 0x2b2e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2e0c:
    // 0x2b2e0c: 0xc0a82cc  jal         func_2A0B30
label_2b2e10:
    if (ctx->pc == 0x2B2E10u) {
        ctx->pc = 0x2B2E14u;
        goto label_2b2e14;
    }
    ctx->pc = 0x2B2E0Cu;
    SET_GPR_U32(ctx, 31, 0x2B2E14u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2B2E0Cu, 0x2B2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E14u;
label_2b2e14:
    // 0x2b2e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2e18:
    // 0x2b2e18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b2e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b2e1c:
    // 0x2b2e1c: 0xc121e84  jal         func_487A10
label_2b2e20:
    if (ctx->pc == 0x2B2E20u) {
        ctx->pc = 0x2B2E24u;
        goto label_2b2e24;
    }
    ctx->pc = 0x2B2E1Cu;
    SET_GPR_U32(ctx, 31, 0x2B2E24u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2B2E1Cu, 0x2B2E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E24u;
label_2b2e24:
    // 0x2b2e24: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2b2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b2e28:
    // 0x2b2e28: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b2e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b2e2c:
    // 0x2b2e2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b2e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2e30:
    // 0x2b2e30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b2e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2e34:
    // 0x2b2e34: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2b2e34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b2e38:
    // 0x2b2e38: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b2e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b2e3c:
    // 0x2b2e3c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b2e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b2e40:
    // 0x2b2e40: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2b2e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2e44:
    // 0x2b2e44: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2b2e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2e48:
    // 0x2b2e48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b2e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b2e4c:
    // 0x2b2e4c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2b2e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2b2e50:
    // 0x2b2e50: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2b2e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2e54:
    // 0x2b2e54: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2b2e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2e58:
    // 0x2b2e58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b2e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b2e5c:
    // 0x2b2e5c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2b2e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2b2e60:
    // 0x2b2e60: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2b2e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b2e64:
    // 0x2b2e64: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2b2e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2e68:
    // 0x2b2e68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b2e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b2e6c:
    // 0x2b2e6c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2b2e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2b2e70:
    // 0x2b2e70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b2e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2b2e74:
    // 0x2b2e74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2e78:
    // 0x2b2e78: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2b2e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2e7c:
    // 0x2b2e7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b2e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b2e80:
    // 0x2b2e80: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2b2e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_2b2e84:
    // 0x2b2e84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2b2e88:
    // 0x2b2e88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2e8c:
    // 0x2b2e8c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2b2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2e90:
    // 0x2b2e90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b2e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b2e94:
    // 0x2b2e94: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2b2e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_2b2e98:
    // 0x2b2e98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2b2e9c:
    // 0x2b2e9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b2ea0:
    // 0x2b2ea0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2b2ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2ea4:
    // 0x2b2ea4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b2ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b2ea8:
    // 0x2b2ea8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2b2ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_2b2eac:
    // 0x2b2eac: 0x8f84bca0  lw          $a0, -0x4360($gp)
    ctx->pc = 0x2b2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
label_2b2eb0:
    // 0x2b2eb0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2b2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2b2eb4:
    // 0x2b2eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2eb8:
    // 0x2b2eb8: 0xc106598  jal         func_419660
label_2b2ebc:
    if (ctx->pc == 0x2B2EBCu) {
        ctx->pc = 0x2B2EC0u;
        goto label_2b2ec0;
    }
    ctx->pc = 0x2B2EB8u;
    SET_GPR_U32(ctx, 31, 0x2B2EC0u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x2B2EB8u, 0x2B2EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EC0u;
label_2b2ec0:
    // 0x2b2ec0: 0x8f84bca0  lw          $a0, -0x4360($gp)
    ctx->pc = 0x2b2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
label_2b2ec4:
    // 0x2b2ec4: 0xc106794  jal         func_419E50
label_2b2ec8:
    if (ctx->pc == 0x2B2EC8u) {
        ctx->pc = 0x2B2ECCu;
        goto label_2b2ecc;
    }
    ctx->pc = 0x2B2EC4u;
    SET_GPR_U32(ctx, 31, 0x2B2ECCu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x2B2EC4u, 0x2B2ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2ECCu;
label_2b2ecc:
    // 0x2b2ecc: 0x8f82bca0  lw          $v0, -0x4360($gp)
    ctx->pc = 0x2b2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950048)));
label_2b2ed0:
    // 0x2b2ed0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b2ed4:
    if (ctx->pc == 0x2B2ED4u) {
        ctx->pc = 0x2B2ED8u;
        goto label_2b2ed8;
    }
    ctx->pc = 0x2B2ED0u;
    {
        const bool branch_taken_0x2b2ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2ed0) {
            ctx->pc = 0x2B2EE4u;
            goto label_2b2ee4;
        }
    }
    ctx->pc = 0x2B2ED8u;
label_2b2ed8:
    // 0x2b2ed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b2ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b2edc:
    // 0x2b2edc: 0xc091018  jal         func_244060
label_2b2ee0:
    if (ctx->pc == 0x2B2EE0u) {
        ctx->pc = 0x2B2EE4u;
        goto label_2b2ee4;
    }
    ctx->pc = 0x2B2EDCu;
    SET_GPR_U32(ctx, 31, 0x2B2EE4u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2B2EDCu, 0x2B2EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2EE4u;
label_2b2ee4:
    // 0x2b2ee4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b2ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b2ee8:
    // 0x2b2ee8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b2ee8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b2eec:
    // 0x2b2eec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b2eecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b2ef0:
    // 0x2b2ef0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b2ef0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b2ef4:
    // 0x2b2ef4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b2ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2ef8:
    // 0x2b2ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2efc:
    // 0x2b2efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2f00:
    // 0x2b2f00: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2b2f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2b2f04:
    // 0x2b2f04: 0x3e00008  jr          $ra
label_2b2f08:
    if (ctx->pc == 0x2B2F08u) {
        ctx->pc = 0x2B2F0Cu;
        goto label_2b2f0c;
    }
    ctx->pc = 0x2B2F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F0Cu;
label_2b2f0c:
    // 0x2b2f0c: 0x0  nop
    ctx->pc = 0x2b2f0cu;
    // NOP
label_2b2f10:
    // 0x2b2f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b2f14:
    // 0x2b2f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b2f18:
    // 0x2b2f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b2f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b2f1c:
    // 0x2b2f1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2b2f20:
    // 0x2b2f20: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2b2f20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2b2f24:
    // 0x2b2f24: 0xc08ef50  jal         func_23BD40
label_2b2f28:
    if (ctx->pc == 0x2B2F28u) {
        ctx->pc = 0x2B2F2Cu;
        goto label_2b2f2c;
    }
    ctx->pc = 0x2B2F24u;
    SET_GPR_U32(ctx, 31, 0x2B2F2Cu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2B2F24u, 0x2B2F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F2Cu;
label_2b2f2c:
    // 0x2b2f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f30:
    // 0x2b2f30: 0xc0406f0  jal         func_101BC0
label_2b2f34:
    if (ctx->pc == 0x2B2F34u) {
        ctx->pc = 0x2B2F38u;
        goto label_2b2f38;
    }
    ctx->pc = 0x2B2F30u;
    SET_GPR_U32(ctx, 31, 0x2B2F38u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2B2F30u, 0x2B2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F38u;
label_2b2f38:
    // 0x2b2f38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2f3c:
    // 0x2b2f3c: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_2b2f40:
    if (ctx->pc == 0x2B2F40u) {
        ctx->pc = 0x2B2F44u;
        goto label_2b2f44;
    }
    ctx->pc = 0x2B2F3Cu;
    {
        const bool branch_taken_0x2b2f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2f3c) {
            ctx->pc = 0x2B2FC4u;
            goto label_2b2fc4;
        }
    }
    ctx->pc = 0x2B2F44u;
label_2b2f44:
    // 0x2b2f44: 0xc05548c  jal         func_155230
label_2b2f48:
    if (ctx->pc == 0x2B2F48u) {
        ctx->pc = 0x2B2F4Cu;
        goto label_2b2f4c;
    }
    ctx->pc = 0x2B2F44u;
    SET_GPR_U32(ctx, 31, 0x2B2F4Cu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x2B2F44u, 0x2B2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F4Cu;
label_2b2f4c:
    // 0x2b2f4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b2f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f50:
    // 0x2b2f50: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b2f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b2f54:
    // 0x2b2f54: 0xc0553d4  jal         func_154F50
label_2b2f58:
    if (ctx->pc == 0x2B2F58u) {
        ctx->pc = 0x2B2F5Cu;
        goto label_2b2f5c;
    }
    ctx->pc = 0x2B2F54u;
    SET_GPR_U32(ctx, 31, 0x2B2F5Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x2B2F54u, 0x2B2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F5Cu;
label_2b2f5c:
    // 0x2b2f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f60:
    // 0x2b2f60: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2b2f64:
    if (ctx->pc == 0x2B2F64u) {
        ctx->pc = 0x2B2F68u;
        goto label_2b2f68;
    }
    ctx->pc = 0x2B2F60u;
    {
        const bool branch_taken_0x2b2f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f60) {
            ctx->pc = 0x2B2FBCu;
            goto label_2b2fbc;
        }
    }
    ctx->pc = 0x2B2F68u;
label_2b2f68:
    // 0x2b2f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f6c:
    // 0x2b2f6c: 0xc0413bc  jal         func_104EF0
label_2b2f70:
    if (ctx->pc == 0x2B2F70u) {
        ctx->pc = 0x2B2F74u;
        goto label_2b2f74;
    }
    ctx->pc = 0x2B2F6Cu;
    SET_GPR_U32(ctx, 31, 0x2B2F74u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x2B2F6Cu, 0x2B2F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F74u;
label_2b2f74:
    // 0x2b2f74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2b2f78:
    if (ctx->pc == 0x2B2F78u) {
        ctx->pc = 0x2B2F7Cu;
        goto label_2b2f7c;
    }
    ctx->pc = 0x2B2F74u;
    {
        const bool branch_taken_0x2b2f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2f74) {
            ctx->pc = 0x2B2FBCu;
            goto label_2b2fbc;
        }
    }
    ctx->pc = 0x2B2F7Cu;
label_2b2f7c:
    // 0x2b2f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f80:
    // 0x2b2f80: 0xc057ce0  jal         func_15F380
label_2b2f84:
    if (ctx->pc == 0x2B2F84u) {
        ctx->pc = 0x2B2F88u;
        goto label_2b2f88;
    }
    ctx->pc = 0x2B2F80u;
    SET_GPR_U32(ctx, 31, 0x2B2F88u);
    ctx->pc = 0x15F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F380u, 0x2B2F80u, 0x2B2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2F88u;
label_2b2f88:
    // 0x2b2f88: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2b2f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b2f8c:
    // 0x2b2f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2f90:
    // 0x2b2f90: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_2b2f94:
    if (ctx->pc == 0x2B2F94u) {
        ctx->pc = 0x2B2F98u;
        goto label_2b2f98;
    }
    ctx->pc = 0x2B2F90u;
    {
        const bool branch_taken_0x2b2f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2f90) {
            ctx->pc = 0x2B2FBCu;
            goto label_2b2fbc;
        }
    }
    ctx->pc = 0x2B2F98u;
label_2b2f98:
    // 0x2b2f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b2f9c:
    // 0x2b2f9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b2f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b2fa0:
    // 0x2b2fa0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2b2fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_2b2fa4:
    // 0x2b2fa4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b2fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2b2fa8:
    // 0x2b2fa8: 0x24a5df90  addiu       $a1, $a1, -0x2070
    ctx->pc = 0x2b2fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958992));
label_2b2fac:
    // 0x2b2fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b2facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2fb0:
    // 0x2b2fb0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b2fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b2fb4:
    // 0x2b2fb4: 0xc08f558  jal         func_23D560
label_2b2fb8:
    if (ctx->pc == 0x2B2FB8u) {
        ctx->pc = 0x2B2FBCu;
        goto label_2b2fbc;
    }
    ctx->pc = 0x2B2FB4u;
    SET_GPR_U32(ctx, 31, 0x2B2FBCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2B2FB4u, 0x2B2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FBCu;
label_2b2fbc:
    // 0x2b2fbc: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b2fc0:
    if (ctx->pc == 0x2B2FC0u) {
        ctx->pc = 0x2B2FC4u;
        goto label_2b2fc4;
    }
    ctx->pc = 0x2B2FBCu;
    {
        const bool branch_taken_0x2b2fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fbc) {
            ctx->pc = 0x2B2FF8u;
            goto label_2b2ff8;
        }
    }
    ctx->pc = 0x2B2FC4u;
label_2b2fc4:
    // 0x2b2fc4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2fc8:
    // 0x2b2fc8: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2b2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b2fcc:
    // 0x2b2fcc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2b2fd0:
    if (ctx->pc == 0x2B2FD0u) {
        ctx->pc = 0x2B2FD4u;
        goto label_2b2fd4;
    }
    ctx->pc = 0x2B2FCCu;
    {
        const bool branch_taken_0x2b2fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fcc) {
            ctx->pc = 0x2B2FECu;
            goto label_2b2fec;
        }
    }
    ctx->pc = 0x2B2FD4u;
label_2b2fd4:
    // 0x2b2fd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b2fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2fd8:
    // 0x2b2fd8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2b2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b2fdc:
    // 0x2b2fdc: 0xc0ad744  jal         func_2B5D10
label_2b2fe0:
    if (ctx->pc == 0x2B2FE0u) {
        ctx->pc = 0x2B2FE4u;
        goto label_2b2fe4;
    }
    ctx->pc = 0x2B2FDCu;
    SET_GPR_U32(ctx, 31, 0x2B2FE4u);
    ctx->pc = 0x2B5D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5D10u, 0x2B2FDCu, 0x2B2FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FE4u;
label_2b2fe4:
    // 0x2b2fe4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b2fe8:
    if (ctx->pc == 0x2B2FE8u) {
        ctx->pc = 0x2B2FECu;
        goto label_2b2fec;
    }
    ctx->pc = 0x2B2FE4u;
    {
        const bool branch_taken_0x2b2fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fe4) {
            ctx->pc = 0x2B2FF8u;
            goto label_2b2ff8;
        }
    }
    ctx->pc = 0x2B2FECu;
label_2b2fec:
    // 0x2b2fec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2b2fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b2ff0:
    // 0x2b2ff0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2ff4:
    // 0x2b2ff4: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x2b2ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
label_2b2ff8:
    // 0x2b2ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b2ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2ffc:
    // 0x2b2ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b3000:
    // 0x2b3000: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b3000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2b3004:
    // 0x2b3004: 0x3e00008  jr          $ra
label_2b3008:
    if (ctx->pc == 0x2B3008u) {
        ctx->pc = 0x2B300Cu;
        goto label_2b300c;
    }
    ctx->pc = 0x2B3004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B300Cu;
label_2b300c:
    // 0x2b300c: 0x0  nop
    ctx->pc = 0x2b300cu;
    // NOP
label_2b3010:
    // 0x2b3010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b3010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b3014:
    // 0x2b3014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b3018:
    // 0x2b3018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b3018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b301c:
    // 0x2b301c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2b3020:
    // 0x2b3020: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2b3020u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2b3024:
    // 0x2b3024: 0xc08ef50  jal         func_23BD40
label_2b3028:
    if (ctx->pc == 0x2B3028u) {
        ctx->pc = 0x2B302Cu;
        goto label_2b302c;
    }
    ctx->pc = 0x2B3024u;
    SET_GPR_U32(ctx, 31, 0x2B302Cu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2B3024u, 0x2B302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B302Cu;
label_2b302c:
    // 0x2b302c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3030:
    // 0x2b3030: 0xc0406f0  jal         func_101BC0
label_2b3034:
    if (ctx->pc == 0x2B3034u) {
        ctx->pc = 0x2B3038u;
        goto label_2b3038;
    }
    ctx->pc = 0x2B3030u;
    SET_GPR_U32(ctx, 31, 0x2B3038u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2B3030u, 0x2B3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3038u;
label_2b3038:
    // 0x2b3038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b303c:
    // 0x2b303c: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_2b3040:
    if (ctx->pc == 0x2B3040u) {
        ctx->pc = 0x2B3044u;
        goto label_2b3044;
    }
    ctx->pc = 0x2B303Cu;
    {
        const bool branch_taken_0x2b303c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b303c) {
            ctx->pc = 0x2B30C4u;
            goto label_2b30c4;
        }
    }
    ctx->pc = 0x2B3044u;
label_2b3044:
    // 0x2b3044: 0xc05548c  jal         func_155230
label_2b3048:
    if (ctx->pc == 0x2B3048u) {
        ctx->pc = 0x2B304Cu;
        goto label_2b304c;
    }
    ctx->pc = 0x2B3044u;
    SET_GPR_U32(ctx, 31, 0x2B304Cu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x2B3044u, 0x2B304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B304Cu;
label_2b304c:
    // 0x2b304c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b304cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3050:
    // 0x2b3050: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b3050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b3054:
    // 0x2b3054: 0xc0553d4  jal         func_154F50
label_2b3058:
    if (ctx->pc == 0x2B3058u) {
        ctx->pc = 0x2B305Cu;
        goto label_2b305c;
    }
    ctx->pc = 0x2B3054u;
    SET_GPR_U32(ctx, 31, 0x2B305Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x2B3054u, 0x2B305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B305Cu;
label_2b305c:
    // 0x2b305c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b305cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3060:
    // 0x2b3060: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2b3064:
    if (ctx->pc == 0x2B3064u) {
        ctx->pc = 0x2B3068u;
        goto label_2b3068;
    }
    ctx->pc = 0x2B3060u;
    {
        const bool branch_taken_0x2b3060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3060) {
            ctx->pc = 0x2B30BCu;
            goto label_2b30bc;
        }
    }
    ctx->pc = 0x2B3068u;
label_2b3068:
    // 0x2b3068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b306c:
    // 0x2b306c: 0xc0413bc  jal         func_104EF0
label_2b3070:
    if (ctx->pc == 0x2B3070u) {
        ctx->pc = 0x2B3074u;
        goto label_2b3074;
    }
    ctx->pc = 0x2B306Cu;
    SET_GPR_U32(ctx, 31, 0x2B3074u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x2B306Cu, 0x2B3074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3074u;
label_2b3074:
    // 0x2b3074: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2b3078:
    if (ctx->pc == 0x2B3078u) {
        ctx->pc = 0x2B307Cu;
        goto label_2b307c;
    }
    ctx->pc = 0x2B3074u;
    {
        const bool branch_taken_0x2b3074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3074) {
            ctx->pc = 0x2B30BCu;
            goto label_2b30bc;
        }
    }
    ctx->pc = 0x2B307Cu;
label_2b307c:
    // 0x2b307c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b3080:
    // 0x2b3080: 0xc057d30  jal         func_15F4C0
label_2b3084:
    if (ctx->pc == 0x2B3084u) {
        ctx->pc = 0x2B3088u;
        goto label_2b3088;
    }
    ctx->pc = 0x2B3080u;
    SET_GPR_U32(ctx, 31, 0x2B3088u);
    ctx->pc = 0x15F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F4C0u, 0x2B3080u, 0x2B3088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3088u;
label_2b3088:
    // 0x2b3088: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2b3088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b308c:
    // 0x2b308c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3090:
    // 0x2b3090: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_2b3094:
    if (ctx->pc == 0x2B3094u) {
        ctx->pc = 0x2B3098u;
        goto label_2b3098;
    }
    ctx->pc = 0x2B3090u;
    {
        const bool branch_taken_0x2b3090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3090) {
            ctx->pc = 0x2B30BCu;
            goto label_2b30bc;
        }
    }
    ctx->pc = 0x2B3098u;
label_2b3098:
    // 0x2b3098: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b3098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b309c:
    // 0x2b309c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b309cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b30a0:
    // 0x2b30a0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2b30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_2b30a4:
    // 0x2b30a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b30a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2b30a8:
    // 0x2b30a8: 0x24a5df90  addiu       $a1, $a1, -0x2070
    ctx->pc = 0x2b30a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958992));
label_2b30ac:
    // 0x2b30ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b30acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b30b0:
    // 0x2b30b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b30b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b30b4:
    // 0x2b30b4: 0xc08f558  jal         func_23D560
label_2b30b8:
    if (ctx->pc == 0x2B30B8u) {
        ctx->pc = 0x2B30BCu;
        goto label_2b30bc;
    }
    ctx->pc = 0x2B30B4u;
    SET_GPR_U32(ctx, 31, 0x2B30BCu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2B30B4u, 0x2B30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30BCu;
label_2b30bc:
    // 0x2b30bc: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b30c0:
    if (ctx->pc == 0x2B30C0u) {
        ctx->pc = 0x2B30C4u;
        goto label_2b30c4;
    }
    ctx->pc = 0x2B30BCu;
    {
        const bool branch_taken_0x2b30bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30bc) {
            ctx->pc = 0x2B30F8u;
            goto label_2b30f8;
        }
    }
    ctx->pc = 0x2B30C4u;
label_2b30c4:
    // 0x2b30c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b30c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b30c8:
    // 0x2b30c8: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2b30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b30cc:
    // 0x2b30cc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2b30d0:
    if (ctx->pc == 0x2B30D0u) {
        ctx->pc = 0x2B30D4u;
        goto label_2b30d4;
    }
    ctx->pc = 0x2B30CCu;
    {
        const bool branch_taken_0x2b30cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b30cc) {
            ctx->pc = 0x2B30ECu;
            goto label_2b30ec;
        }
    }
    ctx->pc = 0x2B30D4u;
label_2b30d4:
    // 0x2b30d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b30d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b30d8:
    // 0x2b30d8: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2b30d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b30dc:
    // 0x2b30dc: 0xc0ad7bc  jal         func_2B5EF0
label_2b30e0:
    if (ctx->pc == 0x2B30E0u) {
        ctx->pc = 0x2B30E4u;
        goto label_2b30e4;
    }
    ctx->pc = 0x2B30DCu;
    SET_GPR_U32(ctx, 31, 0x2B30E4u);
    ctx->pc = 0x2B5EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5EF0u, 0x2B30DCu, 0x2B30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30E4u;
label_2b30e4:
    // 0x2b30e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b30e8:
    if (ctx->pc == 0x2B30E8u) {
        ctx->pc = 0x2B30ECu;
        goto label_2b30ec;
    }
    ctx->pc = 0x2B30E4u;
    {
        const bool branch_taken_0x2b30e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b30e4) {
            ctx->pc = 0x2B30F8u;
            goto label_2b30f8;
        }
    }
    ctx->pc = 0x2B30ECu;
label_2b30ec:
    // 0x2b30ec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2b30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b30f0:
    // 0x2b30f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2b30f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b30f4:
    // 0x2b30f4: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b30f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
label_2b30f8:
    // 0x2b30f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b30f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b30fc:
    // 0x2b30fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b30fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b3100:
    // 0x2b3100: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b3100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2b3104:
    // 0x2b3104: 0x3e00008  jr          $ra
label_2b3108:
    if (ctx->pc == 0x2B3108u) {
        ctx->pc = 0x2B310Cu;
        goto label_2b310c;
    }
    ctx->pc = 0x2B3104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B310Cu;
label_2b310c:
    // 0x2b310c: 0x0  nop
    ctx->pc = 0x2b310cu;
    // NOP
label_2b3110:
    // 0x2b3110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b3114:
    // 0x2b3114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b3118:
    // 0x2b3118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b3118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b311c:
    // 0x2b311c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x2b311cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2b3120:
    // 0x2b3120: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b3120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3124:
    // 0x2b3124: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2b3124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b3128:
    // 0x2b3128: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2b312c:
    if (ctx->pc == 0x2B312Cu) {
        ctx->pc = 0x2B3130u;
        goto label_2b3130;
    }
    ctx->pc = 0x2B3128u;
    {
        const bool branch_taken_0x2b3128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3128) {
            ctx->pc = 0x2B3148u;
            goto label_2b3148;
        }
    }
    ctx->pc = 0x2B3130u;
label_2b3130:
    // 0x2b3130: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b3130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3134:
    // 0x2b3134: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2b3134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b3138:
    // 0x2b3138: 0xc0ad834  jal         func_2B60D0
label_2b313c:
    if (ctx->pc == 0x2B313Cu) {
        ctx->pc = 0x2B3140u;
        goto label_2b3140;
    }
    ctx->pc = 0x2B3138u;
    SET_GPR_U32(ctx, 31, 0x2B3140u);
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2B3138u, 0x2B3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3140u;
label_2b3140:
    // 0x2b3140: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b3144:
    if (ctx->pc == 0x2B3144u) {
        ctx->pc = 0x2B3148u;
        goto label_2b3148;
    }
    ctx->pc = 0x2B3140u;
    {
        const bool branch_taken_0x2b3140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3140) {
            ctx->pc = 0x2B3154u;
            goto label_2b3154;
        }
    }
    ctx->pc = 0x2B3148u;
label_2b3148:
    // 0x2b3148: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2b3148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b314c:
    // 0x2b314c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3150:
    // 0x2b3150: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b3150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
label_2b3154:
    // 0x2b3154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b3158:
    // 0x2b3158: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b3158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b315c:
    // 0x2b315c: 0x3e00008  jr          $ra
label_2b3160:
    if (ctx->pc == 0x2B3160u) {
        ctx->pc = 0x2B3164u;
        goto label_2b3164;
    }
    ctx->pc = 0x2B315Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B315Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3164u;
label_2b3164:
    // 0x2b3164: 0x0  nop
    ctx->pc = 0x2b3164u;
    // NOP
label_2b3168:
    // 0x2b3168: 0x0  nop
    ctx->pc = 0x2b3168u;
    // NOP
label_2b316c:
    // 0x2b316c: 0x0  nop
    ctx->pc = 0x2b316cu;
    // NOP
label_2b3170:
    // 0x2b3170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b3174:
    // 0x2b3174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b3178:
    // 0x2b3178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b3178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b317c:
    // 0x2b317c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x2b317cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2b3180:
    // 0x2b3180: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b3180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3184:
    // 0x2b3184: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2b3184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b3188:
    // 0x2b3188: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2b318c:
    if (ctx->pc == 0x2B318Cu) {
        ctx->pc = 0x2B3190u;
        goto label_2b3190;
    }
    ctx->pc = 0x2B3188u;
    {
        const bool branch_taken_0x2b3188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3188) {
            ctx->pc = 0x2B31A8u;
            goto label_2b31a8;
        }
    }
    ctx->pc = 0x2B3190u;
label_2b3190:
    // 0x2b3190: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b3190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3194:
    // 0x2b3194: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x2b3194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b3198:
    // 0x2b3198: 0xc0ad8ac  jal         func_2B62B0
label_2b319c:
    if (ctx->pc == 0x2B319Cu) {
        ctx->pc = 0x2B31A0u;
        goto label_2b31a0;
    }
    ctx->pc = 0x2B3198u;
    SET_GPR_U32(ctx, 31, 0x2B31A0u);
    ctx->pc = 0x2B62B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62B0u, 0x2B3198u, 0x2B31A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B31A0u;
label_2b31a0:
    // 0x2b31a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b31a4:
    if (ctx->pc == 0x2B31A4u) {
        ctx->pc = 0x2B31A8u;
        goto label_2b31a8;
    }
    ctx->pc = 0x2B31A0u;
    {
        const bool branch_taken_0x2b31a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b31a0) {
            ctx->pc = 0x2B31B4u;
            goto label_2b31b4;
        }
    }
    ctx->pc = 0x2B31A8u;
label_2b31a8:
    // 0x2b31a8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2b31a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b31ac:
    // 0x2b31ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b31acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b31b0:
    // 0x2b31b0: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b31b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_2b31b4:
    // 0x2b31b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b31b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b31b8:
    // 0x2b31b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b31b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b31bc:
    // 0x2b31bc: 0x3e00008  jr          $ra
label_2b31c0:
    if (ctx->pc == 0x2B31C0u) {
        ctx->pc = 0x2B31C4u;
        goto label_2b31c4;
    }
    ctx->pc = 0x2B31BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B31BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B31C4u;
label_2b31c4:
    // 0x2b31c4: 0x0  nop
    ctx->pc = 0x2b31c4u;
    // NOP
label_2b31c8:
    // 0x2b31c8: 0x0  nop
    ctx->pc = 0x2b31c8u;
    // NOP
label_2b31cc:
    // 0x2b31cc: 0x0  nop
    ctx->pc = 0x2b31ccu;
    // NOP
label_2b31d0:
    // 0x2b31d0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2b31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_2b31d4:
    // 0x2b31d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b31d8:
    // 0x2b31d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b31d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2b31dc:
    // 0x2b31dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b31dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2b31e0:
    // 0x2b31e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b31e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2b31e4:
    // 0x2b31e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b31e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b31e8:
    // 0x2b31e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b31ec:
    // 0x2b31ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b31ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b31f0:
    // 0x2b31f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b31f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b31f4:
    // 0x2b31f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b31f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b31f8:
    // 0x2b31f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b31f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b31fc:
    // 0x2b31fc: 0xafa40210  sw          $a0, 0x210($sp)
    ctx->pc = 0x2b31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 4));
label_2b3200:
    // 0x2b3200: 0xc08ef50  jal         func_23BD40
label_2b3204:
    if (ctx->pc == 0x2B3204u) {
        ctx->pc = 0x2B3208u;
        goto label_2b3208;
    }
    ctx->pc = 0x2B3200u;
    SET_GPR_U32(ctx, 31, 0x2B3208u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2B3200u, 0x2B3208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3208u;
label_2b3208:
    // 0x2b3208: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b3208u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b320c:
    // 0x2b320c: 0x101e000c  beq         $zero, $fp, . + 4 + (0xC << 2)
label_2b3210:
    if (ctx->pc == 0x2B3210u) {
        ctx->pc = 0x2B3214u;
        goto label_2b3214;
    }
    ctx->pc = 0x2B320Cu;
    {
        const bool branch_taken_0x2b320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x2b320c) {
            ctx->pc = 0x2B3240u;
            goto label_2b3240;
        }
    }
    ctx->pc = 0x2B3214u;
label_2b3214:
    // 0x2b3214: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b3214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b3218:
    // 0x2b3218: 0xc0406f0  jal         func_101BC0
label_2b321c:
    if (ctx->pc == 0x2B321Cu) {
        ctx->pc = 0x2B3220u;
        goto label_2b3220;
    }
    ctx->pc = 0x2B3218u;
    SET_GPR_U32(ctx, 31, 0x2B3220u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2B3218u, 0x2B3220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3220u;
label_2b3220:
    // 0x2b3220: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b3224:
    if (ctx->pc == 0x2B3224u) {
        ctx->pc = 0x2B3228u;
        goto label_2b3228;
    }
    ctx->pc = 0x2B3220u;
    {
        const bool branch_taken_0x2b3220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3220) {
            ctx->pc = 0x2B3240u;
            goto label_2b3240;
        }
    }
    ctx->pc = 0x2B3228u;
label_2b3228:
    // 0x2b3228: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2b3228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b322c:
    // 0x2b322c: 0xc0406f0  jal         func_101BC0
label_2b3230:
    if (ctx->pc == 0x2B3230u) {
        ctx->pc = 0x2B3234u;
        goto label_2b3234;
    }
    ctx->pc = 0x2B322Cu;
    SET_GPR_U32(ctx, 31, 0x2B3234u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2B322Cu, 0x2B3234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3234u;
label_2b3234:
    // 0x2b3234: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2b3234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b3238:
    // 0x2b3238: 0x1443063d  bne         $v0, $v1, . + 4 + (0x63D << 2)
label_2b323c:
    if (ctx->pc == 0x2B323Cu) {
        ctx->pc = 0x2B3240u;
        goto label_2b3240;
    }
    ctx->pc = 0x2B3238u;
    {
        const bool branch_taken_0x2b3238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3238) {
            ctx->pc = 0x2B4B30u;
            goto label_2b4b30;
        }
    }
    ctx->pc = 0x2B3240u;
label_2b3240:
    // 0x2b3240: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x2b3240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b3244:
    // 0x2b3244: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2b3244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3248:
    // 0x2b3248: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b324c:
    // 0x2b324c: 0x0  nop
    ctx->pc = 0x2b324cu;
    // NOP
label_2b3250:
    // 0x2b3250: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3250u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3254:
    // 0x2b3254: 0x45010636  bc1t        . + 4 + (0x636 << 2)
label_2b3258:
    if (ctx->pc == 0x2B3258u) {
        ctx->pc = 0x2B325Cu;
        goto label_2b325c;
    }
    ctx->pc = 0x2B3254u;
    {
        const bool branch_taken_0x2b3254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3254) {
            ctx->pc = 0x2B4B30u;
            goto label_2b4b30;
        }
    }
    ctx->pc = 0x2B325Cu;
label_2b325c:
    // 0x2b325c: 0xc0b06cc  jal         func_2C1B30
label_2b3260:
    if (ctx->pc == 0x2B3260u) {
        ctx->pc = 0x2B3264u;
        goto label_2b3264;
    }
    ctx->pc = 0x2B325Cu;
    SET_GPR_U32(ctx, 31, 0x2B3264u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2B325Cu, 0x2B3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3264u;
label_2b3264:
    // 0x2b3264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3268:
    // 0x2b3268: 0xc0b06c4  jal         func_2C1B10
label_2b326c:
    if (ctx->pc == 0x2B326Cu) {
        ctx->pc = 0x2B3270u;
        goto label_2b3270;
    }
    ctx->pc = 0x2B3268u;
    SET_GPR_U32(ctx, 31, 0x2B3270u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2B3268u, 0x2B3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3270u;
label_2b3270:
    // 0x2b3270: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2b3270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2b3274:
    // 0x2b3274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3278:
    // 0x2b3278: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b3278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b327c:
    // 0x2b327c: 0xc0b4db0  jal         func_2D36C0
label_2b3280:
    if (ctx->pc == 0x2B3280u) {
        ctx->pc = 0x2B3284u;
        goto label_2b3284;
    }
    ctx->pc = 0x2B327Cu;
    SET_GPR_U32(ctx, 31, 0x2B3284u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2B327Cu, 0x2B3284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3284u;
label_2b3284:
    // 0x2b3284: 0x1440062a  bnez        $v0, . + 4 + (0x62A << 2)
label_2b3288:
    if (ctx->pc == 0x2B3288u) {
        ctx->pc = 0x2B328Cu;
        goto label_2b328c;
    }
    ctx->pc = 0x2B3284u;
    {
        const bool branch_taken_0x2b3284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3284) {
            ctx->pc = 0x2B4B30u;
            goto label_2b4b30;
        }
    }
    ctx->pc = 0x2B328Cu;
label_2b328c:
    // 0x2b328c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b3290:
    // 0x2b3290: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2b3290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3294:
    // 0x2b3294: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x2b3294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_2b3298:
    // 0x2b3298: 0xc7a1020c  lwc1        $f1, 0x20C($sp)
    ctx->pc = 0x2b3298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b329c:
    // 0x2b329c: 0xc78081c4  lwc1        $f0, -0x7E3C($gp)
    ctx->pc = 0x2b329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b32a0:
    // 0x2b32a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b32a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b32a4:
    // 0x2b32a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2b32a8:
    if (ctx->pc == 0x2B32A8u) {
        ctx->pc = 0x2B32ACu;
        goto label_2b32ac;
    }
    ctx->pc = 0x2B32A4u;
    {
        const bool branch_taken_0x2b32a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b32a4) {
            ctx->pc = 0x2B32B4u;
            goto label_2b32b4;
        }
    }
    ctx->pc = 0x2B32ACu;
label_2b32ac:
    // 0x2b32ac: 0xc78181c4  lwc1        $f1, -0x7E3C($gp)
    ctx->pc = 0x2b32acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b32b0:
    // 0x2b32b0: 0xe7a1020c  swc1        $f1, 0x20C($sp)
    ctx->pc = 0x2b32b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_2b32b4:
    // 0x2b32b4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2b32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2b32b8:
    // 0x2b32b8: 0x90430028  lbu         $v1, 0x28($v0)
    ctx->pc = 0x2b32b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_2b32bc:
    // 0x2b32bc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2b32bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b32c0:
    // 0x2b32c0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2b32c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b32c4:
    // 0x2b32c4: 0x9384a498  lbu         $a0, -0x5B68($gp)
    ctx->pc = 0x2b32c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943896)));
label_2b32c8:
    // 0x2b32c8: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
label_2b32cc:
    if (ctx->pc == 0x2B32CCu) {
        ctx->pc = 0x2B32D0u;
        goto label_2b32d0;
    }
    ctx->pc = 0x2B32C8u;
    {
        const bool branch_taken_0x2b32c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b32c8) {
            ctx->pc = 0x2B3388u;
            goto label_2b3388;
        }
    }
    ctx->pc = 0x2B32D0u;
label_2b32d0:
    // 0x2b32d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b32d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b32d4:
    // 0x2b32d4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b32d8:
    // 0x2b32d8: 0xe440c2d0  swc1        $f0, -0x3D30($v0)
    ctx->pc = 0x2b32d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951632), bits); }
label_2b32dc:
    // 0x2b32dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b32dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b32e0:
    // 0x2b32e0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b32e4:
    // 0x2b32e4: 0xe440c2d4  swc1        $f0, -0x3D2C($v0)
    ctx->pc = 0x2b32e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951636), bits); }
label_2b32e8:
    // 0x2b32e8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b32e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b32ec:
    // 0x2b32ec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b32f0:
    // 0x2b32f0: 0xe442c2d8  swc1        $f2, -0x3D28($v0)
    ctx->pc = 0x2b32f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951640), bits); }
label_2b32f4:
    // 0x2b32f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b32f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b32f8:
    // 0x2b32f8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b32f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b32fc:
    // 0x2b32fc: 0xe441c2e0  swc1        $f1, -0x3D20($v0)
    ctx->pc = 0x2b32fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951648), bits); }
label_2b3300:
    // 0x2b3300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3304:
    // 0x2b3304: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b3304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3308:
    // 0x2b3308: 0xe440c2e4  swc1        $f0, -0x3D1C($v0)
    ctx->pc = 0x2b3308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951652), bits); }
label_2b330c:
    // 0x2b330c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b330cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3310:
    // 0x2b3310: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b3310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3314:
    // 0x2b3314: 0xe440c2e8  swc1        $f0, -0x3D18($v0)
    ctx->pc = 0x2b3314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951656), bits); }
label_2b3318:
    // 0x2b3318: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b3318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b331c:
    // 0x2b331c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3320:
    // 0x2b3320: 0xe441c2f0  swc1        $f1, -0x3D10($v0)
    ctx->pc = 0x2b3320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951664), bits); }
label_2b3324:
    // 0x2b3324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3328:
    // 0x2b3328: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b3328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b332c:
    // 0x2b332c: 0xe440c2f4  swc1        $f0, -0x3D0C($v0)
    ctx->pc = 0x2b332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951668), bits); }
label_2b3330:
    // 0x2b3330: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b3330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b3334:
    // 0x2b3334: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b3334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3338:
    // 0x2b3338: 0xe442c2f8  swc1        $f2, -0x3D08($v0)
    ctx->pc = 0x2b3338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951672), bits); }
label_2b333c:
    // 0x2b333c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b333cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3340:
    // 0x2b3340: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b3340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3344:
    // 0x2b3344: 0xe441c300  swc1        $f1, -0x3D00($v0)
    ctx->pc = 0x2b3344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951680), bits); }
label_2b3348:
    // 0x2b3348: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b334c:
    // 0x2b334c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b334cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3350:
    // 0x2b3350: 0xe440c304  swc1        $f0, -0x3CFC($v0)
    ctx->pc = 0x2b3350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951684), bits); }
label_2b3354:
    // 0x2b3354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3358:
    // 0x2b3358: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b3358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b335c:
    // 0x2b335c: 0xe440c308  swc1        $f0, -0x3CF8($v0)
    ctx->pc = 0x2b335cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951688), bits); }
label_2b3360:
    // 0x2b3360: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b3360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3364:
    // 0x2b3364: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b3364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3368:
    // 0x2b3368: 0xe441c310  swc1        $f1, -0x3CF0($v0)
    ctx->pc = 0x2b3368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951696), bits); }
label_2b336c:
    // 0x2b336c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b336cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3370:
    // 0x2b3370: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b3370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3374:
    // 0x2b3374: 0xe440c314  swc1        $f0, -0x3CEC($v0)
    ctx->pc = 0x2b3374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951700), bits); }
label_2b3378:
    // 0x2b3378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b337c:
    // 0x2b337c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b3380:
    // 0x2b3380: 0xe440c318  swc1        $f0, -0x3CE8($v0)
    ctx->pc = 0x2b3380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951704), bits); }
label_2b3384:
    // 0x2b3384: 0xa380a498  sb          $zero, -0x5B68($gp)
    ctx->pc = 0x2b3384u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943896), (uint8_t)GPR_U32(ctx, 0));
label_2b3388:
    // 0x2b3388: 0xc0b06cc  jal         func_2C1B30
label_2b338c:
    if (ctx->pc == 0x2B338Cu) {
        ctx->pc = 0x2B3390u;
        goto label_2b3390;
    }
    ctx->pc = 0x2B3388u;
    SET_GPR_U32(ctx, 31, 0x2B3390u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2B3388u, 0x2B3390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3390u;
label_2b3390:
    // 0x2b3390: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2b3390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2b3394:
    // 0x2b3394: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_2b3398:
    if (ctx->pc == 0x2B3398u) {
        ctx->pc = 0x2B339Cu;
        goto label_2b339c;
    }
    ctx->pc = 0x2B3394u;
    {
        const bool branch_taken_0x2b3394 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3394) {
            ctx->pc = 0x2B33B8u;
            goto label_2b33b8;
        }
    }
    ctx->pc = 0x2B339Cu;
label_2b339c:
    // 0x2b339c: 0xc0b06cc  jal         func_2C1B30
label_2b33a0:
    if (ctx->pc == 0x2B33A0u) {
        ctx->pc = 0x2B33A4u;
        goto label_2b33a4;
    }
    ctx->pc = 0x2B339Cu;
    SET_GPR_U32(ctx, 31, 0x2B33A4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2B339Cu, 0x2B33A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33A4u;
label_2b33a4:
    // 0x2b33a4: 0x90460040  lbu         $a2, 0x40($v0)
    ctx->pc = 0x2b33a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
label_2b33a8:
    // 0x2b33a8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2b33a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2b33ac:
    // 0x2b33ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b33acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b33b0:
    // 0x2b33b0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_2b33b4:
    if (ctx->pc == 0x2B33B4u) {
        ctx->pc = 0x2B33B8u;
        goto label_2b33b8;
    }
    ctx->pc = 0x2B33B0u;
    {
        const bool branch_taken_0x2b33b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b33b0) {
            ctx->pc = 0x2B33C0u;
            goto label_2b33c0;
        }
    }
    ctx->pc = 0x2B33B8u;
label_2b33b8:
    // 0x2b33b8: 0x100005dd  b           . + 4 + (0x5DD << 2)
label_2b33bc:
    if (ctx->pc == 0x2B33BCu) {
        ctx->pc = 0x2B33C0u;
        goto label_2b33c0;
    }
    ctx->pc = 0x2B33B8u;
    {
        const bool branch_taken_0x2b33b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b33b8) {
            ctx->pc = 0x2B4B30u;
            goto label_2b4b30;
        }
    }
    ctx->pc = 0x2B33C0u;
label_2b33c0:
    // 0x2b33c0: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b33c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b33c4:
    // 0x2b33c4: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x2b33c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_2b33c8:
    // 0x2b33c8: 0x10c005d9  beqz        $a2, . + 4 + (0x5D9 << 2)
label_2b33cc:
    if (ctx->pc == 0x2B33CCu) {
        ctx->pc = 0x2B33D0u;
        goto label_2b33d0;
    }
    ctx->pc = 0x2B33C8u;
    {
        const bool branch_taken_0x2b33c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b33c8) {
            ctx->pc = 0x2B4B30u;
            goto label_2b4b30;
        }
    }
    ctx->pc = 0x2B33D0u;
label_2b33d0:
    // 0x2b33d0: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b33d4:
    // 0x2b33d4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b33d8:
    // 0x2b33d8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2b33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b33dc:
    // 0x2b33dc: 0xc085538  jal         func_2154E0
label_2b33e0:
    if (ctx->pc == 0x2B33E0u) {
        ctx->pc = 0x2B33E4u;
        goto label_2b33e4;
    }
    ctx->pc = 0x2B33DCu;
    SET_GPR_U32(ctx, 31, 0x2B33E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B33DCu, 0x2B33E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33E4u;
label_2b33e4:
    // 0x2b33e4: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x2b33e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_2b33e8:
    // 0x2b33e8: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x2b33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_2b33ec:
    // 0x2b33ec: 0xc0ae184  jal         func_2B8610
label_2b33f0:
    if (ctx->pc == 0x2B33F0u) {
        ctx->pc = 0x2B33F4u;
        goto label_2b33f4;
    }
    ctx->pc = 0x2B33ECu;
    SET_GPR_U32(ctx, 31, 0x2B33F4u);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2B33ECu, 0x2B33F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33F4u;
label_2b33f4:
    // 0x2b33f4: 0x104005ce  beqz        $v0, . + 4 + (0x5CE << 2)
label_2b33f8:
    if (ctx->pc == 0x2B33F8u) {
        ctx->pc = 0x2B33FCu;
        goto label_2b33fc;
    }
    ctx->pc = 0x2B33F4u;
    {
        const bool branch_taken_0x2b33f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b33f4) {
            ctx->pc = 0x2B4B30u;
            goto label_2b4b30;
        }
    }
    ctx->pc = 0x2B33FCu;
label_2b33fc:
    // 0x2b33fc: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3400:
    // 0x2b3400: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b3400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b3404:
    // 0x2b3404: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b3404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b3408:
    // 0x2b3408: 0xc085538  jal         func_2154E0
label_2b340c:
    if (ctx->pc == 0x2B340Cu) {
        ctx->pc = 0x2B3410u;
        goto label_2b3410;
    }
    ctx->pc = 0x2B3408u;
    SET_GPR_U32(ctx, 31, 0x2B3410u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B3408u, 0x2B3410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3410u;
label_2b3410:
    // 0x2b3410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3414:
    // 0x2b3414: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2b3414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b3418:
    // 0x2b3418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b3418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b341c:
    // 0x2b341c: 0xc0480fc  jal         func_1203F0
label_2b3420:
    if (ctx->pc == 0x2B3420u) {
        ctx->pc = 0x2B3424u;
        goto label_2b3424;
    }
    ctx->pc = 0x2B341Cu;
    SET_GPR_U32(ctx, 31, 0x2B3424u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2B341Cu, 0x2B3424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3424u;
label_2b3424:
    // 0x2b3424: 0x144005c2  bnez        $v0, . + 4 + (0x5C2 << 2)
label_2b3428:
    if (ctx->pc == 0x2B3428u) {
        ctx->pc = 0x2B342Cu;
        goto label_2b342c;
    }
    ctx->pc = 0x2B3424u;
    {
        const bool branch_taken_0x2b3424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3424) {
            ctx->pc = 0x2B4B30u;
            goto label_2b4b30;
        }
    }
    ctx->pc = 0x2B342Cu;
label_2b342c:
    // 0x2b342c: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x2b342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_2b3430:
    // 0x2b3430: 0xc0905a0  jal         func_241680
label_2b3434:
    if (ctx->pc == 0x2B3434u) {
        ctx->pc = 0x2B3438u;
        goto label_2b3438;
    }
    ctx->pc = 0x2B3430u;
    SET_GPR_U32(ctx, 31, 0x2B3438u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x2B3430u, 0x2B3438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3438u;
label_2b3438:
    // 0x2b3438: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b3438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b343c:
    // 0x2b343c: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2b343cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3440:
    // 0x2b3440: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x2b3440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_2b3444:
    // 0x2b3444: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b3444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b3448:
    // 0x2b3448: 0xc085538  jal         func_2154E0
label_2b344c:
    if (ctx->pc == 0x2B344Cu) {
        ctx->pc = 0x2B3450u;
        goto label_2b3450;
    }
    ctx->pc = 0x2B3448u;
    SET_GPR_U32(ctx, 31, 0x2B3450u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B3448u, 0x2B3450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3450u;
label_2b3450:
    // 0x2b3450: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b3450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3454:
    // 0x2b3454: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b3454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2b3458:
    // 0x2b3458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b345c:
    // 0x2b345c: 0x0  nop
    ctx->pc = 0x2b345cu;
    // NOP
label_2b3460:
    // 0x2b3460: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x2b3460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_2b3464:
    // 0x2b3464: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b3464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3468:
    // 0x2b3468: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x2b3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b346c:
    // 0x2b346c: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x2b346cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_2b3470:
    // 0x2b3470: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3474:
    // 0x2b3474: 0xc4a2005c  lwc1        $f2, 0x5C($a1)
    ctx->pc = 0x2b3474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3478:
    // 0x2b3478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b347c:
    // 0x2b347c: 0x0  nop
    ctx->pc = 0x2b347cu;
    // NOP
label_2b3480:
    // 0x2b3480: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2b3480u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3484:
    // 0x2b3484: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2b3488:
    if (ctx->pc == 0x2B3488u) {
        ctx->pc = 0x2B348Cu;
        goto label_2b348c;
    }
    ctx->pc = 0x2B3484u;
    {
        const bool branch_taken_0x2b3484 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3484) {
            ctx->pc = 0x2B34E0u;
            goto label_2b34e0;
        }
    }
    ctx->pc = 0x2B348Cu;
label_2b348c:
    // 0x2b348c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b348cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3490:
    // 0x2b3490: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x2b3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3494:
    // 0x2b3494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3498:
    // 0x2b3498: 0x0  nop
    ctx->pc = 0x2b3498u;
    // NOP
label_2b349c:
    // 0x2b349c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b349cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b34a0:
    // 0x2b34a0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_2b34a4:
    if (ctx->pc == 0x2B34A4u) {
        ctx->pc = 0x2B34A8u;
        goto label_2b34a8;
    }
    ctx->pc = 0x2B34A0u;
    {
        const bool branch_taken_0x2b34a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b34a0) {
            ctx->pc = 0x2B34E0u;
            goto label_2b34e0;
        }
    }
    ctx->pc = 0x2B34A8u;
label_2b34a8:
    // 0x2b34a8: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b34ac:
    // 0x2b34ac: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x2b34acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b34b0:
    // 0x2b34b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b34b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b34b4:
    // 0x2b34b4: 0x0  nop
    ctx->pc = 0x2b34b4u;
    // NOP
label_2b34b8:
    // 0x2b34b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b34b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b34bc:
    // 0x2b34bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2b34c0:
    if (ctx->pc == 0x2B34C0u) {
        ctx->pc = 0x2B34C4u;
        goto label_2b34c4;
    }
    ctx->pc = 0x2B34BCu;
    {
        const bool branch_taken_0x2b34bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b34bc) {
            ctx->pc = 0x2B34E0u;
            goto label_2b34e0;
        }
    }
    ctx->pc = 0x2B34C4u;
label_2b34c4:
    // 0x2b34c4: 0x8fb10210  lw          $s1, 0x210($sp)
    ctx->pc = 0x2b34c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b34c8:
    // 0x2b34c8: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x2b34c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b34cc:
    // 0x2b34cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b34ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b34d0:
    // 0x2b34d0: 0x0  nop
    ctx->pc = 0x2b34d0u;
    // NOP
label_2b34d4:
    // 0x2b34d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b34d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b34d8:
    // 0x2b34d8: 0x4501016c  bc1t        . + 4 + (0x16C << 2)
label_2b34dc:
    if (ctx->pc == 0x2B34DCu) {
        ctx->pc = 0x2B34E0u;
        goto label_2b34e0;
    }
    ctx->pc = 0x2B34D8u;
    {
        const bool branch_taken_0x2b34d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b34d8) {
            ctx->pc = 0x2B3A8Cu;
            goto label_2b3a8c;
        }
    }
    ctx->pc = 0x2B34E0u;
label_2b34e0:
    // 0x2b34e0: 0xc780bc70  lwc1        $f0, -0x4390($gp)
    ctx->pc = 0x2b34e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b34e4:
    // 0x2b34e4: 0xc7a2020c  lwc1        $f2, 0x20C($sp)
    ctx->pc = 0x2b34e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b34e8:
    // 0x2b34e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b34e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2b34ec:
    // 0x2b34ec: 0xe780bc70  swc1        $f0, -0x4390($gp)
    ctx->pc = 0x2b34ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950000), bits); }
label_2b34f0:
    // 0x2b34f0: 0xc781bc70  lwc1        $f1, -0x4390($gp)
    ctx->pc = 0x2b34f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b34f4:
    // 0x2b34f4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2b34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2b34f8:
    // 0x2b34f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b34f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b34fc:
    // 0x2b34fc: 0x0  nop
    ctx->pc = 0x2b34fcu;
    // NOP
label_2b3500:
    // 0x2b3500: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b3500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3504:
    // 0x2b3504: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2b3508:
    if (ctx->pc == 0x2B3508u) {
        ctx->pc = 0x2B350Cu;
        goto label_2b350c;
    }
    ctx->pc = 0x2B3504u;
    {
        const bool branch_taken_0x2b3504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3504) {
            ctx->pc = 0x2B3528u;
            goto label_2b3528;
        }
    }
    ctx->pc = 0x2B350Cu;
label_2b350c:
    // 0x2b350c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b350cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2b3510:
    // 0x2b3510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b3510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3514:
    // 0x2b3514: 0xc780bc70  lwc1        $f0, -0x4390($gp)
    ctx->pc = 0x2b3514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3518:
    // 0x2b3518: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2b3518u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2b351c:
    // 0x2b351c: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2b351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3520:
    // 0x2b3520: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3524:
    // 0x2b3524: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x2b3524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_2b3528:
    // 0x2b3528: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b3528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b352c:
    // 0x2b352c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b352cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b3530:
    // 0x2b3530: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b3530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b3534:
    // 0x2b3534: 0x320f809  jalr        $t9
label_2b3538:
    if (ctx->pc == 0x2B3538u) {
        ctx->pc = 0x2B353Cu;
        goto label_2b353c;
    }
    ctx->pc = 0x2B3534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B353Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3534u, 0x2B353Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B353Cu;
label_2b353c:
    // 0x2b353c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2b353cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2b3540:
    // 0x2b3540: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b3540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b3544:
    // 0x2b3544: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2b3544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2b3548:
    // 0x2b3548: 0xc0b3f84  jal         func_2CFE10
label_2b354c:
    if (ctx->pc == 0x2B354Cu) {
        ctx->pc = 0x2B3550u;
        goto label_2b3550;
    }
    ctx->pc = 0x2B3548u;
    SET_GPR_U32(ctx, 31, 0x2B3550u);
    ctx->pc = 0x2CFE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE10u, 0x2B3548u, 0x2B3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3550u;
label_2b3550:
    // 0x2b3550: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2b3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2b3554:
    // 0x2b3554: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b3554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b3558:
    // 0x2b3558: 0xc089a88  jal         func_226A20
label_2b355c:
    if (ctx->pc == 0x2B355Cu) {
        ctx->pc = 0x2B3560u;
        goto label_2b3560;
    }
    ctx->pc = 0x2B3558u;
    SET_GPR_U32(ctx, 31, 0x2B3560u);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x2B3558u, 0x2B3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3560u;
label_2b3560:
    // 0x2b3560: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2b3560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2b3564:
    // 0x2b3564: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2b3564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2b3568:
    // 0x2b3568: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x2b3568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2b356c:
    // 0x2b356c: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x2b356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2b3570:
    // 0x2b3570: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b3570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3574:
    // 0x2b3574: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2b3574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3578:
    // 0x2b3578: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2b3578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b357c:
    // 0x2b357c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b357cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b3580:
    // 0x2b3580: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b3580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2b3584:
    // 0x2b3584: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b3584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b3588:
    // 0x2b3588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b358c:
    // 0x2b358c: 0x0  nop
    ctx->pc = 0x2b358cu;
    // NOP
label_2b3590:
    // 0x2b3590: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b3590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_2b3594:
    // 0x2b3594: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2b3594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2b3598:
    // 0x2b3598: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b3598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b359c:
    // 0x2b359c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2b359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2b35a0:
    // 0x2b35a0: 0xc104cf2  jal         func_4133C8
label_2b35a4:
    if (ctx->pc == 0x2B35A4u) {
        ctx->pc = 0x2B35A8u;
        goto label_2b35a8;
    }
    ctx->pc = 0x2B35A0u;
    SET_GPR_U32(ctx, 31, 0x2B35A8u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2B35A0u, 0x2B35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B35A8u;
label_2b35a8:
    // 0x2b35a8: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b35ac:
    // 0x2b35ac: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x2b35acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b35b0:
    // 0x2b35b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b35b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b35b4:
    // 0x2b35b4: 0x0  nop
    ctx->pc = 0x2b35b4u;
    // NOP
label_2b35b8:
    // 0x2b35b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b35b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b35bc:
    // 0x2b35bc: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_2b35c0:
    if (ctx->pc == 0x2B35C0u) {
        ctx->pc = 0x2B35C4u;
        goto label_2b35c4;
    }
    ctx->pc = 0x2B35BCu;
    {
        const bool branch_taken_0x2b35bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b35bc) {
            ctx->pc = 0x2B3660u;
            goto label_2b3660;
        }
    }
    ctx->pc = 0x2B35C4u;
label_2b35c4:
    // 0x2b35c4: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b35c8:
    // 0x2b35c8: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2b35c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b35cc:
    // 0x2b35cc: 0xc442005c  lwc1        $f2, 0x5C($v0)
    ctx->pc = 0x2b35ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b35d0:
    // 0x2b35d0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2b35d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2b35d4:
    // 0x2b35d4: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b35d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b35d8:
    // 0x2b35d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b35d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b35dc:
    // 0x2b35dc: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b35dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_2b35e0:
    // 0x2b35e0: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b35e4:
    // 0x2b35e4: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2b35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b35e8:
    // 0x2b35e8: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x2b35e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b35ec:
    // 0x2b35ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b35ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b35f0:
    // 0x2b35f0: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b35f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b35f4:
    // 0x2b35f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b35f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b35f8:
    // 0x2b35f8: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b35f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_2b35fc:
    // 0x2b35fc: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3600:
    // 0x2b3600: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2b3600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3604:
    // 0x2b3604: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x2b3604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3608:
    // 0x2b3608: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b360c:
    // 0x2b360c: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3610:
    // 0x2b3610: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3614:
    // 0x2b3614: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b3614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2b3618:
    // 0x2b3618: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b361c:
    // 0x2b361c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2b361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3620:
    // 0x2b3620: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b3620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3624:
    // 0x2b3624: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b3624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b3628:
    // 0x2b3628: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b362c:
    // 0x2b362c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2b362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_2b3630:
    // 0x2b3630: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3634:
    // 0x2b3634: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2b3634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3638:
    // 0x2b3638: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b3638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b363c:
    // 0x2b363c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b363cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b3640:
    // 0x2b3640: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3644:
    // 0x2b3644: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2b3644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2b3648:
    // 0x2b3648: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b364c:
    // 0x2b364c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2b364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3650:
    // 0x2b3650: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b3650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3654:
    // 0x2b3654: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b3654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b3658:
    // 0x2b3658: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b365c:
    // 0x2b365c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2b365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2b3660:
    // 0x2b3660: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3664:
    // 0x2b3664: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x2b3664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3668:
    // 0x2b3668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b366c:
    // 0x2b366c: 0x0  nop
    ctx->pc = 0x2b366cu;
    // NOP
label_2b3670:
    // 0x2b3670: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3670u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3674:
    // 0x2b3674: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_2b3678:
    if (ctx->pc == 0x2B3678u) {
        ctx->pc = 0x2B367Cu;
        goto label_2b367c;
    }
    ctx->pc = 0x2B3674u;
    {
        const bool branch_taken_0x2b3674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3674) {
            ctx->pc = 0x2B3724u;
            goto label_2b3724;
        }
    }
    ctx->pc = 0x2B367Cu;
label_2b367c:
    // 0x2b367c: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2b367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3680:
    // 0x2b3680: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b3680u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b3684:
    // 0x2b3684: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3688:
    // 0x2b3688: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x2b3688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b368c:
    // 0x2b368c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b368cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b3690:
    // 0x2b3690: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b3690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3694:
    // 0x2b3694: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3694u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3698:
    // 0x2b3698: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b3698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_2b369c:
    // 0x2b369c: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2b369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b36a0:
    // 0x2b36a0: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2b36a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_2b36a4:
    // 0x2b36a4: 0x8fb10210  lw          $s1, 0x210($sp)
    ctx->pc = 0x2b36a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b36a8:
    // 0x2b36a8: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x2b36a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b36ac:
    // 0x2b36ac: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2b36acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2b36b0:
    // 0x2b36b0: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x2b36b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b36b4:
    // 0x2b36b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b36b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b36b8:
    // 0x2b36b8: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b36b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_2b36bc:
    // 0x2b36bc: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2b36bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b36c0:
    // 0x2b36c0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b36c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b36c4:
    // 0x2b36c4: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b36c8:
    // 0x2b36c8: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x2b36c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b36cc:
    // 0x2b36cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b36ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b36d0:
    // 0x2b36d0: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b36d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b36d4:
    // 0x2b36d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b36d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b36d8:
    // 0x2b36d8: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b36d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2b36dc:
    // 0x2b36dc: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b36e0:
    // 0x2b36e0: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x2b36e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b36e4:
    // 0x2b36e4: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b36e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b36e8:
    // 0x2b36e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b36e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b36ec:
    // 0x2b36ec: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b36f0:
    // 0x2b36f0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2b36f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_2b36f4:
    // 0x2b36f4: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b36f8:
    // 0x2b36f8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2b36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b36fc:
    // 0x2b36fc: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x2b36fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3700:
    // 0x2b3700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b3704:
    // 0x2b3704: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3708:
    // 0x2b3708: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2b3708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2b370c:
    // 0x2b370c: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3710:
    // 0x2b3710: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2b3710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3714:
    // 0x2b3714: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b3714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3718:
    // 0x2b3718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b3718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b371c:
    // 0x2b371c: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3720:
    // 0x2b3720: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2b3720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2b3724:
    // 0x2b3724: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2b3724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2b3728:
    // 0x2b3728: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2b3728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2b372c:
    // 0x2b372c: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2b372cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2b3730:
    // 0x2b3730: 0xc041d58  jal         func_107560
label_2b3734:
    if (ctx->pc == 0x2B3734u) {
        ctx->pc = 0x2B3738u;
        goto label_2b3738;
    }
    ctx->pc = 0x2B3730u;
    SET_GPR_U32(ctx, 31, 0x2B3738u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B3730u, 0x2B3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3738u;
label_2b3738:
    // 0x2b3738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b373c:
    // 0x2b373c: 0x0  nop
    ctx->pc = 0x2b373cu;
    // NOP
label_2b3740:
    // 0x2b3740: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b3740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_2b3744:
    // 0x2b3744: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3748:
    // 0x2b3748: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x2b3748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b374c:
    // 0x2b374c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b374cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3750:
    // 0x2b3750: 0x0  nop
    ctx->pc = 0x2b3750u;
    // NOP
label_2b3754:
    // 0x2b3754: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3754u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3758:
    // 0x2b3758: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_2b375c:
    if (ctx->pc == 0x2B375Cu) {
        ctx->pc = 0x2B3760u;
        goto label_2b3760;
    }
    ctx->pc = 0x2B3758u;
    {
        const bool branch_taken_0x2b3758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3758) {
            ctx->pc = 0x2B37FCu;
            goto label_2b37fc;
        }
    }
    ctx->pc = 0x2B3760u;
label_2b3760:
    // 0x2b3760: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3764:
    // 0x2b3764: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2b3764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3768:
    // 0x2b3768: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x2b3768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b376c:
    // 0x2b376c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b376cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b3770:
    // 0x2b3770: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3774:
    // 0x2b3774: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3778:
    // 0x2b3778: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b3778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_2b377c:
    // 0x2b377c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b377cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3780:
    // 0x2b3780: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2b3780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3784:
    // 0x2b3784: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x2b3784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3788:
    // 0x2b3788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b378c:
    // 0x2b378c: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3790:
    // 0x2b3790: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3794:
    // 0x2b3794: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b3794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_2b3798:
    // 0x2b3798: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b379c:
    // 0x2b379c: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2b379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b37a0:
    // 0x2b37a0: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x2b37a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b37a4:
    // 0x2b37a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b37a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b37a8:
    // 0x2b37a8: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b37a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b37ac:
    // 0x2b37ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b37acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b37b0:
    // 0x2b37b0: 0xe7a101b8  swc1        $f1, 0x1B8($sp)
    ctx->pc = 0x2b37b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2b37b4:
    // 0x2b37b4: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b37b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b37b8:
    // 0x2b37b8: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2b37b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b37bc:
    // 0x2b37bc: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x2b37bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b37c0:
    // 0x2b37c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b37c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b37c4:
    // 0x2b37c4: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b37c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b37c8:
    // 0x2b37c8: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2b37c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_2b37cc:
    // 0x2b37cc: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b37d0:
    // 0x2b37d0: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x2b37d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b37d4:
    // 0x2b37d4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b37d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b37d8:
    // 0x2b37d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b37d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b37dc:
    // 0x2b37dc: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b37dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b37e0:
    // 0x2b37e0: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2b37e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_2b37e4:
    // 0x2b37e4: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b37e8:
    // 0x2b37e8: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x2b37e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b37ec:
    // 0x2b37ec: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b37ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b37f0:
    // 0x2b37f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b37f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b37f4:
    // 0x2b37f4: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b37f8:
    // 0x2b37f8: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2b37f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_2b37fc:
    // 0x2b37fc: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b37fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3800:
    // 0x2b3800: 0xc4810068  lwc1        $f1, 0x68($a0)
    ctx->pc = 0x2b3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3804:
    // 0x2b3804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3808:
    // 0x2b3808: 0x0  nop
    ctx->pc = 0x2b3808u;
    // NOP
label_2b380c:
    // 0x2b380c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b380cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3810:
    // 0x2b3810: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
label_2b3814:
    if (ctx->pc == 0x2B3814u) {
        ctx->pc = 0x2B3818u;
        goto label_2b3818;
    }
    ctx->pc = 0x2B3810u;
    {
        const bool branch_taken_0x2b3810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3810) {
            ctx->pc = 0x2B38C0u;
            goto label_2b38c0;
        }
    }
    ctx->pc = 0x2B3818u;
label_2b3818:
    // 0x2b3818: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2b3818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b381c:
    // 0x2b381c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b381cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b3820:
    // 0x2b3820: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3824:
    // 0x2b3824: 0xc4a00068  lwc1        $f0, 0x68($a1)
    ctx->pc = 0x2b3824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3828:
    // 0x2b3828: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b382c:
    // 0x2b382c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x2b382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3830:
    // 0x2b3830: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b3830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3834:
    // 0x2b3834: 0xe7a101b0  swc1        $f1, 0x1B0($sp)
    ctx->pc = 0x2b3834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_2b3838:
    // 0x2b3838: 0xc7ac0200  lwc1        $f12, 0x200($sp)
    ctx->pc = 0x2b3838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b383c:
    // 0x2b383c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2b383cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_2b3840:
    // 0x2b3840: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2b3840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3844:
    // 0x2b3844: 0xc4c00068  lwc1        $f0, 0x68($a2)
    ctx->pc = 0x2b3844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3848:
    // 0x2b3848: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x2b3848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_2b384c:
    // 0x2b384c: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3850:
    // 0x2b3850: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2b3850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3854:
    // 0x2b3854: 0xe7a201b4  swc1        $f2, 0x1B4($sp)
    ctx->pc = 0x2b3854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_2b3858:
    // 0x2b3858: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2b3858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b385c:
    // 0x2b385c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b385cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b3860:
    // 0x2b3860: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3864:
    // 0x2b3864: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x2b3864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3868:
    // 0x2b3868: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2b3868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b386c:
    // 0x2b386c: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x2b386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3870:
    // 0x2b3870: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x2b3870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2b3874:
    // 0x2b3874: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b3874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_2b3878:
    // 0x2b3878: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b387c:
    // 0x2b387c: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x2b387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3880:
    // 0x2b3880: 0xc7a201b0  lwc1        $f2, 0x1B0($sp)
    ctx->pc = 0x2b3880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3884:
    // 0x2b3884: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b3884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2b3888:
    // 0x2b3888: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b388c:
    // 0x2b388c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2b388cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_2b3890:
    // 0x2b3890: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3894:
    // 0x2b3894: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2b3894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3898:
    // 0x2b3898: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x2b3898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b389c:
    // 0x2b389c: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x2b389cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b38a0:
    // 0x2b38a0: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b38a4:
    // 0x2b38a4: 0xe4620040  swc1        $f2, 0x40($v1)
    ctx->pc = 0x2b38a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_2b38a8:
    // 0x2b38a8: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b38a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b38ac:
    // 0x2b38ac: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x2b38acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b38b0:
    // 0x2b38b0: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2b38b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b38b4:
    // 0x2b38b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b38b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b38b8:
    // 0x2b38b8: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b38b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b38bc:
    // 0x2b38bc: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x2b38bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_2b38c0:
    // 0x2b38c0: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b38c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b38c4:
    // 0x2b38c4: 0xc462003c  lwc1        $f2, 0x3C($v1)
    ctx->pc = 0x2b38c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b38c8:
    // 0x2b38c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b38c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b38cc:
    // 0x2b38cc: 0x0  nop
    ctx->pc = 0x2b38ccu;
    // NOP
label_2b38d0:
    // 0x2b38d0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2b38d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b38d4:
    // 0x2b38d4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_2b38d8:
    if (ctx->pc == 0x2B38D8u) {
        ctx->pc = 0x2B38DCu;
        goto label_2b38dc;
    }
    ctx->pc = 0x2B38D4u;
    {
        const bool branch_taken_0x2b38d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b38d4) {
            ctx->pc = 0x2B3918u;
            goto label_2b3918;
        }
    }
    ctx->pc = 0x2B38DCu;
label_2b38dc:
    // 0x2b38dc: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b38dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b38e0:
    // 0x2b38e0: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2b38e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b38e4:
    // 0x2b38e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b38e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b38e8:
    // 0x2b38e8: 0x0  nop
    ctx->pc = 0x2b38e8u;
    // NOP
label_2b38ec:
    // 0x2b38ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b38ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b38f0:
    // 0x2b38f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2b38f4:
    if (ctx->pc == 0x2B38F4u) {
        ctx->pc = 0x2B38F8u;
        goto label_2b38f8;
    }
    ctx->pc = 0x2B38F0u;
    {
        const bool branch_taken_0x2b38f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b38f0) {
            ctx->pc = 0x2B3918u;
            goto label_2b3918;
        }
    }
    ctx->pc = 0x2B38F8u;
label_2b38f8:
    // 0x2b38f8: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b38f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b38fc:
    // 0x2b38fc: 0xc4620044  lwc1        $f2, 0x44($v1)
    ctx->pc = 0x2b38fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3900:
    // 0x2b3900: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b3900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3904:
    // 0x2b3904: 0x0  nop
    ctx->pc = 0x2b3904u;
    // NOP
label_2b3908:
    // 0x2b3908: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2b3908u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b390c:
    // 0x2b390c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2b3910:
    if (ctx->pc == 0x2B3910u) {
        ctx->pc = 0x2B3914u;
        goto label_2b3914;
    }
    ctx->pc = 0x2B390Cu;
    {
        const bool branch_taken_0x2b390c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b390c) {
            ctx->pc = 0x2B3918u;
            goto label_2b3918;
        }
    }
    ctx->pc = 0x2B3914u;
label_2b3914:
    // 0x2b3914: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x2b3914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
label_2b3918:
    // 0x2b3918: 0x16e0005f  bnez        $s7, . + 4 + (0x5F << 2)
label_2b391c:
    if (ctx->pc == 0x2B391Cu) {
        ctx->pc = 0x2B3920u;
        goto label_2b3920;
    }
    ctx->pc = 0x2B3918u;
    {
        const bool branch_taken_0x2b3918 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3918) {
            ctx->pc = 0x2B3A98u;
            goto label_2b3a98;
        }
    }
    ctx->pc = 0x2B3920u;
label_2b3920:
    // 0x2b3920: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2b3920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2b3924:
    // 0x2b3924: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2b3924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b3928:
    // 0x2b3928: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2b392c:
    if (ctx->pc == 0x2B392Cu) {
        ctx->pc = 0x2B3930u;
        goto label_2b3930;
    }
    ctx->pc = 0x2B3928u;
    {
        const bool branch_taken_0x2b3928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3928) {
            ctx->pc = 0x2B3950u;
            goto label_2b3950;
        }
    }
    ctx->pc = 0x2B3930u;
label_2b3930:
    // 0x2b3930: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2b3930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2b3934:
    // 0x2b3934: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2b3934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b3938:
    // 0x2b3938: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b3938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2b393c:
    // 0x2b393c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2b3940:
    // 0x2b3940: 0x0  nop
    ctx->pc = 0x2b3940u;
    // NOP
label_2b3944:
    // 0x2b3944: 0x0  nop
    ctx->pc = 0x2b3944u;
    // NOP
label_2b3948:
    // 0x2b3948: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2b394c:
    if (ctx->pc == 0x2B394Cu) {
        ctx->pc = 0x2B3950u;
        goto label_2b3950;
    }
    ctx->pc = 0x2B3948u;
    {
        const bool branch_taken_0x2b3948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3948) {
            ctx->pc = 0x2B3934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3934;
        }
    }
    ctx->pc = 0x2B3950u;
label_2b3950:
    // 0x2b3950: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b3950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3954:
    // 0x2b3954: 0x2485003c  addiu       $a1, $a0, 0x3C
    ctx->pc = 0x2b3954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_2b3958:
    // 0x2b3958: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b3958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b395c:
    // 0x2b395c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2b395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2b3960:
    // 0x2b3960: 0xc0b5f04  jal         func_2D7C10
label_2b3964:
    if (ctx->pc == 0x2B3964u) {
        ctx->pc = 0x2B3968u;
        goto label_2b3968;
    }
    ctx->pc = 0x2B3960u;
    SET_GPR_U32(ctx, 31, 0x2B3968u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2B3960u, 0x2B3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3968u;
label_2b3968:
    // 0x2b3968: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x2b3968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_2b396c:
    // 0x2b396c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b3970:
    // 0x2b3970: 0xc091008  jal         func_244020
label_2b3974:
    if (ctx->pc == 0x2B3974u) {
        ctx->pc = 0x2B3978u;
        goto label_2b3978;
    }
    ctx->pc = 0x2B3970u;
    SET_GPR_U32(ctx, 31, 0x2B3978u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2B3970u, 0x2B3978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3978u;
label_2b3978:
    // 0x2b3978: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2b3978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_2b397c:
    // 0x2b397c: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x2b397cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3980:
    // 0x2b3980: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x2b3980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3984:
    // 0x2b3984: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b3984u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b3988:
    // 0x2b3988: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x2b3988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_2b398c:
    // 0x2b398c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b398cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3990:
    // 0x2b3990: 0x0  nop
    ctx->pc = 0x2b3990u;
    // NOP
label_2b3994:
    // 0x2b3994: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2b3994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b3998:
    // 0x2b3998: 0xc78081fc  lwc1        $f0, -0x7E04($gp)
    ctx->pc = 0x2b3998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b399c:
    // 0x2b399c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2b399cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b39a0:
    // 0x2b39a0: 0xc0c38f0  jal         func_30E3C0
label_2b39a4:
    if (ctx->pc == 0x2B39A4u) {
        ctx->pc = 0x2B39A8u;
        goto label_2b39a8;
    }
    ctx->pc = 0x2B39A0u;
    SET_GPR_U32(ctx, 31, 0x2B39A8u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x2B39A0u, 0x2B39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B39A8u;
label_2b39a8:
    // 0x2b39a8: 0xc7838200  lwc1        $f3, -0x7E00($gp)
    ctx->pc = 0x2b39a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b39ac:
    // 0x2b39ac: 0xc7828204  lwc1        $f2, -0x7DFC($gp)
    ctx->pc = 0x2b39acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b39b0:
    // 0x2b39b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b39b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b39b4:
    // 0x2b39b4: 0x0  nop
    ctx->pc = 0x2b39b4u;
    // NOP
label_2b39b8:
    // 0x2b39b8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2b39b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_2b39bc:
    // 0x2b39bc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2b39bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2b39c0:
    // 0x2b39c0: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x2b39c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_2b39c4:
    // 0x2b39c4: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x2b39c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_2b39c8:
    // 0x2b39c8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2b39c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b39cc:
    // 0x2b39cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2b39d0:
    // 0x2b39d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b39d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b39d4:
    // 0x2b39d4: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x2b39d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b39d8:
    // 0x2b39d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b39d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b39dc:
    // 0x2b39dc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2b39dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2b39e0:
    // 0x2b39e0: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2b39e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b39e4:
    // 0x2b39e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b39e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b39e8:
    // 0x2b39e8: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2b39e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_2b39ec:
    // 0x2b39ec: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2b39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_2b39f0:
    // 0x2b39f0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2b39f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b39f4:
    // 0x2b39f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b39f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2b39f8:
    // 0x2b39f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b39f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b39fc:
    // 0x2b39fc: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x2b39fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3a00:
    // 0x2b3a00: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b3a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b3a04:
    // 0x2b3a04: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x2b3a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2b3a08:
    // 0x2b3a08: 0xc7a201c4  lwc1        $f2, 0x1C4($sp)
    ctx->pc = 0x2b3a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3a0c:
    // 0x2b3a0c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2b3a0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2b3a10:
    // 0x2b3a10: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x2b3a10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_2b3a14:
    // 0x2b3a14: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2b3a18:
    // 0x2b3a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3a1c:
    // 0x2b3a1c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2b3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_2b3a20:
    // 0x2b3a20: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2b3a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b3a24:
    // 0x2b3a24: 0xc7ac0204  lwc1        $f12, 0x204($sp)
    ctx->pc = 0x2b3a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b3a28:
    // 0x2b3a28: 0x460c6881  sub.s       $f2, $f13, $f12
    ctx->pc = 0x2b3a28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
label_2b3a2c:
    // 0x2b3a2c: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2b3a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2b3a30:
    // 0x2b3a30: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2b3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3a34:
    // 0x2b3a34: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b3a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3a38:
    // 0x2b3a38: 0xe7a101c8  swc1        $f1, 0x1C8($sp)
    ctx->pc = 0x2b3a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_2b3a3c:
    // 0x2b3a3c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3a40:
    // 0x2b3a40: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2b3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3a44:
    // 0x2b3a44: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x2b3a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3a48:
    // 0x2b3a48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b3a4c:
    // 0x2b3a4c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3a50:
    // 0x2b3a50: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2b3a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_2b3a54:
    // 0x2b3a54: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3a58:
    // 0x2b3a58: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2b3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3a5c:
    // 0x2b3a5c: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x2b3a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3a60:
    // 0x2b3a60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b3a60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b3a64:
    // 0x2b3a64: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3a68:
    // 0x2b3a68: 0xe4a10040  swc1        $f1, 0x40($a1)
    ctx->pc = 0x2b3a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_2b3a6c:
    // 0x2b3a6c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3a70:
    // 0x2b3a70: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x2b3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3a74:
    // 0x2b3a74: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x2b3a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3a78:
    // 0x2b3a78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b3a7c:
    // 0x2b3a7c: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3a80:
    // 0x2b3a80: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x2b3a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_2b3a84:
    // 0x2b3a84: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b3a88:
    if (ctx->pc == 0x2B3A88u) {
        ctx->pc = 0x2B3A8Cu;
        goto label_2b3a8c;
    }
    ctx->pc = 0x2B3A84u;
    {
        const bool branch_taken_0x2b3a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3a84) {
            ctx->pc = 0x2B3A98u;
            goto label_2b3a98;
        }
    }
    ctx->pc = 0x2B3A8Cu;
label_2b3a8c:
    // 0x2b3a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3a90:
    // 0x2b3a90: 0x0  nop
    ctx->pc = 0x2b3a90u;
    // NOP
label_2b3a94:
    // 0x2b3a94: 0xe780bc70  swc1        $f0, -0x4390($gp)
    ctx->pc = 0x2b3a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950000), bits); }
label_2b3a98:
    // 0x2b3a98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b3a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3a9c:
    // 0x2b3a9c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3aa0:
    // 0x2b3aa0: 0x8c650038  lw          $a1, 0x38($v1)
    ctx->pc = 0x2b3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b3aa4:
    // 0x2b3aa4: 0x10a003a0  beqz        $a1, . + 4 + (0x3A0 << 2)
label_2b3aa8:
    if (ctx->pc == 0x2B3AA8u) {
        ctx->pc = 0x2B3AACu;
        goto label_2b3aac;
    }
    ctx->pc = 0x2B3AA4u;
    {
        const bool branch_taken_0x2b3aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3aa4) {
            ctx->pc = 0x2B4928u;
            goto label_2b4928;
        }
    }
    ctx->pc = 0x2B3AACu;
label_2b3aac:
    // 0x2b3aac: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3ab0:
    // 0x2b3ab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b3ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b3ab4:
    // 0x2b3ab4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b3ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b3ab8:
    // 0x2b3ab8: 0x320f809  jalr        $t9
label_2b3abc:
    if (ctx->pc == 0x2B3ABCu) {
        ctx->pc = 0x2B3AC0u;
        goto label_2b3ac0;
    }
    ctx->pc = 0x2B3AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B3AC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3AB8u, 0x2B3AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B3AC0u;
label_2b3ac0:
    // 0x2b3ac0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2b3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_2b3ac4:
    // 0x2b3ac4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2b3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b3ac8:
    // 0x2b3ac8: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x2b3ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_2b3acc:
    // 0x2b3acc: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x2b3accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2b3ad0:
    // 0x2b3ad0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2b3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3ad4:
    // 0x2b3ad4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b3ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3ad8:
    // 0x2b3ad8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b3ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3adc:
    // 0x2b3adc: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2b3adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b3ae0:
    // 0x2b3ae0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b3ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b3ae4:
    // 0x2b3ae4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b3ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b3ae8:
    // 0x2b3ae8: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3aec:
    // 0x2b3aec: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x2b3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3af0:
    // 0x2b3af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3af4:
    // 0x2b3af4: 0x0  nop
    ctx->pc = 0x2b3af4u;
    // NOP
label_2b3af8:
    // 0x2b3af8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3af8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3afc:
    // 0x2b3afc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2b3b00:
    if (ctx->pc == 0x2B3B00u) {
        ctx->pc = 0x2B3B04u;
        goto label_2b3b04;
    }
    ctx->pc = 0x2B3AFCu;
    {
        const bool branch_taken_0x2b3afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3afc) {
            ctx->pc = 0x2B3B58u;
            goto label_2b3b58;
        }
    }
    ctx->pc = 0x2B3B04u;
label_2b3b04:
    // 0x2b3b04: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3b08:
    // 0x2b3b08: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2b3b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3b0c:
    // 0x2b3b0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3b0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3b10:
    // 0x2b3b10: 0x0  nop
    ctx->pc = 0x2b3b10u;
    // NOP
label_2b3b14:
    // 0x2b3b14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3b14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3b18:
    // 0x2b3b18: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_2b3b1c:
    if (ctx->pc == 0x2B3B1Cu) {
        ctx->pc = 0x2B3B20u;
        goto label_2b3b20;
    }
    ctx->pc = 0x2B3B18u;
    {
        const bool branch_taken_0x2b3b18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3b18) {
            ctx->pc = 0x2B3B58u;
            goto label_2b3b58;
        }
    }
    ctx->pc = 0x2B3B20u;
label_2b3b20:
    // 0x2b3b20: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3b24:
    // 0x2b3b24: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x2b3b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3b28:
    // 0x2b3b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b3b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3b2c:
    // 0x2b3b2c: 0x0  nop
    ctx->pc = 0x2b3b2cu;
    // NOP
label_2b3b30:
    // 0x2b3b30: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3b30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3b34:
    // 0x2b3b34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2b3b38:
    if (ctx->pc == 0x2B3B38u) {
        ctx->pc = 0x2B3B3Cu;
        goto label_2b3b3c;
    }
    ctx->pc = 0x2B3B34u;
    {
        const bool branch_taken_0x2b3b34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3b34) {
            ctx->pc = 0x2B3B58u;
            goto label_2b3b58;
        }
    }
    ctx->pc = 0x2B3B3Cu;
label_2b3b3c:
    // 0x2b3b3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3b40:
    // 0x2b3b40: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2b3b40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b3b44:
    // 0x2b3b44: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2b3b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3b48:
    // 0x2b3b48: 0x24c40048  addiu       $a0, $a2, 0x48
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
label_2b3b4c:
    // 0x2b3b4c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2b3b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2b3b50:
    // 0x2b3b50: 0xc041d58  jal         func_107560
label_2b3b54:
    if (ctx->pc == 0x2B3B54u) {
        ctx->pc = 0x2B3B58u;
        goto label_2b3b58;
    }
    ctx->pc = 0x2B3B50u;
    SET_GPR_U32(ctx, 31, 0x2B3B58u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B3B50u, 0x2B3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3B58u;
label_2b3b58:
    // 0x2b3b58: 0x8383bc78  lb          $v1, -0x4388($gp)
    ctx->pc = 0x2b3b58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950008)));
label_2b3b5c:
    // 0x2b3b5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2b3b60:
    if (ctx->pc == 0x2B3B60u) {
        ctx->pc = 0x2B3B64u;
        goto label_2b3b64;
    }
    ctx->pc = 0x2B3B5Cu;
    {
        const bool branch_taken_0x2b3b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3b5c) {
            ctx->pc = 0x2B3B78u;
            goto label_2b3b78;
        }
    }
    ctx->pc = 0x2B3B64u;
label_2b3b64:
    // 0x2b3b64: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3b68:
    // 0x2b3b68: 0xc4610064  lwc1        $f1, 0x64($v1)
    ctx->pc = 0x2b3b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3b6c:
    // 0x2b3b6c: 0xe781bc74  swc1        $f1, -0x438C($gp)
    ctx->pc = 0x2b3b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950004), bits); }
label_2b3b70:
    // 0x2b3b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3b74:
    // 0x2b3b74: 0xa384bc78  sb          $a0, -0x4388($gp)
    ctx->pc = 0x2b3b74u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950008), (uint8_t)GPR_U32(ctx, 4));
label_2b3b78:
    // 0x2b3b78: 0x8383bc80  lb          $v1, -0x4380($gp)
    ctx->pc = 0x2b3b78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950016)));
label_2b3b7c:
    // 0x2b3b7c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2b3b80:
    if (ctx->pc == 0x2B3B80u) {
        ctx->pc = 0x2B3B84u;
        goto label_2b3b84;
    }
    ctx->pc = 0x2B3B7Cu;
    {
        const bool branch_taken_0x2b3b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3b7c) {
            ctx->pc = 0x2B3B98u;
            goto label_2b3b98;
        }
    }
    ctx->pc = 0x2B3B84u;
label_2b3b84:
    // 0x2b3b84: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3b88:
    // 0x2b3b88: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x2b3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3b8c:
    // 0x2b3b8c: 0xe780bc7c  swc1        $f0, -0x4384($gp)
    ctx->pc = 0x2b3b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950012), bits); }
label_2b3b90:
    // 0x2b3b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3b94:
    // 0x2b3b94: 0xa383bc80  sb          $v1, -0x4380($gp)
    ctx->pc = 0x2b3b94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950016), (uint8_t)GPR_U32(ctx, 3));
label_2b3b98:
    // 0x2b3b98: 0x8383bc88  lb          $v1, -0x4378($gp)
    ctx->pc = 0x2b3b98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950024)));
label_2b3b9c:
    // 0x2b3b9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2b3ba0:
    if (ctx->pc == 0x2B3BA0u) {
        ctx->pc = 0x2B3BA4u;
        goto label_2b3ba4;
    }
    ctx->pc = 0x2B3B9Cu;
    {
        const bool branch_taken_0x2b3b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3b9c) {
            ctx->pc = 0x2B3BB8u;
            goto label_2b3bb8;
        }
    }
    ctx->pc = 0x2B3BA4u;
label_2b3ba4:
    // 0x2b3ba4: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3ba8:
    // 0x2b3ba8: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x2b3ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3bac:
    // 0x2b3bac: 0xe780bc84  swc1        $f0, -0x437C($gp)
    ctx->pc = 0x2b3bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950020), bits); }
label_2b3bb0:
    // 0x2b3bb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3bb4:
    // 0x2b3bb4: 0xa384bc88  sb          $a0, -0x4378($gp)
    ctx->pc = 0x2b3bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950024), (uint8_t)GPR_U32(ctx, 4));
label_2b3bb8:
    // 0x2b3bb8: 0x8383bc90  lb          $v1, -0x4370($gp)
    ctx->pc = 0x2b3bb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950032)));
label_2b3bbc:
    // 0x2b3bbc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2b3bc0:
    if (ctx->pc == 0x2B3BC0u) {
        ctx->pc = 0x2B3BC4u;
        goto label_2b3bc4;
    }
    ctx->pc = 0x2B3BBCu;
    {
        const bool branch_taken_0x2b3bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3bbc) {
            ctx->pc = 0x2B3BD8u;
            goto label_2b3bd8;
        }
    }
    ctx->pc = 0x2B3BC4u;
label_2b3bc4:
    // 0x2b3bc4: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3bc8:
    // 0x2b3bc8: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x2b3bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3bcc:
    // 0x2b3bcc: 0xe780bc8c  swc1        $f0, -0x4374($gp)
    ctx->pc = 0x2b3bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950028), bits); }
label_2b3bd0:
    // 0x2b3bd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3bd4:
    // 0x2b3bd4: 0xa383bc90  sb          $v1, -0x4370($gp)
    ctx->pc = 0x2b3bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950032), (uint8_t)GPR_U32(ctx, 3));
label_2b3bd8:
    // 0x2b3bd8: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3bdc:
    // 0x2b3bdc: 0xc4a10064  lwc1        $f1, 0x64($a1)
    ctx->pc = 0x2b3bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3be0:
    // 0x2b3be0: 0xc780bc74  lwc1        $f0, -0x438C($gp)
    ctx->pc = 0x2b3be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3be4:
    // 0x2b3be4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3be4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3be8:
    // 0x2b3be8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_2b3bec:
    if (ctx->pc == 0x2B3BECu) {
        ctx->pc = 0x2B3BF0u;
        goto label_2b3bf0;
    }
    ctx->pc = 0x2B3BE8u;
    {
        const bool branch_taken_0x2b3be8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3be8) {
            ctx->pc = 0x2B3C38u;
            goto label_2b3c38;
        }
    }
    ctx->pc = 0x2B3BF0u;
label_2b3bf0:
    // 0x2b3bf0: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3bf4:
    // 0x2b3bf4: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x2b3bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3bf8:
    // 0x2b3bf8: 0xc780bc7c  lwc1        $f0, -0x4384($gp)
    ctx->pc = 0x2b3bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3bfc:
    // 0x2b3bfc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3bfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3c00:
    // 0x2b3c00: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2b3c04:
    if (ctx->pc == 0x2B3C04u) {
        ctx->pc = 0x2B3C08u;
        goto label_2b3c08;
    }
    ctx->pc = 0x2B3C00u;
    {
        const bool branch_taken_0x2b3c00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3c00) {
            ctx->pc = 0x2B3C38u;
            goto label_2b3c38;
        }
    }
    ctx->pc = 0x2B3C08u;
label_2b3c08:
    // 0x2b3c08: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3c0c:
    // 0x2b3c0c: 0xc4a10060  lwc1        $f1, 0x60($a1)
    ctx->pc = 0x2b3c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3c10:
    // 0x2b3c10: 0xc780bc84  lwc1        $f0, -0x437C($gp)
    ctx->pc = 0x2b3c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3c14:
    // 0x2b3c14: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3c14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3c18:
    // 0x2b3c18: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2b3c1c:
    if (ctx->pc == 0x2B3C1Cu) {
        ctx->pc = 0x2B3C20u;
        goto label_2b3c20;
    }
    ctx->pc = 0x2B3C18u;
    {
        const bool branch_taken_0x2b3c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3c18) {
            ctx->pc = 0x2B3C38u;
            goto label_2b3c38;
        }
    }
    ctx->pc = 0x2B3C20u;
label_2b3c20:
    // 0x2b3c20: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3c24:
    // 0x2b3c24: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x2b3c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3c28:
    // 0x2b3c28: 0xc781bc8c  lwc1        $f1, -0x4374($gp)
    ctx->pc = 0x2b3c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3c2c:
    // 0x2b3c2c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b3c2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3c30:
    // 0x2b3c30: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_2b3c34:
    if (ctx->pc == 0x2B3C34u) {
        ctx->pc = 0x2B3C38u;
        goto label_2b3c38;
    }
    ctx->pc = 0x2B3C30u;
    {
        const bool branch_taken_0x2b3c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3c30) {
            ctx->pc = 0x2B3C7Cu;
            goto label_2b3c7c;
        }
    }
    ctx->pc = 0x2B3C38u;
label_2b3c38:
    // 0x2b3c38: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3c3c:
    // 0x2b3c3c: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x2b3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2b3c40:
    // 0x2b3c40: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2b3c44:
    // 0x2b3c44: 0xc041d58  jal         func_107560
label_2b3c48:
    if (ctx->pc == 0x2B3C48u) {
        ctx->pc = 0x2B3C4Cu;
        goto label_2b3c4c;
    }
    ctx->pc = 0x2B3C44u;
    SET_GPR_U32(ctx, 31, 0x2B3C4Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B3C44u, 0x2B3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C4Cu;
label_2b3c4c:
    // 0x2b3c4c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3c50:
    // 0x2b3c50: 0xc4600064  lwc1        $f0, 0x64($v1)
    ctx->pc = 0x2b3c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3c54:
    // 0x2b3c54: 0xe780bc74  swc1        $f0, -0x438C($gp)
    ctx->pc = 0x2b3c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950004), bits); }
label_2b3c58:
    // 0x2b3c58: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3c5c:
    // 0x2b3c5c: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x2b3c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3c60:
    // 0x2b3c60: 0xe781bc7c  swc1        $f1, -0x4384($gp)
    ctx->pc = 0x2b3c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950012), bits); }
label_2b3c64:
    // 0x2b3c64: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3c68:
    // 0x2b3c68: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x2b3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3c6c:
    // 0x2b3c6c: 0xe780bc84  swc1        $f0, -0x437C($gp)
    ctx->pc = 0x2b3c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950020), bits); }
label_2b3c70:
    // 0x2b3c70: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3c74:
    // 0x2b3c74: 0xc460005c  lwc1        $f0, 0x5C($v1)
    ctx->pc = 0x2b3c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3c78:
    // 0x2b3c78: 0xe780bc8c  swc1        $f0, -0x4374($gp)
    ctx->pc = 0x2b3c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950028), bits); }
label_2b3c7c:
    // 0x2b3c7c: 0x16000252  bnez        $s0, . + 4 + (0x252 << 2)
label_2b3c80:
    if (ctx->pc == 0x2B3C80u) {
        ctx->pc = 0x2B3C84u;
        goto label_2b3c84;
    }
    ctx->pc = 0x2B3C7Cu;
    {
        const bool branch_taken_0x2b3c7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3c7c) {
            ctx->pc = 0x2B45C8u;
            goto label_2b45c8;
        }
    }
    ctx->pc = 0x2B3C84u;
label_2b3c84:
    // 0x2b3c84: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2b3c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2b3c88:
    // 0x2b3c88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b3c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b3c8c:
    // 0x2b3c8c: 0xc090f80  jal         func_243E00
label_2b3c90:
    if (ctx->pc == 0x2B3C90u) {
        ctx->pc = 0x2B3C94u;
        goto label_2b3c94;
    }
    ctx->pc = 0x2B3C8Cu;
    SET_GPR_U32(ctx, 31, 0x2B3C94u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2B3C8Cu, 0x2B3C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C94u;
label_2b3c94:
    // 0x2b3c94: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2b3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2b3c98:
    // 0x2b3c98: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x2b3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2b3c9c:
    // 0x2b3c9c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b3c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3ca0:
    // 0x2b3ca0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b3ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3ca4:
    // 0x2b3ca4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b3ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3ca8:
    // 0x2b3ca8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2b3ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b3cac:
    // 0x2b3cac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b3cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b3cb0:
    // 0x2b3cb0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b3cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b3cb4:
    // 0x2b3cb4: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3cb8:
    // 0x2b3cb8: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2b3cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_2b3cbc:
    // 0x2b3cbc: 0xc104d24  jal         func_413490
label_2b3cc0:
    if (ctx->pc == 0x2B3CC0u) {
        ctx->pc = 0x2B3CC4u;
        goto label_2b3cc4;
    }
    ctx->pc = 0x2B3CBCu;
    SET_GPR_U32(ctx, 31, 0x2B3CC4u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B3CBCu, 0x2B3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CC4u;
label_2b3cc4:
    // 0x2b3cc4: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2b3cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_2b3cc8:
    // 0x2b3cc8: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x2b3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3ccc:
    // 0x2b3ccc: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x2b3cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3cd0:
    // 0x2b3cd0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2b3cd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b3cd4:
    // 0x2b3cd4: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2b3cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3cd8:
    // 0x2b3cd8: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2b3cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3cdc:
    // 0x2b3cdc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b3cdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b3ce0:
    // 0x2b3ce0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2b3ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2b3ce4:
    // 0x2b3ce4: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b3ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3ce8:
    // 0x2b3ce8: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2b3ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3cec:
    // 0x2b3cec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3cf0:
    // 0x2b3cf0: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3cf4:
    // 0x2b3cf4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2b3cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_2b3cf8:
    // 0x2b3cf8: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x2b3cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3cfc:
    // 0x2b3cfc: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x2b3cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3d00:
    // 0x2b3d00: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2b3d00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b3d04:
    // 0x2b3d04: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2b3d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3d08:
    // 0x2b3d08: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x2b3d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3d0c:
    // 0x2b3d0c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b3d0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2b3d10:
    // 0x2b3d10: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2b3d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2b3d14:
    // 0x2b3d14: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3d18:
    // 0x2b3d18: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2b3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3d1c:
    // 0x2b3d1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3d20:
    // 0x2b3d20: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3d24:
    // 0x2b3d24: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2b3d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_2b3d28:
    // 0x2b3d28: 0xc7a10204  lwc1        $f1, 0x204($sp)
    ctx->pc = 0x2b3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3d2c:
    // 0x2b3d2c: 0xc7a0020c  lwc1        $f0, 0x20C($sp)
    ctx->pc = 0x2b3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3d30:
    // 0x2b3d30: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2b3d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b3d34:
    // 0x2b3d34: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x2b3d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3d38:
    // 0x2b3d38: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x2b3d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3d3c:
    // 0x2b3d3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b3d3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2b3d40:
    // 0x2b3d40: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2b3d40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2b3d44:
    // 0x2b3d44: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3d48:
    // 0x2b3d48: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2b3d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3d4c:
    // 0x2b3d4c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b3d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b3d50:
    // 0x2b3d50: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3d54:
    // 0x2b3d54: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x2b3d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_2b3d58:
    // 0x2b3d58: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3d5c:
    // 0x2b3d5c: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x2b3d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_2b3d60:
    // 0x2b3d60: 0xc104d24  jal         func_413490
label_2b3d64:
    if (ctx->pc == 0x2B3D64u) {
        ctx->pc = 0x2B3D68u;
        goto label_2b3d68;
    }
    ctx->pc = 0x2B3D60u;
    SET_GPR_U32(ctx, 31, 0x2B3D68u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B3D60u, 0x2B3D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D68u;
label_2b3d68:
    // 0x2b3d68: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2b3d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_2b3d6c:
    // 0x2b3d6c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b3d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3d70:
    // 0x2b3d70: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2b3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3d74:
    // 0x2b3d74: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x2b3d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3d78:
    // 0x2b3d78: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2b3d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b3d7c:
    // 0x2b3d7c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2b3d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2b3d80:
    // 0x2b3d80: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3d84:
    // 0x2b3d84: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2b3d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3d88:
    // 0x2b3d88: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x2b3d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3d8c:
    // 0x2b3d8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b3d90:
    // 0x2b3d90: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x2b3d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_2b3d94:
    // 0x2b3d94: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b3d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3d98:
    // 0x2b3d98: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x2b3d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3d9c:
    // 0x2b3d9c: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2b3d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3da0:
    // 0x2b3da0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b3da0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b3da4:
    // 0x2b3da4: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2b3da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2b3da8:
    // 0x2b3da8: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x2b3da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2b3dac:
    // 0x2b3dac: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x2b3dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
label_2b3db0:
    // 0x2b3db0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b3db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b3db4:
    // 0x2b3db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3db8:
    // 0x2b3db8: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
label_2b3dbc:
    if (ctx->pc == 0x2B3DBCu) {
        ctx->pc = 0x2B3DC0u;
        goto label_2b3dc0;
    }
    ctx->pc = 0x2B3DB8u;
    {
        const bool branch_taken_0x2b3db8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3db8) {
            ctx->pc = 0x2B3E88u;
            goto label_2b3e88;
        }
    }
    ctx->pc = 0x2B3DC0u;
label_2b3dc0:
    // 0x2b3dc0: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x2b3dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b3dc4:
    // 0x2b3dc4: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x2b3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_2b3dc8:
    // 0x2b3dc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3dcc:
    // 0x2b3dcc: 0x0  nop
    ctx->pc = 0x2b3dccu;
    // NOP
label_2b3dd0:
    // 0x2b3dd0: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x2b3dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2b3dd4:
    // 0x2b3dd4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b3dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3dd8:
    // 0x2b3dd8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2b3ddc:
    if (ctx->pc == 0x2B3DDCu) {
        ctx->pc = 0x2B3DE0u;
        goto label_2b3de0;
    }
    ctx->pc = 0x2B3DD8u;
    {
        const bool branch_taken_0x2b3dd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3dd8) {
            ctx->pc = 0x2B3DFCu;
            goto label_2b3dfc;
        }
    }
    ctx->pc = 0x2B3DE0u;
label_2b3de0:
    // 0x2b3de0: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x2b3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_2b3de4:
    // 0x2b3de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3de8:
    // 0x2b3de8: 0x0  nop
    ctx->pc = 0x2b3de8u;
    // NOP
label_2b3dec:
    // 0x2b3dec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b3decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2b3df0:
    // 0x2b3df0: 0xe7a10180  swc1        $f1, 0x180($sp)
    ctx->pc = 0x2b3df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2b3df4:
    // 0x2b3df4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b3df8:
    if (ctx->pc == 0x2B3DF8u) {
        ctx->pc = 0x2B3DFCu;
        goto label_2b3dfc;
    }
    ctx->pc = 0x2B3DF4u;
    {
        const bool branch_taken_0x2b3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3df4) {
            ctx->pc = 0x2B3E28u;
            goto label_2b3e28;
        }
    }
    ctx->pc = 0x2B3DFCu;
label_2b3dfc:
    // 0x2b3dfc: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x2b3dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3e00:
    // 0x2b3e00: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x2b3e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
label_2b3e04:
    // 0x2b3e04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b3e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3e08:
    // 0x2b3e08: 0x0  nop
    ctx->pc = 0x2b3e08u;
    // NOP
label_2b3e0c:
    // 0x2b3e0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b3e0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3e10:
    // 0x2b3e10: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b3e14:
    if (ctx->pc == 0x2B3E14u) {
        ctx->pc = 0x2B3E18u;
        goto label_2b3e18;
    }
    ctx->pc = 0x2B3E10u;
    {
        const bool branch_taken_0x2b3e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3e10) {
            ctx->pc = 0x2B3E28u;
            goto label_2b3e28;
        }
    }
    ctx->pc = 0x2B3E18u;
label_2b3e18:
    // 0x2b3e18: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x2b3e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
label_2b3e1c:
    // 0x2b3e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3e20:
    // 0x2b3e20: 0x0  nop
    ctx->pc = 0x2b3e20u;
    // NOP
label_2b3e24:
    // 0x2b3e24: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2b3e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2b3e28:
    // 0x2b3e28: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2b3e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3e2c:
    // 0x2b3e2c: 0x3c044461  lui         $a0, 0x4461
    ctx->pc = 0x2b3e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17505 << 16));
label_2b3e30:
    // 0x2b3e30: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b3e30u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3e34:
    // 0x2b3e34: 0x0  nop
    ctx->pc = 0x2b3e34u;
    // NOP
label_2b3e38:
    // 0x2b3e38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b3e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3e3c:
    // 0x2b3e3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2b3e40:
    if (ctx->pc == 0x2B3E40u) {
        ctx->pc = 0x2B3E44u;
        goto label_2b3e44;
    }
    ctx->pc = 0x2B3E3Cu;
    {
        const bool branch_taken_0x2b3e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3e3c) {
            ctx->pc = 0x2B3E5Cu;
            goto label_2b3e5c;
        }
    }
    ctx->pc = 0x2B3E44u;
label_2b3e44:
    // 0x2b3e44: 0x3c054461  lui         $a1, 0x4461
    ctx->pc = 0x2b3e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17505 << 16));
label_2b3e48:
    // 0x2b3e48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2b3e48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3e4c:
    // 0x2b3e4c: 0x0  nop
    ctx->pc = 0x2b3e4cu;
    // NOP
label_2b3e50:
    // 0x2b3e50: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2b3e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2b3e54:
    // 0x2b3e54: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b3e58:
    if (ctx->pc == 0x2B3E58u) {
        ctx->pc = 0x2B3E5Cu;
        goto label_2b3e5c;
    }
    ctx->pc = 0x2B3E54u;
    {
        const bool branch_taken_0x2b3e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3e54) {
            ctx->pc = 0x2B3E88u;
            goto label_2b3e88;
        }
    }
    ctx->pc = 0x2B3E5Cu;
label_2b3e5c:
    // 0x2b3e5c: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x2b3e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3e60:
    // 0x2b3e60: 0x3c0644c8  lui         $a2, 0x44C8
    ctx->pc = 0x2b3e60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17608 << 16));
label_2b3e64:
    // 0x2b3e64: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2b3e64u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3e68:
    // 0x2b3e68: 0x0  nop
    ctx->pc = 0x2b3e68u;
    // NOP
label_2b3e6c:
    // 0x2b3e6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b3e6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b3e70:
    // 0x2b3e70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b3e74:
    if (ctx->pc == 0x2B3E74u) {
        ctx->pc = 0x2B3E78u;
        goto label_2b3e78;
    }
    ctx->pc = 0x2B3E70u;
    {
        const bool branch_taken_0x2b3e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3e70) {
            ctx->pc = 0x2B3E88u;
            goto label_2b3e88;
        }
    }
    ctx->pc = 0x2B3E78u;
label_2b3e78:
    // 0x2b3e78: 0x3c0244c8  lui         $v0, 0x44C8
    ctx->pc = 0x2b3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17608 << 16));
label_2b3e7c:
    // 0x2b3e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3e80:
    // 0x2b3e80: 0x0  nop
    ctx->pc = 0x2b3e80u;
    // NOP
label_2b3e84:
    // 0x2b3e84: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x2b3e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2b3e88:
    // 0x2b3e88: 0xc090864  jal         func_242190
label_2b3e8c:
    if (ctx->pc == 0x2B3E8Cu) {
        ctx->pc = 0x2B3E90u;
        goto label_2b3e90;
    }
    ctx->pc = 0x2B3E88u;
    SET_GPR_U32(ctx, 31, 0x2B3E90u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2B3E88u, 0x2B3E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3E90u;
label_2b3e90:
    // 0x2b3e90: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b3e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b3e94:
    // 0x2b3e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3e98:
    // 0x2b3e98: 0x8ca60038  lw          $a2, 0x38($a1)
    ctx->pc = 0x2b3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_2b3e9c:
    // 0x2b3e9c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b3e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b3ea0:
    // 0x2b3ea0: 0xc090870  jal         func_2421C0
label_2b3ea4:
    if (ctx->pc == 0x2B3EA4u) {
        ctx->pc = 0x2B3EA8u;
        goto label_2b3ea8;
    }
    ctx->pc = 0x2B3EA0u;
    SET_GPR_U32(ctx, 31, 0x2B3EA8u);
    ctx->pc = 0x2421C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421C0u, 0x2B3EA0u, 0x2B3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EA8u;
label_2b3ea8:
    // 0x2b3ea8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b3ea8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3eac:
    // 0x2b3eac: 0x1015005e  beq         $zero, $s5, . + 4 + (0x5E << 2)
label_2b3eb0:
    if (ctx->pc == 0x2B3EB0u) {
        ctx->pc = 0x2B3EB4u;
        goto label_2b3eb4;
    }
    ctx->pc = 0x2B3EACu;
    {
        const bool branch_taken_0x2b3eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x2b3eac) {
            ctx->pc = 0x2B4028u;
            goto label_2b4028;
        }
    }
    ctx->pc = 0x2B3EB4u;
label_2b3eb4:
    // 0x2b3eb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b3eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b3eb8:
    // 0x2b3eb8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2b3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2b3ebc:
    // 0x2b3ebc: 0xc09381c  jal         func_24E070
label_2b3ec0:
    if (ctx->pc == 0x2B3EC0u) {
        ctx->pc = 0x2B3EC4u;
        goto label_2b3ec4;
    }
    ctx->pc = 0x2B3EBCu;
    SET_GPR_U32(ctx, 31, 0x2B3EC4u);
    ctx->pc = 0x24E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E070u, 0x2B3EBCu, 0x2B3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EC4u;
label_2b3ec4:
    // 0x2b3ec4: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x2b3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2b3ec8:
    // 0x2b3ec8: 0x90a60028  lbu         $a2, 0x28($a1)
    ctx->pc = 0x2b3ec8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
label_2b3ecc:
    // 0x2b3ecc: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2b3eccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2b3ed0:
    // 0x2b3ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3ed4:
    // 0x2b3ed4: 0x10e20074  beq         $a3, $v0, . + 4 + (0x74 << 2)
label_2b3ed8:
    if (ctx->pc == 0x2B3ED8u) {
        ctx->pc = 0x2B3EDCu;
        goto label_2b3edc;
    }
    ctx->pc = 0x2B3ED4u;
    {
        const bool branch_taken_0x2b3ed4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3ed4) {
            ctx->pc = 0x2B40A8u;
            goto label_2b40a8;
        }
    }
    ctx->pc = 0x2B3EDCu;
label_2b3edc:
    // 0x2b3edc: 0x8ea4002c  lw          $a0, 0x2C($s5)
    ctx->pc = 0x2b3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_2b3ee0:
    // 0x2b3ee0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2b3ee4:
    // 0x2b3ee4: 0xc085538  jal         func_2154E0
label_2b3ee8:
    if (ctx->pc == 0x2B3EE8u) {
        ctx->pc = 0x2B3EECu;
        goto label_2b3eec;
    }
    ctx->pc = 0x2B3EE4u;
    SET_GPR_U32(ctx, 31, 0x2B3EECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B3EE4u, 0x2B3EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3EECu;
label_2b3eec:
    // 0x2b3eec: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x2b3eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_2b3ef0:
    // 0x2b3ef0: 0x8fa701ec  lw          $a3, 0x1EC($sp)
    ctx->pc = 0x2b3ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2b3ef4:
    // 0x2b3ef4: 0x10e0006c  beqz        $a3, . + 4 + (0x6C << 2)
label_2b3ef8:
    if (ctx->pc == 0x2B3EF8u) {
        ctx->pc = 0x2B3EFCu;
        goto label_2b3efc;
    }
    ctx->pc = 0x2B3EF4u;
    {
        const bool branch_taken_0x2b3ef4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ef4) {
            ctx->pc = 0x2B40A8u;
            goto label_2b40a8;
        }
    }
    ctx->pc = 0x2B3EFCu;
label_2b3efc:
    // 0x2b3efc: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x2b3efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_2b3f00:
    // 0x2b3f00: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x2b3f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2b3f04:
    // 0x2b3f04: 0xc090f6c  jal         func_243DB0
label_2b3f08:
    if (ctx->pc == 0x2B3F08u) {
        ctx->pc = 0x2B3F0Cu;
        goto label_2b3f0c;
    }
    ctx->pc = 0x2B3F04u;
    SET_GPR_U32(ctx, 31, 0x2B3F0Cu);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x2B3F04u, 0x2B3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F0Cu;
label_2b3f0c:
    // 0x2b3f0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b3f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f10:
    // 0x2b3f10: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x2b3f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3f14:
    // 0x2b3f14: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2b3f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3f18:
    // 0x2b3f18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b3f18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b3f1c:
    // 0x2b3f1c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2b3f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2b3f20:
    // 0x2b3f20: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x2b3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3f24:
    // 0x2b3f24: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x2b3f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3f28:
    // 0x2b3f28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b3f28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b3f2c:
    // 0x2b3f2c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x2b3f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_2b3f30:
    // 0x2b3f30: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x2b3f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3f34:
    // 0x2b3f34: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x2b3f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3f38:
    // 0x2b3f38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b3f38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b3f3c:
    // 0x2b3f3c: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x2b3f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_2b3f40:
    // 0x2b3f40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b3f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f44:
    // 0x2b3f44: 0xc092d70  jal         func_24B5C0
label_2b3f48:
    if (ctx->pc == 0x2B3F48u) {
        ctx->pc = 0x2B3F4Cu;
        goto label_2b3f4c;
    }
    ctx->pc = 0x2B3F44u;
    SET_GPR_U32(ctx, 31, 0x2B3F4Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2B3F44u, 0x2B3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F4Cu;
label_2b3f4c:
    // 0x2b3f4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f50:
    // 0x2b3f50: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2b3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2b3f54:
    // 0x2b3f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b3f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b3f58:
    // 0x2b3f58: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x2b3f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b3f5c:
    // 0x2b3f5c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b3f5cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2b3f60:
    // 0x2b3f60: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b3f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2b3f64:
    // 0x2b3f64: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2b3f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2b3f68:
    // 0x2b3f68: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2b3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2b3f6c:
    // 0x2b3f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b3f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b3f70:
    // 0x2b3f70: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x2b3f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b3f74:
    // 0x2b3f74: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b3f74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b3f78:
    // 0x2b3f78: 0x0  nop
    ctx->pc = 0x2b3f78u;
    // NOP
label_2b3f7c:
    // 0x2b3f7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b3f7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2b3f80:
    // 0x2b3f80: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2b3f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_2b3f84:
    // 0x2b3f84: 0xc04d328  jal         func_134CA0
label_2b3f88:
    if (ctx->pc == 0x2B3F88u) {
        ctx->pc = 0x2B3F8Cu;
        goto label_2b3f8c;
    }
    ctx->pc = 0x2B3F84u;
    SET_GPR_U32(ctx, 31, 0x2B3F8Cu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x2B3F84u, 0x2B3F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F8Cu;
label_2b3f8c:
    // 0x2b3f8c: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x2b3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_2b3f90:
    // 0x2b3f90: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x2b3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2b3f94:
    // 0x2b3f94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b3f98:
    if (ctx->pc == 0x2B3F98u) {
        ctx->pc = 0x2B3F9Cu;
        goto label_2b3f9c;
    }
    ctx->pc = 0x2B3F94u;
    {
        const bool branch_taken_0x2b3f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f94) {
            ctx->pc = 0x2B3FACu;
            goto label_2b3fac;
        }
    }
    ctx->pc = 0x2B3F9Cu;
label_2b3f9c:
    // 0x2b3f9c: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x2b3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_2b3fa0:
    // 0x2b3fa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b3fa4:
    // 0x2b3fa4: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_2b3fa8:
    if (ctx->pc == 0x2B3FA8u) {
        ctx->pc = 0x2B3FACu;
        goto label_2b3fac;
    }
    ctx->pc = 0x2B3FA4u;
    {
        const bool branch_taken_0x2b3fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3fa4) {
            ctx->pc = 0x2B40A8u;
            goto label_2b40a8;
        }
    }
    ctx->pc = 0x2B3FACu;
label_2b3fac:
    // 0x2b3fac: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2b3facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2b3fb0:
    // 0x2b3fb0: 0xc088560  jal         func_221580
label_2b3fb4:
    if (ctx->pc == 0x2B3FB4u) {
        ctx->pc = 0x2B3FB8u;
        goto label_2b3fb8;
    }
    ctx->pc = 0x2B3FB0u;
    SET_GPR_U32(ctx, 31, 0x2B3FB8u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x2B3FB0u, 0x2B3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FB8u;
label_2b3fb8:
    // 0x2b3fb8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2b3fbc:
    // 0x2b3fbc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b3fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2b3fc0:
    // 0x2b3fc0: 0x24a5dfa0  addiu       $a1, $a1, -0x2060
    ctx->pc = 0x2b3fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959008));
label_2b3fc4:
    // 0x2b3fc4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2b3fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_2b3fc8:
    // 0x2b3fc8: 0x24c6dfb0  addiu       $a2, $a2, -0x2050
    ctx->pc = 0x2b3fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959024));
label_2b3fcc:
    // 0x2b3fcc: 0xc041b90  jal         func_106E40
label_2b3fd0:
    if (ctx->pc == 0x2B3FD0u) {
        ctx->pc = 0x2B3FD4u;
        goto label_2b3fd4;
    }
    ctx->pc = 0x2B3FCCu;
    SET_GPR_U32(ctx, 31, 0x2B3FD4u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x2B3FCCu, 0x2B3FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FD4u;
label_2b3fd4:
    // 0x2b3fd4: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2b3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2b3fd8:
    // 0x2b3fd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3fdc:
    // 0x2b3fdc: 0x2402054c  addiu       $v0, $zero, 0x54C
    ctx->pc = 0x2b3fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_2b3fe0:
    // 0x2b3fe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b3fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3fe4:
    // 0x2b3fe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b3fe8:
    // 0x2b3fe8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b3fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3fec:
    // 0x2b3fec: 0xc040924  jal         func_102490
label_2b3ff0:
    if (ctx->pc == 0x2B3FF0u) {
        ctx->pc = 0x2B3FF4u;
        goto label_2b3ff4;
    }
    ctx->pc = 0x2B3FECu;
    SET_GPR_U32(ctx, 31, 0x2B3FF4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x2B3FECu, 0x2B3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FF4u;
label_2b3ff4:
    // 0x2b3ff4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b3ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3ff8:
    // 0x2b3ff8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2b3ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b3ffc:
    // 0x2b3ffc: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2b3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2b4000:
    // 0x2b4000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b4000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4004:
    // 0x2b4004: 0xc08ef28  jal         func_23BCA0
label_2b4008:
    if (ctx->pc == 0x2B4008u) {
        ctx->pc = 0x2B400Cu;
        goto label_2b400c;
    }
    ctx->pc = 0x2B4004u;
    SET_GPR_U32(ctx, 31, 0x2B400Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2B4004u, 0x2B400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B400Cu;
label_2b400c:
    // 0x2b400c: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x2b400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2b4010:
    // 0x2b4010: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b4010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b4014:
    // 0x2b4014: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b4014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b4018:
    // 0x2b4018: 0xc0887b4  jal         func_221ED0
label_2b401c:
    if (ctx->pc == 0x2B401Cu) {
        ctx->pc = 0x2B4020u;
        goto label_2b4020;
    }
    ctx->pc = 0x2B4018u;
    SET_GPR_U32(ctx, 31, 0x2B4020u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x2B4018u, 0x2B4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4020u;
label_2b4020:
    // 0x2b4020: 0x10000021  b           . + 4 + (0x21 << 2)
label_2b4024:
    if (ctx->pc == 0x2B4024u) {
        ctx->pc = 0x2B4028u;
        goto label_2b4028;
    }
    ctx->pc = 0x2B4020u;
    {
        const bool branch_taken_0x2b4020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4020) {
            ctx->pc = 0x2B40A8u;
            goto label_2b40a8;
        }
    }
    ctx->pc = 0x2B4028u;
label_2b4028:
    // 0x2b4028: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2b4028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2b402c:
    // 0x2b402c: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x2b402cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_2b4030:
    // 0x2b4030: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b4030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b4034:
    // 0x2b4034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4038:
    // 0x2b4038: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_2b403c:
    if (ctx->pc == 0x2B403Cu) {
        ctx->pc = 0x2B4040u;
        goto label_2b4040;
    }
    ctx->pc = 0x2B4038u;
    {
        const bool branch_taken_0x2b4038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b4038) {
            ctx->pc = 0x2B40A8u;
            goto label_2b40a8;
        }
    }
    ctx->pc = 0x2B4040u;
label_2b4040:
    // 0x2b4040: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2b4040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2b4044:
    // 0x2b4044: 0xc088560  jal         func_221580
label_2b4048:
    if (ctx->pc == 0x2B4048u) {
        ctx->pc = 0x2B404Cu;
        goto label_2b404c;
    }
    ctx->pc = 0x2B4044u;
    SET_GPR_U32(ctx, 31, 0x2B404Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x2B4044u, 0x2B404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B404Cu;
label_2b404c:
    // 0x2b404c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2b404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2b4050:
    // 0x2b4050: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2b4050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2b4054:
    // 0x2b4054: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x2b4054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
label_2b4058:
    // 0x2b4058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b4058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b405c:
    // 0x2b405c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2b405cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_2b4060:
    // 0x2b4060: 0x24c6dfb0  addiu       $a2, $a2, -0x2050
    ctx->pc = 0x2b4060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959024));
label_2b4064:
    // 0x2b4064: 0xc041b90  jal         func_106E40
label_2b4068:
    if (ctx->pc == 0x2B4068u) {
        ctx->pc = 0x2B406Cu;
        goto label_2b406c;
    }
    ctx->pc = 0x2B4064u;
    SET_GPR_U32(ctx, 31, 0x2B406Cu);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x2B4064u, 0x2B406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B406Cu;
label_2b406c:
    // 0x2b406c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b406cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4070:
    // 0x2b4070: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2b4070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2b4074:
    // 0x2b4074: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x2b4074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_2b4078:
    // 0x2b4078: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b4078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b407c:
    // 0x2b407c: 0xc040924  jal         func_102490
label_2b4080:
    if (ctx->pc == 0x2B4080u) {
        ctx->pc = 0x2B4084u;
        goto label_2b4084;
    }
    ctx->pc = 0x2B407Cu;
    SET_GPR_U32(ctx, 31, 0x2B4084u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x2B407Cu, 0x2B4084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4084u;
label_2b4084:
    // 0x2b4084: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2b4084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b4088:
    // 0x2b4088: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2b4088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2b408c:
    // 0x2b408c: 0xc08ef28  jal         func_23BCA0
label_2b4090:
    if (ctx->pc == 0x2B4090u) {
        ctx->pc = 0x2B4094u;
        goto label_2b4094;
    }
    ctx->pc = 0x2B408Cu;
    SET_GPR_U32(ctx, 31, 0x2B4094u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2B408Cu, 0x2B4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4094u;
label_2b4094:
    // 0x2b4094: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2b4094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2b4098:
    // 0x2b4098: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b4098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b409c:
    // 0x2b409c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b409cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b40a0:
    // 0x2b40a0: 0xc0887b4  jal         func_221ED0
label_2b40a4:
    if (ctx->pc == 0x2B40A4u) {
        ctx->pc = 0x2B40A8u;
        goto label_2b40a8;
    }
    ctx->pc = 0x2B40A0u;
    SET_GPR_U32(ctx, 31, 0x2B40A8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x2B40A0u, 0x2B40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B40A8u;
label_2b40a8:
    // 0x2b40a8: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x2b40a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b40ac:
    // 0x2b40ac: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x2b40acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b40b0:
    // 0x2b40b0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2b40b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b40b4:
    // 0x2b40b4: 0xc0c3926  jal         func_30E498
label_2b40b8:
    if (ctx->pc == 0x2B40B8u) {
        ctx->pc = 0x2B40BCu;
        goto label_2b40bc;
    }
    ctx->pc = 0x2B40B4u;
    SET_GPR_U32(ctx, 31, 0x2B40BCu);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x2B40B4u, 0x2B40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B40BCu;
label_2b40bc:
    // 0x2b40bc: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x2b40bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
label_2b40c0:
    // 0x2b40c0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b40c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b40c4:
    // 0x2b40c4: 0x0  nop
    ctx->pc = 0x2b40c4u;
    // NOP
label_2b40c8:
    // 0x2b40c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b40c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b40cc:
    // 0x2b40cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2b40d0:
    if (ctx->pc == 0x2B40D0u) {
        ctx->pc = 0x2B40D4u;
        goto label_2b40d4;
    }
    ctx->pc = 0x2B40CCu;
    {
        const bool branch_taken_0x2b40cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b40cc) {
            ctx->pc = 0x2B40E4u;
            goto label_2b40e4;
        }
    }
    ctx->pc = 0x2B40D4u;
label_2b40d4:
    // 0x2b40d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b40d8:
    // 0x2b40d8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2b40d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2b40dc:
    // 0x2b40dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_2b40e0:
    if (ctx->pc == 0x2B40E0u) {
        ctx->pc = 0x2B40E4u;
        goto label_2b40e4;
    }
    ctx->pc = 0x2B40DCu;
    {
        const bool branch_taken_0x2b40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b40dc) {
            ctx->pc = 0x2B410Cu;
            goto label_2b410c;
        }
    }
    ctx->pc = 0x2B40E4u;
label_2b40e4:
    // 0x2b40e4: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b40e8:
    // 0x2b40e8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b40e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b40ec:
    // 0x2b40ec: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x2b40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2b40f0:
    // 0x2b40f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b40f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b40f4:
    // 0x2b40f4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2b40f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2b40f8:
    // 0x2b40f8: 0xc0ad440  jal         func_2B5100
label_2b40fc:
    if (ctx->pc == 0x2B40FCu) {
        ctx->pc = 0x2B4100u;
        goto label_2b4100;
    }
    ctx->pc = 0x2B40F8u;
    SET_GPR_U32(ctx, 31, 0x2B4100u);
    ctx->pc = 0x2B5100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5100u, 0x2B40F8u, 0x2B4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4100u;
label_2b4100:
    // 0x2b4100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4104:
    // 0x2b4104: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2b4104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b4108:
    // 0x2b4108: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b4108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b410c:
    // 0x2b410c: 0x1600009c  bnez        $s0, . + 4 + (0x9C << 2)
label_2b4110:
    if (ctx->pc == 0x2B4110u) {
        ctx->pc = 0x2B4114u;
        goto label_2b4114;
    }
    ctx->pc = 0x2B410Cu;
    {
        const bool branch_taken_0x2b410c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b410c) {
            ctx->pc = 0x2B4380u;
            goto label_2b4380;
        }
    }
    ctx->pc = 0x2B4114u;
label_2b4114:
    // 0x2b4114: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x2b4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_2b4118:
    // 0x2b4118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b411c:
    // 0x2b411c: 0xc090590  jal         func_241640
label_2b4120:
    if (ctx->pc == 0x2B4120u) {
        ctx->pc = 0x2B4124u;
        goto label_2b4124;
    }
    ctx->pc = 0x2B411Cu;
    SET_GPR_U32(ctx, 31, 0x2B4124u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2B411Cu, 0x2B4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4124u;
label_2b4124:
    // 0x2b4124: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4128:
    // 0x2b4128: 0xafa301e4  sw          $v1, 0x1E4($sp)
    ctx->pc = 0x2b4128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 3));
label_2b412c:
    // 0x2b412c: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x2b412cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_2b4130:
    // 0x2b4130: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b4130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b4134:
    // 0x2b4134: 0xc09157c  jal         func_2455F0
label_2b4138:
    if (ctx->pc == 0x2B4138u) {
        ctx->pc = 0x2B413Cu;
        goto label_2b413c;
    }
    ctx->pc = 0x2B4134u;
    SET_GPR_U32(ctx, 31, 0x2B413Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2B4134u, 0x2B413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B413Cu;
label_2b413c:
    // 0x2b413c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b413cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4140:
    // 0x2b4140: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x2b4140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
label_2b4144:
    // 0x2b4144: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2b4144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2b4148:
    // 0x2b4148: 0xc040e7c  jal         func_1039F0
label_2b414c:
    if (ctx->pc == 0x2B414Cu) {
        ctx->pc = 0x2B4150u;
        goto label_2b4150;
    }
    ctx->pc = 0x2B4148u;
    SET_GPR_U32(ctx, 31, 0x2B4150u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2B4148u, 0x2B4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4150u;
label_2b4150:
    // 0x2b4150: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b4150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4154:
    // 0x2b4154: 0x10000085  b           . + 4 + (0x85 << 2)
label_2b4158:
    if (ctx->pc == 0x2B4158u) {
        ctx->pc = 0x2B415Cu;
        goto label_2b415c;
    }
    ctx->pc = 0x2B4154u;
    {
        const bool branch_taken_0x2b4154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4154) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B415Cu;
label_2b415c:
    // 0x2b415c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b415cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4160:
    // 0x2b4160: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b4160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4164:
    // 0x2b4164: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b4164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b4168:
    // 0x2b4168: 0x1064007f  beq         $v1, $a0, . + 4 + (0x7F << 2)
label_2b416c:
    if (ctx->pc == 0x2B416Cu) {
        ctx->pc = 0x2B4170u;
        goto label_2b4170;
    }
    ctx->pc = 0x2B4168u;
    {
        const bool branch_taken_0x2b4168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b4168) {
            ctx->pc = 0x2B4368u;
            goto label_2b4368;
        }
    }
    ctx->pc = 0x2B4170u;
label_2b4170:
    // 0x2b4170: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b4170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4174:
    // 0x2b4174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4178:
    // 0x2b4178: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b4178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b417c:
    // 0x2b417c: 0xc085538  jal         func_2154E0
label_2b4180:
    if (ctx->pc == 0x2B4180u) {
        ctx->pc = 0x2B4184u;
        goto label_2b4184;
    }
    ctx->pc = 0x2B417Cu;
    SET_GPR_U32(ctx, 31, 0x2B4184u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B417Cu, 0x2B4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4184u;
label_2b4184:
    // 0x2b4184: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b4184u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4188:
    // 0x2b4188: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b4188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b418c:
    // 0x2b418c: 0xc096e38  jal         func_25B8E0
label_2b4190:
    if (ctx->pc == 0x2B4190u) {
        ctx->pc = 0x2B4194u;
        goto label_2b4194;
    }
    ctx->pc = 0x2B418Cu;
    SET_GPR_U32(ctx, 31, 0x2B4194u);
    ctx->pc = 0x25B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8E0u, 0x2B418Cu, 0x2B4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4194u;
label_2b4194:
    // 0x2b4194: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
label_2b4198:
    if (ctx->pc == 0x2B4198u) {
        ctx->pc = 0x2B419Cu;
        goto label_2b419c;
    }
    ctx->pc = 0x2B4194u;
    {
        const bool branch_taken_0x2b4194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4194) {
            ctx->pc = 0x2B4368u;
            goto label_2b4368;
        }
    }
    ctx->pc = 0x2B419Cu;
label_2b419c:
    // 0x2b419c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b41a0:
    // 0x2b41a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b41a4:
    // 0x2b41a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b41a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b41a8:
    // 0x2b41a8: 0xc085538  jal         func_2154E0
label_2b41ac:
    if (ctx->pc == 0x2B41ACu) {
        ctx->pc = 0x2B41B0u;
        goto label_2b41b0;
    }
    ctx->pc = 0x2B41A8u;
    SET_GPR_U32(ctx, 31, 0x2B41B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B41A8u, 0x2B41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41B0u;
label_2b41b0:
    // 0x2b41b0: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x2b41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_2b41b4:
    // 0x2b41b4: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x2b41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_2b41b8:
    // 0x2b41b8: 0xc0a82cc  jal         func_2A0B30
label_2b41bc:
    if (ctx->pc == 0x2B41BCu) {
        ctx->pc = 0x2B41C0u;
        goto label_2b41c0;
    }
    ctx->pc = 0x2B41B8u;
    SET_GPR_U32(ctx, 31, 0x2B41C0u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2B41B8u, 0x2B41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41C0u;
label_2b41c0:
    // 0x2b41c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b41c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b41c4:
    // 0x2b41c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b41c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b41c8:
    // 0x2b41c8: 0xc121e84  jal         func_487A10
label_2b41cc:
    if (ctx->pc == 0x2B41CCu) {
        ctx->pc = 0x2B41D0u;
        goto label_2b41d0;
    }
    ctx->pc = 0x2B41C8u;
    SET_GPR_U32(ctx, 31, 0x2B41D0u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2B41C8u, 0x2B41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41D0u;
label_2b41d0:
    // 0x2b41d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b41d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b41d4:
    // 0x2b41d4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2b41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2b41d8:
    // 0x2b41d8: 0xc041d58  jal         func_107560
label_2b41dc:
    if (ctx->pc == 0x2B41DCu) {
        ctx->pc = 0x2B41E0u;
        goto label_2b41e0;
    }
    ctx->pc = 0x2B41D8u;
    SET_GPR_U32(ctx, 31, 0x2B41E0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B41D8u, 0x2B41E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41E0u;
label_2b41e0:
    // 0x2b41e0: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x2b41e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b41e4:
    // 0x2b41e4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2b41e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_2b41e8:
    // 0x2b41e8: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2b41e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b41ec:
    // 0x2b41ec: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x2b41ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b41f0:
    // 0x2b41f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b41f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b41f4:
    // 0x2b41f4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2b41f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2b41f8:
    // 0x2b41f8: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x2b41f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b41fc:
    // 0x2b41fc: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x2b41fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4200:
    // 0x2b4200: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4200u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b4204:
    // 0x2b4204: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2b4204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_2b4208:
    // 0x2b4208: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x2b4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b420c:
    // 0x2b420c: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2b420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4210:
    // 0x2b4210: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b4214:
    // 0x2b4214: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2b4214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2b4218:
    // 0x2b4218: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2b4218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2b421c:
    // 0x2b421c: 0xc104d24  jal         func_413490
label_2b4220:
    if (ctx->pc == 0x2B4220u) {
        ctx->pc = 0x2B4224u;
        goto label_2b4224;
    }
    ctx->pc = 0x2B421Cu;
    SET_GPR_U32(ctx, 31, 0x2B4224u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B421Cu, 0x2B4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4224u;
label_2b4224:
    // 0x2b4224: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2b4224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_2b4228:
    // 0x2b4228: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x2b4228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b422c:
    // 0x2b422c: 0xc7808208  lwc1        $f0, -0x7DF8($gp)
    ctx->pc = 0x2b422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4230:
    // 0x2b4230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b4230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4234:
    // 0x2b4234: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_2b4238:
    if (ctx->pc == 0x2B4238u) {
        ctx->pc = 0x2B423Cu;
        goto label_2b423c;
    }
    ctx->pc = 0x2B4234u;
    {
        const bool branch_taken_0x2b4234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4234) {
            ctx->pc = 0x2B4274u;
            goto label_2b4274;
        }
    }
    ctx->pc = 0x2B423Cu;
label_2b423c:
    // 0x2b423c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b423cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b4240:
    // 0x2b4240: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b4244:
    // 0x2b4244: 0x0  nop
    ctx->pc = 0x2b4244u;
    // NOP
label_2b4248:
    // 0x2b4248: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x2b4248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2b424c:
    // 0x2b424c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b424cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4250:
    // 0x2b4250: 0x0  nop
    ctx->pc = 0x2b4250u;
    // NOP
label_2b4254:
    // 0x2b4254: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2b4254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_2b4258:
    // 0x2b4258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b425c:
    // 0x2b425c: 0x0  nop
    ctx->pc = 0x2b425cu;
    // NOP
label_2b4260:
    // 0x2b4260: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2b4260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2b4264:
    // 0x2b4264: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b4264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b4268:
    // 0x2b4268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b426c:
    // 0x2b426c: 0x0  nop
    ctx->pc = 0x2b426cu;
    // NOP
label_2b4270:
    // 0x2b4270: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2b4270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_2b4274:
    // 0x2b4274: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x2b4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4278:
    // 0x2b4278: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b4278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2b427c:
    // 0x2b427c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b427cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4280:
    // 0x2b4280: 0x0  nop
    ctx->pc = 0x2b4280u;
    // NOP
label_2b4284:
    // 0x2b4284: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b4284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4288:
    // 0x2b4288: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_2b428c:
    if (ctx->pc == 0x2B428Cu) {
        ctx->pc = 0x2B4290u;
        goto label_2b4290;
    }
    ctx->pc = 0x2B4288u;
    {
        const bool branch_taken_0x2b4288 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4288) {
            ctx->pc = 0x2B4358u;
            goto label_2b4358;
        }
    }
    ctx->pc = 0x2B4290u;
label_2b4290:
    // 0x2b4290: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b4290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2b4294:
    // 0x2b4294: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b4298:
    // 0x2b4298: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2b4298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b429c:
    // 0x2b429c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b429cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b42a0:
    // 0x2b42a0: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2b42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b42a4:
    // 0x2b42a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b42a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b42a8:
    // 0x2b42a8: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x2b42a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b42ac:
    // 0x2b42ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b42acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b42b0:
    // 0x2b42b0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2b42b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2b42b4:
    // 0x2b42b4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2b42b8:
    // 0x2b42b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b42b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b42bc:
    // 0x2b42bc: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2b42bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b42c0:
    // 0x2b42c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b42c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b42c4:
    // 0x2b42c4: 0xc7a101d8  lwc1        $f1, 0x1D8($sp)
    ctx->pc = 0x2b42c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b42c8:
    // 0x2b42c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b42c8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2b42cc:
    // 0x2b42cc: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x2b42ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b42d0:
    // 0x2b42d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b42d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b42d4:
    // 0x2b42d4: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2b42d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_2b42d8:
    // 0x2b42d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_2b42dc:
    // 0x2b42dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b42dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b42e0:
    // 0x2b42e0: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2b42e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b42e4:
    // 0x2b42e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b42e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b42e8:
    // 0x2b42e8: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x2b42e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b42ec:
    // 0x2b42ec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2b42ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2b42f0:
    // 0x2b42f0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2b42f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b42f4:
    // 0x2b42f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b42f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b42f8:
    // 0x2b42f8: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2b42f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2b42fc:
    // 0x2b42fc: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x2b42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4300:
    // 0x2b4300: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2b4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4304:
    // 0x2b4304: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b4308:
    // 0x2b4308: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2b4308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2b430c:
    // 0x2b430c: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x2b430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4310:
    // 0x2b4310: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x2b4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4314:
    // 0x2b4314: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4314u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b4318:
    // 0x2b4318: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x2b4318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_2b431c:
    // 0x2b431c: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x2b431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4320:
    // 0x2b4320: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2b4320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4324:
    // 0x2b4324: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b4324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b4328:
    // 0x2b4328: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x2b4328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2b432c:
    // 0x2b432c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b4330:
    // 0x2b4330: 0xc0ad2e8  jal         func_2B4BA0
label_2b4334:
    if (ctx->pc == 0x2B4334u) {
        ctx->pc = 0x2B4338u;
        goto label_2b4338;
    }
    ctx->pc = 0x2B4330u;
    SET_GPR_U32(ctx, 31, 0x2B4338u);
    ctx->pc = 0x2B4BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BA0u, 0x2B4330u, 0x2B4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4338u;
label_2b4338:
    // 0x2b4338: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b4338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b433c:
    // 0x2b433c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2b433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4340:
    // 0x2b4340: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2b4340u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b4344:
    // 0x2b4344: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b4344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b4348:
    // 0x2b4348: 0xc0ad2dc  jal         func_2B4B70
label_2b434c:
    if (ctx->pc == 0x2B434Cu) {
        ctx->pc = 0x2B4350u;
        goto label_2b4350;
    }
    ctx->pc = 0x2B4348u;
    SET_GPR_U32(ctx, 31, 0x2B4350u);
    ctx->pc = 0x2B4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B70u, 0x2B4348u, 0x2B4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4350u;
label_2b4350:
    // 0x2b4350: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b4354:
    if (ctx->pc == 0x2B4354u) {
        ctx->pc = 0x2B4358u;
        goto label_2b4358;
    }
    ctx->pc = 0x2B4350u;
    {
        const bool branch_taken_0x2b4350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4350) {
            ctx->pc = 0x2B4368u;
            goto label_2b4368;
        }
    }
    ctx->pc = 0x2B4358u;
label_2b4358:
    // 0x2b4358: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b4358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b435c:
    // 0x2b435c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b4360:
    // 0x2b4360: 0xc0ad2dc  jal         func_2B4B70
label_2b4364:
    if (ctx->pc == 0x2B4364u) {
        ctx->pc = 0x2B4368u;
        goto label_2b4368;
    }
    ctx->pc = 0x2B4360u;
    SET_GPR_U32(ctx, 31, 0x2B4368u);
    ctx->pc = 0x2B4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4B70u, 0x2B4360u, 0x2B4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4368u;
label_2b4368:
    // 0x2b4368: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2b4368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2b436c:
    // 0x2b436c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2b436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2b4370:
    // 0x2b4370: 0xc04147c  jal         func_1051F0
label_2b4374:
    if (ctx->pc == 0x2B4374u) {
        ctx->pc = 0x2B4378u;
        goto label_2b4378;
    }
    ctx->pc = 0x2B4370u;
    SET_GPR_U32(ctx, 31, 0x2B4378u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2B4370u, 0x2B4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4378u;
label_2b4378:
    // 0x2b4378: 0x1622ff78  bne         $s1, $v0, . + 4 + (-0x88 << 2)
label_2b437c:
    if (ctx->pc == 0x2B437Cu) {
        ctx->pc = 0x2B4380u;
        goto label_2b4380;
    }
    ctx->pc = 0x2B4378u;
    {
        const bool branch_taken_0x2b4378 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4378) {
            ctx->pc = 0x2B415Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b415c;
        }
    }
    ctx->pc = 0x2B4380u;
label_2b4380:
    // 0x2b4380: 0x16000070  bnez        $s0, . + 4 + (0x70 << 2)
label_2b4384:
    if (ctx->pc == 0x2B4384u) {
        ctx->pc = 0x2B4388u;
        goto label_2b4388;
    }
    ctx->pc = 0x2B4380u;
    {
        const bool branch_taken_0x2b4380 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4380) {
            ctx->pc = 0x2B4544u;
            goto label_2b4544;
        }
    }
    ctx->pc = 0x2B4388u;
label_2b4388:
    // 0x2b4388: 0xc780820c  lwc1        $f0, -0x7DF4($gp)
    ctx->pc = 0x2b4388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b438c:
    // 0x2b438c: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x2b438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4390:
    // 0x2b4390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b4390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b4394:
    // 0x2b4394: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b4394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_2b4398:
    // 0x2b4398: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x2b4398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b439c:
    // 0x2b439c: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2b439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b43a0:
    // 0x2b43a0: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x2b43a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b43a4:
    // 0x2b43a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b43a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b43a8:
    // 0x2b43a8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2b43a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b43ac:
    // 0x2b43ac: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_2b43b0:
    if (ctx->pc == 0x2B43B0u) {
        ctx->pc = 0x2B43B4u;
        goto label_2b43b4;
    }
    ctx->pc = 0x2B43ACu;
    {
        const bool branch_taken_0x2b43ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b43ac) {
            ctx->pc = 0x2B4440u;
            goto label_2b4440;
        }
    }
    ctx->pc = 0x2B43B4u;
label_2b43b4:
    // 0x2b43b4: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x2b43b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b43b8:
    // 0x2b43b8: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x2b43b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b43bc:
    // 0x2b43bc: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b43bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b43c0:
    // 0x2b43c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b43c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b43c4:
    // 0x2b43c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b43c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b43c8:
    // 0x2b43c8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
label_2b43cc:
    if (ctx->pc == 0x2B43CCu) {
        ctx->pc = 0x2B43D0u;
        goto label_2b43d0;
    }
    ctx->pc = 0x2B43C8u;
    {
        const bool branch_taken_0x2b43c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b43c8) {
            ctx->pc = 0x2B4440u;
            goto label_2b4440;
        }
    }
    ctx->pc = 0x2B43D0u;
label_2b43d0:
    // 0x2b43d0: 0xc7a20184  lwc1        $f2, 0x184($sp)
    ctx->pc = 0x2b43d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b43d4:
    // 0x2b43d4: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x2b43d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b43d8:
    // 0x2b43d8: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x2b43d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b43dc:
    // 0x2b43dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b43dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b43e0:
    // 0x2b43e0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2b43e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b43e4:
    // 0x2b43e4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2b43e8:
    if (ctx->pc == 0x2B43E8u) {
        ctx->pc = 0x2B43ECu;
        goto label_2b43ec;
    }
    ctx->pc = 0x2B43E4u;
    {
        const bool branch_taken_0x2b43e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b43e4) {
            ctx->pc = 0x2B4440u;
            goto label_2b4440;
        }
    }
    ctx->pc = 0x2B43ECu;
label_2b43ec:
    // 0x2b43ec: 0xc7a20184  lwc1        $f2, 0x184($sp)
    ctx->pc = 0x2b43ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b43f0:
    // 0x2b43f0: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2b43f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b43f4:
    // 0x2b43f4: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b43f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b43f8:
    // 0x2b43f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b43f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b43fc:
    // 0x2b43fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b43fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4400:
    // 0x2b4400: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_2b4404:
    if (ctx->pc == 0x2B4404u) {
        ctx->pc = 0x2B4408u;
        goto label_2b4408;
    }
    ctx->pc = 0x2B4400u;
    {
        const bool branch_taken_0x2b4400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4400) {
            ctx->pc = 0x2B4440u;
            goto label_2b4440;
        }
    }
    ctx->pc = 0x2B4408u;
label_2b4408:
    // 0x2b4408: 0xc7a20188  lwc1        $f2, 0x188($sp)
    ctx->pc = 0x2b4408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b440c:
    // 0x2b440c: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2b440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4410:
    // 0x2b4410: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x2b4410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4414:
    // 0x2b4414: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b4414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b4418:
    // 0x2b4418: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2b4418u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b441c:
    // 0x2b441c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2b4420:
    if (ctx->pc == 0x2B4420u) {
        ctx->pc = 0x2B4424u;
        goto label_2b4424;
    }
    ctx->pc = 0x2B441Cu;
    {
        const bool branch_taken_0x2b441c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b441c) {
            ctx->pc = 0x2B4440u;
            goto label_2b4440;
        }
    }
    ctx->pc = 0x2B4424u;
label_2b4424:
    // 0x2b4424: 0xc7a20188  lwc1        $f2, 0x188($sp)
    ctx->pc = 0x2b4424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b4428:
    // 0x2b4428: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x2b4428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b442c:
    // 0x2b442c: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4430:
    // 0x2b4430: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b4434:
    // 0x2b4434: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b4434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4438:
    // 0x2b4438: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_2b443c:
    if (ctx->pc == 0x2B443Cu) {
        ctx->pc = 0x2B4440u;
        goto label_2b4440;
    }
    ctx->pc = 0x2B4438u;
    {
        const bool branch_taken_0x2b4438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4438) {
            ctx->pc = 0x2B4500u;
            goto label_2b4500;
        }
    }
    ctx->pc = 0x2B4440u;
label_2b4440:
    // 0x2b4440: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4444:
    // 0x2b4444: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2b4444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4448:
    // 0x2b4448: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b4448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b444c:
    // 0x2b444c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b444cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b4450:
    // 0x2b4450: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x2b4450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4454:
    // 0x2b4454: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b4454u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4458:
    // 0x2b4458: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_2b445c:
    if (ctx->pc == 0x2B445Cu) {
        ctx->pc = 0x2B4460u;
        goto label_2b4460;
    }
    ctx->pc = 0x2B4458u;
    {
        const bool branch_taken_0x2b4458 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4458) {
            ctx->pc = 0x2B4514u;
            goto label_2b4514;
        }
    }
    ctx->pc = 0x2B4460u;
label_2b4460:
    // 0x2b4460: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b4460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4464:
    // 0x2b4464: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2b4464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4468:
    // 0x2b4468: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b4468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b446c:
    // 0x2b446c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2b446cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b4470:
    // 0x2b4470: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x2b4470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4474:
    // 0x2b4474: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2b4474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4478:
    // 0x2b4478: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_2b447c:
    if (ctx->pc == 0x2B447Cu) {
        ctx->pc = 0x2B4480u;
        goto label_2b4480;
    }
    ctx->pc = 0x2B4478u;
    {
        const bool branch_taken_0x2b4478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4478) {
            ctx->pc = 0x2B4514u;
            goto label_2b4514;
        }
    }
    ctx->pc = 0x2B4480u;
label_2b4480:
    // 0x2b4480: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b4480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4484:
    // 0x2b4484: 0xc443004c  lwc1        $f3, 0x4C($v0)
    ctx->pc = 0x2b4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b4488:
    // 0x2b4488: 0xc7a201d4  lwc1        $f2, 0x1D4($sp)
    ctx->pc = 0x2b4488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b448c:
    // 0x2b448c: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x2b448cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2b4490:
    // 0x2b4490: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x2b4490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4494:
    // 0x2b4494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b4494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4498:
    // 0x2b4498: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_2b449c:
    if (ctx->pc == 0x2B449Cu) {
        ctx->pc = 0x2B44A0u;
        goto label_2b44a0;
    }
    ctx->pc = 0x2B4498u;
    {
        const bool branch_taken_0x2b4498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4498) {
            ctx->pc = 0x2B4514u;
            goto label_2b4514;
        }
    }
    ctx->pc = 0x2B44A0u;
label_2b44a0:
    // 0x2b44a0: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b44a4:
    // 0x2b44a4: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x2b44a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b44a8:
    // 0x2b44a8: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b44a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b44ac:
    // 0x2b44ac: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2b44acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2b44b0:
    // 0x2b44b0: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x2b44b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b44b4:
    // 0x2b44b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b44b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b44b8:
    // 0x2b44b8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_2b44bc:
    if (ctx->pc == 0x2B44BCu) {
        ctx->pc = 0x2B44C0u;
        goto label_2b44c0;
    }
    ctx->pc = 0x2B44B8u;
    {
        const bool branch_taken_0x2b44b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b44b8) {
            ctx->pc = 0x2B4514u;
            goto label_2b4514;
        }
    }
    ctx->pc = 0x2B44C0u;
label_2b44c0:
    // 0x2b44c0: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b44c4:
    // 0x2b44c4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2b44c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b44c8:
    // 0x2b44c8: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b44cc:
    // 0x2b44cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b44ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b44d0:
    // 0x2b44d0: 0xc7a20188  lwc1        $f2, 0x188($sp)
    ctx->pc = 0x2b44d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b44d4:
    // 0x2b44d4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2b44d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b44d8:
    // 0x2b44d8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2b44dc:
    if (ctx->pc == 0x2B44DCu) {
        ctx->pc = 0x2B44E0u;
        goto label_2b44e0;
    }
    ctx->pc = 0x2B44D8u;
    {
        const bool branch_taken_0x2b44d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b44d8) {
            ctx->pc = 0x2B4514u;
            goto label_2b4514;
        }
    }
    ctx->pc = 0x2B44E0u;
label_2b44e0:
    // 0x2b44e0: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b44e4:
    // 0x2b44e4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2b44e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b44e8:
    // 0x2b44e8: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2b44e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b44ec:
    // 0x2b44ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b44ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b44f0:
    // 0x2b44f0: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2b44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b44f4:
    // 0x2b44f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b44f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b44f8:
    // 0x2b44f8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2b44fc:
    if (ctx->pc == 0x2B44FCu) {
        ctx->pc = 0x2B4500u;
        goto label_2b4500;
    }
    ctx->pc = 0x2B44F8u;
    {
        const bool branch_taken_0x2b44f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b44f8) {
            ctx->pc = 0x2B4514u;
            goto label_2b4514;
        }
    }
    ctx->pc = 0x2B4500u;
label_2b4500:
    // 0x2b4500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4504:
    // 0x2b4504: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2b4504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b4508:
    // 0x2b4508: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b4508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b450c:
    // 0x2b450c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b4510:
    if (ctx->pc == 0x2B4510u) {
        ctx->pc = 0x2B4514u;
        goto label_2b4514;
    }
    ctx->pc = 0x2B450Cu;
    {
        const bool branch_taken_0x2b450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b450c) {
            ctx->pc = 0x2B452Cu;
            goto label_2b452c;
        }
    }
    ctx->pc = 0x2B4514u;
label_2b4514:
    // 0x2b4514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b4518:
    // 0x2b4518: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x2b4518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2b451c:
    // 0x2b451c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b451cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4520:
    // 0x2b4520: 0xc090f14  jal         func_243C50
label_2b4524:
    if (ctx->pc == 0x2B4524u) {
        ctx->pc = 0x2B4528u;
        goto label_2b4528;
    }
    ctx->pc = 0x2B4520u;
    SET_GPR_U32(ctx, 31, 0x2B4528u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x2B4520u, 0x2B4528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4528u;
label_2b4528:
    // 0x2b4528: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b452c:
    // 0x2b452c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b452cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4530:
    // 0x2b4530: 0x24640048  addiu       $a0, $v1, 0x48
    ctx->pc = 0x2b4530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_2b4534:
    // 0x2b4534: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2b4534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2b4538:
    // 0x2b4538: 0xc041d58  jal         func_107560
label_2b453c:
    if (ctx->pc == 0x2B453Cu) {
        ctx->pc = 0x2B4540u;
        goto label_2b4540;
    }
    ctx->pc = 0x2B4538u;
    SET_GPR_U32(ctx, 31, 0x2B4540u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B4538u, 0x2B4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4540u;
label_2b4540:
    // 0x2b4540: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4540u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4544:
    // 0x2b4544: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x2b4544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_2b4548:
    // 0x2b4548: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_2b454c:
    if (ctx->pc == 0x2B454Cu) {
        ctx->pc = 0x2B4550u;
        goto label_2b4550;
    }
    ctx->pc = 0x2B4548u;
    {
        const bool branch_taken_0x2b4548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4548) {
            ctx->pc = 0x2B45C8u;
            goto label_2b45c8;
        }
    }
    ctx->pc = 0x2B4550u;
label_2b4550:
    // 0x2b4550: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
label_2b4554:
    if (ctx->pc == 0x2B4554u) {
        ctx->pc = 0x2B4558u;
        goto label_2b4558;
    }
    ctx->pc = 0x2B4550u;
    {
        const bool branch_taken_0x2b4550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4550) {
            ctx->pc = 0x2B45C8u;
            goto label_2b45c8;
        }
    }
    ctx->pc = 0x2B4558u;
label_2b4558:
    // 0x2b4558: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2b4558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2b455c:
    // 0x2b455c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b455cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b4560:
    // 0x2b4560: 0xc090f80  jal         func_243E00
label_2b4564:
    if (ctx->pc == 0x2B4564u) {
        ctx->pc = 0x2B4568u;
        goto label_2b4568;
    }
    ctx->pc = 0x2B4560u;
    SET_GPR_U32(ctx, 31, 0x2B4568u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2B4560u, 0x2B4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4568u;
label_2b4568:
    // 0x2b4568: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2b4568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2b456c:
    // 0x2b456c: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x2b456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2b4570:
    // 0x2b4570: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b4570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b4574:
    // 0x2b4574: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b4574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4578:
    // 0x2b4578: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b4578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b457c:
    // 0x2b457c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2b457cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b4580:
    // 0x2b4580: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b4580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b4584:
    // 0x2b4584: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b4584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b4588:
    // 0x2b4588: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b458c:
    // 0x2b458c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2b458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2b4590:
    // 0x2b4590: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x2b4590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2b4594:
    // 0x2b4594: 0x24660054  addiu       $a2, $v1, 0x54
    ctx->pc = 0x2b4594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
label_2b4598:
    // 0x2b4598: 0xc0ad368  jal         func_2B4DA0
label_2b459c:
    if (ctx->pc == 0x2B459Cu) {
        ctx->pc = 0x2B45A0u;
        goto label_2b45a0;
    }
    ctx->pc = 0x2B4598u;
    SET_GPR_U32(ctx, 31, 0x2B45A0u);
    ctx->pc = 0x2B4DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4DA0u, 0x2B4598u, 0x2B45A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45A0u;
label_2b45a0:
    // 0x2b45a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b45a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b45a4:
    // 0x2b45a4: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b45a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b45a8:
    // 0x2b45a8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b45a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_2b45ac:
    // 0x2b45ac: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2b45acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2b45b0:
    // 0x2b45b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b45b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b45b4:
    // 0x2b45b4: 0xc4ac0054  lwc1        $f12, 0x54($a1)
    ctx->pc = 0x2b45b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b45b8:
    // 0x2b45b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b45b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b45bc:
    // 0x2b45bc: 0xc090fe0  jal         func_243F80
label_2b45c0:
    if (ctx->pc == 0x2B45C0u) {
        ctx->pc = 0x2B45C4u;
        goto label_2b45c4;
    }
    ctx->pc = 0x2B45BCu;
    SET_GPR_U32(ctx, 31, 0x2B45C4u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2B45BCu, 0x2B45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45C4u;
label_2b45c4:
    // 0x2b45c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b45c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b45c8:
    // 0x2b45c8: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x2b45c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_2b45cc:
    // 0x2b45cc: 0x146000d6  bnez        $v1, . + 4 + (0xD6 << 2)
label_2b45d0:
    if (ctx->pc == 0x2B45D0u) {
        ctx->pc = 0x2B45D4u;
        goto label_2b45d4;
    }
    ctx->pc = 0x2B45CCu;
    {
        const bool branch_taken_0x2b45cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b45cc) {
            ctx->pc = 0x2B4928u;
            goto label_2b4928;
        }
    }
    ctx->pc = 0x2B45D4u;
label_2b45d4:
    // 0x2b45d4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2b45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b45d8:
    // 0x2b45d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b45d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b45dc:
    // 0x2b45dc: 0xc090f80  jal         func_243E00
label_2b45e0:
    if (ctx->pc == 0x2B45E0u) {
        ctx->pc = 0x2B45E4u;
        goto label_2b45e4;
    }
    ctx->pc = 0x2B45DCu;
    SET_GPR_U32(ctx, 31, 0x2B45E4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2B45DCu, 0x2B45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45E4u;
label_2b45e4:
    // 0x2b45e4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2b45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b45e8:
    // 0x2b45e8: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x2b45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2b45ec:
    // 0x2b45ec: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b45ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b45f0:
    // 0x2b45f0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b45f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b45f4:
    // 0x2b45f4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b45f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b45f8:
    // 0x2b45f8: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2b45f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b45fc:
    // 0x2b45fc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2b45fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b4600:
    // 0x2b4600: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b4600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b4604:
    // 0x2b4604: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b4604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b4608:
    // 0x2b4608: 0xc0969a0  jal         func_25A680
label_2b460c:
    if (ctx->pc == 0x2B460Cu) {
        ctx->pc = 0x2B4610u;
        goto label_2b4610;
    }
    ctx->pc = 0x2B4608u;
    SET_GPR_U32(ctx, 31, 0x2B4610u);
    ctx->pc = 0x25A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A680u, 0x2B4608u, 0x2B4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4610u;
label_2b4610:
    // 0x2b4610: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4614:
    // 0x2b4614: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_2b4618:
    if (ctx->pc == 0x2B4618u) {
        ctx->pc = 0x2B461Cu;
        goto label_2b461c;
    }
    ctx->pc = 0x2B4614u;
    {
        const bool branch_taken_0x2b4614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4614) {
            ctx->pc = 0x2B46D8u;
            goto label_2b46d8;
        }
    }
    ctx->pc = 0x2B461Cu;
label_2b461c:
    // 0x2b461c: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x2b461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4620:
    // 0x2b4620: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2b4620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4624:
    // 0x2b4624: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b4624u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4628:
    // 0x2b4628: 0x4500008b  bc1f        . + 4 + (0x8B << 2)
label_2b462c:
    if (ctx->pc == 0x2B462Cu) {
        ctx->pc = 0x2B4630u;
        goto label_2b4630;
    }
    ctx->pc = 0x2B4628u;
    {
        const bool branch_taken_0x2b4628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4628) {
            ctx->pc = 0x2B4858u;
            goto label_2b4858;
        }
    }
    ctx->pc = 0x2B4630u;
label_2b4630:
    // 0x2b4630: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2b4630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4634:
    // 0x2b4634: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2b4634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4638:
    // 0x2b4638: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b4638u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b463c:
    // 0x2b463c: 0x45000086  bc1f        . + 4 + (0x86 << 2)
label_2b4640:
    if (ctx->pc == 0x2B4640u) {
        ctx->pc = 0x2B4644u;
        goto label_2b4644;
    }
    ctx->pc = 0x2B463Cu;
    {
        const bool branch_taken_0x2b463c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b463c) {
            ctx->pc = 0x2B4858u;
            goto label_2b4858;
        }
    }
    ctx->pc = 0x2B4644u;
label_2b4644:
    // 0x2b4644: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x2b4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4648:
    // 0x2b4648: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2b4648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b464c:
    // 0x2b464c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b464cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4650:
    // 0x2b4650: 0x45000081  bc1f        . + 4 + (0x81 << 2)
label_2b4654:
    if (ctx->pc == 0x2B4654u) {
        ctx->pc = 0x2B4658u;
        goto label_2b4658;
    }
    ctx->pc = 0x2B4650u;
    {
        const bool branch_taken_0x2b4650 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4650) {
            ctx->pc = 0x2B4858u;
            goto label_2b4858;
        }
    }
    ctx->pc = 0x2B4658u;
label_2b4658:
    // 0x2b4658: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b465c:
    // 0x2b465c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x2b465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4660:
    // 0x2b4660: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2b4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4664:
    // 0x2b4664: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b4664u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4668:
    // 0x2b4668: 0x4500007b  bc1f        . + 4 + (0x7B << 2)
label_2b466c:
    if (ctx->pc == 0x2B466Cu) {
        ctx->pc = 0x2B4670u;
        goto label_2b4670;
    }
    ctx->pc = 0x2B4668u;
    {
        const bool branch_taken_0x2b4668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4668) {
            ctx->pc = 0x2B4858u;
            goto label_2b4858;
        }
    }
    ctx->pc = 0x2B4670u;
label_2b4670:
    // 0x2b4670: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b4670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4674:
    // 0x2b4674: 0xc481004c  lwc1        $f1, 0x4C($a0)
    ctx->pc = 0x2b4674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4678:
    // 0x2b4678: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2b4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b467c:
    // 0x2b467c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b467cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4680:
    // 0x2b4680: 0x45000075  bc1f        . + 4 + (0x75 << 2)
label_2b4684:
    if (ctx->pc == 0x2B4684u) {
        ctx->pc = 0x2B4688u;
        goto label_2b4688;
    }
    ctx->pc = 0x2B4680u;
    {
        const bool branch_taken_0x2b4680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4680) {
            ctx->pc = 0x2B4858u;
            goto label_2b4858;
        }
    }
    ctx->pc = 0x2B4688u;
label_2b4688:
    // 0x2b4688: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b468c:
    // 0x2b468c: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x2b468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4690:
    // 0x2b4690: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x2b4690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b4694:
    // 0x2b4694: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2b4694u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4698:
    // 0x2b4698: 0x4500006f  bc1f        . + 4 + (0x6F << 2)
label_2b469c:
    if (ctx->pc == 0x2B469Cu) {
        ctx->pc = 0x2B46A0u;
        goto label_2b46a0;
    }
    ctx->pc = 0x2B4698u;
    {
        const bool branch_taken_0x2b4698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4698) {
            ctx->pc = 0x2B4858u;
            goto label_2b4858;
        }
    }
    ctx->pc = 0x2B46A0u;
label_2b46a0:
    // 0x2b46a0: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b46a4:
    // 0x2b46a4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b46a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b46a8:
    // 0x2b46a8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2b46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b46ac:
    // 0x2b46ac: 0xc085538  jal         func_2154E0
label_2b46b0:
    if (ctx->pc == 0x2B46B0u) {
        ctx->pc = 0x2B46B4u;
        goto label_2b46b4;
    }
    ctx->pc = 0x2B46ACu;
    SET_GPR_U32(ctx, 31, 0x2B46B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B46ACu, 0x2B46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46B4u;
label_2b46b4:
    // 0x2b46b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b46b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b46b8:
    // 0x2b46b8: 0xafa501d0  sw          $a1, 0x1D0($sp)
    ctx->pc = 0x2b46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 5));
label_2b46bc:
    // 0x2b46bc: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x2b46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2b46c0:
    // 0x2b46c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b46c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b46c4:
    // 0x2b46c4: 0xc0ae044  jal         func_2B8110
label_2b46c8:
    if (ctx->pc == 0x2B46C8u) {
        ctx->pc = 0x2B46CCu;
        goto label_2b46cc;
    }
    ctx->pc = 0x2B46C4u;
    SET_GPR_U32(ctx, 31, 0x2B46CCu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2B46C4u, 0x2B46CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B46CCu;
label_2b46cc:
    // 0x2b46cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b46ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b46d0:
    // 0x2b46d0: 0x10000061  b           . + 4 + (0x61 << 2)
label_2b46d4:
    if (ctx->pc == 0x2B46D4u) {
        ctx->pc = 0x2B46D8u;
        goto label_2b46d8;
    }
    ctx->pc = 0x2B46D0u;
    {
        const bool branch_taken_0x2b46d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b46d0) {
            ctx->pc = 0x2B4858u;
            goto label_2b4858;
        }
    }
    ctx->pc = 0x2B46D8u;
label_2b46d8:
    // 0x2b46d8: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x2b46d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b46dc:
    // 0x2b46dc: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2b46dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b46e0:
    // 0x2b46e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b46e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b46e4:
    // 0x2b46e4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_2b46e8:
    if (ctx->pc == 0x2B46E8u) {
        ctx->pc = 0x2B46ECu;
        goto label_2b46ec;
    }
    ctx->pc = 0x2B46E4u;
    {
        const bool branch_taken_0x2b46e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b46e4) {
            ctx->pc = 0x2B4714u;
            goto label_2b4714;
        }
    }
    ctx->pc = 0x2B46ECu;
label_2b46ec:
    // 0x2b46ec: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2b46ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b46f0:
    // 0x2b46f0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2b46f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b46f4:
    // 0x2b46f4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b46f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b46f8:
    // 0x2b46f8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2b46fc:
    if (ctx->pc == 0x2B46FCu) {
        ctx->pc = 0x2B4700u;
        goto label_2b4700;
    }
    ctx->pc = 0x2B46F8u;
    {
        const bool branch_taken_0x2b46f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b46f8) {
            ctx->pc = 0x2B4714u;
            goto label_2b4714;
        }
    }
    ctx->pc = 0x2B4700u;
label_2b4700:
    // 0x2b4700: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x2b4700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4704:
    // 0x2b4704: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x2b4704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4708:
    // 0x2b4708: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b4708u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b470c:
    // 0x2b470c: 0x45010052  bc1t        . + 4 + (0x52 << 2)
label_2b4710:
    if (ctx->pc == 0x2B4710u) {
        ctx->pc = 0x2B4714u;
        goto label_2b4714;
    }
    ctx->pc = 0x2B470Cu;
    {
        const bool branch_taken_0x2b470c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b470c) {
            ctx->pc = 0x2B4858u;
            goto label_2b4858;
        }
    }
    ctx->pc = 0x2B4714u;
label_2b4714:
    // 0x2b4714: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2b4714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2b4718:
    // 0x2b4718: 0xc09ac08  jal         func_26B020
label_2b471c:
    if (ctx->pc == 0x2B471Cu) {
        ctx->pc = 0x2B4720u;
        goto label_2b4720;
    }
    ctx->pc = 0x2B4718u;
    SET_GPR_U32(ctx, 31, 0x2B4720u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2B4718u, 0x2B4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4720u;
label_2b4720:
    // 0x2b4720: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4724:
    // 0x2b4724: 0xc0b06cc  jal         func_2C1B30
label_2b4728:
    if (ctx->pc == 0x2B4728u) {
        ctx->pc = 0x2B472Cu;
        goto label_2b472c;
    }
    ctx->pc = 0x2B4724u;
    SET_GPR_U32(ctx, 31, 0x2B472Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2B4724u, 0x2B472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B472Cu;
label_2b472c:
    // 0x2b472c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b472cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4730:
    // 0x2b4730: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2b4730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b4734:
    // 0x2b4734: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_2b4738:
    if (ctx->pc == 0x2B4738u) {
        ctx->pc = 0x2B473Cu;
        goto label_2b473c;
    }
    ctx->pc = 0x2B4734u;
    {
        const bool branch_taken_0x2b4734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4734) {
            ctx->pc = 0x2B47D4u;
            goto label_2b47d4;
        }
    }
    ctx->pc = 0x2B473Cu;
label_2b473c:
    // 0x2b473c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4740:
    // 0x2b4740: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_2b4744:
    if (ctx->pc == 0x2B4744u) {
        ctx->pc = 0x2B4748u;
        goto label_2b4748;
    }
    ctx->pc = 0x2B4740u;
    {
        const bool branch_taken_0x2b4740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b4740) {
            ctx->pc = 0x2B47B0u;
            goto label_2b47b0;
        }
    }
    ctx->pc = 0x2B4748u;
label_2b4748:
    // 0x2b4748: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b4748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b474c:
    // 0x2b474c: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_2b4750:
    if (ctx->pc == 0x2B4750u) {
        ctx->pc = 0x2B4754u;
        goto label_2b4754;
    }
    ctx->pc = 0x2B474Cu;
    {
        const bool branch_taken_0x2b474c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b474c) {
            ctx->pc = 0x2B478Cu;
            goto label_2b478c;
        }
    }
    ctx->pc = 0x2B4754u;
label_2b4754:
    // 0x2b4754: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b4754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b4758:
    // 0x2b4758: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2b475c:
    if (ctx->pc == 0x2B475Cu) {
        ctx->pc = 0x2B4760u;
        goto label_2b4760;
    }
    ctx->pc = 0x2B4758u;
    {
        const bool branch_taken_0x2b4758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b4758) {
            ctx->pc = 0x2B4768u;
            goto label_2b4768;
        }
    }
    ctx->pc = 0x2B4760u;
label_2b4760:
    // 0x2b4760: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2b4764:
    if (ctx->pc == 0x2B4764u) {
        ctx->pc = 0x2B4768u;
        goto label_2b4768;
    }
    ctx->pc = 0x2B4760u;
    {
        const bool branch_taken_0x2b4760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4760) {
            ctx->pc = 0x2B47D4u;
            goto label_2b47d4;
        }
    }
    ctx->pc = 0x2B4768u;
label_2b4768:
    // 0x2b4768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b476c:
    // 0x2b476c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b476cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2b4770:
    // 0x2b4770: 0x24a5dfc8  addiu       $a1, $a1, -0x2038
    ctx->pc = 0x2b4770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959048));
label_2b4774:
    // 0x2b4774: 0xc09a714  jal         func_269C50
label_2b4778:
    if (ctx->pc == 0x2B4778u) {
        ctx->pc = 0x2B477Cu;
        goto label_2b477c;
    }
    ctx->pc = 0x2B4774u;
    SET_GPR_U32(ctx, 31, 0x2B477Cu);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B4774u, 0x2B477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B477Cu;
label_2b477c:
    // 0x2b477c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b477cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4780:
    // 0x2b4780: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x2b4780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_2b4784:
    // 0x2b4784: 0x10000026  b           . + 4 + (0x26 << 2)
label_2b4788:
    if (ctx->pc == 0x2B4788u) {
        ctx->pc = 0x2B478Cu;
        goto label_2b478c;
    }
    ctx->pc = 0x2B4784u;
    {
        const bool branch_taken_0x2b4784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4784) {
            ctx->pc = 0x2B4820u;
            goto label_2b4820;
        }
    }
    ctx->pc = 0x2B478Cu;
label_2b478c:
    // 0x2b478c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b4790:
    // 0x2b4790: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b4790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2b4794:
    // 0x2b4794: 0x24a5dfd8  addiu       $a1, $a1, -0x2028
    ctx->pc = 0x2b4794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959064));
label_2b4798:
    // 0x2b4798: 0xc09a714  jal         func_269C50
label_2b479c:
    if (ctx->pc == 0x2B479Cu) {
        ctx->pc = 0x2B47A0u;
        goto label_2b47a0;
    }
    ctx->pc = 0x2B4798u;
    SET_GPR_U32(ctx, 31, 0x2B47A0u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B4798u, 0x2B47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47A0u;
label_2b47a0:
    // 0x2b47a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b47a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b47a4:
    // 0x2b47a4: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x2b47a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_2b47a8:
    // 0x2b47a8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2b47ac:
    if (ctx->pc == 0x2B47ACu) {
        ctx->pc = 0x2B47B0u;
        goto label_2b47b0;
    }
    ctx->pc = 0x2B47A8u;
    {
        const bool branch_taken_0x2b47a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b47a8) {
            ctx->pc = 0x2B4820u;
            goto label_2b4820;
        }
    }
    ctx->pc = 0x2B47B0u;
label_2b47b0:
    // 0x2b47b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b47b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b47b4:
    // 0x2b47b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b47b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2b47b8:
    // 0x2b47b8: 0x24a5dfe8  addiu       $a1, $a1, -0x2018
    ctx->pc = 0x2b47b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959080));
label_2b47bc:
    // 0x2b47bc: 0xc09a714  jal         func_269C50
label_2b47c0:
    if (ctx->pc == 0x2B47C0u) {
        ctx->pc = 0x2B47C4u;
        goto label_2b47c4;
    }
    ctx->pc = 0x2B47BCu;
    SET_GPR_U32(ctx, 31, 0x2B47C4u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B47BCu, 0x2B47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47C4u;
label_2b47c4:
    // 0x2b47c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b47c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b47c8:
    // 0x2b47c8: 0xafa40114  sw          $a0, 0x114($sp)
    ctx->pc = 0x2b47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 4));
label_2b47cc:
    // 0x2b47cc: 0x10000014  b           . + 4 + (0x14 << 2)
label_2b47d0:
    if (ctx->pc == 0x2B47D0u) {
        ctx->pc = 0x2B47D4u;
        goto label_2b47d4;
    }
    ctx->pc = 0x2B47CCu;
    {
        const bool branch_taken_0x2b47cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b47cc) {
            ctx->pc = 0x2B4820u;
            goto label_2b4820;
        }
    }
    ctx->pc = 0x2B47D4u;
label_2b47d4:
    // 0x2b47d4: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b47d8:
    // 0x2b47d8: 0x9043002e  lbu         $v1, 0x2E($v0)
    ctx->pc = 0x2b47d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b47dc:
    // 0x2b47dc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2b47e0:
    if (ctx->pc == 0x2B47E0u) {
        ctx->pc = 0x2B47E4u;
        goto label_2b47e4;
    }
    ctx->pc = 0x2B47DCu;
    {
        const bool branch_taken_0x2b47dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b47dc) {
            ctx->pc = 0x2B4808u;
            goto label_2b4808;
        }
    }
    ctx->pc = 0x2B47E4u;
label_2b47e4:
    // 0x2b47e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b47e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b47e8:
    // 0x2b47e8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2b47ec:
    // 0x2b47ec: 0x24a5dff8  addiu       $a1, $a1, -0x2008
    ctx->pc = 0x2b47ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959096));
label_2b47f0:
    // 0x2b47f0: 0xc09a714  jal         func_269C50
label_2b47f4:
    if (ctx->pc == 0x2B47F4u) {
        ctx->pc = 0x2B47F8u;
        goto label_2b47f8;
    }
    ctx->pc = 0x2B47F0u;
    SET_GPR_U32(ctx, 31, 0x2B47F8u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B47F0u, 0x2B47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47F8u;
label_2b47f8:
    // 0x2b47f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b47f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b47fc:
    // 0x2b47fc: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x2b47fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_2b4800:
    // 0x2b4800: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b4804:
    if (ctx->pc == 0x2B4804u) {
        ctx->pc = 0x2B4808u;
        goto label_2b4808;
    }
    ctx->pc = 0x2B4800u;
    {
        const bool branch_taken_0x2b4800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4800) {
            ctx->pc = 0x2B4820u;
            goto label_2b4820;
        }
    }
    ctx->pc = 0x2B4808u;
label_2b4808:
    // 0x2b4808: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b4808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b480c:
    // 0x2b480c: 0x2785a4a0  addiu       $a1, $gp, -0x5B60
    ctx->pc = 0x2b480cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943904));
label_2b4810:
    // 0x2b4810: 0xc09a714  jal         func_269C50
label_2b4814:
    if (ctx->pc == 0x2B4814u) {
        ctx->pc = 0x2B4818u;
        goto label_2b4818;
    }
    ctx->pc = 0x2B4810u;
    SET_GPR_U32(ctx, 31, 0x2B4818u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B4810u, 0x2B4818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4818u;
label_2b4818:
    // 0x2b4818: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4818u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b481c:
    // 0x2b481c: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x2b481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
label_2b4820:
    // 0x2b4820: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x2b4820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_2b4824:
    // 0x2b4824: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4828:
    // 0x2b4828: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x2b4828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2b482c:
    // 0x2b482c: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x2b482cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2b4830:
    // 0x2b4830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b4834:
    // 0x2b4834: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b4834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4838:
    // 0x2b4838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b483c:
    // 0x2b483c: 0xc0af03c  jal         func_2BC0F0
label_2b4840:
    if (ctx->pc == 0x2B4840u) {
        ctx->pc = 0x2B4844u;
        goto label_2b4844;
    }
    ctx->pc = 0x2B483Cu;
    SET_GPR_U32(ctx, 31, 0x2B4844u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2B483Cu, 0x2B4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4844u;
label_2b4844:
    // 0x2b4844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4848:
    // 0x2b4848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b4848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b484c:
    // 0x2b484c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b484cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4850:
    // 0x2b4850: 0xc096994  jal         func_25A650
label_2b4854:
    if (ctx->pc == 0x2B4854u) {
        ctx->pc = 0x2B4858u;
        goto label_2b4858;
    }
    ctx->pc = 0x2B4850u;
    SET_GPR_U32(ctx, 31, 0x2B4858u);
    ctx->pc = 0x25A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A650u, 0x2B4850u, 0x2B4858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4858u;
label_2b4858:
    // 0x2b4858: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b485c:
    // 0x2b485c: 0x90630070  lbu         $v1, 0x70($v1)
    ctx->pc = 0x2b485cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
label_2b4860:
    // 0x2b4860: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b4864:
    // 0x2b4864: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4868:
    // 0x2b4868: 0x9063002e  lbu         $v1, 0x2E($v1)
    ctx->pc = 0x2b4868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b486c:
    // 0x2b486c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b486cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2b4870:
    // 0x2b4870: 0x1083002d  beq         $a0, $v1, . + 4 + (0x2D << 2)
label_2b4874:
    if (ctx->pc == 0x2B4874u) {
        ctx->pc = 0x2B4878u;
        goto label_2b4878;
    }
    ctx->pc = 0x2B4870u;
    {
        const bool branch_taken_0x2b4870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b4870) {
            ctx->pc = 0x2B4928u;
            goto label_2b4928;
        }
    }
    ctx->pc = 0x2B4878u;
label_2b4878:
    // 0x2b4878: 0xc0b06cc  jal         func_2C1B30
label_2b487c:
    if (ctx->pc == 0x2B487Cu) {
        ctx->pc = 0x2B4880u;
        goto label_2b4880;
    }
    ctx->pc = 0x2B4878u;
    SET_GPR_U32(ctx, 31, 0x2B4880u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2B4878u, 0x2B4880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4880u;
label_2b4880:
    // 0x2b4880: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4880u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4884:
    // 0x2b4884: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x2b4884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b4888:
    // 0x2b4888: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_2b488c:
    if (ctx->pc == 0x2B488Cu) {
        ctx->pc = 0x2B4890u;
        goto label_2b4890;
    }
    ctx->pc = 0x2B4888u;
    {
        const bool branch_taken_0x2b4888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4888) {
            ctx->pc = 0x2B4928u;
            goto label_2b4928;
        }
    }
    ctx->pc = 0x2B4890u;
label_2b4890:
    // 0x2b4890: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2b4890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2b4894:
    // 0x2b4894: 0xc09ac08  jal         func_26B020
label_2b4898:
    if (ctx->pc == 0x2B4898u) {
        ctx->pc = 0x2B489Cu;
        goto label_2b489c;
    }
    ctx->pc = 0x2B4894u;
    SET_GPR_U32(ctx, 31, 0x2B489Cu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2B4894u, 0x2B489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B489Cu;
label_2b489c:
    // 0x2b489c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b489cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b48a0:
    // 0x2b48a0: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b48a4:
    // 0x2b48a4: 0x9063002e  lbu         $v1, 0x2E($v1)
    ctx->pc = 0x2b48a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2b48a8:
    // 0x2b48a8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2b48ac:
    if (ctx->pc == 0x2B48ACu) {
        ctx->pc = 0x2B48B0u;
        goto label_2b48b0;
    }
    ctx->pc = 0x2B48A8u;
    {
        const bool branch_taken_0x2b48a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b48a8) {
            ctx->pc = 0x2B48D4u;
            goto label_2b48d4;
        }
    }
    ctx->pc = 0x2B48B0u;
label_2b48b0:
    // 0x2b48b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b48b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b48b4:
    // 0x2b48b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2b48b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2b48b8:
    // 0x2b48b8: 0x24a5dff8  addiu       $a1, $a1, -0x2008
    ctx->pc = 0x2b48b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959096));
label_2b48bc:
    // 0x2b48bc: 0xc09a714  jal         func_269C50
label_2b48c0:
    if (ctx->pc == 0x2B48C0u) {
        ctx->pc = 0x2B48C4u;
        goto label_2b48c4;
    }
    ctx->pc = 0x2B48BCu;
    SET_GPR_U32(ctx, 31, 0x2B48C4u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B48BCu, 0x2B48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48C4u;
label_2b48c4:
    // 0x2b48c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b48c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b48c8:
    // 0x2b48c8: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x2b48c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
label_2b48cc:
    // 0x2b48cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b48d0:
    if (ctx->pc == 0x2B48D0u) {
        ctx->pc = 0x2B48D4u;
        goto label_2b48d4;
    }
    ctx->pc = 0x2B48CCu;
    {
        const bool branch_taken_0x2b48cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b48cc) {
            ctx->pc = 0x2B48ECu;
            goto label_2b48ec;
        }
    }
    ctx->pc = 0x2B48D4u;
label_2b48d4:
    // 0x2b48d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b48d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b48d8:
    // 0x2b48d8: 0x2785a4a0  addiu       $a1, $gp, -0x5B60
    ctx->pc = 0x2b48d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943904));
label_2b48dc:
    // 0x2b48dc: 0xc09a714  jal         func_269C50
label_2b48e0:
    if (ctx->pc == 0x2B48E0u) {
        ctx->pc = 0x2B48E4u;
        goto label_2b48e4;
    }
    ctx->pc = 0x2B48DCu;
    SET_GPR_U32(ctx, 31, 0x2B48E4u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2B48DCu, 0x2B48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48E4u;
label_2b48e4:
    // 0x2b48e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b48e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b48e8:
    // 0x2b48e8: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x2b48e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
label_2b48ec:
    // 0x2b48ec: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x2b48ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_2b48f0:
    // 0x2b48f0: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2b48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b48f4:
    // 0x2b48f4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b48f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b48f8:
    // 0x2b48f8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2b48f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2b48fc:
    // 0x2b48fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4900:
    // 0x2b4900: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b4900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4904:
    // 0x2b4904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4908:
    // 0x2b4908: 0xc0af03c  jal         func_2BC0F0
label_2b490c:
    if (ctx->pc == 0x2B490Cu) {
        ctx->pc = 0x2B4910u;
        goto label_2b4910;
    }
    ctx->pc = 0x2B4908u;
    SET_GPR_U32(ctx, 31, 0x2B4910u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2B4908u, 0x2B4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4910u;
label_2b4910:
    // 0x2b4910: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4914:
    // 0x2b4914: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b4914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b4918:
    // 0x2b4918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b491c:
    // 0x2b491c: 0xc096994  jal         func_25A650
label_2b4920:
    if (ctx->pc == 0x2B4920u) {
        ctx->pc = 0x2B4924u;
        goto label_2b4924;
    }
    ctx->pc = 0x2B491Cu;
    SET_GPR_U32(ctx, 31, 0x2B4924u);
    ctx->pc = 0x25A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A650u, 0x2B491Cu, 0x2B4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4924u;
label_2b4924:
    // 0x2b4924: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b4924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4928:
    // 0x2b4928: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b492c:
    // 0x2b492c: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x2b492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4930:
    // 0x2b4930: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x2b4930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_2b4934:
    // 0x2b4934: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b4934u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4938:
    // 0x2b4938: 0x0  nop
    ctx->pc = 0x2b4938u;
    // NOP
label_2b493c:
    // 0x2b493c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b493cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4940:
    // 0x2b4940: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_2b4944:
    if (ctx->pc == 0x2B4944u) {
        ctx->pc = 0x2B4948u;
        goto label_2b4948;
    }
    ctx->pc = 0x2B4940u;
    {
        const bool branch_taken_0x2b4940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4940) {
            ctx->pc = 0x2B496Cu;
            goto label_2b496c;
        }
    }
    ctx->pc = 0x2B4948u;
label_2b4948:
    // 0x2b4948: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b4948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b494c:
    // 0x2b494c: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x2b494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4950:
    // 0x2b4950: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x2b4950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_2b4954:
    // 0x2b4954: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4958:
    // 0x2b4958: 0x0  nop
    ctx->pc = 0x2b4958u;
    // NOP
label_2b495c:
    // 0x2b495c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b495cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2b4960:
    // 0x2b4960: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x2b4960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_2b4964:
    // 0x2b4964: 0x10000010  b           . + 4 + (0x10 << 2)
label_2b4968:
    if (ctx->pc == 0x2B4968u) {
        ctx->pc = 0x2B496Cu;
        goto label_2b496c;
    }
    ctx->pc = 0x2B4964u;
    {
        const bool branch_taken_0x2b4964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4964) {
            ctx->pc = 0x2B49A8u;
            goto label_2b49a8;
        }
    }
    ctx->pc = 0x2B496Cu;
label_2b496c:
    // 0x2b496c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4970:
    // 0x2b4970: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x2b4970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4974:
    // 0x2b4974: 0x3c04c334  lui         $a0, 0xC334
    ctx->pc = 0x2b4974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49972 << 16));
label_2b4978:
    // 0x2b4978: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2b4978u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b497c:
    // 0x2b497c: 0x0  nop
    ctx->pc = 0x2b497cu;
    // NOP
label_2b4980:
    // 0x2b4980: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b4980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4984:
    // 0x2b4984: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2b4988:
    if (ctx->pc == 0x2B4988u) {
        ctx->pc = 0x2B498Cu;
        goto label_2b498c;
    }
    ctx->pc = 0x2B4984u;
    {
        const bool branch_taken_0x2b4984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4984) {
            ctx->pc = 0x2B49A8u;
            goto label_2b49a8;
        }
    }
    ctx->pc = 0x2B498Cu;
label_2b498c:
    // 0x2b498c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b498cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4990:
    // 0x2b4990: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x2b4990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4994:
    // 0x2b4994: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x2b4994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_2b4998:
    // 0x2b4998: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b499c:
    // 0x2b499c: 0x0  nop
    ctx->pc = 0x2b499cu;
    // NOP
label_2b49a0:
    // 0x2b49a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b49a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b49a4:
    // 0x2b49a4: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x2b49a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_2b49a8:
    // 0x2b49a8: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b49ac:
    // 0x2b49ac: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x2b49acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b49b0:
    // 0x2b49b0: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_2b49b4:
    // 0x2b49b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b49b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b49b8:
    // 0x2b49b8: 0x0  nop
    ctx->pc = 0x2b49b8u;
    // NOP
label_2b49bc:
    // 0x2b49bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b49bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b49c0:
    // 0x2b49c0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_2b49c4:
    if (ctx->pc == 0x2B49C4u) {
        ctx->pc = 0x2B49C8u;
        goto label_2b49c8;
    }
    ctx->pc = 0x2B49C0u;
    {
        const bool branch_taken_0x2b49c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b49c0) {
            ctx->pc = 0x2B49ECu;
            goto label_2b49ec;
        }
    }
    ctx->pc = 0x2B49C8u;
label_2b49c8:
    // 0x2b49c8: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b49cc:
    // 0x2b49cc: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x2b49ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b49d0:
    // 0x2b49d0: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x2b49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_2b49d4:
    // 0x2b49d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b49d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b49d8:
    // 0x2b49d8: 0x0  nop
    ctx->pc = 0x2b49d8u;
    // NOP
label_2b49dc:
    // 0x2b49dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b49dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b49e0:
    // 0x2b49e0: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x2b49e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_2b49e4:
    // 0x2b49e4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2b49e8:
    if (ctx->pc == 0x2B49E8u) {
        ctx->pc = 0x2B49ECu;
        goto label_2b49ec;
    }
    ctx->pc = 0x2B49E4u;
    {
        const bool branch_taken_0x2b49e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b49e4) {
            ctx->pc = 0x2B4A28u;
            goto label_2b4a28;
        }
    }
    ctx->pc = 0x2B49ECu;
label_2b49ec:
    // 0x2b49ec: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b49f0:
    // 0x2b49f0: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x2b49f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b49f4:
    // 0x2b49f4: 0x3c04c334  lui         $a0, 0xC334
    ctx->pc = 0x2b49f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49972 << 16));
label_2b49f8:
    // 0x2b49f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b49f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b49fc:
    // 0x2b49fc: 0x0  nop
    ctx->pc = 0x2b49fcu;
    // NOP
label_2b4a00:
    // 0x2b4a00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b4a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b4a04:
    // 0x2b4a04: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2b4a08:
    if (ctx->pc == 0x2B4A08u) {
        ctx->pc = 0x2B4A0Cu;
        goto label_2b4a0c;
    }
    ctx->pc = 0x2B4A04u;
    {
        const bool branch_taken_0x2b4a04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4a04) {
            ctx->pc = 0x2B4A28u;
            goto label_2b4a28;
        }
    }
    ctx->pc = 0x2B4A0Cu;
label_2b4a0c:
    // 0x2b4a0c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4a10:
    // 0x2b4a10: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x2b4a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4a14:
    // 0x2b4a14: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x2b4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_2b4a18:
    // 0x2b4a18: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b4a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b4a1c:
    // 0x2b4a1c: 0x0  nop
    ctx->pc = 0x2b4a1cu;
    // NOP
label_2b4a20:
    // 0x2b4a20: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x2b4a20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2b4a24:
    // 0x2b4a24: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x2b4a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_2b4a28:
    // 0x2b4a28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4a2c:
    // 0x2b4a2c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4a30:
    // 0x2b4a30: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b4a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_2b4a34:
    // 0x2b4a34: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4a38:
    // 0x2b4a38: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b4a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
label_2b4a3c:
    // 0x2b4a3c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4a40:
    // 0x2b4a40: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b4a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
label_2b4a44:
    // 0x2b4a44: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4a48:
    // 0x2b4a48: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x2b4a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_2b4a4c:
    // 0x2b4a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b4a50:
    // 0x2b4a50: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4a54:
    // 0x2b4a54: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2b4a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_2b4a58:
    // 0x2b4a58: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4a5c:
    // 0x2b4a5c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2b4a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_2b4a60:
    // 0x2b4a60: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2b4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4a64:
    // 0x2b4a64: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2b4a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_2b4a68:
    // 0x2b4a68: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x2b4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2b4a6c:
    // 0x2b4a6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b4a70:
    // 0x2b4a70: 0x1860002b  blez        $v1, . + 4 + (0x2B << 2)
label_2b4a74:
    if (ctx->pc == 0x2B4A74u) {
        ctx->pc = 0x2B4A78u;
        goto label_2b4a78;
    }
    ctx->pc = 0x2B4A70u;
    {
        const bool branch_taken_0x2b4a70 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2b4a70) {
            ctx->pc = 0x2B4B20u;
            goto label_2b4b20;
        }
    }
    ctx->pc = 0x2B4A78u;
label_2b4a78:
    // 0x2b4a78: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2b4a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_2b4a7c:
    // 0x2b4a7c: 0x2484c2d0  addiu       $a0, $a0, -0x3D30
    ctx->pc = 0x2b4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951632));
label_2b4a80:
    // 0x2b4a80: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2b4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_2b4a84:
    // 0x2b4a84: 0x24a5c2e0  addiu       $a1, $a1, -0x3D20
    ctx->pc = 0x2b4a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951648));
label_2b4a88:
    // 0x2b4a88: 0x2786b6b0  addiu       $a2, $gp, -0x4950
    ctx->pc = 0x2b4a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948528));
label_2b4a8c:
    // 0x2b4a8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4a90:
    // 0x2b4a90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b4a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4a94:
    // 0x2b4a94: 0xc11f1cc  jal         func_47C730
label_2b4a98:
    if (ctx->pc == 0x2B4A98u) {
        ctx->pc = 0x2B4A9Cu;
        goto label_2b4a9c;
    }
    ctx->pc = 0x2B4A94u;
    SET_GPR_U32(ctx, 31, 0x2B4A9Cu);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x2B4A94u, 0x2B4A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A9Cu;
label_2b4a9c:
    // 0x2b4a9c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b4aa0:
    // 0x2b4aa0: 0x2442c2f0  addiu       $v0, $v0, -0x3D10
    ctx->pc = 0x2b4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
label_2b4aa4:
    // 0x2b4aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4aa8:
    // 0x2b4aa8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2b4aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_2b4aac:
    // 0x2b4aac: 0x24a5c300  addiu       $a1, $a1, -0x3D00
    ctx->pc = 0x2b4aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951680));
label_2b4ab0:
    // 0x2b4ab0: 0x2786b6ac  addiu       $a2, $gp, -0x4954
    ctx->pc = 0x2b4ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
label_2b4ab4:
    // 0x2b4ab4: 0x2782b6ac  addiu       $v0, $gp, -0x4954
    ctx->pc = 0x2b4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
label_2b4ab8:
    // 0x2b4ab8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b4ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4abc:
    // 0x2b4abc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b4abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4ac0:
    // 0x2b4ac0: 0xc11f1cc  jal         func_47C730
label_2b4ac4:
    if (ctx->pc == 0x2B4AC4u) {
        ctx->pc = 0x2B4AC8u;
        goto label_2b4ac8;
    }
    ctx->pc = 0x2B4AC0u;
    SET_GPR_U32(ctx, 31, 0x2B4AC8u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x2B4AC0u, 0x2B4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AC8u;
label_2b4ac8:
    // 0x2b4ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b4ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4acc:
    // 0x2b4acc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2b4accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2b4ad0:
    // 0x2b4ad0: 0x2442c300  addiu       $v0, $v0, -0x3D00
    ctx->pc = 0x2b4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951680));
label_2b4ad4:
    // 0x2b4ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4ad8:
    // 0x2b4ad8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2b4ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_2b4adc:
    // 0x2b4adc: 0x24a5c310  addiu       $a1, $a1, -0x3CF0
    ctx->pc = 0x2b4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951696));
label_2b4ae0:
    // 0x2b4ae0: 0x2786b6ac  addiu       $a2, $gp, -0x4954
    ctx->pc = 0x2b4ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
label_2b4ae4:
    // 0x2b4ae4: 0x2787b6ac  addiu       $a3, $gp, -0x4954
    ctx->pc = 0x2b4ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
label_2b4ae8:
    // 0x2b4ae8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b4ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4aec:
    // 0x2b4aec: 0xc11f1cc  jal         func_47C730
label_2b4af0:
    if (ctx->pc == 0x2B4AF0u) {
        ctx->pc = 0x2B4AF4u;
        goto label_2b4af4;
    }
    ctx->pc = 0x2B4AECu;
    SET_GPR_U32(ctx, 31, 0x2B4AF4u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x2B4AECu, 0x2B4AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4AF4u;
label_2b4af4:
    // 0x2b4af4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2b4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_2b4af8:
    // 0x2b4af8: 0x2484c310  addiu       $a0, $a0, -0x3CF0
    ctx->pc = 0x2b4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951696));
label_2b4afc:
    // 0x2b4afc: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x2b4afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_2b4b00:
    // 0x2b4b00: 0x24a5c2f0  addiu       $a1, $a1, -0x3D10
    ctx->pc = 0x2b4b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951664));
label_2b4b04:
    // 0x2b4b04: 0x2782b6ac  addiu       $v0, $gp, -0x4954
    ctx->pc = 0x2b4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
label_2b4b08:
    // 0x2b4b08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b4b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b0c:
    // 0x2b4b0c: 0x2787b6ac  addiu       $a3, $gp, -0x4954
    ctx->pc = 0x2b4b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
label_2b4b10:
    // 0x2b4b10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b4b10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b14:
    // 0x2b4b14: 0xc11f1cc  jal         func_47C730
label_2b4b18:
    if (ctx->pc == 0x2B4B18u) {
        ctx->pc = 0x2B4B1Cu;
        goto label_2b4b1c;
    }
    ctx->pc = 0x2B4B14u;
    SET_GPR_U32(ctx, 31, 0x2B4B1Cu);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x2B4B14u, 0x2B4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4B1Cu;
label_2b4b1c:
    // 0x2b4b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4b20:
    // 0x2b4b20: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x2b4b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4b24:
    // 0x2b4b24: 0x90a3002e  lbu         $v1, 0x2E($a1)
    ctx->pc = 0x2b4b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
label_2b4b28:
    // 0x2b4b28: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x2b4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_2b4b2c:
    // 0x2b4b2c: 0xa0830070  sb          $v1, 0x70($a0)
    ctx->pc = 0x2b4b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 3));
label_2b4b30:
    // 0x2b4b30: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b4b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b4b34:
    // 0x2b4b34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b4b34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b4b38:
    // 0x2b4b38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b4b38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b4b3c:
    // 0x2b4b3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b4b3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b4b40:
    // 0x2b4b40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b4b40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b4b44:
    // 0x2b4b44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b4b44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b4b48:
    // 0x2b4b48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b4b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b4b4c:
    // 0x2b4b4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b4b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b4b50:
    // 0x2b4b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4b54:
    // 0x2b4b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4b58:
    // 0x2b4b58: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x2b4b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2b4b5c:
    // 0x2b4b5c: 0x3e00008  jr          $ra
label_2b4b60:
    if (ctx->pc == 0x2B4B60u) {
        ctx->pc = 0x2B4B64u;
        goto label_2b4b64;
    }
    ctx->pc = 0x2B4B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4B64u;
label_2b4b64:
    // 0x2b4b64: 0x0  nop
    ctx->pc = 0x2b4b64u;
    // NOP
label_2b4b68:
    // 0x2b4b68: 0x0  nop
    ctx->pc = 0x2b4b68u;
    // NOP
label_2b4b6c:
    // 0x2b4b6c: 0x0  nop
    ctx->pc = 0x2b4b6cu;
    // NOP
    ctx->pc = 0x2b4b70u;
}
