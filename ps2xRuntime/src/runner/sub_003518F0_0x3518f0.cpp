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

// Function: sub_003518F0
// Address: 0x3518f0 - 0x352628
void sub_003518F0_0x3518f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003518F0_0x3518f0");
#endif

    switch (ctx->pc) {
        case 0x3518f0u: goto label_3518f0;
        case 0x3518f4u: goto label_3518f4;
        case 0x3518f8u: goto label_3518f8;
        case 0x3518fcu: goto label_3518fc;
        case 0x351900u: goto label_351900;
        case 0x351904u: goto label_351904;
        case 0x351908u: goto label_351908;
        case 0x35190cu: goto label_35190c;
        case 0x351910u: goto label_351910;
        case 0x351914u: goto label_351914;
        case 0x351918u: goto label_351918;
        case 0x35191cu: goto label_35191c;
        case 0x351920u: goto label_351920;
        case 0x351924u: goto label_351924;
        case 0x351928u: goto label_351928;
        case 0x35192cu: goto label_35192c;
        case 0x351930u: goto label_351930;
        case 0x351934u: goto label_351934;
        case 0x351938u: goto label_351938;
        case 0x35193cu: goto label_35193c;
        case 0x351940u: goto label_351940;
        case 0x351944u: goto label_351944;
        case 0x351948u: goto label_351948;
        case 0x35194cu: goto label_35194c;
        case 0x351950u: goto label_351950;
        case 0x351954u: goto label_351954;
        case 0x351958u: goto label_351958;
        case 0x35195cu: goto label_35195c;
        case 0x351960u: goto label_351960;
        case 0x351964u: goto label_351964;
        case 0x351968u: goto label_351968;
        case 0x35196cu: goto label_35196c;
        case 0x351970u: goto label_351970;
        case 0x351974u: goto label_351974;
        case 0x351978u: goto label_351978;
        case 0x35197cu: goto label_35197c;
        case 0x351980u: goto label_351980;
        case 0x351984u: goto label_351984;
        case 0x351988u: goto label_351988;
        case 0x35198cu: goto label_35198c;
        case 0x351990u: goto label_351990;
        case 0x351994u: goto label_351994;
        case 0x351998u: goto label_351998;
        case 0x35199cu: goto label_35199c;
        case 0x3519a0u: goto label_3519a0;
        case 0x3519a4u: goto label_3519a4;
        case 0x3519a8u: goto label_3519a8;
        case 0x3519acu: goto label_3519ac;
        case 0x3519b0u: goto label_3519b0;
        case 0x3519b4u: goto label_3519b4;
        case 0x3519b8u: goto label_3519b8;
        case 0x3519bcu: goto label_3519bc;
        case 0x3519c0u: goto label_3519c0;
        case 0x3519c4u: goto label_3519c4;
        case 0x3519c8u: goto label_3519c8;
        case 0x3519ccu: goto label_3519cc;
        case 0x3519d0u: goto label_3519d0;
        case 0x3519d4u: goto label_3519d4;
        case 0x3519d8u: goto label_3519d8;
        case 0x3519dcu: goto label_3519dc;
        case 0x3519e0u: goto label_3519e0;
        case 0x3519e4u: goto label_3519e4;
        case 0x3519e8u: goto label_3519e8;
        case 0x3519ecu: goto label_3519ec;
        case 0x3519f0u: goto label_3519f0;
        case 0x3519f4u: goto label_3519f4;
        case 0x3519f8u: goto label_3519f8;
        case 0x3519fcu: goto label_3519fc;
        case 0x351a00u: goto label_351a00;
        case 0x351a04u: goto label_351a04;
        case 0x351a08u: goto label_351a08;
        case 0x351a0cu: goto label_351a0c;
        case 0x351a10u: goto label_351a10;
        case 0x351a14u: goto label_351a14;
        case 0x351a18u: goto label_351a18;
        case 0x351a1cu: goto label_351a1c;
        case 0x351a20u: goto label_351a20;
        case 0x351a24u: goto label_351a24;
        case 0x351a28u: goto label_351a28;
        case 0x351a2cu: goto label_351a2c;
        case 0x351a30u: goto label_351a30;
        case 0x351a34u: goto label_351a34;
        case 0x351a38u: goto label_351a38;
        case 0x351a3cu: goto label_351a3c;
        case 0x351a40u: goto label_351a40;
        case 0x351a44u: goto label_351a44;
        case 0x351a48u: goto label_351a48;
        case 0x351a4cu: goto label_351a4c;
        case 0x351a50u: goto label_351a50;
        case 0x351a54u: goto label_351a54;
        case 0x351a58u: goto label_351a58;
        case 0x351a5cu: goto label_351a5c;
        case 0x351a60u: goto label_351a60;
        case 0x351a64u: goto label_351a64;
        case 0x351a68u: goto label_351a68;
        case 0x351a6cu: goto label_351a6c;
        case 0x351a70u: goto label_351a70;
        case 0x351a74u: goto label_351a74;
        case 0x351a78u: goto label_351a78;
        case 0x351a7cu: goto label_351a7c;
        case 0x351a80u: goto label_351a80;
        case 0x351a84u: goto label_351a84;
        case 0x351a88u: goto label_351a88;
        case 0x351a8cu: goto label_351a8c;
        case 0x351a90u: goto label_351a90;
        case 0x351a94u: goto label_351a94;
        case 0x351a98u: goto label_351a98;
        case 0x351a9cu: goto label_351a9c;
        case 0x351aa0u: goto label_351aa0;
        case 0x351aa4u: goto label_351aa4;
        case 0x351aa8u: goto label_351aa8;
        case 0x351aacu: goto label_351aac;
        case 0x351ab0u: goto label_351ab0;
        case 0x351ab4u: goto label_351ab4;
        case 0x351ab8u: goto label_351ab8;
        case 0x351abcu: goto label_351abc;
        case 0x351ac0u: goto label_351ac0;
        case 0x351ac4u: goto label_351ac4;
        case 0x351ac8u: goto label_351ac8;
        case 0x351accu: goto label_351acc;
        case 0x351ad0u: goto label_351ad0;
        case 0x351ad4u: goto label_351ad4;
        case 0x351ad8u: goto label_351ad8;
        case 0x351adcu: goto label_351adc;
        case 0x351ae0u: goto label_351ae0;
        case 0x351ae4u: goto label_351ae4;
        case 0x351ae8u: goto label_351ae8;
        case 0x351aecu: goto label_351aec;
        case 0x351af0u: goto label_351af0;
        case 0x351af4u: goto label_351af4;
        case 0x351af8u: goto label_351af8;
        case 0x351afcu: goto label_351afc;
        case 0x351b00u: goto label_351b00;
        case 0x351b04u: goto label_351b04;
        case 0x351b08u: goto label_351b08;
        case 0x351b0cu: goto label_351b0c;
        case 0x351b10u: goto label_351b10;
        case 0x351b14u: goto label_351b14;
        case 0x351b18u: goto label_351b18;
        case 0x351b1cu: goto label_351b1c;
        case 0x351b20u: goto label_351b20;
        case 0x351b24u: goto label_351b24;
        case 0x351b28u: goto label_351b28;
        case 0x351b2cu: goto label_351b2c;
        case 0x351b30u: goto label_351b30;
        case 0x351b34u: goto label_351b34;
        case 0x351b38u: goto label_351b38;
        case 0x351b3cu: goto label_351b3c;
        case 0x351b40u: goto label_351b40;
        case 0x351b44u: goto label_351b44;
        case 0x351b48u: goto label_351b48;
        case 0x351b4cu: goto label_351b4c;
        case 0x351b50u: goto label_351b50;
        case 0x351b54u: goto label_351b54;
        case 0x351b58u: goto label_351b58;
        case 0x351b5cu: goto label_351b5c;
        case 0x351b60u: goto label_351b60;
        case 0x351b64u: goto label_351b64;
        case 0x351b68u: goto label_351b68;
        case 0x351b6cu: goto label_351b6c;
        case 0x351b70u: goto label_351b70;
        case 0x351b74u: goto label_351b74;
        case 0x351b78u: goto label_351b78;
        case 0x351b7cu: goto label_351b7c;
        case 0x351b80u: goto label_351b80;
        case 0x351b84u: goto label_351b84;
        case 0x351b88u: goto label_351b88;
        case 0x351b8cu: goto label_351b8c;
        case 0x351b90u: goto label_351b90;
        case 0x351b94u: goto label_351b94;
        case 0x351b98u: goto label_351b98;
        case 0x351b9cu: goto label_351b9c;
        case 0x351ba0u: goto label_351ba0;
        case 0x351ba4u: goto label_351ba4;
        case 0x351ba8u: goto label_351ba8;
        case 0x351bacu: goto label_351bac;
        case 0x351bb0u: goto label_351bb0;
        case 0x351bb4u: goto label_351bb4;
        case 0x351bb8u: goto label_351bb8;
        case 0x351bbcu: goto label_351bbc;
        case 0x351bc0u: goto label_351bc0;
        case 0x351bc4u: goto label_351bc4;
        case 0x351bc8u: goto label_351bc8;
        case 0x351bccu: goto label_351bcc;
        case 0x351bd0u: goto label_351bd0;
        case 0x351bd4u: goto label_351bd4;
        case 0x351bd8u: goto label_351bd8;
        case 0x351bdcu: goto label_351bdc;
        case 0x351be0u: goto label_351be0;
        case 0x351be4u: goto label_351be4;
        case 0x351be8u: goto label_351be8;
        case 0x351becu: goto label_351bec;
        case 0x351bf0u: goto label_351bf0;
        case 0x351bf4u: goto label_351bf4;
        case 0x351bf8u: goto label_351bf8;
        case 0x351bfcu: goto label_351bfc;
        case 0x351c00u: goto label_351c00;
        case 0x351c04u: goto label_351c04;
        case 0x351c08u: goto label_351c08;
        case 0x351c0cu: goto label_351c0c;
        case 0x351c10u: goto label_351c10;
        case 0x351c14u: goto label_351c14;
        case 0x351c18u: goto label_351c18;
        case 0x351c1cu: goto label_351c1c;
        case 0x351c20u: goto label_351c20;
        case 0x351c24u: goto label_351c24;
        case 0x351c28u: goto label_351c28;
        case 0x351c2cu: goto label_351c2c;
        case 0x351c30u: goto label_351c30;
        case 0x351c34u: goto label_351c34;
        case 0x351c38u: goto label_351c38;
        case 0x351c3cu: goto label_351c3c;
        case 0x351c40u: goto label_351c40;
        case 0x351c44u: goto label_351c44;
        case 0x351c48u: goto label_351c48;
        case 0x351c4cu: goto label_351c4c;
        case 0x351c50u: goto label_351c50;
        case 0x351c54u: goto label_351c54;
        case 0x351c58u: goto label_351c58;
        case 0x351c5cu: goto label_351c5c;
        case 0x351c60u: goto label_351c60;
        case 0x351c64u: goto label_351c64;
        case 0x351c68u: goto label_351c68;
        case 0x351c6cu: goto label_351c6c;
        case 0x351c70u: goto label_351c70;
        case 0x351c74u: goto label_351c74;
        case 0x351c78u: goto label_351c78;
        case 0x351c7cu: goto label_351c7c;
        case 0x351c80u: goto label_351c80;
        case 0x351c84u: goto label_351c84;
        case 0x351c88u: goto label_351c88;
        case 0x351c8cu: goto label_351c8c;
        case 0x351c90u: goto label_351c90;
        case 0x351c94u: goto label_351c94;
        case 0x351c98u: goto label_351c98;
        case 0x351c9cu: goto label_351c9c;
        case 0x351ca0u: goto label_351ca0;
        case 0x351ca4u: goto label_351ca4;
        case 0x351ca8u: goto label_351ca8;
        case 0x351cacu: goto label_351cac;
        case 0x351cb0u: goto label_351cb0;
        case 0x351cb4u: goto label_351cb4;
        case 0x351cb8u: goto label_351cb8;
        case 0x351cbcu: goto label_351cbc;
        case 0x351cc0u: goto label_351cc0;
        case 0x351cc4u: goto label_351cc4;
        case 0x351cc8u: goto label_351cc8;
        case 0x351cccu: goto label_351ccc;
        case 0x351cd0u: goto label_351cd0;
        case 0x351cd4u: goto label_351cd4;
        case 0x351cd8u: goto label_351cd8;
        case 0x351cdcu: goto label_351cdc;
        case 0x351ce0u: goto label_351ce0;
        case 0x351ce4u: goto label_351ce4;
        case 0x351ce8u: goto label_351ce8;
        case 0x351cecu: goto label_351cec;
        case 0x351cf0u: goto label_351cf0;
        case 0x351cf4u: goto label_351cf4;
        case 0x351cf8u: goto label_351cf8;
        case 0x351cfcu: goto label_351cfc;
        case 0x351d00u: goto label_351d00;
        case 0x351d04u: goto label_351d04;
        case 0x351d08u: goto label_351d08;
        case 0x351d0cu: goto label_351d0c;
        case 0x351d10u: goto label_351d10;
        case 0x351d14u: goto label_351d14;
        case 0x351d18u: goto label_351d18;
        case 0x351d1cu: goto label_351d1c;
        case 0x351d20u: goto label_351d20;
        case 0x351d24u: goto label_351d24;
        case 0x351d28u: goto label_351d28;
        case 0x351d2cu: goto label_351d2c;
        case 0x351d30u: goto label_351d30;
        case 0x351d34u: goto label_351d34;
        case 0x351d38u: goto label_351d38;
        case 0x351d3cu: goto label_351d3c;
        case 0x351d40u: goto label_351d40;
        case 0x351d44u: goto label_351d44;
        case 0x351d48u: goto label_351d48;
        case 0x351d4cu: goto label_351d4c;
        case 0x351d50u: goto label_351d50;
        case 0x351d54u: goto label_351d54;
        case 0x351d58u: goto label_351d58;
        case 0x351d5cu: goto label_351d5c;
        case 0x351d60u: goto label_351d60;
        case 0x351d64u: goto label_351d64;
        case 0x351d68u: goto label_351d68;
        case 0x351d6cu: goto label_351d6c;
        case 0x351d70u: goto label_351d70;
        case 0x351d74u: goto label_351d74;
        case 0x351d78u: goto label_351d78;
        case 0x351d7cu: goto label_351d7c;
        case 0x351d80u: goto label_351d80;
        case 0x351d84u: goto label_351d84;
        case 0x351d88u: goto label_351d88;
        case 0x351d8cu: goto label_351d8c;
        case 0x351d90u: goto label_351d90;
        case 0x351d94u: goto label_351d94;
        case 0x351d98u: goto label_351d98;
        case 0x351d9cu: goto label_351d9c;
        case 0x351da0u: goto label_351da0;
        case 0x351da4u: goto label_351da4;
        case 0x351da8u: goto label_351da8;
        case 0x351dacu: goto label_351dac;
        case 0x351db0u: goto label_351db0;
        case 0x351db4u: goto label_351db4;
        case 0x351db8u: goto label_351db8;
        case 0x351dbcu: goto label_351dbc;
        case 0x351dc0u: goto label_351dc0;
        case 0x351dc4u: goto label_351dc4;
        case 0x351dc8u: goto label_351dc8;
        case 0x351dccu: goto label_351dcc;
        case 0x351dd0u: goto label_351dd0;
        case 0x351dd4u: goto label_351dd4;
        case 0x351dd8u: goto label_351dd8;
        case 0x351ddcu: goto label_351ddc;
        case 0x351de0u: goto label_351de0;
        case 0x351de4u: goto label_351de4;
        case 0x351de8u: goto label_351de8;
        case 0x351decu: goto label_351dec;
        case 0x351df0u: goto label_351df0;
        case 0x351df4u: goto label_351df4;
        case 0x351df8u: goto label_351df8;
        case 0x351dfcu: goto label_351dfc;
        case 0x351e00u: goto label_351e00;
        case 0x351e04u: goto label_351e04;
        case 0x351e08u: goto label_351e08;
        case 0x351e0cu: goto label_351e0c;
        case 0x351e10u: goto label_351e10;
        case 0x351e14u: goto label_351e14;
        case 0x351e18u: goto label_351e18;
        case 0x351e1cu: goto label_351e1c;
        case 0x351e20u: goto label_351e20;
        case 0x351e24u: goto label_351e24;
        case 0x351e28u: goto label_351e28;
        case 0x351e2cu: goto label_351e2c;
        case 0x351e30u: goto label_351e30;
        case 0x351e34u: goto label_351e34;
        case 0x351e38u: goto label_351e38;
        case 0x351e3cu: goto label_351e3c;
        case 0x351e40u: goto label_351e40;
        case 0x351e44u: goto label_351e44;
        case 0x351e48u: goto label_351e48;
        case 0x351e4cu: goto label_351e4c;
        case 0x351e50u: goto label_351e50;
        case 0x351e54u: goto label_351e54;
        case 0x351e58u: goto label_351e58;
        case 0x351e5cu: goto label_351e5c;
        case 0x351e60u: goto label_351e60;
        case 0x351e64u: goto label_351e64;
        case 0x351e68u: goto label_351e68;
        case 0x351e6cu: goto label_351e6c;
        case 0x351e70u: goto label_351e70;
        case 0x351e74u: goto label_351e74;
        case 0x351e78u: goto label_351e78;
        case 0x351e7cu: goto label_351e7c;
        case 0x351e80u: goto label_351e80;
        case 0x351e84u: goto label_351e84;
        case 0x351e88u: goto label_351e88;
        case 0x351e8cu: goto label_351e8c;
        case 0x351e90u: goto label_351e90;
        case 0x351e94u: goto label_351e94;
        case 0x351e98u: goto label_351e98;
        case 0x351e9cu: goto label_351e9c;
        case 0x351ea0u: goto label_351ea0;
        case 0x351ea4u: goto label_351ea4;
        case 0x351ea8u: goto label_351ea8;
        case 0x351eacu: goto label_351eac;
        case 0x351eb0u: goto label_351eb0;
        case 0x351eb4u: goto label_351eb4;
        case 0x351eb8u: goto label_351eb8;
        case 0x351ebcu: goto label_351ebc;
        case 0x351ec0u: goto label_351ec0;
        case 0x351ec4u: goto label_351ec4;
        case 0x351ec8u: goto label_351ec8;
        case 0x351eccu: goto label_351ecc;
        case 0x351ed0u: goto label_351ed0;
        case 0x351ed4u: goto label_351ed4;
        case 0x351ed8u: goto label_351ed8;
        case 0x351edcu: goto label_351edc;
        case 0x351ee0u: goto label_351ee0;
        case 0x351ee4u: goto label_351ee4;
        case 0x351ee8u: goto label_351ee8;
        case 0x351eecu: goto label_351eec;
        case 0x351ef0u: goto label_351ef0;
        case 0x351ef4u: goto label_351ef4;
        case 0x351ef8u: goto label_351ef8;
        case 0x351efcu: goto label_351efc;
        case 0x351f00u: goto label_351f00;
        case 0x351f04u: goto label_351f04;
        case 0x351f08u: goto label_351f08;
        case 0x351f0cu: goto label_351f0c;
        case 0x351f10u: goto label_351f10;
        case 0x351f14u: goto label_351f14;
        case 0x351f18u: goto label_351f18;
        case 0x351f1cu: goto label_351f1c;
        case 0x351f20u: goto label_351f20;
        case 0x351f24u: goto label_351f24;
        case 0x351f28u: goto label_351f28;
        case 0x351f2cu: goto label_351f2c;
        case 0x351f30u: goto label_351f30;
        case 0x351f34u: goto label_351f34;
        case 0x351f38u: goto label_351f38;
        case 0x351f3cu: goto label_351f3c;
        case 0x351f40u: goto label_351f40;
        case 0x351f44u: goto label_351f44;
        case 0x351f48u: goto label_351f48;
        case 0x351f4cu: goto label_351f4c;
        case 0x351f50u: goto label_351f50;
        case 0x351f54u: goto label_351f54;
        case 0x351f58u: goto label_351f58;
        case 0x351f5cu: goto label_351f5c;
        case 0x351f60u: goto label_351f60;
        case 0x351f64u: goto label_351f64;
        case 0x351f68u: goto label_351f68;
        case 0x351f6cu: goto label_351f6c;
        case 0x351f70u: goto label_351f70;
        case 0x351f74u: goto label_351f74;
        case 0x351f78u: goto label_351f78;
        case 0x351f7cu: goto label_351f7c;
        case 0x351f80u: goto label_351f80;
        case 0x351f84u: goto label_351f84;
        case 0x351f88u: goto label_351f88;
        case 0x351f8cu: goto label_351f8c;
        case 0x351f90u: goto label_351f90;
        case 0x351f94u: goto label_351f94;
        case 0x351f98u: goto label_351f98;
        case 0x351f9cu: goto label_351f9c;
        case 0x351fa0u: goto label_351fa0;
        case 0x351fa4u: goto label_351fa4;
        case 0x351fa8u: goto label_351fa8;
        case 0x351facu: goto label_351fac;
        case 0x351fb0u: goto label_351fb0;
        case 0x351fb4u: goto label_351fb4;
        case 0x351fb8u: goto label_351fb8;
        case 0x351fbcu: goto label_351fbc;
        case 0x351fc0u: goto label_351fc0;
        case 0x351fc4u: goto label_351fc4;
        case 0x351fc8u: goto label_351fc8;
        case 0x351fccu: goto label_351fcc;
        case 0x351fd0u: goto label_351fd0;
        case 0x351fd4u: goto label_351fd4;
        case 0x351fd8u: goto label_351fd8;
        case 0x351fdcu: goto label_351fdc;
        case 0x351fe0u: goto label_351fe0;
        case 0x351fe4u: goto label_351fe4;
        case 0x351fe8u: goto label_351fe8;
        case 0x351fecu: goto label_351fec;
        case 0x351ff0u: goto label_351ff0;
        case 0x351ff4u: goto label_351ff4;
        case 0x351ff8u: goto label_351ff8;
        case 0x351ffcu: goto label_351ffc;
        case 0x352000u: goto label_352000;
        case 0x352004u: goto label_352004;
        case 0x352008u: goto label_352008;
        case 0x35200cu: goto label_35200c;
        case 0x352010u: goto label_352010;
        case 0x352014u: goto label_352014;
        case 0x352018u: goto label_352018;
        case 0x35201cu: goto label_35201c;
        case 0x352020u: goto label_352020;
        case 0x352024u: goto label_352024;
        case 0x352028u: goto label_352028;
        case 0x35202cu: goto label_35202c;
        case 0x352030u: goto label_352030;
        case 0x352034u: goto label_352034;
        case 0x352038u: goto label_352038;
        case 0x35203cu: goto label_35203c;
        case 0x352040u: goto label_352040;
        case 0x352044u: goto label_352044;
        case 0x352048u: goto label_352048;
        case 0x35204cu: goto label_35204c;
        case 0x352050u: goto label_352050;
        case 0x352054u: goto label_352054;
        case 0x352058u: goto label_352058;
        case 0x35205cu: goto label_35205c;
        case 0x352060u: goto label_352060;
        case 0x352064u: goto label_352064;
        case 0x352068u: goto label_352068;
        case 0x35206cu: goto label_35206c;
        case 0x352070u: goto label_352070;
        case 0x352074u: goto label_352074;
        case 0x352078u: goto label_352078;
        case 0x35207cu: goto label_35207c;
        case 0x352080u: goto label_352080;
        case 0x352084u: goto label_352084;
        case 0x352088u: goto label_352088;
        case 0x35208cu: goto label_35208c;
        case 0x352090u: goto label_352090;
        case 0x352094u: goto label_352094;
        case 0x352098u: goto label_352098;
        case 0x35209cu: goto label_35209c;
        case 0x3520a0u: goto label_3520a0;
        case 0x3520a4u: goto label_3520a4;
        case 0x3520a8u: goto label_3520a8;
        case 0x3520acu: goto label_3520ac;
        case 0x3520b0u: goto label_3520b0;
        case 0x3520b4u: goto label_3520b4;
        case 0x3520b8u: goto label_3520b8;
        case 0x3520bcu: goto label_3520bc;
        case 0x3520c0u: goto label_3520c0;
        case 0x3520c4u: goto label_3520c4;
        case 0x3520c8u: goto label_3520c8;
        case 0x3520ccu: goto label_3520cc;
        case 0x3520d0u: goto label_3520d0;
        case 0x3520d4u: goto label_3520d4;
        case 0x3520d8u: goto label_3520d8;
        case 0x3520dcu: goto label_3520dc;
        case 0x3520e0u: goto label_3520e0;
        case 0x3520e4u: goto label_3520e4;
        case 0x3520e8u: goto label_3520e8;
        case 0x3520ecu: goto label_3520ec;
        case 0x3520f0u: goto label_3520f0;
        case 0x3520f4u: goto label_3520f4;
        case 0x3520f8u: goto label_3520f8;
        case 0x3520fcu: goto label_3520fc;
        case 0x352100u: goto label_352100;
        case 0x352104u: goto label_352104;
        case 0x352108u: goto label_352108;
        case 0x35210cu: goto label_35210c;
        case 0x352110u: goto label_352110;
        case 0x352114u: goto label_352114;
        case 0x352118u: goto label_352118;
        case 0x35211cu: goto label_35211c;
        case 0x352120u: goto label_352120;
        case 0x352124u: goto label_352124;
        case 0x352128u: goto label_352128;
        case 0x35212cu: goto label_35212c;
        case 0x352130u: goto label_352130;
        case 0x352134u: goto label_352134;
        case 0x352138u: goto label_352138;
        case 0x35213cu: goto label_35213c;
        case 0x352140u: goto label_352140;
        case 0x352144u: goto label_352144;
        case 0x352148u: goto label_352148;
        case 0x35214cu: goto label_35214c;
        case 0x352150u: goto label_352150;
        case 0x352154u: goto label_352154;
        case 0x352158u: goto label_352158;
        case 0x35215cu: goto label_35215c;
        case 0x352160u: goto label_352160;
        case 0x352164u: goto label_352164;
        case 0x352168u: goto label_352168;
        case 0x35216cu: goto label_35216c;
        case 0x352170u: goto label_352170;
        case 0x352174u: goto label_352174;
        case 0x352178u: goto label_352178;
        case 0x35217cu: goto label_35217c;
        case 0x352180u: goto label_352180;
        case 0x352184u: goto label_352184;
        case 0x352188u: goto label_352188;
        case 0x35218cu: goto label_35218c;
        case 0x352190u: goto label_352190;
        case 0x352194u: goto label_352194;
        case 0x352198u: goto label_352198;
        case 0x35219cu: goto label_35219c;
        case 0x3521a0u: goto label_3521a0;
        case 0x3521a4u: goto label_3521a4;
        case 0x3521a8u: goto label_3521a8;
        case 0x3521acu: goto label_3521ac;
        case 0x3521b0u: goto label_3521b0;
        case 0x3521b4u: goto label_3521b4;
        case 0x3521b8u: goto label_3521b8;
        case 0x3521bcu: goto label_3521bc;
        case 0x3521c0u: goto label_3521c0;
        case 0x3521c4u: goto label_3521c4;
        case 0x3521c8u: goto label_3521c8;
        case 0x3521ccu: goto label_3521cc;
        case 0x3521d0u: goto label_3521d0;
        case 0x3521d4u: goto label_3521d4;
        case 0x3521d8u: goto label_3521d8;
        case 0x3521dcu: goto label_3521dc;
        case 0x3521e0u: goto label_3521e0;
        case 0x3521e4u: goto label_3521e4;
        case 0x3521e8u: goto label_3521e8;
        case 0x3521ecu: goto label_3521ec;
        case 0x3521f0u: goto label_3521f0;
        case 0x3521f4u: goto label_3521f4;
        case 0x3521f8u: goto label_3521f8;
        case 0x3521fcu: goto label_3521fc;
        case 0x352200u: goto label_352200;
        case 0x352204u: goto label_352204;
        case 0x352208u: goto label_352208;
        case 0x35220cu: goto label_35220c;
        case 0x352210u: goto label_352210;
        case 0x352214u: goto label_352214;
        case 0x352218u: goto label_352218;
        case 0x35221cu: goto label_35221c;
        case 0x352220u: goto label_352220;
        case 0x352224u: goto label_352224;
        case 0x352228u: goto label_352228;
        case 0x35222cu: goto label_35222c;
        case 0x352230u: goto label_352230;
        case 0x352234u: goto label_352234;
        case 0x352238u: goto label_352238;
        case 0x35223cu: goto label_35223c;
        case 0x352240u: goto label_352240;
        case 0x352244u: goto label_352244;
        case 0x352248u: goto label_352248;
        case 0x35224cu: goto label_35224c;
        case 0x352250u: goto label_352250;
        case 0x352254u: goto label_352254;
        case 0x352258u: goto label_352258;
        case 0x35225cu: goto label_35225c;
        case 0x352260u: goto label_352260;
        case 0x352264u: goto label_352264;
        case 0x352268u: goto label_352268;
        case 0x35226cu: goto label_35226c;
        case 0x352270u: goto label_352270;
        case 0x352274u: goto label_352274;
        case 0x352278u: goto label_352278;
        case 0x35227cu: goto label_35227c;
        case 0x352280u: goto label_352280;
        case 0x352284u: goto label_352284;
        case 0x352288u: goto label_352288;
        case 0x35228cu: goto label_35228c;
        case 0x352290u: goto label_352290;
        case 0x352294u: goto label_352294;
        case 0x352298u: goto label_352298;
        case 0x35229cu: goto label_35229c;
        case 0x3522a0u: goto label_3522a0;
        case 0x3522a4u: goto label_3522a4;
        case 0x3522a8u: goto label_3522a8;
        case 0x3522acu: goto label_3522ac;
        case 0x3522b0u: goto label_3522b0;
        case 0x3522b4u: goto label_3522b4;
        case 0x3522b8u: goto label_3522b8;
        case 0x3522bcu: goto label_3522bc;
        case 0x3522c0u: goto label_3522c0;
        case 0x3522c4u: goto label_3522c4;
        case 0x3522c8u: goto label_3522c8;
        case 0x3522ccu: goto label_3522cc;
        case 0x3522d0u: goto label_3522d0;
        case 0x3522d4u: goto label_3522d4;
        case 0x3522d8u: goto label_3522d8;
        case 0x3522dcu: goto label_3522dc;
        case 0x3522e0u: goto label_3522e0;
        case 0x3522e4u: goto label_3522e4;
        case 0x3522e8u: goto label_3522e8;
        case 0x3522ecu: goto label_3522ec;
        case 0x3522f0u: goto label_3522f0;
        case 0x3522f4u: goto label_3522f4;
        case 0x3522f8u: goto label_3522f8;
        case 0x3522fcu: goto label_3522fc;
        case 0x352300u: goto label_352300;
        case 0x352304u: goto label_352304;
        case 0x352308u: goto label_352308;
        case 0x35230cu: goto label_35230c;
        case 0x352310u: goto label_352310;
        case 0x352314u: goto label_352314;
        case 0x352318u: goto label_352318;
        case 0x35231cu: goto label_35231c;
        case 0x352320u: goto label_352320;
        case 0x352324u: goto label_352324;
        case 0x352328u: goto label_352328;
        case 0x35232cu: goto label_35232c;
        case 0x352330u: goto label_352330;
        case 0x352334u: goto label_352334;
        case 0x352338u: goto label_352338;
        case 0x35233cu: goto label_35233c;
        case 0x352340u: goto label_352340;
        case 0x352344u: goto label_352344;
        case 0x352348u: goto label_352348;
        case 0x35234cu: goto label_35234c;
        case 0x352350u: goto label_352350;
        case 0x352354u: goto label_352354;
        case 0x352358u: goto label_352358;
        case 0x35235cu: goto label_35235c;
        case 0x352360u: goto label_352360;
        case 0x352364u: goto label_352364;
        case 0x352368u: goto label_352368;
        case 0x35236cu: goto label_35236c;
        case 0x352370u: goto label_352370;
        case 0x352374u: goto label_352374;
        case 0x352378u: goto label_352378;
        case 0x35237cu: goto label_35237c;
        case 0x352380u: goto label_352380;
        case 0x352384u: goto label_352384;
        case 0x352388u: goto label_352388;
        case 0x35238cu: goto label_35238c;
        case 0x352390u: goto label_352390;
        case 0x352394u: goto label_352394;
        case 0x352398u: goto label_352398;
        case 0x35239cu: goto label_35239c;
        case 0x3523a0u: goto label_3523a0;
        case 0x3523a4u: goto label_3523a4;
        case 0x3523a8u: goto label_3523a8;
        case 0x3523acu: goto label_3523ac;
        case 0x3523b0u: goto label_3523b0;
        case 0x3523b4u: goto label_3523b4;
        case 0x3523b8u: goto label_3523b8;
        case 0x3523bcu: goto label_3523bc;
        case 0x3523c0u: goto label_3523c0;
        case 0x3523c4u: goto label_3523c4;
        case 0x3523c8u: goto label_3523c8;
        case 0x3523ccu: goto label_3523cc;
        case 0x3523d0u: goto label_3523d0;
        case 0x3523d4u: goto label_3523d4;
        case 0x3523d8u: goto label_3523d8;
        case 0x3523dcu: goto label_3523dc;
        case 0x3523e0u: goto label_3523e0;
        case 0x3523e4u: goto label_3523e4;
        case 0x3523e8u: goto label_3523e8;
        case 0x3523ecu: goto label_3523ec;
        case 0x3523f0u: goto label_3523f0;
        case 0x3523f4u: goto label_3523f4;
        case 0x3523f8u: goto label_3523f8;
        case 0x3523fcu: goto label_3523fc;
        case 0x352400u: goto label_352400;
        case 0x352404u: goto label_352404;
        case 0x352408u: goto label_352408;
        case 0x35240cu: goto label_35240c;
        case 0x352410u: goto label_352410;
        case 0x352414u: goto label_352414;
        case 0x352418u: goto label_352418;
        case 0x35241cu: goto label_35241c;
        case 0x352420u: goto label_352420;
        case 0x352424u: goto label_352424;
        case 0x352428u: goto label_352428;
        case 0x35242cu: goto label_35242c;
        case 0x352430u: goto label_352430;
        case 0x352434u: goto label_352434;
        case 0x352438u: goto label_352438;
        case 0x35243cu: goto label_35243c;
        case 0x352440u: goto label_352440;
        case 0x352444u: goto label_352444;
        case 0x352448u: goto label_352448;
        case 0x35244cu: goto label_35244c;
        case 0x352450u: goto label_352450;
        case 0x352454u: goto label_352454;
        case 0x352458u: goto label_352458;
        case 0x35245cu: goto label_35245c;
        case 0x352460u: goto label_352460;
        case 0x352464u: goto label_352464;
        case 0x352468u: goto label_352468;
        case 0x35246cu: goto label_35246c;
        case 0x352470u: goto label_352470;
        case 0x352474u: goto label_352474;
        case 0x352478u: goto label_352478;
        case 0x35247cu: goto label_35247c;
        case 0x352480u: goto label_352480;
        case 0x352484u: goto label_352484;
        case 0x352488u: goto label_352488;
        case 0x35248cu: goto label_35248c;
        case 0x352490u: goto label_352490;
        case 0x352494u: goto label_352494;
        case 0x352498u: goto label_352498;
        case 0x35249cu: goto label_35249c;
        case 0x3524a0u: goto label_3524a0;
        case 0x3524a4u: goto label_3524a4;
        case 0x3524a8u: goto label_3524a8;
        case 0x3524acu: goto label_3524ac;
        case 0x3524b0u: goto label_3524b0;
        case 0x3524b4u: goto label_3524b4;
        case 0x3524b8u: goto label_3524b8;
        case 0x3524bcu: goto label_3524bc;
        case 0x3524c0u: goto label_3524c0;
        case 0x3524c4u: goto label_3524c4;
        case 0x3524c8u: goto label_3524c8;
        case 0x3524ccu: goto label_3524cc;
        case 0x3524d0u: goto label_3524d0;
        case 0x3524d4u: goto label_3524d4;
        case 0x3524d8u: goto label_3524d8;
        case 0x3524dcu: goto label_3524dc;
        case 0x3524e0u: goto label_3524e0;
        case 0x3524e4u: goto label_3524e4;
        case 0x3524e8u: goto label_3524e8;
        case 0x3524ecu: goto label_3524ec;
        case 0x3524f0u: goto label_3524f0;
        case 0x3524f4u: goto label_3524f4;
        case 0x3524f8u: goto label_3524f8;
        case 0x3524fcu: goto label_3524fc;
        case 0x352500u: goto label_352500;
        case 0x352504u: goto label_352504;
        case 0x352508u: goto label_352508;
        case 0x35250cu: goto label_35250c;
        case 0x352510u: goto label_352510;
        case 0x352514u: goto label_352514;
        case 0x352518u: goto label_352518;
        case 0x35251cu: goto label_35251c;
        case 0x352520u: goto label_352520;
        case 0x352524u: goto label_352524;
        case 0x352528u: goto label_352528;
        case 0x35252cu: goto label_35252c;
        case 0x352530u: goto label_352530;
        case 0x352534u: goto label_352534;
        case 0x352538u: goto label_352538;
        case 0x35253cu: goto label_35253c;
        case 0x352540u: goto label_352540;
        case 0x352544u: goto label_352544;
        case 0x352548u: goto label_352548;
        case 0x35254cu: goto label_35254c;
        case 0x352550u: goto label_352550;
        case 0x352554u: goto label_352554;
        case 0x352558u: goto label_352558;
        case 0x35255cu: goto label_35255c;
        case 0x352560u: goto label_352560;
        case 0x352564u: goto label_352564;
        case 0x352568u: goto label_352568;
        case 0x35256cu: goto label_35256c;
        case 0x352570u: goto label_352570;
        case 0x352574u: goto label_352574;
        case 0x352578u: goto label_352578;
        case 0x35257cu: goto label_35257c;
        case 0x352580u: goto label_352580;
        case 0x352584u: goto label_352584;
        case 0x352588u: goto label_352588;
        case 0x35258cu: goto label_35258c;
        case 0x352590u: goto label_352590;
        case 0x352594u: goto label_352594;
        case 0x352598u: goto label_352598;
        case 0x35259cu: goto label_35259c;
        case 0x3525a0u: goto label_3525a0;
        case 0x3525a4u: goto label_3525a4;
        case 0x3525a8u: goto label_3525a8;
        case 0x3525acu: goto label_3525ac;
        case 0x3525b0u: goto label_3525b0;
        case 0x3525b4u: goto label_3525b4;
        case 0x3525b8u: goto label_3525b8;
        case 0x3525bcu: goto label_3525bc;
        case 0x3525c0u: goto label_3525c0;
        case 0x3525c4u: goto label_3525c4;
        case 0x3525c8u: goto label_3525c8;
        case 0x3525ccu: goto label_3525cc;
        case 0x3525d0u: goto label_3525d0;
        case 0x3525d4u: goto label_3525d4;
        case 0x3525d8u: goto label_3525d8;
        case 0x3525dcu: goto label_3525dc;
        case 0x3525e0u: goto label_3525e0;
        case 0x3525e4u: goto label_3525e4;
        case 0x3525e8u: goto label_3525e8;
        case 0x3525ecu: goto label_3525ec;
        case 0x3525f0u: goto label_3525f0;
        case 0x3525f4u: goto label_3525f4;
        case 0x3525f8u: goto label_3525f8;
        case 0x3525fcu: goto label_3525fc;
        case 0x352600u: goto label_352600;
        case 0x352604u: goto label_352604;
        case 0x352608u: goto label_352608;
        case 0x35260cu: goto label_35260c;
        case 0x352610u: goto label_352610;
        case 0x352614u: goto label_352614;
        case 0x352618u: goto label_352618;
        case 0x35261cu: goto label_35261c;
        case 0x352620u: goto label_352620;
        case 0x352624u: goto label_352624;
        default: break;
    }

    ctx->pc = 0x3518f0u;

label_3518f0:
    // 0x3518f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3518f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3518f4:
    // 0x3518f4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3518f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3518f8:
    // 0x3518f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3518fc:
    if (ctx->pc == 0x3518FCu) {
        ctx->pc = 0x3518FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518F8u;
        // 0x3518fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351900u;
        goto label_351900;
    }
    ctx->pc = 0x3518F8u;
    {
        const bool branch_taken_0x3518f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3518FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518F8u;
        // 0x3518fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3518f8) {
            ctx->pc = 0x351904u;
            goto label_351904;
        }
    }
    ctx->pc = 0x351900u;
label_351900:
    // 0x351900: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x351900u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_351904:
    // 0x351904: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x351904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
label_351908:
    // 0x351908: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_35190c:
    if (ctx->pc == 0x35190Cu) {
        ctx->pc = 0x35190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351908u;
        // 0x35190c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351910u;
        goto label_351910;
    }
    ctx->pc = 0x351908u;
    {
        const bool branch_taken_0x351908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351908u;
        // 0x35190c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351908) {
            ctx->pc = 0x35192Cu;
            goto label_35192c;
        }
    }
    ctx->pc = 0x351910u;
label_351910:
    // 0x351910: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_351914:
    // 0x351914: 0x8c82b954  lw          $v0, -0x46AC($a0)
    ctx->pc = 0x351914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949204)));
label_351918:
    // 0x351918: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_35191c:
    // 0x35191c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x35191cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_351920:
    // 0x351920: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x351920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_351924:
    // 0x351924: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x351924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_351928:
    // 0x351928: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x351928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_35192c:
    // 0x35192c: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x35192cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_351930:
    // 0x351930: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_351934:
    if (ctx->pc == 0x351934u) {
        ctx->pc = 0x351934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351930u;
        // 0x351934: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351938u;
        goto label_351938;
    }
    ctx->pc = 0x351930u;
    {
        const bool branch_taken_0x351930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351930u;
        // 0x351934: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351930) {
            ctx->pc = 0x351954u;
            goto label_351954;
        }
    }
    ctx->pc = 0x351938u;
label_351938:
    // 0x351938: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_35193c:
    // 0x35193c: 0x8c82b958  lw          $v0, -0x46A8($a0)
    ctx->pc = 0x35193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949208)));
label_351940:
    // 0x351940: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_351944:
    // 0x351944: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x351944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_351948:
    // 0x351948: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x351948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_35194c:
    // 0x35194c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_351950:
    // 0x351950: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x351950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_351954:
    // 0x351954: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x351954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_351958:
    // 0x351958: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_35195c:
    if (ctx->pc == 0x35195Cu) {
        ctx->pc = 0x35195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351958u;
        // 0x35195c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351960u;
        goto label_351960;
    }
    ctx->pc = 0x351958u;
    {
        const bool branch_taken_0x351958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351958u;
        // 0x35195c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351958) {
            ctx->pc = 0x35197Cu;
            goto label_35197c;
        }
    }
    ctx->pc = 0x351960u;
label_351960:
    // 0x351960: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_351964:
    // 0x351964: 0x8c82b95c  lw          $v0, -0x46A4($a0)
    ctx->pc = 0x351964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949212)));
label_351968:
    // 0x351968: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_35196c:
    // 0x35196c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x35196cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_351970:
    // 0x351970: 0x2442004f  addiu       $v0, $v0, 0x4F
    ctx->pc = 0x351970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
label_351974:
    // 0x351974: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x351974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_351978:
    // 0x351978: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x351978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_35197c:
    // 0x35197c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x35197cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_351980:
    // 0x351980: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_351984:
    if (ctx->pc == 0x351984u) {
        ctx->pc = 0x351984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351980u;
        // 0x351984: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351988u;
        goto label_351988;
    }
    ctx->pc = 0x351980u;
    {
        const bool branch_taken_0x351980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351980u;
        // 0x351984: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351980) {
            ctx->pc = 0x3519A4u;
            goto label_3519a4;
        }
    }
    ctx->pc = 0x351988u;
label_351988:
    // 0x351988: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_35198c:
    // 0x35198c: 0x8c82b960  lw          $v0, -0x46A0($a0)
    ctx->pc = 0x35198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949216)));
label_351990:
    // 0x351990: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_351994:
    // 0x351994: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x351994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_351998:
    // 0x351998: 0x2442004f  addiu       $v0, $v0, 0x4F
    ctx->pc = 0x351998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
label_35199c:
    // 0x35199c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x35199cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3519a0:
    // 0x3519a0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3519a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3519a4:
    // 0x3519a4: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x3519a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_3519a8:
    // 0x3519a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3519ac:
    if (ctx->pc == 0x3519ACu) {
        ctx->pc = 0x3519ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519A8u;
        // 0x3519ac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3519B0u;
        goto label_3519b0;
    }
    ctx->pc = 0x3519A8u;
    {
        const bool branch_taken_0x3519a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3519ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519A8u;
        // 0x3519ac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3519a8) {
            ctx->pc = 0x3519CCu;
            goto label_3519cc;
        }
    }
    ctx->pc = 0x3519B0u;
label_3519b0:
    // 0x3519b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3519b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3519b4:
    // 0x3519b4: 0x8c82b964  lw          $v0, -0x469C($a0)
    ctx->pc = 0x3519b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949220)));
label_3519b8:
    // 0x3519b8: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x3519b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_3519bc:
    // 0x3519bc: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x3519bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3519c0:
    // 0x3519c0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3519c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_3519c4:
    // 0x3519c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3519c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3519c8:
    // 0x3519c8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3519c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3519cc:
    // 0x3519cc: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x3519ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_3519d0:
    // 0x3519d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3519d4:
    if (ctx->pc == 0x3519D4u) {
        ctx->pc = 0x3519D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519D0u;
        // 0x3519d4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3519D8u;
        goto label_3519d8;
    }
    ctx->pc = 0x3519D0u;
    {
        const bool branch_taken_0x3519d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3519D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519D0u;
        // 0x3519d4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3519d0) {
            ctx->pc = 0x3519F4u;
            goto label_3519f4;
        }
    }
    ctx->pc = 0x3519D8u;
label_3519d8:
    // 0x3519d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3519d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3519dc:
    // 0x3519dc: 0x8c82b968  lw          $v0, -0x4698($a0)
    ctx->pc = 0x3519dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949224)));
label_3519e0:
    // 0x3519e0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x3519e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_3519e4:
    // 0x3519e4: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x3519e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3519e8:
    // 0x3519e8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3519e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_3519ec:
    // 0x3519ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3519ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3519f0:
    // 0x3519f0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3519f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3519f4:
    // 0x3519f4: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x3519f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_3519f8:
    // 0x3519f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3519fc:
    if (ctx->pc == 0x3519FCu) {
        ctx->pc = 0x3519FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519F8u;
        // 0x3519fc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351A00u;
        goto label_351a00;
    }
    ctx->pc = 0x3519F8u;
    {
        const bool branch_taken_0x3519f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3519FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519F8u;
        // 0x3519fc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3519f8) {
            ctx->pc = 0x351A1Cu;
            goto label_351a1c;
        }
    }
    ctx->pc = 0x351A00u;
label_351a00:
    // 0x351a00: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_351a04:
    // 0x351a04: 0x8c82b96c  lw          $v0, -0x4694($a0)
    ctx->pc = 0x351a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949228)));
label_351a08:
    // 0x351a08: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_351a0c:
    // 0x351a0c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x351a0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_351a10:
    // 0x351a10: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x351a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_351a14:
    // 0x351a14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x351a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_351a18:
    // 0x351a18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x351a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_351a1c:
    // 0x351a1c: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x351a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_351a20:
    // 0x351a20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_351a24:
    if (ctx->pc == 0x351A24u) {
        ctx->pc = 0x351A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A20u;
        // 0x351a24: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351A28u;
        goto label_351a28;
    }
    ctx->pc = 0x351A20u;
    {
        const bool branch_taken_0x351a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A20u;
        // 0x351a24: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351a20) {
            ctx->pc = 0x351A44u;
            goto label_351a44;
        }
    }
    ctx->pc = 0x351A28u;
label_351a28:
    // 0x351a28: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x351a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_351a2c:
    // 0x351a2c: 0x8c82b970  lw          $v0, -0x4690($a0)
    ctx->pc = 0x351a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949232)));
label_351a30:
    // 0x351a30: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x351a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_351a34:
    // 0x351a34: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x351a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_351a38:
    // 0x351a38: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x351a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_351a3c:
    // 0x351a3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x351a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_351a40:
    // 0x351a40: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x351a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_351a44:
    // 0x351a44: 0x3e00008  jr          $ra
label_351a48:
    if (ctx->pc == 0x351A48u) {
        ctx->pc = 0x351A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A44u;
        // 0x351a48: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351A4Cu;
        goto label_351a4c;
    }
    ctx->pc = 0x351A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A44u;
        // 0x351a48: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351A4Cu;
label_351a4c:
    // 0x351a4c: 0x0  nop
    ctx->pc = 0x351a4cu;
    // NOP
label_351a50:
    // 0x351a50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x351a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_351a54:
    // 0x351a54: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x351a54u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_351a58:
    // 0x351a58: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x351a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_351a5c:
    // 0x351a5c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x351a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_351a60:
    // 0x351a60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x351a60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351a64:
    // 0x351a64: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x351a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_351a68:
    // 0x351a68: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x351a68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_351a6c:
    // 0x351a6c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x351a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_351a70:
    // 0x351a70: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x351a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_351a74:
    // 0x351a74: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x351a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_351a78:
    // 0x351a78: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x351a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_351a7c:
    // 0x351a7c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x351a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_351a80:
    // 0x351a80: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x351a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_351a84:
    // 0x351a84: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x351a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_351a88:
    // 0x351a88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x351a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_351a8c:
    // 0x351a8c: 0x8e990058  lw          $t9, 0x58($s4)
    ctx->pc = 0x351a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_351a90:
    // 0x351a90: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x351a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_351a94:
    // 0x351a94: 0x1910c3  sra         $v0, $t9, 3
    ctx->pc = 0x351a94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 3));
label_351a98:
    // 0x351a98: 0x33270001  andi        $a3, $t9, 0x1
    ctx->pc = 0x351a98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)1);
label_351a9c:
    // 0x351a9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x351a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_351aa0:
    // 0x351aa0: 0x191903  sra         $v1, $t9, 4
    ctx->pc = 0x351aa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 4));
label_351aa4:
    // 0x351aa4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x351aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_351aa8:
    // 0x351aa8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x351aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_351aac:
    // 0x351aac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x351aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_351ab0:
    // 0x351ab0: 0x192083  sra         $a0, $t9, 2
    ctx->pc = 0x351ab0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 25), 2));
label_351ab4:
    // 0x351ab4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x351ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_351ab8:
    // 0x351ab8: 0x191043  sra         $v0, $t9, 1
    ctx->pc = 0x351ab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 1));
label_351abc:
    // 0x351abc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x351abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_351ac0:
    // 0x351ac0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x351ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_351ac4:
    // 0x351ac4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x351ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_351ac8:
    // 0x351ac8: 0x192983  sra         $a1, $t9, 6
    ctx->pc = 0x351ac8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 25), 6));
label_351acc:
    // 0x351acc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x351accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_351ad0:
    // 0x351ad0: 0x192143  sra         $a0, $t9, 5
    ctx->pc = 0x351ad0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 25), 5));
label_351ad4:
    // 0x351ad4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x351ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_351ad8:
    // 0x351ad8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x351ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_351adc:
    // 0x351adc: 0x1919c3  sra         $v1, $t9, 7
    ctx->pc = 0x351adcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 7));
label_351ae0:
    // 0x351ae0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x351ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_351ae4:
    // 0x351ae4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x351ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_351ae8:
    // 0x351ae8: 0x191203  sra         $v0, $t9, 8
    ctx->pc = 0x351ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 25), 8));
label_351aec:
    // 0x351aec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_351af0:
    // 0x351af0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x351af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_351af4:
    // 0x351af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x351af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_351af8:
    // 0x351af8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_351afc:
    if (ctx->pc == 0x351AFCu) {
        ctx->pc = 0x351AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AF8u;
        // 0x351afc: 0xae820050  sw          $v0, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B00u;
        goto label_351b00;
    }
    ctx->pc = 0x351AF8u;
    {
        const bool branch_taken_0x351af8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x351AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AF8u;
        // 0x351afc: 0xae820050  sw          $v0, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351af8) {
            ctx->pc = 0x351B14u;
            goto label_351b14;
        }
    }
    ctx->pc = 0x351B00u;
label_351b00:
    // 0x351b00: 0x3c02eee1  lui         $v0, 0xEEE1
    ctx->pc = 0x351b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61153 << 16));
label_351b04:
    // 0x351b04: 0x3442fe18  ori         $v0, $v0, 0xFE18
    ctx->pc = 0x351b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65048);
label_351b08:
    // 0x351b08: 0x3221024  and         $v0, $t9, $v0
    ctx->pc = 0x351b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 2));
label_351b0c:
    // 0x351b0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x351b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_351b10:
    // 0x351b10: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x351b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_351b14:
    // 0x351b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351b18:
    // 0x351b18: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x351b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_351b1c:
    // 0x351b1c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x351b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_351b20:
    // 0x351b20: 0x32a40010  andi        $a0, $s5, 0x10
    ctx->pc = 0x351b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_351b24:
    // 0x351b24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x351b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_351b28:
    // 0x351b28: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x351b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_351b2c:
    // 0x351b2c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x351b2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_351b30:
    // 0x351b30: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_351b34:
    if (ctx->pc == 0x351B34u) {
        ctx->pc = 0x351B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B30u;
        // 0x351b34: 0xafa5003c  sw          $a1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B38u;
        goto label_351b38;
    }
    ctx->pc = 0x351B30u;
    {
        const bool branch_taken_0x351b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x351B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B30u;
        // 0x351b34: 0xafa5003c  sw          $a1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351b30) {
            ctx->pc = 0x351B5Cu;
            goto label_351b5c;
        }
    }
    ctx->pc = 0x351B38u;
label_351b38:
    // 0x351b38: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x351b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_351b3c:
    // 0x351b3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351b40:
    // 0x351b40: 0x8c628150  lw          $v0, -0x7EB0($v1)
    ctx->pc = 0x351b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294934864)));
label_351b44:
    // 0x351b44: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x351b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_351b48:
    // 0x351b48: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x351b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_351b4c:
    // 0x351b4c: 0x40f809  jalr        $v0
label_351b50:
    if (ctx->pc == 0x351B50u) {
        ctx->pc = 0x351B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B4Cu;
        // 0x351b50: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B54u;
        goto label_351b54;
    }
    ctx->pc = 0x351B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351B54u);
        ctx->pc = 0x351B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B4Cu;
        // 0x351b50: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351B4Cu, 0x351B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351B54u;
label_351b54:
    // 0x351b54: 0x100001c6  b           . + 4 + (0x1C6 << 2)
label_351b58:
    if (ctx->pc == 0x351B58u) {
        ctx->pc = 0x351B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B54u;
        // 0x351b58: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B5Cu;
        goto label_351b5c;
    }
    ctx->pc = 0x351B54u;
    {
        const bool branch_taken_0x351b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B54u;
        // 0x351b58: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351b54) {
            ctx->pc = 0x352270u;
            goto label_352270;
        }
    }
    ctx->pc = 0x351B5Cu;
label_351b5c:
    // 0x351b5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x351b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_351b60:
    // 0x351b60: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
label_351b64:
    if (ctx->pc == 0x351B64u) {
        ctx->pc = 0x351B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B60u;
        // 0x351b64: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351B68u;
        goto label_351b68;
    }
    ctx->pc = 0x351B60u;
    {
        const bool branch_taken_0x351b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B60u;
        // 0x351b64: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351b60) {
            ctx->pc = 0x352058u;
            goto label_352058;
        }
    }
    ctx->pc = 0x351B68u;
label_351b68:
    // 0x351b68: 0xae800054  sw          $zero, 0x54($s4)
    ctx->pc = 0x351b68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
label_351b6c:
    // 0x351b6c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x351b6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_351b70:
    // 0x351b70: 0x193883  sra         $a3, $t9, 2
    ctx->pc = 0x351b70u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 25), 2));
label_351b74:
    // 0x351b74: 0x194043  sra         $t0, $t9, 1
    ctx->pc = 0x351b74u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 25), 1));
label_351b78:
    // 0x351b78: 0x194983  sra         $t1, $t9, 6
    ctx->pc = 0x351b78u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 25), 6));
label_351b7c:
    // 0x351b7c: 0x195143  sra         $t2, $t9, 5
    ctx->pc = 0x351b7cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 25), 5));
label_351b80:
    // 0x351b80: 0x1959c3  sra         $t3, $t9, 7
    ctx->pc = 0x351b80u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 25), 7));
label_351b84:
    // 0x351b84: 0x196203  sra         $t4, $t9, 8
    ctx->pc = 0x351b84u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 25), 8));
label_351b88:
    // 0x351b88: 0x26980008  addiu       $t8, $s4, 0x8
    ctx->pc = 0x351b88u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_351b8c:
    // 0x351b8c: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x351b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
label_351b90:
    // 0x351b90: 0x332e0004  andi        $t6, $t9, 0x4
    ctx->pc = 0x351b90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)4);
label_351b94:
    // 0x351b94: 0x332f0002  andi        $t7, $t9, 0x2
    ctx->pc = 0x351b94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)2);
label_351b98:
    // 0x351b98: 0x24647af0  addiu       $a0, $v1, 0x7AF0
    ctx->pc = 0x351b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31472));
label_351b9c:
    // 0x351b9c: 0x32b00008  andi        $s0, $s5, 0x8
    ctx->pc = 0x351b9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_351ba0:
    // 0x351ba0: 0x8c627af0  lw          $v0, 0x7AF0($v1)
    ctx->pc = 0x351ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31472)));
label_351ba4:
    // 0x351ba4: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x351ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_351ba8:
    // 0x351ba8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x351ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_351bac:
    // 0x351bac: 0xaf030008  sw          $v1, 0x8($t8)
    ctx->pc = 0x351bacu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 3));
label_351bb0:
    // 0x351bb0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x351bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_351bb4:
    // 0x351bb4: 0xaf020010  sw          $v0, 0x10($t8)
    ctx->pc = 0x351bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 2));
label_351bb8:
    // 0x351bb8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x351bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_351bbc:
    // 0x351bbc: 0xaf030018  sw          $v1, 0x18($t8)
    ctx->pc = 0x351bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 24), GPR_U32(ctx, 3));
label_351bc0:
    // 0x351bc0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x351bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_351bc4:
    // 0x351bc4: 0xaf020020  sw          $v0, 0x20($t8)
    ctx->pc = 0x351bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 32), GPR_U32(ctx, 2));
label_351bc8:
    // 0x351bc8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x351bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_351bcc:
    // 0x351bcc: 0xaf030028  sw          $v1, 0x28($t8)
    ctx->pc = 0x351bccu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 40), GPR_U32(ctx, 3));
label_351bd0:
    // 0x351bd0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x351bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_351bd4:
    // 0x351bd4: 0xaf020030  sw          $v0, 0x30($t8)
    ctx->pc = 0x351bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 2));
label_351bd8:
    // 0x351bd8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x351bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_351bdc:
    // 0x351bdc: 0xaf030038  sw          $v1, 0x38($t8)
    ctx->pc = 0x351bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 3));
label_351be0:
    // 0x351be0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x351be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_351be4:
    // 0x351be4: 0xaf020040  sw          $v0, 0x40($t8)
    ctx->pc = 0x351be4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 2));
label_351be8:
    // 0x351be8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x351be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_351bec:
    // 0x351bec: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x351becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_351bf0:
    // 0x351bf0: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x351bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_351bf4:
    // 0x351bf4: 0x3231824  and         $v1, $t9, $v1
    ctx->pc = 0x351bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & GPR_U64(ctx, 3));
label_351bf8:
    // 0x351bf8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x351bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_351bfc:
    // 0x351bfc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x351bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_351c00:
    // 0x351c00: 0x3242024  and         $a0, $t9, $a0
    ctx->pc = 0x351c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & GPR_U64(ctx, 4));
label_351c04:
    // 0x351c04: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x351c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_351c08:
    // 0x351c08: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x351c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_351c0c:
    // 0x351c0c: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x351c0cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_351c10:
    // 0x351c10: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x351c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_351c14:
    // 0x351c14: 0x3221024  and         $v0, $t9, $v0
    ctx->pc = 0x351c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 2));
label_351c18:
    // 0x351c18: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x351c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_351c1c:
    // 0x351c1c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x351c1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_351c20:
    // 0x351c20: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x351c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_351c24:
    // 0x351c24: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x351c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_351c28:
    // 0x351c28: 0x24c67b40  addiu       $a2, $a2, 0x7B40
    ctx->pc = 0x351c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31552));
label_351c2c:
    // 0x351c2c: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x351c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_351c30:
    // 0x351c30: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x351c30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
label_351c34:
    // 0x351c34: 0xe880a  movz        $s1, $zero, $t6
    ctx->pc = 0x351c34u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_351c38:
    // 0x351c38: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x351c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_351c3c:
    // 0x351c3c: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x351c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
label_351c40:
    // 0x351c40: 0x39290001  xori        $t1, $t1, 0x1
    ctx->pc = 0x351c40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
label_351c44:
    // 0x351c44: 0x669821  addu        $s3, $v1, $a2
    ctx->pc = 0x351c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_351c48:
    // 0x351c48: 0x394a0001  xori        $t2, $t2, 0x1
    ctx->pc = 0x351c48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)1);
label_351c4c:
    // 0x351c4c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x351c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_351c50:
    // 0x351c50: 0x396b0001  xori        $t3, $t3, 0x1
    ctx->pc = 0x351c50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
label_351c54:
    // 0x351c54: 0x398c0001  xori        $t4, $t4, 0x1
    ctx->pc = 0x351c54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)1);
label_351c58:
    // 0x351c58: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x351c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_351c5c:
    // 0x351c5c: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x351c5cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_351c60:
    // 0x351c60: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_351c64:
    if (ctx->pc == 0x351C64u) {
        ctx->pc = 0x351C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C60u;
        // 0x351c64: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351C68u;
        goto label_351c68;
    }
    ctx->pc = 0x351C60u;
    {
        const bool branch_taken_0x351c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c60) {
            ctx->pc = 0x351C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351C60u;
            // 0x351c64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x351C68u;
            goto label_351c68;
        }
    }
    ctx->pc = 0x351C68u;
label_351c68:
    // 0x351c68: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x351c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_351c6c:
    // 0x351c6c: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x351c6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_351c70:
    // 0x351c70: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x351c70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_351c74:
    // 0x351c74: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x351c74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_351c78:
    // 0x351c78: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x351c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_351c7c:
    // 0x351c7c: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x351c7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_351c80:
    // 0x351c80: 0x15f143  sra         $fp, $s5, 5
    ctx->pc = 0x351c80u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 21), 5));
label_351c84:
    // 0x351c84: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x351c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_351c88:
    // 0x351c88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351c8c:
    // 0x351c8c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x351c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_351c90:
    // 0x351c90: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x351c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_351c94:
    // 0x351c94: 0x6f880b  movn        $s1, $v1, $t7
    ctx->pc = 0x351c94u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_351c98:
    // 0x351c98: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x351c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
label_351c9c:
    // 0x351c9c: 0x33de0001  andi        $fp, $fp, 0x1
    ctx->pc = 0x351c9cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_351ca0:
    // 0x351ca0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x351ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351ca4:
    // 0x351ca4: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x351ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
label_351ca8:
    // 0x351ca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x351ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351cac:
    // 0x351cac: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x351cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
label_351cb0:
    // 0x351cb0: 0xafab001c  sw          $t3, 0x1C($sp)
    ctx->pc = 0x351cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
label_351cb4:
    // 0x351cb4: 0xafac0020  sw          $t4, 0x20($sp)
    ctx->pc = 0x351cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 12));
label_351cb8:
    // 0x351cb8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x351cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_351cbc:
    // 0x351cbc: 0x6812  mflo        $t5
    ctx->pc = 0x351cbcu;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_351cc0:
    // 0x351cc0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x351cc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_351cc4:
    // 0x351cc4: 0x10c00072  beqz        $a2, . + 4 + (0x72 << 2)
label_351cc8:
    if (ctx->pc == 0x351CC8u) {
        ctx->pc = 0x351CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CC4u;
        // 0x351cc8: 0xafad0034  sw          $t5, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351CCCu;
        goto label_351ccc;
    }
    ctx->pc = 0x351CC4u;
    {
        const bool branch_taken_0x351cc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x351CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CC4u;
        // 0x351cc8: 0xafad0034  sw          $t5, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351cc4) {
            ctx->pc = 0x351E90u;
            goto label_351e90;
        }
    }
    ctx->pc = 0x351CCCu;
label_351ccc:
    // 0x351ccc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x351cccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_351cd0:
    // 0x351cd0: 0x26660028  addiu       $a2, $s3, 0x28
    ctx->pc = 0x351cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_351cd4:
    // 0x351cd4: 0x31230003  andi        $v1, $t1, 0x3
    ctx->pc = 0x351cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_351cd8:
    // 0x351cd8: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_351cdc:
    if (ctx->pc == 0x351CDCu) {
        ctx->pc = 0x351CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CD8u;
        // 0x351cdc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351CE0u;
        goto label_351ce0;
    }
    ctx->pc = 0x351CD8u;
    {
        const bool branch_taken_0x351cd8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x351CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CD8u;
        // 0x351cdc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351cd8) {
            ctx->pc = 0x351D6Cu;
            goto label_351d6c;
        }
    }
    ctx->pc = 0x351CE0u;
label_351ce0:
    // 0x351ce0: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_351ce4:
    if (ctx->pc == 0x351CE4u) {
        ctx->pc = 0x351CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CE0u;
        // 0x351ce4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351CE8u;
        goto label_351ce8;
    }
    ctx->pc = 0x351CE0u;
    {
        const bool branch_taken_0x351ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CE0u;
        // 0x351ce4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ce0) {
            ctx->pc = 0x351DACu;
            goto label_351dac;
        }
    }
    ctx->pc = 0x351CE8u;
label_351ce8:
    // 0x351ce8: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_351cec:
    if (ctx->pc == 0x351CECu) {
        ctx->pc = 0x351CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CE8u;
        // 0x351cec: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351CF0u;
        goto label_351cf0;
    }
    ctx->pc = 0x351CE8u;
    {
        const bool branch_taken_0x351ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351ce8) {
            ctx->pc = 0x351CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351CE8u;
            // 0x351cec: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351D70u;
            goto label_351d70;
        }
    }
    ctx->pc = 0x351CF0u;
label_351cf0:
    // 0x351cf0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x351cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_351cf4:
    // 0x351cf4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_351cf8:
    if (ctx->pc == 0x351CF8u) {
        ctx->pc = 0x351CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CF4u;
        // 0x351cf8: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351CFCu;
        goto label_351cfc;
    }
    ctx->pc = 0x351CF4u;
    {
        const bool branch_taken_0x351cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351cf4) {
            ctx->pc = 0x351CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351CF4u;
            // 0x351cf8: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351D38u;
            goto label_351d38;
        }
    }
    ctx->pc = 0x351CFCu;
label_351cfc:
    // 0x351cfc: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x351cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_351d00:
    // 0x351d00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351d04:
    // 0x351d04: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x351d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_351d08:
    // 0x351d08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351d0c:
    // 0x351d0c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_351d10:
    if (ctx->pc == 0x351D10u) {
        ctx->pc = 0x351D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D0Cu;
        // 0x351d10: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D14u;
        goto label_351d14;
    }
    ctx->pc = 0x351D0Cu;
    {
        const bool branch_taken_0x351d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351d0c) {
            ctx->pc = 0x351D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351D0Cu;
            // 0x351d10: 0x8e620028  lw          $v0, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351D28u;
            goto label_351d28;
        }
    }
    ctx->pc = 0x351D14u;
label_351d14:
    // 0x351d14: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x351d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_351d18:
    // 0x351d18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351d1c:
    // 0x351d1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_351d20:
    if (ctx->pc == 0x351D20u) {
        ctx->pc = 0x351D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D1Cu;
        // 0x351d20: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D24u;
        goto label_351d24;
    }
    ctx->pc = 0x351D1Cu;
    {
        const bool branch_taken_0x351d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D1Cu;
        // 0x351d20: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d1c) {
            ctx->pc = 0x351D2Cu;
            goto label_351d2c;
        }
    }
    ctx->pc = 0x351D24u;
label_351d24:
    // 0x351d24: 0x0  nop
    ctx->pc = 0x351d24u;
    // NOP
label_351d28:
    // 0x351d28: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x351d28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351d2c:
    // 0x351d2c: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x351d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_351d30:
    // 0x351d30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x351d30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_351d34:
    // 0x351d34: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x351d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_351d38:
    // 0x351d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351d3c:
    // 0x351d3c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x351d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_351d40:
    // 0x351d40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351d44:
    // 0x351d44: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_351d48:
    if (ctx->pc == 0x351D48u) {
        ctx->pc = 0x351D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D44u;
        // 0x351d48: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D4Cu;
        goto label_351d4c;
    }
    ctx->pc = 0x351D44u;
    {
        const bool branch_taken_0x351d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351d44) {
            ctx->pc = 0x351D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351D44u;
            // 0x351d48: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351D5Cu;
            goto label_351d5c;
        }
    }
    ctx->pc = 0x351D4Cu;
label_351d4c:
    // 0x351d4c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x351d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_351d50:
    // 0x351d50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351d54:
    // 0x351d54: 0x10000003  b           . + 4 + (0x3 << 2)
label_351d58:
    if (ctx->pc == 0x351D58u) {
        ctx->pc = 0x351D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D54u;
        // 0x351d58: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D5Cu;
        goto label_351d5c;
    }
    ctx->pc = 0x351D54u;
    {
        const bool branch_taken_0x351d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D54u;
        // 0x351d58: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d54) {
            ctx->pc = 0x351D64u;
            goto label_351d64;
        }
    }
    ctx->pc = 0x351D5Cu;
label_351d5c:
    // 0x351d5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351d60:
    // 0x351d60: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x351d60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_351d64:
    // 0x351d64: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x351d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_351d68:
    // 0x351d68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x351d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_351d6c:
    // 0x351d6c: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x351d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_351d70:
    // 0x351d70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351d74:
    // 0x351d74: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x351d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_351d78:
    // 0x351d78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351d7c:
    // 0x351d7c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_351d80:
    if (ctx->pc == 0x351D80u) {
        ctx->pc = 0x351D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D7Cu;
        // 0x351d80: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D84u;
        goto label_351d84;
    }
    ctx->pc = 0x351D7Cu;
    {
        const bool branch_taken_0x351d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351d7c) {
            ctx->pc = 0x351D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351D7Cu;
            // 0x351d80: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351D94u;
            goto label_351d94;
        }
    }
    ctx->pc = 0x351D84u;
label_351d84:
    // 0x351d84: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x351d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_351d88:
    // 0x351d88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351d8c:
    // 0x351d8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_351d90:
    if (ctx->pc == 0x351D90u) {
        ctx->pc = 0x351D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D8Cu;
        // 0x351d90: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D94u;
        goto label_351d94;
    }
    ctx->pc = 0x351D8Cu;
    {
        const bool branch_taken_0x351d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D8Cu;
        // 0x351d90: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d8c) {
            ctx->pc = 0x351D9Cu;
            goto label_351d9c;
        }
    }
    ctx->pc = 0x351D94u;
label_351d94:
    // 0x351d94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351d98:
    // 0x351d98: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x351d98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_351d9c:
    // 0x351d9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x351d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_351da0:
    // 0x351da0: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x351da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_351da4:
    // 0x351da4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_351da8:
    if (ctx->pc == 0x351DA8u) {
        ctx->pc = 0x351DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DA4u;
        // 0x351da8: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DACu;
        goto label_351dac;
    }
    ctx->pc = 0x351DA4u;
    {
        const bool branch_taken_0x351da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DA4u;
        // 0x351da8: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351da4) {
            ctx->pc = 0x351E90u;
            goto label_351e90;
        }
    }
    ctx->pc = 0x351DACu;
label_351dac:
    // 0x351dac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x351dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_351db0:
    // 0x351db0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x351db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_351db4:
    // 0x351db4: 0x0  nop
    ctx->pc = 0x351db4u;
    // NOP
label_351db8:
    // 0x351db8: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x351db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_351dbc:
    // 0x351dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351dc0:
    // 0x351dc0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x351dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_351dc4:
    // 0x351dc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351dc8:
    // 0x351dc8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_351dcc:
    if (ctx->pc == 0x351DCCu) {
        ctx->pc = 0x351DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DC8u;
        // 0x351dcc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DD0u;
        goto label_351dd0;
    }
    ctx->pc = 0x351DC8u;
    {
        const bool branch_taken_0x351dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351dc8) {
            ctx->pc = 0x351DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351DC8u;
            // 0x351dcc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351DE0u;
            goto label_351de0;
        }
    }
    ctx->pc = 0x351DD0u;
label_351dd0:
    // 0x351dd0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x351dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_351dd4:
    // 0x351dd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351dd8:
    // 0x351dd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_351ddc:
    if (ctx->pc == 0x351DDCu) {
        ctx->pc = 0x351DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DD8u;
        // 0x351ddc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DE0u;
        goto label_351de0;
    }
    ctx->pc = 0x351DD8u;
    {
        const bool branch_taken_0x351dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DD8u;
        // 0x351ddc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351dd8) {
            ctx->pc = 0x351DE8u;
            goto label_351de8;
        }
    }
    ctx->pc = 0x351DE0u;
label_351de0:
    // 0x351de0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351de4:
    // 0x351de4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x351de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_351de8:
    // 0x351de8: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x351de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_351dec:
    // 0x351dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351df0:
    // 0x351df0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x351df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_351df4:
    // 0x351df4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351df8:
    // 0x351df8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_351dfc:
    if (ctx->pc == 0x351DFCu) {
        ctx->pc = 0x351DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DF8u;
        // 0x351dfc: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E00u;
        goto label_351e00;
    }
    ctx->pc = 0x351DF8u;
    {
        const bool branch_taken_0x351df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351df8) {
            ctx->pc = 0x351DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351DF8u;
            // 0x351dfc: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351E10u;
            goto label_351e10;
        }
    }
    ctx->pc = 0x351E00u;
label_351e00:
    // 0x351e00: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x351e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_351e04:
    // 0x351e04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351e08:
    // 0x351e08: 0x10000003  b           . + 4 + (0x3 << 2)
label_351e0c:
    if (ctx->pc == 0x351E0Cu) {
        ctx->pc = 0x351E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E08u;
        // 0x351e0c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E10u;
        goto label_351e10;
    }
    ctx->pc = 0x351E08u;
    {
        const bool branch_taken_0x351e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E08u;
        // 0x351e0c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e08) {
            ctx->pc = 0x351E18u;
            goto label_351e18;
        }
    }
    ctx->pc = 0x351E10u;
label_351e10:
    // 0x351e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351e14:
    // 0x351e14: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x351e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_351e18:
    // 0x351e18: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x351e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_351e1c:
    // 0x351e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351e20:
    // 0x351e20: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x351e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_351e24:
    // 0x351e24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351e28:
    // 0x351e28: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_351e2c:
    if (ctx->pc == 0x351E2Cu) {
        ctx->pc = 0x351E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E28u;
        // 0x351e2c: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E30u;
        goto label_351e30;
    }
    ctx->pc = 0x351E28u;
    {
        const bool branch_taken_0x351e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e28) {
            ctx->pc = 0x351E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351E28u;
            // 0x351e2c: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351E40u;
            goto label_351e40;
        }
    }
    ctx->pc = 0x351E30u;
label_351e30:
    // 0x351e30: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x351e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_351e34:
    // 0x351e34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351e38:
    // 0x351e38: 0x10000003  b           . + 4 + (0x3 << 2)
label_351e3c:
    if (ctx->pc == 0x351E3Cu) {
        ctx->pc = 0x351E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E38u;
        // 0x351e3c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E40u;
        goto label_351e40;
    }
    ctx->pc = 0x351E38u;
    {
        const bool branch_taken_0x351e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E38u;
        // 0x351e3c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e38) {
            ctx->pc = 0x351E48u;
            goto label_351e48;
        }
    }
    ctx->pc = 0x351E40u;
label_351e40:
    // 0x351e40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351e44:
    // 0x351e44: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x351e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_351e48:
    // 0x351e48: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x351e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_351e4c:
    // 0x351e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351e50:
    // 0x351e50: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x351e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_351e54:
    // 0x351e54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351e58:
    // 0x351e58: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_351e5c:
    if (ctx->pc == 0x351E5Cu) {
        ctx->pc = 0x351E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E58u;
        // 0x351e5c: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E60u;
        goto label_351e60;
    }
    ctx->pc = 0x351E58u;
    {
        const bool branch_taken_0x351e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e58) {
            ctx->pc = 0x351E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351E58u;
            // 0x351e5c: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351E70u;
            goto label_351e70;
        }
    }
    ctx->pc = 0x351E60u;
label_351e60:
    // 0x351e60: 0x8ce2004c  lw          $v0, 0x4C($a3)
    ctx->pc = 0x351e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
label_351e64:
    // 0x351e64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351e68:
    // 0x351e68: 0x10000003  b           . + 4 + (0x3 << 2)
label_351e6c:
    if (ctx->pc == 0x351E6Cu) {
        ctx->pc = 0x351E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E68u;
        // 0x351e6c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E70u;
        goto label_351e70;
    }
    ctx->pc = 0x351E68u;
    {
        const bool branch_taken_0x351e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E68u;
        // 0x351e6c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e68) {
            ctx->pc = 0x351E78u;
            goto label_351e78;
        }
    }
    ctx->pc = 0x351E70u;
label_351e70:
    // 0x351e70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x351e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_351e74:
    // 0x351e74: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x351e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_351e78:
    // 0x351e78: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x351e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_351e7c:
    // 0x351e7c: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x351e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
label_351e80:
    // 0x351e80: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x351e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_351e84:
    // 0x351e84: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x351e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_351e88:
    // 0x351e88: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_351e8c:
    if (ctx->pc == 0x351E8Cu) {
        ctx->pc = 0x351E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E88u;
        // 0x351e8c: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E90u;
        goto label_351e90;
    }
    ctx->pc = 0x351E88u;
    {
        const bool branch_taken_0x351e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E88u;
        // 0x351e8c: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e88) {
            ctx->pc = 0x351DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351db8;
        }
    }
    ctx->pc = 0x351E90u;
label_351e90:
    // 0x351e90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x351e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_351e94:
    // 0x351e94: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x351e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_351e98:
    // 0x351e98: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x351e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_351e9c:
    // 0x351e9c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x351e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_351ea0:
    // 0x351ea0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x351ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_351ea4:
    // 0x351ea4: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x351ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_351ea8:
    // 0x351ea8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x351ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_351eac:
    // 0x351eac: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_351eb0:
    if (ctx->pc == 0x351EB0u) {
        ctx->pc = 0x351EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EACu;
        // 0x351eb0: 0xa32018  mult        $a0, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EB4u;
        goto label_351eb4;
    }
    ctx->pc = 0x351EACu;
    {
        const bool branch_taken_0x351eac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x351EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EACu;
        // 0x351eb0: 0xa32018  mult        $a0, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x351eac) {
            ctx->pc = 0x351EC8u;
            goto label_351ec8;
        }
    }
    ctx->pc = 0x351EB4u;
label_351eb4:
    // 0x351eb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x351eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_351eb8:
    // 0x351eb8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x351eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_351ebc:
    // 0x351ebc: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x351ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_351ec0:
    // 0x351ec0: 0x10000005  b           . + 4 + (0x5 << 2)
label_351ec4:
    if (ctx->pc == 0x351EC4u) {
        ctx->pc = 0x351EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EC0u;
        // 0x351ec4: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EC8u;
        goto label_351ec8;
    }
    ctx->pc = 0x351EC0u;
    {
        const bool branch_taken_0x351ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EC0u;
        // 0x351ec4: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ec0) {
            ctx->pc = 0x351ED8u;
            goto label_351ed8;
        }
    }
    ctx->pc = 0x351EC8u;
label_351ec8:
    // 0x351ec8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x351ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_351ecc:
    // 0x351ecc: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x351eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
label_351ed0:
    // 0x351ed0: 0x24a3e880  addiu       $v1, $a1, -0x1780
    ctx->pc = 0x351ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_351ed4:
    // 0x351ed4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x351ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_351ed8:
    // 0x351ed8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x351ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_351edc:
    // 0x351edc: 0x40f809  jalr        $v0
label_351ee0:
    if (ctx->pc == 0x351EE0u) {
        ctx->pc = 0x351EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EDCu;
        // 0x351ee0: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EE4u;
        goto label_351ee4;
    }
    ctx->pc = 0x351EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351EE4u);
        ctx->pc = 0x351EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EDCu;
        // 0x351ee0: 0x34a5012f  ori         $a1, $a1, 0x12F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351EDCu, 0x351EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351EE4u;
label_351ee4:
    // 0x351ee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x351ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351ee8:
    // 0x351ee8: 0x120000e0  beqz        $s0, . + 4 + (0xE0 << 2)
label_351eec:
    if (ctx->pc == 0x351EECu) {
        ctx->pc = 0x351EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EE8u;
        // 0x351eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EF0u;
        goto label_351ef0;
    }
    ctx->pc = 0x351EE8u;
    {
        const bool branch_taken_0x351ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x351EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EE8u;
        // 0x351eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ee8) {
            ctx->pc = 0x35226Cu;
            goto label_35226c;
        }
    }
    ctx->pc = 0x351EF0u;
label_351ef0:
    // 0x351ef0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x351ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_351ef4:
    // 0x351ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351ef8:
    // 0x351ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x351ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351efc:
    // 0x351efc: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x351efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_351f00:
    // 0x351f00: 0x2c560002  sltiu       $s6, $v0, 0x2
    ctx->pc = 0x351f00u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_351f04:
    // 0x351f04: 0xc0bb7e6  jal         func_2EDF98
label_351f08:
    if (ctx->pc == 0x351F08u) {
        ctx->pc = 0x351F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F04u;
        // 0x351f08: 0x32b70001  andi        $s7, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F0Cu;
        goto label_351f0c;
    }
    ctx->pc = 0x351F04u;
    SET_GPR_U32(ctx, 31, 0x351F0Cu);
    ctx->pc = 0x351F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F04u;
    // 0x351f08: 0x32b70001  andi        $s7, $s5, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x351F04u, 0x351F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F0Cu;
label_351f0c:
    // 0x351f0c: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x351f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_351f10:
    // 0x351f10: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x351f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_351f14:
    // 0x351f14: 0xae110134  sw          $s1, 0x134($s0)
    ctx->pc = 0x351f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 17));
label_351f18:
    // 0x351f18: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x351f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_351f1c:
    // 0x351f1c: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x351f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_351f20:
    // 0x351f20: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x351f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_351f24:
    // 0x351f24: 0xae050130  sw          $a1, 0x130($s0)
    ctx->pc = 0x351f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 5));
label_351f28:
    // 0x351f28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x351f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351f2c:
    // 0x351f2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x351f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_351f30:
    // 0x351f30: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x351f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_351f34:
    // 0x351f34: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x351f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_351f38:
    // 0x351f38: 0xae12012c  sw          $s2, 0x12C($s0)
    ctx->pc = 0x351f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 18));
label_351f3c:
    // 0x351f3c: 0xae1300fc  sw          $s3, 0xFC($s0)
    ctx->pc = 0x351f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 19));
label_351f40:
    // 0x351f40: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x351f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_351f44:
    // 0x351f44: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x351f44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_351f48:
    // 0x351f48: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x351f48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
label_351f4c:
    // 0x351f4c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x351f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_351f50:
    // 0x351f50: 0x7e030110  sq          $v1, 0x110($s0)
    ctx->pc = 0x351f50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 3));
label_351f54:
    // 0x351f54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x351f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_351f58:
    // 0x351f58: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x351f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_351f5c:
    // 0x351f5c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x351f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_351f60:
    // 0x351f60: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x351f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_351f64:
    // 0x351f64: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x351f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_351f68:
    // 0x351f68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_351f6c:
    if (ctx->pc == 0x351F6Cu) {
        ctx->pc = 0x351F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F68u;
        // 0x351f6c: 0xae0300f8  sw          $v1, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F70u;
        goto label_351f70;
    }
    ctx->pc = 0x351F68u;
    {
        const bool branch_taken_0x351f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F68u;
        // 0x351f6c: 0xae0300f8  sw          $v1, 0xF8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f68) {
            ctx->pc = 0x351FBCu;
            goto label_351fbc;
        }
    }
    ctx->pc = 0x351F70u;
label_351f70:
    // 0x351f70: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x351f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_351f74:
    // 0x351f74: 0x2666003c  addiu       $a2, $s3, 0x3C
    ctx->pc = 0x351f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
label_351f78:
    // 0x351f78: 0x24477b18  addiu       $a3, $v0, 0x7B18
    ctx->pc = 0x351f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31512));
label_351f7c:
    // 0x351f7c: 0x260500f4  addiu       $a1, $s0, 0xF4
    ctx->pc = 0x351f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
label_351f80:
    // 0x351f80: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x351f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_351f84:
    // 0x351f84: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x351f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351f88:
    // 0x351f88: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x351f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_351f8c:
    // 0x351f8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x351f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_351f90:
    // 0x351f90: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_351f94:
    if (ctx->pc == 0x351F94u) {
        ctx->pc = 0x351F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F90u;
        // 0x351f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F98u;
        goto label_351f98;
    }
    ctx->pc = 0x351F90u;
    {
        const bool branch_taken_0x351f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x351f90) {
            ctx->pc = 0x351F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351F90u;
            // 0x351f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351FA0u;
            goto label_351fa0;
        }
    }
    ctx->pc = 0x351F98u;
label_351f98:
    // 0x351f98: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x351f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_351f9c:
    // 0x351f9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x351f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_351fa0:
    // 0x351fa0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x351fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_351fa4:
    // 0x351fa4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x351fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_351fa8:
    // 0x351fa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x351fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_351fac:
    // 0x351fac: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x351facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_351fb0:
    // 0x351fb0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x351fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_351fb4:
    // 0x351fb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_351fb8:
    if (ctx->pc == 0x351FB8u) {
        ctx->pc = 0x351FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FB4u;
        // 0x351fb8: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FBCu;
        goto label_351fbc;
    }
    ctx->pc = 0x351FB4u;
    {
        const bool branch_taken_0x351fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x351FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FB4u;
        // 0x351fb8: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351fb4) {
            ctx->pc = 0x351F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351f80;
        }
    }
    ctx->pc = 0x351FBCu;
label_351fbc:
    // 0x351fbc: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x351fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_351fc0:
    // 0x351fc0: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
label_351fc4:
    if (ctx->pc == 0x351FC4u) {
        ctx->pc = 0x351FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FC0u;
        // 0x351fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FC8u;
        goto label_351fc8;
    }
    ctx->pc = 0x351FC0u;
    {
        const bool branch_taken_0x351fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FC0u;
        // 0x351fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351fc0) {
            ctx->pc = 0x35223Cu;
            goto label_35223c;
        }
    }
    ctx->pc = 0x351FC8u;
label_351fc8:
    // 0x351fc8: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x351fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
label_351fcc:
    // 0x351fcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x351fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351fd0:
    // 0x351fd0: 0x26650028  addiu       $a1, $s3, 0x28
    ctx->pc = 0x351fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_351fd4:
    // 0x351fd4: 0x26070090  addiu       $a3, $s0, 0x90
    ctx->pc = 0x351fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_351fd8:
    // 0x351fd8: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x351fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_351fdc:
    // 0x351fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_351fe0:
    // 0x351fe0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x351fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_351fe4:
    // 0x351fe4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x351fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351fe8:
    // 0x351fe8: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_351fec:
    if (ctx->pc == 0x351FECu) {
        ctx->pc = 0x351FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FE8u;
        // 0x351fec: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FF0u;
        goto label_351ff0;
    }
    ctx->pc = 0x351FE8u;
    {
        const bool branch_taken_0x351fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351fe8) {
            ctx->pc = 0x351FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351FE8u;
            // 0x351fec: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35200Cu;
            goto label_35200c;
        }
    }
    ctx->pc = 0x351FF0u;
label_351ff0:
    // 0x351ff0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x351ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_351ff4:
    // 0x351ff4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x351ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_351ff8:
    // 0x351ff8: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x351ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_351ffc:
    // 0x351ffc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x351ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_352000:
    // 0x352000: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x352000u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
label_352004:
    // 0x352004: 0x10000009  b           . + 4 + (0x9 << 2)
label_352008:
    if (ctx->pc == 0x352008u) {
        ctx->pc = 0x352008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352004u;
        // 0x352008: 0xfce00000  sd          $zero, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35200Cu;
        goto label_35200c;
    }
    ctx->pc = 0x352004u;
    {
        const bool branch_taken_0x352004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352004u;
        // 0x352008: 0xfce00000  sd          $zero, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352004) {
            ctx->pc = 0x35202Cu;
            goto label_35202c;
        }
    }
    ctx->pc = 0x35200Cu;
label_35200c:
    // 0x35200c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x35200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_352010:
    // 0x352010: 0xacc20040  sw          $v0, 0x40($a2)
    ctx->pc = 0x352010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 2));
label_352014:
    // 0x352014: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x352014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_352018:
    // 0x352018: 0xacc3004c  sw          $v1, 0x4C($a2)
    ctx->pc = 0x352018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 3));
label_35201c:
    // 0x35201c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x35201cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_352020:
    // 0x352020: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x352020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_352024:
    // 0x352024: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x352024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_352028:
    // 0x352028: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x352028u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_35202c:
    // 0x35202c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x35202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_352030:
    // 0x352030: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x352030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_352034:
    // 0x352034: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x352034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_352038:
    // 0x352038: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x352038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_35203c:
    // 0x35203c: 0xacc20048  sw          $v0, 0x48($a2)
    ctx->pc = 0x35203cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 2));
label_352040:
    // 0x352040: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x352040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_352044:
    // 0x352044: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x352044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_352048:
    // 0x352048: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_35204c:
    if (ctx->pc == 0x35204Cu) {
        ctx->pc = 0x35204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352048u;
        // 0x35204c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352050u;
        goto label_352050;
    }
    ctx->pc = 0x352048u;
    {
        const bool branch_taken_0x352048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352048u;
        // 0x35204c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352048) {
            ctx->pc = 0x351FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351fd8;
        }
    }
    ctx->pc = 0x352050u;
label_352050:
    // 0x352050: 0x1000007b  b           . + 4 + (0x7B << 2)
label_352054:
    if (ctx->pc == 0x352054u) {
        ctx->pc = 0x352054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352050u;
        // 0x352054: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352058u;
        goto label_352058;
    }
    ctx->pc = 0x352050u;
    {
        const bool branch_taken_0x352050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352050u;
        // 0x352054: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352050) {
            ctx->pc = 0x352240u;
            goto label_352240;
        }
    }
    ctx->pc = 0x352058u;
label_352058:
    // 0x352058: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x352058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_35205c:
    // 0x35205c: 0x3221024  and         $v0, $t9, $v0
    ctx->pc = 0x35205cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 2));
label_352060:
    // 0x352060: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_352064:
    if (ctx->pc == 0x352064u) {
        ctx->pc = 0x352064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352060u;
        // 0x352064: 0x33220008  andi        $v0, $t9, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x352068u;
        goto label_352068;
    }
    ctx->pc = 0x352060u;
    {
        const bool branch_taken_0x352060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352060u;
        // 0x352064: 0x33220008  andi        $v0, $t9, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352060) {
            ctx->pc = 0x352168u;
            goto label_352168;
        }
    }
    ctx->pc = 0x352068u;
label_352068:
    // 0x352068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_35206c:
    if (ctx->pc == 0x35206Cu) {
        ctx->pc = 0x35206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352068u;
        // 0x35206c: 0x72100  sll         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352070u;
        goto label_352070;
    }
    ctx->pc = 0x352068u;
    {
        const bool branch_taken_0x352068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352068u;
        // 0x35206c: 0x72100  sll         $a0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352068) {
            ctx->pc = 0x35207Cu;
            goto label_35207c;
        }
    }
    ctx->pc = 0x352070u;
label_352070:
    // 0x352070: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x352070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_352074:
    // 0x352074: 0x8c43b954  lw          $v1, -0x46AC($v0)
    ctx->pc = 0x352074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949204)));
label_352078:
    // 0x352078: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x352078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_35207c:
    // 0x35207c: 0x33220010  andi        $v0, $t9, 0x10
    ctx->pc = 0x35207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)16);
label_352080:
    // 0x352080: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_352084:
    if (ctx->pc == 0x352084u) {
        ctx->pc = 0x352084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352080u;
        // 0x352084: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352088u;
        goto label_352088;
    }
    ctx->pc = 0x352080u;
    {
        const bool branch_taken_0x352080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352080u;
        // 0x352084: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352080) {
            ctx->pc = 0x352090u;
            goto label_352090;
        }
    }
    ctx->pc = 0x352088u;
label_352088:
    // 0x352088: 0x8c43b958  lw          $v1, -0x46A8($v0)
    ctx->pc = 0x352088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949208)));
label_35208c:
    // 0x35208c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x35208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_352090:
    // 0x352090: 0x33220004  andi        $v0, $t9, 0x4
    ctx->pc = 0x352090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)4);
label_352094:
    // 0x352094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_352098:
    if (ctx->pc == 0x352098u) {
        ctx->pc = 0x352098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352094u;
        // 0x352098: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35209Cu;
        goto label_35209c;
    }
    ctx->pc = 0x352094u;
    {
        const bool branch_taken_0x352094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352094u;
        // 0x352098: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352094) {
            ctx->pc = 0x3520A4u;
            goto label_3520a4;
        }
    }
    ctx->pc = 0x35209Cu;
label_35209c:
    // 0x35209c: 0x8c43b95c  lw          $v1, -0x46A4($v0)
    ctx->pc = 0x35209cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949212)));
label_3520a0:
    // 0x3520a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3520a4:
    // 0x3520a4: 0x33220002  andi        $v0, $t9, 0x2
    ctx->pc = 0x3520a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)2);
label_3520a8:
    // 0x3520a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3520ac:
    if (ctx->pc == 0x3520ACu) {
        ctx->pc = 0x3520ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520A8u;
        // 0x3520ac: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3520B0u;
        goto label_3520b0;
    }
    ctx->pc = 0x3520A8u;
    {
        const bool branch_taken_0x3520a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520A8u;
        // 0x3520ac: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520a8) {
            ctx->pc = 0x3520B8u;
            goto label_3520b8;
        }
    }
    ctx->pc = 0x3520B0u;
label_3520b0:
    // 0x3520b0: 0x8c43b960  lw          $v1, -0x46A0($v0)
    ctx->pc = 0x3520b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949216)));
label_3520b4:
    // 0x3520b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3520b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3520b8:
    // 0x3520b8: 0x33220040  andi        $v0, $t9, 0x40
    ctx->pc = 0x3520b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)64);
label_3520bc:
    // 0x3520bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3520c0:
    if (ctx->pc == 0x3520C0u) {
        ctx->pc = 0x3520C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520BCu;
        // 0x3520c0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3520C4u;
        goto label_3520c4;
    }
    ctx->pc = 0x3520BCu;
    {
        const bool branch_taken_0x3520bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520BCu;
        // 0x3520c0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520bc) {
            ctx->pc = 0x3520CCu;
            goto label_3520cc;
        }
    }
    ctx->pc = 0x3520C4u;
label_3520c4:
    // 0x3520c4: 0x8c43b964  lw          $v1, -0x469C($v0)
    ctx->pc = 0x3520c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949220)));
label_3520c8:
    // 0x3520c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3520c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3520cc:
    // 0x3520cc: 0x33220020  andi        $v0, $t9, 0x20
    ctx->pc = 0x3520ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)32);
label_3520d0:
    // 0x3520d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3520d4:
    if (ctx->pc == 0x3520D4u) {
        ctx->pc = 0x3520D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520D0u;
        // 0x3520d4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3520D8u;
        goto label_3520d8;
    }
    ctx->pc = 0x3520D0u;
    {
        const bool branch_taken_0x3520d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520D0u;
        // 0x3520d4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520d0) {
            ctx->pc = 0x3520E0u;
            goto label_3520e0;
        }
    }
    ctx->pc = 0x3520D8u;
label_3520d8:
    // 0x3520d8: 0x8c43b968  lw          $v1, -0x4698($v0)
    ctx->pc = 0x3520d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949224)));
label_3520dc:
    // 0x3520dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3520dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3520e0:
    // 0x3520e0: 0x33220080  andi        $v0, $t9, 0x80
    ctx->pc = 0x3520e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)128);
label_3520e4:
    // 0x3520e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3520e8:
    if (ctx->pc == 0x3520E8u) {
        ctx->pc = 0x3520E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520E4u;
        // 0x3520e8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3520ECu;
        goto label_3520ec;
    }
    ctx->pc = 0x3520E4u;
    {
        const bool branch_taken_0x3520e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520E4u;
        // 0x3520e8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520e4) {
            ctx->pc = 0x3520F4u;
            goto label_3520f4;
        }
    }
    ctx->pc = 0x3520ECu;
label_3520ec:
    // 0x3520ec: 0x8c43b96c  lw          $v1, -0x4694($v0)
    ctx->pc = 0x3520ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949228)));
label_3520f0:
    // 0x3520f0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3520f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3520f4:
    // 0x3520f4: 0x33220100  andi        $v0, $t9, 0x100
    ctx->pc = 0x3520f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)256);
label_3520f8:
    // 0x3520f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3520fc:
    if (ctx->pc == 0x3520FCu) {
        ctx->pc = 0x3520FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520F8u;
        // 0x3520fc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352100u;
        goto label_352100;
    }
    ctx->pc = 0x3520F8u;
    {
        const bool branch_taken_0x3520f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3520FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520F8u;
        // 0x3520fc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3520f8) {
            ctx->pc = 0x352108u;
            goto label_352108;
        }
    }
    ctx->pc = 0x352100u;
label_352100:
    // 0x352100: 0x8c43b970  lw          $v1, -0x4690($v0)
    ctx->pc = 0x352100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949232)));
label_352104:
    // 0x352104: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x352104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_352108:
    // 0x352108: 0x33220009  andi        $v0, $t9, 0x9
    ctx->pc = 0x352108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)9);
label_35210c:
    // 0x35210c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_352110:
    if (ctx->pc == 0x352110u) {
        ctx->pc = 0x352110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35210Cu;
        // 0x352110: 0x2483000f  addiu       $v1, $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352114u;
        goto label_352114;
    }
    ctx->pc = 0x35210Cu;
    {
        const bool branch_taken_0x35210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35210Cu;
        // 0x352110: 0x2483000f  addiu       $v1, $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35210c) {
            ctx->pc = 0x352120u;
            goto label_352120;
        }
    }
    ctx->pc = 0x352114u;
label_352114:
    // 0x352114: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x352114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_352118:
    // 0x352118: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x352118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_35211c:
    // 0x35211c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x35211cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_352120:
    // 0x352120: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x352120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_352124:
    // 0x352124: 0x26980008  addiu       $t8, $s4, 0x8
    ctx->pc = 0x352124u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_352128:
    // 0x352128: 0x32b70001  andi        $s7, $s5, 0x1
    ctx->pc = 0x352128u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_35212c:
    // 0x35212c: 0xae840054  sw          $a0, 0x54($s4)
    ctx->pc = 0x35212cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 4));
label_352130:
    // 0x352130: 0x2cb60002  sltiu       $s6, $a1, 0x2
    ctx->pc = 0x352130u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_352134:
    // 0x352134: 0x32b00008  andi        $s0, $s5, 0x8
    ctx->pc = 0x352134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_352138:
    // 0x352138: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x352138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_35213c:
    // 0x35213c: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x35213cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_352140:
    // 0x352140: 0xaf040040  sw          $a0, 0x40($t8)
    ctx->pc = 0x352140u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 4));
label_352144:
    // 0x352144: 0xaf040008  sw          $a0, 0x8($t8)
    ctx->pc = 0x352144u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 4));
label_352148:
    // 0x352148: 0xaf040010  sw          $a0, 0x10($t8)
    ctx->pc = 0x352148u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 4));
label_35214c:
    // 0x35214c: 0xaf040018  sw          $a0, 0x18($t8)
    ctx->pc = 0x35214cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 24), GPR_U32(ctx, 4));
label_352150:
    // 0x352150: 0xaf040020  sw          $a0, 0x20($t8)
    ctx->pc = 0x352150u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 32), GPR_U32(ctx, 4));
label_352154:
    // 0x352154: 0xaf040028  sw          $a0, 0x28($t8)
    ctx->pc = 0x352154u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 40), GPR_U32(ctx, 4));
label_352158:
    // 0x352158: 0xaf040030  sw          $a0, 0x30($t8)
    ctx->pc = 0x352158u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 4));
label_35215c:
    // 0x35215c: 0xaf040038  sw          $a0, 0x38($t8)
    ctx->pc = 0x35215cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 4));
label_352160:
    // 0x352160: 0x10000021  b           . + 4 + (0x21 << 2)
label_352164:
    if (ctx->pc == 0x352164u) {
        ctx->pc = 0x352164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352160u;
        // 0x352164: 0x1a42018  mult        $a0, $t5, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x352168u;
        goto label_352168;
    }
    ctx->pc = 0x352160u;
    {
        const bool branch_taken_0x352160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352160u;
        // 0x352164: 0x1a42018  mult        $a0, $t5, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x352160) {
            ctx->pc = 0x3521E8u;
            goto label_3521e8;
        }
    }
    ctx->pc = 0x352168u;
label_352168:
    // 0x352168: 0xae800054  sw          $zero, 0x54($s4)
    ctx->pc = 0x352168u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 0));
label_35216c:
    // 0x35216c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x35216cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_352170:
    // 0x352170: 0x24647af0  addiu       $a0, $v1, 0x7AF0
    ctx->pc = 0x352170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31472));
label_352174:
    // 0x352174: 0x26980008  addiu       $t8, $s4, 0x8
    ctx->pc = 0x352174u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_352178:
    // 0x352178: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x352178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_35217c:
    // 0x35217c: 0x32b70001  andi        $s7, $s5, 0x1
    ctx->pc = 0x35217cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_352180:
    // 0x352180: 0x32b00008  andi        $s0, $s5, 0x8
    ctx->pc = 0x352180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_352184:
    // 0x352184: 0x2c560002  sltiu       $s6, $v0, 0x2
    ctx->pc = 0x352184u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_352188:
    // 0x352188: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x352188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_35218c:
    // 0x35218c: 0x8c627af0  lw          $v0, 0x7AF0($v1)
    ctx->pc = 0x35218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31472)));
label_352190:
    // 0x352190: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x352190u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_352194:
    // 0x352194: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x352194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_352198:
    // 0x352198: 0xaf030008  sw          $v1, 0x8($t8)
    ctx->pc = 0x352198u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 3));
label_35219c:
    // 0x35219c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x35219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3521a0:
    // 0x3521a0: 0xaf020010  sw          $v0, 0x10($t8)
    ctx->pc = 0x3521a0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 2));
label_3521a4:
    // 0x3521a4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3521a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3521a8:
    // 0x3521a8: 0xaf030018  sw          $v1, 0x18($t8)
    ctx->pc = 0x3521a8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 24), GPR_U32(ctx, 3));
label_3521ac:
    // 0x3521ac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3521acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3521b0:
    // 0x3521b0: 0xaf020020  sw          $v0, 0x20($t8)
    ctx->pc = 0x3521b0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 32), GPR_U32(ctx, 2));
label_3521b4:
    // 0x3521b4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3521b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3521b8:
    // 0x3521b8: 0xaf030028  sw          $v1, 0x28($t8)
    ctx->pc = 0x3521b8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 40), GPR_U32(ctx, 3));
label_3521bc:
    // 0x3521bc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3521bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_3521c0:
    // 0x3521c0: 0xaf020030  sw          $v0, 0x30($t8)
    ctx->pc = 0x3521c0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 2));
label_3521c4:
    // 0x3521c4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3521c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3521c8:
    // 0x3521c8: 0xaf030038  sw          $v1, 0x38($t8)
    ctx->pc = 0x3521c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 3));
label_3521cc:
    // 0x3521cc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x3521ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_3521d0:
    // 0x3521d0: 0xaf020040  sw          $v0, 0x40($t8)
    ctx->pc = 0x3521d0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 2));
label_3521d4:
    // 0x3521d4: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x3521d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3521d8:
    // 0x3521d8: 0xc0d463c  jal         func_3518F0
label_3521dc:
    if (ctx->pc == 0x3521DCu) {
        ctx->pc = 0x3521DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521D8u;
        // 0x3521dc: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3521E0u;
        goto label_3521e0;
    }
    ctx->pc = 0x3521D8u;
    SET_GPR_U32(ctx, 31, 0x3521E0u);
    ctx->pc = 0x3521DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3521D8u;
    // 0x3521dc: 0x320282d  daddu       $a1, $t9, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3518F0u;
    goto label_3518f0;
    ctx->pc = 0x3521E0u;
label_3521e0:
    // 0x3521e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3521e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3521e4:
    // 0x3521e4: 0x0  nop
    ctx->pc = 0x3521e4u;
    // NOP
label_3521e8:
    // 0x3521e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3521ec:
    if (ctx->pc == 0x3521ECu) {
        ctx->pc = 0x3521ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521E8u;
        // 0x3521ec: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3521F0u;
        goto label_3521f0;
    }
    ctx->pc = 0x3521E8u;
    {
        const bool branch_taken_0x3521e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3521ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521E8u;
        // 0x3521ec: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3521e8) {
            ctx->pc = 0x352208u;
            goto label_352208;
        }
    }
    ctx->pc = 0x3521F0u;
label_3521f0:
    // 0x3521f0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3521f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3521f4:
    // 0x3521f4: 0x2483e880  addiu       $v1, $a0, -0x1780
    ctx->pc = 0x3521f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3521f8:
    // 0x3521f8: 0x34a5012f  ori         $a1, $a1, 0x12F
    ctx->pc = 0x3521f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
label_3521fc:
    // 0x3521fc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3521fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_352200:
    // 0x352200: 0x10000007  b           . + 4 + (0x7 << 2)
label_352204:
    if (ctx->pc == 0x352204u) {
        ctx->pc = 0x352204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352200u;
        // 0x352204: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352208u;
        goto label_352208;
    }
    ctx->pc = 0x352200u;
    {
        const bool branch_taken_0x352200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352200u;
        // 0x352204: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352200) {
            ctx->pc = 0x352220u;
            goto label_352220;
        }
    }
    ctx->pc = 0x352208u;
label_352208:
    // 0x352208: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x352208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_35220c:
    // 0x35220c: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x35220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
label_352210:
    // 0x352210: 0x24a3e880  addiu       $v1, $a1, -0x1780
    ctx->pc = 0x352210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_352214:
    // 0x352214: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x352214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_352218:
    // 0x352218: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x352218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_35221c:
    // 0x35221c: 0x34a5012f  ori         $a1, $a1, 0x12F
    ctx->pc = 0x35221cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)303);
label_352220:
    // 0x352220: 0x40f809  jalr        $v0
label_352224:
    if (ctx->pc == 0x352224u) {
        ctx->pc = 0x352228u;
        goto label_352228;
    }
    ctx->pc = 0x352220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352220u, 0x352228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352228u;
label_352228:
    // 0x352228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x352228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35222c:
    // 0x35222c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352230:
    // 0x352230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352234:
    // 0x352234: 0xc0bb7e6  jal         func_2EDF98
label_352238:
    if (ctx->pc == 0x352238u) {
        ctx->pc = 0x352238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352234u;
        // 0x352238: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35223Cu;
        goto label_35223c;
    }
    ctx->pc = 0x352234u;
    SET_GPR_U32(ctx, 31, 0x35223Cu);
    ctx->pc = 0x352238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352234u;
    // 0x352238: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x352234u, 0x35223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35223Cu;
label_35223c:
    // 0x35223c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x35223cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_352240:
    // 0x352240: 0x3ac20001  xori        $v0, $s6, 0x1
    ctx->pc = 0x352240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)1);
label_352244:
    // 0x352244: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x352244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_352248:
    // 0x352248: 0xae1100e8  sw          $s1, 0xE8($s0)
    ctx->pc = 0x352248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
label_35224c:
    // 0x35224c: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x35224cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
label_352250:
    // 0x352250: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x352250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_352254:
    // 0x352254: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_352258:
    if (ctx->pc == 0x352258u) {
        ctx->pc = 0x352258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352254u;
        // 0x352258: 0xfe0300c8  sd          $v1, 0xC8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 200), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35225Cu;
        goto label_35225c;
    }
    ctx->pc = 0x352254u;
    {
        const bool branch_taken_0x352254 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x352258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352254u;
        // 0x352258: 0xfe0300c8  sd          $v1, 0xC8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 200), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352254) {
            ctx->pc = 0x352264u;
            goto label_352264;
        }
    }
    ctx->pc = 0x35225Cu;
label_35225c:
    // 0x35225c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352260:
    // 0x352260: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x352260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
label_352264:
    // 0x352264: 0xae90004c  sw          $s0, 0x4C($s4)
    ctx->pc = 0x352264u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 16));
label_352268:
    // 0x352268: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x352268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35226c:
    // 0x35226c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x35226cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_352270:
    // 0x352270: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x352270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_352274:
    // 0x352274: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x352274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_352278:
    // 0x352278: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x352278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_35227c:
    // 0x35227c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x35227cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_352280:
    // 0x352280: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x352280u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_352284:
    // 0x352284: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x352284u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_352288:
    // 0x352288: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x352288u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_35228c:
    // 0x35228c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x35228cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_352290:
    // 0x352290: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x352290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_352294:
    // 0x352294: 0x3e00008  jr          $ra
label_352298:
    if (ctx->pc == 0x352298u) {
        ctx->pc = 0x352298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352294u;
        // 0x352298: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35229Cu;
        goto label_35229c;
    }
    ctx->pc = 0x352294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352294u;
        // 0x352298: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35229Cu;
label_35229c:
    // 0x35229c: 0x0  nop
    ctx->pc = 0x35229cu;
    // NOP
label_3522a0:
    // 0x3522a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3522a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3522a4:
    // 0x3522a4: 0x3c02cff7  lui         $v0, 0xCFF7
    ctx->pc = 0x3522a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53239 << 16));
label_3522a8:
    // 0x3522a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3522a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3522ac:
    // 0x3522ac: 0x3c03cee1  lui         $v1, 0xCEE1
    ctx->pc = 0x3522acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52961 << 16));
label_3522b0:
    // 0x3522b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3522b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3522b4:
    // 0x3522b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3522b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3522b8:
    // 0x3522b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3522b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3522bc:
    // 0x3522bc: 0x3442ff78  ori         $v0, $v0, 0xFF78
    ctx->pc = 0x3522bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65400);
label_3522c0:
    // 0x3522c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3522c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3522c4:
    // 0x3522c4: 0x34637e10  ori         $v1, $v1, 0x7E10
    ctx->pc = 0x3522c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32272);
label_3522c8:
    // 0x3522c8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3522c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3522cc:
    // 0x3522cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3522ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3522d0:
    // 0x3522d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3522d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3522d4:
    // 0x3522d4: 0x2223824  and         $a3, $s1, $v0
    ctx->pc = 0x3522d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_3522d8:
    // 0x3522d8: 0x2232824  and         $a1, $s1, $v1
    ctx->pc = 0x3522d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_3522dc:
    // 0x3522dc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3522dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3522e0:
    // 0x3522e0: 0x8e74004c  lw          $s4, 0x4C($s3)
    ctx->pc = 0x3522e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_3522e4:
    // 0x3522e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3522e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3522e8:
    // 0x3522e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3522e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3522ec:
    // 0x3522ec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3522ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3522f0:
    // 0x3522f0: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x3522f0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3522f4:
    // 0x3522f4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x3522f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3522f8:
    // 0x3522f8: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x3522f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_3522fc:
    // 0x3522fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_352300:
    if (ctx->pc == 0x352300u) {
        ctx->pc = 0x352300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3522FCu;
        // 0x352300: 0x31030010  andi        $v1, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x352304u;
        goto label_352304;
    }
    ctx->pc = 0x3522FCu;
    {
        const bool branch_taken_0x3522fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3522FCu;
        // 0x352300: 0x31030010  andi        $v1, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3522fc) {
            ctx->pc = 0x352310u;
            goto label_352310;
        }
    }
    ctx->pc = 0x352304u;
label_352304:
    // 0x352304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x352304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352308:
    // 0x352308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35230c:
    // 0x35230c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35230cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_352310:
    // 0x352310: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_352314:
    if (ctx->pc == 0x352314u) {
        ctx->pc = 0x352314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352310u;
        // 0x352314: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352318u;
        goto label_352318;
    }
    ctx->pc = 0x352310u;
    {
        const bool branch_taken_0x352310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352310u;
        // 0x352314: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352310) {
            ctx->pc = 0x35236Cu;
            goto label_35236c;
        }
    }
    ctx->pc = 0x352318u;
label_352318:
    // 0x352318: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x352318u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_35231c:
    // 0x35231c: 0x252a8150  addiu       $t2, $t1, -0x7EB0
    ctx->pc = 0x35231cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934864));
label_352320:
    // 0x352320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352324:
    // 0x352324: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x352324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_352328:
    // 0x352328: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x352328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_35232c:
    // 0x35232c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352330:
    // 0x352330: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x352330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352334:
    // 0x352334: 0x252d8150  addiu       $t5, $t1, -0x7EB0
    ctx->pc = 0x352334u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934864));
label_352338:
    // 0x352338: 0x69a20007  ldl         $v0, 0x7($t5)
    ctx->pc = 0x352338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_35233c:
    // 0x35233c: 0x6da20000  ldr         $v0, 0x0($t5)
    ctx->pc = 0x35233cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_352340:
    // 0x352340: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x352340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_352344:
    // 0x352344: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x352344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_352348:
    // 0x352348: 0xb062001b  sdl         $v0, 0x1B($v1)
    ctx->pc = 0x352348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35234c:
    // 0x35234c: 0xb4620014  sdr         $v0, 0x14($v1)
    ctx->pc = 0x35234cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_352350:
    // 0x352350: 0xb06b0023  sdl         $t3, 0x23($v1)
    ctx->pc = 0x352350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_352354:
    // 0x352354: 0xb46b001c  sdr         $t3, 0x1C($v1)
    ctx->pc = 0x352354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_352358:
    // 0x352358: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x352358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_35235c:
    // 0x35235c: 0x40f809  jalr        $v0
label_352360:
    if (ctx->pc == 0x352360u) {
        ctx->pc = 0x352360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35235Cu;
        // 0x352360: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352364u;
        goto label_352364;
    }
    ctx->pc = 0x35235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x352364u);
        ctx->pc = 0x352360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35235Cu;
        // 0x352360: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35235Cu, 0x352364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x352364u;
label_352364:
    // 0x352364: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_352368:
    if (ctx->pc == 0x352368u) {
        ctx->pc = 0x352368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352364u;
        // 0x352368: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35236Cu;
        goto label_35236c;
    }
    ctx->pc = 0x352364u;
    {
        const bool branch_taken_0x352364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352364u;
        // 0x352368: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352364) {
            ctx->pc = 0x352604u;
            goto label_352604;
        }
    }
    ctx->pc = 0x35236Cu;
label_35236c:
    // 0x35236c: 0x8e8200d8  lw          $v0, 0xD8($s4)
    ctx->pc = 0x35236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_352370:
    // 0x352370: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_352374:
    if (ctx->pc == 0x352374u) {
        ctx->pc = 0x352374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352370u;
        // 0x352374: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352378u;
        goto label_352378;
    }
    ctx->pc = 0x352370u;
    {
        const bool branch_taken_0x352370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352370u;
        // 0x352374: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352370) {
            ctx->pc = 0x352464u;
            goto label_352464;
        }
    }
    ctx->pc = 0x352378u;
label_352378:
    // 0x352378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35237c:
    // 0x35237c: 0xc0e2dbc  jal         func_38B6F0
label_352380:
    if (ctx->pc == 0x352380u) {
        ctx->pc = 0x352380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35237Cu;
        // 0x352380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352384u;
        goto label_352384;
    }
    ctx->pc = 0x35237Cu;
    SET_GPR_U32(ctx, 31, 0x352384u);
    ctx->pc = 0x352380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35237Cu;
    // 0x352380: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x35237Cu, 0x352384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352384u;
label_352384:
    // 0x352384: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x352384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352388:
    // 0x352388: 0x1220009d  beqz        $s1, . + 4 + (0x9D << 2)
label_35238c:
    if (ctx->pc == 0x35238Cu) {
        ctx->pc = 0x35238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352388u;
        // 0x35238c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352390u;
        goto label_352390;
    }
    ctx->pc = 0x352388u;
    {
        const bool branch_taken_0x352388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352388u;
        // 0x35238c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352388) {
            ctx->pc = 0x352600u;
            goto label_352600;
        }
    }
    ctx->pc = 0x352390u;
label_352390:
    // 0x352390: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x352390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_352394:
    // 0x352394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x352394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352398:
    // 0x352398: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x352398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_35239c:
    // 0x35239c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35239cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3523a0:
    // 0x3523a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3523a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3523a4:
    // 0x3523a4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3523a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_3523a8:
    // 0x3523a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3523a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3523ac:
    // 0x3523ac: 0xc0e2d08  jal         func_38B420
label_3523b0:
    if (ctx->pc == 0x3523B0u) {
        ctx->pc = 0x3523B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523ACu;
        // 0x3523b0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3523B4u;
        goto label_3523b4;
    }
    ctx->pc = 0x3523ACu;
    SET_GPR_U32(ctx, 31, 0x3523B4u);
    ctx->pc = 0x3523B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3523ACu;
    // 0x3523b0: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x3523ACu, 0x3523B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523B4u;
label_3523b4:
    // 0x3523b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3523b8:
    if (ctx->pc == 0x3523B8u) {
        ctx->pc = 0x3523B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523B4u;
        // 0x3523b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3523BCu;
        goto label_3523bc;
    }
    ctx->pc = 0x3523B4u;
    {
        const bool branch_taken_0x3523b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3523B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523B4u;
        // 0x3523b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523b4) {
            ctx->pc = 0x3523C4u;
            goto label_3523c4;
        }
    }
    ctx->pc = 0x3523BCu;
label_3523bc:
    // 0x3523bc: 0x10000090  b           . + 4 + (0x90 << 2)
label_3523c0:
    if (ctx->pc == 0x3523C0u) {
        ctx->pc = 0x3523C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523BCu;
        // 0x3523c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3523C4u;
        goto label_3523c4;
    }
    ctx->pc = 0x3523BCu;
    {
        const bool branch_taken_0x3523bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3523C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523BCu;
        // 0x3523c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3523bc) {
            ctx->pc = 0x352600u;
            goto label_352600;
        }
    }
    ctx->pc = 0x3523C4u;
label_3523c4:
    // 0x3523c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3523c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3523c8:
    // 0x3523c8: 0xc0e2836  jal         func_38A0D8
label_3523cc:
    if (ctx->pc == 0x3523CCu) {
        ctx->pc = 0x3523CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523C8u;
        // 0x3523cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3523D0u;
        goto label_3523d0;
    }
    ctx->pc = 0x3523C8u;
    SET_GPR_U32(ctx, 31, 0x3523D0u);
    ctx->pc = 0x3523CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3523C8u;
    // 0x3523cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3523C8u, 0x3523D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523D0u;
label_3523d0:
    // 0x3523d0: 0xc0e3414  jal         func_38D050
label_3523d4:
    if (ctx->pc == 0x3523D4u) {
        ctx->pc = 0x3523D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523D0u;
        // 0x3523d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3523D8u;
        goto label_3523d8;
    }
    ctx->pc = 0x3523D0u;
    SET_GPR_U32(ctx, 31, 0x3523D8u);
    ctx->pc = 0x3523D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3523D0u;
    // 0x3523d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3523D0u, 0x3523D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523D8u;
label_3523d8:
    // 0x3523d8: 0xc0e3992  jal         func_38E648
label_3523dc:
    if (ctx->pc == 0x3523DCu) {
        ctx->pc = 0x3523E0u;
        goto label_3523e0;
    }
    ctx->pc = 0x3523D8u;
    SET_GPR_U32(ctx, 31, 0x3523E0u);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x3523D8u, 0x3523E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523E0u;
label_3523e0:
    // 0x3523e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3523e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3523e4:
    // 0x3523e4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3523e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3523e8:
    // 0x3523e8: 0xc0e3b14  jal         func_38EC50
label_3523ec:
    if (ctx->pc == 0x3523ECu) {
        ctx->pc = 0x3523ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523E8u;
        // 0x3523ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3523F0u;
        goto label_3523f0;
    }
    ctx->pc = 0x3523E8u;
    SET_GPR_U32(ctx, 31, 0x3523F0u);
    ctx->pc = 0x3523ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3523E8u;
    // 0x3523ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC50u, 0x3523E8u, 0x3523F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523F0u;
label_3523f0:
    // 0x3523f0: 0xc0e39c0  jal         func_38E700
label_3523f4:
    if (ctx->pc == 0x3523F4u) {
        ctx->pc = 0x3523F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3523F0u;
        // 0x3523f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3523F8u;
        goto label_3523f8;
    }
    ctx->pc = 0x3523F0u;
    SET_GPR_U32(ctx, 31, 0x3523F8u);
    ctx->pc = 0x3523F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3523F0u;
    // 0x3523f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x3523F0u, 0x3523F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523F8u;
label_3523f8:
    // 0x3523f8: 0x8f85a858  lw          $a1, -0x57A8($gp)
    ctx->pc = 0x3523f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_3523fc:
    // 0x3523fc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3523fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_352400:
    // 0x352400: 0x8f84a85c  lw          $a0, -0x57A4($gp)
    ctx->pc = 0x352400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
label_352404:
    // 0x352404: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x352404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_352408:
    // 0x352408: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x352408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_35240c:
    // 0x35240c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x35240cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_352410:
    // 0x352410: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x352410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_352414:
    // 0x352414: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x352414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_352418:
    // 0x352418: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x352418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35241c:
    // 0x35241c: 0x24c678e0  addiu       $a2, $a2, 0x78E0
    ctx->pc = 0x35241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30944));
label_352420:
    // 0x352420: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x352420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_352424:
    // 0x352424: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x352424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_352428:
    // 0x352428: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x352428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
label_35242c:
    // 0x35242c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x35242cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_352430:
    // 0x352430: 0xae44006c  sw          $a0, 0x6C($s2)
    ctx->pc = 0x352430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 4));
label_352434:
    // 0x352434: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x352434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_352438:
    // 0x352438: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x352438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_35243c:
    // 0x35243c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x35243cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_352440:
    // 0x352440: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x352440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_352444:
    // 0x352444: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x352444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_352448:
    // 0x352448: 0x1460006c  bnez        $v1, . + 4 + (0x6C << 2)
label_35244c:
    if (ctx->pc == 0x35244Cu) {
        ctx->pc = 0x35244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352448u;
        // 0x35244c: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352450u;
        goto label_352450;
    }
    ctx->pc = 0x352448u;
    {
        const bool branch_taken_0x352448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352448u;
        // 0x35244c: 0xac400038  sw          $zero, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352448) {
            ctx->pc = 0x3525FCu;
            goto label_3525fc;
        }
    }
    ctx->pc = 0x352450u;
label_352450:
    // 0x352450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352454:
    // 0x352454: 0xc0d4524  jal         func_351490
label_352458:
    if (ctx->pc == 0x352458u) {
        ctx->pc = 0x352458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352454u;
        // 0x352458: 0x26850190  addiu       $a1, $s4, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35245Cu;
        goto label_35245c;
    }
    ctx->pc = 0x352454u;
    SET_GPR_U32(ctx, 31, 0x35245Cu);
    ctx->pc = 0x352458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352454u;
    // 0x352458: 0x26850190  addiu       $a1, $s4, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351490u, 0x352454u, 0x35245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35245Cu;
label_35245c:
    // 0x35245c: 0x10000068  b           . + 4 + (0x68 << 2)
label_352460:
    if (ctx->pc == 0x352460u) {
        ctx->pc = 0x352460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35245Cu;
        // 0x352460: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352464u;
        goto label_352464;
    }
    ctx->pc = 0x35245Cu;
    {
        const bool branch_taken_0x35245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35245Cu;
        // 0x352460: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35245c) {
            ctx->pc = 0x352600u;
            goto label_352600;
        }
    }
    ctx->pc = 0x352464u;
label_352464:
    // 0x352464: 0x10e00038  beqz        $a3, . + 4 + (0x38 << 2)
label_352468:
    if (ctx->pc == 0x352468u) {
        ctx->pc = 0x352468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352464u;
        // 0x352468: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35246Cu;
        goto label_35246c;
    }
    ctx->pc = 0x352464u;
    {
        const bool branch_taken_0x352464 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x352468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352464u;
        // 0x352468: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352464) {
            ctx->pc = 0x352548u;
            goto label_352548;
        }
    }
    ctx->pc = 0x35246Cu;
label_35246c:
    // 0x35246c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35246cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_352470:
    // 0x352470: 0xc0d561a  jal         func_355868
label_352474:
    if (ctx->pc == 0x352474u) {
        ctx->pc = 0x352474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352470u;
        // 0x352474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352478u;
        goto label_352478;
    }
    ctx->pc = 0x352470u;
    SET_GPR_U32(ctx, 31, 0x352478u);
    ctx->pc = 0x352474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352470u;
    // 0x352474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355868u, 0x352470u, 0x352478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352478u;
label_352478:
    // 0x352478: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x352478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35247c:
    // 0x35247c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352480:
    // 0x352480: 0x16a2005f  bne         $s5, $v0, . + 4 + (0x5F << 2)
label_352484:
    if (ctx->pc == 0x352484u) {
        ctx->pc = 0x352484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352480u;
        // 0x352484: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352488u;
        goto label_352488;
    }
    ctx->pc = 0x352480u;
    {
        const bool branch_taken_0x352480 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x352484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352480u;
        // 0x352484: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352480) {
            ctx->pc = 0x352600u;
            goto label_352600;
        }
    }
    ctx->pc = 0x352488u;
label_352488:
    // 0x352488: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x352488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_35248c:
    // 0x35248c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x35248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_352490:
    // 0x352490: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x352490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_352494:
    // 0x352494: 0x8e650058  lw          $a1, 0x58($s3)
    ctx->pc = 0x352494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_352498:
    // 0x352498: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x352498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_35249c:
    // 0x35249c: 0x24634c48  addiu       $v1, $v1, 0x4C48
    ctx->pc = 0x35249cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19528));
label_3524a0:
    // 0x3524a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3524a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3524a4:
    // 0x3524a4: 0x24845b28  addiu       $a0, $a0, 0x5B28
    ctx->pc = 0x3524a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23336));
label_3524a8:
    // 0x3524a8: 0x30a50004  andi        $a1, $a1, 0x4
    ctx->pc = 0x3524a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_3524ac:
    // 0x3524ac: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x3524acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
label_3524b0:
    // 0x3524b0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_3524b4:
    if (ctx->pc == 0x3524B4u) {
        ctx->pc = 0x3524B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524B0u;
        // 0x3524b4: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3524B8u;
        goto label_3524b8;
    }
    ctx->pc = 0x3524B0u;
    {
        const bool branch_taken_0x3524b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3524B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524B0u;
        // 0x3524b4: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3524b0) {
            ctx->pc = 0x3524C4u;
            goto label_3524c4;
        }
    }
    ctx->pc = 0x3524B8u;
label_3524b8:
    // 0x3524b8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x3524b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_3524bc:
    // 0x3524bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3524c0:
    if (ctx->pc == 0x3524C0u) {
        ctx->pc = 0x3524C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524BCu;
        // 0x3524c0: 0x24426308  addiu       $v0, $v0, 0x6308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3524C4u;
        goto label_3524c4;
    }
    ctx->pc = 0x3524BCu;
    {
        const bool branch_taken_0x3524bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3524C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524BCu;
        // 0x3524c0: 0x24426308  addiu       $v0, $v0, 0x6308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3524bc) {
            ctx->pc = 0x3524CCu;
            goto label_3524cc;
        }
    }
    ctx->pc = 0x3524C4u;
label_3524c4:
    // 0x3524c4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x3524c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_3524c8:
    // 0x3524c8: 0x244261e8  addiu       $v0, $v0, 0x61E8
    ctx->pc = 0x3524c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25064));
label_3524cc:
    // 0x3524cc: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x3524ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
label_3524d0:
    // 0x3524d0: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x3524d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3524d4:
    // 0x3524d4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x3524d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_3524d8:
    // 0x3524d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3524dc:
    if (ctx->pc == 0x3524DCu) {
        ctx->pc = 0x3524DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524D8u;
        // 0x3524dc: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3524E0u;
        goto label_3524e0;
    }
    ctx->pc = 0x3524D8u;
    {
        const bool branch_taken_0x3524d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3524DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524D8u;
        // 0x3524dc: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3524d8) {
            ctx->pc = 0x3524ECu;
            goto label_3524ec;
        }
    }
    ctx->pc = 0x3524E0u;
label_3524e0:
    // 0x3524e0: 0x24426048  addiu       $v0, $v0, 0x6048
    ctx->pc = 0x3524e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24648));
label_3524e4:
    // 0x3524e4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3524e8:
    if (ctx->pc == 0x3524E8u) {
        ctx->pc = 0x3524E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524E4u;
        // 0x3524e8: 0xacc2002c  sw          $v0, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3524ECu;
        goto label_3524ec;
    }
    ctx->pc = 0x3524E4u;
    {
        const bool branch_taken_0x3524e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3524E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524E4u;
        // 0x3524e8: 0xacc2002c  sw          $v0, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3524e4) {
            ctx->pc = 0x35250Cu;
            goto label_35250c;
        }
    }
    ctx->pc = 0x3524ECu;
label_3524ec:
    // 0x3524ec: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3524ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_3524f0:
    // 0x3524f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3524f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3524f4:
    // 0x3524f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3524f8:
    if (ctx->pc == 0x3524F8u) {
        ctx->pc = 0x3524F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524F4u;
        // 0x3524f8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3524FCu;
        goto label_3524fc;
    }
    ctx->pc = 0x3524F4u;
    {
        const bool branch_taken_0x3524f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3524F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3524F4u;
        // 0x3524f8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3524f4) {
            ctx->pc = 0x352508u;
            goto label_352508;
        }
    }
    ctx->pc = 0x3524FCu;
label_3524fc:
    // 0x3524fc: 0x24425ea8  addiu       $v0, $v0, 0x5EA8
    ctx->pc = 0x3524fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24232));
label_352500:
    // 0x352500: 0x10000002  b           . + 4 + (0x2 << 2)
label_352504:
    if (ctx->pc == 0x352504u) {
        ctx->pc = 0x352504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352500u;
        // 0x352504: 0xacc2002c  sw          $v0, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352508u;
        goto label_352508;
    }
    ctx->pc = 0x352500u;
    {
        const bool branch_taken_0x352500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352500u;
        // 0x352504: 0xacc2002c  sw          $v0, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352500) {
            ctx->pc = 0x35250Cu;
            goto label_35250c;
        }
    }
    ctx->pc = 0x352508u;
label_352508:
    // 0x352508: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x352508u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
label_35250c:
    // 0x35250c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x35250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_352510:
    // 0x352510: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x352510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_352514:
    // 0x352514: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_352518:
    if (ctx->pc == 0x352518u) {
        ctx->pc = 0x352518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352514u;
        // 0x352518: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35251Cu;
        goto label_35251c;
    }
    ctx->pc = 0x352514u;
    {
        const bool branch_taken_0x352514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352514u;
        // 0x352518: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352514) {
            ctx->pc = 0x352524u;
            goto label_352524;
        }
    }
    ctx->pc = 0x35251Cu;
label_35251c:
    // 0x35251c: 0x10000003  b           . + 4 + (0x3 << 2)
label_352520:
    if (ctx->pc == 0x352520u) {
        ctx->pc = 0x352520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35251Cu;
        // 0x352520: 0x24425d80  addiu       $v0, $v0, 0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352524u;
        goto label_352524;
    }
    ctx->pc = 0x35251Cu;
    {
        const bool branch_taken_0x35251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35251Cu;
        // 0x352520: 0x24425d80  addiu       $v0, $v0, 0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35251c) {
            ctx->pc = 0x35252Cu;
            goto label_35252c;
        }
    }
    ctx->pc = 0x352524u;
label_352524:
    // 0x352524: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x352524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_352528:
    // 0x352528: 0x24425c78  addiu       $v0, $v0, 0x5C78
    ctx->pc = 0x352528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23672));
label_35252c:
    // 0x35252c: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x35252cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
label_352530:
    // 0x352530: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x352530u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
label_352534:
    // 0x352534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352538:
    // 0x352538: 0xc0d4524  jal         func_351490
label_35253c:
    if (ctx->pc == 0x35253Cu) {
        ctx->pc = 0x35253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352538u;
        // 0x35253c: 0x26850190  addiu       $a1, $s4, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352540u;
        goto label_352540;
    }
    ctx->pc = 0x352538u;
    SET_GPR_U32(ctx, 31, 0x352540u);
    ctx->pc = 0x35253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352538u;
    // 0x35253c: 0x26850190  addiu       $a1, $s4, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351490u, 0x352538u, 0x352540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352540u;
label_352540:
    // 0x352540: 0x1000002f  b           . + 4 + (0x2F << 2)
label_352544:
    if (ctx->pc == 0x352544u) {
        ctx->pc = 0x352544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352540u;
        // 0x352544: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352548u;
        goto label_352548;
    }
    ctx->pc = 0x352540u;
    {
        const bool branch_taken_0x352540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352540u;
        // 0x352544: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352540) {
            ctx->pc = 0x352600u;
            goto label_352600;
        }
    }
    ctx->pc = 0x352548u;
label_352548:
    // 0x352548: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_35254c:
    if (ctx->pc == 0x35254Cu) {
        ctx->pc = 0x35254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352548u;
        // 0x35254c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352550u;
        goto label_352550;
    }
    ctx->pc = 0x352548u;
    {
        const bool branch_taken_0x352548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352548u;
        // 0x35254c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352548) {
            ctx->pc = 0x3525A4u;
            goto label_3525a4;
        }
    }
    ctx->pc = 0x352550u;
label_352550:
    // 0x352550: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x352550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_352554:
    // 0x352554: 0xc0d5d60  jal         func_357580
label_352558:
    if (ctx->pc == 0x352558u) {
        ctx->pc = 0x352558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352554u;
        // 0x352558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35255Cu;
        goto label_35255c;
    }
    ctx->pc = 0x352554u;
    SET_GPR_U32(ctx, 31, 0x35255Cu);
    ctx->pc = 0x352558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352554u;
    // 0x352558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357580u, 0x352554u, 0x35255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35255Cu;
label_35255c:
    // 0x35255c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35255cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_352560:
    // 0x352560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x352560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_352564:
    // 0x352564: 0x16a20026  bne         $s5, $v0, . + 4 + (0x26 << 2)
label_352568:
    if (ctx->pc == 0x352568u) {
        ctx->pc = 0x352568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352564u;
        // 0x352568: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35256Cu;
        goto label_35256c;
    }
    ctx->pc = 0x352564u;
    {
        const bool branch_taken_0x352564 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x352568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352564u;
        // 0x352568: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352564) {
            ctx->pc = 0x352600u;
            goto label_352600;
        }
    }
    ctx->pc = 0x35256Cu;
label_35256c:
    // 0x35256c: 0xc0d654e  jal         func_359538
label_352570:
    if (ctx->pc == 0x352570u) {
        ctx->pc = 0x352570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35256Cu;
        // 0x352570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352574u;
        goto label_352574;
    }
    ctx->pc = 0x35256Cu;
    SET_GPR_U32(ctx, 31, 0x352574u);
    ctx->pc = 0x352570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35256Cu;
    // 0x352570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359538u, 0x35256Cu, 0x352574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352574u;
label_352574:
    // 0x352574: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x352574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_352578:
    // 0x352578: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x352578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_35257c:
    // 0x35257c: 0x24c665d8  addiu       $a2, $a2, 0x65D8
    ctx->pc = 0x35257cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26072));
label_352580:
    // 0x352580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x352580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_352584:
    // 0x352584: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x352584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_352588:
    // 0x352588: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x352588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_35258c:
    // 0x35258c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_352590:
    // 0x352590: 0xac660024  sw          $a2, 0x24($v1)
    ctx->pc = 0x352590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 6));
label_352594:
    // 0x352594: 0xc0d4524  jal         func_351490
label_352598:
    if (ctx->pc == 0x352598u) {
        ctx->pc = 0x352598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352594u;
        // 0x352598: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35259Cu;
        goto label_35259c;
    }
    ctx->pc = 0x352594u;
    SET_GPR_U32(ctx, 31, 0x35259Cu);
    ctx->pc = 0x352598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352594u;
    // 0x352598: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351490u, 0x352594u, 0x35259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35259Cu;
label_35259c:
    // 0x35259c: 0x10000018  b           . + 4 + (0x18 << 2)
label_3525a0:
    if (ctx->pc == 0x3525A0u) {
        ctx->pc = 0x3525A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35259Cu;
        // 0x3525a0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3525A4u;
        goto label_3525a4;
    }
    ctx->pc = 0x35259Cu;
    {
        const bool branch_taken_0x35259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35259Cu;
        // 0x3525a0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35259c) {
            ctx->pc = 0x352600u;
            goto label_352600;
        }
    }
    ctx->pc = 0x3525A4u;
label_3525a4:
    // 0x3525a4: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x3525a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_3525a8:
    // 0x3525a8: 0xc0d4524  jal         func_351490
label_3525ac:
    if (ctx->pc == 0x3525ACu) {
        ctx->pc = 0x3525ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525A8u;
        // 0x3525ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3525B0u;
        goto label_3525b0;
    }
    ctx->pc = 0x3525A8u;
    SET_GPR_U32(ctx, 31, 0x3525B0u);
    ctx->pc = 0x3525ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3525A8u;
    // 0x3525ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351490u, 0x3525A8u, 0x3525B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3525B0u;
label_3525b0:
    // 0x3525b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3525b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3525b4:
    // 0x3525b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3525b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3525b8:
    // 0x3525b8: 0xc0db3f4  jal         func_36CFD0
label_3525bc:
    if (ctx->pc == 0x3525BCu) {
        ctx->pc = 0x3525BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525B8u;
        // 0x3525bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3525C0u;
        goto label_3525c0;
    }
    ctx->pc = 0x3525B8u;
    SET_GPR_U32(ctx, 31, 0x3525C0u);
    ctx->pc = 0x3525BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3525B8u;
    // 0x3525bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CFD0u, 0x3525B8u, 0x3525C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3525C0u;
label_3525c0:
    // 0x3525c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3525c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3525c4:
    // 0x3525c4: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_3525c8:
    if (ctx->pc == 0x3525C8u) {
        ctx->pc = 0x3525C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525C4u;
        // 0x3525c8: 0x8f84a85c  lw          $a0, -0x57A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3525CCu;
        goto label_3525cc;
    }
    ctx->pc = 0x3525C4u;
    {
        const bool branch_taken_0x3525c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3525C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3525C4u;
        // 0x3525c8: 0x8f84a85c  lw          $a0, -0x57A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3525c4) {
            ctx->pc = 0x3525FCu;
            goto label_3525fc;
        }
    }
    ctx->pc = 0x3525CCu;
label_3525cc:
    // 0x3525cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3525ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3525d0:
    // 0x3525d0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3525d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3525d4:
    // 0x3525d4: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x3525d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_3525d8:
    // 0x3525d8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3525d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3525dc:
    // 0x3525dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3525dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_3525e0:
    // 0x3525e0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3525e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3525e4:
    // 0x3525e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3525e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3525e8:
    // 0x3525e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3525e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3525ec:
    // 0x3525ec: 0x24a505e0  addiu       $a1, $a1, 0x5E0
    ctx->pc = 0x3525ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1504));
label_3525f0:
    // 0x3525f0: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x3525f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_3525f4:
    // 0x3525f4: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x3525f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
label_3525f8:
    // 0x3525f8: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x3525f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
label_3525fc:
    // 0x3525fc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3525fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_352600:
    // 0x352600: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x352600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_352604:
    // 0x352604: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x352604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_352608:
    // 0x352608: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x352608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35260c:
    // 0x35260c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35260cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_352610:
    // 0x352610: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x352610u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_352614:
    // 0x352614: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x352614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_352618:
    // 0x352618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x352618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35261c:
    // 0x35261c: 0x3e00008  jr          $ra
label_352620:
    if (ctx->pc == 0x352620u) {
        ctx->pc = 0x352620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35261Cu;
        // 0x352620: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352624u;
        goto label_352624;
    }
    ctx->pc = 0x35261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35261Cu;
        // 0x352620: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35261Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352624u;
label_352624:
    // 0x352624: 0x0  nop
    ctx->pc = 0x352624u;
    // NOP
    ctx->pc = 0x352628u;
}
