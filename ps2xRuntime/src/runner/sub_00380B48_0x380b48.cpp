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

// Function: sub_00380B48
// Address: 0x380b48 - 0x381530
void sub_00380B48_0x380b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380B48_0x380b48");
#endif

    switch (ctx->pc) {
        case 0x380b48u: goto label_380b48;
        case 0x380b4cu: goto label_380b4c;
        case 0x380b50u: goto label_380b50;
        case 0x380b54u: goto label_380b54;
        case 0x380b58u: goto label_380b58;
        case 0x380b5cu: goto label_380b5c;
        case 0x380b60u: goto label_380b60;
        case 0x380b64u: goto label_380b64;
        case 0x380b68u: goto label_380b68;
        case 0x380b6cu: goto label_380b6c;
        case 0x380b70u: goto label_380b70;
        case 0x380b74u: goto label_380b74;
        case 0x380b78u: goto label_380b78;
        case 0x380b7cu: goto label_380b7c;
        case 0x380b80u: goto label_380b80;
        case 0x380b84u: goto label_380b84;
        case 0x380b88u: goto label_380b88;
        case 0x380b8cu: goto label_380b8c;
        case 0x380b90u: goto label_380b90;
        case 0x380b94u: goto label_380b94;
        case 0x380b98u: goto label_380b98;
        case 0x380b9cu: goto label_380b9c;
        case 0x380ba0u: goto label_380ba0;
        case 0x380ba4u: goto label_380ba4;
        case 0x380ba8u: goto label_380ba8;
        case 0x380bacu: goto label_380bac;
        case 0x380bb0u: goto label_380bb0;
        case 0x380bb4u: goto label_380bb4;
        case 0x380bb8u: goto label_380bb8;
        case 0x380bbcu: goto label_380bbc;
        case 0x380bc0u: goto label_380bc0;
        case 0x380bc4u: goto label_380bc4;
        case 0x380bc8u: goto label_380bc8;
        case 0x380bccu: goto label_380bcc;
        case 0x380bd0u: goto label_380bd0;
        case 0x380bd4u: goto label_380bd4;
        case 0x380bd8u: goto label_380bd8;
        case 0x380bdcu: goto label_380bdc;
        case 0x380be0u: goto label_380be0;
        case 0x380be4u: goto label_380be4;
        case 0x380be8u: goto label_380be8;
        case 0x380becu: goto label_380bec;
        case 0x380bf0u: goto label_380bf0;
        case 0x380bf4u: goto label_380bf4;
        case 0x380bf8u: goto label_380bf8;
        case 0x380bfcu: goto label_380bfc;
        case 0x380c00u: goto label_380c00;
        case 0x380c04u: goto label_380c04;
        case 0x380c08u: goto label_380c08;
        case 0x380c0cu: goto label_380c0c;
        case 0x380c10u: goto label_380c10;
        case 0x380c14u: goto label_380c14;
        case 0x380c18u: goto label_380c18;
        case 0x380c1cu: goto label_380c1c;
        case 0x380c20u: goto label_380c20;
        case 0x380c24u: goto label_380c24;
        case 0x380c28u: goto label_380c28;
        case 0x380c2cu: goto label_380c2c;
        case 0x380c30u: goto label_380c30;
        case 0x380c34u: goto label_380c34;
        case 0x380c38u: goto label_380c38;
        case 0x380c3cu: goto label_380c3c;
        case 0x380c40u: goto label_380c40;
        case 0x380c44u: goto label_380c44;
        case 0x380c48u: goto label_380c48;
        case 0x380c4cu: goto label_380c4c;
        case 0x380c50u: goto label_380c50;
        case 0x380c54u: goto label_380c54;
        case 0x380c58u: goto label_380c58;
        case 0x380c5cu: goto label_380c5c;
        case 0x380c60u: goto label_380c60;
        case 0x380c64u: goto label_380c64;
        case 0x380c68u: goto label_380c68;
        case 0x380c6cu: goto label_380c6c;
        case 0x380c70u: goto label_380c70;
        case 0x380c74u: goto label_380c74;
        case 0x380c78u: goto label_380c78;
        case 0x380c7cu: goto label_380c7c;
        case 0x380c80u: goto label_380c80;
        case 0x380c84u: goto label_380c84;
        case 0x380c88u: goto label_380c88;
        case 0x380c8cu: goto label_380c8c;
        case 0x380c90u: goto label_380c90;
        case 0x380c94u: goto label_380c94;
        case 0x380c98u: goto label_380c98;
        case 0x380c9cu: goto label_380c9c;
        case 0x380ca0u: goto label_380ca0;
        case 0x380ca4u: goto label_380ca4;
        case 0x380ca8u: goto label_380ca8;
        case 0x380cacu: goto label_380cac;
        case 0x380cb0u: goto label_380cb0;
        case 0x380cb4u: goto label_380cb4;
        case 0x380cb8u: goto label_380cb8;
        case 0x380cbcu: goto label_380cbc;
        case 0x380cc0u: goto label_380cc0;
        case 0x380cc4u: goto label_380cc4;
        case 0x380cc8u: goto label_380cc8;
        case 0x380cccu: goto label_380ccc;
        case 0x380cd0u: goto label_380cd0;
        case 0x380cd4u: goto label_380cd4;
        case 0x380cd8u: goto label_380cd8;
        case 0x380cdcu: goto label_380cdc;
        case 0x380ce0u: goto label_380ce0;
        case 0x380ce4u: goto label_380ce4;
        case 0x380ce8u: goto label_380ce8;
        case 0x380cecu: goto label_380cec;
        case 0x380cf0u: goto label_380cf0;
        case 0x380cf4u: goto label_380cf4;
        case 0x380cf8u: goto label_380cf8;
        case 0x380cfcu: goto label_380cfc;
        case 0x380d00u: goto label_380d00;
        case 0x380d04u: goto label_380d04;
        case 0x380d08u: goto label_380d08;
        case 0x380d0cu: goto label_380d0c;
        case 0x380d10u: goto label_380d10;
        case 0x380d14u: goto label_380d14;
        case 0x380d18u: goto label_380d18;
        case 0x380d1cu: goto label_380d1c;
        case 0x380d20u: goto label_380d20;
        case 0x380d24u: goto label_380d24;
        case 0x380d28u: goto label_380d28;
        case 0x380d2cu: goto label_380d2c;
        case 0x380d30u: goto label_380d30;
        case 0x380d34u: goto label_380d34;
        case 0x380d38u: goto label_380d38;
        case 0x380d3cu: goto label_380d3c;
        case 0x380d40u: goto label_380d40;
        case 0x380d44u: goto label_380d44;
        case 0x380d48u: goto label_380d48;
        case 0x380d4cu: goto label_380d4c;
        case 0x380d50u: goto label_380d50;
        case 0x380d54u: goto label_380d54;
        case 0x380d58u: goto label_380d58;
        case 0x380d5cu: goto label_380d5c;
        case 0x380d60u: goto label_380d60;
        case 0x380d64u: goto label_380d64;
        case 0x380d68u: goto label_380d68;
        case 0x380d6cu: goto label_380d6c;
        case 0x380d70u: goto label_380d70;
        case 0x380d74u: goto label_380d74;
        case 0x380d78u: goto label_380d78;
        case 0x380d7cu: goto label_380d7c;
        case 0x380d80u: goto label_380d80;
        case 0x380d84u: goto label_380d84;
        case 0x380d88u: goto label_380d88;
        case 0x380d8cu: goto label_380d8c;
        case 0x380d90u: goto label_380d90;
        case 0x380d94u: goto label_380d94;
        case 0x380d98u: goto label_380d98;
        case 0x380d9cu: goto label_380d9c;
        case 0x380da0u: goto label_380da0;
        case 0x380da4u: goto label_380da4;
        case 0x380da8u: goto label_380da8;
        case 0x380dacu: goto label_380dac;
        case 0x380db0u: goto label_380db0;
        case 0x380db4u: goto label_380db4;
        case 0x380db8u: goto label_380db8;
        case 0x380dbcu: goto label_380dbc;
        case 0x380dc0u: goto label_380dc0;
        case 0x380dc4u: goto label_380dc4;
        case 0x380dc8u: goto label_380dc8;
        case 0x380dccu: goto label_380dcc;
        case 0x380dd0u: goto label_380dd0;
        case 0x380dd4u: goto label_380dd4;
        case 0x380dd8u: goto label_380dd8;
        case 0x380ddcu: goto label_380ddc;
        case 0x380de0u: goto label_380de0;
        case 0x380de4u: goto label_380de4;
        case 0x380de8u: goto label_380de8;
        case 0x380decu: goto label_380dec;
        case 0x380df0u: goto label_380df0;
        case 0x380df4u: goto label_380df4;
        case 0x380df8u: goto label_380df8;
        case 0x380dfcu: goto label_380dfc;
        case 0x380e00u: goto label_380e00;
        case 0x380e04u: goto label_380e04;
        case 0x380e08u: goto label_380e08;
        case 0x380e0cu: goto label_380e0c;
        case 0x380e10u: goto label_380e10;
        case 0x380e14u: goto label_380e14;
        case 0x380e18u: goto label_380e18;
        case 0x380e1cu: goto label_380e1c;
        case 0x380e20u: goto label_380e20;
        case 0x380e24u: goto label_380e24;
        case 0x380e28u: goto label_380e28;
        case 0x380e2cu: goto label_380e2c;
        case 0x380e30u: goto label_380e30;
        case 0x380e34u: goto label_380e34;
        case 0x380e38u: goto label_380e38;
        case 0x380e3cu: goto label_380e3c;
        case 0x380e40u: goto label_380e40;
        case 0x380e44u: goto label_380e44;
        case 0x380e48u: goto label_380e48;
        case 0x380e4cu: goto label_380e4c;
        case 0x380e50u: goto label_380e50;
        case 0x380e54u: goto label_380e54;
        case 0x380e58u: goto label_380e58;
        case 0x380e5cu: goto label_380e5c;
        case 0x380e60u: goto label_380e60;
        case 0x380e64u: goto label_380e64;
        case 0x380e68u: goto label_380e68;
        case 0x380e6cu: goto label_380e6c;
        case 0x380e70u: goto label_380e70;
        case 0x380e74u: goto label_380e74;
        case 0x380e78u: goto label_380e78;
        case 0x380e7cu: goto label_380e7c;
        case 0x380e80u: goto label_380e80;
        case 0x380e84u: goto label_380e84;
        case 0x380e88u: goto label_380e88;
        case 0x380e8cu: goto label_380e8c;
        case 0x380e90u: goto label_380e90;
        case 0x380e94u: goto label_380e94;
        case 0x380e98u: goto label_380e98;
        case 0x380e9cu: goto label_380e9c;
        case 0x380ea0u: goto label_380ea0;
        case 0x380ea4u: goto label_380ea4;
        case 0x380ea8u: goto label_380ea8;
        case 0x380eacu: goto label_380eac;
        case 0x380eb0u: goto label_380eb0;
        case 0x380eb4u: goto label_380eb4;
        case 0x380eb8u: goto label_380eb8;
        case 0x380ebcu: goto label_380ebc;
        case 0x380ec0u: goto label_380ec0;
        case 0x380ec4u: goto label_380ec4;
        case 0x380ec8u: goto label_380ec8;
        case 0x380eccu: goto label_380ecc;
        case 0x380ed0u: goto label_380ed0;
        case 0x380ed4u: goto label_380ed4;
        case 0x380ed8u: goto label_380ed8;
        case 0x380edcu: goto label_380edc;
        case 0x380ee0u: goto label_380ee0;
        case 0x380ee4u: goto label_380ee4;
        case 0x380ee8u: goto label_380ee8;
        case 0x380eecu: goto label_380eec;
        case 0x380ef0u: goto label_380ef0;
        case 0x380ef4u: goto label_380ef4;
        case 0x380ef8u: goto label_380ef8;
        case 0x380efcu: goto label_380efc;
        case 0x380f00u: goto label_380f00;
        case 0x380f04u: goto label_380f04;
        case 0x380f08u: goto label_380f08;
        case 0x380f0cu: goto label_380f0c;
        case 0x380f10u: goto label_380f10;
        case 0x380f14u: goto label_380f14;
        case 0x380f18u: goto label_380f18;
        case 0x380f1cu: goto label_380f1c;
        case 0x380f20u: goto label_380f20;
        case 0x380f24u: goto label_380f24;
        case 0x380f28u: goto label_380f28;
        case 0x380f2cu: goto label_380f2c;
        case 0x380f30u: goto label_380f30;
        case 0x380f34u: goto label_380f34;
        case 0x380f38u: goto label_380f38;
        case 0x380f3cu: goto label_380f3c;
        case 0x380f40u: goto label_380f40;
        case 0x380f44u: goto label_380f44;
        case 0x380f48u: goto label_380f48;
        case 0x380f4cu: goto label_380f4c;
        case 0x380f50u: goto label_380f50;
        case 0x380f54u: goto label_380f54;
        case 0x380f58u: goto label_380f58;
        case 0x380f5cu: goto label_380f5c;
        case 0x380f60u: goto label_380f60;
        case 0x380f64u: goto label_380f64;
        case 0x380f68u: goto label_380f68;
        case 0x380f6cu: goto label_380f6c;
        case 0x380f70u: goto label_380f70;
        case 0x380f74u: goto label_380f74;
        case 0x380f78u: goto label_380f78;
        case 0x380f7cu: goto label_380f7c;
        case 0x380f80u: goto label_380f80;
        case 0x380f84u: goto label_380f84;
        case 0x380f88u: goto label_380f88;
        case 0x380f8cu: goto label_380f8c;
        case 0x380f90u: goto label_380f90;
        case 0x380f94u: goto label_380f94;
        case 0x380f98u: goto label_380f98;
        case 0x380f9cu: goto label_380f9c;
        case 0x380fa0u: goto label_380fa0;
        case 0x380fa4u: goto label_380fa4;
        case 0x380fa8u: goto label_380fa8;
        case 0x380facu: goto label_380fac;
        case 0x380fb0u: goto label_380fb0;
        case 0x380fb4u: goto label_380fb4;
        case 0x380fb8u: goto label_380fb8;
        case 0x380fbcu: goto label_380fbc;
        case 0x380fc0u: goto label_380fc0;
        case 0x380fc4u: goto label_380fc4;
        case 0x380fc8u: goto label_380fc8;
        case 0x380fccu: goto label_380fcc;
        case 0x380fd0u: goto label_380fd0;
        case 0x380fd4u: goto label_380fd4;
        case 0x380fd8u: goto label_380fd8;
        case 0x380fdcu: goto label_380fdc;
        case 0x380fe0u: goto label_380fe0;
        case 0x380fe4u: goto label_380fe4;
        case 0x380fe8u: goto label_380fe8;
        case 0x380fecu: goto label_380fec;
        case 0x380ff0u: goto label_380ff0;
        case 0x380ff4u: goto label_380ff4;
        case 0x380ff8u: goto label_380ff8;
        case 0x380ffcu: goto label_380ffc;
        case 0x381000u: goto label_381000;
        case 0x381004u: goto label_381004;
        case 0x381008u: goto label_381008;
        case 0x38100cu: goto label_38100c;
        case 0x381010u: goto label_381010;
        case 0x381014u: goto label_381014;
        case 0x381018u: goto label_381018;
        case 0x38101cu: goto label_38101c;
        case 0x381020u: goto label_381020;
        case 0x381024u: goto label_381024;
        case 0x381028u: goto label_381028;
        case 0x38102cu: goto label_38102c;
        case 0x381030u: goto label_381030;
        case 0x381034u: goto label_381034;
        case 0x381038u: goto label_381038;
        case 0x38103cu: goto label_38103c;
        case 0x381040u: goto label_381040;
        case 0x381044u: goto label_381044;
        case 0x381048u: goto label_381048;
        case 0x38104cu: goto label_38104c;
        case 0x381050u: goto label_381050;
        case 0x381054u: goto label_381054;
        case 0x381058u: goto label_381058;
        case 0x38105cu: goto label_38105c;
        case 0x381060u: goto label_381060;
        case 0x381064u: goto label_381064;
        case 0x381068u: goto label_381068;
        case 0x38106cu: goto label_38106c;
        case 0x381070u: goto label_381070;
        case 0x381074u: goto label_381074;
        case 0x381078u: goto label_381078;
        case 0x38107cu: goto label_38107c;
        case 0x381080u: goto label_381080;
        case 0x381084u: goto label_381084;
        case 0x381088u: goto label_381088;
        case 0x38108cu: goto label_38108c;
        case 0x381090u: goto label_381090;
        case 0x381094u: goto label_381094;
        case 0x381098u: goto label_381098;
        case 0x38109cu: goto label_38109c;
        case 0x3810a0u: goto label_3810a0;
        case 0x3810a4u: goto label_3810a4;
        case 0x3810a8u: goto label_3810a8;
        case 0x3810acu: goto label_3810ac;
        case 0x3810b0u: goto label_3810b0;
        case 0x3810b4u: goto label_3810b4;
        case 0x3810b8u: goto label_3810b8;
        case 0x3810bcu: goto label_3810bc;
        case 0x3810c0u: goto label_3810c0;
        case 0x3810c4u: goto label_3810c4;
        case 0x3810c8u: goto label_3810c8;
        case 0x3810ccu: goto label_3810cc;
        case 0x3810d0u: goto label_3810d0;
        case 0x3810d4u: goto label_3810d4;
        case 0x3810d8u: goto label_3810d8;
        case 0x3810dcu: goto label_3810dc;
        case 0x3810e0u: goto label_3810e0;
        case 0x3810e4u: goto label_3810e4;
        case 0x3810e8u: goto label_3810e8;
        case 0x3810ecu: goto label_3810ec;
        case 0x3810f0u: goto label_3810f0;
        case 0x3810f4u: goto label_3810f4;
        case 0x3810f8u: goto label_3810f8;
        case 0x3810fcu: goto label_3810fc;
        case 0x381100u: goto label_381100;
        case 0x381104u: goto label_381104;
        case 0x381108u: goto label_381108;
        case 0x38110cu: goto label_38110c;
        case 0x381110u: goto label_381110;
        case 0x381114u: goto label_381114;
        case 0x381118u: goto label_381118;
        case 0x38111cu: goto label_38111c;
        case 0x381120u: goto label_381120;
        case 0x381124u: goto label_381124;
        case 0x381128u: goto label_381128;
        case 0x38112cu: goto label_38112c;
        case 0x381130u: goto label_381130;
        case 0x381134u: goto label_381134;
        case 0x381138u: goto label_381138;
        case 0x38113cu: goto label_38113c;
        case 0x381140u: goto label_381140;
        case 0x381144u: goto label_381144;
        case 0x381148u: goto label_381148;
        case 0x38114cu: goto label_38114c;
        case 0x381150u: goto label_381150;
        case 0x381154u: goto label_381154;
        case 0x381158u: goto label_381158;
        case 0x38115cu: goto label_38115c;
        case 0x381160u: goto label_381160;
        case 0x381164u: goto label_381164;
        case 0x381168u: goto label_381168;
        case 0x38116cu: goto label_38116c;
        case 0x381170u: goto label_381170;
        case 0x381174u: goto label_381174;
        case 0x381178u: goto label_381178;
        case 0x38117cu: goto label_38117c;
        case 0x381180u: goto label_381180;
        case 0x381184u: goto label_381184;
        case 0x381188u: goto label_381188;
        case 0x38118cu: goto label_38118c;
        case 0x381190u: goto label_381190;
        case 0x381194u: goto label_381194;
        case 0x381198u: goto label_381198;
        case 0x38119cu: goto label_38119c;
        case 0x3811a0u: goto label_3811a0;
        case 0x3811a4u: goto label_3811a4;
        case 0x3811a8u: goto label_3811a8;
        case 0x3811acu: goto label_3811ac;
        case 0x3811b0u: goto label_3811b0;
        case 0x3811b4u: goto label_3811b4;
        case 0x3811b8u: goto label_3811b8;
        case 0x3811bcu: goto label_3811bc;
        case 0x3811c0u: goto label_3811c0;
        case 0x3811c4u: goto label_3811c4;
        case 0x3811c8u: goto label_3811c8;
        case 0x3811ccu: goto label_3811cc;
        case 0x3811d0u: goto label_3811d0;
        case 0x3811d4u: goto label_3811d4;
        case 0x3811d8u: goto label_3811d8;
        case 0x3811dcu: goto label_3811dc;
        case 0x3811e0u: goto label_3811e0;
        case 0x3811e4u: goto label_3811e4;
        case 0x3811e8u: goto label_3811e8;
        case 0x3811ecu: goto label_3811ec;
        case 0x3811f0u: goto label_3811f0;
        case 0x3811f4u: goto label_3811f4;
        case 0x3811f8u: goto label_3811f8;
        case 0x3811fcu: goto label_3811fc;
        case 0x381200u: goto label_381200;
        case 0x381204u: goto label_381204;
        case 0x381208u: goto label_381208;
        case 0x38120cu: goto label_38120c;
        case 0x381210u: goto label_381210;
        case 0x381214u: goto label_381214;
        case 0x381218u: goto label_381218;
        case 0x38121cu: goto label_38121c;
        case 0x381220u: goto label_381220;
        case 0x381224u: goto label_381224;
        case 0x381228u: goto label_381228;
        case 0x38122cu: goto label_38122c;
        case 0x381230u: goto label_381230;
        case 0x381234u: goto label_381234;
        case 0x381238u: goto label_381238;
        case 0x38123cu: goto label_38123c;
        case 0x381240u: goto label_381240;
        case 0x381244u: goto label_381244;
        case 0x381248u: goto label_381248;
        case 0x38124cu: goto label_38124c;
        case 0x381250u: goto label_381250;
        case 0x381254u: goto label_381254;
        case 0x381258u: goto label_381258;
        case 0x38125cu: goto label_38125c;
        case 0x381260u: goto label_381260;
        case 0x381264u: goto label_381264;
        case 0x381268u: goto label_381268;
        case 0x38126cu: goto label_38126c;
        case 0x381270u: goto label_381270;
        case 0x381274u: goto label_381274;
        case 0x381278u: goto label_381278;
        case 0x38127cu: goto label_38127c;
        case 0x381280u: goto label_381280;
        case 0x381284u: goto label_381284;
        case 0x381288u: goto label_381288;
        case 0x38128cu: goto label_38128c;
        case 0x381290u: goto label_381290;
        case 0x381294u: goto label_381294;
        case 0x381298u: goto label_381298;
        case 0x38129cu: goto label_38129c;
        case 0x3812a0u: goto label_3812a0;
        case 0x3812a4u: goto label_3812a4;
        case 0x3812a8u: goto label_3812a8;
        case 0x3812acu: goto label_3812ac;
        case 0x3812b0u: goto label_3812b0;
        case 0x3812b4u: goto label_3812b4;
        case 0x3812b8u: goto label_3812b8;
        case 0x3812bcu: goto label_3812bc;
        case 0x3812c0u: goto label_3812c0;
        case 0x3812c4u: goto label_3812c4;
        case 0x3812c8u: goto label_3812c8;
        case 0x3812ccu: goto label_3812cc;
        case 0x3812d0u: goto label_3812d0;
        case 0x3812d4u: goto label_3812d4;
        case 0x3812d8u: goto label_3812d8;
        case 0x3812dcu: goto label_3812dc;
        case 0x3812e0u: goto label_3812e0;
        case 0x3812e4u: goto label_3812e4;
        case 0x3812e8u: goto label_3812e8;
        case 0x3812ecu: goto label_3812ec;
        case 0x3812f0u: goto label_3812f0;
        case 0x3812f4u: goto label_3812f4;
        case 0x3812f8u: goto label_3812f8;
        case 0x3812fcu: goto label_3812fc;
        case 0x381300u: goto label_381300;
        case 0x381304u: goto label_381304;
        case 0x381308u: goto label_381308;
        case 0x38130cu: goto label_38130c;
        case 0x381310u: goto label_381310;
        case 0x381314u: goto label_381314;
        case 0x381318u: goto label_381318;
        case 0x38131cu: goto label_38131c;
        case 0x381320u: goto label_381320;
        case 0x381324u: goto label_381324;
        case 0x381328u: goto label_381328;
        case 0x38132cu: goto label_38132c;
        case 0x381330u: goto label_381330;
        case 0x381334u: goto label_381334;
        case 0x381338u: goto label_381338;
        case 0x38133cu: goto label_38133c;
        case 0x381340u: goto label_381340;
        case 0x381344u: goto label_381344;
        case 0x381348u: goto label_381348;
        case 0x38134cu: goto label_38134c;
        case 0x381350u: goto label_381350;
        case 0x381354u: goto label_381354;
        case 0x381358u: goto label_381358;
        case 0x38135cu: goto label_38135c;
        case 0x381360u: goto label_381360;
        case 0x381364u: goto label_381364;
        case 0x381368u: goto label_381368;
        case 0x38136cu: goto label_38136c;
        case 0x381370u: goto label_381370;
        case 0x381374u: goto label_381374;
        case 0x381378u: goto label_381378;
        case 0x38137cu: goto label_38137c;
        case 0x381380u: goto label_381380;
        case 0x381384u: goto label_381384;
        case 0x381388u: goto label_381388;
        case 0x38138cu: goto label_38138c;
        case 0x381390u: goto label_381390;
        case 0x381394u: goto label_381394;
        case 0x381398u: goto label_381398;
        case 0x38139cu: goto label_38139c;
        case 0x3813a0u: goto label_3813a0;
        case 0x3813a4u: goto label_3813a4;
        case 0x3813a8u: goto label_3813a8;
        case 0x3813acu: goto label_3813ac;
        case 0x3813b0u: goto label_3813b0;
        case 0x3813b4u: goto label_3813b4;
        case 0x3813b8u: goto label_3813b8;
        case 0x3813bcu: goto label_3813bc;
        case 0x3813c0u: goto label_3813c0;
        case 0x3813c4u: goto label_3813c4;
        case 0x3813c8u: goto label_3813c8;
        case 0x3813ccu: goto label_3813cc;
        case 0x3813d0u: goto label_3813d0;
        case 0x3813d4u: goto label_3813d4;
        case 0x3813d8u: goto label_3813d8;
        case 0x3813dcu: goto label_3813dc;
        case 0x3813e0u: goto label_3813e0;
        case 0x3813e4u: goto label_3813e4;
        case 0x3813e8u: goto label_3813e8;
        case 0x3813ecu: goto label_3813ec;
        case 0x3813f0u: goto label_3813f0;
        case 0x3813f4u: goto label_3813f4;
        case 0x3813f8u: goto label_3813f8;
        case 0x3813fcu: goto label_3813fc;
        case 0x381400u: goto label_381400;
        case 0x381404u: goto label_381404;
        case 0x381408u: goto label_381408;
        case 0x38140cu: goto label_38140c;
        case 0x381410u: goto label_381410;
        case 0x381414u: goto label_381414;
        case 0x381418u: goto label_381418;
        case 0x38141cu: goto label_38141c;
        case 0x381420u: goto label_381420;
        case 0x381424u: goto label_381424;
        case 0x381428u: goto label_381428;
        case 0x38142cu: goto label_38142c;
        case 0x381430u: goto label_381430;
        case 0x381434u: goto label_381434;
        case 0x381438u: goto label_381438;
        case 0x38143cu: goto label_38143c;
        case 0x381440u: goto label_381440;
        case 0x381444u: goto label_381444;
        case 0x381448u: goto label_381448;
        case 0x38144cu: goto label_38144c;
        case 0x381450u: goto label_381450;
        case 0x381454u: goto label_381454;
        case 0x381458u: goto label_381458;
        case 0x38145cu: goto label_38145c;
        case 0x381460u: goto label_381460;
        case 0x381464u: goto label_381464;
        case 0x381468u: goto label_381468;
        case 0x38146cu: goto label_38146c;
        case 0x381470u: goto label_381470;
        case 0x381474u: goto label_381474;
        case 0x381478u: goto label_381478;
        case 0x38147cu: goto label_38147c;
        case 0x381480u: goto label_381480;
        case 0x381484u: goto label_381484;
        case 0x381488u: goto label_381488;
        case 0x38148cu: goto label_38148c;
        case 0x381490u: goto label_381490;
        case 0x381494u: goto label_381494;
        case 0x381498u: goto label_381498;
        case 0x38149cu: goto label_38149c;
        case 0x3814a0u: goto label_3814a0;
        case 0x3814a4u: goto label_3814a4;
        case 0x3814a8u: goto label_3814a8;
        case 0x3814acu: goto label_3814ac;
        case 0x3814b0u: goto label_3814b0;
        case 0x3814b4u: goto label_3814b4;
        case 0x3814b8u: goto label_3814b8;
        case 0x3814bcu: goto label_3814bc;
        case 0x3814c0u: goto label_3814c0;
        case 0x3814c4u: goto label_3814c4;
        case 0x3814c8u: goto label_3814c8;
        case 0x3814ccu: goto label_3814cc;
        case 0x3814d0u: goto label_3814d0;
        case 0x3814d4u: goto label_3814d4;
        case 0x3814d8u: goto label_3814d8;
        case 0x3814dcu: goto label_3814dc;
        case 0x3814e0u: goto label_3814e0;
        case 0x3814e4u: goto label_3814e4;
        case 0x3814e8u: goto label_3814e8;
        case 0x3814ecu: goto label_3814ec;
        case 0x3814f0u: goto label_3814f0;
        case 0x3814f4u: goto label_3814f4;
        case 0x3814f8u: goto label_3814f8;
        case 0x3814fcu: goto label_3814fc;
        case 0x381500u: goto label_381500;
        case 0x381504u: goto label_381504;
        case 0x381508u: goto label_381508;
        case 0x38150cu: goto label_38150c;
        case 0x381510u: goto label_381510;
        case 0x381514u: goto label_381514;
        case 0x381518u: goto label_381518;
        case 0x38151cu: goto label_38151c;
        case 0x381520u: goto label_381520;
        case 0x381524u: goto label_381524;
        case 0x381528u: goto label_381528;
        case 0x38152cu: goto label_38152c;
        default: break;
    }

    ctx->pc = 0x380b48u;

label_380b48:
    // 0x380b48: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x380b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_380b4c:
    // 0x380b4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x380b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_380b50:
    // 0x380b50: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x380b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_380b54:
    // 0x380b54: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x380b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_380b58:
    // 0x380b58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x380b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_380b5c:
    // 0x380b5c: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x380b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_380b60:
    // 0x380b60: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x380b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_380b64:
    // 0x380b64: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x380b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_380b68:
    // 0x380b68: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x380b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_380b6c:
    // 0x380b6c: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x380b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_380b70:
    // 0x380b70: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x380b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
label_380b74:
    // 0x380b74: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x380b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
label_380b78:
    // 0x380b78: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x380b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_380b7c:
    // 0x380b7c: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x380b7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_380b80:
    // 0x380b80: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x380b80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_380b84:
    // 0x380b84: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x380b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_380b88:
    // 0x380b88: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x380b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_380b8c:
    // 0x380b8c: 0x8e510100  lw          $s1, 0x100($s2)
    ctx->pc = 0x380b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_380b90:
    // 0x380b90: 0x8c84e880  lw          $a0, -0x1780($a0)
    ctx->pc = 0x380b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961280)));
label_380b94:
    // 0x380b94: 0x8e470108  lw          $a3, 0x108($s2)
    ctx->pc = 0x380b94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_380b98:
    // 0x380b98: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x380b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_380b9c:
    // 0x380b9c: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x380b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
label_380ba0:
    // 0x380ba0: 0x24f50050  addiu       $s5, $a3, 0x50
    ctx->pc = 0x380ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_380ba4:
    // 0x380ba4: 0xae4300dc  sw          $v1, 0xDC($s2)
    ctx->pc = 0x380ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 3));
label_380ba8:
    // 0x380ba8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x380ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_380bac:
    // 0x380bac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x380bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_380bb0:
    // 0x380bb0: 0x1445000b  bne         $v0, $a1, . + 4 + (0xB << 2)
label_380bb4:
    if (ctx->pc == 0x380BB4u) {
        ctx->pc = 0x380BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BB0u;
        // 0x380bb4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380BB8u;
        goto label_380bb8;
    }
    ctx->pc = 0x380BB0u;
    {
        const bool branch_taken_0x380bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x380BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BB0u;
        // 0x380bb4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380bb0) {
            ctx->pc = 0x380BE0u;
            goto label_380be0;
        }
    }
    ctx->pc = 0x380BB8u;
label_380bb8:
    // 0x380bb8: 0x78e30050  lq          $v1, 0x50($a3)
    ctx->pc = 0x380bb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 80)));
label_380bbc:
    // 0x380bbc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x380bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_380bc0:
    // 0x380bc0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x380bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_380bc4:
    // 0x380bc4: 0x7aa20010  lq          $v0, 0x10($s5)
    ctx->pc = 0x380bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_380bc8:
    // 0x380bc8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x380bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_380bcc:
    // 0x380bcc: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x380bccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_380bd0:
    // 0x380bd0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x380bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_380bd4:
    // 0x380bd4: 0x7aa20030  lq          $v0, 0x30($s5)
    ctx->pc = 0x380bd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 48)));
label_380bd8:
    // 0x380bd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_380bdc:
    if (ctx->pc == 0x380BDCu) {
        ctx->pc = 0x380BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BD8u;
        // 0x380bdc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380BE0u;
        goto label_380be0;
    }
    ctx->pc = 0x380BD8u;
    {
        const bool branch_taken_0x380bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BD8u;
        // 0x380bdc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380bd8) {
            ctx->pc = 0x380BF0u;
            goto label_380bf0;
        }
    }
    ctx->pc = 0x380BE0u;
label_380be0:
    // 0x380be0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x380be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_380be4:
    // 0x380be4: 0xc103e64  jal         func_40F990
label_380be8:
    if (ctx->pc == 0x380BE8u) {
        ctx->pc = 0x380BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BE4u;
        // 0x380be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380BECu;
        goto label_380bec;
    }
    ctx->pc = 0x380BE4u;
    SET_GPR_U32(ctx, 31, 0x380BECu);
    ctx->pc = 0x380BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BE4u;
    // 0x380be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x380BE4u, 0x380BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BECu;
label_380bec:
    // 0x380bec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x380becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_380bf0:
    // 0x380bf0: 0xc64000ec  lwc1        $f0, 0xEC($s2)
    ctx->pc = 0x380bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380bf4:
    // 0x380bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x380bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_380bf8:
    // 0x380bf8: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x380bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_380bfc:
    // 0x380bfc: 0xc104d64  jal         func_413590
label_380c00:
    if (ctx->pc == 0x380C00u) {
        ctx->pc = 0x380C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BFCu;
        // 0x380c00: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x380C04u;
        goto label_380c04;
    }
    ctx->pc = 0x380BFCu;
    SET_GPR_U32(ctx, 31, 0x380C04u);
    ctx->pc = 0x380C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BFCu;
    // 0x380c00: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x380BFCu, 0x380C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C04u;
label_380c04:
    // 0x380c04: 0x8e460100  lw          $a2, 0x100($s2)
    ctx->pc = 0x380c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_380c08:
    // 0x380c08: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x380c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
label_380c0c:
    // 0x380c0c: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x380c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_380c10:
    // 0x380c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_380c14:
    // 0x380c14: 0x8cc50058  lw          $a1, 0x58($a2)
    ctx->pc = 0x380c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_380c18:
    // 0x380c18: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x380c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_380c1c:
    // 0x380c1c: 0x8c880074  lw          $t0, 0x74($a0)
    ctx->pc = 0x380c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_380c20:
    // 0x380c20: 0x2452823  subu        $a1, $s2, $a1
    ctx->pc = 0x380c20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_380c24:
    // 0x380c24: 0x8fa60130  lw          $a2, 0x130($sp)
    ctx->pc = 0x380c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_380c28:
    // 0x380c28: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x380c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_380c2c:
    // 0x380c2c: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x380c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_380c30:
    // 0x380c30: 0x40f809  jalr        $v0
label_380c34:
    if (ctx->pc == 0x380C34u) {
        ctx->pc = 0x380C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C30u;
        // 0x380c34: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380C38u;
        goto label_380c38;
    }
    ctx->pc = 0x380C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x380C38u);
        ctx->pc = 0x380C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C30u;
        // 0x380c34: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380C30u, 0x380C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x380C38u;
label_380c38:
    // 0x380c38: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x380c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_380c3c:
    // 0x380c3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x380c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_380c40:
    // 0x380c40: 0x2463ac78  addiu       $v1, $v1, -0x5388
    ctx->pc = 0x380c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945912));
label_380c44:
    // 0x380c44: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x380c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_380c48:
    // 0x380c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x380c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_380c4c:
    // 0x380c4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x380c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_380c50:
    // 0x380c50: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x380c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_380c54:
    // 0x380c54: 0x108001ce  beqz        $a0, . + 4 + (0x1CE << 2)
label_380c58:
    if (ctx->pc == 0x380C58u) {
        ctx->pc = 0x380C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C54u;
        // 0x380c58: 0xae4500d8  sw          $a1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380C5Cu;
        goto label_380c5c;
    }
    ctx->pc = 0x380C54u;
    {
        const bool branch_taken_0x380c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C54u;
        // 0x380c58: 0xae4500d8  sw          $a1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380c54) {
            ctx->pc = 0x381390u;
            goto label_381390;
        }
    }
    ctx->pc = 0x380C5Cu;
label_380c5c:
    // 0x380c5c: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x380c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_380c60:
    // 0x380c60: 0x104001cb  beqz        $v0, . + 4 + (0x1CB << 2)
label_380c64:
    if (ctx->pc == 0x380C64u) {
        ctx->pc = 0x380C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C60u;
        // 0x380c64: 0x27b00090  addiu       $s0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380C68u;
        goto label_380c68;
    }
    ctx->pc = 0x380C60u;
    {
        const bool branch_taken_0x380c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C60u;
        // 0x380c64: 0x27b00090  addiu       $s0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380c60) {
            ctx->pc = 0x381390u;
            goto label_381390;
        }
    }
    ctx->pc = 0x380C68u;
label_380c68:
    // 0x380c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380c6c:
    // 0x380c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_380c70:
    // 0x380c70: 0xc0bb7e6  jal         func_2EDF98
label_380c74:
    if (ctx->pc == 0x380C74u) {
        ctx->pc = 0x380C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C70u;
        // 0x380c74: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380C78u;
        goto label_380c78;
    }
    ctx->pc = 0x380C70u;
    SET_GPR_U32(ctx, 31, 0x380C78u);
    ctx->pc = 0x380C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380C70u;
    // 0x380c74: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x380C70u, 0x380C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C78u;
label_380c78:
    // 0x380c78: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x380c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_380c7c:
    // 0x380c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380c80:
    // 0x380c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_380c84:
    // 0x380c84: 0xc0bb7e6  jal         func_2EDF98
label_380c88:
    if (ctx->pc == 0x380C88u) {
        ctx->pc = 0x380C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C84u;
        // 0x380c88: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380C8Cu;
        goto label_380c8c;
    }
    ctx->pc = 0x380C84u;
    SET_GPR_U32(ctx, 31, 0x380C8Cu);
    ctx->pc = 0x380C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380C84u;
    // 0x380c88: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x380C84u, 0x380C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C8Cu;
label_380c8c:
    // 0x380c8c: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x380c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_380c90:
    // 0x380c90: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x380c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_380c94:
    // 0x380c94: 0x24560080  addiu       $s6, $v0, 0x80
    ctx->pc = 0x380c94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_380c98:
    // 0x380c98: 0x24540060  addiu       $s4, $v0, 0x60
    ctx->pc = 0x380c98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_380c9c:
    // 0x380c9c: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x380c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_380ca0:
    // 0x380ca0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x380ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_380ca4:
    // 0x380ca4: 0x42000039  di
    ctx->pc = 0x380ca4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_380ca8:
    // 0x380ca8: 0x40f  sync.p
    ctx->pc = 0x380ca8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_380cac:
    // 0x380cac: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x380cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_380cb0:
    // 0x380cb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x380cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_380cb4:
    // 0x380cb4: 0x0  nop
    ctx->pc = 0x380cb4u;
    // NOP
label_380cb8:
    // 0x380cb8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_380cbc:
    if (ctx->pc == 0x380CBCu) {
        ctx->pc = 0x380CC0u;
        goto label_380cc0;
    }
    ctx->pc = 0x380CB8u;
    {
        const bool branch_taken_0x380cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380cb8) {
            ctx->pc = 0x380CA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380ca4;
        }
    }
    ctx->pc = 0x380CC0u;
label_380cc0:
    // 0x380cc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x380cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_380cc4:
    // 0x380cc4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x380cc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_380cc8:
    // 0x380cc8: 0xdaa20010  lqc2        $vf2, 0x10($s5)
    ctx->pc = 0x380cc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_380ccc:
    // 0x380ccc: 0xdaa30020  lqc2        $vf3, 0x20($s5)
    ctx->pc = 0x380cccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
label_380cd0:
    // 0x380cd0: 0xdaa40030  lqc2        $vf4, 0x30($s5)
    ctx->pc = 0x380cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
label_380cd4:
    // 0x380cd4: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x380cd4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_380cd8:
    // 0x380cd8: 0x4bc2196e  vopmsub.xyz $vf5, $vf3, $vf2
    ctx->pc = 0x380cd8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_380cdc:
    // 0x380cdc: 0x4bc007c3  vaddw.xyz   $vf31, $vf0, $vf0w
    ctx->pc = 0x380cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_380ce0:
    // 0x380ce0: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x380ce0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_380ce4:
    // 0x380ce4: 0x4bc309ae  vopmsub.xyz $vf6, $vf1, $vf3
    ctx->pc = 0x380ce4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_380ce8:
    // 0x380ce8: 0x4be12a2a  vmul.xyzw   $vf8, $vf5, $vf1
    ctx->pc = 0x380ce8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_380cec:
    // 0x380cec: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x380cecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_380cf0:
    // 0x380cf0: 0x4bc111ee  vopmsub.xyz $vf7, $vf2, $vf1
    ctx->pc = 0x380cf0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_380cf4:
    // 0x380cf4: 0x4b050040  vaddx.x     $vf1, $vf0, $vf5x
    ctx->pc = 0x380cf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_380cf8:
    // 0x380cf8: 0x4b08403d  vadday.x    $ACC, $vf8, $vf8y
    ctx->pc = 0x380cf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_380cfc:
    // 0x380cfc: 0x4b08fa0a  vmaddz.x    $vf8, $vf31, $vf8z
    ctx->pc = 0x380cfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_380d00:
    // 0x380d00: 0x4a860040  vaddx.y     $vf1, $vf0, $vf6x
    ctx->pc = 0x380d00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_380d04:
    // 0x380d04: 0x4a470040  vaddx.z     $vf1, $vf0, $vf7x
    ctx->pc = 0x380d04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_380d08:
    // 0x380d08: 0x4b050081  vaddy.x     $vf2, $vf0, $vf5y
    ctx->pc = 0x380d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_380d0c:
    // 0x380d0c: 0x4a6803bc  vdiv        $Q, $vf0w, $vf8x
    ctx->pc = 0x380d0cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
label_380d10:
    // 0x380d10: 0x4a860081  vaddy.y     $vf2, $vf0, $vf6y
    ctx->pc = 0x380d10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_380d14:
    // 0x380d14: 0x4a470081  vaddy.z     $vf2, $vf0, $vf7y
    ctx->pc = 0x380d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_380d18:
    // 0x380d18: 0x4b0500c2  vaddz.x     $vf3, $vf0, $vf5z
    ctx->pc = 0x380d18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_380d1c:
    // 0x380d1c: 0x4a8600c2  vaddz.y     $vf3, $vf0, $vf6z
    ctx->pc = 0x380d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_380d20:
    // 0x380d20: 0x4a4700c2  vaddz.z     $vf3, $vf0, $vf7z
    ctx->pc = 0x380d20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_380d24:
    // 0x380d24: 0x4bc001bc  vmulax.xyz  $ACC, $vf0, $vf0x
    ctx->pc = 0x380d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_380d28:
    // 0x380d28: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x380d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_380d2c:
    // 0x380d2c: 0x4bc0319c  vmulq.xyz   $vf6, $vf6, $Q
    ctx->pc = 0x380d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_380d30:
    // 0x380d30: 0x4bc039dc  vmulq.xyz   $vf7, $vf7, $Q
    ctx->pc = 0x380d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
label_380d34:
    // 0x380d34: 0x4bc5226d  vmsub.xyz   $vf9, $vf4, $vf5
    ctx->pc = 0x380d34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_380d38:
    // 0x380d38: 0x4bc622ad  vmsub.xyz   $vf10, $vf4, $vf6
    ctx->pc = 0x380d38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_380d3c:
    // 0x380d3c: 0x4bc722ed  vmsub.xyz   $vf11, $vf4, $vf7
    ctx->pc = 0x380d3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
label_380d40:
    // 0x380d40: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x380d40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_380d44:
    // 0x380d44: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x380d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_380d48:
    // 0x380d48: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x380d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_380d4c:
    // 0x380d4c: 0x4b09483d  vadday.x    $ACC, $vf9, $vf9y
    ctx->pc = 0x380d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_380d50:
    // 0x380d50: 0x4b09f90a  vmaddz.x    $vf4, $vf31, $vf9z
    ctx->pc = 0x380d50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_380d54:
    // 0x380d54: 0x4a8a503c  vaddax.y    $ACC, $vf10, $vf10x
    ctx->pc = 0x380d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
label_380d58:
    // 0x380d58: 0x4a8af90a  vmaddz.y    $vf4, $vf31, $vf10z
    ctx->pc = 0x380d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_380d5c:
    // 0x380d5c: 0x4a4b583d  vadday.z    $ACC, $vf11, $vf11y
    ctx->pc = 0x380d5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
label_380d60:
    // 0x380d60: 0x4a4bf908  vmaddx.z    $vf4, $vf31, $vf11x
    ctx->pc = 0x380d60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_380d64:
    // 0x380d64: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x380d64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_380d68:
    // 0x380d68: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x380d68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
label_380d6c:
    // 0x380d6c: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x380d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
label_380d70:
    // 0x380d70: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x380d70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_380d74:
    // 0x380d74: 0x42000038  ei
    ctx->pc = 0x380d74u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_380d78:
    // 0x380d78: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x380d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_380d7c:
    // 0x380d7c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x380d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_380d80:
    // 0x380d80: 0x42000039  di
    ctx->pc = 0x380d80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_380d84:
    // 0x380d84: 0x40f  sync.p
    ctx->pc = 0x380d84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_380d88:
    // 0x380d88: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x380d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_380d8c:
    // 0x380d8c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x380d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_380d90:
    // 0x380d90: 0x0  nop
    ctx->pc = 0x380d90u;
    // NOP
label_380d94:
    // 0x380d94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_380d98:
    if (ctx->pc == 0x380D98u) {
        ctx->pc = 0x380D9Cu;
        goto label_380d9c;
    }
    ctx->pc = 0x380D94u;
    {
        const bool branch_taken_0x380d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380d94) {
            ctx->pc = 0x380D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380d80;
        }
    }
    ctx->pc = 0x380D9Cu;
label_380d9c:
    // 0x380d9c: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x380d9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_380da0:
    // 0x380da0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x380da0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_380da4:
    // 0x380da4: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x380da4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_380da8:
    // 0x380da8: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x380da8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_380dac:
    // 0x380dac: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x380dacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_380db0:
    // 0x380db0: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x380db0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_380db4:
    // 0x380db4: 0x4be5194a  vmaddz.xyzw $vf5, $vf3, $vf5z
    ctx->pc = 0x380db4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_380db8:
    // 0x380db8: 0xfa050000  sqc2        $vf5, 0x0($s0)
    ctx->pc = 0x380db8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_380dbc:
    // 0x380dbc: 0x42000038  ei
    ctx->pc = 0x380dbcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_380dc0:
    // 0x380dc0: 0x42000039  di
    ctx->pc = 0x380dc0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_380dc4:
    // 0x380dc4: 0x40f  sync.p
    ctx->pc = 0x380dc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_380dc8:
    // 0x380dc8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x380dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_380dcc:
    // 0x380dcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x380dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_380dd0:
    // 0x380dd0: 0x0  nop
    ctx->pc = 0x380dd0u;
    // NOP
label_380dd4:
    // 0x380dd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_380dd8:
    if (ctx->pc == 0x380DD8u) {
        ctx->pc = 0x380DDCu;
        goto label_380ddc;
    }
    ctx->pc = 0x380DD4u;
    {
        const bool branch_taken_0x380dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380dd4) {
            ctx->pc = 0x380DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380dc0;
        }
    }
    ctx->pc = 0x380DDCu;
label_380ddc:
    // 0x380ddc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x380ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_380de0:
    // 0x380de0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x380de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_380de4:
    // 0x380de4: 0x4bc007c3  vaddw.xyz   $vf31, $vf0, $vf0w
    ctx->pc = 0x380de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_380de8:
    // 0x380de8: 0x4a0002ff  vnop
    ctx->pc = 0x380de8u;
    // NOP operation, no action needed for VU0
label_380dec:
    // 0x380dec: 0x4a0002ff  vnop
    ctx->pc = 0x380decu;
    // NOP operation, no action needed for VU0
label_380df0:
    // 0x380df0: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x380df0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_380df4:
    // 0x380df4: 0x4b02f8ca  vmaddz.x    $vf3, $vf31, $vf2z
    ctx->pc = 0x380df4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_380df8:
    // 0x380df8: 0x4a0002ff  vnop
    ctx->pc = 0x380df8u;
    // NOP operation, no action needed for VU0
label_380dfc:
    // 0x380dfc: 0x4a0002ff  vnop
    ctx->pc = 0x380dfcu;
    // NOP operation, no action needed for VU0
label_380e00:
    // 0x380e00: 0x4a0002ff  vnop
    ctx->pc = 0x380e00u;
    // NOP operation, no action needed for VU0
label_380e04:
    // 0x380e04: 0x4a6303be  vrsqrt      $Q, $vf0w, $vf3x
    ctx->pc = 0x380e04u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_380e08:
    // 0x380e08: 0x4a0003bf  vwaitq
    ctx->pc = 0x380e08u;
    // VWAITQ (Q already resolved in this runtime)
label_380e0c:
    // 0x380e0c: 0x4bc0091c  vmulq.xyz   $vf4, $vf1, $Q
    ctx->pc = 0x380e0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_380e10:
    // 0x380e10: 0x4a0002ff  vnop
    ctx->pc = 0x380e10u;
    // NOP operation, no action needed for VU0
label_380e14:
    // 0x380e14: 0x4a0002ff  vnop
    ctx->pc = 0x380e14u;
    // NOP operation, no action needed for VU0
label_380e18:
    // 0x380e18: 0x4a0002ff  vnop
    ctx->pc = 0x380e18u;
    // NOP operation, no action needed for VU0
label_380e1c:
    // 0x380e1c: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x380e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_380e20:
    // 0x380e20: 0x42000038  ei
    ctx->pc = 0x380e20u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_380e24:
    // 0x380e24: 0x42000039  di
    ctx->pc = 0x380e24u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_380e28:
    // 0x380e28: 0x40f  sync.p
    ctx->pc = 0x380e28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_380e2c:
    // 0x380e2c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x380e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_380e30:
    // 0x380e30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x380e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_380e34:
    // 0x380e34: 0x0  nop
    ctx->pc = 0x380e34u;
    // NOP
label_380e38:
    // 0x380e38: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_380e3c:
    if (ctx->pc == 0x380E3Cu) {
        ctx->pc = 0x380E40u;
        goto label_380e40;
    }
    ctx->pc = 0x380E38u;
    {
        const bool branch_taken_0x380e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380e38) {
            ctx->pc = 0x380E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380e24;
        }
    }
    ctx->pc = 0x380E40u;
label_380e40:
    // 0x380e40: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x380e40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_380e44:
    // 0x380e44: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x380e44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_380e48:
    // 0x380e48: 0xd8820010  lqc2        $vf2, 0x10($a0)
    ctx->pc = 0x380e48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_380e4c:
    // 0x380e4c: 0xd8830020  lqc2        $vf3, 0x20($a0)
    ctx->pc = 0x380e4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_380e50:
    // 0x380e50: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x380e50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_380e54:
    // 0x380e54: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x380e54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_380e58:
    // 0x380e58: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x380e58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_380e5c:
    // 0x380e5c: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x380e5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_380e60:
    // 0x380e60: 0x4be0214b  vmaddw.xyzw $vf5, $vf4, $vf0w
    ctx->pc = 0x380e60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_380e64:
    // 0x380e64: 0xfa250000  sqc2        $vf5, 0x0($s1)
    ctx->pc = 0x380e64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_380e68:
    // 0x380e68: 0x42000038  ei
    ctx->pc = 0x380e68u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_380e6c:
    // 0x380e6c: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x380e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_380e70:
    // 0x380e70: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x380e70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380e74:
    // 0x380e74: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x380e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_380e78:
    // 0x380e78: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x380e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_380e7c:
    // 0x380e7c: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
label_380e80:
    if (ctx->pc == 0x380E80u) {
        ctx->pc = 0x380E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E7Cu;
        // 0x380e80: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E84u;
        goto label_380e84;
    }
    ctx->pc = 0x380E7Cu;
    {
        const bool branch_taken_0x380e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E7Cu;
        // 0x380e80: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e7c) {
            ctx->pc = 0x381324u;
            goto label_381324;
        }
    }
    ctx->pc = 0x380E84u;
label_380e84:
    // 0x380e84: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x380e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_380e88:
    // 0x380e88: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x380e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_380e8c:
    // 0x380e8c: 0x8faa0130  lw          $t2, 0x130($sp)
    ctx->pc = 0x380e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_380e90:
    // 0x380e90: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x380e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_380e94:
    // 0x380e94: 0x2484010c  addiu       $a0, $a0, 0x10C
    ctx->pc = 0x380e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 268));
label_380e98:
    // 0x380e98: 0x264200c0  addiu       $v0, $s2, 0xC0
    ctx->pc = 0x380e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_380e9c:
    // 0x380e9c: 0x254a0094  addiu       $t2, $t2, 0x94
    ctx->pc = 0x380e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 148));
label_380ea0:
    // 0x380ea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x380ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_380ea4:
    // 0x380ea4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x380ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_380ea8:
    // 0x380ea8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x380ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_380eac:
    // 0x380eac: 0x26510080  addiu       $s1, $s2, 0x80
    ctx->pc = 0x380eacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_380eb0:
    // 0x380eb0: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x380eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_380eb4:
    // 0x380eb4: 0xafa50138  sw          $a1, 0x138($sp)
    ctx->pc = 0x380eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 5));
label_380eb8:
    // 0x380eb8: 0xafa6013c  sw          $a2, 0x13C($sp)
    ctx->pc = 0x380eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 6));
label_380ebc:
    // 0x380ebc: 0xafaa0134  sw          $t2, 0x134($sp)
    ctx->pc = 0x380ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 10));
label_380ec0:
    // 0x380ec0: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x380ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_380ec4:
    // 0x380ec4: 0x178080  sll         $s0, $s7, 2
    ctx->pc = 0x380ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_380ec8:
    // 0x380ec8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x380ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_380ecc:
    // 0x380ecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x380eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_380ed0:
    // 0x380ed0: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x380ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_380ed4:
    // 0x380ed4: 0xc6740000  lwc1        $f20, 0x0($s3)
    ctx->pc = 0x380ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_380ed8:
    // 0x380ed8: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x380ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380edc:
    // 0x380edc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x380edcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_380ee0:
    // 0x380ee0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x380ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_380ee4:
    // 0x380ee4: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x380ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380ee8:
    // 0x380ee8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x380ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_380eec:
    // 0x380eec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x380eecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_380ef0:
    // 0x380ef0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x380ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_380ef4:
    // 0x380ef4: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x380ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380ef8:
    // 0x380ef8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x380ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380efc:
    // 0x380efc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x380efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_380f00:
    // 0x380f00: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x380f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_380f04:
    // 0x380f04: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x380f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380f08:
    // 0x380f08: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x380f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_380f0c:
    // 0x380f0c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x380f0cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_380f10:
    // 0x380f10: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x380f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_380f14:
    // 0x380f14: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x380f14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_380f18:
    // 0x380f18: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x380f18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_380f1c:
    // 0x380f1c: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x380f1cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_380f20:
    // 0x380f20: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x380f20u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_380f24:
    // 0x380f24: 0x4614ad03  div.s       $f20, $f21, $f20
    ctx->pc = 0x380f24u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_380f28:
    // 0x380f28: 0xc104d24  jal         func_413490
label_380f2c:
    if (ctx->pc == 0x380F2Cu) {
        ctx->pc = 0x380F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F28u;
        // 0x380f2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380F30u;
        goto label_380f30;
    }
    ctx->pc = 0x380F28u;
    SET_GPR_U32(ctx, 31, 0x380F30u);
    ctx->pc = 0x380F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380F28u;
    // 0x380f2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x380F28u, 0x380F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380F30u;
label_380f30:
    // 0x380f30: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x380f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_380f34:
    // 0x380f34: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x380f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_380f38:
    // 0x380f38: 0xc104d24  jal         func_413490
label_380f3c:
    if (ctx->pc == 0x380F3Cu) {
        ctx->pc = 0x380F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F38u;
        // 0x380f3c: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x380F40u;
        goto label_380f40;
    }
    ctx->pc = 0x380F38u;
    SET_GPR_U32(ctx, 31, 0x380F40u);
    ctx->pc = 0x380F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380F38u;
    // 0x380f3c: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x380F38u, 0x380F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380F40u;
label_380f40:
    // 0x380f40: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x380f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_380f44:
    // 0x380f44: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x380f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_380f48:
    // 0x380f48: 0xc104d24  jal         func_413490
label_380f4c:
    if (ctx->pc == 0x380F4Cu) {
        ctx->pc = 0x380F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380F48u;
        // 0x380f4c: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x380F50u;
        goto label_380f50;
    }
    ctx->pc = 0x380F48u;
    SET_GPR_U32(ctx, 31, 0x380F50u);
    ctx->pc = 0x380F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380F48u;
    // 0x380f4c: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x380F48u, 0x380F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380F50u;
label_380f50:
    // 0x380f50: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x380f50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_380f54:
    // 0x380f54: 0xc7a400d0  lwc1        $f4, 0xD0($sp)
    ctx->pc = 0x380f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_380f58:
    // 0x380f58: 0xc7a30120  lwc1        $f3, 0x120($sp)
    ctx->pc = 0x380f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_380f5c:
    // 0x380f5c: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x380f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_380f60:
    // 0x380f60: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x380f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_380f64:
    // 0x380f64: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x380f64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_380f68:
    // 0x380f68: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x380f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380f6c:
    // 0x380f6c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x380f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_380f70:
    // 0x380f70: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x380f70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_380f74:
    // 0x380f74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x380f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_380f78:
    // 0x380f78: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x380f78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_380f7c:
    // 0x380f7c: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x380f7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_380f80:
    // 0x380f80: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x380f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_380f84:
    // 0x380f84: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x380f84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_380f88:
    // 0x380f88: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x380f88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_380f8c:
    // 0x380f8c: 0xe7a400c0  swc1        $f4, 0xC0($sp)
    ctx->pc = 0x380f8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_380f90:
    // 0x380f90: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x380f90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_380f94:
    // 0x380f94: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x380f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_380f98:
    // 0x380f98: 0xe7a500c4  swc1        $f5, 0xC4($sp)
    ctx->pc = 0x380f98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_380f9c:
    // 0x380f9c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x380f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_380fa0:
    // 0x380fa0: 0x42000039  di
    ctx->pc = 0x380fa0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_380fa4:
    // 0x380fa4: 0x40f  sync.p
    ctx->pc = 0x380fa4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_380fa8:
    // 0x380fa8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x380fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
label_380fac:
    // 0x380fac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x380facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_380fb0:
    // 0x380fb0: 0x0  nop
    ctx->pc = 0x380fb0u;
    // NOP
label_380fb4:
    // 0x380fb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_380fb8:
    if (ctx->pc == 0x380FB8u) {
        ctx->pc = 0x380FBCu;
        goto label_380fbc;
    }
    ctx->pc = 0x380FB4u;
    {
        const bool branch_taken_0x380fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380fb4) {
            ctx->pc = 0x380FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380fa0;
        }
    }
    ctx->pc = 0x380FBCu;
label_380fbc:
    // 0x380fbc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x380fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_380fc0:
    // 0x380fc0: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x380fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_380fc4:
    // 0x380fc4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x380fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_380fc8:
    // 0x380fc8: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x380fc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_380fcc:
    // 0x380fcc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x380fccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_380fd0:
    // 0x380fd0: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x380fd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_380fd4:
    // 0x380fd4: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x380fd4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
label_380fd8:
    // 0x380fd8: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x380fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_380fdc:
    // 0x380fdc: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x380fdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_380fe0:
    // 0x380fe0: 0x4be5194a  vmaddz.xyzw $vf5, $vf3, $vf5z
    ctx->pc = 0x380fe0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_380fe4:
    // 0x380fe4: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x380fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_380fe8:
    // 0x380fe8: 0x42000038  ei
    ctx->pc = 0x380fe8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_380fec:
    // 0x380fec: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x380fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_380ff0:
    // 0x380ff0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x380ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_380ff4:
    // 0x380ff4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380ff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_380ff8:
    // 0x380ff8: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x380ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_380ffc:
    // 0x380ffc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x380ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381000:
    // 0x381000: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x381000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_381004:
    // 0x381004: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x381004u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_381008:
    // 0x381008: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x381008u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_38100c:
    // 0x38100c: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x38100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_381010:
    // 0x381010: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x381010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381014:
    // 0x381014: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x381014u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_381018:
    // 0x381018: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x381018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_38101c:
    // 0x38101c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x38101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381020:
    // 0x381020: 0xc6850004  lwc1        $f5, 0x4($s4)
    ctx->pc = 0x381020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_381024:
    // 0x381024: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x381024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_381028:
    // 0x381028: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x381028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_38102c:
    // 0x38102c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x38102cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_381030:
    // 0x381030: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x381030u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_381034:
    // 0x381034: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x381034u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_381038:
    // 0x381038: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x381038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_38103c:
    // 0x38103c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x38103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381040:
    // 0x381040: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x381040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_381044:
    // 0x381044: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x381044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_381048:
    // 0x381048: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x381048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38104c:
    // 0x38104c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x38104cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_381050:
    // 0x381050: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x381050u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_381054:
    // 0x381054: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x381054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_381058:
    // 0x381058: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x381058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_38105c:
    // 0x38105c: 0xe7a300e8  swc1        $f3, 0xE8($sp)
    ctx->pc = 0x38105cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_381060:
    // 0x381060: 0xc6670000  lwc1        $f7, 0x0($s3)
    ctx->pc = 0x381060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_381064:
    // 0x381064: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x381064u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_381068:
    // 0x381068: 0xe7a700f0  swc1        $f7, 0xF0($sp)
    ctx->pc = 0x381068u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_38106c:
    // 0x38106c: 0xc6660004  lwc1        $f6, 0x4($s3)
    ctx->pc = 0x38106cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_381070:
    // 0x381070: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x381070u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_381074:
    // 0x381074: 0xe7a600f4  swc1        $f6, 0xF4($sp)
    ctx->pc = 0x381074u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_381078:
    // 0x381078: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x381078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_38107c:
    // 0x38107c: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x38107cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_381080:
    // 0x381080: 0xe7a500f8  swc1        $f5, 0xF8($sp)
    ctx->pc = 0x381080u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_381084:
    // 0x381084: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x381084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381088:
    // 0x381088: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x381088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38108c:
    // 0x38108c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x38108cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_381090:
    // 0x381090: 0x46000242  mul.s       $f9, $f0, $f0
    ctx->pc = 0x381090u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_381094:
    // 0x381094: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x381094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_381098:
    // 0x381098: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x381098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38109c:
    // 0x38109c: 0xc6840004  lwc1        $f4, 0x4($s4)
    ctx->pc = 0x38109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3810a0:
    // 0x3810a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3810a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3810a4:
    // 0x3810a4: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x3810a4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
label_3810a8:
    // 0x3810a8: 0x46021202  mul.s       $f8, $f2, $f2
    ctx->pc = 0x3810a8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3810ac:
    // 0x3810ac: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x3810acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3810b0:
    // 0x3810b0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3810b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3810b4:
    // 0x3810b4: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x3810b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3810b8:
    // 0x3810b8: 0x46002346  mov.s       $f13, $f4
    ctx->pc = 0x3810b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[4]);
label_3810bc:
    // 0x3810bc: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x3810bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_3810c0:
    // 0x3810c0: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x3810c0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
label_3810c4:
    // 0x3810c4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3810c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3810c8:
    // 0x3810c8: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x3810c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3810cc:
    // 0x3810cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3810ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3810d0:
    // 0x3810d0: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x3810d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_3810d4:
    // 0x3810d4: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3810d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_3810d8:
    // 0x3810d8: 0x26f00001  addiu       $s0, $s7, 0x1
    ctx->pc = 0x3810d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3810dc:
    // 0x3810dc: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x3810dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_3810e0:
    // 0x3810e0: 0x460032c6  mov.s       $f11, $f6
    ctx->pc = 0x3810e0u;
    ctx->f[11] = FPU_MOV_S(ctx->f[6]);
label_3810e4:
    // 0x3810e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3810e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3810e8:
    // 0x3810e8: 0x46002a86  mov.s       $f10, $f5
    ctx->pc = 0x3810e8u;
    ctx->f[10] = FPU_MOV_S(ctx->f[5]);
label_3810ec:
    // 0x3810ec: 0x46034a40  add.s       $f9, $f9, $f3
    ctx->pc = 0x3810ecu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[3]);
label_3810f0:
    // 0x3810f0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3810f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3810f4:
    // 0x3810f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3810f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3810f8:
    // 0x3810f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3810f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3810fc:
    // 0x3810fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3810fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_381100:
    // 0x381100: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x381100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_381104:
    // 0x381104: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x381104u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_381108:
    // 0x381108: 0x46002203  div.s       $f8, $f4, $f0
    ctx->pc = 0x381108u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_38110c:
    // 0x38110c: 0x0  nop
    ctx->pc = 0x38110cu;
    // NOP
label_381110:
    // 0x381110: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x381110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381114:
    // 0x381114: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x381114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_381118:
    // 0x381118: 0x46007042  mul.s       $f1, $f14, $f0
    ctx->pc = 0x381118u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_38111c:
    // 0x38111c: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x38111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_381120:
    // 0x381120: 0x46026902  mul.s       $f4, $f13, $f2
    ctx->pc = 0x381120u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
label_381124:
    // 0x381124: 0xc4e6000c  lwc1        $f6, 0xC($a3)
    ctx->pc = 0x381124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_381128:
    // 0x381128: 0x46036142  mul.s       $f5, $f12, $f3
    ctx->pc = 0x381128u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_38112c:
    // 0x38112c: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x38112cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
label_381130:
    // 0x381130: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x381130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_381134:
    // 0x381134: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x381134u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_381138:
    // 0x381138: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x381138u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_38113c:
    // 0x38113c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x38113cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_381140:
    // 0x381140: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x381140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_381144:
    // 0x381144: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x381144u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_381148:
    // 0x381148: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x381148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_38114c:
    // 0x38114c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x38114cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_381150:
    // 0x381150: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x381150u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_381154:
    // 0x381154: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x381154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_381158:
    // 0x381158: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x381158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_38115c:
    // 0x38115c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x38115cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381160:
    // 0x381160: 0x0  nop
    ctx->pc = 0x381160u;
    // NOP
label_381164:
    // 0x381164: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_381168:
    if (ctx->pc == 0x381168u) {
        ctx->pc = 0x381168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381164u;
        // 0x381168: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38116Cu;
        goto label_38116c;
    }
    ctx->pc = 0x381164u;
    {
        const bool branch_taken_0x381164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x381164) {
            ctx->pc = 0x381168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381164u;
            // 0x381168: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381184u;
            goto label_381184;
        }
    }
    ctx->pc = 0x38116Cu;
label_38116c:
    // 0x38116c: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x38116cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381170:
    // 0x381170: 0x0  nop
    ctx->pc = 0x381170u;
    // NOP
label_381174:
    // 0x381174: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_381178:
    if (ctx->pc == 0x381178u) {
        ctx->pc = 0x381178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381174u;
        // 0x381178: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38117Cu;
        goto label_38117c;
    }
    ctx->pc = 0x381174u;
    {
        const bool branch_taken_0x381174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x381174) {
            ctx->pc = 0x381178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381174u;
            // 0x381178: 0xc4800014  lwc1        $f0, 0x14($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x381188u;
            goto label_381188;
        }
    }
    ctx->pc = 0x38117Cu;
label_38117c:
    // 0x38117c: 0x10000043  b           . + 4 + (0x43 << 2)
label_381180:
    if (ctx->pc == 0x381180u) {
        ctx->pc = 0x381180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38117Cu;
        // 0x381180: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381184u;
        goto label_381184;
    }
    ctx->pc = 0x38117Cu;
    {
        const bool branch_taken_0x38117c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38117Cu;
        // 0x381180: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38117c) {
            ctx->pc = 0x38128Cu;
            goto label_38128c;
        }
    }
    ctx->pc = 0x381184u;
label_381184:
    // 0x381184: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x381184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_381188:
    // 0x381188: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x381188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_38118c:
    // 0x38118c: 0x46007042  mul.s       $f1, $f14, $f0
    ctx->pc = 0x38118cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_381190:
    // 0x381190: 0xc4c3001c  lwc1        $f3, 0x1C($a2)
    ctx->pc = 0x381190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_381194:
    // 0x381194: 0x46026902  mul.s       $f4, $f13, $f2
    ctx->pc = 0x381194u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
label_381198:
    // 0x381198: 0xc4e60020  lwc1        $f6, 0x20($a3)
    ctx->pc = 0x381198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_38119c:
    // 0x38119c: 0x46036142  mul.s       $f5, $f12, $f3
    ctx->pc = 0x38119cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_3811a0:
    // 0x3811a0: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x3811a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
label_3811a4:
    // 0x3811a4: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x3811a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_3811a8:
    // 0x3811a8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3811a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_3811ac:
    // 0x3811ac: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x3811acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_3811b0:
    // 0x3811b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3811b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3811b4:
    // 0x3811b4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3811b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3811b8:
    // 0x3811b8: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x3811b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3811bc:
    // 0x3811bc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3811bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3811c0:
    // 0x3811c0: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x3811c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_3811c4:
    // 0x3811c4: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x3811c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_3811c8:
    // 0x3811c8: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x3811c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3811cc:
    // 0x3811cc: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x3811ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_3811d0:
    // 0x3811d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3811d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3811d4:
    // 0x3811d4: 0x0  nop
    ctx->pc = 0x3811d4u;
    // NOP
label_3811d8:
    // 0x3811d8: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3811dc:
    if (ctx->pc == 0x3811DCu) {
        ctx->pc = 0x3811DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811D8u;
        // 0x3811dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3811E0u;
        goto label_3811e0;
    }
    ctx->pc = 0x3811D8u;
    {
        const bool branch_taken_0x3811d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3811d8) {
            ctx->pc = 0x3811DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3811D8u;
            // 0x3811dc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3811F8u;
            goto label_3811f8;
        }
    }
    ctx->pc = 0x3811E0u;
label_3811e0:
    // 0x3811e0: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x3811e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3811e4:
    // 0x3811e4: 0x0  nop
    ctx->pc = 0x3811e4u;
    // NOP
label_3811e8:
    // 0x3811e8: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3811ec:
    if (ctx->pc == 0x3811ECu) {
        ctx->pc = 0x3811ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811E8u;
        // 0x3811ec: 0xc4800028  lwc1        $f0, 0x28($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3811F0u;
        goto label_3811f0;
    }
    ctx->pc = 0x3811E8u;
    {
        const bool branch_taken_0x3811e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3811e8) {
            ctx->pc = 0x3811ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3811E8u;
            // 0x3811ec: 0xc4800028  lwc1        $f0, 0x28($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3811FCu;
            goto label_3811fc;
        }
    }
    ctx->pc = 0x3811F0u;
label_3811f0:
    // 0x3811f0: 0x10000026  b           . + 4 + (0x26 << 2)
label_3811f4:
    if (ctx->pc == 0x3811F4u) {
        ctx->pc = 0x3811F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811F0u;
        // 0x3811f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3811F8u;
        goto label_3811f8;
    }
    ctx->pc = 0x3811F0u;
    {
        const bool branch_taken_0x3811f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3811F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3811F0u;
        // 0x3811f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3811f0) {
            ctx->pc = 0x38128Cu;
            goto label_38128c;
        }
    }
    ctx->pc = 0x3811F8u;
label_3811f8:
    // 0x3811f8: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3811f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3811fc:
    // 0x3811fc: 0xc4a2002c  lwc1        $f2, 0x2C($a1)
    ctx->pc = 0x3811fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_381200:
    // 0x381200: 0x46007042  mul.s       $f1, $f14, $f0
    ctx->pc = 0x381200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_381204:
    // 0x381204: 0xc4c30030  lwc1        $f3, 0x30($a2)
    ctx->pc = 0x381204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_381208:
    // 0x381208: 0x46026902  mul.s       $f4, $f13, $f2
    ctx->pc = 0x381208u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
label_38120c:
    // 0x38120c: 0xc4e60034  lwc1        $f6, 0x34($a3)
    ctx->pc = 0x38120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_381210:
    // 0x381210: 0x46036142  mul.s       $f5, $f12, $f3
    ctx->pc = 0x381210u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_381214:
    // 0x381214: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x381214u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
label_381218:
    // 0x381218: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x381218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_38121c:
    // 0x38121c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x38121cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_381220:
    // 0x381220: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x381220u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_381224:
    // 0x381224: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x381224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_381228:
    // 0x381228: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x381228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_38122c:
    // 0x38122c: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x38122cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_381230:
    // 0x381230: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x381230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_381234:
    // 0x381234: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x381234u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_381238:
    // 0x381238: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x381238u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_38123c:
    // 0x38123c: 0x46021002  mul.s       $f0, $f2, $f2
    ctx->pc = 0x38123cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_381240:
    // 0x381240: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x381240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_381244:
    // 0x381244: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x381244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381248:
    // 0x381248: 0x0  nop
    ctx->pc = 0x381248u;
    // NOP
label_38124c:
    // 0x38124c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_381250:
    if (ctx->pc == 0x381250u) {
        ctx->pc = 0x381250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38124Cu;
        // 0x381250: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381254u;
        goto label_381254;
    }
    ctx->pc = 0x38124Cu;
    {
        const bool branch_taken_0x38124c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38124c) {
            ctx->pc = 0x381250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38124Cu;
            // 0x381250: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38126Cu;
            goto label_38126c;
        }
    }
    ctx->pc = 0x381254u;
label_381254:
    // 0x381254: 0x4602b034  c.lt.s      $f22, $f2
    ctx->pc = 0x381254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_381258:
    // 0x381258: 0x0  nop
    ctx->pc = 0x381258u;
    // NOP
label_38125c:
    // 0x38125c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_381260:
    if (ctx->pc == 0x381260u) {
        ctx->pc = 0x381260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38125Cu;
        // 0x381260: 0x8faa0140  lw          $t2, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381264u;
        goto label_381264;
    }
    ctx->pc = 0x38125Cu;
    {
        const bool branch_taken_0x38125c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x381260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38125Cu;
        // 0x381260: 0x8faa0140  lw          $t2, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38125c) {
            ctx->pc = 0x381270u;
            goto label_381270;
        }
    }
    ctx->pc = 0x381264u;
label_381264:
    // 0x381264: 0x10000009  b           . + 4 + (0x9 << 2)
label_381268:
    if (ctx->pc == 0x381268u) {
        ctx->pc = 0x381268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381264u;
        // 0x381268: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38126Cu;
        goto label_38126c;
    }
    ctx->pc = 0x381264u;
    {
        const bool branch_taken_0x381264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381264u;
        // 0x381268: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381264) {
            ctx->pc = 0x38128Cu;
            goto label_38128c;
        }
    }
    ctx->pc = 0x38126Cu;
label_38126c:
    // 0x38126c: 0x8faa0140  lw          $t2, 0x140($sp)
    ctx->pc = 0x38126cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_381270:
    // 0x381270: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x381270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_381274:
    // 0x381274: 0x24e7003c  addiu       $a3, $a3, 0x3C
    ctx->pc = 0x381274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
label_381278:
    // 0x381278: 0x24c6003c  addiu       $a2, $a2, 0x3C
    ctx->pc = 0x381278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
label_38127c:
    // 0x38127c: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x38127cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
label_381280:
    // 0x381280: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x381280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_381284:
    // 0x381284: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
label_381288:
    if (ctx->pc == 0x381288u) {
        ctx->pc = 0x381288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381284u;
        // 0x381288: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38128Cu;
        goto label_38128c;
    }
    ctx->pc = 0x381284u;
    {
        const bool branch_taken_0x381284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381284u;
        // 0x381288: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381284) {
            ctx->pc = 0x381110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381110;
        }
    }
    ctx->pc = 0x38128Cu;
label_38128c:
    // 0x38128c: 0x51000020  beql        $t0, $zero, . + 4 + (0x20 << 2)
label_381290:
    if (ctx->pc == 0x381290u) {
        ctx->pc = 0x381290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38128Cu;
        // 0x381290: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381294u;
        goto label_381294;
    }
    ctx->pc = 0x38128Cu;
    {
        const bool branch_taken_0x38128c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x38128c) {
            ctx->pc = 0x381290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38128Cu;
            // 0x381290: 0x8e4300dc  lw          $v1, 0xDC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381310u;
            goto label_381310;
        }
    }
    ctx->pc = 0x381294u;
label_381294:
    // 0x381294: 0x6ba200b7  ldl         $v0, 0xB7($sp)
    ctx->pc = 0x381294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_381298:
    // 0x381298: 0x6fa200b0  ldr         $v0, 0xB0($sp)
    ctx->pc = 0x381298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_38129c:
    // 0x38129c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x38129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3812a0:
    // 0x3812a0: 0xb222ffa7  sdl         $v0, -0x59($s1)
    ctx->pc = 0x3812a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294967207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3812a4:
    // 0x3812a4: 0xb622ffa0  sdr         $v0, -0x60($s1)
    ctx->pc = 0x3812a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4294967200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3812a8:
    // 0x3812a8: 0xae23ffa8  sw          $v1, -0x58($s1)
    ctx->pc = 0x3812a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967208), GPR_U32(ctx, 3));
label_3812ac:
    // 0x3812ac: 0x6ba600c7  ldl         $a2, 0xC7($sp)
    ctx->pc = 0x3812acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3812b0:
    // 0x3812b0: 0x6fa600c0  ldr         $a2, 0xC0($sp)
    ctx->pc = 0x3812b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3812b4:
    // 0x3812b4: 0x8faa00c8  lw          $t2, 0xC8($sp)
    ctx->pc = 0x3812b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3812b8:
    // 0x3812b8: 0xb2260007  sdl         $a2, 0x7($s1)
    ctx->pc = 0x3812b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3812bc:
    // 0x3812bc: 0xb6260000  sdr         $a2, 0x0($s1)
    ctx->pc = 0x3812bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3812c0:
    // 0x3812c0: 0xae2a0008  sw          $t2, 0x8($s1)
    ctx->pc = 0x3812c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 10));
label_3812c4:
    // 0x3812c4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x3812c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_3812c8:
    // 0x3812c8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x3812c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3812cc:
    // 0x3812cc: 0x24a5ac88  addiu       $a1, $a1, -0x5378
    ctx->pc = 0x3812ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945928));
label_3812d0:
    // 0x3812d0: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x3812d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_3812d4:
    // 0x3812d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3812d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3812d8:
    // 0x3812d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3812d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3812dc:
    // 0x3812dc: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3812dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3812e0:
    // 0x3812e0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3812e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_3812e4:
    // 0x3812e4: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x3812e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_3812e8:
    // 0x3812e8: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x3812e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_3812ec:
    // 0x3812ec: 0x3c42004  sllv        $a0, $a0, $fp
    ctx->pc = 0x3812ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 30) & 0x1F));
label_3812f0:
    // 0x3812f0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3812f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3812f4:
    // 0x3812f4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3812f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_3812f8:
    // 0x3812f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3812f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3812fc:
    // 0x3812fc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3812fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_381300:
    // 0x381300: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x381300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_381304:
    // 0x381304: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x381304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_381308:
    // 0x381308: 0xafa60144  sw          $a2, 0x144($sp)
    ctx->pc = 0x381308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 6));
label_38130c:
    // 0x38130c: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x38130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_381310:
    // 0x381310: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x381310u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381314:
    // 0x381314: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x381314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_381318:
    // 0x381318: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x381318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38131c:
    // 0x38131c: 0x1440feea  bnez        $v0, . + 4 + (-0x116 << 2)
label_381320:
    if (ctx->pc == 0x381320u) {
        ctx->pc = 0x381320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38131Cu;
        // 0x381320: 0x178080  sll         $s0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381324u;
        goto label_381324;
    }
    ctx->pc = 0x38131Cu;
    {
        const bool branch_taken_0x38131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38131Cu;
        // 0x381320: 0x178080  sll         $s0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38131c) {
            ctx->pc = 0x380EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380ec8;
        }
    }
    ctx->pc = 0x381324u;
label_381324:
    // 0x381324: 0xae5e00d0  sw          $fp, 0xD0($s2)
    ctx->pc = 0x381324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 30));
label_381328:
    // 0x381328: 0x6baa0097  ldl         $t2, 0x97($sp)
    ctx->pc = 0x381328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_38132c:
    // 0x38132c: 0x6faa0090  ldr         $t2, 0x90($sp)
    ctx->pc = 0x38132cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_381330:
    // 0x381330: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x381330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_381334:
    // 0x381334: 0xb24a0007  sdl         $t2, 0x7($s2)
    ctx->pc = 0x381334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_381338:
    // 0x381338: 0xb64a0000  sdr         $t2, 0x0($s2)
    ctx->pc = 0x381338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38133c:
    // 0x38133c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x38133cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_381340:
    // 0x381340: 0x6ba500a7  ldl         $a1, 0xA7($sp)
    ctx->pc = 0x381340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_381344:
    // 0x381344: 0x6fa500a0  ldr         $a1, 0xA0($sp)
    ctx->pc = 0x381344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_381348:
    // 0x381348: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x381348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_38134c:
    // 0x38134c: 0xb2450017  sdl         $a1, 0x17($s2)
    ctx->pc = 0x38134cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_381350:
    // 0x381350: 0xb6450010  sdr         $a1, 0x10($s2)
    ctx->pc = 0x381350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_381354:
    // 0x381354: 0xae460018  sw          $a2, 0x18($s2)
    ctx->pc = 0x381354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 6));
label_381358:
    // 0x381358: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x381358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_38135c:
    // 0x38135c: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x38135cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_381360:
    // 0x381360: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x381360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_381364:
    // 0x381364: 0xb2430067  sdl         $v1, 0x67($s2)
    ctx->pc = 0x381364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_381368:
    // 0x381368: 0xb6430060  sdr         $v1, 0x60($s2)
    ctx->pc = 0x381368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38136c:
    // 0x38136c: 0xae440068  sw          $a0, 0x68($s2)
    ctx->pc = 0x38136cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 4));
label_381370:
    // 0x381370: 0x6aca0007  ldl         $t2, 0x7($s6)
    ctx->pc = 0x381370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_381374:
    // 0x381374: 0x6eca0000  ldr         $t2, 0x0($s6)
    ctx->pc = 0x381374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_381378:
    // 0x381378: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x381378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_38137c:
    // 0x38137c: 0xb24a0077  sdl         $t2, 0x77($s2)
    ctx->pc = 0x38137cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_381380:
    // 0x381380: 0xb64a0070  sdr         $t2, 0x70($s2)
    ctx->pc = 0x381380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_381384:
    // 0x381384: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x381384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_381388:
    // 0x381388: 0x10000003  b           . + 4 + (0x3 << 2)
label_38138c:
    if (ctx->pc == 0x38138Cu) {
        ctx->pc = 0x38138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381388u;
        // 0x38138c: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381390u;
        goto label_381390;
    }
    ctx->pc = 0x381388u;
    {
        const bool branch_taken_0x381388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381388u;
        // 0x38138c: 0x8e4300d0  lw          $v1, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381388) {
            ctx->pc = 0x381398u;
            goto label_381398;
        }
    }
    ctx->pc = 0x381390u;
label_381390:
    // 0x381390: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x381390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
label_381394:
    // 0x381394: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x381394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_381398:
    // 0x381398: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x381398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_38139c:
    // 0x38139c: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x38139cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_3813a0:
    // 0x3813a0: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x3813a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_3813a4:
    // 0x3813a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3813a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3813a8:
    // 0x3813a8: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x3813a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_3813ac:
    // 0x3813ac: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x3813acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_3813b0:
    // 0x3813b0: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x3813b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3813b4:
    // 0x3813b4: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x3813b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3813b8:
    // 0x3813b8: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x3813b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3813bc:
    // 0x3813bc: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x3813bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3813c0:
    // 0x3813c0: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x3813c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3813c4:
    // 0x3813c4: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x3813c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_3813c8:
    // 0x3813c8: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x3813c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3813cc:
    // 0x3813cc: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x3813ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3813d0:
    // 0x3813d0: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x3813d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3813d4:
    // 0x3813d4: 0x3e00008  jr          $ra
label_3813d8:
    if (ctx->pc == 0x3813D8u) {
        ctx->pc = 0x3813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813D4u;
        // 0x3813d8: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3813DCu;
        goto label_3813dc;
    }
    ctx->pc = 0x3813D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813D4u;
        // 0x3813d8: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3813D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3813DCu;
label_3813dc:
    // 0x3813dc: 0x0  nop
    ctx->pc = 0x3813dcu;
    // NOP
label_3813e0:
    // 0x3813e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3813e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3813e4:
    // 0x3813e4: 0x3e00008  jr          $ra
label_3813e8:
    if (ctx->pc == 0x3813E8u) {
        ctx->pc = 0x3813E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813E4u;
        // 0x3813e8: 0xac45005c  sw          $a1, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3813ECu;
        goto label_3813ec;
    }
    ctx->pc = 0x3813E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3813E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813E4u;
        // 0x3813e8: 0xac45005c  sw          $a1, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3813E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3813ECu;
label_3813ec:
    // 0x3813ec: 0x0  nop
    ctx->pc = 0x3813ecu;
    // NOP
label_3813f0:
    // 0x3813f0: 0x3e00008  jr          $ra
label_3813f4:
    if (ctx->pc == 0x3813F4u) {
        ctx->pc = 0x3813F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813F0u;
        // 0x3813f4: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3813F8u;
        goto label_3813f8;
    }
    ctx->pc = 0x3813F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3813F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813F0u;
        // 0x3813f4: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3813F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3813F8u;
label_3813f8:
    // 0x3813f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3813f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3813fc:
    // 0x3813fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3813fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_381400:
    // 0x381400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x381400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381404:
    // 0x381404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_381408:
    // 0x381408: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x381408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38140c:
    // 0x38140c: 0xc0e0702  jal         func_381C08
label_381410:
    if (ctx->pc == 0x381410u) {
        ctx->pc = 0x381410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38140Cu;
        // 0x381410: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381414u;
        goto label_381414;
    }
    ctx->pc = 0x38140Cu;
    SET_GPR_U32(ctx, 31, 0x381414u);
    ctx->pc = 0x381410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38140Cu;
    // 0x381410: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381C08u, 0x38140Cu, 0x381414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381414u;
label_381414:
    // 0x381414: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x381414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_381418:
    // 0x381418: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x381418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38141c:
    // 0x38141c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38141cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_381420:
    // 0x381420: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381424:
    // 0x381424: 0x3e00008  jr          $ra
label_381428:
    if (ctx->pc == 0x381428u) {
        ctx->pc = 0x381428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381424u;
        // 0x381428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38142Cu;
        goto label_38142c;
    }
    ctx->pc = 0x381424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381424u;
        // 0x381428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38142Cu;
label_38142c:
    // 0x38142c: 0x0  nop
    ctx->pc = 0x38142cu;
    // NOP
label_381430:
    // 0x381430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_381434:
    // 0x381434: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x381434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_381438:
    // 0x381438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38143c:
    // 0x38143c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38143cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381440:
    // 0x381440: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x381440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_381444:
    // 0x381444: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_381448:
    if (ctx->pc == 0x381448u) {
        ctx->pc = 0x381448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381444u;
        // 0x381448: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38144Cu;
        goto label_38144c;
    }
    ctx->pc = 0x381444u;
    {
        const bool branch_taken_0x381444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x381448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381444u;
        // 0x381448: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381444) {
            ctx->pc = 0x381458u;
            goto label_381458;
        }
    }
    ctx->pc = 0x38144Cu;
label_38144c:
    // 0x38144c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x38144cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_381450:
    // 0x381450: 0x40f809  jalr        $v0
label_381454:
    if (ctx->pc == 0x381454u) {
        ctx->pc = 0x381458u;
        goto label_381458;
    }
    ctx->pc = 0x381450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x381458u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381450u, 0x381458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x381458u;
label_381458:
    // 0x381458: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x381458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38145c:
    // 0x38145c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38145cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_381460:
    // 0x381460: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x381460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_381464:
    // 0x381464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_381468:
    // 0x381468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38146c:
    // 0x38146c: 0x3e00008  jr          $ra
label_381470:
    if (ctx->pc == 0x381470u) {
        ctx->pc = 0x381470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38146Cu;
        // 0x381470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381474u;
        goto label_381474;
    }
    ctx->pc = 0x38146Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38146Cu;
        // 0x381470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38146Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381474u;
label_381474:
    // 0x381474: 0x0  nop
    ctx->pc = 0x381474u;
    // NOP
label_381478:
    // 0x381478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x381478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38147c:
    // 0x38147c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38147cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_381480:
    // 0x381480: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x381480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_381484:
    // 0x381484: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x381484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_381488:
    // 0x381488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38148c:
    // 0x38148c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38148cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_381490:
    // 0x381490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_381494:
    // 0x381494: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x381494u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_381498:
    // 0x381498: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x381498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_38149c:
    // 0x38149c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38149cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3814a0:
    // 0x3814a0: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x3814a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_3814a4:
    // 0x3814a4: 0x34a50124  ori         $a1, $a1, 0x124
    ctx->pc = 0x3814a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)292);
label_3814a8:
    // 0x3814a8: 0x2490000f  addiu       $s0, $a0, 0xF
    ctx->pc = 0x3814a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_3814ac:
    // 0x3814ac: 0x40f809  jalr        $v0
label_3814b0:
    if (ctx->pc == 0x3814B0u) {
        ctx->pc = 0x3814B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814ACu;
        // 0x3814b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3814B4u;
        goto label_3814b4;
    }
    ctx->pc = 0x3814ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3814B4u);
        ctx->pc = 0x3814B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814ACu;
        // 0x3814b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3814ACu, 0x3814B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3814B4u;
label_3814b4:
    // 0x3814b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3814b8:
    if (ctx->pc == 0x3814B8u) {
        ctx->pc = 0x3814B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814B4u;
        // 0x3814b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3814BCu;
        goto label_3814bc;
    }
    ctx->pc = 0x3814B4u;
    {
        const bool branch_taken_0x3814b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3814B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814B4u;
        // 0x3814b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3814b4) {
            ctx->pc = 0x3814F0u;
            goto label_3814f0;
        }
    }
    ctx->pc = 0x3814BCu;
label_3814bc:
    // 0x3814bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3814bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3814c0:
    // 0x3814c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3814c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3814c4:
    // 0x3814c4: 0xc0bb7e6  jal         func_2EDF98
label_3814c8:
    if (ctx->pc == 0x3814C8u) {
        ctx->pc = 0x3814C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814C4u;
        // 0x3814c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3814CCu;
        goto label_3814cc;
    }
    ctx->pc = 0x3814C4u;
    SET_GPR_U32(ctx, 31, 0x3814CCu);
    ctx->pc = 0x3814C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3814C4u;
    // 0x3814c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3814C4u, 0x3814CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3814CCu;
label_3814cc:
    // 0x3814cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3814ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3814d0:
    // 0x3814d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3814d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3814d4:
    // 0x3814d4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3814d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_3814d8:
    // 0x3814d8: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x3814d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_3814dc:
    // 0x3814dc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x3814dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_3814e0:
    // 0x3814e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3814e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3814e4:
    // 0x3814e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3814e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3814e8:
    // 0x3814e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3814ec:
    if (ctx->pc == 0x3814ECu) {
        ctx->pc = 0x3814ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814E8u;
        // 0x3814ec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3814F0u;
        goto label_3814f0;
    }
    ctx->pc = 0x3814E8u;
    {
        const bool branch_taken_0x3814e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3814ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3814E8u;
        // 0x3814ec: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3814e8) {
            ctx->pc = 0x381518u;
            goto label_381518;
        }
    }
    ctx->pc = 0x3814F0u;
label_3814f0:
    // 0x3814f0: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x3814f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_3814f4:
    // 0x3814f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3814f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3814f8:
    // 0x3814f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3814f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3814fc:
    // 0x3814fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3814fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381500:
    // 0x381500: 0xc1035f6  jal         func_40D7D8
label_381504:
    if (ctx->pc == 0x381504u) {
        ctx->pc = 0x381504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381500u;
        // 0x381504: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x381508u;
        goto label_381508;
    }
    ctx->pc = 0x381500u;
    SET_GPR_U32(ctx, 31, 0x381508u);
    ctx->pc = 0x381504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381500u;
    // 0x381504: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x381500u, 0x381508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381508u;
label_381508:
    // 0x381508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x381508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38150c:
    // 0x38150c: 0xc103628  jal         func_40D8A0
label_381510:
    if (ctx->pc == 0x381510u) {
        ctx->pc = 0x381510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38150Cu;
        // 0x381510: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381514u;
        goto label_381514;
    }
    ctx->pc = 0x38150Cu;
    SET_GPR_U32(ctx, 31, 0x381514u);
    ctx->pc = 0x381510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38150Cu;
    // 0x381510: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38150Cu, 0x381514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381514u;
label_381514:
    // 0x381514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x381514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381518:
    // 0x381518: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x381518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38151c:
    // 0x38151c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38151cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_381520:
    // 0x381520: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x381520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_381524:
    // 0x381524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_381528:
    // 0x381528: 0x3e00008  jr          $ra
label_38152c:
    if (ctx->pc == 0x38152Cu) {
        ctx->pc = 0x38152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381528u;
        // 0x38152c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x381530u;
        goto label_fallthrough_0x381528;
    }
    ctx->pc = 0x381528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381528u;
        // 0x38152c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x381528:
    ctx->pc = 0x381530u;
}
