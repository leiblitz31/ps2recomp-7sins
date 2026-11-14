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

// Function: sub_00119B80
// Address: 0x119b80 - 0x11a6e0
void sub_00119B80_0x119b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119B80_0x119b80");
#endif

    switch (ctx->pc) {
        case 0x119b80u: goto label_119b80;
        case 0x119b84u: goto label_119b84;
        case 0x119b88u: goto label_119b88;
        case 0x119b8cu: goto label_119b8c;
        case 0x119b90u: goto label_119b90;
        case 0x119b94u: goto label_119b94;
        case 0x119b98u: goto label_119b98;
        case 0x119b9cu: goto label_119b9c;
        case 0x119ba0u: goto label_119ba0;
        case 0x119ba4u: goto label_119ba4;
        case 0x119ba8u: goto label_119ba8;
        case 0x119bacu: goto label_119bac;
        case 0x119bb0u: goto label_119bb0;
        case 0x119bb4u: goto label_119bb4;
        case 0x119bb8u: goto label_119bb8;
        case 0x119bbcu: goto label_119bbc;
        case 0x119bc0u: goto label_119bc0;
        case 0x119bc4u: goto label_119bc4;
        case 0x119bc8u: goto label_119bc8;
        case 0x119bccu: goto label_119bcc;
        case 0x119bd0u: goto label_119bd0;
        case 0x119bd4u: goto label_119bd4;
        case 0x119bd8u: goto label_119bd8;
        case 0x119bdcu: goto label_119bdc;
        case 0x119be0u: goto label_119be0;
        case 0x119be4u: goto label_119be4;
        case 0x119be8u: goto label_119be8;
        case 0x119becu: goto label_119bec;
        case 0x119bf0u: goto label_119bf0;
        case 0x119bf4u: goto label_119bf4;
        case 0x119bf8u: goto label_119bf8;
        case 0x119bfcu: goto label_119bfc;
        case 0x119c00u: goto label_119c00;
        case 0x119c04u: goto label_119c04;
        case 0x119c08u: goto label_119c08;
        case 0x119c0cu: goto label_119c0c;
        case 0x119c10u: goto label_119c10;
        case 0x119c14u: goto label_119c14;
        case 0x119c18u: goto label_119c18;
        case 0x119c1cu: goto label_119c1c;
        case 0x119c20u: goto label_119c20;
        case 0x119c24u: goto label_119c24;
        case 0x119c28u: goto label_119c28;
        case 0x119c2cu: goto label_119c2c;
        case 0x119c30u: goto label_119c30;
        case 0x119c34u: goto label_119c34;
        case 0x119c38u: goto label_119c38;
        case 0x119c3cu: goto label_119c3c;
        case 0x119c40u: goto label_119c40;
        case 0x119c44u: goto label_119c44;
        case 0x119c48u: goto label_119c48;
        case 0x119c4cu: goto label_119c4c;
        case 0x119c50u: goto label_119c50;
        case 0x119c54u: goto label_119c54;
        case 0x119c58u: goto label_119c58;
        case 0x119c5cu: goto label_119c5c;
        case 0x119c60u: goto label_119c60;
        case 0x119c64u: goto label_119c64;
        case 0x119c68u: goto label_119c68;
        case 0x119c6cu: goto label_119c6c;
        case 0x119c70u: goto label_119c70;
        case 0x119c74u: goto label_119c74;
        case 0x119c78u: goto label_119c78;
        case 0x119c7cu: goto label_119c7c;
        case 0x119c80u: goto label_119c80;
        case 0x119c84u: goto label_119c84;
        case 0x119c88u: goto label_119c88;
        case 0x119c8cu: goto label_119c8c;
        case 0x119c90u: goto label_119c90;
        case 0x119c94u: goto label_119c94;
        case 0x119c98u: goto label_119c98;
        case 0x119c9cu: goto label_119c9c;
        case 0x119ca0u: goto label_119ca0;
        case 0x119ca4u: goto label_119ca4;
        case 0x119ca8u: goto label_119ca8;
        case 0x119cacu: goto label_119cac;
        case 0x119cb0u: goto label_119cb0;
        case 0x119cb4u: goto label_119cb4;
        case 0x119cb8u: goto label_119cb8;
        case 0x119cbcu: goto label_119cbc;
        case 0x119cc0u: goto label_119cc0;
        case 0x119cc4u: goto label_119cc4;
        case 0x119cc8u: goto label_119cc8;
        case 0x119cccu: goto label_119ccc;
        case 0x119cd0u: goto label_119cd0;
        case 0x119cd4u: goto label_119cd4;
        case 0x119cd8u: goto label_119cd8;
        case 0x119cdcu: goto label_119cdc;
        case 0x119ce0u: goto label_119ce0;
        case 0x119ce4u: goto label_119ce4;
        case 0x119ce8u: goto label_119ce8;
        case 0x119cecu: goto label_119cec;
        case 0x119cf0u: goto label_119cf0;
        case 0x119cf4u: goto label_119cf4;
        case 0x119cf8u: goto label_119cf8;
        case 0x119cfcu: goto label_119cfc;
        case 0x119d00u: goto label_119d00;
        case 0x119d04u: goto label_119d04;
        case 0x119d08u: goto label_119d08;
        case 0x119d0cu: goto label_119d0c;
        case 0x119d10u: goto label_119d10;
        case 0x119d14u: goto label_119d14;
        case 0x119d18u: goto label_119d18;
        case 0x119d1cu: goto label_119d1c;
        case 0x119d20u: goto label_119d20;
        case 0x119d24u: goto label_119d24;
        case 0x119d28u: goto label_119d28;
        case 0x119d2cu: goto label_119d2c;
        case 0x119d30u: goto label_119d30;
        case 0x119d34u: goto label_119d34;
        case 0x119d38u: goto label_119d38;
        case 0x119d3cu: goto label_119d3c;
        case 0x119d40u: goto label_119d40;
        case 0x119d44u: goto label_119d44;
        case 0x119d48u: goto label_119d48;
        case 0x119d4cu: goto label_119d4c;
        case 0x119d50u: goto label_119d50;
        case 0x119d54u: goto label_119d54;
        case 0x119d58u: goto label_119d58;
        case 0x119d5cu: goto label_119d5c;
        case 0x119d60u: goto label_119d60;
        case 0x119d64u: goto label_119d64;
        case 0x119d68u: goto label_119d68;
        case 0x119d6cu: goto label_119d6c;
        case 0x119d70u: goto label_119d70;
        case 0x119d74u: goto label_119d74;
        case 0x119d78u: goto label_119d78;
        case 0x119d7cu: goto label_119d7c;
        case 0x119d80u: goto label_119d80;
        case 0x119d84u: goto label_119d84;
        case 0x119d88u: goto label_119d88;
        case 0x119d8cu: goto label_119d8c;
        case 0x119d90u: goto label_119d90;
        case 0x119d94u: goto label_119d94;
        case 0x119d98u: goto label_119d98;
        case 0x119d9cu: goto label_119d9c;
        case 0x119da0u: goto label_119da0;
        case 0x119da4u: goto label_119da4;
        case 0x119da8u: goto label_119da8;
        case 0x119dacu: goto label_119dac;
        case 0x119db0u: goto label_119db0;
        case 0x119db4u: goto label_119db4;
        case 0x119db8u: goto label_119db8;
        case 0x119dbcu: goto label_119dbc;
        case 0x119dc0u: goto label_119dc0;
        case 0x119dc4u: goto label_119dc4;
        case 0x119dc8u: goto label_119dc8;
        case 0x119dccu: goto label_119dcc;
        case 0x119dd0u: goto label_119dd0;
        case 0x119dd4u: goto label_119dd4;
        case 0x119dd8u: goto label_119dd8;
        case 0x119ddcu: goto label_119ddc;
        case 0x119de0u: goto label_119de0;
        case 0x119de4u: goto label_119de4;
        case 0x119de8u: goto label_119de8;
        case 0x119decu: goto label_119dec;
        case 0x119df0u: goto label_119df0;
        case 0x119df4u: goto label_119df4;
        case 0x119df8u: goto label_119df8;
        case 0x119dfcu: goto label_119dfc;
        case 0x119e00u: goto label_119e00;
        case 0x119e04u: goto label_119e04;
        case 0x119e08u: goto label_119e08;
        case 0x119e0cu: goto label_119e0c;
        case 0x119e10u: goto label_119e10;
        case 0x119e14u: goto label_119e14;
        case 0x119e18u: goto label_119e18;
        case 0x119e1cu: goto label_119e1c;
        case 0x119e20u: goto label_119e20;
        case 0x119e24u: goto label_119e24;
        case 0x119e28u: goto label_119e28;
        case 0x119e2cu: goto label_119e2c;
        case 0x119e30u: goto label_119e30;
        case 0x119e34u: goto label_119e34;
        case 0x119e38u: goto label_119e38;
        case 0x119e3cu: goto label_119e3c;
        case 0x119e40u: goto label_119e40;
        case 0x119e44u: goto label_119e44;
        case 0x119e48u: goto label_119e48;
        case 0x119e4cu: goto label_119e4c;
        case 0x119e50u: goto label_119e50;
        case 0x119e54u: goto label_119e54;
        case 0x119e58u: goto label_119e58;
        case 0x119e5cu: goto label_119e5c;
        case 0x119e60u: goto label_119e60;
        case 0x119e64u: goto label_119e64;
        case 0x119e68u: goto label_119e68;
        case 0x119e6cu: goto label_119e6c;
        case 0x119e70u: goto label_119e70;
        case 0x119e74u: goto label_119e74;
        case 0x119e78u: goto label_119e78;
        case 0x119e7cu: goto label_119e7c;
        case 0x119e80u: goto label_119e80;
        case 0x119e84u: goto label_119e84;
        case 0x119e88u: goto label_119e88;
        case 0x119e8cu: goto label_119e8c;
        case 0x119e90u: goto label_119e90;
        case 0x119e94u: goto label_119e94;
        case 0x119e98u: goto label_119e98;
        case 0x119e9cu: goto label_119e9c;
        case 0x119ea0u: goto label_119ea0;
        case 0x119ea4u: goto label_119ea4;
        case 0x119ea8u: goto label_119ea8;
        case 0x119eacu: goto label_119eac;
        case 0x119eb0u: goto label_119eb0;
        case 0x119eb4u: goto label_119eb4;
        case 0x119eb8u: goto label_119eb8;
        case 0x119ebcu: goto label_119ebc;
        case 0x119ec0u: goto label_119ec0;
        case 0x119ec4u: goto label_119ec4;
        case 0x119ec8u: goto label_119ec8;
        case 0x119eccu: goto label_119ecc;
        case 0x119ed0u: goto label_119ed0;
        case 0x119ed4u: goto label_119ed4;
        case 0x119ed8u: goto label_119ed8;
        case 0x119edcu: goto label_119edc;
        case 0x119ee0u: goto label_119ee0;
        case 0x119ee4u: goto label_119ee4;
        case 0x119ee8u: goto label_119ee8;
        case 0x119eecu: goto label_119eec;
        case 0x119ef0u: goto label_119ef0;
        case 0x119ef4u: goto label_119ef4;
        case 0x119ef8u: goto label_119ef8;
        case 0x119efcu: goto label_119efc;
        case 0x119f00u: goto label_119f00;
        case 0x119f04u: goto label_119f04;
        case 0x119f08u: goto label_119f08;
        case 0x119f0cu: goto label_119f0c;
        case 0x119f10u: goto label_119f10;
        case 0x119f14u: goto label_119f14;
        case 0x119f18u: goto label_119f18;
        case 0x119f1cu: goto label_119f1c;
        case 0x119f20u: goto label_119f20;
        case 0x119f24u: goto label_119f24;
        case 0x119f28u: goto label_119f28;
        case 0x119f2cu: goto label_119f2c;
        case 0x119f30u: goto label_119f30;
        case 0x119f34u: goto label_119f34;
        case 0x119f38u: goto label_119f38;
        case 0x119f3cu: goto label_119f3c;
        case 0x119f40u: goto label_119f40;
        case 0x119f44u: goto label_119f44;
        case 0x119f48u: goto label_119f48;
        case 0x119f4cu: goto label_119f4c;
        case 0x119f50u: goto label_119f50;
        case 0x119f54u: goto label_119f54;
        case 0x119f58u: goto label_119f58;
        case 0x119f5cu: goto label_119f5c;
        case 0x119f60u: goto label_119f60;
        case 0x119f64u: goto label_119f64;
        case 0x119f68u: goto label_119f68;
        case 0x119f6cu: goto label_119f6c;
        case 0x119f70u: goto label_119f70;
        case 0x119f74u: goto label_119f74;
        case 0x119f78u: goto label_119f78;
        case 0x119f7cu: goto label_119f7c;
        case 0x119f80u: goto label_119f80;
        case 0x119f84u: goto label_119f84;
        case 0x119f88u: goto label_119f88;
        case 0x119f8cu: goto label_119f8c;
        case 0x119f90u: goto label_119f90;
        case 0x119f94u: goto label_119f94;
        case 0x119f98u: goto label_119f98;
        case 0x119f9cu: goto label_119f9c;
        case 0x119fa0u: goto label_119fa0;
        case 0x119fa4u: goto label_119fa4;
        case 0x119fa8u: goto label_119fa8;
        case 0x119facu: goto label_119fac;
        case 0x119fb0u: goto label_119fb0;
        case 0x119fb4u: goto label_119fb4;
        case 0x119fb8u: goto label_119fb8;
        case 0x119fbcu: goto label_119fbc;
        case 0x119fc0u: goto label_119fc0;
        case 0x119fc4u: goto label_119fc4;
        case 0x119fc8u: goto label_119fc8;
        case 0x119fccu: goto label_119fcc;
        case 0x119fd0u: goto label_119fd0;
        case 0x119fd4u: goto label_119fd4;
        case 0x119fd8u: goto label_119fd8;
        case 0x119fdcu: goto label_119fdc;
        case 0x119fe0u: goto label_119fe0;
        case 0x119fe4u: goto label_119fe4;
        case 0x119fe8u: goto label_119fe8;
        case 0x119fecu: goto label_119fec;
        case 0x119ff0u: goto label_119ff0;
        case 0x119ff4u: goto label_119ff4;
        case 0x119ff8u: goto label_119ff8;
        case 0x119ffcu: goto label_119ffc;
        case 0x11a000u: goto label_11a000;
        case 0x11a004u: goto label_11a004;
        case 0x11a008u: goto label_11a008;
        case 0x11a00cu: goto label_11a00c;
        case 0x11a010u: goto label_11a010;
        case 0x11a014u: goto label_11a014;
        case 0x11a018u: goto label_11a018;
        case 0x11a01cu: goto label_11a01c;
        case 0x11a020u: goto label_11a020;
        case 0x11a024u: goto label_11a024;
        case 0x11a028u: goto label_11a028;
        case 0x11a02cu: goto label_11a02c;
        case 0x11a030u: goto label_11a030;
        case 0x11a034u: goto label_11a034;
        case 0x11a038u: goto label_11a038;
        case 0x11a03cu: goto label_11a03c;
        case 0x11a040u: goto label_11a040;
        case 0x11a044u: goto label_11a044;
        case 0x11a048u: goto label_11a048;
        case 0x11a04cu: goto label_11a04c;
        case 0x11a050u: goto label_11a050;
        case 0x11a054u: goto label_11a054;
        case 0x11a058u: goto label_11a058;
        case 0x11a05cu: goto label_11a05c;
        case 0x11a060u: goto label_11a060;
        case 0x11a064u: goto label_11a064;
        case 0x11a068u: goto label_11a068;
        case 0x11a06cu: goto label_11a06c;
        case 0x11a070u: goto label_11a070;
        case 0x11a074u: goto label_11a074;
        case 0x11a078u: goto label_11a078;
        case 0x11a07cu: goto label_11a07c;
        case 0x11a080u: goto label_11a080;
        case 0x11a084u: goto label_11a084;
        case 0x11a088u: goto label_11a088;
        case 0x11a08cu: goto label_11a08c;
        case 0x11a090u: goto label_11a090;
        case 0x11a094u: goto label_11a094;
        case 0x11a098u: goto label_11a098;
        case 0x11a09cu: goto label_11a09c;
        case 0x11a0a0u: goto label_11a0a0;
        case 0x11a0a4u: goto label_11a0a4;
        case 0x11a0a8u: goto label_11a0a8;
        case 0x11a0acu: goto label_11a0ac;
        case 0x11a0b0u: goto label_11a0b0;
        case 0x11a0b4u: goto label_11a0b4;
        case 0x11a0b8u: goto label_11a0b8;
        case 0x11a0bcu: goto label_11a0bc;
        case 0x11a0c0u: goto label_11a0c0;
        case 0x11a0c4u: goto label_11a0c4;
        case 0x11a0c8u: goto label_11a0c8;
        case 0x11a0ccu: goto label_11a0cc;
        case 0x11a0d0u: goto label_11a0d0;
        case 0x11a0d4u: goto label_11a0d4;
        case 0x11a0d8u: goto label_11a0d8;
        case 0x11a0dcu: goto label_11a0dc;
        case 0x11a0e0u: goto label_11a0e0;
        case 0x11a0e4u: goto label_11a0e4;
        case 0x11a0e8u: goto label_11a0e8;
        case 0x11a0ecu: goto label_11a0ec;
        case 0x11a0f0u: goto label_11a0f0;
        case 0x11a0f4u: goto label_11a0f4;
        case 0x11a0f8u: goto label_11a0f8;
        case 0x11a0fcu: goto label_11a0fc;
        case 0x11a100u: goto label_11a100;
        case 0x11a104u: goto label_11a104;
        case 0x11a108u: goto label_11a108;
        case 0x11a10cu: goto label_11a10c;
        case 0x11a110u: goto label_11a110;
        case 0x11a114u: goto label_11a114;
        case 0x11a118u: goto label_11a118;
        case 0x11a11cu: goto label_11a11c;
        case 0x11a120u: goto label_11a120;
        case 0x11a124u: goto label_11a124;
        case 0x11a128u: goto label_11a128;
        case 0x11a12cu: goto label_11a12c;
        case 0x11a130u: goto label_11a130;
        case 0x11a134u: goto label_11a134;
        case 0x11a138u: goto label_11a138;
        case 0x11a13cu: goto label_11a13c;
        case 0x11a140u: goto label_11a140;
        case 0x11a144u: goto label_11a144;
        case 0x11a148u: goto label_11a148;
        case 0x11a14cu: goto label_11a14c;
        case 0x11a150u: goto label_11a150;
        case 0x11a154u: goto label_11a154;
        case 0x11a158u: goto label_11a158;
        case 0x11a15cu: goto label_11a15c;
        case 0x11a160u: goto label_11a160;
        case 0x11a164u: goto label_11a164;
        case 0x11a168u: goto label_11a168;
        case 0x11a16cu: goto label_11a16c;
        case 0x11a170u: goto label_11a170;
        case 0x11a174u: goto label_11a174;
        case 0x11a178u: goto label_11a178;
        case 0x11a17cu: goto label_11a17c;
        case 0x11a180u: goto label_11a180;
        case 0x11a184u: goto label_11a184;
        case 0x11a188u: goto label_11a188;
        case 0x11a18cu: goto label_11a18c;
        case 0x11a190u: goto label_11a190;
        case 0x11a194u: goto label_11a194;
        case 0x11a198u: goto label_11a198;
        case 0x11a19cu: goto label_11a19c;
        case 0x11a1a0u: goto label_11a1a0;
        case 0x11a1a4u: goto label_11a1a4;
        case 0x11a1a8u: goto label_11a1a8;
        case 0x11a1acu: goto label_11a1ac;
        case 0x11a1b0u: goto label_11a1b0;
        case 0x11a1b4u: goto label_11a1b4;
        case 0x11a1b8u: goto label_11a1b8;
        case 0x11a1bcu: goto label_11a1bc;
        case 0x11a1c0u: goto label_11a1c0;
        case 0x11a1c4u: goto label_11a1c4;
        case 0x11a1c8u: goto label_11a1c8;
        case 0x11a1ccu: goto label_11a1cc;
        case 0x11a1d0u: goto label_11a1d0;
        case 0x11a1d4u: goto label_11a1d4;
        case 0x11a1d8u: goto label_11a1d8;
        case 0x11a1dcu: goto label_11a1dc;
        case 0x11a1e0u: goto label_11a1e0;
        case 0x11a1e4u: goto label_11a1e4;
        case 0x11a1e8u: goto label_11a1e8;
        case 0x11a1ecu: goto label_11a1ec;
        case 0x11a1f0u: goto label_11a1f0;
        case 0x11a1f4u: goto label_11a1f4;
        case 0x11a1f8u: goto label_11a1f8;
        case 0x11a1fcu: goto label_11a1fc;
        case 0x11a200u: goto label_11a200;
        case 0x11a204u: goto label_11a204;
        case 0x11a208u: goto label_11a208;
        case 0x11a20cu: goto label_11a20c;
        case 0x11a210u: goto label_11a210;
        case 0x11a214u: goto label_11a214;
        case 0x11a218u: goto label_11a218;
        case 0x11a21cu: goto label_11a21c;
        case 0x11a220u: goto label_11a220;
        case 0x11a224u: goto label_11a224;
        case 0x11a228u: goto label_11a228;
        case 0x11a22cu: goto label_11a22c;
        case 0x11a230u: goto label_11a230;
        case 0x11a234u: goto label_11a234;
        case 0x11a238u: goto label_11a238;
        case 0x11a23cu: goto label_11a23c;
        case 0x11a240u: goto label_11a240;
        case 0x11a244u: goto label_11a244;
        case 0x11a248u: goto label_11a248;
        case 0x11a24cu: goto label_11a24c;
        case 0x11a250u: goto label_11a250;
        case 0x11a254u: goto label_11a254;
        case 0x11a258u: goto label_11a258;
        case 0x11a25cu: goto label_11a25c;
        case 0x11a260u: goto label_11a260;
        case 0x11a264u: goto label_11a264;
        case 0x11a268u: goto label_11a268;
        case 0x11a26cu: goto label_11a26c;
        case 0x11a270u: goto label_11a270;
        case 0x11a274u: goto label_11a274;
        case 0x11a278u: goto label_11a278;
        case 0x11a27cu: goto label_11a27c;
        case 0x11a280u: goto label_11a280;
        case 0x11a284u: goto label_11a284;
        case 0x11a288u: goto label_11a288;
        case 0x11a28cu: goto label_11a28c;
        case 0x11a290u: goto label_11a290;
        case 0x11a294u: goto label_11a294;
        case 0x11a298u: goto label_11a298;
        case 0x11a29cu: goto label_11a29c;
        case 0x11a2a0u: goto label_11a2a0;
        case 0x11a2a4u: goto label_11a2a4;
        case 0x11a2a8u: goto label_11a2a8;
        case 0x11a2acu: goto label_11a2ac;
        case 0x11a2b0u: goto label_11a2b0;
        case 0x11a2b4u: goto label_11a2b4;
        case 0x11a2b8u: goto label_11a2b8;
        case 0x11a2bcu: goto label_11a2bc;
        case 0x11a2c0u: goto label_11a2c0;
        case 0x11a2c4u: goto label_11a2c4;
        case 0x11a2c8u: goto label_11a2c8;
        case 0x11a2ccu: goto label_11a2cc;
        case 0x11a2d0u: goto label_11a2d0;
        case 0x11a2d4u: goto label_11a2d4;
        case 0x11a2d8u: goto label_11a2d8;
        case 0x11a2dcu: goto label_11a2dc;
        case 0x11a2e0u: goto label_11a2e0;
        case 0x11a2e4u: goto label_11a2e4;
        case 0x11a2e8u: goto label_11a2e8;
        case 0x11a2ecu: goto label_11a2ec;
        case 0x11a2f0u: goto label_11a2f0;
        case 0x11a2f4u: goto label_11a2f4;
        case 0x11a2f8u: goto label_11a2f8;
        case 0x11a2fcu: goto label_11a2fc;
        case 0x11a300u: goto label_11a300;
        case 0x11a304u: goto label_11a304;
        case 0x11a308u: goto label_11a308;
        case 0x11a30cu: goto label_11a30c;
        case 0x11a310u: goto label_11a310;
        case 0x11a314u: goto label_11a314;
        case 0x11a318u: goto label_11a318;
        case 0x11a31cu: goto label_11a31c;
        case 0x11a320u: goto label_11a320;
        case 0x11a324u: goto label_11a324;
        case 0x11a328u: goto label_11a328;
        case 0x11a32cu: goto label_11a32c;
        case 0x11a330u: goto label_11a330;
        case 0x11a334u: goto label_11a334;
        case 0x11a338u: goto label_11a338;
        case 0x11a33cu: goto label_11a33c;
        case 0x11a340u: goto label_11a340;
        case 0x11a344u: goto label_11a344;
        case 0x11a348u: goto label_11a348;
        case 0x11a34cu: goto label_11a34c;
        case 0x11a350u: goto label_11a350;
        case 0x11a354u: goto label_11a354;
        case 0x11a358u: goto label_11a358;
        case 0x11a35cu: goto label_11a35c;
        case 0x11a360u: goto label_11a360;
        case 0x11a364u: goto label_11a364;
        case 0x11a368u: goto label_11a368;
        case 0x11a36cu: goto label_11a36c;
        case 0x11a370u: goto label_11a370;
        case 0x11a374u: goto label_11a374;
        case 0x11a378u: goto label_11a378;
        case 0x11a37cu: goto label_11a37c;
        case 0x11a380u: goto label_11a380;
        case 0x11a384u: goto label_11a384;
        case 0x11a388u: goto label_11a388;
        case 0x11a38cu: goto label_11a38c;
        case 0x11a390u: goto label_11a390;
        case 0x11a394u: goto label_11a394;
        case 0x11a398u: goto label_11a398;
        case 0x11a39cu: goto label_11a39c;
        case 0x11a3a0u: goto label_11a3a0;
        case 0x11a3a4u: goto label_11a3a4;
        case 0x11a3a8u: goto label_11a3a8;
        case 0x11a3acu: goto label_11a3ac;
        case 0x11a3b0u: goto label_11a3b0;
        case 0x11a3b4u: goto label_11a3b4;
        case 0x11a3b8u: goto label_11a3b8;
        case 0x11a3bcu: goto label_11a3bc;
        case 0x11a3c0u: goto label_11a3c0;
        case 0x11a3c4u: goto label_11a3c4;
        case 0x11a3c8u: goto label_11a3c8;
        case 0x11a3ccu: goto label_11a3cc;
        case 0x11a3d0u: goto label_11a3d0;
        case 0x11a3d4u: goto label_11a3d4;
        case 0x11a3d8u: goto label_11a3d8;
        case 0x11a3dcu: goto label_11a3dc;
        case 0x11a3e0u: goto label_11a3e0;
        case 0x11a3e4u: goto label_11a3e4;
        case 0x11a3e8u: goto label_11a3e8;
        case 0x11a3ecu: goto label_11a3ec;
        case 0x11a3f0u: goto label_11a3f0;
        case 0x11a3f4u: goto label_11a3f4;
        case 0x11a3f8u: goto label_11a3f8;
        case 0x11a3fcu: goto label_11a3fc;
        case 0x11a400u: goto label_11a400;
        case 0x11a404u: goto label_11a404;
        case 0x11a408u: goto label_11a408;
        case 0x11a40cu: goto label_11a40c;
        case 0x11a410u: goto label_11a410;
        case 0x11a414u: goto label_11a414;
        case 0x11a418u: goto label_11a418;
        case 0x11a41cu: goto label_11a41c;
        case 0x11a420u: goto label_11a420;
        case 0x11a424u: goto label_11a424;
        case 0x11a428u: goto label_11a428;
        case 0x11a42cu: goto label_11a42c;
        case 0x11a430u: goto label_11a430;
        case 0x11a434u: goto label_11a434;
        case 0x11a438u: goto label_11a438;
        case 0x11a43cu: goto label_11a43c;
        case 0x11a440u: goto label_11a440;
        case 0x11a444u: goto label_11a444;
        case 0x11a448u: goto label_11a448;
        case 0x11a44cu: goto label_11a44c;
        case 0x11a450u: goto label_11a450;
        case 0x11a454u: goto label_11a454;
        case 0x11a458u: goto label_11a458;
        case 0x11a45cu: goto label_11a45c;
        case 0x11a460u: goto label_11a460;
        case 0x11a464u: goto label_11a464;
        case 0x11a468u: goto label_11a468;
        case 0x11a46cu: goto label_11a46c;
        case 0x11a470u: goto label_11a470;
        case 0x11a474u: goto label_11a474;
        case 0x11a478u: goto label_11a478;
        case 0x11a47cu: goto label_11a47c;
        case 0x11a480u: goto label_11a480;
        case 0x11a484u: goto label_11a484;
        case 0x11a488u: goto label_11a488;
        case 0x11a48cu: goto label_11a48c;
        case 0x11a490u: goto label_11a490;
        case 0x11a494u: goto label_11a494;
        case 0x11a498u: goto label_11a498;
        case 0x11a49cu: goto label_11a49c;
        case 0x11a4a0u: goto label_11a4a0;
        case 0x11a4a4u: goto label_11a4a4;
        case 0x11a4a8u: goto label_11a4a8;
        case 0x11a4acu: goto label_11a4ac;
        case 0x11a4b0u: goto label_11a4b0;
        case 0x11a4b4u: goto label_11a4b4;
        case 0x11a4b8u: goto label_11a4b8;
        case 0x11a4bcu: goto label_11a4bc;
        case 0x11a4c0u: goto label_11a4c0;
        case 0x11a4c4u: goto label_11a4c4;
        case 0x11a4c8u: goto label_11a4c8;
        case 0x11a4ccu: goto label_11a4cc;
        case 0x11a4d0u: goto label_11a4d0;
        case 0x11a4d4u: goto label_11a4d4;
        case 0x11a4d8u: goto label_11a4d8;
        case 0x11a4dcu: goto label_11a4dc;
        case 0x11a4e0u: goto label_11a4e0;
        case 0x11a4e4u: goto label_11a4e4;
        case 0x11a4e8u: goto label_11a4e8;
        case 0x11a4ecu: goto label_11a4ec;
        case 0x11a4f0u: goto label_11a4f0;
        case 0x11a4f4u: goto label_11a4f4;
        case 0x11a4f8u: goto label_11a4f8;
        case 0x11a4fcu: goto label_11a4fc;
        case 0x11a500u: goto label_11a500;
        case 0x11a504u: goto label_11a504;
        case 0x11a508u: goto label_11a508;
        case 0x11a50cu: goto label_11a50c;
        case 0x11a510u: goto label_11a510;
        case 0x11a514u: goto label_11a514;
        case 0x11a518u: goto label_11a518;
        case 0x11a51cu: goto label_11a51c;
        case 0x11a520u: goto label_11a520;
        case 0x11a524u: goto label_11a524;
        case 0x11a528u: goto label_11a528;
        case 0x11a52cu: goto label_11a52c;
        case 0x11a530u: goto label_11a530;
        case 0x11a534u: goto label_11a534;
        case 0x11a538u: goto label_11a538;
        case 0x11a53cu: goto label_11a53c;
        case 0x11a540u: goto label_11a540;
        case 0x11a544u: goto label_11a544;
        case 0x11a548u: goto label_11a548;
        case 0x11a54cu: goto label_11a54c;
        case 0x11a550u: goto label_11a550;
        case 0x11a554u: goto label_11a554;
        case 0x11a558u: goto label_11a558;
        case 0x11a55cu: goto label_11a55c;
        case 0x11a560u: goto label_11a560;
        case 0x11a564u: goto label_11a564;
        case 0x11a568u: goto label_11a568;
        case 0x11a56cu: goto label_11a56c;
        case 0x11a570u: goto label_11a570;
        case 0x11a574u: goto label_11a574;
        case 0x11a578u: goto label_11a578;
        case 0x11a57cu: goto label_11a57c;
        case 0x11a580u: goto label_11a580;
        case 0x11a584u: goto label_11a584;
        case 0x11a588u: goto label_11a588;
        case 0x11a58cu: goto label_11a58c;
        case 0x11a590u: goto label_11a590;
        case 0x11a594u: goto label_11a594;
        case 0x11a598u: goto label_11a598;
        case 0x11a59cu: goto label_11a59c;
        case 0x11a5a0u: goto label_11a5a0;
        case 0x11a5a4u: goto label_11a5a4;
        case 0x11a5a8u: goto label_11a5a8;
        case 0x11a5acu: goto label_11a5ac;
        case 0x11a5b0u: goto label_11a5b0;
        case 0x11a5b4u: goto label_11a5b4;
        case 0x11a5b8u: goto label_11a5b8;
        case 0x11a5bcu: goto label_11a5bc;
        case 0x11a5c0u: goto label_11a5c0;
        case 0x11a5c4u: goto label_11a5c4;
        case 0x11a5c8u: goto label_11a5c8;
        case 0x11a5ccu: goto label_11a5cc;
        case 0x11a5d0u: goto label_11a5d0;
        case 0x11a5d4u: goto label_11a5d4;
        case 0x11a5d8u: goto label_11a5d8;
        case 0x11a5dcu: goto label_11a5dc;
        case 0x11a5e0u: goto label_11a5e0;
        case 0x11a5e4u: goto label_11a5e4;
        case 0x11a5e8u: goto label_11a5e8;
        case 0x11a5ecu: goto label_11a5ec;
        case 0x11a5f0u: goto label_11a5f0;
        case 0x11a5f4u: goto label_11a5f4;
        case 0x11a5f8u: goto label_11a5f8;
        case 0x11a5fcu: goto label_11a5fc;
        case 0x11a600u: goto label_11a600;
        case 0x11a604u: goto label_11a604;
        case 0x11a608u: goto label_11a608;
        case 0x11a60cu: goto label_11a60c;
        case 0x11a610u: goto label_11a610;
        case 0x11a614u: goto label_11a614;
        case 0x11a618u: goto label_11a618;
        case 0x11a61cu: goto label_11a61c;
        case 0x11a620u: goto label_11a620;
        case 0x11a624u: goto label_11a624;
        case 0x11a628u: goto label_11a628;
        case 0x11a62cu: goto label_11a62c;
        case 0x11a630u: goto label_11a630;
        case 0x11a634u: goto label_11a634;
        case 0x11a638u: goto label_11a638;
        case 0x11a63cu: goto label_11a63c;
        case 0x11a640u: goto label_11a640;
        case 0x11a644u: goto label_11a644;
        case 0x11a648u: goto label_11a648;
        case 0x11a64cu: goto label_11a64c;
        case 0x11a650u: goto label_11a650;
        case 0x11a654u: goto label_11a654;
        case 0x11a658u: goto label_11a658;
        case 0x11a65cu: goto label_11a65c;
        case 0x11a660u: goto label_11a660;
        case 0x11a664u: goto label_11a664;
        case 0x11a668u: goto label_11a668;
        case 0x11a66cu: goto label_11a66c;
        case 0x11a670u: goto label_11a670;
        case 0x11a674u: goto label_11a674;
        case 0x11a678u: goto label_11a678;
        case 0x11a67cu: goto label_11a67c;
        case 0x11a680u: goto label_11a680;
        case 0x11a684u: goto label_11a684;
        case 0x11a688u: goto label_11a688;
        case 0x11a68cu: goto label_11a68c;
        case 0x11a690u: goto label_11a690;
        case 0x11a694u: goto label_11a694;
        case 0x11a698u: goto label_11a698;
        case 0x11a69cu: goto label_11a69c;
        case 0x11a6a0u: goto label_11a6a0;
        case 0x11a6a4u: goto label_11a6a4;
        case 0x11a6a8u: goto label_11a6a8;
        case 0x11a6acu: goto label_11a6ac;
        case 0x11a6b0u: goto label_11a6b0;
        case 0x11a6b4u: goto label_11a6b4;
        case 0x11a6b8u: goto label_11a6b8;
        case 0x11a6bcu: goto label_11a6bc;
        case 0x11a6c0u: goto label_11a6c0;
        case 0x11a6c4u: goto label_11a6c4;
        case 0x11a6c8u: goto label_11a6c8;
        case 0x11a6ccu: goto label_11a6cc;
        case 0x11a6d0u: goto label_11a6d0;
        case 0x11a6d4u: goto label_11a6d4;
        case 0x11a6d8u: goto label_11a6d8;
        case 0x11a6dcu: goto label_11a6dc;
        default: break;
    }

    ctx->pc = 0x119b80u;

label_119b80:
    // 0x119b80: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x119b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_119b84:
    // 0x119b84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x119b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_119b88:
    // 0x119b88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x119b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_119b8c:
    // 0x119b8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x119b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_119b90:
    // 0x119b90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x119b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_119b94:
    // 0x119b94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x119b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_119b98:
    // 0x119b98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x119b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_119b9c:
    // 0x119b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x119b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_119ba0:
    // 0x119ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x119ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_119ba4:
    // 0x119ba4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_119ba8:
    // 0x119ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x119ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_119bac:
    // 0x119bac: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x119bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
label_119bb0:
    // 0x119bb0: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_119bb4:
    // 0x119bb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x119bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_119bb8:
    // 0x119bb8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x119bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_119bbc:
    // 0x119bbc: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x119bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_119bc0:
    // 0x119bc0: 0xc042090  jal         func_108240
label_119bc4:
    if (ctx->pc == 0x119BC4u) {
        ctx->pc = 0x119BC8u;
        goto label_119bc8;
    }
    ctx->pc = 0x119BC0u;
    SET_GPR_U32(ctx, 31, 0x119BC8u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x119BC0u, 0x119BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BC8u;
label_119bc8:
    // 0x119bc8: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x119bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_119bcc:
    // 0x119bcc: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x119bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_119bd0:
    // 0x119bd0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x119bd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_119bd4:
    // 0x119bd4: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x119bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_119bd8:
    // 0x119bd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x119bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_119bdc:
    // 0x119bdc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_119be0:
    if (ctx->pc == 0x119BE0u) {
        ctx->pc = 0x119BE4u;
        goto label_119be4;
    }
    ctx->pc = 0x119BDCu;
    {
        const bool branch_taken_0x119bdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x119bdc) {
            ctx->pc = 0x119C14u;
            goto label_119c14;
        }
    }
    ctx->pc = 0x119BE4u;
label_119be4:
    // 0x119be4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x119be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_119be8:
    // 0x119be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x119be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_119bec:
    // 0x119bec: 0x0  nop
    ctx->pc = 0x119becu;
    // NOP
label_119bf0:
    // 0x119bf0: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x119bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_119bf4:
    // 0x119bf4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x119bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_119bf8:
    // 0x119bf8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x119bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_119bfc:
    // 0x119bfc: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x119bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_119c00:
    // 0x119c00: 0xc7ac01e8  lwc1        $f12, 0x1E8($sp)
    ctx->pc = 0x119c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_119c04:
    // 0x119c04: 0xc041bc4  jal         func_106F10
label_119c08:
    if (ctx->pc == 0x119C08u) {
        ctx->pc = 0x119C0Cu;
        goto label_119c0c;
    }
    ctx->pc = 0x119C04u;
    SET_GPR_U32(ctx, 31, 0x119C0Cu);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x119C04u, 0x119C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C0Cu;
label_119c0c:
    // 0x119c0c: 0x100002a5  b           . + 4 + (0x2A5 << 2)
label_119c10:
    if (ctx->pc == 0x119C10u) {
        ctx->pc = 0x119C14u;
        goto label_119c14;
    }
    ctx->pc = 0x119C0Cu;
    {
        const bool branch_taken_0x119c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119c0c) {
            ctx->pc = 0x11A6A4u;
            goto label_11a6a4;
        }
    }
    ctx->pc = 0x119C14u;
label_119c14:
    // 0x119c14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x119c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_119c18:
    // 0x119c18: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x119c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_119c1c:
    // 0x119c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x119c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_119c20:
    // 0x119c20: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_119c24:
    if (ctx->pc == 0x119C24u) {
        ctx->pc = 0x119C28u;
        goto label_119c28;
    }
    ctx->pc = 0x119C20u;
    {
        const bool branch_taken_0x119c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x119c20) {
            ctx->pc = 0x119C8Cu;
            goto label_119c8c;
        }
    }
    ctx->pc = 0x119C28u;
label_119c28:
    // 0x119c28: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_119c2c:
    // 0x119c2c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x119c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_119c30:
    // 0x119c30: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x119c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_119c34:
    // 0x119c34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x119c34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_119c38:
    // 0x119c38: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x119c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_119c3c:
    // 0x119c3c: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x119c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_119c40:
    // 0x119c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x119c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_119c44:
    // 0x119c44: 0x0  nop
    ctx->pc = 0x119c44u;
    // NOP
label_119c48:
    // 0x119c48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x119c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_119c4c:
    // 0x119c4c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_119c50:
    if (ctx->pc == 0x119C50u) {
        ctx->pc = 0x119C54u;
        goto label_119c54;
    }
    ctx->pc = 0x119C4Cu;
    {
        const bool branch_taken_0x119c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x119c4c) {
            ctx->pc = 0x119C60u;
            goto label_119c60;
        }
    }
    ctx->pc = 0x119C54u;
label_119c54:
    // 0x119c54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x119c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_119c58:
    // 0x119c58: 0x0  nop
    ctx->pc = 0x119c58u;
    // NOP
label_119c5c:
    // 0x119c5c: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x119c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_119c60:
    // 0x119c60: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x119c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_119c64:
    // 0x119c64: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x119c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_119c68:
    // 0x119c68: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x119c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_119c6c:
    // 0x119c6c: 0xc7ac01e8  lwc1        $f12, 0x1E8($sp)
    ctx->pc = 0x119c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_119c70:
    // 0x119c70: 0xc041bc4  jal         func_106F10
label_119c74:
    if (ctx->pc == 0x119C74u) {
        ctx->pc = 0x119C78u;
        goto label_119c78;
    }
    ctx->pc = 0x119C70u;
    SET_GPR_U32(ctx, 31, 0x119C78u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x119C70u, 0x119C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C78u;
label_119c78:
    // 0x119c78: 0xc11f690  jal         func_47DA40
label_119c7c:
    if (ctx->pc == 0x119C7Cu) {
        ctx->pc = 0x119C80u;
        goto label_119c80;
    }
    ctx->pc = 0x119C78u;
    SET_GPR_U32(ctx, 31, 0x119C80u);
    ctx->pc = 0x47DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DA40u, 0x119C78u, 0x119C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C80u;
label_119c80:
    // 0x119c80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x119c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119c84:
    // 0x119c84: 0x10000287  b           . + 4 + (0x287 << 2)
label_119c88:
    if (ctx->pc == 0x119C88u) {
        ctx->pc = 0x119C8Cu;
        goto label_119c8c;
    }
    ctx->pc = 0x119C84u;
    {
        const bool branch_taken_0x119c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119c84) {
            ctx->pc = 0x11A6A4u;
            goto label_11a6a4;
        }
    }
    ctx->pc = 0x119C8Cu;
label_119c8c:
    // 0x119c8c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x119c8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119c90:
    // 0x119c90: 0xc08ef50  jal         func_23BD40
label_119c94:
    if (ctx->pc == 0x119C94u) {
        ctx->pc = 0x119C98u;
        goto label_119c98;
    }
    ctx->pc = 0x119C90u;
    SET_GPR_U32(ctx, 31, 0x119C98u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x119C90u, 0x119C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C98u;
label_119c98:
    // 0x119c98: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x119c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_119c9c:
    // 0x119c9c: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x119c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_119ca0:
    // 0x119ca0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_119ca4:
    if (ctx->pc == 0x119CA4u) {
        ctx->pc = 0x119CA8u;
        goto label_119ca8;
    }
    ctx->pc = 0x119CA0u;
    {
        const bool branch_taken_0x119ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ca0) {
            ctx->pc = 0x119D08u;
            goto label_119d08;
        }
    }
    ctx->pc = 0x119CA8u;
label_119ca8:
    // 0x119ca8: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x119ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_119cac:
    // 0x119cac: 0xc0406f0  jal         func_101BC0
label_119cb0:
    if (ctx->pc == 0x119CB0u) {
        ctx->pc = 0x119CB4u;
        goto label_119cb4;
    }
    ctx->pc = 0x119CACu;
    SET_GPR_U32(ctx, 31, 0x119CB4u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x119CACu, 0x119CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CB4u;
label_119cb4:
    // 0x119cb4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x119cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_119cb8:
    // 0x119cb8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_119cbc:
    if (ctx->pc == 0x119CBCu) {
        ctx->pc = 0x119CC0u;
        goto label_119cc0;
    }
    ctx->pc = 0x119CB8u;
    {
        const bool branch_taken_0x119cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x119cb8) {
            ctx->pc = 0x119D08u;
            goto label_119d08;
        }
    }
    ctx->pc = 0x119CC0u;
label_119cc0:
    // 0x119cc0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x119cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_119cc4:
    // 0x119cc4: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x119cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_119cc8:
    // 0x119cc8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x119cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_119ccc:
    // 0x119ccc: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_119cd0:
    if (ctx->pc == 0x119CD0u) {
        ctx->pc = 0x119CD4u;
        goto label_119cd4;
    }
    ctx->pc = 0x119CCCu;
    {
        const bool branch_taken_0x119ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x119ccc) {
            ctx->pc = 0x119D00u;
            goto label_119d00;
        }
    }
    ctx->pc = 0x119CD4u;
label_119cd4:
    // 0x119cd4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x119cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_119cd8:
    // 0x119cd8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_119cdc:
    if (ctx->pc == 0x119CDCu) {
        ctx->pc = 0x119CE0u;
        goto label_119ce0;
    }
    ctx->pc = 0x119CD8u;
    {
        const bool branch_taken_0x119cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x119cd8) {
            ctx->pc = 0x119D00u;
            goto label_119d00;
        }
    }
    ctx->pc = 0x119CE0u;
label_119ce0:
    // 0x119ce0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x119ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_119ce4:
    // 0x119ce4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_119ce8:
    if (ctx->pc == 0x119CE8u) {
        ctx->pc = 0x119CECu;
        goto label_119cec;
    }
    ctx->pc = 0x119CE4u;
    {
        const bool branch_taken_0x119ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x119ce4) {
            ctx->pc = 0x119D00u;
            goto label_119d00;
        }
    }
    ctx->pc = 0x119CECu;
label_119cec:
    // 0x119cec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x119cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_119cf0:
    // 0x119cf0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_119cf4:
    if (ctx->pc == 0x119CF4u) {
        ctx->pc = 0x119CF8u;
        goto label_119cf8;
    }
    ctx->pc = 0x119CF0u;
    {
        const bool branch_taken_0x119cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x119cf0) {
            ctx->pc = 0x119D00u;
            goto label_119d00;
        }
    }
    ctx->pc = 0x119CF8u;
label_119cf8:
    // 0x119cf8: 0x10000003  b           . + 4 + (0x3 << 2)
label_119cfc:
    if (ctx->pc == 0x119CFCu) {
        ctx->pc = 0x119D00u;
        goto label_119d00;
    }
    ctx->pc = 0x119CF8u;
    {
        const bool branch_taken_0x119cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119cf8) {
            ctx->pc = 0x119D08u;
            goto label_119d08;
        }
    }
    ctx->pc = 0x119D00u;
label_119d00:
    // 0x119d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_119d04:
    // 0x119d04: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x119d04u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119d08:
    // 0x119d08: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x119d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_119d0c:
    // 0x119d0c: 0xc050c5c  jal         func_143170
label_119d10:
    if (ctx->pc == 0x119D10u) {
        ctx->pc = 0x119D14u;
        goto label_119d14;
    }
    ctx->pc = 0x119D0Cu;
    SET_GPR_U32(ctx, 31, 0x119D14u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x119D0Cu, 0x119D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D14u;
label_119d14:
    // 0x119d14: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x119d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_119d18:
    // 0x119d18: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x119d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_119d1c:
    // 0x119d1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x119d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_119d20:
    // 0x119d20: 0xc04fbd0  jal         func_13EF40
label_119d24:
    if (ctx->pc == 0x119D24u) {
        ctx->pc = 0x119D28u;
        goto label_119d28;
    }
    ctx->pc = 0x119D20u;
    SET_GPR_U32(ctx, 31, 0x119D28u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x119D20u, 0x119D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D28u;
label_119d28:
    // 0x119d28: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x119d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_119d2c:
    // 0x119d2c: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x119d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_119d30:
    // 0x119d30: 0xc04e308  jal         func_138C20
label_119d34:
    if (ctx->pc == 0x119D34u) {
        ctx->pc = 0x119D38u;
        goto label_119d38;
    }
    ctx->pc = 0x119D30u;
    SET_GPR_U32(ctx, 31, 0x119D38u);
    ctx->pc = 0x138C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C20u, 0x119D30u, 0x119D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D38u;
label_119d38:
    // 0x119d38: 0xa3a201ef  sb          $v0, 0x1EF($sp)
    ctx->pc = 0x119d38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 495), (uint8_t)GPR_U32(ctx, 2));
label_119d3c:
    // 0x119d3c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x119d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_119d40:
    // 0x119d40: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x119d40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_119d44:
    // 0x119d44: 0xa3a201ee  sb          $v0, 0x1EE($sp)
    ctx->pc = 0x119d44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 494), (uint8_t)GPR_U32(ctx, 2));
label_119d48:
    // 0x119d48: 0xa3a001db  sb          $zero, 0x1DB($sp)
    ctx->pc = 0x119d48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 475), (uint8_t)GPR_U32(ctx, 0));
label_119d4c:
    // 0x119d4c: 0xa3a001d8  sb          $zero, 0x1D8($sp)
    ctx->pc = 0x119d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 0));
label_119d50:
    // 0x119d50: 0xa3a001d9  sb          $zero, 0x1D9($sp)
    ctx->pc = 0x119d50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 473), (uint8_t)GPR_U32(ctx, 0));
label_119d54:
    // 0x119d54: 0xa3a001da  sb          $zero, 0x1DA($sp)
    ctx->pc = 0x119d54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 474), (uint8_t)GPR_U32(ctx, 0));
label_119d58:
    // 0x119d58: 0xc12242c  jal         func_4890B0
label_119d5c:
    if (ctx->pc == 0x119D5Cu) {
        ctx->pc = 0x119D60u;
        goto label_119d60;
    }
    ctx->pc = 0x119D58u;
    SET_GPR_U32(ctx, 31, 0x119D60u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x119D58u, 0x119D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D60u;
label_119d60:
    // 0x119d60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119d64:
    // 0x119d64: 0x9384b9bc  lbu         $a0, -0x4644($gp)
    ctx->pc = 0x119d64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949308)));
label_119d68:
    // 0x119d68: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
label_119d6c:
    if (ctx->pc == 0x119D6Cu) {
        ctx->pc = 0x119D70u;
        goto label_119d70;
    }
    ctx->pc = 0x119D68u;
    {
        const bool branch_taken_0x119d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x119d68) {
            ctx->pc = 0x119DD0u;
            goto label_119dd0;
        }
    }
    ctx->pc = 0x119D70u;
label_119d70:
    // 0x119d70: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x119d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_119d74:
    // 0x119d74: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x119d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_119d78:
    // 0x119d78: 0x10040015  beq         $zero, $a0, . + 4 + (0x15 << 2)
label_119d7c:
    if (ctx->pc == 0x119D7Cu) {
        ctx->pc = 0x119D80u;
        goto label_119d80;
    }
    ctx->pc = 0x119D78u;
    {
        const bool branch_taken_0x119d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x119d78) {
            ctx->pc = 0x119DD0u;
            goto label_119dd0;
        }
    }
    ctx->pc = 0x119D80u;
label_119d80:
    // 0x119d80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x119d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_119d84:
    // 0x119d84: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x119d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_119d88:
    // 0x119d88: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x119d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_119d8c:
    // 0x119d8c: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x119d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_119d90:
    // 0x119d90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x119d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_119d94:
    // 0x119d94: 0xc089a88  jal         func_226A20
label_119d98:
    if (ctx->pc == 0x119D98u) {
        ctx->pc = 0x119D9Cu;
        goto label_119d9c;
    }
    ctx->pc = 0x119D94u;
    SET_GPR_U32(ctx, 31, 0x119D9Cu);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x119D94u, 0x119D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D9Cu;
label_119d9c:
    // 0x119d9c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x119d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_119da0:
    // 0x119da0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x119da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_119da4:
    // 0x119da4: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_119da8:
    if (ctx->pc == 0x119DA8u) {
        ctx->pc = 0x119DACu;
        goto label_119dac;
    }
    ctx->pc = 0x119DA4u;
    {
        const bool branch_taken_0x119da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x119da4) {
            ctx->pc = 0x119DD0u;
            goto label_119dd0;
        }
    }
    ctx->pc = 0x119DACu;
label_119dac:
    // 0x119dac: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x119dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_119db0:
    // 0x119db0: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_119db4:
    if (ctx->pc == 0x119DB4u) {
        ctx->pc = 0x119DB8u;
        goto label_119db8;
    }
    ctx->pc = 0x119DB0u;
    {
        const bool branch_taken_0x119db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x119db0) {
            ctx->pc = 0x119DD0u;
            goto label_119dd0;
        }
    }
    ctx->pc = 0x119DB8u;
label_119db8:
    // 0x119db8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x119db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_119dbc:
    // 0x119dbc: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x119dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_119dc0:
    // 0x119dc0: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x119dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_119dc4:
    // 0x119dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x119dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119dc8:
    // 0x119dc8: 0xc1065f8  jal         func_4197E0
label_119dcc:
    if (ctx->pc == 0x119DCCu) {
        ctx->pc = 0x119DD0u;
        goto label_119dd0;
    }
    ctx->pc = 0x119DC8u;
    SET_GPR_U32(ctx, 31, 0x119DD0u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x119DC8u, 0x119DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DD0u;
label_119dd0:
    // 0x119dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119dd4:
    // 0x119dd4: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x119dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_119dd8:
    // 0x119dd8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x119dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_119ddc:
    // 0x119ddc: 0xc105fa6  jal         func_417E98
label_119de0:
    if (ctx->pc == 0x119DE0u) {
        ctx->pc = 0x119DE4u;
        goto label_119de4;
    }
    ctx->pc = 0x119DDCu;
    SET_GPR_U32(ctx, 31, 0x119DE4u);
    ctx->pc = 0x417E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E98u, 0x119DDCu, 0x119DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119DE4u;
label_119de4:
    // 0x119de4: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x119de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_119de8:
    // 0x119de8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x119de8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_119dec:
    // 0x119dec: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x119decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_119df0:
    // 0x119df0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x119df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119df4:
    // 0x119df4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_119df8:
    // 0x119df8: 0x10a20212  beq         $a1, $v0, . + 4 + (0x212 << 2)
label_119dfc:
    if (ctx->pc == 0x119DFCu) {
        ctx->pc = 0x119E00u;
        goto label_119e00;
    }
    ctx->pc = 0x119DF8u;
    {
        const bool branch_taken_0x119df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x119df8) {
            ctx->pc = 0x11A644u;
            goto label_11a644;
        }
    }
    ctx->pc = 0x119E00u;
label_119e00:
    // 0x119e00: 0xc12242c  jal         func_4890B0
label_119e04:
    if (ctx->pc == 0x119E04u) {
        ctx->pc = 0x119E08u;
        goto label_119e08;
    }
    ctx->pc = 0x119E00u;
    SET_GPR_U32(ctx, 31, 0x119E08u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x119E00u, 0x119E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E08u;
label_119e08:
    // 0x119e08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119e0c:
    // 0x119e0c: 0x16c00040  bnez        $s6, . + 4 + (0x40 << 2)
label_119e10:
    if (ctx->pc == 0x119E10u) {
        ctx->pc = 0x119E14u;
        goto label_119e14;
    }
    ctx->pc = 0x119E0Cu;
    {
        const bool branch_taken_0x119e0c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x119e0c) {
            ctx->pc = 0x119F10u;
            goto label_119f10;
        }
    }
    ctx->pc = 0x119E14u;
label_119e14:
    // 0x119e14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119e18:
    // 0x119e18: 0xc105f96  jal         func_417E58
label_119e1c:
    if (ctx->pc == 0x119E1Cu) {
        ctx->pc = 0x119E20u;
        goto label_119e20;
    }
    ctx->pc = 0x119E18u;
    SET_GPR_U32(ctx, 31, 0x119E20u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x119E18u, 0x119E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E20u;
label_119e20:
    // 0x119e20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_119e24:
    if (ctx->pc == 0x119E24u) {
        ctx->pc = 0x119E28u;
        goto label_119e28;
    }
    ctx->pc = 0x119E20u;
    {
        const bool branch_taken_0x119e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119e20) {
            ctx->pc = 0x119E4Cu;
            goto label_119e4c;
        }
    }
    ctx->pc = 0x119E28u;
label_119e28:
    // 0x119e28: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x119e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_119e2c:
    // 0x119e2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x119e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_119e30:
    // 0x119e30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x119e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_119e34:
    // 0x119e34: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x119e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_119e38:
    // 0x119e38: 0x40f809  jalr        $v0
label_119e3c:
    if (ctx->pc == 0x119E3Cu) {
        ctx->pc = 0x119E40u;
        goto label_119e40;
    }
    ctx->pc = 0x119E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x119E40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119E38u, 0x119E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119E40u;
label_119e40:
    // 0x119e40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119e44:
    // 0x119e44: 0xc105f9e  jal         func_417E78
label_119e48:
    if (ctx->pc == 0x119E48u) {
        ctx->pc = 0x119E4Cu;
        goto label_119e4c;
    }
    ctx->pc = 0x119E44u;
    SET_GPR_U32(ctx, 31, 0x119E4Cu);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x119E44u, 0x119E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E4Cu;
label_119e4c:
    // 0x119e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119e50:
    // 0x119e50: 0xc046ac4  jal         func_11AB10
label_119e54:
    if (ctx->pc == 0x119E54u) {
        ctx->pc = 0x119E58u;
        goto label_119e58;
    }
    ctx->pc = 0x119E50u;
    SET_GPR_U32(ctx, 31, 0x119E58u);
    ctx->pc = 0x11AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB10u, 0x119E50u, 0x119E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E58u;
label_119e58:
    // 0x119e58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119e5c:
    // 0x119e5c: 0xc041200  jal         func_104800
label_119e60:
    if (ctx->pc == 0x119E60u) {
        ctx->pc = 0x119E64u;
        goto label_119e64;
    }
    ctx->pc = 0x119E5Cu;
    SET_GPR_U32(ctx, 31, 0x119E64u);
    ctx->pc = 0x104800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104800u, 0x119E5Cu, 0x119E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E64u;
label_119e64:
    // 0x119e64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119e68:
    // 0x119e68: 0xc105f96  jal         func_417E58
label_119e6c:
    if (ctx->pc == 0x119E6Cu) {
        ctx->pc = 0x119E70u;
        goto label_119e70;
    }
    ctx->pc = 0x119E68u;
    SET_GPR_U32(ctx, 31, 0x119E70u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x119E68u, 0x119E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119E70u;
label_119e70:
    // 0x119e70: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_119e74:
    if (ctx->pc == 0x119E74u) {
        ctx->pc = 0x119E78u;
        goto label_119e78;
    }
    ctx->pc = 0x119E70u;
    {
        const bool branch_taken_0x119e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119e70) {
            ctx->pc = 0x119F10u;
            goto label_119f10;
        }
    }
    ctx->pc = 0x119E78u;
label_119e78:
    // 0x119e78: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x119e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_119e7c:
    // 0x119e7c: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x119e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_119e80:
    // 0x119e80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_119e84:
    if (ctx->pc == 0x119E84u) {
        ctx->pc = 0x119E88u;
        goto label_119e88;
    }
    ctx->pc = 0x119E80u;
    {
        const bool branch_taken_0x119e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119e80) {
            ctx->pc = 0x119EA0u;
            goto label_119ea0;
        }
    }
    ctx->pc = 0x119E88u;
label_119e88:
    // 0x119e88: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x119e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_119e8c:
    // 0x119e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119e90:
    // 0x119e90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x119e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_119e94:
    // 0x119e94: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x119e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_119e98:
    // 0x119e98: 0x40f809  jalr        $v0
label_119e9c:
    if (ctx->pc == 0x119E9Cu) {
        ctx->pc = 0x119EA0u;
        goto label_119ea0;
    }
    ctx->pc = 0x119E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x119EA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119E98u, 0x119EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119EA0u;
label_119ea0:
    // 0x119ea0: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x119ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_119ea4:
    // 0x119ea4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_119ea8:
    if (ctx->pc == 0x119EA8u) {
        ctx->pc = 0x119EACu;
        goto label_119eac;
    }
    ctx->pc = 0x119EA4u;
    {
        const bool branch_taken_0x119ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ea4) {
            ctx->pc = 0x119EDCu;
            goto label_119edc;
        }
    }
    ctx->pc = 0x119EACu;
label_119eac:
    // 0x119eac: 0xc122434  jal         func_4890D0
label_119eb0:
    if (ctx->pc == 0x119EB0u) {
        ctx->pc = 0x119EB4u;
        goto label_119eb4;
    }
    ctx->pc = 0x119EACu;
    SET_GPR_U32(ctx, 31, 0x119EB4u);
    ctx->pc = 0x4890D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890D0u, 0x119EACu, 0x119EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EB4u;
label_119eb4:
    // 0x119eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119eb8:
    // 0x119eb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x119eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119ebc:
    // 0x119ebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x119ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119ec0:
    // 0x119ec0: 0xc11efac  jal         func_47BEB0
label_119ec4:
    if (ctx->pc == 0x119EC4u) {
        ctx->pc = 0x119EC8u;
        goto label_119ec8;
    }
    ctx->pc = 0x119EC0u;
    SET_GPR_U32(ctx, 31, 0x119EC8u);
    ctx->pc = 0x47BEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BEB0u, 0x119EC0u, 0x119EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EC8u;
label_119ec8:
    // 0x119ec8: 0xc122434  jal         func_4890D0
label_119ecc:
    if (ctx->pc == 0x119ECCu) {
        ctx->pc = 0x119ED0u;
        goto label_119ed0;
    }
    ctx->pc = 0x119EC8u;
    SET_GPR_U32(ctx, 31, 0x119ED0u);
    ctx->pc = 0x4890D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890D0u, 0x119EC8u, 0x119ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119ED0u;
label_119ed0:
    // 0x119ed0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119ed4:
    // 0x119ed4: 0xc11f008  jal         func_47C020
label_119ed8:
    if (ctx->pc == 0x119ED8u) {
        ctx->pc = 0x119EDCu;
        goto label_119edc;
    }
    ctx->pc = 0x119ED4u;
    SET_GPR_U32(ctx, 31, 0x119EDCu);
    ctx->pc = 0x47C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C020u, 0x119ED4u, 0x119EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119EDCu;
label_119edc:
    // 0x119edc: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x119edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_119ee0:
    // 0x119ee0: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x119ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_119ee4:
    // 0x119ee4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_119ee8:
    if (ctx->pc == 0x119EE8u) {
        ctx->pc = 0x119EECu;
        goto label_119eec;
    }
    ctx->pc = 0x119EE4u;
    {
        const bool branch_taken_0x119ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119ee4) {
            ctx->pc = 0x119F04u;
            goto label_119f04;
        }
    }
    ctx->pc = 0x119EECu;
label_119eec:
    // 0x119eec: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x119eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_119ef0:
    // 0x119ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119ef4:
    // 0x119ef4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x119ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_119ef8:
    // 0x119ef8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x119ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_119efc:
    // 0x119efc: 0x40f809  jalr        $v0
label_119f00:
    if (ctx->pc == 0x119F00u) {
        ctx->pc = 0x119F04u;
        goto label_119f04;
    }
    ctx->pc = 0x119EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x119F04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119EFCu, 0x119F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119F04u;
label_119f04:
    // 0x119f04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_119f08:
    // 0x119f08: 0xc105f9e  jal         func_417E78
label_119f0c:
    if (ctx->pc == 0x119F0Cu) {
        ctx->pc = 0x119F10u;
        goto label_119f10;
    }
    ctx->pc = 0x119F08u;
    SET_GPR_U32(ctx, 31, 0x119F10u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x119F08u, 0x119F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F10u;
label_119f10:
    // 0x119f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119f14:
    // 0x119f14: 0xc046ac4  jal         func_11AB10
label_119f18:
    if (ctx->pc == 0x119F18u) {
        ctx->pc = 0x119F1Cu;
        goto label_119f1c;
    }
    ctx->pc = 0x119F14u;
    SET_GPR_U32(ctx, 31, 0x119F1Cu);
    ctx->pc = 0x11AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB10u, 0x119F14u, 0x119F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F1Cu;
label_119f1c:
    // 0x119f1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119f20:
    // 0x119f20: 0xc0412dc  jal         func_104B70
label_119f24:
    if (ctx->pc == 0x119F24u) {
        ctx->pc = 0x119F28u;
        goto label_119f28;
    }
    ctx->pc = 0x119F20u;
    SET_GPR_U32(ctx, 31, 0x119F28u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x119F20u, 0x119F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F28u;
label_119f28:
    // 0x119f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119f2c:
    // 0x119f2c: 0xc090590  jal         func_241640
label_119f30:
    if (ctx->pc == 0x119F30u) {
        ctx->pc = 0x119F34u;
        goto label_119f34;
    }
    ctx->pc = 0x119F2Cu;
    SET_GPR_U32(ctx, 31, 0x119F34u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x119F2Cu, 0x119F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F34u;
label_119f34:
    // 0x119f34: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x119f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_119f38:
    // 0x119f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119f3c:
    // 0x119f3c: 0xc046ac4  jal         func_11AB10
label_119f40:
    if (ctx->pc == 0x119F40u) {
        ctx->pc = 0x119F44u;
        goto label_119f44;
    }
    ctx->pc = 0x119F3Cu;
    SET_GPR_U32(ctx, 31, 0x119F44u);
    ctx->pc = 0x11AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB10u, 0x119F3Cu, 0x119F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F44u;
label_119f44:
    // 0x119f44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119f48:
    // 0x119f48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119f4c:
    // 0x119f4c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x119f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_119f50:
    // 0x119f50: 0x320f809  jalr        $t9
label_119f54:
    if (ctx->pc == 0x119F54u) {
        ctx->pc = 0x119F58u;
        goto label_119f58;
    }
    ctx->pc = 0x119F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119F58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119F50u, 0x119F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119F58u;
label_119f58:
    // 0x119f58: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x119f58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_119f5c:
    // 0x119f5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x119f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119f60:
    // 0x119f60: 0xc09158c  jal         func_245630
label_119f64:
    if (ctx->pc == 0x119F64u) {
        ctx->pc = 0x119F68u;
        goto label_119f68;
    }
    ctx->pc = 0x119F60u;
    SET_GPR_U32(ctx, 31, 0x119F68u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x119F60u, 0x119F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F68u;
label_119f68:
    // 0x119f68: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x119f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_119f6c:
    // 0x119f6c: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x119f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_119f70:
    // 0x119f70: 0x100301cc  beq         $zero, $v1, . + 4 + (0x1CC << 2)
label_119f74:
    if (ctx->pc == 0x119F74u) {
        ctx->pc = 0x119F78u;
        goto label_119f78;
    }
    ctx->pc = 0x119F70u;
    {
        const bool branch_taken_0x119f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x119f70) {
            ctx->pc = 0x11A6A4u;
            goto label_11a6a4;
        }
    }
    ctx->pc = 0x119F78u;
label_119f78:
    // 0x119f78: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x119f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_119f7c:
    // 0x119f7c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x119f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_119f80:
    // 0x119f80: 0xc085538  jal         func_2154E0
label_119f84:
    if (ctx->pc == 0x119F84u) {
        ctx->pc = 0x119F88u;
        goto label_119f88;
    }
    ctx->pc = 0x119F80u;
    SET_GPR_U32(ctx, 31, 0x119F88u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x119F80u, 0x119F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F88u;
label_119f88:
    // 0x119f88: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x119f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_119f8c:
    // 0x119f8c: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x119f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_119f90:
    // 0x119f90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x119f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_119f94:
    // 0x119f94: 0xc0a1248  jal         func_284920
label_119f98:
    if (ctx->pc == 0x119F98u) {
        ctx->pc = 0x119F9Cu;
        goto label_119f9c;
    }
    ctx->pc = 0x119F94u;
    SET_GPR_U32(ctx, 31, 0x119F9Cu);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x119F94u, 0x119F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F9Cu;
label_119f9c:
    // 0x119f9c: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x119f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_119fa0:
    // 0x119fa0: 0x16c0014d  bnez        $s6, . + 4 + (0x14D << 2)
label_119fa4:
    if (ctx->pc == 0x119FA4u) {
        ctx->pc = 0x119FA8u;
        goto label_119fa8;
    }
    ctx->pc = 0x119FA0u;
    {
        const bool branch_taken_0x119fa0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x119fa0) {
            ctx->pc = 0x11A4D8u;
            goto label_11a4d8;
        }
    }
    ctx->pc = 0x119FA8u;
label_119fa8:
    // 0x119fa8: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x119fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_119fac:
    // 0x119fac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_119fb0:
    if (ctx->pc == 0x119FB0u) {
        ctx->pc = 0x119FB4u;
        goto label_119fb4;
    }
    ctx->pc = 0x119FACu;
    {
        const bool branch_taken_0x119fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119fac) {
            ctx->pc = 0x119FDCu;
            goto label_119fdc;
        }
    }
    ctx->pc = 0x119FB4u;
label_119fb4:
    // 0x119fb4: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x119fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
label_119fb8:
    // 0x119fb8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x119fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_119fbc:
    // 0x119fbc: 0xc046a98  jal         func_11AA60
label_119fc0:
    if (ctx->pc == 0x119FC0u) {
        ctx->pc = 0x119FC4u;
        goto label_119fc4;
    }
    ctx->pc = 0x119FBCu;
    SET_GPR_U32(ctx, 31, 0x119FC4u);
    ctx->pc = 0x11AA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AA60u, 0x119FBCu, 0x119FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FC4u;
label_119fc4:
    // 0x119fc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x119fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_119fc8:
    // 0x119fc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_119fcc:
    if (ctx->pc == 0x119FCCu) {
        ctx->pc = 0x119FD0u;
        goto label_119fd0;
    }
    ctx->pc = 0x119FC8u;
    {
        const bool branch_taken_0x119fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119fc8) {
            ctx->pc = 0x119FDCu;
            goto label_119fdc;
        }
    }
    ctx->pc = 0x119FD0u;
label_119fd0:
    // 0x119fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_119fd4:
    // 0x119fd4: 0xc046bc4  jal         func_11AF10
label_119fd8:
    if (ctx->pc == 0x119FD8u) {
        ctx->pc = 0x119FDCu;
        goto label_119fdc;
    }
    ctx->pc = 0x119FD4u;
    SET_GPR_U32(ctx, 31, 0x119FDCu);
    ctx->pc = 0x11AF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF10u, 0x119FD4u, 0x119FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FDCu;
label_119fdc:
    // 0x119fdc: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x119fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_119fe0:
    // 0x119fe0: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
label_119fe4:
    if (ctx->pc == 0x119FE4u) {
        ctx->pc = 0x119FE8u;
        goto label_119fe8;
    }
    ctx->pc = 0x119FE0u;
    {
        const bool branch_taken_0x119fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119fe0) {
            ctx->pc = 0x11A4D8u;
            goto label_11a4d8;
        }
    }
    ctx->pc = 0x119FE8u;
label_119fe8:
    // 0x119fe8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x119fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_119fec:
    // 0x119fec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x119fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119ff0:
    // 0x119ff0: 0x184000fc  blez        $v0, . + 4 + (0xFC << 2)
label_119ff4:
    if (ctx->pc == 0x119FF4u) {
        ctx->pc = 0x119FF8u;
        goto label_119ff8;
    }
    ctx->pc = 0x119FF0u;
    {
        const bool branch_taken_0x119ff0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x119ff0) {
            ctx->pc = 0x11A3E4u;
            goto label_11a3e4;
        }
    }
    ctx->pc = 0x119FF8u;
label_119ff8:
    // 0x119ff8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x119ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_119ffc:
    // 0x119ffc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x119ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11a000:
    // 0x11a000: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x11a000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_11a004:
    // 0x11a004: 0x102000f7  beqz        $at, . + 4 + (0xF7 << 2)
label_11a008:
    if (ctx->pc == 0x11A008u) {
        ctx->pc = 0x11A00Cu;
        goto label_11a00c;
    }
    ctx->pc = 0x11A004u;
    {
        const bool branch_taken_0x11a004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a004) {
            ctx->pc = 0x11A3E4u;
            goto label_11a3e4;
        }
    }
    ctx->pc = 0x11A00Cu;
label_11a00c:
    // 0x11a00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a010:
    // 0x11a010: 0xc046ac4  jal         func_11AB10
label_11a014:
    if (ctx->pc == 0x11A014u) {
        ctx->pc = 0x11A018u;
        goto label_11a018;
    }
    ctx->pc = 0x11A010u;
    SET_GPR_U32(ctx, 31, 0x11A018u);
    ctx->pc = 0x11AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB10u, 0x11A010u, 0x11A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A018u;
label_11a018:
    // 0x11a018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a01c:
    // 0x11a01c: 0xc0412dc  jal         func_104B70
label_11a020:
    if (ctx->pc == 0x11A020u) {
        ctx->pc = 0x11A024u;
        goto label_11a024;
    }
    ctx->pc = 0x11A01Cu;
    SET_GPR_U32(ctx, 31, 0x11A024u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x11A01Cu, 0x11A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A024u;
label_11a024:
    // 0x11a024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a028:
    // 0x11a028: 0xc090590  jal         func_241640
label_11a02c:
    if (ctx->pc == 0x11A02Cu) {
        ctx->pc = 0x11A030u;
        goto label_11a030;
    }
    ctx->pc = 0x11A028u;
    SET_GPR_U32(ctx, 31, 0x11A030u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x11A028u, 0x11A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A030u;
label_11a030:
    // 0x11a030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a034:
    // 0x11a034: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11a038:
    // 0x11a038: 0xc09157c  jal         func_2455F0
label_11a03c:
    if (ctx->pc == 0x11A03Cu) {
        ctx->pc = 0x11A040u;
        goto label_11a040;
    }
    ctx->pc = 0x11A038u;
    SET_GPR_U32(ctx, 31, 0x11A040u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x11A038u, 0x11A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A040u;
label_11a040:
    // 0x11a040: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x11a040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_11a044:
    // 0x11a044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a048:
    // 0x11a048: 0xc0469d4  jal         func_11A750
label_11a04c:
    if (ctx->pc == 0x11A04Cu) {
        ctx->pc = 0x11A050u;
        goto label_11a050;
    }
    ctx->pc = 0x11A048u;
    SET_GPR_U32(ctx, 31, 0x11A050u);
    ctx->pc = 0x11A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A750u, 0x11A048u, 0x11A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A050u;
label_11a050:
    // 0x11a050: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x11a050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_11a054:
    // 0x11a054: 0xc042290  jal         func_108A40
label_11a058:
    if (ctx->pc == 0x11A058u) {
        ctx->pc = 0x11A05Cu;
        goto label_11a05c;
    }
    ctx->pc = 0x11A054u;
    SET_GPR_U32(ctx, 31, 0x11A05Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x11A054u, 0x11A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A05Cu;
label_11a05c:
    // 0x11a05c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a060:
    // 0x11a060: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_11a064:
    if (ctx->pc == 0x11A064u) {
        ctx->pc = 0x11A068u;
        goto label_11a068;
    }
    ctx->pc = 0x11A060u;
    {
        const bool branch_taken_0x11a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a060) {
            ctx->pc = 0x11A32Cu;
            goto label_11a32c;
        }
    }
    ctx->pc = 0x11A068u;
label_11a068:
    // 0x11a068: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x11a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11a06c:
    // 0x11a06c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11a070:
    // 0x11a070: 0xc085538  jal         func_2154E0
label_11a074:
    if (ctx->pc == 0x11A074u) {
        ctx->pc = 0x11A078u;
        goto label_11a078;
    }
    ctx->pc = 0x11A070u;
    SET_GPR_U32(ctx, 31, 0x11A078u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11A070u, 0x11A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A078u;
label_11a078:
    // 0x11a078: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x11a078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_11a07c:
    // 0x11a07c: 0xa3a001ed  sb          $zero, 0x1ED($sp)
    ctx->pc = 0x11a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 493), (uint8_t)GPR_U32(ctx, 0));
label_11a080:
    // 0x11a080: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x11a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_11a084:
    // 0x11a084: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x11a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a088:
    // 0x11a088: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11a088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a08c:
    // 0x11a08c: 0x0  nop
    ctx->pc = 0x11a08cu;
    // NOP
label_11a090:
    // 0x11a090: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x11a090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a094:
    // 0x11a094: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_11a098:
    if (ctx->pc == 0x11A098u) {
        ctx->pc = 0x11A09Cu;
        goto label_11a09c;
    }
    ctx->pc = 0x11A094u;
    {
        const bool branch_taken_0x11a094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a094) {
            ctx->pc = 0x11A0A4u;
            goto label_11a0a4;
        }
    }
    ctx->pc = 0x11A09Cu;
label_11a09c:
    // 0x11a09c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a0a0:
    // 0x11a0a0: 0xa3a201ed  sb          $v0, 0x1ED($sp)
    ctx->pc = 0x11a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 493), (uint8_t)GPR_U32(ctx, 2));
label_11a0a4:
    // 0x11a0a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x11a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11a0a8:
    // 0x11a0a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11a0ac:
    // 0x11a0ac: 0xc085538  jal         func_2154E0
label_11a0b0:
    if (ctx->pc == 0x11A0B0u) {
        ctx->pc = 0x11A0B4u;
        goto label_11a0b4;
    }
    ctx->pc = 0x11A0ACu;
    SET_GPR_U32(ctx, 31, 0x11A0B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11A0ACu, 0x11A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0B4u;
label_11a0b4:
    // 0x11a0b4: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x11a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_11a0b8:
    // 0x11a0b8: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x11a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_11a0bc:
    // 0x11a0bc: 0xc091018  jal         func_244060
label_11a0c0:
    if (ctx->pc == 0x11A0C0u) {
        ctx->pc = 0x11A0C4u;
        goto label_11a0c4;
    }
    ctx->pc = 0x11A0BCu;
    SET_GPR_U32(ctx, 31, 0x11A0C4u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x11A0BCu, 0x11A0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0C4u;
label_11a0c4:
    // 0x11a0c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x11a0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_11a0c8:
    // 0x11a0c8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x11a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11a0cc:
    // 0x11a0cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x11a0ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_11a0d0:
    // 0x11a0d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_11a0d4:
    // 0x11a0d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_11a0d8:
    // 0x11a0d8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x11a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_11a0dc:
    // 0x11a0dc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x11a0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_11a0e0:
    // 0x11a0e0: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
label_11a0e4:
    if (ctx->pc == 0x11A0E4u) {
        ctx->pc = 0x11A0E8u;
        goto label_11a0e8;
    }
    ctx->pc = 0x11A0E0u;
    {
        const bool branch_taken_0x11a0e0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x11a0e0) {
            ctx->pc = 0x11A0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a0cc;
        }
    }
    ctx->pc = 0x11A0E8u;
label_11a0e8:
    // 0x11a0e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x11a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_11a0ec:
    // 0x11a0ec: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11a0f0:
    // 0x11a0f0: 0xc085538  jal         func_2154E0
label_11a0f4:
    if (ctx->pc == 0x11A0F4u) {
        ctx->pc = 0x11A0F8u;
        goto label_11a0f8;
    }
    ctx->pc = 0x11A0F0u;
    SET_GPR_U32(ctx, 31, 0x11A0F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11A0F0u, 0x11A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A0F8u;
label_11a0f8:
    // 0x11a0f8: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x11a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_11a0fc:
    // 0x11a0fc: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x11a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_11a100:
    // 0x11a100: 0xc0469cc  jal         func_11A730
label_11a104:
    if (ctx->pc == 0x11A104u) {
        ctx->pc = 0x11A108u;
        goto label_11a108;
    }
    ctx->pc = 0x11A100u;
    SET_GPR_U32(ctx, 31, 0x11A108u);
    ctx->pc = 0x11A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A730u, 0x11A100u, 0x11A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A108u;
label_11a108:
    // 0x11a108: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11a108u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a10c:
    // 0x11a10c: 0x93c20001  lbu         $v0, 0x1($fp)
    ctx->pc = 0x11a10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 1)));
label_11a110:
    // 0x11a110: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x11a110u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11a114:
    // 0x11a114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a118:
    // 0x11a118: 0x16a2000f  bne         $s5, $v0, . + 4 + (0xF << 2)
label_11a11c:
    if (ctx->pc == 0x11A11Cu) {
        ctx->pc = 0x11A120u;
        goto label_11a120;
    }
    ctx->pc = 0x11A118u;
    {
        const bool branch_taken_0x11a118 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x11a118) {
            ctx->pc = 0x11A158u;
            goto label_11a158;
        }
    }
    ctx->pc = 0x11A120u;
label_11a120:
    // 0x11a120: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11a120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11a124:
    // 0x11a124: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11a124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11a128:
    // 0x11a128: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11a128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11a12c:
    // 0x11a12c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x11a12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_11a130:
    // 0x11a130: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11a130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11a134:
    // 0x11a134: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x11a134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_11a138:
    // 0x11a138: 0x2784b6c0  addiu       $a0, $gp, -0x4940
    ctx->pc = 0x11a138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
label_11a13c:
    // 0x11a13c: 0x2785b6c0  addiu       $a1, $gp, -0x4940
    ctx->pc = 0x11a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
label_11a140:
    // 0x11a140: 0x2786b6b4  addiu       $a2, $gp, -0x494C
    ctx->pc = 0x11a140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948532));
label_11a144:
    // 0x11a144: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x11a144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_11a148:
    // 0x11a148: 0xc11f228  jal         func_47C8A0
label_11a14c:
    if (ctx->pc == 0x11A14Cu) {
        ctx->pc = 0x11A150u;
        goto label_11a150;
    }
    ctx->pc = 0x11A148u;
    SET_GPR_U32(ctx, 31, 0x11A150u);
    ctx->pc = 0x47C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C8A0u, 0x11A148u, 0x11A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A150u;
label_11a150:
    // 0x11a150: 0x10000075  b           . + 4 + (0x75 << 2)
label_11a154:
    if (ctx->pc == 0x11A154u) {
        ctx->pc = 0x11A158u;
        goto label_11a158;
    }
    ctx->pc = 0x11A150u;
    {
        const bool branch_taken_0x11a150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a150) {
            ctx->pc = 0x11A328u;
            goto label_11a328;
        }
    }
    ctx->pc = 0x11A158u;
label_11a158:
    // 0x11a158: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11a158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11a15c:
    // 0x11a15c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11a15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11a160:
    // 0x11a160: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11a160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11a164:
    // 0x11a164: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x11a164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_11a168:
    // 0x11a168: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x11a168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_11a16c:
    // 0x11a16c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x11a16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_11a170:
    // 0x11a170: 0x2784b6c0  addiu       $a0, $gp, -0x4940
    ctx->pc = 0x11a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
label_11a174:
    // 0x11a174: 0x2785b6c0  addiu       $a1, $gp, -0x4940
    ctx->pc = 0x11a174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
label_11a178:
    // 0x11a178: 0x2786b6c0  addiu       $a2, $gp, -0x4940
    ctx->pc = 0x11a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
label_11a17c:
    // 0x11a17c: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x11a17cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_11a180:
    // 0x11a180: 0xc11f228  jal         func_47C8A0
label_11a184:
    if (ctx->pc == 0x11A184u) {
        ctx->pc = 0x11A188u;
        goto label_11a188;
    }
    ctx->pc = 0x11A180u;
    SET_GPR_U32(ctx, 31, 0x11A188u);
    ctx->pc = 0x47C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C8A0u, 0x11A180u, 0x11A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A188u;
label_11a188:
    // 0x11a188: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x11a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_11a18c:
    // 0x11a18c: 0x8fa501c4  lw          $a1, 0x1C4($sp)
    ctx->pc = 0x11a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_11a190:
    // 0x11a190: 0xc090f80  jal         func_243E00
label_11a194:
    if (ctx->pc == 0x11A194u) {
        ctx->pc = 0x11A198u;
        goto label_11a198;
    }
    ctx->pc = 0x11A190u;
    SET_GPR_U32(ctx, 31, 0x11A198u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x11A190u, 0x11A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A198u;
label_11a198:
    // 0x11a198: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x11a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_11a19c:
    // 0x11a19c: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x11a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_11a1a0:
    // 0x11a1a0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x11a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_11a1a4:
    // 0x11a1a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x11a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a1a8:
    // 0x11a1a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x11a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a1ac:
    // 0x11a1ac: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x11a1acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_11a1b0:
    // 0x11a1b0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11a1b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_11a1b4:
    // 0x11a1b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11a1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11a1b8:
    // 0x11a1b8: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x11a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_11a1bc:
    // 0x11a1bc: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x11a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_11a1c0:
    // 0x11a1c0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x11a1c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_11a1c4:
    // 0x11a1c4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x11a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a1c8:
    // 0x11a1c8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x11a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_11a1cc:
    // 0x11a1cc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x11a1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_11a1d0:
    // 0x11a1d0: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x11a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_11a1d4:
    // 0x11a1d4: 0xc0469c4  jal         func_11A710
label_11a1d8:
    if (ctx->pc == 0x11A1D8u) {
        ctx->pc = 0x11A1DCu;
        goto label_11a1dc;
    }
    ctx->pc = 0x11A1D4u;
    SET_GPR_U32(ctx, 31, 0x11A1DCu);
    ctx->pc = 0x11A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A710u, 0x11A1D4u, 0x11A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1DCu;
label_11a1dc:
    // 0x11a1dc: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x11a1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a1e0:
    // 0x11a1e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11a1e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11a1e4:
    // 0x11a1e4: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x11a1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_11a1e8:
    // 0x11a1e8: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x11a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_11a1ec:
    // 0x11a1ec: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x11a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_11a1f0:
    // 0x11a1f0: 0x2786b6c0  addiu       $a2, $gp, -0x4940
    ctx->pc = 0x11a1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
label_11a1f4:
    // 0x11a1f4: 0x2787b6c0  addiu       $a3, $gp, -0x4940
    ctx->pc = 0x11a1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
label_11a1f8:
    // 0x11a1f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11a1f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a1fc:
    // 0x11a1fc: 0xc11f1cc  jal         func_47C730
label_11a200:
    if (ctx->pc == 0x11A200u) {
        ctx->pc = 0x11A204u;
        goto label_11a204;
    }
    ctx->pc = 0x11A1FCu;
    SET_GPR_U32(ctx, 31, 0x11A204u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x11A1FCu, 0x11A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A204u;
label_11a204:
    // 0x11a204: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x11a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_11a208:
    // 0x11a208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11a20c:
    // 0x11a20c: 0x18400046  blez        $v0, . + 4 + (0x46 << 2)
label_11a210:
    if (ctx->pc == 0x11A210u) {
        ctx->pc = 0x11A214u;
        goto label_11a214;
    }
    ctx->pc = 0x11A20Cu;
    {
        const bool branch_taken_0x11a20c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11a20c) {
            ctx->pc = 0x11A328u;
            goto label_11a328;
        }
    }
    ctx->pc = 0x11A214u;
label_11a214:
    // 0x11a214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a218:
    // 0x11a218: 0x12a20043  beq         $s5, $v0, . + 4 + (0x43 << 2)
label_11a21c:
    if (ctx->pc == 0x11A21Cu) {
        ctx->pc = 0x11A220u;
        goto label_11a220;
    }
    ctx->pc = 0x11A218u;
    {
        const bool branch_taken_0x11a218 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a218) {
            ctx->pc = 0x11A328u;
            goto label_11a328;
        }
    }
    ctx->pc = 0x11A220u;
label_11a220:
    // 0x11a220: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11a220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11a224:
    // 0x11a224: 0x12a20040  beq         $s5, $v0, . + 4 + (0x40 << 2)
label_11a228:
    if (ctx->pc == 0x11A228u) {
        ctx->pc = 0x11A22Cu;
        goto label_11a22c;
    }
    ctx->pc = 0x11A224u;
    {
        const bool branch_taken_0x11a224 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a224) {
            ctx->pc = 0x11A328u;
            goto label_11a328;
        }
    }
    ctx->pc = 0x11A22Cu;
label_11a22c:
    // 0x11a22c: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x11a22cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_11a230:
    // 0x11a230: 0xc6e10034  lwc1        $f1, 0x34($s7)
    ctx->pc = 0x11a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a234:
    // 0x11a234: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x11a234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_11a238:
    // 0x11a238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a23c:
    // 0x11a23c: 0x0  nop
    ctx->pc = 0x11a23cu;
    // NOP
label_11a240:
    // 0x11a240: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11a240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11a244:
    // 0x11a244: 0xe6e00034  swc1        $f0, 0x34($s7)
    ctx->pc = 0x11a244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 52), bits); }
label_11a248:
    // 0x11a248: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11a248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_11a24c:
    // 0x11a24c: 0xc103eb2  jal         func_40FAC8
label_11a250:
    if (ctx->pc == 0x11A250u) {
        ctx->pc = 0x11A254u;
        goto label_11a254;
    }
    ctx->pc = 0x11A24Cu;
    SET_GPR_U32(ctx, 31, 0x11A254u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x11A24Cu, 0x11A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A254u;
label_11a254:
    // 0x11a254: 0xc7c00014  lwc1        $f0, 0x14($fp)
    ctx->pc = 0x11a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a258:
    // 0x11a258: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x11a258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_11a25c:
    // 0x11a25c: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x11a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a260:
    // 0x11a260: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x11a260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_11a264:
    // 0x11a264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11a264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11a268:
    // 0x11a268: 0x0  nop
    ctx->pc = 0x11a268u;
    // NOP
label_11a26c:
    // 0x11a26c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x11a26cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11a270:
    // 0x11a270: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_11a274:
    if (ctx->pc == 0x11A274u) {
        ctx->pc = 0x11A278u;
        goto label_11a278;
    }
    ctx->pc = 0x11A270u;
    {
        const bool branch_taken_0x11a270 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11a270) {
            ctx->pc = 0x11A30Cu;
            goto label_11a30c;
        }
    }
    ctx->pc = 0x11A278u;
label_11a278:
    // 0x11a278: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x11a278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
label_11a27c:
    // 0x11a27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x11a27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11a280:
    // 0x11a280: 0xc7a001bc  lwc1        $f0, 0x1BC($sp)
    ctx->pc = 0x11a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11a284:
    // 0x11a284: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11a284u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11a288:
    // 0x11a288: 0x0  nop
    ctx->pc = 0x11a288u;
    // NOP
label_11a28c:
    // 0x11a28c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x11a28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_11a290:
    // 0x11a290: 0xc7ac01b8  lwc1        $f12, 0x1B8($sp)
    ctx->pc = 0x11a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11a294:
    // 0x11a294: 0xc0c3816  jal         func_30E058
label_11a298:
    if (ctx->pc == 0x11A298u) {
        ctx->pc = 0x11A29Cu;
        goto label_11a29c;
    }
    ctx->pc = 0x11A294u;
    SET_GPR_U32(ctx, 31, 0x11A29Cu);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x11A294u, 0x11A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A29Cu;
label_11a29c:
    // 0x11a29c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x11a29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_11a2a0:
    // 0x11a2a0: 0x93a201ed  lbu         $v0, 0x1ED($sp)
    ctx->pc = 0x11a2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 493)));
label_11a2a4:
    // 0x11a2a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_11a2a8:
    if (ctx->pc == 0x11A2A8u) {
        ctx->pc = 0x11A2ACu;
        goto label_11a2ac;
    }
    ctx->pc = 0x11A2A4u;
    {
        const bool branch_taken_0x11a2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a2a4) {
            ctx->pc = 0x11A2DCu;
            goto label_11a2dc;
        }
    }
    ctx->pc = 0x11A2ACu;
label_11a2ac:
    // 0x11a2ac: 0xc7ac01b8  lwc1        $f12, 0x1B8($sp)
    ctx->pc = 0x11a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11a2b0:
    // 0x11a2b0: 0xc0c38f0  jal         func_30E3C0
label_11a2b4:
    if (ctx->pc == 0x11A2B4u) {
        ctx->pc = 0x11A2B8u;
        goto label_11a2b8;
    }
    ctx->pc = 0x11A2B0u;
    SET_GPR_U32(ctx, 31, 0x11A2B8u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x11A2B0u, 0x11A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2B8u;
label_11a2b8:
    // 0x11a2b8: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x11a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a2bc:
    // 0x11a2bc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x11a2bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11a2c0:
    // 0x11a2c0: 0x2784b6cc  addiu       $a0, $gp, -0x4934
    ctx->pc = 0x11a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948556));
label_11a2c4:
    // 0x11a2c4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x11a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_11a2c8:
    // 0x11a2c8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11a2cc:
    // 0x11a2cc: 0xc11f2b4  jal         func_47CAD0
label_11a2d0:
    if (ctx->pc == 0x11A2D0u) {
        ctx->pc = 0x11A2D4u;
        goto label_11a2d4;
    }
    ctx->pc = 0x11A2CCu;
    SET_GPR_U32(ctx, 31, 0x11A2D4u);
    ctx->pc = 0x47CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CAD0u, 0x11A2CCu, 0x11A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2D4u;
label_11a2d4:
    // 0x11a2d4: 0x10000014  b           . + 4 + (0x14 << 2)
label_11a2d8:
    if (ctx->pc == 0x11A2D8u) {
        ctx->pc = 0x11A2DCu;
        goto label_11a2dc;
    }
    ctx->pc = 0x11A2D4u;
    {
        const bool branch_taken_0x11a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a2d4) {
            ctx->pc = 0x11A328u;
            goto label_11a328;
        }
    }
    ctx->pc = 0x11A2DCu;
label_11a2dc:
    // 0x11a2dc: 0xc7ac01b8  lwc1        $f12, 0x1B8($sp)
    ctx->pc = 0x11a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11a2e0:
    // 0x11a2e0: 0xc0c38f0  jal         func_30E3C0
label_11a2e4:
    if (ctx->pc == 0x11A2E4u) {
        ctx->pc = 0x11A2E8u;
        goto label_11a2e8;
    }
    ctx->pc = 0x11A2E0u;
    SET_GPR_U32(ctx, 31, 0x11A2E8u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x11A2E0u, 0x11A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2E8u;
label_11a2e8:
    // 0x11a2e8: 0xc7a101bc  lwc1        $f1, 0x1BC($sp)
    ctx->pc = 0x11a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11a2ec:
    // 0x11a2ec: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x11a2ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11a2f0:
    // 0x11a2f0: 0x2784b6b0  addiu       $a0, $gp, -0x4950
    ctx->pc = 0x11a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948528));
label_11a2f4:
    // 0x11a2f4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x11a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_11a2f8:
    // 0x11a2f8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11a2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11a2fc:
    // 0x11a2fc: 0xc11f2b4  jal         func_47CAD0
label_11a300:
    if (ctx->pc == 0x11A300u) {
        ctx->pc = 0x11A304u;
        goto label_11a304;
    }
    ctx->pc = 0x11A2FCu;
    SET_GPR_U32(ctx, 31, 0x11A304u);
    ctx->pc = 0x47CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CAD0u, 0x11A2FCu, 0x11A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A304u;
label_11a304:
    // 0x11a304: 0x10000008  b           . + 4 + (0x8 << 2)
label_11a308:
    if (ctx->pc == 0x11A308u) {
        ctx->pc = 0x11A30Cu;
        goto label_11a30c;
    }
    ctx->pc = 0x11A304u;
    {
        const bool branch_taken_0x11a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a304) {
            ctx->pc = 0x11A328u;
            goto label_11a328;
        }
    }
    ctx->pc = 0x11A30Cu;
label_11a30c:
    // 0x11a30c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_11a310:
    // 0x11a310: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11a310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11a314:
    // 0x11a314: 0x2784b6bc  addiu       $a0, $gp, -0x4944
    ctx->pc = 0x11a314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948540));
label_11a318:
    // 0x11a318: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x11a318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_11a31c:
    // 0x11a31c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11a31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11a320:
    // 0x11a320: 0xc11f2b4  jal         func_47CAD0
label_11a324:
    if (ctx->pc == 0x11A324u) {
        ctx->pc = 0x11A328u;
        goto label_11a328;
    }
    ctx->pc = 0x11A320u;
    SET_GPR_U32(ctx, 31, 0x11A328u);
    ctx->pc = 0x47CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CAD0u, 0x11A320u, 0x11A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A328u;
label_11a328:
    // 0x11a328: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x11a328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_11a32c:
    // 0x11a32c: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x11a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_11a330:
    // 0x11a330: 0xc042288  jal         func_108A20
label_11a334:
    if (ctx->pc == 0x11A334u) {
        ctx->pc = 0x11A338u;
        goto label_11a338;
    }
    ctx->pc = 0x11A330u;
    SET_GPR_U32(ctx, 31, 0x11A338u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x11A330u, 0x11A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A338u;
label_11a338:
    // 0x11a338: 0x1642ff4b  bne         $s2, $v0, . + 4 + (-0xB5 << 2)
label_11a33c:
    if (ctx->pc == 0x11A33Cu) {
        ctx->pc = 0x11A340u;
        goto label_11a340;
    }
    ctx->pc = 0x11A338u;
    {
        const bool branch_taken_0x11a338 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x11a338) {
            ctx->pc = 0x11A068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a068;
        }
    }
    ctx->pc = 0x11A340u;
label_11a340:
    // 0x11a340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a344:
    // 0x11a344: 0xc105f96  jal         func_417E58
label_11a348:
    if (ctx->pc == 0x11A348u) {
        ctx->pc = 0x11A34Cu;
        goto label_11a34c;
    }
    ctx->pc = 0x11A344u;
    SET_GPR_U32(ctx, 31, 0x11A34Cu);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x11A344u, 0x11A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A34Cu;
label_11a34c:
    // 0x11a34c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_11a350:
    if (ctx->pc == 0x11A350u) {
        ctx->pc = 0x11A354u;
        goto label_11a354;
    }
    ctx->pc = 0x11A34Cu;
    {
        const bool branch_taken_0x11a34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a34c) {
            ctx->pc = 0x11A3CCu;
            goto label_11a3cc;
        }
    }
    ctx->pc = 0x11A354u;
label_11a354:
    // 0x11a354: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x11a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11a358:
    // 0x11a358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a35c:
    // 0x11a35c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11a360:
    // 0x11a360: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11a360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11a364:
    // 0x11a364: 0x40f809  jalr        $v0
label_11a368:
    if (ctx->pc == 0x11A368u) {
        ctx->pc = 0x11A36Cu;
        goto label_11a36c;
    }
    ctx->pc = 0x11A364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11A36Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A364u, 0x11A36Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A36Cu;
label_11a36c:
    // 0x11a36c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x11a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11a370:
    // 0x11a370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a374:
    // 0x11a374: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11a374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11a378:
    // 0x11a378: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11a37c:
    // 0x11a37c: 0x40f809  jalr        $v0
label_11a380:
    if (ctx->pc == 0x11A380u) {
        ctx->pc = 0x11A384u;
        goto label_11a384;
    }
    ctx->pc = 0x11A37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11A384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A37Cu, 0x11A384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A384u;
label_11a384:
    // 0x11a384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a388:
    // 0x11a388: 0xc11f678  jal         func_47D9E0
label_11a38c:
    if (ctx->pc == 0x11A38Cu) {
        ctx->pc = 0x11A390u;
        goto label_11a390;
    }
    ctx->pc = 0x11A388u;
    SET_GPR_U32(ctx, 31, 0x11A390u);
    ctx->pc = 0x47D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9E0u, 0x11A388u, 0x11A390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A390u;
label_11a390:
    // 0x11a390: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x11a390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11a394:
    // 0x11a394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11a394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a398:
    // 0x11a398: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11a398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11a39c:
    // 0x11a39c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11a3a0:
    // 0x11a3a0: 0x40f809  jalr        $v0
label_11a3a4:
    if (ctx->pc == 0x11A3A4u) {
        ctx->pc = 0x11A3A8u;
        goto label_11a3a8;
    }
    ctx->pc = 0x11A3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11A3A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A3A0u, 0x11A3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A3A8u;
label_11a3a8:
    // 0x11a3a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x11a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_11a3ac:
    // 0x11a3ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a3b0:
    // 0x11a3b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x11a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_11a3b4:
    // 0x11a3b4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x11a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_11a3b8:
    // 0x11a3b8: 0x40f809  jalr        $v0
label_11a3bc:
    if (ctx->pc == 0x11A3BCu) {
        ctx->pc = 0x11A3C0u;
        goto label_11a3c0;
    }
    ctx->pc = 0x11A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11A3C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A3B8u, 0x11A3C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A3C0u;
label_11a3c0:
    // 0x11a3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a3c4:
    // 0x11a3c4: 0xc105f9e  jal         func_417E78
label_11a3c8:
    if (ctx->pc == 0x11A3C8u) {
        ctx->pc = 0x11A3CCu;
        goto label_11a3cc;
    }
    ctx->pc = 0x11A3C4u;
    SET_GPR_U32(ctx, 31, 0x11A3CCu);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x11A3C4u, 0x11A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3CCu;
label_11a3cc:
    // 0x11a3cc: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x11a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_11a3d0:
    // 0x11a3d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11a3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11a3d4:
    // 0x11a3d4: 0xc0420a0  jal         func_108280
label_11a3d8:
    if (ctx->pc == 0x11A3D8u) {
        ctx->pc = 0x11A3DCu;
        goto label_11a3dc;
    }
    ctx->pc = 0x11A3D4u;
    SET_GPR_U32(ctx, 31, 0x11A3DCu);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x11A3D4u, 0x11A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3DCu;
label_11a3dc:
    // 0x11a3dc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_11a3e0:
    if (ctx->pc == 0x11A3E0u) {
        ctx->pc = 0x11A3E4u;
        goto label_11a3e4;
    }
    ctx->pc = 0x11A3DCu;
    {
        const bool branch_taken_0x11a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a3dc) {
            ctx->pc = 0x11A4D8u;
            goto label_11a4d8;
        }
    }
    ctx->pc = 0x11A3E4u;
label_11a3e4:
    // 0x11a3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a3e8:
    // 0x11a3e8: 0xc105f96  jal         func_417E58
label_11a3ec:
    if (ctx->pc == 0x11A3ECu) {
        ctx->pc = 0x11A3F0u;
        goto label_11a3f0;
    }
    ctx->pc = 0x11A3E8u;
    SET_GPR_U32(ctx, 31, 0x11A3F0u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x11A3E8u, 0x11A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3F0u;
label_11a3f0:
    // 0x11a3f0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_11a3f4:
    if (ctx->pc == 0x11A3F4u) {
        ctx->pc = 0x11A3F8u;
        goto label_11a3f8;
    }
    ctx->pc = 0x11A3F0u;
    {
        const bool branch_taken_0x11a3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a3f0) {
            ctx->pc = 0x11A4C4u;
            goto label_11a4c4;
        }
    }
    ctx->pc = 0x11A3F8u;
label_11a3f8:
    // 0x11a3f8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x11a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_11a3fc:
    // 0x11a3fc: 0x1002002d  beq         $zero, $v0, . + 4 + (0x2D << 2)
label_11a400:
    if (ctx->pc == 0x11A400u) {
        ctx->pc = 0x11A404u;
        goto label_11a404;
    }
    ctx->pc = 0x11A3FCu;
    {
        const bool branch_taken_0x11a3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a3fc) {
            ctx->pc = 0x11A4B4u;
            goto label_11a4b4;
        }
    }
    ctx->pc = 0x11A404u;
label_11a404:
    // 0x11a404: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x11a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_11a408:
    // 0x11a408: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11a40c:
    // 0x11a40c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11a410:
    // 0x11a410: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_11a414:
    if (ctx->pc == 0x11A414u) {
        ctx->pc = 0x11A418u;
        goto label_11a418;
    }
    ctx->pc = 0x11A410u;
    {
        const bool branch_taken_0x11a410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11a410) {
            ctx->pc = 0x11A42Cu;
            goto label_11a42c;
        }
    }
    ctx->pc = 0x11A418u;
label_11a418:
    // 0x11a418: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x11a418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_11a41c:
    // 0x11a41c: 0xc0525ec  jal         func_1497B0
label_11a420:
    if (ctx->pc == 0x11A420u) {
        ctx->pc = 0x11A424u;
        goto label_11a424;
    }
    ctx->pc = 0x11A41Cu;
    SET_GPR_U32(ctx, 31, 0x11A424u);
    ctx->pc = 0x1497B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1497B0u, 0x11A41Cu, 0x11A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A424u;
label_11a424:
    // 0x11a424: 0x10000023  b           . + 4 + (0x23 << 2)
label_11a428:
    if (ctx->pc == 0x11A428u) {
        ctx->pc = 0x11A42Cu;
        goto label_11a42c;
    }
    ctx->pc = 0x11A424u;
    {
        const bool branch_taken_0x11a424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a424) {
            ctx->pc = 0x11A4B4u;
            goto label_11a4b4;
        }
    }
    ctx->pc = 0x11A42Cu;
label_11a42c:
    // 0x11a42c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x11a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_11a430:
    // 0x11a430: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11a430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11a434:
    // 0x11a434: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_11a438:
    // 0x11a438: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_11a43c:
    if (ctx->pc == 0x11A43Cu) {
        ctx->pc = 0x11A440u;
        goto label_11a440;
    }
    ctx->pc = 0x11A438u;
    {
        const bool branch_taken_0x11a438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x11a438) {
            ctx->pc = 0x11A454u;
            goto label_11a454;
        }
    }
    ctx->pc = 0x11A440u;
label_11a440:
    // 0x11a440: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x11a440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_11a444:
    // 0x11a444: 0xc052600  jal         func_149800
label_11a448:
    if (ctx->pc == 0x11A448u) {
        ctx->pc = 0x11A44Cu;
        goto label_11a44c;
    }
    ctx->pc = 0x11A444u;
    SET_GPR_U32(ctx, 31, 0x11A44Cu);
    ctx->pc = 0x149800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149800u, 0x11A444u, 0x11A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A44Cu;
label_11a44c:
    // 0x11a44c: 0x10000019  b           . + 4 + (0x19 << 2)
label_11a450:
    if (ctx->pc == 0x11A450u) {
        ctx->pc = 0x11A454u;
        goto label_11a454;
    }
    ctx->pc = 0x11A44Cu;
    {
        const bool branch_taken_0x11a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a44c) {
            ctx->pc = 0x11A4B4u;
            goto label_11a4b4;
        }
    }
    ctx->pc = 0x11A454u;
label_11a454:
    // 0x11a454: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x11a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_11a458:
    // 0x11a458: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11a458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11a45c:
    // 0x11a45c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x11a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_11a460:
    // 0x11a460: 0x1485000b  bne         $a0, $a1, . + 4 + (0xB << 2)
label_11a464:
    if (ctx->pc == 0x11A464u) {
        ctx->pc = 0x11A468u;
        goto label_11a468;
    }
    ctx->pc = 0x11A460u;
    {
        const bool branch_taken_0x11a460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x11a460) {
            ctx->pc = 0x11A490u;
            goto label_11a490;
        }
    }
    ctx->pc = 0x11A468u;
label_11a468:
    // 0x11a468: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x11a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_11a46c:
    // 0x11a46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a470:
    // 0x11a470: 0xc052634  jal         func_1498D0
label_11a474:
    if (ctx->pc == 0x11A474u) {
        ctx->pc = 0x11A478u;
        goto label_11a478;
    }
    ctx->pc = 0x11A470u;
    SET_GPR_U32(ctx, 31, 0x11A478u);
    ctx->pc = 0x1498D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498D0u, 0x11A470u, 0x11A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A478u;
label_11a478:
    // 0x11a478: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x11a478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_11a47c:
    // 0x11a47c: 0xc052630  jal         func_1498C0
label_11a480:
    if (ctx->pc == 0x11A480u) {
        ctx->pc = 0x11A484u;
        goto label_11a484;
    }
    ctx->pc = 0x11A47Cu;
    SET_GPR_U32(ctx, 31, 0x11A484u);
    ctx->pc = 0x1498C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498C0u, 0x11A47Cu, 0x11A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A484u;
label_11a484:
    // 0x11a484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a488:
    // 0x11a488: 0x1000000a  b           . + 4 + (0xA << 2)
label_11a48c:
    if (ctx->pc == 0x11A48Cu) {
        ctx->pc = 0x11A490u;
        goto label_11a490;
    }
    ctx->pc = 0x11A488u;
    {
        const bool branch_taken_0x11a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a488) {
            ctx->pc = 0x11A4B4u;
            goto label_11a4b4;
        }
    }
    ctx->pc = 0x11A490u;
label_11a490:
    // 0x11a490: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x11a490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_11a494:
    // 0x11a494: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11a498:
    // 0x11a498: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x11a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_11a49c:
    // 0x11a49c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_11a4a0:
    if (ctx->pc == 0x11A4A0u) {
        ctx->pc = 0x11A4A4u;
        goto label_11a4a4;
    }
    ctx->pc = 0x11A49Cu;
    {
        const bool branch_taken_0x11a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11a49c) {
            ctx->pc = 0x11A4B4u;
            goto label_11a4b4;
        }
    }
    ctx->pc = 0x11A4A4u;
label_11a4a4:
    // 0x11a4a4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x11a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_11a4a8:
    // 0x11a4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a4ac:
    // 0x11a4ac: 0xc052604  jal         func_149810
label_11a4b0:
    if (ctx->pc == 0x11A4B0u) {
        ctx->pc = 0x11A4B4u;
        goto label_11a4b4;
    }
    ctx->pc = 0x11A4ACu;
    SET_GPR_U32(ctx, 31, 0x11A4B4u);
    ctx->pc = 0x149810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149810u, 0x11A4ACu, 0x11A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4B4u;
label_11a4b4:
    // 0x11a4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a4b8:
    // 0x11a4b8: 0xc105f9e  jal         func_417E78
label_11a4bc:
    if (ctx->pc == 0x11A4BCu) {
        ctx->pc = 0x11A4C0u;
        goto label_11a4c0;
    }
    ctx->pc = 0x11A4B8u;
    SET_GPR_U32(ctx, 31, 0x11A4C0u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x11A4B8u, 0x11A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4C0u;
label_11a4c0:
    // 0x11a4c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a4c4:
    // 0x11a4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a4c8:
    // 0x11a4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a4cc:
    // 0x11a4cc: 0xc11f678  jal         func_47D9E0
label_11a4d0:
    if (ctx->pc == 0x11A4D0u) {
        ctx->pc = 0x11A4D4u;
        goto label_11a4d4;
    }
    ctx->pc = 0x11A4CCu;
    SET_GPR_U32(ctx, 31, 0x11A4D4u);
    ctx->pc = 0x47D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9E0u, 0x11A4CCu, 0x11A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4D4u;
label_11a4d4:
    // 0x11a4d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11a4d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a4d8:
    // 0x11a4d8: 0xc11c204  jal         func_470810
label_11a4dc:
    if (ctx->pc == 0x11A4DCu) {
        ctx->pc = 0x11A4E0u;
        goto label_11a4e0;
    }
    ctx->pc = 0x11A4D8u;
    SET_GPR_U32(ctx, 31, 0x11A4E0u);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x11A4D8u, 0x11A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4E0u;
label_11a4e0:
    // 0x11a4e0: 0x8fa401cc  lw          $a0, 0x1CC($sp)
    ctx->pc = 0x11a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_11a4e4:
    // 0x11a4e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a4e8:
    // 0x11a4e8: 0xc0e6e40  jal         func_39B900
label_11a4ec:
    if (ctx->pc == 0x11A4ECu) {
        ctx->pc = 0x11A4F0u;
        goto label_11a4f0;
    }
    ctx->pc = 0x11A4E8u;
    SET_GPR_U32(ctx, 31, 0x11A4F0u);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x11A4E8u, 0x11A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4F0u;
label_11a4f0:
    // 0x11a4f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a4f4:
    // 0x11a4f4: 0xc11c38c  jal         func_470E30
label_11a4f8:
    if (ctx->pc == 0x11A4F8u) {
        ctx->pc = 0x11A4FCu;
        goto label_11a4fc;
    }
    ctx->pc = 0x11A4F4u;
    SET_GPR_U32(ctx, 31, 0x11A4FCu);
    ctx->pc = 0x470E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E30u, 0x11A4F4u, 0x11A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4FCu;
label_11a4fc:
    // 0x11a4fc: 0x93a201ef  lbu         $v0, 0x1EF($sp)
    ctx->pc = 0x11a4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 495)));
label_11a500:
    // 0x11a500: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_11a504:
    if (ctx->pc == 0x11A504u) {
        ctx->pc = 0x11A508u;
        goto label_11a508;
    }
    ctx->pc = 0x11A500u;
    {
        const bool branch_taken_0x11a500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a500) {
            ctx->pc = 0x11A5C8u;
            goto label_11a5c8;
        }
    }
    ctx->pc = 0x11A508u;
label_11a508:
    // 0x11a508: 0xa3a001ec  sb          $zero, 0x1EC($sp)
    ctx->pc = 0x11a508u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 492), (uint8_t)GPR_U32(ctx, 0));
label_11a50c:
    // 0x11a50c: 0xc08ef50  jal         func_23BD40
label_11a510:
    if (ctx->pc == 0x11A510u) {
        ctx->pc = 0x11A514u;
        goto label_11a514;
    }
    ctx->pc = 0x11A50Cu;
    SET_GPR_U32(ctx, 31, 0x11A514u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x11A50Cu, 0x11A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A514u;
label_11a514:
    // 0x11a514: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x11a514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_11a518:
    // 0x11a518: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x11a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_11a51c:
    // 0x11a51c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_11a520:
    if (ctx->pc == 0x11A520u) {
        ctx->pc = 0x11A524u;
        goto label_11a524;
    }
    ctx->pc = 0x11A51Cu;
    {
        const bool branch_taken_0x11a51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a51c) {
            ctx->pc = 0x11A59Cu;
            goto label_11a59c;
        }
    }
    ctx->pc = 0x11A524u;
label_11a524:
    // 0x11a524: 0x8fb601b4  lw          $s6, 0x1B4($sp)
    ctx->pc = 0x11a524u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_11a528:
    // 0x11a528: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a52c:
    // 0x11a52c: 0xc0406f0  jal         func_101BC0
label_11a530:
    if (ctx->pc == 0x11A530u) {
        ctx->pc = 0x11A534u;
        goto label_11a534;
    }
    ctx->pc = 0x11A52Cu;
    SET_GPR_U32(ctx, 31, 0x11A534u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x11A52Cu, 0x11A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A534u;
label_11a534:
    // 0x11a534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a538:
    // 0x11a538: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x11a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_11a53c:
    // 0x11a53c: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
label_11a540:
    if (ctx->pc == 0x11A540u) {
        ctx->pc = 0x11A544u;
        goto label_11a544;
    }
    ctx->pc = 0x11A53Cu;
    {
        const bool branch_taken_0x11a53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x11a53c) {
            ctx->pc = 0x11A59Cu;
            goto label_11a59c;
        }
    }
    ctx->pc = 0x11A544u;
label_11a544:
    // 0x11a544: 0xc05548c  jal         func_155230
label_11a548:
    if (ctx->pc == 0x11A548u) {
        ctx->pc = 0x11A54Cu;
        goto label_11a54c;
    }
    ctx->pc = 0x11A544u;
    SET_GPR_U32(ctx, 31, 0x11A54Cu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x11A544u, 0x11A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A54Cu;
label_11a54c:
    // 0x11a54c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a550:
    // 0x11a550: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x11a550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_11a554:
    // 0x11a554: 0xc0553d4  jal         func_154F50
label_11a558:
    if (ctx->pc == 0x11A558u) {
        ctx->pc = 0x11A55Cu;
        goto label_11a55c;
    }
    ctx->pc = 0x11A554u;
    SET_GPR_U32(ctx, 31, 0x11A55Cu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11A554u, 0x11A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A55Cu;
label_11a55c:
    // 0x11a55c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11a55cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a560:
    // 0x11a560: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_11a564:
    if (ctx->pc == 0x11A564u) {
        ctx->pc = 0x11A568u;
        goto label_11a568;
    }
    ctx->pc = 0x11A560u;
    {
        const bool branch_taken_0x11a560 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a560) {
            ctx->pc = 0x11A59Cu;
            goto label_11a59c;
        }
    }
    ctx->pc = 0x11A568u;
label_11a568:
    // 0x11a568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a56c:
    // 0x11a56c: 0xc0413bc  jal         func_104EF0
label_11a570:
    if (ctx->pc == 0x11A570u) {
        ctx->pc = 0x11A574u;
        goto label_11a574;
    }
    ctx->pc = 0x11A56Cu;
    SET_GPR_U32(ctx, 31, 0x11A574u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x11A56Cu, 0x11A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A574u;
label_11a574:
    // 0x11a574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a578:
    // 0x11a578: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_11a57c:
    if (ctx->pc == 0x11A57Cu) {
        ctx->pc = 0x11A580u;
        goto label_11a580;
    }
    ctx->pc = 0x11A578u;
    {
        const bool branch_taken_0x11a578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a578) {
            ctx->pc = 0x11A59Cu;
            goto label_11a59c;
        }
    }
    ctx->pc = 0x11A580u;
label_11a580:
    // 0x11a580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a584:
    // 0x11a584: 0xa3a201ec  sb          $v0, 0x1EC($sp)
    ctx->pc = 0x11a584u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 492), (uint8_t)GPR_U32(ctx, 2));
label_11a588:
    // 0x11a588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11a58c:
    // 0x11a58c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11a58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11a590:
    // 0x11a590: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x11a590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_11a594:
    // 0x11a594: 0x320f809  jalr        $t9
label_11a598:
    if (ctx->pc == 0x11A598u) {
        ctx->pc = 0x11A59Cu;
        goto label_11a59c;
    }
    ctx->pc = 0x11A594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11A59Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A594u, 0x11A59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A59Cu;
label_11a59c:
    // 0x11a59c: 0x93a201ec  lbu         $v0, 0x1EC($sp)
    ctx->pc = 0x11a59cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 492)));
label_11a5a0:
    // 0x11a5a0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_11a5a4:
    if (ctx->pc == 0x11A5A4u) {
        ctx->pc = 0x11A5A8u;
        goto label_11a5a8;
    }
    ctx->pc = 0x11A5A0u;
    {
        const bool branch_taken_0x11a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a5a0) {
            ctx->pc = 0x11A5D4u;
            goto label_11a5d4;
        }
    }
    ctx->pc = 0x11A5A8u;
label_11a5a8:
    // 0x11a5a8: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x11a5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_11a5ac:
    // 0x11a5ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11a5b0:
    if (ctx->pc == 0x11A5B0u) {
        ctx->pc = 0x11A5B4u;
        goto label_11a5b4;
    }
    ctx->pc = 0x11A5ACu;
    {
        const bool branch_taken_0x11a5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a5ac) {
            ctx->pc = 0x11A5D4u;
            goto label_11a5d4;
        }
    }
    ctx->pc = 0x11A5B4u;
label_11a5b4:
    // 0x11a5b4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x11a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_11a5b8:
    // 0x11a5b8: 0xc055440  jal         func_155100
label_11a5bc:
    if (ctx->pc == 0x11A5BCu) {
        ctx->pc = 0x11A5C0u;
        goto label_11a5c0;
    }
    ctx->pc = 0x11A5B8u;
    SET_GPR_U32(ctx, 31, 0x11A5C0u);
    ctx->pc = 0x155100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155100u, 0x11A5B8u, 0x11A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5C0u;
label_11a5c0:
    // 0x11a5c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_11a5c4:
    if (ctx->pc == 0x11A5C4u) {
        ctx->pc = 0x11A5C8u;
        goto label_11a5c8;
    }
    ctx->pc = 0x11A5C0u;
    {
        const bool branch_taken_0x11a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a5c0) {
            ctx->pc = 0x11A5D4u;
            goto label_11a5d4;
        }
    }
    ctx->pc = 0x11A5C8u;
label_11a5c8:
    // 0x11a5c8: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x11a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_11a5cc:
    // 0x11a5cc: 0xc04e1dc  jal         func_138770
label_11a5d0:
    if (ctx->pc == 0x11A5D0u) {
        ctx->pc = 0x11A5D4u;
        goto label_11a5d4;
    }
    ctx->pc = 0x11A5CCu;
    SET_GPR_U32(ctx, 31, 0x11A5D4u);
    ctx->pc = 0x138770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138770u, 0x11A5CCu, 0x11A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5D4u;
label_11a5d4:
    // 0x11a5d4: 0xc11c448  jal         func_471120
label_11a5d8:
    if (ctx->pc == 0x11A5D8u) {
        ctx->pc = 0x11A5DCu;
        goto label_11a5dc;
    }
    ctx->pc = 0x11A5D4u;
    SET_GPR_U32(ctx, 31, 0x11A5DCu);
    ctx->pc = 0x471120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471120u, 0x11A5D4u, 0x11A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5DCu;
label_11a5dc:
    // 0x11a5dc: 0xc11c204  jal         func_470810
label_11a5e0:
    if (ctx->pc == 0x11A5E0u) {
        ctx->pc = 0x11A5E4u;
        goto label_11a5e4;
    }
    ctx->pc = 0x11A5DCu;
    SET_GPR_U32(ctx, 31, 0x11A5E4u);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x11A5DCu, 0x11A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5E4u;
label_11a5e4:
    // 0x11a5e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a5e8:
    // 0x11a5e8: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x11a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_11a5ec:
    // 0x11a5ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a5f0:
    // 0x11a5f0: 0xc0e6e36  jal         func_39B8D8
label_11a5f4:
    if (ctx->pc == 0x11A5F4u) {
        ctx->pc = 0x11A5F8u;
        goto label_11a5f8;
    }
    ctx->pc = 0x11A5F0u;
    SET_GPR_U32(ctx, 31, 0x11A5F8u);
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x11A5F0u, 0x11A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A5F8u;
label_11a5f8:
    // 0x11a5f8: 0x9202004c  lbu         $v0, 0x4C($s0)
    ctx->pc = 0x11a5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_11a5fc:
    // 0x11a5fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_11a600:
    if (ctx->pc == 0x11A600u) {
        ctx->pc = 0x11A604u;
        goto label_11a604;
    }
    ctx->pc = 0x11A5FCu;
    {
        const bool branch_taken_0x11a5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a5fc) {
            ctx->pc = 0x11A644u;
            goto label_11a644;
        }
    }
    ctx->pc = 0x11A604u;
label_11a604:
    // 0x11a604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a608:
    // 0x11a608: 0xc105f96  jal         func_417E58
label_11a60c:
    if (ctx->pc == 0x11A60Cu) {
        ctx->pc = 0x11A610u;
        goto label_11a610;
    }
    ctx->pc = 0x11A608u;
    SET_GPR_U32(ctx, 31, 0x11A610u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x11A608u, 0x11A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A610u;
label_11a610:
    // 0x11a610: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_11a614:
    if (ctx->pc == 0x11A614u) {
        ctx->pc = 0x11A618u;
        goto label_11a618;
    }
    ctx->pc = 0x11A610u;
    {
        const bool branch_taken_0x11a610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a610) {
            ctx->pc = 0x11A644u;
            goto label_11a644;
        }
    }
    ctx->pc = 0x11A618u;
label_11a618:
    // 0x11a618: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x11a618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_11a61c:
    // 0x11a61c: 0x10040005  beq         $zero, $a0, . + 4 + (0x5 << 2)
label_11a620:
    if (ctx->pc == 0x11A620u) {
        ctx->pc = 0x11A624u;
        goto label_11a624;
    }
    ctx->pc = 0x11A61Cu;
    {
        const bool branch_taken_0x11a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x11a61c) {
            ctx->pc = 0x11A634u;
            goto label_11a634;
        }
    }
    ctx->pc = 0x11A624u;
label_11a624:
    // 0x11a624: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x11a624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_11a628:
    // 0x11a628: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11a62c:
    // 0x11a62c: 0xc0525a8  jal         func_1496A0
label_11a630:
    if (ctx->pc == 0x11A630u) {
        ctx->pc = 0x11A634u;
        goto label_11a634;
    }
    ctx->pc = 0x11A62Cu;
    SET_GPR_U32(ctx, 31, 0x11A634u);
    ctx->pc = 0x1496A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1496A0u, 0x11A62Cu, 0x11A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A634u;
label_11a634:
    // 0x11a634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a638:
    // 0x11a638: 0xc105f9e  jal         func_417E78
label_11a63c:
    if (ctx->pc == 0x11A63Cu) {
        ctx->pc = 0x11A640u;
        goto label_11a640;
    }
    ctx->pc = 0x11A638u;
    SET_GPR_U32(ctx, 31, 0x11A640u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x11A638u, 0x11A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A640u;
label_11a640:
    // 0x11a640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a644:
    // 0x11a644: 0x8f86bb80  lw          $a2, -0x4480($gp)
    ctx->pc = 0x11a644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_11a648:
    // 0x11a648: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x11a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_11a64c:
    // 0x11a64c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_11a650:
    // 0x11a650: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_11a654:
    if (ctx->pc == 0x11A654u) {
        ctx->pc = 0x11A658u;
        goto label_11a658;
    }
    ctx->pc = 0x11A650u;
    {
        const bool branch_taken_0x11a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11a650) {
            ctx->pc = 0x11A684u;
            goto label_11a684;
        }
    }
    ctx->pc = 0x11A658u;
label_11a658:
    // 0x11a658: 0x9210004c  lbu         $s0, 0x4C($s0)
    ctx->pc = 0x11a658u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_11a65c:
    // 0x11a65c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_11a660:
    if (ctx->pc == 0x11A660u) {
        ctx->pc = 0x11A664u;
        goto label_11a664;
    }
    ctx->pc = 0x11A65Cu;
    {
        const bool branch_taken_0x11a65c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a65c) {
            ctx->pc = 0x11A684u;
            goto label_11a684;
        }
    }
    ctx->pc = 0x11A664u;
label_11a664:
    // 0x11a664: 0xc0469c0  jal         func_11A700
label_11a668:
    if (ctx->pc == 0x11A668u) {
        ctx->pc = 0x11A66Cu;
        goto label_11a66c;
    }
    ctx->pc = 0x11A664u;
    SET_GPR_U32(ctx, 31, 0x11A66Cu);
    ctx->pc = 0x11A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A700u, 0x11A664u, 0x11A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A66Cu;
label_11a66c:
    // 0x11a66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a670:
    // 0x11a670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11a670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11a674:
    // 0x11a674: 0xc0469b8  jal         func_11A6E0
label_11a678:
    if (ctx->pc == 0x11A678u) {
        ctx->pc = 0x11A67Cu;
        goto label_11a67c;
    }
    ctx->pc = 0x11A674u;
    SET_GPR_U32(ctx, 31, 0x11A67Cu);
    ctx->pc = 0x11A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A6E0u, 0x11A674u, 0x11A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A67Cu;
label_11a67c:
    // 0x11a67c: 0xc11f690  jal         func_47DA40
label_11a680:
    if (ctx->pc == 0x11A680u) {
        ctx->pc = 0x11A684u;
        goto label_11a684;
    }
    ctx->pc = 0x11A67Cu;
    SET_GPR_U32(ctx, 31, 0x11A684u);
    ctx->pc = 0x47DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DA40u, 0x11A67Cu, 0x11A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A684u;
label_11a684:
    // 0x11a684: 0xc11f690  jal         func_47DA40
label_11a688:
    if (ctx->pc == 0x11A688u) {
        ctx->pc = 0x11A68Cu;
        goto label_11a68c;
    }
    ctx->pc = 0x11A684u;
    SET_GPR_U32(ctx, 31, 0x11A68Cu);
    ctx->pc = 0x47DA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DA40u, 0x11A684u, 0x11A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A68Cu;
label_11a68c:
    // 0x11a68c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11a690:
    // 0x11a690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a694:
    // 0x11a694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a698:
    // 0x11a698: 0xc105fb4  jal         func_417ED0
label_11a69c:
    if (ctx->pc == 0x11A69Cu) {
        ctx->pc = 0x11A6A0u;
        goto label_11a6a0;
    }
    ctx->pc = 0x11A698u;
    SET_GPR_U32(ctx, 31, 0x11A6A0u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x11A698u, 0x11A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A6A0u;
label_11a6a0:
    // 0x11a6a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a6a4:
    // 0x11a6a4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11a6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11a6a8:
    // 0x11a6a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11a6a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11a6ac:
    // 0x11a6ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11a6acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11a6b0:
    // 0x11a6b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11a6b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11a6b4:
    // 0x11a6b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11a6b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11a6b8:
    // 0x11a6b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11a6b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11a6bc:
    // 0x11a6bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11a6bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11a6c0:
    // 0x11a6c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11a6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11a6c4:
    // 0x11a6c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11a6c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11a6c8:
    // 0x11a6c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11a6cc:
    // 0x11a6cc: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x11a6ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_11a6d0:
    // 0x11a6d0: 0x3e00008  jr          $ra
label_11a6d4:
    if (ctx->pc == 0x11A6D4u) {
        ctx->pc = 0x11A6D8u;
        goto label_11a6d8;
    }
    ctx->pc = 0x11A6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A6D8u;
label_11a6d8:
    // 0x11a6d8: 0x0  nop
    ctx->pc = 0x11a6d8u;
    // NOP
label_11a6dc:
    // 0x11a6dc: 0x0  nop
    ctx->pc = 0x11a6dcu;
    // NOP
    ctx->pc = 0x11a6e0u;
}
