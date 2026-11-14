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

// Function: sub_00430810
// Address: 0x430810 - 0x4316a0
void sub_00430810_0x430810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430810_0x430810");
#endif

    switch (ctx->pc) {
        case 0x430810u: goto label_430810;
        case 0x430814u: goto label_430814;
        case 0x430818u: goto label_430818;
        case 0x43081cu: goto label_43081c;
        case 0x430820u: goto label_430820;
        case 0x430824u: goto label_430824;
        case 0x430828u: goto label_430828;
        case 0x43082cu: goto label_43082c;
        case 0x430830u: goto label_430830;
        case 0x430834u: goto label_430834;
        case 0x430838u: goto label_430838;
        case 0x43083cu: goto label_43083c;
        case 0x430840u: goto label_430840;
        case 0x430844u: goto label_430844;
        case 0x430848u: goto label_430848;
        case 0x43084cu: goto label_43084c;
        case 0x430850u: goto label_430850;
        case 0x430854u: goto label_430854;
        case 0x430858u: goto label_430858;
        case 0x43085cu: goto label_43085c;
        case 0x430860u: goto label_430860;
        case 0x430864u: goto label_430864;
        case 0x430868u: goto label_430868;
        case 0x43086cu: goto label_43086c;
        case 0x430870u: goto label_430870;
        case 0x430874u: goto label_430874;
        case 0x430878u: goto label_430878;
        case 0x43087cu: goto label_43087c;
        case 0x430880u: goto label_430880;
        case 0x430884u: goto label_430884;
        case 0x430888u: goto label_430888;
        case 0x43088cu: goto label_43088c;
        case 0x430890u: goto label_430890;
        case 0x430894u: goto label_430894;
        case 0x430898u: goto label_430898;
        case 0x43089cu: goto label_43089c;
        case 0x4308a0u: goto label_4308a0;
        case 0x4308a4u: goto label_4308a4;
        case 0x4308a8u: goto label_4308a8;
        case 0x4308acu: goto label_4308ac;
        case 0x4308b0u: goto label_4308b0;
        case 0x4308b4u: goto label_4308b4;
        case 0x4308b8u: goto label_4308b8;
        case 0x4308bcu: goto label_4308bc;
        case 0x4308c0u: goto label_4308c0;
        case 0x4308c4u: goto label_4308c4;
        case 0x4308c8u: goto label_4308c8;
        case 0x4308ccu: goto label_4308cc;
        case 0x4308d0u: goto label_4308d0;
        case 0x4308d4u: goto label_4308d4;
        case 0x4308d8u: goto label_4308d8;
        case 0x4308dcu: goto label_4308dc;
        case 0x4308e0u: goto label_4308e0;
        case 0x4308e4u: goto label_4308e4;
        case 0x4308e8u: goto label_4308e8;
        case 0x4308ecu: goto label_4308ec;
        case 0x4308f0u: goto label_4308f0;
        case 0x4308f4u: goto label_4308f4;
        case 0x4308f8u: goto label_4308f8;
        case 0x4308fcu: goto label_4308fc;
        case 0x430900u: goto label_430900;
        case 0x430904u: goto label_430904;
        case 0x430908u: goto label_430908;
        case 0x43090cu: goto label_43090c;
        case 0x430910u: goto label_430910;
        case 0x430914u: goto label_430914;
        case 0x430918u: goto label_430918;
        case 0x43091cu: goto label_43091c;
        case 0x430920u: goto label_430920;
        case 0x430924u: goto label_430924;
        case 0x430928u: goto label_430928;
        case 0x43092cu: goto label_43092c;
        case 0x430930u: goto label_430930;
        case 0x430934u: goto label_430934;
        case 0x430938u: goto label_430938;
        case 0x43093cu: goto label_43093c;
        case 0x430940u: goto label_430940;
        case 0x430944u: goto label_430944;
        case 0x430948u: goto label_430948;
        case 0x43094cu: goto label_43094c;
        case 0x430950u: goto label_430950;
        case 0x430954u: goto label_430954;
        case 0x430958u: goto label_430958;
        case 0x43095cu: goto label_43095c;
        case 0x430960u: goto label_430960;
        case 0x430964u: goto label_430964;
        case 0x430968u: goto label_430968;
        case 0x43096cu: goto label_43096c;
        case 0x430970u: goto label_430970;
        case 0x430974u: goto label_430974;
        case 0x430978u: goto label_430978;
        case 0x43097cu: goto label_43097c;
        case 0x430980u: goto label_430980;
        case 0x430984u: goto label_430984;
        case 0x430988u: goto label_430988;
        case 0x43098cu: goto label_43098c;
        case 0x430990u: goto label_430990;
        case 0x430994u: goto label_430994;
        case 0x430998u: goto label_430998;
        case 0x43099cu: goto label_43099c;
        case 0x4309a0u: goto label_4309a0;
        case 0x4309a4u: goto label_4309a4;
        case 0x4309a8u: goto label_4309a8;
        case 0x4309acu: goto label_4309ac;
        case 0x4309b0u: goto label_4309b0;
        case 0x4309b4u: goto label_4309b4;
        case 0x4309b8u: goto label_4309b8;
        case 0x4309bcu: goto label_4309bc;
        case 0x4309c0u: goto label_4309c0;
        case 0x4309c4u: goto label_4309c4;
        case 0x4309c8u: goto label_4309c8;
        case 0x4309ccu: goto label_4309cc;
        case 0x4309d0u: goto label_4309d0;
        case 0x4309d4u: goto label_4309d4;
        case 0x4309d8u: goto label_4309d8;
        case 0x4309dcu: goto label_4309dc;
        case 0x4309e0u: goto label_4309e0;
        case 0x4309e4u: goto label_4309e4;
        case 0x4309e8u: goto label_4309e8;
        case 0x4309ecu: goto label_4309ec;
        case 0x4309f0u: goto label_4309f0;
        case 0x4309f4u: goto label_4309f4;
        case 0x4309f8u: goto label_4309f8;
        case 0x4309fcu: goto label_4309fc;
        case 0x430a00u: goto label_430a00;
        case 0x430a04u: goto label_430a04;
        case 0x430a08u: goto label_430a08;
        case 0x430a0cu: goto label_430a0c;
        case 0x430a10u: goto label_430a10;
        case 0x430a14u: goto label_430a14;
        case 0x430a18u: goto label_430a18;
        case 0x430a1cu: goto label_430a1c;
        case 0x430a20u: goto label_430a20;
        case 0x430a24u: goto label_430a24;
        case 0x430a28u: goto label_430a28;
        case 0x430a2cu: goto label_430a2c;
        case 0x430a30u: goto label_430a30;
        case 0x430a34u: goto label_430a34;
        case 0x430a38u: goto label_430a38;
        case 0x430a3cu: goto label_430a3c;
        case 0x430a40u: goto label_430a40;
        case 0x430a44u: goto label_430a44;
        case 0x430a48u: goto label_430a48;
        case 0x430a4cu: goto label_430a4c;
        case 0x430a50u: goto label_430a50;
        case 0x430a54u: goto label_430a54;
        case 0x430a58u: goto label_430a58;
        case 0x430a5cu: goto label_430a5c;
        case 0x430a60u: goto label_430a60;
        case 0x430a64u: goto label_430a64;
        case 0x430a68u: goto label_430a68;
        case 0x430a6cu: goto label_430a6c;
        case 0x430a70u: goto label_430a70;
        case 0x430a74u: goto label_430a74;
        case 0x430a78u: goto label_430a78;
        case 0x430a7cu: goto label_430a7c;
        case 0x430a80u: goto label_430a80;
        case 0x430a84u: goto label_430a84;
        case 0x430a88u: goto label_430a88;
        case 0x430a8cu: goto label_430a8c;
        case 0x430a90u: goto label_430a90;
        case 0x430a94u: goto label_430a94;
        case 0x430a98u: goto label_430a98;
        case 0x430a9cu: goto label_430a9c;
        case 0x430aa0u: goto label_430aa0;
        case 0x430aa4u: goto label_430aa4;
        case 0x430aa8u: goto label_430aa8;
        case 0x430aacu: goto label_430aac;
        case 0x430ab0u: goto label_430ab0;
        case 0x430ab4u: goto label_430ab4;
        case 0x430ab8u: goto label_430ab8;
        case 0x430abcu: goto label_430abc;
        case 0x430ac0u: goto label_430ac0;
        case 0x430ac4u: goto label_430ac4;
        case 0x430ac8u: goto label_430ac8;
        case 0x430accu: goto label_430acc;
        case 0x430ad0u: goto label_430ad0;
        case 0x430ad4u: goto label_430ad4;
        case 0x430ad8u: goto label_430ad8;
        case 0x430adcu: goto label_430adc;
        case 0x430ae0u: goto label_430ae0;
        case 0x430ae4u: goto label_430ae4;
        case 0x430ae8u: goto label_430ae8;
        case 0x430aecu: goto label_430aec;
        case 0x430af0u: goto label_430af0;
        case 0x430af4u: goto label_430af4;
        case 0x430af8u: goto label_430af8;
        case 0x430afcu: goto label_430afc;
        case 0x430b00u: goto label_430b00;
        case 0x430b04u: goto label_430b04;
        case 0x430b08u: goto label_430b08;
        case 0x430b0cu: goto label_430b0c;
        case 0x430b10u: goto label_430b10;
        case 0x430b14u: goto label_430b14;
        case 0x430b18u: goto label_430b18;
        case 0x430b1cu: goto label_430b1c;
        case 0x430b20u: goto label_430b20;
        case 0x430b24u: goto label_430b24;
        case 0x430b28u: goto label_430b28;
        case 0x430b2cu: goto label_430b2c;
        case 0x430b30u: goto label_430b30;
        case 0x430b34u: goto label_430b34;
        case 0x430b38u: goto label_430b38;
        case 0x430b3cu: goto label_430b3c;
        case 0x430b40u: goto label_430b40;
        case 0x430b44u: goto label_430b44;
        case 0x430b48u: goto label_430b48;
        case 0x430b4cu: goto label_430b4c;
        case 0x430b50u: goto label_430b50;
        case 0x430b54u: goto label_430b54;
        case 0x430b58u: goto label_430b58;
        case 0x430b5cu: goto label_430b5c;
        case 0x430b60u: goto label_430b60;
        case 0x430b64u: goto label_430b64;
        case 0x430b68u: goto label_430b68;
        case 0x430b6cu: goto label_430b6c;
        case 0x430b70u: goto label_430b70;
        case 0x430b74u: goto label_430b74;
        case 0x430b78u: goto label_430b78;
        case 0x430b7cu: goto label_430b7c;
        case 0x430b80u: goto label_430b80;
        case 0x430b84u: goto label_430b84;
        case 0x430b88u: goto label_430b88;
        case 0x430b8cu: goto label_430b8c;
        case 0x430b90u: goto label_430b90;
        case 0x430b94u: goto label_430b94;
        case 0x430b98u: goto label_430b98;
        case 0x430b9cu: goto label_430b9c;
        case 0x430ba0u: goto label_430ba0;
        case 0x430ba4u: goto label_430ba4;
        case 0x430ba8u: goto label_430ba8;
        case 0x430bacu: goto label_430bac;
        case 0x430bb0u: goto label_430bb0;
        case 0x430bb4u: goto label_430bb4;
        case 0x430bb8u: goto label_430bb8;
        case 0x430bbcu: goto label_430bbc;
        case 0x430bc0u: goto label_430bc0;
        case 0x430bc4u: goto label_430bc4;
        case 0x430bc8u: goto label_430bc8;
        case 0x430bccu: goto label_430bcc;
        case 0x430bd0u: goto label_430bd0;
        case 0x430bd4u: goto label_430bd4;
        case 0x430bd8u: goto label_430bd8;
        case 0x430bdcu: goto label_430bdc;
        case 0x430be0u: goto label_430be0;
        case 0x430be4u: goto label_430be4;
        case 0x430be8u: goto label_430be8;
        case 0x430becu: goto label_430bec;
        case 0x430bf0u: goto label_430bf0;
        case 0x430bf4u: goto label_430bf4;
        case 0x430bf8u: goto label_430bf8;
        case 0x430bfcu: goto label_430bfc;
        case 0x430c00u: goto label_430c00;
        case 0x430c04u: goto label_430c04;
        case 0x430c08u: goto label_430c08;
        case 0x430c0cu: goto label_430c0c;
        case 0x430c10u: goto label_430c10;
        case 0x430c14u: goto label_430c14;
        case 0x430c18u: goto label_430c18;
        case 0x430c1cu: goto label_430c1c;
        case 0x430c20u: goto label_430c20;
        case 0x430c24u: goto label_430c24;
        case 0x430c28u: goto label_430c28;
        case 0x430c2cu: goto label_430c2c;
        case 0x430c30u: goto label_430c30;
        case 0x430c34u: goto label_430c34;
        case 0x430c38u: goto label_430c38;
        case 0x430c3cu: goto label_430c3c;
        case 0x430c40u: goto label_430c40;
        case 0x430c44u: goto label_430c44;
        case 0x430c48u: goto label_430c48;
        case 0x430c4cu: goto label_430c4c;
        case 0x430c50u: goto label_430c50;
        case 0x430c54u: goto label_430c54;
        case 0x430c58u: goto label_430c58;
        case 0x430c5cu: goto label_430c5c;
        case 0x430c60u: goto label_430c60;
        case 0x430c64u: goto label_430c64;
        case 0x430c68u: goto label_430c68;
        case 0x430c6cu: goto label_430c6c;
        case 0x430c70u: goto label_430c70;
        case 0x430c74u: goto label_430c74;
        case 0x430c78u: goto label_430c78;
        case 0x430c7cu: goto label_430c7c;
        case 0x430c80u: goto label_430c80;
        case 0x430c84u: goto label_430c84;
        case 0x430c88u: goto label_430c88;
        case 0x430c8cu: goto label_430c8c;
        case 0x430c90u: goto label_430c90;
        case 0x430c94u: goto label_430c94;
        case 0x430c98u: goto label_430c98;
        case 0x430c9cu: goto label_430c9c;
        case 0x430ca0u: goto label_430ca0;
        case 0x430ca4u: goto label_430ca4;
        case 0x430ca8u: goto label_430ca8;
        case 0x430cacu: goto label_430cac;
        case 0x430cb0u: goto label_430cb0;
        case 0x430cb4u: goto label_430cb4;
        case 0x430cb8u: goto label_430cb8;
        case 0x430cbcu: goto label_430cbc;
        case 0x430cc0u: goto label_430cc0;
        case 0x430cc4u: goto label_430cc4;
        case 0x430cc8u: goto label_430cc8;
        case 0x430cccu: goto label_430ccc;
        case 0x430cd0u: goto label_430cd0;
        case 0x430cd4u: goto label_430cd4;
        case 0x430cd8u: goto label_430cd8;
        case 0x430cdcu: goto label_430cdc;
        case 0x430ce0u: goto label_430ce0;
        case 0x430ce4u: goto label_430ce4;
        case 0x430ce8u: goto label_430ce8;
        case 0x430cecu: goto label_430cec;
        case 0x430cf0u: goto label_430cf0;
        case 0x430cf4u: goto label_430cf4;
        case 0x430cf8u: goto label_430cf8;
        case 0x430cfcu: goto label_430cfc;
        case 0x430d00u: goto label_430d00;
        case 0x430d04u: goto label_430d04;
        case 0x430d08u: goto label_430d08;
        case 0x430d0cu: goto label_430d0c;
        case 0x430d10u: goto label_430d10;
        case 0x430d14u: goto label_430d14;
        case 0x430d18u: goto label_430d18;
        case 0x430d1cu: goto label_430d1c;
        case 0x430d20u: goto label_430d20;
        case 0x430d24u: goto label_430d24;
        case 0x430d28u: goto label_430d28;
        case 0x430d2cu: goto label_430d2c;
        case 0x430d30u: goto label_430d30;
        case 0x430d34u: goto label_430d34;
        case 0x430d38u: goto label_430d38;
        case 0x430d3cu: goto label_430d3c;
        case 0x430d40u: goto label_430d40;
        case 0x430d44u: goto label_430d44;
        case 0x430d48u: goto label_430d48;
        case 0x430d4cu: goto label_430d4c;
        case 0x430d50u: goto label_430d50;
        case 0x430d54u: goto label_430d54;
        case 0x430d58u: goto label_430d58;
        case 0x430d5cu: goto label_430d5c;
        case 0x430d60u: goto label_430d60;
        case 0x430d64u: goto label_430d64;
        case 0x430d68u: goto label_430d68;
        case 0x430d6cu: goto label_430d6c;
        case 0x430d70u: goto label_430d70;
        case 0x430d74u: goto label_430d74;
        case 0x430d78u: goto label_430d78;
        case 0x430d7cu: goto label_430d7c;
        case 0x430d80u: goto label_430d80;
        case 0x430d84u: goto label_430d84;
        case 0x430d88u: goto label_430d88;
        case 0x430d8cu: goto label_430d8c;
        case 0x430d90u: goto label_430d90;
        case 0x430d94u: goto label_430d94;
        case 0x430d98u: goto label_430d98;
        case 0x430d9cu: goto label_430d9c;
        case 0x430da0u: goto label_430da0;
        case 0x430da4u: goto label_430da4;
        case 0x430da8u: goto label_430da8;
        case 0x430dacu: goto label_430dac;
        case 0x430db0u: goto label_430db0;
        case 0x430db4u: goto label_430db4;
        case 0x430db8u: goto label_430db8;
        case 0x430dbcu: goto label_430dbc;
        case 0x430dc0u: goto label_430dc0;
        case 0x430dc4u: goto label_430dc4;
        case 0x430dc8u: goto label_430dc8;
        case 0x430dccu: goto label_430dcc;
        case 0x430dd0u: goto label_430dd0;
        case 0x430dd4u: goto label_430dd4;
        case 0x430dd8u: goto label_430dd8;
        case 0x430ddcu: goto label_430ddc;
        case 0x430de0u: goto label_430de0;
        case 0x430de4u: goto label_430de4;
        case 0x430de8u: goto label_430de8;
        case 0x430decu: goto label_430dec;
        case 0x430df0u: goto label_430df0;
        case 0x430df4u: goto label_430df4;
        case 0x430df8u: goto label_430df8;
        case 0x430dfcu: goto label_430dfc;
        case 0x430e00u: goto label_430e00;
        case 0x430e04u: goto label_430e04;
        case 0x430e08u: goto label_430e08;
        case 0x430e0cu: goto label_430e0c;
        case 0x430e10u: goto label_430e10;
        case 0x430e14u: goto label_430e14;
        case 0x430e18u: goto label_430e18;
        case 0x430e1cu: goto label_430e1c;
        case 0x430e20u: goto label_430e20;
        case 0x430e24u: goto label_430e24;
        case 0x430e28u: goto label_430e28;
        case 0x430e2cu: goto label_430e2c;
        case 0x430e30u: goto label_430e30;
        case 0x430e34u: goto label_430e34;
        case 0x430e38u: goto label_430e38;
        case 0x430e3cu: goto label_430e3c;
        case 0x430e40u: goto label_430e40;
        case 0x430e44u: goto label_430e44;
        case 0x430e48u: goto label_430e48;
        case 0x430e4cu: goto label_430e4c;
        case 0x430e50u: goto label_430e50;
        case 0x430e54u: goto label_430e54;
        case 0x430e58u: goto label_430e58;
        case 0x430e5cu: goto label_430e5c;
        case 0x430e60u: goto label_430e60;
        case 0x430e64u: goto label_430e64;
        case 0x430e68u: goto label_430e68;
        case 0x430e6cu: goto label_430e6c;
        case 0x430e70u: goto label_430e70;
        case 0x430e74u: goto label_430e74;
        case 0x430e78u: goto label_430e78;
        case 0x430e7cu: goto label_430e7c;
        case 0x430e80u: goto label_430e80;
        case 0x430e84u: goto label_430e84;
        case 0x430e88u: goto label_430e88;
        case 0x430e8cu: goto label_430e8c;
        case 0x430e90u: goto label_430e90;
        case 0x430e94u: goto label_430e94;
        case 0x430e98u: goto label_430e98;
        case 0x430e9cu: goto label_430e9c;
        case 0x430ea0u: goto label_430ea0;
        case 0x430ea4u: goto label_430ea4;
        case 0x430ea8u: goto label_430ea8;
        case 0x430eacu: goto label_430eac;
        case 0x430eb0u: goto label_430eb0;
        case 0x430eb4u: goto label_430eb4;
        case 0x430eb8u: goto label_430eb8;
        case 0x430ebcu: goto label_430ebc;
        case 0x430ec0u: goto label_430ec0;
        case 0x430ec4u: goto label_430ec4;
        case 0x430ec8u: goto label_430ec8;
        case 0x430eccu: goto label_430ecc;
        case 0x430ed0u: goto label_430ed0;
        case 0x430ed4u: goto label_430ed4;
        case 0x430ed8u: goto label_430ed8;
        case 0x430edcu: goto label_430edc;
        case 0x430ee0u: goto label_430ee0;
        case 0x430ee4u: goto label_430ee4;
        case 0x430ee8u: goto label_430ee8;
        case 0x430eecu: goto label_430eec;
        case 0x430ef0u: goto label_430ef0;
        case 0x430ef4u: goto label_430ef4;
        case 0x430ef8u: goto label_430ef8;
        case 0x430efcu: goto label_430efc;
        case 0x430f00u: goto label_430f00;
        case 0x430f04u: goto label_430f04;
        case 0x430f08u: goto label_430f08;
        case 0x430f0cu: goto label_430f0c;
        case 0x430f10u: goto label_430f10;
        case 0x430f14u: goto label_430f14;
        case 0x430f18u: goto label_430f18;
        case 0x430f1cu: goto label_430f1c;
        case 0x430f20u: goto label_430f20;
        case 0x430f24u: goto label_430f24;
        case 0x430f28u: goto label_430f28;
        case 0x430f2cu: goto label_430f2c;
        case 0x430f30u: goto label_430f30;
        case 0x430f34u: goto label_430f34;
        case 0x430f38u: goto label_430f38;
        case 0x430f3cu: goto label_430f3c;
        case 0x430f40u: goto label_430f40;
        case 0x430f44u: goto label_430f44;
        case 0x430f48u: goto label_430f48;
        case 0x430f4cu: goto label_430f4c;
        case 0x430f50u: goto label_430f50;
        case 0x430f54u: goto label_430f54;
        case 0x430f58u: goto label_430f58;
        case 0x430f5cu: goto label_430f5c;
        case 0x430f60u: goto label_430f60;
        case 0x430f64u: goto label_430f64;
        case 0x430f68u: goto label_430f68;
        case 0x430f6cu: goto label_430f6c;
        case 0x430f70u: goto label_430f70;
        case 0x430f74u: goto label_430f74;
        case 0x430f78u: goto label_430f78;
        case 0x430f7cu: goto label_430f7c;
        case 0x430f80u: goto label_430f80;
        case 0x430f84u: goto label_430f84;
        case 0x430f88u: goto label_430f88;
        case 0x430f8cu: goto label_430f8c;
        case 0x430f90u: goto label_430f90;
        case 0x430f94u: goto label_430f94;
        case 0x430f98u: goto label_430f98;
        case 0x430f9cu: goto label_430f9c;
        case 0x430fa0u: goto label_430fa0;
        case 0x430fa4u: goto label_430fa4;
        case 0x430fa8u: goto label_430fa8;
        case 0x430facu: goto label_430fac;
        case 0x430fb0u: goto label_430fb0;
        case 0x430fb4u: goto label_430fb4;
        case 0x430fb8u: goto label_430fb8;
        case 0x430fbcu: goto label_430fbc;
        case 0x430fc0u: goto label_430fc0;
        case 0x430fc4u: goto label_430fc4;
        case 0x430fc8u: goto label_430fc8;
        case 0x430fccu: goto label_430fcc;
        case 0x430fd0u: goto label_430fd0;
        case 0x430fd4u: goto label_430fd4;
        case 0x430fd8u: goto label_430fd8;
        case 0x430fdcu: goto label_430fdc;
        case 0x430fe0u: goto label_430fe0;
        case 0x430fe4u: goto label_430fe4;
        case 0x430fe8u: goto label_430fe8;
        case 0x430fecu: goto label_430fec;
        case 0x430ff0u: goto label_430ff0;
        case 0x430ff4u: goto label_430ff4;
        case 0x430ff8u: goto label_430ff8;
        case 0x430ffcu: goto label_430ffc;
        case 0x431000u: goto label_431000;
        case 0x431004u: goto label_431004;
        case 0x431008u: goto label_431008;
        case 0x43100cu: goto label_43100c;
        case 0x431010u: goto label_431010;
        case 0x431014u: goto label_431014;
        case 0x431018u: goto label_431018;
        case 0x43101cu: goto label_43101c;
        case 0x431020u: goto label_431020;
        case 0x431024u: goto label_431024;
        case 0x431028u: goto label_431028;
        case 0x43102cu: goto label_43102c;
        case 0x431030u: goto label_431030;
        case 0x431034u: goto label_431034;
        case 0x431038u: goto label_431038;
        case 0x43103cu: goto label_43103c;
        case 0x431040u: goto label_431040;
        case 0x431044u: goto label_431044;
        case 0x431048u: goto label_431048;
        case 0x43104cu: goto label_43104c;
        case 0x431050u: goto label_431050;
        case 0x431054u: goto label_431054;
        case 0x431058u: goto label_431058;
        case 0x43105cu: goto label_43105c;
        case 0x431060u: goto label_431060;
        case 0x431064u: goto label_431064;
        case 0x431068u: goto label_431068;
        case 0x43106cu: goto label_43106c;
        case 0x431070u: goto label_431070;
        case 0x431074u: goto label_431074;
        case 0x431078u: goto label_431078;
        case 0x43107cu: goto label_43107c;
        case 0x431080u: goto label_431080;
        case 0x431084u: goto label_431084;
        case 0x431088u: goto label_431088;
        case 0x43108cu: goto label_43108c;
        case 0x431090u: goto label_431090;
        case 0x431094u: goto label_431094;
        case 0x431098u: goto label_431098;
        case 0x43109cu: goto label_43109c;
        case 0x4310a0u: goto label_4310a0;
        case 0x4310a4u: goto label_4310a4;
        case 0x4310a8u: goto label_4310a8;
        case 0x4310acu: goto label_4310ac;
        case 0x4310b0u: goto label_4310b0;
        case 0x4310b4u: goto label_4310b4;
        case 0x4310b8u: goto label_4310b8;
        case 0x4310bcu: goto label_4310bc;
        case 0x4310c0u: goto label_4310c0;
        case 0x4310c4u: goto label_4310c4;
        case 0x4310c8u: goto label_4310c8;
        case 0x4310ccu: goto label_4310cc;
        case 0x4310d0u: goto label_4310d0;
        case 0x4310d4u: goto label_4310d4;
        case 0x4310d8u: goto label_4310d8;
        case 0x4310dcu: goto label_4310dc;
        case 0x4310e0u: goto label_4310e0;
        case 0x4310e4u: goto label_4310e4;
        case 0x4310e8u: goto label_4310e8;
        case 0x4310ecu: goto label_4310ec;
        case 0x4310f0u: goto label_4310f0;
        case 0x4310f4u: goto label_4310f4;
        case 0x4310f8u: goto label_4310f8;
        case 0x4310fcu: goto label_4310fc;
        case 0x431100u: goto label_431100;
        case 0x431104u: goto label_431104;
        case 0x431108u: goto label_431108;
        case 0x43110cu: goto label_43110c;
        case 0x431110u: goto label_431110;
        case 0x431114u: goto label_431114;
        case 0x431118u: goto label_431118;
        case 0x43111cu: goto label_43111c;
        case 0x431120u: goto label_431120;
        case 0x431124u: goto label_431124;
        case 0x431128u: goto label_431128;
        case 0x43112cu: goto label_43112c;
        case 0x431130u: goto label_431130;
        case 0x431134u: goto label_431134;
        case 0x431138u: goto label_431138;
        case 0x43113cu: goto label_43113c;
        case 0x431140u: goto label_431140;
        case 0x431144u: goto label_431144;
        case 0x431148u: goto label_431148;
        case 0x43114cu: goto label_43114c;
        case 0x431150u: goto label_431150;
        case 0x431154u: goto label_431154;
        case 0x431158u: goto label_431158;
        case 0x43115cu: goto label_43115c;
        case 0x431160u: goto label_431160;
        case 0x431164u: goto label_431164;
        case 0x431168u: goto label_431168;
        case 0x43116cu: goto label_43116c;
        case 0x431170u: goto label_431170;
        case 0x431174u: goto label_431174;
        case 0x431178u: goto label_431178;
        case 0x43117cu: goto label_43117c;
        case 0x431180u: goto label_431180;
        case 0x431184u: goto label_431184;
        case 0x431188u: goto label_431188;
        case 0x43118cu: goto label_43118c;
        case 0x431190u: goto label_431190;
        case 0x431194u: goto label_431194;
        case 0x431198u: goto label_431198;
        case 0x43119cu: goto label_43119c;
        case 0x4311a0u: goto label_4311a0;
        case 0x4311a4u: goto label_4311a4;
        case 0x4311a8u: goto label_4311a8;
        case 0x4311acu: goto label_4311ac;
        case 0x4311b0u: goto label_4311b0;
        case 0x4311b4u: goto label_4311b4;
        case 0x4311b8u: goto label_4311b8;
        case 0x4311bcu: goto label_4311bc;
        case 0x4311c0u: goto label_4311c0;
        case 0x4311c4u: goto label_4311c4;
        case 0x4311c8u: goto label_4311c8;
        case 0x4311ccu: goto label_4311cc;
        case 0x4311d0u: goto label_4311d0;
        case 0x4311d4u: goto label_4311d4;
        case 0x4311d8u: goto label_4311d8;
        case 0x4311dcu: goto label_4311dc;
        case 0x4311e0u: goto label_4311e0;
        case 0x4311e4u: goto label_4311e4;
        case 0x4311e8u: goto label_4311e8;
        case 0x4311ecu: goto label_4311ec;
        case 0x4311f0u: goto label_4311f0;
        case 0x4311f4u: goto label_4311f4;
        case 0x4311f8u: goto label_4311f8;
        case 0x4311fcu: goto label_4311fc;
        case 0x431200u: goto label_431200;
        case 0x431204u: goto label_431204;
        case 0x431208u: goto label_431208;
        case 0x43120cu: goto label_43120c;
        case 0x431210u: goto label_431210;
        case 0x431214u: goto label_431214;
        case 0x431218u: goto label_431218;
        case 0x43121cu: goto label_43121c;
        case 0x431220u: goto label_431220;
        case 0x431224u: goto label_431224;
        case 0x431228u: goto label_431228;
        case 0x43122cu: goto label_43122c;
        case 0x431230u: goto label_431230;
        case 0x431234u: goto label_431234;
        case 0x431238u: goto label_431238;
        case 0x43123cu: goto label_43123c;
        case 0x431240u: goto label_431240;
        case 0x431244u: goto label_431244;
        case 0x431248u: goto label_431248;
        case 0x43124cu: goto label_43124c;
        case 0x431250u: goto label_431250;
        case 0x431254u: goto label_431254;
        case 0x431258u: goto label_431258;
        case 0x43125cu: goto label_43125c;
        case 0x431260u: goto label_431260;
        case 0x431264u: goto label_431264;
        case 0x431268u: goto label_431268;
        case 0x43126cu: goto label_43126c;
        case 0x431270u: goto label_431270;
        case 0x431274u: goto label_431274;
        case 0x431278u: goto label_431278;
        case 0x43127cu: goto label_43127c;
        case 0x431280u: goto label_431280;
        case 0x431284u: goto label_431284;
        case 0x431288u: goto label_431288;
        case 0x43128cu: goto label_43128c;
        case 0x431290u: goto label_431290;
        case 0x431294u: goto label_431294;
        case 0x431298u: goto label_431298;
        case 0x43129cu: goto label_43129c;
        case 0x4312a0u: goto label_4312a0;
        case 0x4312a4u: goto label_4312a4;
        case 0x4312a8u: goto label_4312a8;
        case 0x4312acu: goto label_4312ac;
        case 0x4312b0u: goto label_4312b0;
        case 0x4312b4u: goto label_4312b4;
        case 0x4312b8u: goto label_4312b8;
        case 0x4312bcu: goto label_4312bc;
        case 0x4312c0u: goto label_4312c0;
        case 0x4312c4u: goto label_4312c4;
        case 0x4312c8u: goto label_4312c8;
        case 0x4312ccu: goto label_4312cc;
        case 0x4312d0u: goto label_4312d0;
        case 0x4312d4u: goto label_4312d4;
        case 0x4312d8u: goto label_4312d8;
        case 0x4312dcu: goto label_4312dc;
        case 0x4312e0u: goto label_4312e0;
        case 0x4312e4u: goto label_4312e4;
        case 0x4312e8u: goto label_4312e8;
        case 0x4312ecu: goto label_4312ec;
        case 0x4312f0u: goto label_4312f0;
        case 0x4312f4u: goto label_4312f4;
        case 0x4312f8u: goto label_4312f8;
        case 0x4312fcu: goto label_4312fc;
        case 0x431300u: goto label_431300;
        case 0x431304u: goto label_431304;
        case 0x431308u: goto label_431308;
        case 0x43130cu: goto label_43130c;
        case 0x431310u: goto label_431310;
        case 0x431314u: goto label_431314;
        case 0x431318u: goto label_431318;
        case 0x43131cu: goto label_43131c;
        case 0x431320u: goto label_431320;
        case 0x431324u: goto label_431324;
        case 0x431328u: goto label_431328;
        case 0x43132cu: goto label_43132c;
        case 0x431330u: goto label_431330;
        case 0x431334u: goto label_431334;
        case 0x431338u: goto label_431338;
        case 0x43133cu: goto label_43133c;
        case 0x431340u: goto label_431340;
        case 0x431344u: goto label_431344;
        case 0x431348u: goto label_431348;
        case 0x43134cu: goto label_43134c;
        case 0x431350u: goto label_431350;
        case 0x431354u: goto label_431354;
        case 0x431358u: goto label_431358;
        case 0x43135cu: goto label_43135c;
        case 0x431360u: goto label_431360;
        case 0x431364u: goto label_431364;
        case 0x431368u: goto label_431368;
        case 0x43136cu: goto label_43136c;
        case 0x431370u: goto label_431370;
        case 0x431374u: goto label_431374;
        case 0x431378u: goto label_431378;
        case 0x43137cu: goto label_43137c;
        case 0x431380u: goto label_431380;
        case 0x431384u: goto label_431384;
        case 0x431388u: goto label_431388;
        case 0x43138cu: goto label_43138c;
        case 0x431390u: goto label_431390;
        case 0x431394u: goto label_431394;
        case 0x431398u: goto label_431398;
        case 0x43139cu: goto label_43139c;
        case 0x4313a0u: goto label_4313a0;
        case 0x4313a4u: goto label_4313a4;
        case 0x4313a8u: goto label_4313a8;
        case 0x4313acu: goto label_4313ac;
        case 0x4313b0u: goto label_4313b0;
        case 0x4313b4u: goto label_4313b4;
        case 0x4313b8u: goto label_4313b8;
        case 0x4313bcu: goto label_4313bc;
        case 0x4313c0u: goto label_4313c0;
        case 0x4313c4u: goto label_4313c4;
        case 0x4313c8u: goto label_4313c8;
        case 0x4313ccu: goto label_4313cc;
        case 0x4313d0u: goto label_4313d0;
        case 0x4313d4u: goto label_4313d4;
        case 0x4313d8u: goto label_4313d8;
        case 0x4313dcu: goto label_4313dc;
        case 0x4313e0u: goto label_4313e0;
        case 0x4313e4u: goto label_4313e4;
        case 0x4313e8u: goto label_4313e8;
        case 0x4313ecu: goto label_4313ec;
        case 0x4313f0u: goto label_4313f0;
        case 0x4313f4u: goto label_4313f4;
        case 0x4313f8u: goto label_4313f8;
        case 0x4313fcu: goto label_4313fc;
        case 0x431400u: goto label_431400;
        case 0x431404u: goto label_431404;
        case 0x431408u: goto label_431408;
        case 0x43140cu: goto label_43140c;
        case 0x431410u: goto label_431410;
        case 0x431414u: goto label_431414;
        case 0x431418u: goto label_431418;
        case 0x43141cu: goto label_43141c;
        case 0x431420u: goto label_431420;
        case 0x431424u: goto label_431424;
        case 0x431428u: goto label_431428;
        case 0x43142cu: goto label_43142c;
        case 0x431430u: goto label_431430;
        case 0x431434u: goto label_431434;
        case 0x431438u: goto label_431438;
        case 0x43143cu: goto label_43143c;
        case 0x431440u: goto label_431440;
        case 0x431444u: goto label_431444;
        case 0x431448u: goto label_431448;
        case 0x43144cu: goto label_43144c;
        case 0x431450u: goto label_431450;
        case 0x431454u: goto label_431454;
        case 0x431458u: goto label_431458;
        case 0x43145cu: goto label_43145c;
        case 0x431460u: goto label_431460;
        case 0x431464u: goto label_431464;
        case 0x431468u: goto label_431468;
        case 0x43146cu: goto label_43146c;
        case 0x431470u: goto label_431470;
        case 0x431474u: goto label_431474;
        case 0x431478u: goto label_431478;
        case 0x43147cu: goto label_43147c;
        case 0x431480u: goto label_431480;
        case 0x431484u: goto label_431484;
        case 0x431488u: goto label_431488;
        case 0x43148cu: goto label_43148c;
        case 0x431490u: goto label_431490;
        case 0x431494u: goto label_431494;
        case 0x431498u: goto label_431498;
        case 0x43149cu: goto label_43149c;
        case 0x4314a0u: goto label_4314a0;
        case 0x4314a4u: goto label_4314a4;
        case 0x4314a8u: goto label_4314a8;
        case 0x4314acu: goto label_4314ac;
        case 0x4314b0u: goto label_4314b0;
        case 0x4314b4u: goto label_4314b4;
        case 0x4314b8u: goto label_4314b8;
        case 0x4314bcu: goto label_4314bc;
        case 0x4314c0u: goto label_4314c0;
        case 0x4314c4u: goto label_4314c4;
        case 0x4314c8u: goto label_4314c8;
        case 0x4314ccu: goto label_4314cc;
        case 0x4314d0u: goto label_4314d0;
        case 0x4314d4u: goto label_4314d4;
        case 0x4314d8u: goto label_4314d8;
        case 0x4314dcu: goto label_4314dc;
        case 0x4314e0u: goto label_4314e0;
        case 0x4314e4u: goto label_4314e4;
        case 0x4314e8u: goto label_4314e8;
        case 0x4314ecu: goto label_4314ec;
        case 0x4314f0u: goto label_4314f0;
        case 0x4314f4u: goto label_4314f4;
        case 0x4314f8u: goto label_4314f8;
        case 0x4314fcu: goto label_4314fc;
        case 0x431500u: goto label_431500;
        case 0x431504u: goto label_431504;
        case 0x431508u: goto label_431508;
        case 0x43150cu: goto label_43150c;
        case 0x431510u: goto label_431510;
        case 0x431514u: goto label_431514;
        case 0x431518u: goto label_431518;
        case 0x43151cu: goto label_43151c;
        case 0x431520u: goto label_431520;
        case 0x431524u: goto label_431524;
        case 0x431528u: goto label_431528;
        case 0x43152cu: goto label_43152c;
        case 0x431530u: goto label_431530;
        case 0x431534u: goto label_431534;
        case 0x431538u: goto label_431538;
        case 0x43153cu: goto label_43153c;
        case 0x431540u: goto label_431540;
        case 0x431544u: goto label_431544;
        case 0x431548u: goto label_431548;
        case 0x43154cu: goto label_43154c;
        case 0x431550u: goto label_431550;
        case 0x431554u: goto label_431554;
        case 0x431558u: goto label_431558;
        case 0x43155cu: goto label_43155c;
        case 0x431560u: goto label_431560;
        case 0x431564u: goto label_431564;
        case 0x431568u: goto label_431568;
        case 0x43156cu: goto label_43156c;
        case 0x431570u: goto label_431570;
        case 0x431574u: goto label_431574;
        case 0x431578u: goto label_431578;
        case 0x43157cu: goto label_43157c;
        case 0x431580u: goto label_431580;
        case 0x431584u: goto label_431584;
        case 0x431588u: goto label_431588;
        case 0x43158cu: goto label_43158c;
        case 0x431590u: goto label_431590;
        case 0x431594u: goto label_431594;
        case 0x431598u: goto label_431598;
        case 0x43159cu: goto label_43159c;
        case 0x4315a0u: goto label_4315a0;
        case 0x4315a4u: goto label_4315a4;
        case 0x4315a8u: goto label_4315a8;
        case 0x4315acu: goto label_4315ac;
        case 0x4315b0u: goto label_4315b0;
        case 0x4315b4u: goto label_4315b4;
        case 0x4315b8u: goto label_4315b8;
        case 0x4315bcu: goto label_4315bc;
        case 0x4315c0u: goto label_4315c0;
        case 0x4315c4u: goto label_4315c4;
        case 0x4315c8u: goto label_4315c8;
        case 0x4315ccu: goto label_4315cc;
        case 0x4315d0u: goto label_4315d0;
        case 0x4315d4u: goto label_4315d4;
        case 0x4315d8u: goto label_4315d8;
        case 0x4315dcu: goto label_4315dc;
        case 0x4315e0u: goto label_4315e0;
        case 0x4315e4u: goto label_4315e4;
        case 0x4315e8u: goto label_4315e8;
        case 0x4315ecu: goto label_4315ec;
        case 0x4315f0u: goto label_4315f0;
        case 0x4315f4u: goto label_4315f4;
        case 0x4315f8u: goto label_4315f8;
        case 0x4315fcu: goto label_4315fc;
        case 0x431600u: goto label_431600;
        case 0x431604u: goto label_431604;
        case 0x431608u: goto label_431608;
        case 0x43160cu: goto label_43160c;
        case 0x431610u: goto label_431610;
        case 0x431614u: goto label_431614;
        case 0x431618u: goto label_431618;
        case 0x43161cu: goto label_43161c;
        case 0x431620u: goto label_431620;
        case 0x431624u: goto label_431624;
        case 0x431628u: goto label_431628;
        case 0x43162cu: goto label_43162c;
        case 0x431630u: goto label_431630;
        case 0x431634u: goto label_431634;
        case 0x431638u: goto label_431638;
        case 0x43163cu: goto label_43163c;
        case 0x431640u: goto label_431640;
        case 0x431644u: goto label_431644;
        case 0x431648u: goto label_431648;
        case 0x43164cu: goto label_43164c;
        case 0x431650u: goto label_431650;
        case 0x431654u: goto label_431654;
        case 0x431658u: goto label_431658;
        case 0x43165cu: goto label_43165c;
        case 0x431660u: goto label_431660;
        case 0x431664u: goto label_431664;
        case 0x431668u: goto label_431668;
        case 0x43166cu: goto label_43166c;
        case 0x431670u: goto label_431670;
        case 0x431674u: goto label_431674;
        case 0x431678u: goto label_431678;
        case 0x43167cu: goto label_43167c;
        case 0x431680u: goto label_431680;
        case 0x431684u: goto label_431684;
        case 0x431688u: goto label_431688;
        case 0x43168cu: goto label_43168c;
        case 0x431690u: goto label_431690;
        case 0x431694u: goto label_431694;
        case 0x431698u: goto label_431698;
        case 0x43169cu: goto label_43169c;
        default: break;
    }

    ctx->pc = 0x430810u;

label_430810:
    // 0x430810: 0x27bdf760  addiu       $sp, $sp, -0x8A0
    ctx->pc = 0x430810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965088));
label_430814:
    // 0x430814: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x430814u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_430818:
    // 0x430818: 0x7fb00890  sq          $s0, 0x890($sp)
    ctx->pc = 0x430818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 16));
label_43081c:
    // 0x43081c: 0x7fb10880  sq          $s1, 0x880($sp)
    ctx->pc = 0x43081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 17));
label_430820:
    // 0x430820: 0x7fb20870  sq          $s2, 0x870($sp)
    ctx->pc = 0x430820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 18));
label_430824:
    // 0x430824: 0x7fb30860  sq          $s3, 0x860($sp)
    ctx->pc = 0x430824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 19));
label_430828:
    // 0x430828: 0x7fb40850  sq          $s4, 0x850($sp)
    ctx->pc = 0x430828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 20));
label_43082c:
    // 0x43082c: 0x7fb50840  sq          $s5, 0x840($sp)
    ctx->pc = 0x43082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 21));
label_430830:
    // 0x430830: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x430830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
label_430834:
    // 0x430834: 0x184000da  blez        $v0, . + 4 + (0xDA << 2)
label_430838:
    if (ctx->pc == 0x430838u) {
        ctx->pc = 0x430838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430834u;
        // 0x430838: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43083Cu;
        goto label_43083c;
    }
    ctx->pc = 0x430834u;
    {
        const bool branch_taken_0x430834 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x430838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430834u;
        // 0x430838: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430834) {
            ctx->pc = 0x430BA0u;
            goto label_430ba0;
        }
    }
    ctx->pc = 0x43083Cu;
label_43083c:
    // 0x43083c: 0x8db2000c  lw          $s2, 0xC($t5)
    ctx->pc = 0x43083cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
label_430840:
    // 0x430840: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x430840u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_430844:
    // 0x430844: 0x27af0800  addiu       $t7, $sp, 0x800
    ctx->pc = 0x430844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
label_430848:
    // 0x430848: 0x12a043  sra         $s4, $s2, 1
    ctx->pc = 0x430848u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 18), 1));
label_43084c:
    // 0x43084c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x43084cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430850:
    // 0x430850: 0x25930004  addiu       $s3, $t4, 0x4
    ctx->pc = 0x430850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_430854:
    // 0x430854: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x430854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430858:
    // 0x430858: 0x1a800038  blez        $s4, . + 4 + (0x38 << 2)
label_43085c:
    if (ctx->pc == 0x43085Cu) {
        ctx->pc = 0x43085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430858u;
        // 0x43085c: 0x24ca0001  addiu       $t2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430860u;
        goto label_430860;
    }
    ctx->pc = 0x430858u;
    {
        const bool branch_taken_0x430858 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x43085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430858u;
        // 0x43085c: 0x24ca0001  addiu       $t2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430858) {
            ctx->pc = 0x43093Cu;
            goto label_43093c;
        }
    }
    ctx->pc = 0x430860u;
label_430860:
    // 0x430860: 0x8da40018  lw          $a0, 0x18($t5)
    ctx->pc = 0x430860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
label_430864:
    // 0x430864: 0x1861821  addu        $v1, $t4, $a2
    ctx->pc = 0x430864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_430868:
    // 0x430868: 0x8da50004  lw          $a1, 0x4($t5)
    ctx->pc = 0x430868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_43086c:
    // 0x43086c: 0x61240  sll         $v0, $a2, 9
    ctx->pc = 0x43086cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
label_430870:
    // 0x430870: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x430870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_430874:
    // 0x430874: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x430874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_430878:
    // 0x430878: 0x124843  sra         $t1, $s2, 1
    ctx->pc = 0x430878u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 18), 1));
label_43087c:
    // 0x43087c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x43087cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_430880:
    // 0x430880: 0x3124003f  andi        $a0, $t1, 0x3F
    ctx->pc = 0x430880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)63);
label_430884:
    // 0x430884: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x430884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_430888:
    // 0x430888: 0x19200015  blez        $t1, . + 4 + (0x15 << 2)
label_43088c:
    if (ctx->pc == 0x43088Cu) {
        ctx->pc = 0x43088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430888u;
        // 0x43088c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430890u;
        goto label_430890;
    }
    ctx->pc = 0x430888u;
    {
        const bool branch_taken_0x430888 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x43088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430888u;
        // 0x43088c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430888) {
            ctx->pc = 0x4308E0u;
            goto label_4308e0;
        }
    }
    ctx->pc = 0x430890u;
label_430890:
    // 0x430890: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_430894:
    if (ctx->pc == 0x430894u) {
        ctx->pc = 0x430894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430890u;
        // 0x430894: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430898u;
        goto label_430898;
    }
    ctx->pc = 0x430890u;
    {
        const bool branch_taken_0x430890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x430894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430890u;
        // 0x430894: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430890) {
            ctx->pc = 0x4308FCu;
            goto label_4308fc;
        }
    }
    ctx->pc = 0x430898u;
label_430898:
    // 0x430898: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_43089c:
    if (ctx->pc == 0x43089Cu) {
        ctx->pc = 0x43089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430898u;
        // 0x43089c: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4308A0u;
        goto label_4308a0;
    }
    ctx->pc = 0x430898u;
    {
        const bool branch_taken_0x430898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430898) {
            ctx->pc = 0x43089Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430898u;
            // 0x43089c: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4308E4u;
            goto label_4308e4;
        }
    }
    ctx->pc = 0x4308A0u;
label_4308a0:
    // 0x4308a0: 0x28820021  slti        $v0, $a0, 0x21
    ctx->pc = 0x4308a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
label_4308a4:
    // 0x4308a4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_4308a8:
    if (ctx->pc == 0x4308A8u) {
        ctx->pc = 0x4308A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4308A4u;
        // 0x4308a8: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4308ACu;
        goto label_4308ac;
    }
    ctx->pc = 0x4308A4u;
    {
        const bool branch_taken_0x4308a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4308a4) {
            ctx->pc = 0x4308A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4308A4u;
            // 0x4308a8: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4308D0u;
            goto label_4308d0;
        }
    }
    ctx->pc = 0x4308ACu;
label_4308ac:
    // 0x4308ac: 0x28820031  slti        $v0, $a0, 0x31
    ctx->pc = 0x4308acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)49) ? 1 : 0);
label_4308b0:
    // 0x4308b0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4308b4:
    if (ctx->pc == 0x4308B4u) {
        ctx->pc = 0x4308B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4308B0u;
        // 0x4308b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4308B8u;
        goto label_4308b8;
    }
    ctx->pc = 0x4308B0u;
    {
        const bool branch_taken_0x4308b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4308b0) {
            ctx->pc = 0x4308B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4308B0u;
            // 0x4308b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430900u;
            goto label_430900;
        }
    }
    ctx->pc = 0x4308B8u;
label_4308b8:
    // 0x4308b8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4308b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4308bc:
    // 0x4308bc: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x4308bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4308c0:
    // 0x4308c0: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x4308c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_4308c4:
    // 0x4308c4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x4308c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4308c8:
    // 0x4308c8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x4308c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_4308cc:
    // 0x4308cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4308ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_4308d0:
    // 0x4308d0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4308d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_4308d4:
    // 0x4308d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4308d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4308d8:
    // 0x4308d8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4308d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_4308dc:
    // 0x4308dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4308dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_4308e0:
    // 0x4308e0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4308e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_4308e4:
    // 0x4308e4: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x4308e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_4308e8:
    // 0x4308e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4308e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4308ec:
    // 0x4308ec: 0x109382a  slt         $a3, $t0, $t1
    ctx->pc = 0x4308ecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_4308f0:
    // 0x4308f0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4308f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_4308f4:
    // 0x4308f4: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_4308f8:
    if (ctx->pc == 0x4308F8u) {
        ctx->pc = 0x4308F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4308F4u;
        // 0x4308f8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4308FCu;
        goto label_4308fc;
    }
    ctx->pc = 0x4308F4u;
    {
        const bool branch_taken_0x4308f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4308F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4308F4u;
        // 0x4308f8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4308f4) {
            ctx->pc = 0x43093Cu;
            goto label_43093c;
        }
    }
    ctx->pc = 0x4308FCu;
label_4308fc:
    // 0x4308fc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4308fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_430900:
    // 0x430900: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x430900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_430904:
    // 0x430904: 0x0  nop
    ctx->pc = 0x430904u;
    // NOP
label_430908:
    // 0x430908: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x430908u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_43090c:
    // 0x43090c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x43090cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_430910:
    // 0x430910: 0x109382a  slt         $a3, $t0, $t1
    ctx->pc = 0x430910u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_430914:
    // 0x430914: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x430914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_430918:
    // 0x430918: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x430918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_43091c:
    // 0x43091c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x43091cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_430920:
    // 0x430920: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x430920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_430924:
    // 0x430924: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x430924u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_430928:
    // 0x430928: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x430928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_43092c:
    // 0x43092c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x43092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_430930:
    // 0x430930: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x430930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_430934:
    // 0x430934: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
label_430938:
    if (ctx->pc == 0x430938u) {
        ctx->pc = 0x430938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430934u;
        // 0x430938: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43093Cu;
        goto label_43093c;
    }
    ctx->pc = 0x430934u;
    {
        const bool branch_taken_0x430934 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x430938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430934u;
        // 0x430938: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430934) {
            ctx->pc = 0x430908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430908;
        }
    }
    ctx->pc = 0x43093Cu;
label_43093c:
    // 0x43093c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x43093cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_430940:
    // 0x430940: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x430940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_430944:
    // 0x430944: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_430948:
    if (ctx->pc == 0x430948u) {
        ctx->pc = 0x430948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430944u;
        // 0x430948: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43094Cu;
        goto label_43094c;
    }
    ctx->pc = 0x430944u;
    {
        const bool branch_taken_0x430944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430944u;
        // 0x430948: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430944) {
            ctx->pc = 0x430858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430858;
        }
    }
    ctx->pc = 0x43094Cu;
label_43094c:
    // 0x43094c: 0x8da2000c  lw          $v0, 0xC($t5)
    ctx->pc = 0x43094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 12)));
label_430950:
    // 0x430950: 0x58400090  blezl       $v0, . + 4 + (0x90 << 2)
label_430954:
    if (ctx->pc == 0x430954u) {
        ctx->pc = 0x430954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430950u;
        // 0x430954: 0x260602d  daddu       $t4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430958u;
        goto label_430958;
    }
    ctx->pc = 0x430950u;
    {
        const bool branch_taken_0x430950 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x430950) {
            ctx->pc = 0x430954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430950u;
            // 0x430954: 0x260602d  daddu       $t4, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430B94u;
            goto label_430b94;
        }
    }
    ctx->pc = 0x430958u;
label_430958:
    // 0x430958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x430958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43095c:
    // 0x43095c: 0x31980004  andi        $t8, $t4, 0x4
    ctx->pc = 0x43095cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
label_430960:
    // 0x430960: 0x25900002  addiu       $s0, $t4, 0x2
    ctx->pc = 0x430960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
label_430964:
    // 0x430964: 0x0  nop
    ctx->pc = 0x430964u;
    // NOP
label_430968:
    // 0x430968: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x430968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43096c:
    // 0x43096c: 0x25190020  addiu       $t9, $t0, 0x20
    ctx->pc = 0x43096cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_430970:
    // 0x430970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x430970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430974:
    // 0x430974: 0x0  nop
    ctx->pc = 0x430974u;
    // NOP
label_430978:
    // 0x430978: 0x254e0020  addiu       $t6, $t2, 0x20
    ctx->pc = 0x430978u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_43097c:
    // 0x43097c: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x43097cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_430980:
    // 0x430980: 0xa5827  nor         $t3, $zero, $t2
    ctx->pc = 0x430980u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
label_430984:
    // 0x430984: 0x0  nop
    ctx->pc = 0x430984u;
    // NOP
label_430988:
    // 0x430988: 0x13000019  beqz        $t8, . + 4 + (0x19 << 2)
label_43098c:
    if (ctx->pc == 0x43098Cu) {
        ctx->pc = 0x43098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430988u;
        // 0x43098c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430990u;
        goto label_430990;
    }
    ctx->pc = 0x430988u;
    {
        const bool branch_taken_0x430988 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x43098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430988u;
        // 0x43098c: 0x30e40002  andi        $a0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430988) {
            ctx->pc = 0x4309F0u;
            goto label_4309f0;
        }
    }
    ctx->pc = 0x430990u;
label_430990:
    // 0x430990: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x430990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
label_430994:
    // 0x430994: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x430994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_430998:
    // 0x430998: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x430998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_43099c:
    // 0x43099c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x43099cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4309a0:
    // 0x4309a0: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x4309a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_4309a4:
    // 0x4309a4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4309a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4309a8:
    // 0x4309a8: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x4309a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_4309ac:
    // 0x4309ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4309acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4309b0:
    // 0x4309b0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4309b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4309b4:
    // 0x4309b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4309b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4309b8:
    // 0x4309b8: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x4309b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_4309bc:
    // 0x4309bc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x4309bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_4309c0:
    // 0x4309c0: 0x30e60040  andi        $a2, $a3, 0x40
    ctx->pc = 0x4309c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_4309c4:
    // 0x4309c4: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x4309c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_4309c8:
    // 0x4309c8: 0x31650001  andi        $a1, $t3, 0x1
    ctx->pc = 0x4309c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_4309cc:
    // 0x4309cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4309ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4309d0:
    // 0x4309d0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x4309d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_4309d4:
    // 0x4309d4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x4309d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4309d8:
    // 0x4309d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4309d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4309dc:
    // 0x4309dc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x4309dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_4309e0:
    // 0x4309e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4309e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4309e4:
    // 0x4309e4: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x4309e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_4309e8:
    // 0x4309e8: 0x10000017  b           . + 4 + (0x17 << 2)
label_4309ec:
    if (ctx->pc == 0x4309ECu) {
        ctx->pc = 0x4309ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4309E8u;
        // 0x4309ec: 0x1491821  addu        $v1, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4309F0u;
        goto label_4309f0;
    }
    ctx->pc = 0x4309E8u;
    {
        const bool branch_taken_0x4309e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4309ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4309E8u;
        // 0x4309ec: 0x1491821  addu        $v1, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4309e8) {
            ctx->pc = 0x430A48u;
            goto label_430a48;
        }
    }
    ctx->pc = 0x4309F0u;
label_4309f0:
    // 0x4309f0: 0x30e20020  andi        $v0, $a3, 0x20
    ctx->pc = 0x4309f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
label_4309f4:
    // 0x4309f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4309f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_4309f8:
    // 0x4309f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4309f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4309fc:
    // 0x4309fc: 0x30e30004  andi        $v1, $a3, 0x4
    ctx->pc = 0x4309fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_430a00:
    // 0x430a00: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x430a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_430a04:
    // 0x430a04: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x430a04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_430a08:
    // 0x430a08: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x430a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_430a0c:
    // 0x430a0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x430a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_430a10:
    // 0x430a10: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x430a10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_430a14:
    // 0x430a14: 0x30e30010  andi        $v1, $a3, 0x10
    ctx->pc = 0x430a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_430a18:
    // 0x430a18: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x430a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_430a1c:
    // 0x430a1c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x430a1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_430a20:
    // 0x430a20: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x430a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_430a24:
    // 0x430a24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x430a24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_430a28:
    // 0x430a28: 0x30e50040  andi        $a1, $a3, 0x40
    ctx->pc = 0x430a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
label_430a2c:
    // 0x430a2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x430a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_430a30:
    // 0x430a30: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x430a30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_430a34:
    // 0x430a34: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x430a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_430a38:
    // 0x430a38: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x430a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_430a3c:
    // 0x430a3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x430a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_430a40:
    // 0x430a40: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x430a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_430a44:
    // 0x430a44: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x430a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
label_430a48:
    // 0x430a48: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x430a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_430a4c:
    // 0x430a4c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_430a50:
    if (ctx->pc == 0x430A50u) {
        ctx->pc = 0x430A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430A4Cu;
        // 0x430a50: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430A54u;
        goto label_430a54;
    }
    ctx->pc = 0x430A4Cu;
    {
        const bool branch_taken_0x430a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430A4Cu;
        // 0x430a50: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430a4c) {
            ctx->pc = 0x430AC4u;
            goto label_430ac4;
        }
    }
    ctx->pc = 0x430A54u;
label_430a54:
    // 0x430a54: 0x1e22821  addu        $a1, $t7, $v0
    ctx->pc = 0x430a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_430a58:
    // 0x430a58: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x430a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_430a5c:
    // 0x430a5c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_430a60:
    if (ctx->pc == 0x430A60u) {
        ctx->pc = 0x430A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430A5Cu;
        // 0x430a60: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430A64u;
        goto label_430a64;
    }
    ctx->pc = 0x430A5Cu;
    {
        const bool branch_taken_0x430a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x430A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430A5Cu;
        // 0x430a60: 0x90a60000  lbu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430a5c) {
            ctx->pc = 0x430A90u;
            goto label_430a90;
        }
    }
    ctx->pc = 0x430A64u;
label_430a64:
    // 0x430a64: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x430a64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
label_430a68:
    // 0x430a68: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x430a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_430a6c:
    // 0x430a6c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x430a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_430a70:
    // 0x430a70: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x430a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_430a74:
    // 0x430a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x430a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_430a78:
    // 0x430a78: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x430a78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_430a7c:
    // 0x430a7c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x430a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_430a80:
    // 0x430a80: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x430a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_430a84:
    // 0x430a84: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x430a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_430a88:
    // 0x430a88: 0x10000024  b           . + 4 + (0x24 << 2)
label_430a8c:
    if (ctx->pc == 0x430A8Cu) {
        ctx->pc = 0x430A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430A88u;
        // 0x430a8c: 0xc31825  or          $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430A90u;
        goto label_430a90;
    }
    ctx->pc = 0x430A88u;
    {
        const bool branch_taken_0x430a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430A88u;
        // 0x430a8c: 0xc31825  or          $v1, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430a88) {
            ctx->pc = 0x430B1Cu;
            goto label_430b1c;
        }
    }
    ctx->pc = 0x430A90u;
label_430a90:
    // 0x430a90: 0x41143  sra         $v0, $a0, 5
    ctx->pc = 0x430a90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 5));
label_430a94:
    // 0x430a94: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x430a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_430a98:
    // 0x430a98: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x430a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_430a9c:
    // 0x430a9c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x430a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_430aa0:
    // 0x430aa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x430aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_430aa4:
    // 0x430aa4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x430aa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_430aa8:
    // 0x430aa8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x430aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_430aac:
    // 0x430aac: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x430aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_430ab0:
    // 0x430ab0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x430ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_430ab4:
    // 0x430ab4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x430ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_430ab8:
    // 0x430ab8: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x430ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_430abc:
    // 0x430abc: 0x10000018  b           . + 4 + (0x18 << 2)
label_430ac0:
    if (ctx->pc == 0x430AC0u) {
        ctx->pc = 0x430AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430ABCu;
        // 0x430ac0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430AC4u;
        goto label_430ac4;
    }
    ctx->pc = 0x430ABCu;
    {
        const bool branch_taken_0x430abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430ABCu;
        // 0x430ac0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430abc) {
            ctx->pc = 0x430B20u;
            goto label_430b20;
        }
    }
    ctx->pc = 0x430AC4u;
label_430ac4:
    // 0x430ac4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x430ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_430ac8:
    // 0x430ac8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_430acc:
    if (ctx->pc == 0x430ACCu) {
        ctx->pc = 0x430ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430AC8u;
        // 0x430acc: 0x1e22821  addu        $a1, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430AD0u;
        goto label_430ad0;
    }
    ctx->pc = 0x430AC8u;
    {
        const bool branch_taken_0x430ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x430ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430AC8u;
        // 0x430acc: 0x1e22821  addu        $a1, $t7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430ac8) {
            ctx->pc = 0x430AF8u;
            goto label_430af8;
        }
    }
    ctx->pc = 0x430AD0u;
label_430ad0:
    // 0x430ad0: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x430ad0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
label_430ad4:
    // 0x430ad4: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x430ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_430ad8:
    // 0x430ad8: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x430ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_430adc:
    // 0x430adc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x430adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_430ae0:
    // 0x430ae0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x430ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_430ae4:
    // 0x430ae4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x430ae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_430ae8:
    // 0x430ae8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x430ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_430aec:
    // 0x430aec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x430aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_430af0:
    // 0x430af0: 0x1000000a  b           . + 4 + (0xA << 2)
label_430af4:
    if (ctx->pc == 0x430AF4u) {
        ctx->pc = 0x430AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430AF0u;
        // 0x430af4: 0x31902  srl         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430AF8u;
        goto label_430af8;
    }
    ctx->pc = 0x430AF0u;
    {
        const bool branch_taken_0x430af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430AF0u;
        // 0x430af4: 0x31902  srl         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430af0) {
            ctx->pc = 0x430B1Cu;
            goto label_430b1c;
        }
    }
    ctx->pc = 0x430AF8u;
label_430af8:
    // 0x430af8: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x430af8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
label_430afc:
    // 0x430afc: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x430afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_430b00:
    // 0x430b00: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x430b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_430b04:
    // 0x430b04: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x430b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_430b08:
    // 0x430b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x430b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_430b0c:
    // 0x430b0c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x430b0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_430b10:
    // 0x430b10: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x430b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_430b14:
    // 0x430b14: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x430b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_430b18:
    // 0x430b18: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x430b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_430b1c:
    // 0x430b1c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x430b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_430b20:
    // 0x430b20: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x430b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_430b24:
    // 0x430b24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x430b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_430b28:
    // 0x430b28: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x430b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
label_430b2c:
    // 0x430b2c: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
label_430b30:
    if (ctx->pc == 0x430B30u) {
        ctx->pc = 0x430B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B2Cu;
        // 0x430b30: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430B34u;
        goto label_430b34;
    }
    ctx->pc = 0x430B2Cu;
    {
        const bool branch_taken_0x430b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B2Cu;
        // 0x430b30: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430b2c) {
            ctx->pc = 0x430988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430988;
        }
    }
    ctx->pc = 0x430B34u;
label_430b34:
    // 0x430b34: 0x1c0502d  daddu       $t2, $t6, $zero
    ctx->pc = 0x430b34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_430b38:
    // 0x430b38: 0x29420080  slti        $v0, $t2, 0x80
    ctx->pc = 0x430b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)128) ? 1 : 0);
label_430b3c:
    // 0x430b3c: 0x5440ff8e  bnel        $v0, $zero, . + 4 + (-0x72 << 2)
label_430b40:
    if (ctx->pc == 0x430B40u) {
        ctx->pc = 0x430B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B3Cu;
        // 0x430b40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430B44u;
        goto label_430b44;
    }
    ctx->pc = 0x430B3Cu;
    {
        const bool branch_taken_0x430b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430b3c) {
            ctx->pc = 0x430B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430B3Cu;
            // 0x430b40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430978;
        }
    }
    ctx->pc = 0x430B44u;
label_430b44:
    // 0x430b44: 0x8da50018  lw          $a1, 0x18($t5)
    ctx->pc = 0x430b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 24)));
label_430b48:
    // 0x430b48: 0x8da40004  lw          $a0, 0x4($t5)
    ctx->pc = 0x430b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_430b4c:
    // 0x430b4c: 0x2053018  mult        $a2, $s0, $a1
    ctx->pc = 0x430b4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_430b50:
    // 0x430b50: 0x1851818  mult        $v1, $t4, $a1
    ctx->pc = 0x430b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_430b54:
    // 0x430b54: 0x7ba20800  lq          $v0, 0x800($sp)
    ctx->pc = 0x430b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2048)));
label_430b58:
    // 0x430b58: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x430b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_430b5c:
    // 0x430b5c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x430b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_430b60:
    // 0x430b60: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x430b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_430b64:
    // 0x430b64: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x430b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_430b68:
    // 0x430b68: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x430b68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_430b6c:
    // 0x430b6c: 0x320402d  daddu       $t0, $t9, $zero
    ctx->pc = 0x430b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_430b70:
    // 0x430b70: 0x111302a  slt         $a2, $t0, $s1
    ctx->pc = 0x430b70u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_430b74:
    // 0x430b74: 0x7ba20810  lq          $v0, 0x810($sp)
    ctx->pc = 0x430b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2064)));
label_430b78:
    // 0x430b78: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x430b78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_430b7c:
    // 0x430b7c: 0x7ba30820  lq          $v1, 0x820($sp)
    ctx->pc = 0x430b7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 2080)));
label_430b80:
    // 0x430b80: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x430b80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_430b84:
    // 0x430b84: 0x7ba20830  lq          $v0, 0x830($sp)
    ctx->pc = 0x430b84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
label_430b88:
    // 0x430b88: 0x14c0ff77  bnez        $a2, . + 4 + (-0x89 << 2)
label_430b8c:
    if (ctx->pc == 0x430B8Cu) {
        ctx->pc = 0x430B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B88u;
        // 0x430b8c: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430B90u;
        goto label_430b90;
    }
    ctx->pc = 0x430B88u;
    {
        const bool branch_taken_0x430b88 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x430B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B88u;
        // 0x430b8c: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430b88) {
            ctx->pc = 0x430968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430968;
        }
    }
    ctx->pc = 0x430B90u;
label_430b90:
    // 0x430b90: 0x260602d  daddu       $t4, $s3, $zero
    ctx->pc = 0x430b90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_430b94:
    // 0x430b94: 0x195102a  slt         $v0, $t4, $s5
    ctx->pc = 0x430b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_430b98:
    // 0x430b98: 0x1440ff2d  bnez        $v0, . + 4 + (-0xD3 << 2)
label_430b9c:
    if (ctx->pc == 0x430B9Cu) {
        ctx->pc = 0x430B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B98u;
        // 0x430b9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430BA0u;
        goto label_430ba0;
    }
    ctx->pc = 0x430B98u;
    {
        const bool branch_taken_0x430b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430B98u;
        // 0x430b9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430b98) {
            ctx->pc = 0x430850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430850;
        }
    }
    ctx->pc = 0x430BA0u;
label_430ba0:
    // 0x430ba0: 0x7bb00890  lq          $s0, 0x890($sp)
    ctx->pc = 0x430ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_430ba4:
    // 0x430ba4: 0x7bb10880  lq          $s1, 0x880($sp)
    ctx->pc = 0x430ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_430ba8:
    // 0x430ba8: 0x7bb20870  lq          $s2, 0x870($sp)
    ctx->pc = 0x430ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_430bac:
    // 0x430bac: 0x7bb30860  lq          $s3, 0x860($sp)
    ctx->pc = 0x430bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_430bb0:
    // 0x430bb0: 0x7bb40850  lq          $s4, 0x850($sp)
    ctx->pc = 0x430bb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_430bb4:
    // 0x430bb4: 0x7bb50840  lq          $s5, 0x840($sp)
    ctx->pc = 0x430bb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
label_430bb8:
    // 0x430bb8: 0x3e00008  jr          $ra
label_430bbc:
    if (ctx->pc == 0x430BBCu) {
        ctx->pc = 0x430BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430BB8u;
        // 0x430bbc: 0x27bd08a0  addiu       $sp, $sp, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430BC0u;
        goto label_430bc0;
    }
    ctx->pc = 0x430BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430BB8u;
        // 0x430bbc: 0x27bd08a0  addiu       $sp, $sp, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430BC0u;
label_430bc0:
    // 0x430bc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x430bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_430bc4:
    // 0x430bc4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x430bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_430bc8:
    // 0x430bc8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x430bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_430bcc:
    // 0x430bcc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x430bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_430bd0:
    // 0x430bd0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x430bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_430bd4:
    // 0x430bd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x430bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_430bd8:
    // 0x430bd8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x430bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_430bdc:
    // 0x430bdc: 0x3203ff00  andi        $v1, $s0, 0xFF00
    ctx->pc = 0x430bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
label_430be0:
    // 0x430be0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x430be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_430be4:
    // 0x430be4: 0x39202  srl         $s2, $v1, 8
    ctx->pc = 0x430be4u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_430be8:
    // 0x430be8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x430be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_430bec:
    // 0x430bec: 0x321000fb  andi        $s0, $s0, 0xFB
    ctx->pc = 0x430becu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)251);
label_430bf0:
    // 0x430bf0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x430bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_430bf4:
    // 0x430bf4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x430bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_430bf8:
    // 0x430bf8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x430bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_430bfc:
    // 0x430bfc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x430bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_430c00:
    // 0x430c00: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x430c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_430c04:
    // 0x430c04: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x430c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_430c08:
    // 0x430c08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x430c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_430c0c:
    // 0x430c0c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_430c10:
    if (ctx->pc == 0x430C10u) {
        ctx->pc = 0x430C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C0Cu;
        // 0x430c10: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C14u;
        goto label_430c14;
    }
    ctx->pc = 0x430C0Cu;
    {
        const bool branch_taken_0x430c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x430C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C0Cu;
        // 0x430c10: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c0c) {
            ctx->pc = 0x430C44u;
            goto label_430c44;
        }
    }
    ctx->pc = 0x430C14u;
label_430c14:
    // 0x430c14: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x430c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_430c18:
    // 0x430c18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_430c1c:
    if (ctx->pc == 0x430C1Cu) {
        ctx->pc = 0x430C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C18u;
        // 0x430c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C20u;
        goto label_430c20;
    }
    ctx->pc = 0x430C18u;
    {
        const bool branch_taken_0x430c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C18u;
        // 0x430c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c18) {
            ctx->pc = 0x430C30u;
            goto label_430c30;
        }
    }
    ctx->pc = 0x430C20u;
label_430c20:
    // 0x430c20: 0x50620139  beql        $v1, $v0, . + 4 + (0x139 << 2)
label_430c24:
    if (ctx->pc == 0x430C24u) {
        ctx->pc = 0x430C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C20u;
        // 0x430c24: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C28u;
        goto label_430c28;
    }
    ctx->pc = 0x430C20u;
    {
        const bool branch_taken_0x430c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x430c20) {
            ctx->pc = 0x430C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430C20u;
            // 0x430c24: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431108u;
            goto label_431108;
        }
    }
    ctx->pc = 0x430C28u;
label_430c28:
    // 0x430c28: 0x1000013d  b           . + 4 + (0x13D << 2)
label_430c2c:
    if (ctx->pc == 0x430C2Cu) {
        ctx->pc = 0x430C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C28u;
        // 0x430c2c: 0x8f83beb8  lw          $v1, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C30u;
        goto label_430c30;
    }
    ctx->pc = 0x430C28u;
    {
        const bool branch_taken_0x430c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C28u;
        // 0x430c2c: 0x8f83beb8  lw          $v1, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c28) {
            ctx->pc = 0x431120u;
            goto label_431120;
        }
    }
    ctx->pc = 0x430C30u;
label_430c30:
    // 0x430c30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x430c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_430c34:
    // 0x430c34: 0x10620092  beq         $v1, $v0, . + 4 + (0x92 << 2)
label_430c38:
    if (ctx->pc == 0x430C38u) {
        ctx->pc = 0x430C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C34u;
        // 0x430c38: 0x8f83beb8  lw          $v1, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C3Cu;
        goto label_430c3c;
    }
    ctx->pc = 0x430C34u;
    {
        const bool branch_taken_0x430c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x430C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C34u;
        // 0x430c38: 0x8f83beb8  lw          $v1, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c34) {
            ctx->pc = 0x430E80u;
            goto label_430e80;
        }
    }
    ctx->pc = 0x430C3Cu;
label_430c3c:
    // 0x430c3c: 0x10000139  b           . + 4 + (0x139 << 2)
label_430c40:
    if (ctx->pc == 0x430C40u) {
        ctx->pc = 0x430C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C3Cu;
        // 0x430c40: 0x2239821  addu        $s3, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C44u;
        goto label_430c44;
    }
    ctx->pc = 0x430C3Cu;
    {
        const bool branch_taken_0x430c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C3Cu;
        // 0x430c40: 0x2239821  addu        $s3, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c3c) {
            ctx->pc = 0x431124u;
            goto label_431124;
        }
    }
    ctx->pc = 0x430C44u;
label_430c44:
    // 0x430c44: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x430c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_430c48:
    // 0x430c48: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x430c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_430c4c:
    // 0x430c4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_430c50:
    if (ctx->pc == 0x430C50u) {
        ctx->pc = 0x430C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C4Cu;
        // 0x430c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C54u;
        goto label_430c54;
    }
    ctx->pc = 0x430C4Cu;
    {
        const bool branch_taken_0x430c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C4Cu;
        // 0x430c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c4c) {
            ctx->pc = 0x430C70u;
            goto label_430c70;
        }
    }
    ctx->pc = 0x430C54u;
label_430c54:
    // 0x430c54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x430c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_430c58:
    // 0x430c58: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x430c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_430c5c:
    // 0x430c5c: 0xc1035f6  jal         func_40D7D8
label_430c60:
    if (ctx->pc == 0x430C60u) {
        ctx->pc = 0x430C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C5Cu;
        // 0x430c60: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C64u;
        goto label_430c64;
    }
    ctx->pc = 0x430C5Cu;
    SET_GPR_U32(ctx, 31, 0x430C64u);
    ctx->pc = 0x430C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430C5Cu;
    // 0x430c60: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x430C5Cu, 0x430C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430C64u;
label_430c64:
    // 0x430c64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x430c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_430c68:
    // 0x430c68: 0x10000139  b           . + 4 + (0x139 << 2)
label_430c6c:
    if (ctx->pc == 0x430C6Cu) {
        ctx->pc = 0x430C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C68u;
        // 0x430c6c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C70u;
        goto label_430c70;
    }
    ctx->pc = 0x430C68u;
    {
        const bool branch_taken_0x430c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C68u;
        // 0x430c6c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c68) {
            ctx->pc = 0x431150u;
            goto label_431150;
        }
    }
    ctx->pc = 0x430C70u;
label_430c70:
    // 0x430c70: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
label_430c74:
    if (ctx->pc == 0x430C74u) {
        ctx->pc = 0x430C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C70u;
        // 0x430c74: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C78u;
        goto label_430c78;
    }
    ctx->pc = 0x430C70u;
    {
        const bool branch_taken_0x430c70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x430c70) {
            ctx->pc = 0x430C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430C70u;
            // 0x430c74: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430C98u;
            goto label_430c98;
        }
    }
    ctx->pc = 0x430C78u;
label_430c78:
    // 0x430c78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x430c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_430c7c:
    // 0x430c7c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x430c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_430c80:
    // 0x430c80: 0xc1035f6  jal         func_40D7D8
label_430c84:
    if (ctx->pc == 0x430C84u) {
        ctx->pc = 0x430C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C80u;
        // 0x430c84: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C88u;
        goto label_430c88;
    }
    ctx->pc = 0x430C80u;
    SET_GPR_U32(ctx, 31, 0x430C88u);
    ctx->pc = 0x430C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430C80u;
    // 0x430c84: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x430C80u, 0x430C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430C88u;
label_430c88:
    // 0x430c88: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x430c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_430c8c:
    // 0x430c8c: 0x10000130  b           . + 4 + (0x130 << 2)
label_430c90:
    if (ctx->pc == 0x430C90u) {
        ctx->pc = 0x430C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C8Cu;
        // 0x430c90: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430C94u;
        goto label_430c94;
    }
    ctx->pc = 0x430C8Cu;
    {
        const bool branch_taken_0x430c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C8Cu;
        // 0x430c90: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c8c) {
            ctx->pc = 0x431150u;
            goto label_431150;
        }
    }
    ctx->pc = 0x430C94u;
label_430c94:
    // 0x430c94: 0x0  nop
    ctx->pc = 0x430c94u;
    // NOP
label_430c98:
    // 0x430c98: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_430c9c:
    if (ctx->pc == 0x430C9Cu) {
        ctx->pc = 0x430C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C98u;
        // 0x430c9c: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430CA0u;
        goto label_430ca0;
    }
    ctx->pc = 0x430C98u;
    {
        const bool branch_taken_0x430c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430C98u;
        // 0x430c9c: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430c98) {
            ctx->pc = 0x430D3Cu;
            goto label_430d3c;
        }
    }
    ctx->pc = 0x430CA0u;
label_430ca0:
    // 0x430ca0: 0x144001ef  bnez        $v0, . + 4 + (0x1EF << 2)
label_430ca4:
    if (ctx->pc == 0x430CA4u) {
        ctx->pc = 0x430CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430CA0u;
        // 0x430ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430CA8u;
        goto label_430ca8;
    }
    ctx->pc = 0x430CA0u;
    {
        const bool branch_taken_0x430ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430CA0u;
        // 0x430ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430ca0) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x430CA8u;
label_430ca8:
    // 0x430ca8: 0xc10a024  jal         func_428090
label_430cac:
    if (ctx->pc == 0x430CACu) {
        ctx->pc = 0x430CB0u;
        goto label_430cb0;
    }
    ctx->pc = 0x430CA8u;
    SET_GPR_U32(ctx, 31, 0x430CB0u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x430CA8u, 0x430CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430CB0u;
label_430cb0:
    // 0x430cb0: 0xc10a024  jal         func_428090
label_430cb4:
    if (ctx->pc == 0x430CB4u) {
        ctx->pc = 0x430CB8u;
        goto label_430cb8;
    }
    ctx->pc = 0x430CB0u;
    SET_GPR_U32(ctx, 31, 0x430CB8u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x430CB0u, 0x430CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430CB8u;
label_430cb8:
    // 0x430cb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x430cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430cbc:
    // 0x430cbc: 0xc0bf252  jal         func_2FC948
label_430cc0:
    if (ctx->pc == 0x430CC0u) {
        ctx->pc = 0x430CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430CBCu;
        // 0x430cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430CC4u;
        goto label_430cc4;
    }
    ctx->pc = 0x430CBCu;
    SET_GPR_U32(ctx, 31, 0x430CC4u);
    ctx->pc = 0x430CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430CBCu;
    // 0x430cc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x430CBCu, 0x430CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430CC4u;
label_430cc4:
    // 0x430cc4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x430cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_430cc8:
    // 0x430cc8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x430cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_430ccc:
    // 0x430ccc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x430cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_430cd0:
    // 0x430cd0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x430cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_430cd4:
    // 0x430cd4: 0x8e340010  lw          $s4, 0x10($s1)
    ctx->pc = 0x430cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_430cd8:
    // 0x430cd8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x430cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_430cdc:
    // 0x430cdc: 0x8636001e  lh          $s6, 0x1E($s1)
    ctx->pc = 0x430cdcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_430ce0:
    // 0x430ce0: 0x8e350004  lw          $s5, 0x4($s1)
    ctx->pc = 0x430ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_430ce4:
    // 0x430ce4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x430ce4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_430ce8:
    // 0x430ce8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x430ce8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_430cec:
    // 0x430cec: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_430cf0:
    if (ctx->pc == 0x430CF0u) {
        ctx->pc = 0x430CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430CECu;
        // 0x430cf0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430CF4u;
        goto label_430cf4;
    }
    ctx->pc = 0x430CECu;
    {
        const bool branch_taken_0x430cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x430cec) {
            ctx->pc = 0x430CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430CECu;
            // 0x430cf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x430CF4u;
            goto label_430cf4;
        }
    }
    ctx->pc = 0x430CF4u;
label_430cf4:
    // 0x430cf4: 0x1812  mflo        $v1
    ctx->pc = 0x430cf4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_430cf8:
    // 0x430cf8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x430cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_430cfc:
    // 0x430cfc: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x430cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_430d00:
    // 0x430d00: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_430d04:
    if (ctx->pc == 0x430D04u) {
        ctx->pc = 0x430D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D00u;
        // 0x430d04: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x430D08u;
        goto label_430d08;
    }
    ctx->pc = 0x430D00u;
    {
        const bool branch_taken_0x430d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D00u;
        // 0x430d04: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x430d00) {
            ctx->pc = 0x430D44u;
            goto label_430d44;
        }
    }
    ctx->pc = 0x430D08u;
label_430d08:
    // 0x430d08: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x430d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_430d0c:
    // 0x430d0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_430d10:
    if (ctx->pc == 0x430D10u) {
        ctx->pc = 0x430D14u;
        goto label_430d14;
    }
    ctx->pc = 0x430D0Cu;
    {
        const bool branch_taken_0x430d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430d0c) {
            ctx->pc = 0x430D34u;
            goto label_430d34;
        }
    }
    ctx->pc = 0x430D14u;
label_430d14:
    // 0x430d14: 0x42023  negu        $a0, $a0
    ctx->pc = 0x430d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_430d18:
    // 0x430d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x430d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_430d1c:
    // 0x430d1c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x430d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_430d20:
    // 0x430d20: 0x0  nop
    ctx->pc = 0x430d20u;
    // NOP
label_430d24:
    // 0x430d24: 0x0  nop
    ctx->pc = 0x430d24u;
    // NOP
label_430d28:
    // 0x430d28: 0x0  nop
    ctx->pc = 0x430d28u;
    // NOP
label_430d2c:
    // 0x430d2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_430d30:
    if (ctx->pc == 0x430D30u) {
        ctx->pc = 0x430D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D2Cu;
        // 0x430d30: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430D34u;
        goto label_430d34;
    }
    ctx->pc = 0x430D2Cu;
    {
        const bool branch_taken_0x430d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D2Cu;
        // 0x430d30: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430d2c) {
            ctx->pc = 0x430D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430d18;
        }
    }
    ctx->pc = 0x430D34u;
label_430d34:
    // 0x430d34: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_430d38:
    if (ctx->pc == 0x430D38u) {
        ctx->pc = 0x430D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D34u;
        // 0x430d38: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430D3Cu;
        goto label_430d3c;
    }
    ctx->pc = 0x430D34u;
    {
        const bool branch_taken_0x430d34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x430d34) {
            ctx->pc = 0x430D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430D34u;
            // 0x430d38: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430D4Cu;
            goto label_430d4c;
        }
    }
    ctx->pc = 0x430D3Cu;
label_430d3c:
    // 0x430d3c: 0x100001c8  b           . + 4 + (0x1C8 << 2)
label_430d40:
    if (ctx->pc == 0x430D40u) {
        ctx->pc = 0x430D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D3Cu;
        // 0x430d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430D44u;
        goto label_430d44;
    }
    ctx->pc = 0x430D3Cu;
    {
        const bool branch_taken_0x430d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D3Cu;
        // 0x430d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430d3c) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x430D44u;
label_430d44:
    // 0x430d44: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x430d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_430d48:
    // 0x430d48: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x430d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_430d4c:
    // 0x430d4c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x430d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_430d50:
    // 0x430d50: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x430d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_430d54:
    // 0x430d54: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x430d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_430d58:
    // 0x430d58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x430d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_430d5c:
    // 0x430d5c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x430d5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_430d60:
    // 0x430d60: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x430d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_430d64:
    // 0x430d64: 0xc0bf916  jal         func_2FE458
label_430d68:
    if (ctx->pc == 0x430D68u) {
        ctx->pc = 0x430D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D64u;
        // 0x430d68: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430D6Cu;
        goto label_430d6c;
    }
    ctx->pc = 0x430D64u;
    SET_GPR_U32(ctx, 31, 0x430D6Cu);
    ctx->pc = 0x430D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430D64u;
    // 0x430d68: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x430D64u, 0x430D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430D6Cu;
label_430d6c:
    // 0x430d6c: 0x128000d9  beqz        $s4, . + 4 + (0xD9 << 2)
label_430d70:
    if (ctx->pc == 0x430D70u) {
        ctx->pc = 0x430D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D6Cu;
        // 0x430d70: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430D74u;
        goto label_430d74;
    }
    ctx->pc = 0x430D6Cu;
    {
        const bool branch_taken_0x430d6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x430D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430D6Cu;
        // 0x430d70: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430d6c) {
            ctx->pc = 0x4310D4u;
            goto label_4310d4;
        }
    }
    ctx->pc = 0x430D74u;
label_430d74:
    // 0x430d74: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x430d74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_430d78:
    // 0x430d78: 0x24573fc0  addiu       $s7, $v0, 0x3FC0
    ctx->pc = 0x430d78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16320));
label_430d7c:
    // 0x430d7c: 0x0  nop
    ctx->pc = 0x430d7cu;
    // NOP
label_430d80:
    // 0x430d80: 0xdf86ae40  ld          $a2, -0x51C0($gp)
    ctx->pc = 0x430d80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
label_430d84:
    // 0x430d84: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x430d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_430d88:
    // 0x430d88: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x430d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_430d8c:
    // 0x430d8c: 0x9628001c  lhu         $t0, 0x1C($s1)
    ctx->pc = 0x430d8cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_430d90:
    // 0x430d90: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x430d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_430d94:
    // 0x430d94: 0x30c501ff  andi        $a1, $a2, 0x1FF
    ctx->pc = 0x430d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
label_430d98:
    // 0x430d98: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x430d98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_430d9c:
    // 0x430d9c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x430d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_430da0:
    // 0x430da0: 0x6343b  dsra        $a2, $a2, 16
    ctx->pc = 0x430da0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
label_430da4:
    // 0x430da4: 0x73e3b  dsra        $a3, $a3, 24
    ctx->pc = 0x430da4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> 24);
label_430da8:
    // 0x430da8: 0x125c00  sll         $t3, $s2, 16
    ctx->pc = 0x430da8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_430dac:
    // 0x430dac: 0x862a000c  lh          $t2, 0xC($s1)
    ctx->pc = 0x430dacu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_430db0:
    // 0x430db0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x430db0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_430db4:
    // 0x430db4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x430db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_430db8:
    // 0x430db8: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x430db8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
label_430dbc:
    // 0x430dbc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x430dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_430dc0:
    // 0x430dc0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x430dc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_430dc4:
    // 0x430dc4: 0x310807ff  andi        $t0, $t0, 0x7FF
    ctx->pc = 0x430dc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
label_430dc8:
    // 0x430dc8: 0xc0bf318  jal         func_2FCC60
label_430dcc:
    if (ctx->pc == 0x430DCCu) {
        ctx->pc = 0x430DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430DC8u;
        // 0x430dcc: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430DD0u;
        goto label_430dd0;
    }
    ctx->pc = 0x430DC8u;
    SET_GPR_U32(ctx, 31, 0x430DD0u);
    ctx->pc = 0x430DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430DC8u;
    // 0x430dcc: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCC60u, 0x430DC8u, 0x430DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430DD0u;
label_430dd0:
    // 0x430dd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x430dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_430dd4:
    // 0x430dd4: 0xc0bf916  jal         func_2FE458
label_430dd8:
    if (ctx->pc == 0x430DD8u) {
        ctx->pc = 0x430DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430DD4u;
        // 0x430dd8: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430DDCu;
        goto label_430ddc;
    }
    ctx->pc = 0x430DD4u;
    SET_GPR_U32(ctx, 31, 0x430DDCu);
    ctx->pc = 0x430DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430DD4u;
    // 0x430dd8: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x430DD4u, 0x430DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430DDCu;
label_430ddc:
    // 0x430ddc: 0x0  nop
    ctx->pc = 0x430ddcu;
    // NOP
label_430de0:
    // 0x430de0: 0xc0be2fc  jal         func_2F8BF0
label_430de4:
    if (ctx->pc == 0x430DE4u) {
        ctx->pc = 0x430DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430DE0u;
        // 0x430de4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430DE8u;
        goto label_430de8;
    }
    ctx->pc = 0x430DE0u;
    SET_GPR_U32(ctx, 31, 0x430DE8u);
    ctx->pc = 0x430DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430DE0u;
    // 0x430de4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8BF0u, 0x430DE0u, 0x430DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430DE8u;
label_430de8:
    // 0x430de8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x430de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_430dec:
    // 0x430dec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x430decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_430df0:
    // 0x430df0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_430df4:
    if (ctx->pc == 0x430DF4u) {
        ctx->pc = 0x430DF8u;
        goto label_430df8;
    }
    ctx->pc = 0x430DF0u;
    {
        const bool branch_taken_0x430df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x430df0) {
            ctx->pc = 0x430DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430de0;
        }
    }
    ctx->pc = 0x430DF8u;
label_430df8:
    // 0x430df8: 0xc0be2fc  jal         func_2F8BF0
label_430dfc:
    if (ctx->pc == 0x430DFCu) {
        ctx->pc = 0x430DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430DF8u;
        // 0x430dfc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E00u;
        goto label_430e00;
    }
    ctx->pc = 0x430DF8u;
    SET_GPR_U32(ctx, 31, 0x430E00u);
    ctx->pc = 0x430DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430DF8u;
    // 0x430dfc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8BF0u, 0x430DF8u, 0x430E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430E00u;
label_430e00:
    // 0x430e00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x430e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_430e04:
    // 0x430e04: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x430e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_430e08:
    // 0x430e08: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_430e0c:
    if (ctx->pc == 0x430E0Cu) {
        ctx->pc = 0x430E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E08u;
        // 0x430e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E10u;
        goto label_430e10;
    }
    ctx->pc = 0x430E08u;
    {
        const bool branch_taken_0x430e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E08u;
        // 0x430e0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e08) {
            ctx->pc = 0x430DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430df8;
        }
    }
    ctx->pc = 0x430E10u;
label_430e10:
    // 0x430e10: 0xc0bf252  jal         func_2FC948
label_430e14:
    if (ctx->pc == 0x430E14u) {
        ctx->pc = 0x430E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E10u;
        // 0x430e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E18u;
        goto label_430e18;
    }
    ctx->pc = 0x430E10u;
    SET_GPR_U32(ctx, 31, 0x430E18u);
    ctx->pc = 0x430E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430E10u;
    // 0x430e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x430E10u, 0x430E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430E18u;
label_430e18:
    // 0x430e18: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x430e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_430e1c:
    // 0x430e1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x430e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_430e20:
    // 0x430e20: 0x24733fc0  addiu       $s3, $v1, 0x3FC0
    ctx->pc = 0x430e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16320));
label_430e24:
    // 0x430e24: 0xc0bf368  jal         func_2FCDA0
label_430e28:
    if (ctx->pc == 0x430E28u) {
        ctx->pc = 0x430E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E24u;
        // 0x430e28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E2Cu;
        goto label_430e2c;
    }
    ctx->pc = 0x430E24u;
    SET_GPR_U32(ctx, 31, 0x430E2Cu);
    ctx->pc = 0x430E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430E24u;
    // 0x430e28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCDA0u, 0x430E24u, 0x430E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430E2Cu;
label_430e2c:
    // 0x430e2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x430e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_430e30:
    // 0x430e30: 0x561e0007  bnel        $s0, $fp, . + 4 + (0x7 << 2)
label_430e34:
    if (ctx->pc == 0x430E34u) {
        ctx->pc = 0x430E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E30u;
        // 0x430e34: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E38u;
        goto label_430e38;
    }
    ctx->pc = 0x430E30u;
    {
        const bool branch_taken_0x430e30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        if (branch_taken_0x430e30) {
            ctx->pc = 0x430E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430E30u;
            // 0x430e34: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430E50u;
            goto label_430e50;
        }
    }
    ctx->pc = 0x430E38u;
label_430e38:
    // 0x430e38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x430e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_430e3c:
    // 0x430e3c: 0xc0bf368  jal         func_2FCDA0
label_430e40:
    if (ctx->pc == 0x430E40u) {
        ctx->pc = 0x430E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E3Cu;
        // 0x430e40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E44u;
        goto label_430e44;
    }
    ctx->pc = 0x430E3Cu;
    SET_GPR_U32(ctx, 31, 0x430E44u);
    ctx->pc = 0x430E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430E3Cu;
    // 0x430e40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCDA0u, 0x430E3Cu, 0x430E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430E44u;
label_430e44:
    // 0x430e44: 0x10500186  beq         $v0, $s0, . + 4 + (0x186 << 2)
label_430e48:
    if (ctx->pc == 0x430E48u) {
        ctx->pc = 0x430E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E44u;
        // 0x430e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E4Cu;
        goto label_430e4c;
    }
    ctx->pc = 0x430E44u;
    {
        const bool branch_taken_0x430e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x430E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E44u;
        // 0x430e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e44) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x430E4Cu;
label_430e4c:
    // 0x430e4c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x430e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_430e50:
    // 0x430e50: 0x292a023  subu        $s4, $s4, $s2
    ctx->pc = 0x430e50u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_430e54:
    // 0x430e54: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x430e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_430e58:
    // 0x430e58: 0x2d2b021  addu        $s6, $s6, $s2
    ctx->pc = 0x430e58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_430e5c:
    // 0x430e5c: 0x292202a  slt         $a0, $s4, $s2
    ctx->pc = 0x430e5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_430e60:
    // 0x430e60: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x430e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_430e64:
    // 0x430e64: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x430e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_430e68:
    // 0x430e68: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x430e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_430e6c:
    // 0x430e6c: 0x284900b  movn        $s2, $s4, $a0
    ctx->pc = 0x430e6cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 20));
label_430e70:
    // 0x430e70: 0x1680ffc3  bnez        $s4, . + 4 + (-0x3D << 2)
label_430e74:
    if (ctx->pc == 0x430E74u) {
        ctx->pc = 0x430E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E70u;
        // 0x430e74: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E78u;
        goto label_430e78;
    }
    ctx->pc = 0x430E70u;
    {
        const bool branch_taken_0x430e70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x430E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E70u;
        // 0x430e74: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e70) {
            ctx->pc = 0x430D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430d80;
        }
    }
    ctx->pc = 0x430E78u;
label_430e78:
    // 0x430e78: 0x10000097  b           . + 4 + (0x97 << 2)
label_430e7c:
    if (ctx->pc == 0x430E7Cu) {
        ctx->pc = 0x430E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E78u;
        // 0x430e7c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E80u;
        goto label_430e80;
    }
    ctx->pc = 0x430E78u;
    {
        const bool branch_taken_0x430e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E78u;
        // 0x430e7c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e78) {
            ctx->pc = 0x4310D8u;
            goto label_4310d8;
        }
    }
    ctx->pc = 0x430E80u;
label_430e80:
    // 0x430e80: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x430e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
label_430e84:
    // 0x430e84: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x430e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_430e88:
    // 0x430e88: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_430e8c:
    if (ctx->pc == 0x430E8Cu) {
        ctx->pc = 0x430E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E88u;
        // 0x430e8c: 0x223f021  addu        $fp, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430E90u;
        goto label_430e90;
    }
    ctx->pc = 0x430E88u;
    {
        const bool branch_taken_0x430e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E88u;
        // 0x430e8c: 0x223f021  addu        $fp, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e88) {
            ctx->pc = 0x430D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430d3c;
        }
    }
    ctx->pc = 0x430E90u;
label_430e90:
    // 0x430e90: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x430e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_430e94:
    // 0x430e94: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x430e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_430e98:
    // 0x430e98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_430e9c:
    if (ctx->pc == 0x430E9Cu) {
        ctx->pc = 0x430E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E98u;
        // 0x430e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430EA0u;
        goto label_430ea0;
    }
    ctx->pc = 0x430E98u;
    {
        const bool branch_taken_0x430e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E98u;
        // 0x430e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e98) {
            ctx->pc = 0x430EC0u;
            goto label_430ec0;
        }
    }
    ctx->pc = 0x430EA0u;
label_430ea0:
    // 0x430ea0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x430ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_430ea4:
    // 0x430ea4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x430ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_430ea8:
    // 0x430ea8: 0xc1035f6  jal         func_40D7D8
label_430eac:
    if (ctx->pc == 0x430EACu) {
        ctx->pc = 0x430EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EA8u;
        // 0x430eac: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430EB0u;
        goto label_430eb0;
    }
    ctx->pc = 0x430EA8u;
    SET_GPR_U32(ctx, 31, 0x430EB0u);
    ctx->pc = 0x430EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430EA8u;
    // 0x430eac: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x430EA8u, 0x430EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430EB0u;
label_430eb0:
    // 0x430eb0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x430eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_430eb4:
    // 0x430eb4: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_430eb8:
    if (ctx->pc == 0x430EB8u) {
        ctx->pc = 0x430EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EB4u;
        // 0x430eb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430EBCu;
        goto label_430ebc;
    }
    ctx->pc = 0x430EB4u;
    {
        const bool branch_taken_0x430eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EB4u;
        // 0x430eb8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430eb4) {
            ctx->pc = 0x431150u;
            goto label_431150;
        }
    }
    ctx->pc = 0x430EBCu;
label_430ebc:
    // 0x430ebc: 0x0  nop
    ctx->pc = 0x430ebcu;
    // NOP
label_430ec0:
    // 0x430ec0: 0x8fc20058  lw          $v0, 0x58($fp)
    ctx->pc = 0x430ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
label_430ec4:
    // 0x430ec4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_430ec8:
    if (ctx->pc == 0x430EC8u) {
        ctx->pc = 0x430EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EC4u;
        // 0x430ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430ECCu;
        goto label_430ecc;
    }
    ctx->pc = 0x430EC4u;
    {
        const bool branch_taken_0x430ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EC4u;
        // 0x430ec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430ec4) {
            ctx->pc = 0x430EE8u;
            goto label_430ee8;
        }
    }
    ctx->pc = 0x430ECCu;
label_430ecc:
    // 0x430ecc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x430eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_430ed0:
    // 0x430ed0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x430ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_430ed4:
    // 0x430ed4: 0xc1035f6  jal         func_40D7D8
label_430ed8:
    if (ctx->pc == 0x430ED8u) {
        ctx->pc = 0x430ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430ED4u;
        // 0x430ed8: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430EDCu;
        goto label_430edc;
    }
    ctx->pc = 0x430ED4u;
    SET_GPR_U32(ctx, 31, 0x430EDCu);
    ctx->pc = 0x430ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430ED4u;
    // 0x430ed8: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x430ED4u, 0x430EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430EDCu;
label_430edc:
    // 0x430edc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x430edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_430ee0:
    // 0x430ee0: 0x1000009b  b           . + 4 + (0x9B << 2)
label_430ee4:
    if (ctx->pc == 0x430EE4u) {
        ctx->pc = 0x430EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EE0u;
        // 0x430ee4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430EE8u;
        goto label_430ee8;
    }
    ctx->pc = 0x430EE0u;
    {
        const bool branch_taken_0x430ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EE0u;
        // 0x430ee4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430ee0) {
            ctx->pc = 0x431150u;
            goto label_431150;
        }
    }
    ctx->pc = 0x430EE8u;
label_430ee8:
    // 0x430ee8: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
label_430eec:
    if (ctx->pc == 0x430EECu) {
        ctx->pc = 0x430EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EE8u;
        // 0x430eec: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430EF0u;
        goto label_430ef0;
    }
    ctx->pc = 0x430EE8u;
    {
        const bool branch_taken_0x430ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x430ee8) {
            ctx->pc = 0x430EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430EE8u;
            // 0x430eec: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430F10u;
            goto label_430f10;
        }
    }
    ctx->pc = 0x430EF0u;
label_430ef0:
    // 0x430ef0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x430ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_430ef4:
    // 0x430ef4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x430ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_430ef8:
    // 0x430ef8: 0xc1035f6  jal         func_40D7D8
label_430efc:
    if (ctx->pc == 0x430EFCu) {
        ctx->pc = 0x430EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EF8u;
        // 0x430efc: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430F00u;
        goto label_430f00;
    }
    ctx->pc = 0x430EF8u;
    SET_GPR_U32(ctx, 31, 0x430F00u);
    ctx->pc = 0x430EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430EF8u;
    // 0x430efc: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x430EF8u, 0x430F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430F00u;
label_430f00:
    // 0x430f00: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x430f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_430f04:
    // 0x430f04: 0x10000092  b           . + 4 + (0x92 << 2)
label_430f08:
    if (ctx->pc == 0x430F08u) {
        ctx->pc = 0x430F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F04u;
        // 0x430f08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430F0Cu;
        goto label_430f0c;
    }
    ctx->pc = 0x430F04u;
    {
        const bool branch_taken_0x430f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F04u;
        // 0x430f08: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430f04) {
            ctx->pc = 0x431150u;
            goto label_431150;
        }
    }
    ctx->pc = 0x430F0Cu;
label_430f0c:
    // 0x430f0c: 0x0  nop
    ctx->pc = 0x430f0cu;
    // NOP
label_430f10:
    // 0x430f10: 0x1040ff8a  beqz        $v0, . + 4 + (-0x76 << 2)
label_430f14:
    if (ctx->pc == 0x430F14u) {
        ctx->pc = 0x430F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F10u;
        // 0x430f14: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430F18u;
        goto label_430f18;
    }
    ctx->pc = 0x430F10u;
    {
        const bool branch_taken_0x430f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F10u;
        // 0x430f14: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430f10) {
            ctx->pc = 0x430D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430d3c;
        }
    }
    ctx->pc = 0x430F18u;
label_430f18:
    // 0x430f18: 0x14400151  bnez        $v0, . + 4 + (0x151 << 2)
label_430f1c:
    if (ctx->pc == 0x430F1Cu) {
        ctx->pc = 0x430F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F18u;
        // 0x430f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430F20u;
        goto label_430f20;
    }
    ctx->pc = 0x430F18u;
    {
        const bool branch_taken_0x430f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F18u;
        // 0x430f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430f18) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x430F20u;
label_430f20:
    // 0x430f20: 0xc10a024  jal         func_428090
label_430f24:
    if (ctx->pc == 0x430F24u) {
        ctx->pc = 0x430F28u;
        goto label_430f28;
    }
    ctx->pc = 0x430F20u;
    SET_GPR_U32(ctx, 31, 0x430F28u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x430F20u, 0x430F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430F28u;
label_430f28:
    // 0x430f28: 0xc10a024  jal         func_428090
label_430f2c:
    if (ctx->pc == 0x430F2Cu) {
        ctx->pc = 0x430F30u;
        goto label_430f30;
    }
    ctx->pc = 0x430F28u;
    SET_GPR_U32(ctx, 31, 0x430F30u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x430F28u, 0x430F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430F30u;
label_430f30:
    // 0x430f30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x430f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_430f34:
    // 0x430f34: 0xc0bf252  jal         func_2FC948
label_430f38:
    if (ctx->pc == 0x430F38u) {
        ctx->pc = 0x430F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F34u;
        // 0x430f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430F3Cu;
        goto label_430f3c;
    }
    ctx->pc = 0x430F34u;
    SET_GPR_U32(ctx, 31, 0x430F3Cu);
    ctx->pc = 0x430F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430F34u;
    // 0x430f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x430F34u, 0x430F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430F3Cu;
label_430f3c:
    // 0x430f3c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x430f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_430f40:
    // 0x430f40: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x430f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_430f44:
    // 0x430f44: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x430f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_430f48:
    // 0x430f48: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x430f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_430f4c:
    // 0x430f4c: 0x8e340010  lw          $s4, 0x10($s1)
    ctx->pc = 0x430f4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_430f50:
    // 0x430f50: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x430f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_430f54:
    // 0x430f54: 0x8636001e  lh          $s6, 0x1E($s1)
    ctx->pc = 0x430f54u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_430f58:
    // 0x430f58: 0x8e350004  lw          $s5, 0x4($s1)
    ctx->pc = 0x430f58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_430f5c:
    // 0x430f5c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x430f5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_430f60:
    // 0x430f60: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x430f60u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_430f64:
    // 0x430f64: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_430f68:
    if (ctx->pc == 0x430F68u) {
        ctx->pc = 0x430F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F64u;
        // 0x430f68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x430F6Cu;
        goto label_430f6c;
    }
    ctx->pc = 0x430F64u;
    {
        const bool branch_taken_0x430f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x430f64) {
            ctx->pc = 0x430F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430F64u;
            // 0x430f68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x430F6Cu;
            goto label_430f6c;
        }
    }
    ctx->pc = 0x430F6Cu;
label_430f6c:
    // 0x430f6c: 0x1812  mflo        $v1
    ctx->pc = 0x430f6cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_430f70:
    // 0x430f70: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x430f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_430f74:
    // 0x430f74: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x430f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_430f78:
    // 0x430f78: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_430f7c:
    if (ctx->pc == 0x430F7Cu) {
        ctx->pc = 0x430F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F78u;
        // 0x430f7c: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x430F80u;
        goto label_430f80;
    }
    ctx->pc = 0x430F78u;
    {
        const bool branch_taken_0x430f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F78u;
        // 0x430f7c: 0x2441818  mult        $v1, $s2, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x430f78) {
            ctx->pc = 0x430FBCu;
            goto label_430fbc;
        }
    }
    ctx->pc = 0x430F80u;
label_430f80:
    // 0x430f80: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x430f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_430f84:
    // 0x430f84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_430f88:
    if (ctx->pc == 0x430F88u) {
        ctx->pc = 0x430F8Cu;
        goto label_430f8c;
    }
    ctx->pc = 0x430F84u;
    {
        const bool branch_taken_0x430f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430f84) {
            ctx->pc = 0x430FACu;
            goto label_430fac;
        }
    }
    ctx->pc = 0x430F8Cu;
label_430f8c:
    // 0x430f8c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x430f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_430f90:
    // 0x430f90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x430f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_430f94:
    // 0x430f94: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x430f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_430f98:
    // 0x430f98: 0x0  nop
    ctx->pc = 0x430f98u;
    // NOP
label_430f9c:
    // 0x430f9c: 0x0  nop
    ctx->pc = 0x430f9cu;
    // NOP
label_430fa0:
    // 0x430fa0: 0x0  nop
    ctx->pc = 0x430fa0u;
    // NOP
label_430fa4:
    // 0x430fa4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_430fa8:
    if (ctx->pc == 0x430FA8u) {
        ctx->pc = 0x430FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FA4u;
        // 0x430fa8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430FACu;
        goto label_430fac;
    }
    ctx->pc = 0x430FA4u;
    {
        const bool branch_taken_0x430fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FA4u;
        // 0x430fa8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430fa4) {
            ctx->pc = 0x430F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430f90;
        }
    }
    ctx->pc = 0x430FACu;
label_430fac:
    // 0x430fac: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_430fb0:
    if (ctx->pc == 0x430FB0u) {
        ctx->pc = 0x430FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FACu;
        // 0x430fb0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430FB4u;
        goto label_430fb4;
    }
    ctx->pc = 0x430FACu;
    {
        const bool branch_taken_0x430fac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x430fac) {
            ctx->pc = 0x430FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430FACu;
            // 0x430fb0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430FC4u;
            goto label_430fc4;
        }
    }
    ctx->pc = 0x430FB4u;
label_430fb4:
    // 0x430fb4: 0x1000012a  b           . + 4 + (0x12A << 2)
label_430fb8:
    if (ctx->pc == 0x430FB8u) {
        ctx->pc = 0x430FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FB4u;
        // 0x430fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430FBCu;
        goto label_430fbc;
    }
    ctx->pc = 0x430FB4u;
    {
        const bool branch_taken_0x430fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FB4u;
        // 0x430fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430fb4) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x430FBCu;
label_430fbc:
    // 0x430fbc: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x430fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_430fc0:
    // 0x430fc0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x430fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_430fc4:
    // 0x430fc4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x430fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_430fc8:
    // 0x430fc8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x430fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_430fcc:
    // 0x430fcc: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x430fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_430fd0:
    // 0x430fd0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x430fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_430fd4:
    // 0x430fd4: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x430fd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_430fd8:
    // 0x430fd8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x430fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_430fdc:
    // 0x430fdc: 0xc0bf916  jal         func_2FE458
label_430fe0:
    if (ctx->pc == 0x430FE0u) {
        ctx->pc = 0x430FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FDCu;
        // 0x430fe0: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430FE4u;
        goto label_430fe4;
    }
    ctx->pc = 0x430FDCu;
    SET_GPR_U32(ctx, 31, 0x430FE4u);
    ctx->pc = 0x430FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x430FDCu;
    // 0x430fe0: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x430FDCu, 0x430FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x430FE4u;
label_430fe4:
    // 0x430fe4: 0x1280003b  beqz        $s4, . + 4 + (0x3B << 2)
label_430fe8:
    if (ctx->pc == 0x430FE8u) {
        ctx->pc = 0x430FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FE4u;
        // 0x430fe8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x430FECu;
        goto label_430fec;
    }
    ctx->pc = 0x430FE4u;
    {
        const bool branch_taken_0x430fe4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x430FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FE4u;
        // 0x430fe8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430fe4) {
            ctx->pc = 0x4310D4u;
            goto label_4310d4;
        }
    }
    ctx->pc = 0x430FECu;
label_430fec:
    // 0x430fec: 0x24573fc0  addiu       $s7, $v0, 0x3FC0
    ctx->pc = 0x430fecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16320));
label_430ff0:
    // 0x430ff0: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x430ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_430ff4:
    // 0x430ff4: 0x125c00  sll         $t3, $s2, 16
    ctx->pc = 0x430ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_430ff8:
    // 0x430ff8: 0x97c50008  lhu         $a1, 0x8($fp)
    ctx->pc = 0x430ff8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
label_430ffc:
    // 0x430ffc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x430ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_431000:
    // 0x431000: 0x63d02  srl         $a3, $a2, 20
    ctx->pc = 0x431000u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
label_431004:
    // 0x431004: 0x9628001c  lhu         $t0, 0x1C($s1)
    ctx->pc = 0x431004u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_431008:
    // 0x431008: 0x63382  srl         $a2, $a2, 14
    ctx->pc = 0x431008u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
label_43100c:
    // 0x43100c: 0x862a000c  lh          $t2, 0xC($s1)
    ctx->pc = 0x43100cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_431010:
    // 0x431010: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x431010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
label_431014:
    // 0x431014: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x431014u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
label_431018:
    // 0x431018: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x431018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_43101c:
    // 0x43101c: 0x30e7003f  andi        $a3, $a3, 0x3F
    ctx->pc = 0x43101cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
label_431020:
    // 0x431020: 0x310807ff  andi        $t0, $t0, 0x7FF
    ctx->pc = 0x431020u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
label_431024:
    // 0x431024: 0xc0bf318  jal         func_2FCC60
label_431028:
    if (ctx->pc == 0x431028u) {
        ctx->pc = 0x431028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431024u;
        // 0x431028: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43102Cu;
        goto label_43102c;
    }
    ctx->pc = 0x431024u;
    SET_GPR_U32(ctx, 31, 0x43102Cu);
    ctx->pc = 0x431028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431024u;
    // 0x431028: 0x32c907ff  andi        $t1, $s6, 0x7FF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)2047);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCC60u, 0x431024u, 0x43102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43102Cu;
label_43102c:
    // 0x43102c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x43102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_431030:
    // 0x431030: 0xc0bf916  jal         func_2FE458
label_431034:
    if (ctx->pc == 0x431034u) {
        ctx->pc = 0x431034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431030u;
        // 0x431034: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431038u;
        goto label_431038;
    }
    ctx->pc = 0x431030u;
    SET_GPR_U32(ctx, 31, 0x431038u);
    ctx->pc = 0x431034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431030u;
    // 0x431034: 0x26e50070  addiu       $a1, $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x431030u, 0x431038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431038u;
label_431038:
    // 0x431038: 0xc0be2fc  jal         func_2F8BF0
label_43103c:
    if (ctx->pc == 0x43103Cu) {
        ctx->pc = 0x43103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431038u;
        // 0x43103c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431040u;
        goto label_431040;
    }
    ctx->pc = 0x431038u;
    SET_GPR_U32(ctx, 31, 0x431040u);
    ctx->pc = 0x43103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431038u;
    // 0x43103c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8BF0u, 0x431038u, 0x431040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431040u;
label_431040:
    // 0x431040: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x431040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_431044:
    // 0x431044: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x431044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_431048:
    // 0x431048: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_43104c:
    if (ctx->pc == 0x43104Cu) {
        ctx->pc = 0x431050u;
        goto label_431050;
    }
    ctx->pc = 0x431048u;
    {
        const bool branch_taken_0x431048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x431048) {
            ctx->pc = 0x431038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431038;
        }
    }
    ctx->pc = 0x431050u;
label_431050:
    // 0x431050: 0xc0be2fc  jal         func_2F8BF0
label_431054:
    if (ctx->pc == 0x431054u) {
        ctx->pc = 0x431054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431050u;
        // 0x431054: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431058u;
        goto label_431058;
    }
    ctx->pc = 0x431050u;
    SET_GPR_U32(ctx, 31, 0x431058u);
    ctx->pc = 0x431054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431050u;
    // 0x431054: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8BF0u, 0x431050u, 0x431058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431058u;
label_431058:
    // 0x431058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x431058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43105c:
    // 0x43105c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x43105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_431060:
    // 0x431060: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_431064:
    if (ctx->pc == 0x431064u) {
        ctx->pc = 0x431064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431060u;
        // 0x431064: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431068u;
        goto label_431068;
    }
    ctx->pc = 0x431060u;
    {
        const bool branch_taken_0x431060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x431064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431060u;
        // 0x431064: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431060) {
            ctx->pc = 0x431050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431050;
        }
    }
    ctx->pc = 0x431068u;
label_431068:
    // 0x431068: 0xc0bf252  jal         func_2FC948
label_43106c:
    if (ctx->pc == 0x43106Cu) {
        ctx->pc = 0x43106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431068u;
        // 0x43106c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431070u;
        goto label_431070;
    }
    ctx->pc = 0x431068u;
    SET_GPR_U32(ctx, 31, 0x431070u);
    ctx->pc = 0x43106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431068u;
    // 0x43106c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC948u, 0x431068u, 0x431070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431070u;
label_431070:
    // 0x431070: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x431070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_431074:
    // 0x431074: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x431074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_431078:
    // 0x431078: 0x24733fc0  addiu       $s3, $v1, 0x3FC0
    ctx->pc = 0x431078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16320));
label_43107c:
    // 0x43107c: 0xc0bf368  jal         func_2FCDA0
label_431080:
    if (ctx->pc == 0x431080u) {
        ctx->pc = 0x431080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43107Cu;
        // 0x431080: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431084u;
        goto label_431084;
    }
    ctx->pc = 0x43107Cu;
    SET_GPR_U32(ctx, 31, 0x431084u);
    ctx->pc = 0x431080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43107Cu;
    // 0x431080: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCDA0u, 0x43107Cu, 0x431084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431084u;
label_431084:
    // 0x431084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x431084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_431088:
    // 0x431088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x431088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_43108c:
    // 0x43108c: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_431090:
    if (ctx->pc == 0x431090u) {
        ctx->pc = 0x431090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43108Cu;
        // 0x431090: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431094u;
        goto label_431094;
    }
    ctx->pc = 0x43108Cu;
    {
        const bool branch_taken_0x43108c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x43108c) {
            ctx->pc = 0x431090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43108Cu;
            // 0x431090: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4310ACu;
            goto label_4310ac;
        }
    }
    ctx->pc = 0x431094u;
label_431094:
    // 0x431094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x431094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_431098:
    // 0x431098: 0xc0bf368  jal         func_2FCDA0
label_43109c:
    if (ctx->pc == 0x43109Cu) {
        ctx->pc = 0x43109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431098u;
        // 0x43109c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4310A0u;
        goto label_4310a0;
    }
    ctx->pc = 0x431098u;
    SET_GPR_U32(ctx, 31, 0x4310A0u);
    ctx->pc = 0x43109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431098u;
    // 0x43109c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCDA0u, 0x431098u, 0x4310A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4310A0u;
label_4310a0:
    // 0x4310a0: 0x105000ef  beq         $v0, $s0, . + 4 + (0xEF << 2)
label_4310a4:
    if (ctx->pc == 0x4310A4u) {
        ctx->pc = 0x4310A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4310A0u;
        // 0x4310a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4310A8u;
        goto label_4310a8;
    }
    ctx->pc = 0x4310A0u;
    {
        const bool branch_taken_0x4310a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4310A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4310A0u;
        // 0x4310a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4310a0) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x4310A8u;
label_4310a8:
    // 0x4310a8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4310a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4310ac:
    // 0x4310ac: 0x292a023  subu        $s4, $s4, $s2
    ctx->pc = 0x4310acu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_4310b0:
    // 0x4310b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4310b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4310b4:
    // 0x4310b4: 0x2d2b021  addu        $s6, $s6, $s2
    ctx->pc = 0x4310b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_4310b8:
    // 0x4310b8: 0x292202a  slt         $a0, $s4, $s2
    ctx->pc = 0x4310b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_4310bc:
    // 0x4310bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4310bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4310c0:
    // 0x4310c0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x4310c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_4310c4:
    // 0x4310c4: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x4310c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4310c8:
    // 0x4310c8: 0x284900b  movn        $s2, $s4, $a0
    ctx->pc = 0x4310c8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 20));
label_4310cc:
    // 0x4310cc: 0x1680ffc8  bnez        $s4, . + 4 + (-0x38 << 2)
label_4310d0:
    if (ctx->pc == 0x4310D0u) {
        ctx->pc = 0x4310D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4310CCu;
        // 0x4310d0: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4310D4u;
        goto label_4310d4;
    }
    ctx->pc = 0x4310CCu;
    {
        const bool branch_taken_0x4310cc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4310D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4310CCu;
        // 0x4310d0: 0x75a821  addu        $s5, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4310cc) {
            ctx->pc = 0x430FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430ff0;
        }
    }
    ctx->pc = 0x4310D4u;
label_4310d4:
    // 0x4310d4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4310d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4310d8:
    // 0x4310d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4310d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4310dc:
    // 0x4310dc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4310dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4310e0:
    // 0x4310e0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4310e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4310e4:
    // 0x4310e4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x4310e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4310e8:
    // 0x4310e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x4310e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_4310ec:
    // 0x4310ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x4310ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_4310f0:
    // 0x4310f0: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4310f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_4310f4:
    // 0x4310f4: 0x92230022  lbu         $v1, 0x22($s1)
    ctx->pc = 0x4310f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_4310f8:
    // 0x4310f8: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x4310f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_4310fc:
    // 0x4310fc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4310fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_431100:
    // 0x431100: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_431104:
    if (ctx->pc == 0x431104u) {
        ctx->pc = 0x431104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431100u;
        // 0x431104: 0xa2230022  sb          $v1, 0x22($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431108u;
        goto label_431108;
    }
    ctx->pc = 0x431100u;
    {
        const bool branch_taken_0x431100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431100u;
        // 0x431104: 0xa2230022  sb          $v1, 0x22($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431100) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x431108u;
label_431108:
    // 0x431108: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x431108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_43110c:
    // 0x43110c: 0xc1035f6  jal         func_40D7D8
label_431110:
    if (ctx->pc == 0x431110u) {
        ctx->pc = 0x431110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43110Cu;
        // 0x431110: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x431114u;
        goto label_431114;
    }
    ctx->pc = 0x43110Cu;
    SET_GPR_U32(ctx, 31, 0x431114u);
    ctx->pc = 0x431110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43110Cu;
    // 0x431110: 0x3484000e  ori         $a0, $a0, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x43110Cu, 0x431114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431114u;
label_431114:
    // 0x431114: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x431114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_431118:
    // 0x431118: 0x1000000d  b           . + 4 + (0xD << 2)
label_43111c:
    if (ctx->pc == 0x43111Cu) {
        ctx->pc = 0x43111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431118u;
        // 0x43111c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431120u;
        goto label_431120;
    }
    ctx->pc = 0x431118u;
    {
        const bool branch_taken_0x431118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431118u;
        // 0x43111c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431118) {
            ctx->pc = 0x431150u;
            goto label_431150;
        }
    }
    ctx->pc = 0x431120u;
label_431120:
    // 0x431120: 0x2239821  addu        $s3, $s1, $v1
    ctx->pc = 0x431120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_431124:
    // 0x431124: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x431124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
label_431128:
    // 0x431128: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x431128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_43112c:
    // 0x43112c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x43112cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_431130:
    // 0x431130: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_431134:
    if (ctx->pc == 0x431134u) {
        ctx->pc = 0x431134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431130u;
        // 0x431134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431138u;
        goto label_431138;
    }
    ctx->pc = 0x431130u;
    {
        const bool branch_taken_0x431130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431130u;
        // 0x431134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431130) {
            ctx->pc = 0x431160u;
            goto label_431160;
        }
    }
    ctx->pc = 0x431138u;
label_431138:
    // 0x431138: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x431138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_43113c:
    // 0x43113c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x43113cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_431140:
    // 0x431140: 0xc1035f6  jal         func_40D7D8
label_431144:
    if (ctx->pc == 0x431144u) {
        ctx->pc = 0x431144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431140u;
        // 0x431144: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x431148u;
        goto label_431148;
    }
    ctx->pc = 0x431140u;
    SET_GPR_U32(ctx, 31, 0x431148u);
    ctx->pc = 0x431144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431140u;
    // 0x431144: 0x3484000f  ori         $a0, $a0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x431140u, 0x431148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431148u;
label_431148:
    // 0x431148: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x431148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_43114c:
    // 0x43114c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x43114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_431150:
    // 0x431150: 0xc103628  jal         func_40D8A0
label_431154:
    if (ctx->pc == 0x431154u) {
        ctx->pc = 0x431158u;
        goto label_431158;
    }
    ctx->pc = 0x431150u;
    SET_GPR_U32(ctx, 31, 0x431158u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x431150u, 0x431158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431158u;
label_431158:
    // 0x431158: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_43115c:
    if (ctx->pc == 0x43115Cu) {
        ctx->pc = 0x43115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431158u;
        // 0x43115c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431160u;
        goto label_431160;
    }
    ctx->pc = 0x431158u;
    {
        const bool branch_taken_0x431158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431158u;
        // 0x43115c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431158) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x431160u;
label_431160:
    // 0x431160: 0x32150001  andi        $s5, $s0, 0x1
    ctx->pc = 0x431160u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_431164:
    // 0x431164: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
label_431168:
    if (ctx->pc == 0x431168u) {
        ctx->pc = 0x431168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431164u;
        // 0x431168: 0x92620036  lbu         $v0, 0x36($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43116Cu;
        goto label_43116c;
    }
    ctx->pc = 0x431164u;
    {
        const bool branch_taken_0x431164 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x431164) {
            ctx->pc = 0x431168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431164u;
            // 0x431168: 0x92620036  lbu         $v0, 0x36($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431178u;
            goto label_431178;
        }
    }
    ctx->pc = 0x43116Cu;
label_43116c:
    // 0x43116c: 0xc110c82  jal         func_443208
label_431170:
    if (ctx->pc == 0x431170u) {
        ctx->pc = 0x431170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43116Cu;
        // 0x431170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431174u;
        goto label_431174;
    }
    ctx->pc = 0x43116Cu;
    SET_GPR_U32(ctx, 31, 0x431174u);
    ctx->pc = 0x431170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43116Cu;
    // 0x431170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443208u, 0x43116Cu, 0x431174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431174u;
label_431174:
    // 0x431174: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x431174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_431178:
    // 0x431178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x431178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_43117c:
    // 0x43117c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_431180:
    if (ctx->pc == 0x431180u) {
        ctx->pc = 0x431180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43117Cu;
        // 0x431180: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431184u;
        goto label_431184;
    }
    ctx->pc = 0x43117Cu;
    {
        const bool branch_taken_0x43117c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43117c) {
            ctx->pc = 0x431180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43117Cu;
            // 0x431180: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43122Cu;
            goto label_43122c;
        }
    }
    ctx->pc = 0x431184u;
label_431184:
    // 0x431184: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x431184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_431188:
    // 0x431188: 0x32140008  andi        $s4, $s0, 0x8
    ctx->pc = 0x431188u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_43118c:
    // 0x43118c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x43118cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431190:
    // 0x431190: 0x32100002  andi        $s0, $s0, 0x2
    ctx->pc = 0x431190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_431194:
    // 0x431194: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x431194u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_431198:
    // 0x431198: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_43119c:
    if (ctx->pc == 0x43119Cu) {
        ctx->pc = 0x43119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431198u;
        // 0x43119c: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4311A0u;
        goto label_4311a0;
    }
    ctx->pc = 0x431198u;
    {
        const bool branch_taken_0x431198 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431198u;
        // 0x43119c: 0x8c46000c  lw          $a2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431198) {
            ctx->pc = 0x431200u;
            goto label_431200;
        }
    }
    ctx->pc = 0x4311A0u;
label_4311a0:
    // 0x4311a0: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x4311a0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
label_4311a4:
    // 0x4311a4: 0x8e2c0014  lw          $t4, 0x14($s1)
    ctx->pc = 0x4311a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4311a8:
    // 0x4311a8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4311a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4311ac:
    // 0x4311ac: 0x356bfff0  ori         $t3, $t3, 0xFFF0
    ctx->pc = 0x4311acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65520);
label_4311b0:
    // 0x4311b0: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x4311b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4311b4:
    // 0x4311b4: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x4311b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4311b8:
    // 0x4311b8: 0x1862018  mult        $a0, $t4, $a2
    ctx->pc = 0x4311b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4311bc:
    // 0x4311bc: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x4311bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_4311c0:
    // 0x4311c0: 0x4b2824  and         $a1, $v0, $t3
    ctx->pc = 0x4311c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_4311c4:
    // 0x4311c4: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x4311c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4311c8:
    // 0x4311c8: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x4311c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4311cc:
    // 0x4311cc: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x4311ccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
label_4311d0:
    // 0x4311d0: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x4311d0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_4311d4:
    // 0x4311d4: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x4311d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_4311d8:
    // 0x4311d8: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4311d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_4311dc:
    // 0x4311dc: 0x132182b  sltu        $v1, $t1, $s2
    ctx->pc = 0x4311dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4311e0:
    // 0x4311e0: 0x8a1018  mult        $v0, $a0, $t2
    ctx->pc = 0x4311e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4311e4:
    // 0x4311e4: 0xa5043  sra         $t2, $t2, 1
    ctx->pc = 0x4311e4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
label_4311e8:
    // 0x4311e8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_4311ec:
    if (ctx->pc == 0x4311ECu) {
        ctx->pc = 0x4311ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4311E8u;
        // 0x4311ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4311F0u;
        goto label_4311f0;
    }
    ctx->pc = 0x4311E8u;
    {
        const bool branch_taken_0x4311e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4311ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4311E8u;
        // 0x4311ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4311e8) {
            ctx->pc = 0x4311B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4311b8;
        }
    }
    ctx->pc = 0x4311F0u;
label_4311f0:
    // 0x4311f0: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x4311f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
label_4311f4:
    // 0x4311f4: 0xae28000c  sw          $t0, 0xC($s1)
    ctx->pc = 0x4311f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 8));
label_4311f8:
    // 0x4311f8: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x4311f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
label_4311fc:
    // 0x4311fc: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x4311fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_431200:
    // 0x431200: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x431200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_431204:
    // 0x431204: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x431204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_431208:
    // 0x431208: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x431208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_43120c:
    // 0x43120c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x43120cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_431210:
    // 0x431210: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x431210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_431214:
    // 0x431214: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x431214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_431218:
    // 0x431218: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x431218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_43121c:
    // 0x43121c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x43121cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_431220:
    // 0x431220: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x431220u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_431224:
    // 0x431224: 0x10000055  b           . + 4 + (0x55 << 2)
label_431228:
    if (ctx->pc == 0x431228u) {
        ctx->pc = 0x431228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431224u;
        // 0x431228: 0xae240018  sw          $a0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43122Cu;
        goto label_43122c;
    }
    ctx->pc = 0x431224u;
    {
        const bool branch_taken_0x431224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431224u;
        // 0x431228: 0xae240018  sw          $a0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431224) {
            ctx->pc = 0x43137Cu;
            goto label_43137c;
        }
    }
    ctx->pc = 0x43122Cu;
label_43122c:
    // 0x43122c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x43122cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_431230:
    // 0x431230: 0x92680036  lbu         $t0, 0x36($s3)
    ctx->pc = 0x431230u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_431234:
    // 0x431234: 0x27aa0074  addiu       $t2, $sp, 0x74
    ctx->pc = 0x431234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_431238:
    // 0x431238: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x431238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_43123c:
    // 0x43123c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43123cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431240:
    // 0x431240: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x431240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_431244:
    // 0x431244: 0x2cc2003b  sltiu       $v0, $a2, 0x3B
    ctx->pc = 0x431244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_431248:
    // 0x431248: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_43124c:
    if (ctx->pc == 0x43124Cu) {
        ctx->pc = 0x43124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431248u;
        // 0x43124c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431250u;
        goto label_431250;
    }
    ctx->pc = 0x431248u;
    {
        const bool branch_taken_0x431248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431248u;
        // 0x43124c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431248) {
            ctx->pc = 0x431288u;
            goto label_431288;
        }
    }
    ctx->pc = 0x431250u;
label_431250:
    // 0x431250: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x431250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_431254:
    // 0x431254: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x431254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_431258:
    // 0x431258: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x431258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_43125c:
    // 0x43125c: 0x24631080  addiu       $v1, $v1, 0x1080
    ctx->pc = 0x43125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4224));
label_431260:
    // 0x431260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x431260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_431264:
    // 0x431264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x431264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_431268:
    // 0x431268: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x431268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43126c:
    // 0x43126c: 0x800008  jr          $a0
label_431270:
    if (ctx->pc == 0x431270u) {
        ctx->pc = 0x431274u;
        goto label_431274;
    }
    ctx->pc = 0x43126Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43126Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x431274u;
label_431274:
    // 0x431274: 0x10000004  b           . + 4 + (0x4 << 2)
label_431278:
    if (ctx->pc == 0x431278u) {
        ctx->pc = 0x431278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431274u;
        // 0x431278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43127Cu;
        goto label_43127c;
    }
    ctx->pc = 0x431274u;
    {
        const bool branch_taken_0x431274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431274u;
        // 0x431278: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431274) {
            ctx->pc = 0x431288u;
            goto label_431288;
        }
    }
    ctx->pc = 0x43127Cu;
label_43127c:
    // 0x43127c: 0x10000002  b           . + 4 + (0x2 << 2)
label_431280:
    if (ctx->pc == 0x431280u) {
        ctx->pc = 0x431280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43127Cu;
        // 0x431280: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431284u;
        goto label_431284;
    }
    ctx->pc = 0x43127Cu;
    {
        const bool branch_taken_0x43127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43127Cu;
        // 0x431280: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43127c) {
            ctx->pc = 0x431288u;
            goto label_431288;
        }
    }
    ctx->pc = 0x431284u;
label_431284:
    // 0x431284: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x431284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_431288:
    // 0x431288: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x431288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
label_43128c:
    // 0x43128c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_431290:
    if (ctx->pc == 0x431290u) {
        ctx->pc = 0x431290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43128Cu;
        // 0x431290: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431294u;
        goto label_431294;
    }
    ctx->pc = 0x43128Cu;
    {
        const bool branch_taken_0x43128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43128Cu;
        // 0x431290: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43128c) {
            ctx->pc = 0x4312A4u;
            goto label_4312a4;
        }
    }
    ctx->pc = 0x431294u;
label_431294:
    // 0x431294: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_431298:
    if (ctx->pc == 0x431298u) {
        ctx->pc = 0x431298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431294u;
        // 0x431298: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43129Cu;
        goto label_43129c;
    }
    ctx->pc = 0x431294u;
    {
        const bool branch_taken_0x431294 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x431298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431294u;
        // 0x431298: 0x31020004  andi        $v0, $t0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431294) {
            ctx->pc = 0x4312A8u;
            goto label_4312a8;
        }
    }
    ctx->pc = 0x43129Cu;
label_43129c:
    // 0x43129c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x43129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4312a0:
    // 0x4312a0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4312a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4312a4:
    // 0x4312a4: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x4312a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
label_4312a8:
    // 0x4312a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4312ac:
    if (ctx->pc == 0x4312ACu) {
        ctx->pc = 0x4312ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4312A8u;
        // 0x4312ac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4312B0u;
        goto label_4312b0;
    }
    ctx->pc = 0x4312A8u;
    {
        const bool branch_taken_0x4312a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4312ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4312A8u;
        // 0x4312ac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4312a8) {
            ctx->pc = 0x4312C0u;
            goto label_4312c0;
        }
    }
    ctx->pc = 0x4312B0u;
label_4312b0:
    // 0x4312b0: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
label_4312b4:
    if (ctx->pc == 0x4312B4u) {
        ctx->pc = 0x4312B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4312B0u;
        // 0x4312b4: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4312B8u;
        goto label_4312b8;
    }
    ctx->pc = 0x4312B0u;
    {
        const bool branch_taken_0x4312b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x4312b0) {
            ctx->pc = 0x4312B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4312B0u;
            // 0x4312b4: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4312C4u;
            goto label_4312c4;
        }
    }
    ctx->pc = 0x4312B8u;
label_4312b8:
    // 0x4312b8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x4312b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4312bc:
    // 0x4312bc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4312bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4312c0:
    // 0x4312c0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x4312c0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_4312c4:
    // 0x4312c4: 0x32140008  andi        $s4, $s0, 0x8
    ctx->pc = 0x4312c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_4312c8:
    // 0x4312c8: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4312c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
label_4312cc:
    // 0x4312cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4312ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4312d0:
    // 0x4312d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4312d4:
    // 0x4312d4: 0x32100002  andi        $s0, $s0, 0x2
    ctx->pc = 0x4312d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_4312d8:
    // 0x4312d8: 0x8e2c000c  lw          $t4, 0xC($s1)
    ctx->pc = 0x4312d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4312dc:
    // 0x4312dc: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x4312dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4312e0:
    // 0x4312e0: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x4312e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4312e4:
    // 0x4312e4: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
label_4312e8:
    if (ctx->pc == 0x4312E8u) {
        ctx->pc = 0x4312E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4312E4u;
        // 0x4312e8: 0x8e2b0010  lw          $t3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4312ECu;
        goto label_4312ec;
    }
    ctx->pc = 0x4312E4u;
    {
        const bool branch_taken_0x4312e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4312E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4312E4u;
        // 0x4312e8: 0x8e2b0010  lw          $t3, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4312e4) {
            ctx->pc = 0x431358u;
            goto label_431358;
        }
    }
    ctx->pc = 0x4312ECu;
label_4312ec:
    // 0x4312ec: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x4312ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4312f0:
    // 0x4312f0: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x4312f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_4312f4:
    // 0x4312f4: 0x8fae0074  lw          $t6, 0x74($sp)
    ctx->pc = 0x4312f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_4312f8:
    // 0x4312f8: 0x8e2d0014  lw          $t5, 0x14($s1)
    ctx->pc = 0x4312f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4312fc:
    // 0x4312fc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x4312fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_431300:
    // 0x431300: 0xea182a  slt         $v1, $a3, $t2
    ctx->pc = 0x431300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_431304:
    // 0x431304: 0x10e282a  slt         $a1, $t0, $t6
    ctx->pc = 0x431304u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_431308:
    // 0x431308: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x431308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_43130c:
    // 0x43130c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x43130cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_431310:
    // 0x431310: 0xe3200a  movz        $a0, $a3, $v1
    ctx->pc = 0x431310u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_431314:
    // 0x431314: 0x105100a  movz        $v0, $t0, $a1
    ctx->pc = 0x431314u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
label_431318:
    // 0x431318: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x431318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43131c:
    // 0x43131c: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x43131cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_431320:
    // 0x431320: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x431320u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_431324:
    // 0x431324: 0xc6043  sra         $t4, $t4, 1
    ctx->pc = 0x431324u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
label_431328:
    // 0x431328: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x431328u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_43132c:
    // 0x43132c: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x43132cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
label_431330:
    // 0x431330: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x431330u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
label_431334:
    // 0x431334: 0x132102b  sltu        $v0, $t1, $s2
    ctx->pc = 0x431334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_431338:
    // 0x431338: 0x8d2018  mult        $a0, $a0, $t5
    ctx->pc = 0x431338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_43133c:
    // 0x43133c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x43133cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_431340:
    // 0x431340: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x431340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_431344:
    // 0x431344: 0x8f2024  and         $a0, $a0, $t7
    ctx->pc = 0x431344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 15));
label_431348:
    // 0x431348: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x431348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_43134c:
    // 0x43134c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_431350:
    if (ctx->pc == 0x431350u) {
        ctx->pc = 0x431350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43134Cu;
        // 0x431350: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431354u;
        goto label_431354;
    }
    ctx->pc = 0x43134Cu;
    {
        const bool branch_taken_0x43134c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43134Cu;
        // 0x431350: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43134c) {
            ctx->pc = 0x431300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431300;
        }
    }
    ctx->pc = 0x431354u;
label_431354:
    // 0x431354: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x431354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
label_431358:
    // 0x431358: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x431358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_43135c:
    // 0x43135c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x43135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_431360:
    // 0x431360: 0xe3202a  slt         $a0, $a3, $v1
    ctx->pc = 0x431360u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_431364:
    // 0x431364: 0xae2c000c  sw          $t4, 0xC($s1)
    ctx->pc = 0x431364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 12));
label_431368:
    // 0x431368: 0xe4180a  movz        $v1, $a3, $a0
    ctx->pc = 0x431368u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_43136c:
    // 0x43136c: 0xae2b0010  sw          $t3, 0x10($s1)
    ctx->pc = 0x43136cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 11));
label_431370:
    // 0x431370: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x431370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_431374:
    // 0x431374: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x431374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_431378:
    // 0x431378: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x431378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_43137c:
    // 0x43137c: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_431380:
    if (ctx->pc == 0x431380u) {
        ctx->pc = 0x431380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43137Cu;
        // 0x431380: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431384u;
        goto label_431384;
    }
    ctx->pc = 0x43137Cu;
    {
        const bool branch_taken_0x43137c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43137c) {
            ctx->pc = 0x431380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43137Cu;
            // 0x431380: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431418u;
            goto label_431418;
        }
    }
    ctx->pc = 0x431384u;
label_431384:
    // 0x431384: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x431384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_431388:
    // 0x431388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x431388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43138c:
    // 0x43138c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x43138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_431390:
    // 0x431390: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_431394:
    if (ctx->pc == 0x431394u) {
        ctx->pc = 0x431394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431390u;
        // 0x431394: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431398u;
        goto label_431398;
    }
    ctx->pc = 0x431390u;
    {
        const bool branch_taken_0x431390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431390u;
        // 0x431394: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431390) {
            ctx->pc = 0x4313D4u;
            goto label_4313d4;
        }
    }
    ctx->pc = 0x431398u;
label_431398:
    // 0x431398: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x431398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_43139c:
    // 0x43139c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x43139cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_4313a0:
    // 0x4313a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4313a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_4313a4:
    // 0x4313a4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_4313a8:
    if (ctx->pc == 0x4313A8u) {
        ctx->pc = 0x4313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313A4u;
        // 0x4313a8: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4313ACu;
        goto label_4313ac;
    }
    ctx->pc = 0x4313A4u;
    {
        const bool branch_taken_0x4313a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313A4u;
        // 0x4313a8: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4313a4) {
            ctx->pc = 0x4313D8u;
            goto label_4313d8;
        }
    }
    ctx->pc = 0x4313ACu;
label_4313ac:
    // 0x4313ac: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4313acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4313b0:
    // 0x4313b0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x4313b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_4313b4:
    // 0x4313b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4313b8:
    if (ctx->pc == 0x4313B8u) {
        ctx->pc = 0x4313B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313B4u;
        // 0x4313b8: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4313BCu;
        goto label_4313bc;
    }
    ctx->pc = 0x4313B4u;
    {
        const bool branch_taken_0x4313b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4313B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313B4u;
        // 0x4313b8: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4313b4) {
            ctx->pc = 0x4313D8u;
            goto label_4313d8;
        }
    }
    ctx->pc = 0x4313BCu;
label_4313bc:
    // 0x4313bc: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_4313c0:
    if (ctx->pc == 0x4313C0u) {
        ctx->pc = 0x4313C4u;
        goto label_4313c4;
    }
    ctx->pc = 0x4313BCu;
    {
        const bool branch_taken_0x4313bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4313bc) {
            ctx->pc = 0x4313D8u;
            goto label_4313d8;
        }
    }
    ctx->pc = 0x4313C4u;
label_4313c4:
    // 0x4313c4: 0xc10bfa4  jal         func_42FE90
label_4313c8:
    if (ctx->pc == 0x4313C8u) {
        ctx->pc = 0x4313C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313C4u;
        // 0x4313c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4313CCu;
        goto label_4313cc;
    }
    ctx->pc = 0x4313C4u;
    SET_GPR_U32(ctx, 31, 0x4313CCu);
    ctx->pc = 0x4313C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4313C4u;
    // 0x4313c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42FE90u, 0x4313C4u, 0x4313CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4313CCu;
label_4313cc:
    // 0x4313cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_4313d0:
    if (ctx->pc == 0x4313D0u) {
        ctx->pc = 0x4313D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313CCu;
        // 0x4313d0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4313D4u;
        goto label_4313d4;
    }
    ctx->pc = 0x4313CCu;
    {
        const bool branch_taken_0x4313cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4313D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313CCu;
        // 0x4313d0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4313cc) {
            ctx->pc = 0x431418u;
            goto label_431418;
        }
    }
    ctx->pc = 0x4313D4u;
label_4313d4:
    // 0x4313d4: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x4313d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_4313d8:
    // 0x4313d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4313dc:
    if (ctx->pc == 0x4313DCu) {
        ctx->pc = 0x4313DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313D8u;
        // 0x4313dc: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4313E0u;
        goto label_4313e0;
    }
    ctx->pc = 0x4313D8u;
    {
        const bool branch_taken_0x4313d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4313DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313D8u;
        // 0x4313dc: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4313d8) {
            ctx->pc = 0x431414u;
            goto label_431414;
        }
    }
    ctx->pc = 0x4313E0u;
label_4313e0:
    // 0x4313e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4313e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4313e4:
    // 0x4313e4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x4313e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_4313e8:
    // 0x4313e8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4313e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_4313ec:
    // 0x4313ec: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_4313f0:
    if (ctx->pc == 0x4313F0u) {
        ctx->pc = 0x4313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313ECu;
        // 0x4313f0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4313F4u;
        goto label_4313f4;
    }
    ctx->pc = 0x4313ECu;
    {
        const bool branch_taken_0x4313ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4313ec) {
            ctx->pc = 0x4313F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4313ECu;
            // 0x4313f0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431418u;
            goto label_431418;
        }
    }
    ctx->pc = 0x4313F4u;
label_4313f4:
    // 0x4313f4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4313f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4313f8:
    // 0x4313f8: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x4313f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_4313fc:
    // 0x4313fc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_431400:
    if (ctx->pc == 0x431400u) {
        ctx->pc = 0x431400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4313FCu;
        // 0x431400: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431404u;
        goto label_431404;
    }
    ctx->pc = 0x4313FCu;
    {
        const bool branch_taken_0x4313fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4313fc) {
            ctx->pc = 0x431400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4313FCu;
            // 0x431400: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431418u;
            goto label_431418;
        }
    }
    ctx->pc = 0x431404u;
label_431404:
    // 0x431404: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
label_431408:
    if (ctx->pc == 0x431408u) {
        ctx->pc = 0x431408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431404u;
        // 0x431408: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43140Cu;
        goto label_43140c;
    }
    ctx->pc = 0x431404u;
    {
        const bool branch_taken_0x431404 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x431404) {
            ctx->pc = 0x431408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431404u;
            // 0x431408: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431418u;
            goto label_431418;
        }
    }
    ctx->pc = 0x43140Cu;
label_43140c:
    // 0x43140c: 0xc10c05e  jal         func_430178
label_431410:
    if (ctx->pc == 0x431410u) {
        ctx->pc = 0x431410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43140Cu;
        // 0x431410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431414u;
        goto label_431414;
    }
    ctx->pc = 0x43140Cu;
    SET_GPR_U32(ctx, 31, 0x431414u);
    ctx->pc = 0x431410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43140Cu;
    // 0x431410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430178u, 0x43140Cu, 0x431414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431414u;
label_431414:
    // 0x431414: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x431414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_431418:
    // 0x431418: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x431418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_43141c:
    // 0x43141c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x43141cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_431420:
    // 0x431420: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_431424:
    if (ctx->pc == 0x431424u) {
        ctx->pc = 0x431424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431420u;
        // 0x431424: 0xa2720035  sb          $s2, 0x35($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431428u;
        goto label_431428;
    }
    ctx->pc = 0x431420u;
    {
        const bool branch_taken_0x431420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x431424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431420u;
        // 0x431424: 0xa2720035  sb          $s2, 0x35($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 53), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431420) {
            ctx->pc = 0x431434u;
            goto label_431434;
        }
    }
    ctx->pc = 0x431428u;
label_431428:
    // 0x431428: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x431428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_43142c:
    // 0x43142c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x43142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_431430:
    // 0x431430: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x431430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_431434:
    // 0x431434: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_431438:
    if (ctx->pc == 0x431438u) {
        ctx->pc = 0x43143Cu;
        goto label_43143c;
    }
    ctx->pc = 0x431434u;
    {
        const bool branch_taken_0x431434 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x431434) {
            ctx->pc = 0x431448u;
            goto label_431448;
        }
    }
    ctx->pc = 0x43143Cu;
label_43143c:
    // 0x43143c: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x43143cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_431440:
    // 0x431440: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x431440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_431444:
    // 0x431444: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x431444u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_431448:
    // 0x431448: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_43144c:
    if (ctx->pc == 0x43144Cu) {
        ctx->pc = 0x43144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431448u;
        // 0x43144c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431450u;
        goto label_431450;
    }
    ctx->pc = 0x431448u;
    {
        const bool branch_taken_0x431448 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x43144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431448u;
        // 0x43144c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431448) {
            ctx->pc = 0x431460u;
            goto label_431460;
        }
    }
    ctx->pc = 0x431450u;
label_431450:
    // 0x431450: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x431450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_431454:
    // 0x431454: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x431454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_431458:
    // 0x431458: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x431458u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_43145c:
    // 0x43145c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431460:
    // 0x431460: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x431460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_431464:
    // 0x431464: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x431464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_431468:
    // 0x431468: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x431468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_43146c:
    // 0x43146c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x43146cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_431470:
    // 0x431470: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x431470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_431474:
    // 0x431474: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x431474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_431478:
    // 0x431478: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x431478u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_43147c:
    // 0x43147c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x43147cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_431480:
    // 0x431480: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x431480u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_431484:
    // 0x431484: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x431484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_431488:
    // 0x431488: 0x3e00008  jr          $ra
label_43148c:
    if (ctx->pc == 0x43148Cu) {
        ctx->pc = 0x43148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431488u;
        // 0x43148c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431490u;
        goto label_431490;
    }
    ctx->pc = 0x431488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431488u;
        // 0x43148c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431490u;
label_431490:
    // 0x431490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x431490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_431494:
    // 0x431494: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x431494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_431498:
    // 0x431498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x431498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43149c:
    // 0x43149c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43149cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4314a0:
    // 0x4314a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4314a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4314a4:
    // 0x4314a4: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4314a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_4314a8:
    // 0x4314a8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x4314a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_4314ac:
    // 0x4314ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4314b0:
    if (ctx->pc == 0x4314B0u) {
        ctx->pc = 0x4314B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314ACu;
        // 0x4314b0: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4314B4u;
        goto label_4314b4;
    }
    ctx->pc = 0x4314ACu;
    {
        const bool branch_taken_0x4314ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4314ac) {
            ctx->pc = 0x4314B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4314ACu;
            // 0x4314b0: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4314BCu;
            goto label_4314bc;
        }
    }
    ctx->pc = 0x4314B4u;
label_4314b4:
    // 0x4314b4: 0x10000074  b           . + 4 + (0x74 << 2)
label_4314b8:
    if (ctx->pc == 0x4314B8u) {
        ctx->pc = 0x4314B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314B4u;
        // 0x4314b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4314BCu;
        goto label_4314bc;
    }
    ctx->pc = 0x4314B4u;
    {
        const bool branch_taken_0x4314b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4314B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314B4u;
        // 0x4314b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4314b4) {
            ctx->pc = 0x431688u;
            goto label_431688;
        }
    }
    ctx->pc = 0x4314BCu;
label_4314bc:
    // 0x4314bc: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x4314bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4314c0:
    // 0x4314c0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_4314c4:
    if (ctx->pc == 0x4314C4u) {
        ctx->pc = 0x4314C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314C0u;
        // 0x4314c4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4314C8u;
        goto label_4314c8;
    }
    ctx->pc = 0x4314C0u;
    {
        const bool branch_taken_0x4314c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4314C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314C0u;
        // 0x4314c4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4314c0) {
            ctx->pc = 0x431524u;
            goto label_431524;
        }
    }
    ctx->pc = 0x4314C8u;
label_4314c8:
    // 0x4314c8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4314cc:
    if (ctx->pc == 0x4314CCu) {
        ctx->pc = 0x4314CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314C8u;
        // 0x4314cc: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4314D0u;
        goto label_4314d0;
    }
    ctx->pc = 0x4314C8u;
    {
        const bool branch_taken_0x4314c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4314c8) {
            ctx->pc = 0x4314CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4314C8u;
            // 0x4314cc: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4314E0u;
            goto label_4314e0;
        }
    }
    ctx->pc = 0x4314D0u;
label_4314d0:
    // 0x4314d0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4314d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4314d4:
    // 0x4314d4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_4314d8:
    if (ctx->pc == 0x4314D8u) {
        ctx->pc = 0x4314D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314D4u;
        // 0x4314d8: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4314DCu;
        goto label_4314dc;
    }
    ctx->pc = 0x4314D4u;
    {
        const bool branch_taken_0x4314d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4314D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314D4u;
        // 0x4314d8: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4314d4) {
            ctx->pc = 0x431528u;
            goto label_431528;
        }
    }
    ctx->pc = 0x4314DCu;
label_4314dc:
    // 0x4314dc: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x4314dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4314e0:
    // 0x4314e0: 0x10e0005a  beqz        $a3, . + 4 + (0x5A << 2)
label_4314e4:
    if (ctx->pc == 0x4314E4u) {
        ctx->pc = 0x4314E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314E0u;
        // 0x4314e4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4314E8u;
        goto label_4314e8;
    }
    ctx->pc = 0x4314E0u;
    {
        const bool branch_taken_0x4314e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4314E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4314E0u;
        // 0x4314e4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4314e0) {
            ctx->pc = 0x43164Cu;
            goto label_43164c;
        }
    }
    ctx->pc = 0x4314E8u;
label_4314e8:
    // 0x4314e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4314e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4314ec:
    // 0x4314ec: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x4314ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4314f0:
    // 0x4314f0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4314f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4314f4:
    // 0x4314f4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x4314f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4314f8:
    // 0x4314f8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x4314f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4314fc:
    // 0x4314fc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4314fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_431500:
    // 0x431500: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x431500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_431504:
    // 0x431504: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x431504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_431508:
    // 0x431508: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x431508u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_43150c:
    // 0x43150c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x43150cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_431510:
    // 0x431510: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x431510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_431514:
    // 0x431514: 0xc0bf916  jal         func_2FE458
label_431518:
    if (ctx->pc == 0x431518u) {
        ctx->pc = 0x431518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431514u;
        // 0x431518: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43151Cu;
        goto label_43151c;
    }
    ctx->pc = 0x431514u;
    SET_GPR_U32(ctx, 31, 0x43151Cu);
    ctx->pc = 0x431518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431514u;
    // 0x431518: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x431514u, 0x43151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43151Cu;
label_43151c:
    // 0x43151c: 0x1000004c  b           . + 4 + (0x4C << 2)
label_431520:
    if (ctx->pc == 0x431520u) {
        ctx->pc = 0x431520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43151Cu;
        // 0x431520: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431524u;
        goto label_431524;
    }
    ctx->pc = 0x43151Cu;
    {
        const bool branch_taken_0x43151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43151Cu;
        // 0x431520: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43151c) {
            ctx->pc = 0x431650u;
            goto label_431650;
        }
    }
    ctx->pc = 0x431524u;
label_431524:
    // 0x431524: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x431524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
label_431528:
    // 0x431528: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x431528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_43152c:
    // 0x43152c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_431530:
    if (ctx->pc == 0x431530u) {
        ctx->pc = 0x431530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43152Cu;
        // 0x431530: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431534u;
        goto label_431534;
    }
    ctx->pc = 0x43152Cu;
    {
        const bool branch_taken_0x43152c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x431530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43152Cu;
        // 0x431530: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43152c) {
            ctx->pc = 0x431610u;
            goto label_431610;
        }
    }
    ctx->pc = 0x431534u;
label_431534:
    // 0x431534: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x431534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_431538:
    // 0x431538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x431538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43153c:
    // 0x43153c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x43153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_431540:
    // 0x431540: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_431544:
    if (ctx->pc == 0x431544u) {
        ctx->pc = 0x431544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431540u;
        // 0x431544: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431548u;
        goto label_431548;
    }
    ctx->pc = 0x431540u;
    {
        const bool branch_taken_0x431540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431540u;
        // 0x431544: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431540) {
            ctx->pc = 0x43158Cu;
            goto label_43158c;
        }
    }
    ctx->pc = 0x431548u;
label_431548:
    // 0x431548: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x431548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_43154c:
    // 0x43154c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x43154cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_431550:
    // 0x431550: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x431550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_431554:
    // 0x431554: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_431558:
    if (ctx->pc == 0x431558u) {
        ctx->pc = 0x431558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431554u;
        // 0x431558: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43155Cu;
        goto label_43155c;
    }
    ctx->pc = 0x431554u;
    {
        const bool branch_taken_0x431554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x431558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431554u;
        // 0x431558: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431554) {
            ctx->pc = 0x431590u;
            goto label_431590;
        }
    }
    ctx->pc = 0x43155Cu;
label_43155c:
    // 0x43155c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x43155cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_431560:
    // 0x431560: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x431560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_431564:
    // 0x431564: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_431568:
    if (ctx->pc == 0x431568u) {
        ctx->pc = 0x431568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431564u;
        // 0x431568: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43156Cu;
        goto label_43156c;
    }
    ctx->pc = 0x431564u;
    {
        const bool branch_taken_0x431564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431564u;
        // 0x431568: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431564) {
            ctx->pc = 0x431590u;
            goto label_431590;
        }
    }
    ctx->pc = 0x43156Cu;
label_43156c:
    // 0x43156c: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x43156cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_431570:
    // 0x431570: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x431570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_431574:
    // 0x431574: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_431578:
    if (ctx->pc == 0x431578u) {
        ctx->pc = 0x431578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431574u;
        // 0x431578: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x43157Cu;
        goto label_43157c;
    }
    ctx->pc = 0x431574u;
    {
        const bool branch_taken_0x431574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431574u;
        // 0x431578: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x431574) {
            ctx->pc = 0x431590u;
            goto label_431590;
        }
    }
    ctx->pc = 0x43157Cu;
label_43157c:
    // 0x43157c: 0xc10c14c  jal         func_430530
label_431580:
    if (ctx->pc == 0x431580u) {
        ctx->pc = 0x431580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43157Cu;
        // 0x431580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431584u;
        goto label_431584;
    }
    ctx->pc = 0x43157Cu;
    SET_GPR_U32(ctx, 31, 0x431584u);
    ctx->pc = 0x431580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43157Cu;
    // 0x431580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430530u, 0x43157Cu, 0x431584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431584u;
label_431584:
    // 0x431584: 0x10000014  b           . + 4 + (0x14 << 2)
label_431588:
    if (ctx->pc == 0x431588u) {
        ctx->pc = 0x431588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431584u;
        // 0x431588: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43158Cu;
        goto label_43158c;
    }
    ctx->pc = 0x431584u;
    {
        const bool branch_taken_0x431584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431584u;
        // 0x431588: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431584) {
            ctx->pc = 0x4315D8u;
            goto label_4315d8;
        }
    }
    ctx->pc = 0x43158Cu;
label_43158c:
    // 0x43158c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x43158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_431590:
    // 0x431590: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_431594:
    if (ctx->pc == 0x431594u) {
        ctx->pc = 0x431594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431590u;
        // 0x431594: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431598u;
        goto label_431598;
    }
    ctx->pc = 0x431590u;
    {
        const bool branch_taken_0x431590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431590u;
        // 0x431594: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431590) {
            ctx->pc = 0x4315D4u;
            goto label_4315d4;
        }
    }
    ctx->pc = 0x431598u;
label_431598:
    // 0x431598: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x431598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_43159c:
    // 0x43159c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x43159cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_4315a0:
    // 0x4315a0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x4315a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_4315a4:
    // 0x4315a4: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_4315a8:
    if (ctx->pc == 0x4315A8u) {
        ctx->pc = 0x4315A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315A4u;
        // 0x4315a8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315ACu;
        goto label_4315ac;
    }
    ctx->pc = 0x4315A4u;
    {
        const bool branch_taken_0x4315a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4315a4) {
            ctx->pc = 0x4315A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4315A4u;
            // 0x4315a8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4315D8u;
            goto label_4315d8;
        }
    }
    ctx->pc = 0x4315ACu;
label_4315ac:
    // 0x4315ac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4315acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4315b0:
    // 0x4315b0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x4315b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_4315b4:
    // 0x4315b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4315b8:
    if (ctx->pc == 0x4315B8u) {
        ctx->pc = 0x4315B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315B4u;
        // 0x4315b8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315BCu;
        goto label_4315bc;
    }
    ctx->pc = 0x4315B4u;
    {
        const bool branch_taken_0x4315b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4315b4) {
            ctx->pc = 0x4315B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4315B4u;
            // 0x4315b8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4315D8u;
            goto label_4315d8;
        }
    }
    ctx->pc = 0x4315BCu;
label_4315bc:
    // 0x4315bc: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x4315bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_4315c0:
    // 0x4315c0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x4315c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_4315c4:
    // 0x4315c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4315c8:
    if (ctx->pc == 0x4315C8u) {
        ctx->pc = 0x4315C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315C4u;
        // 0x4315c8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315CCu;
        goto label_4315cc;
    }
    ctx->pc = 0x4315C4u;
    {
        const bool branch_taken_0x4315c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4315c4) {
            ctx->pc = 0x4315C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4315C4u;
            // 0x4315c8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4315D8u;
            goto label_4315d8;
        }
    }
    ctx->pc = 0x4315CCu;
label_4315cc:
    // 0x4315cc: 0xc10c204  jal         func_430810
label_4315d0:
    if (ctx->pc == 0x4315D0u) {
        ctx->pc = 0x4315D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4315CCu;
        // 0x4315d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4315D4u;
        goto label_4315d4;
    }
    ctx->pc = 0x4315CCu;
    SET_GPR_U32(ctx, 31, 0x4315D4u);
    ctx->pc = 0x4315D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4315CCu;
    // 0x4315d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430810u;
    goto label_430810;
    ctx->pc = 0x4315D4u;
label_4315d4:
    // 0x4315d4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4315d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4315d8:
    // 0x4315d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4315d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4315dc:
    // 0x4315dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4315dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4315e0:
    // 0x4315e0: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x4315e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4315e4:
    // 0x4315e4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4315e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4315e8:
    // 0x4315e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4315e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4315ec:
    // 0x4315ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4315ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4315f0:
    // 0x4315f0: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x4315f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4315f4:
    // 0x4315f4: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x4315f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4315f8:
    // 0x4315f8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x4315f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_4315fc:
    // 0x4315fc: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x4315fcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_431600:
    // 0x431600: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x431600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_431604:
    // 0x431604: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x431604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_431608:
    // 0x431608: 0xc0bf916  jal         func_2FE458
label_43160c:
    if (ctx->pc == 0x43160Cu) {
        ctx->pc = 0x43160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431608u;
        // 0x43160c: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431610u;
        goto label_431610;
    }
    ctx->pc = 0x431608u;
    SET_GPR_U32(ctx, 31, 0x431610u);
    ctx->pc = 0x43160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431608u;
    // 0x43160c: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x431608u, 0x431610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431610u;
label_431610:
    // 0x431610: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x431610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_431614:
    // 0x431614: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x431614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_431618:
    // 0x431618: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x431618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_43161c:
    // 0x43161c: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x43161cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_431620:
    // 0x431620: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x431620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_431624:
    // 0x431624: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x431624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_431628:
    // 0x431628: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x431628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_43162c:
    // 0x43162c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x43162cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_431630:
    // 0x431630: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x431630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
label_431634:
    // 0x431634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x431634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_431638:
    // 0x431638: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_43163c:
    if (ctx->pc == 0x43163Cu) {
        ctx->pc = 0x43163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431638u;
        // 0x43163c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431640u;
        goto label_431640;
    }
    ctx->pc = 0x431638u;
    {
        const bool branch_taken_0x431638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x431638) {
            ctx->pc = 0x43163Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x431638u;
            // 0x43163c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431650u;
            goto label_431650;
        }
    }
    ctx->pc = 0x431640u;
label_431640:
    // 0x431640: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x431640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_431644:
    // 0x431644: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x431644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_431648:
    // 0x431648: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x431648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_43164c:
    // 0x43164c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x43164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_431650:
    // 0x431650: 0x3c039004  lui         $v1, 0x9004
    ctx->pc = 0x431650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36868 << 16));
label_431654:
    // 0x431654: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x431654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_431658:
    // 0x431658: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_43165c:
    if (ctx->pc == 0x43165Cu) {
        ctx->pc = 0x43165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431658u;
        // 0x43165c: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431660u;
        goto label_431660;
    }
    ctx->pc = 0x431658u;
    {
        const bool branch_taken_0x431658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x43165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431658u;
        // 0x43165c: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431658) {
            ctx->pc = 0x43167Cu;
            goto label_43167c;
        }
    }
    ctx->pc = 0x431660u;
label_431660:
    // 0x431660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x431660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_431664:
    // 0x431664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x431664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_431668:
    // 0x431668: 0x304200d9  andi        $v0, $v0, 0xD9
    ctx->pc = 0x431668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)217);
label_43166c:
    // 0x43166c: 0xc108124  jal         func_420490
label_431670:
    if (ctx->pc == 0x431670u) {
        ctx->pc = 0x431670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43166Cu;
        // 0x431670: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x431674u;
        goto label_431674;
    }
    ctx->pc = 0x43166Cu;
    SET_GPR_U32(ctx, 31, 0x431674u);
    ctx->pc = 0x431670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43166Cu;
    // 0x431670: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420490u, 0x43166Cu, 0x431674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431674u;
label_431674:
    // 0x431674: 0x10000004  b           . + 4 + (0x4 << 2)
label_431678:
    if (ctx->pc == 0x431678u) {
        ctx->pc = 0x431678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431674u;
        // 0x431678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43167Cu;
        goto label_43167c;
    }
    ctx->pc = 0x431674u;
    {
        const bool branch_taken_0x431674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431674u;
        // 0x431678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431674) {
            ctx->pc = 0x431688u;
            goto label_431688;
        }
    }
    ctx->pc = 0x43167Cu;
label_43167c:
    // 0x43167c: 0x304200d9  andi        $v0, $v0, 0xD9
    ctx->pc = 0x43167cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)217);
label_431680:
    // 0x431680: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x431680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
label_431684:
    // 0x431684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x431684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_431688:
    // 0x431688: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x431688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43168c:
    // 0x43168c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43168cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_431690:
    // 0x431690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x431690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_431694:
    // 0x431694: 0x3e00008  jr          $ra
label_431698:
    if (ctx->pc == 0x431698u) {
        ctx->pc = 0x431698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431694u;
        // 0x431698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43169Cu;
        goto label_43169c;
    }
    ctx->pc = 0x431694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431694u;
        // 0x431698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43169Cu;
label_43169c:
    // 0x43169c: 0x0  nop
    ctx->pc = 0x43169cu;
    // NOP
    ctx->pc = 0x4316a0u;
}
