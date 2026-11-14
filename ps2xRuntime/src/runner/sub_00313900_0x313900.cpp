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

// Function: sub_00313900
// Address: 0x313900 - 0x314058
void sub_00313900_0x313900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313900_0x313900");
#endif

    switch (ctx->pc) {
        case 0x313900u: goto label_313900;
        case 0x313904u: goto label_313904;
        case 0x313908u: goto label_313908;
        case 0x31390cu: goto label_31390c;
        case 0x313910u: goto label_313910;
        case 0x313914u: goto label_313914;
        case 0x313918u: goto label_313918;
        case 0x31391cu: goto label_31391c;
        case 0x313920u: goto label_313920;
        case 0x313924u: goto label_313924;
        case 0x313928u: goto label_313928;
        case 0x31392cu: goto label_31392c;
        case 0x313930u: goto label_313930;
        case 0x313934u: goto label_313934;
        case 0x313938u: goto label_313938;
        case 0x31393cu: goto label_31393c;
        case 0x313940u: goto label_313940;
        case 0x313944u: goto label_313944;
        case 0x313948u: goto label_313948;
        case 0x31394cu: goto label_31394c;
        case 0x313950u: goto label_313950;
        case 0x313954u: goto label_313954;
        case 0x313958u: goto label_313958;
        case 0x31395cu: goto label_31395c;
        case 0x313960u: goto label_313960;
        case 0x313964u: goto label_313964;
        case 0x313968u: goto label_313968;
        case 0x31396cu: goto label_31396c;
        case 0x313970u: goto label_313970;
        case 0x313974u: goto label_313974;
        case 0x313978u: goto label_313978;
        case 0x31397cu: goto label_31397c;
        case 0x313980u: goto label_313980;
        case 0x313984u: goto label_313984;
        case 0x313988u: goto label_313988;
        case 0x31398cu: goto label_31398c;
        case 0x313990u: goto label_313990;
        case 0x313994u: goto label_313994;
        case 0x313998u: goto label_313998;
        case 0x31399cu: goto label_31399c;
        case 0x3139a0u: goto label_3139a0;
        case 0x3139a4u: goto label_3139a4;
        case 0x3139a8u: goto label_3139a8;
        case 0x3139acu: goto label_3139ac;
        case 0x3139b0u: goto label_3139b0;
        case 0x3139b4u: goto label_3139b4;
        case 0x3139b8u: goto label_3139b8;
        case 0x3139bcu: goto label_3139bc;
        case 0x3139c0u: goto label_3139c0;
        case 0x3139c4u: goto label_3139c4;
        case 0x3139c8u: goto label_3139c8;
        case 0x3139ccu: goto label_3139cc;
        case 0x3139d0u: goto label_3139d0;
        case 0x3139d4u: goto label_3139d4;
        case 0x3139d8u: goto label_3139d8;
        case 0x3139dcu: goto label_3139dc;
        case 0x3139e0u: goto label_3139e0;
        case 0x3139e4u: goto label_3139e4;
        case 0x3139e8u: goto label_3139e8;
        case 0x3139ecu: goto label_3139ec;
        case 0x3139f0u: goto label_3139f0;
        case 0x3139f4u: goto label_3139f4;
        case 0x3139f8u: goto label_3139f8;
        case 0x3139fcu: goto label_3139fc;
        case 0x313a00u: goto label_313a00;
        case 0x313a04u: goto label_313a04;
        case 0x313a08u: goto label_313a08;
        case 0x313a0cu: goto label_313a0c;
        case 0x313a10u: goto label_313a10;
        case 0x313a14u: goto label_313a14;
        case 0x313a18u: goto label_313a18;
        case 0x313a1cu: goto label_313a1c;
        case 0x313a20u: goto label_313a20;
        case 0x313a24u: goto label_313a24;
        case 0x313a28u: goto label_313a28;
        case 0x313a2cu: goto label_313a2c;
        case 0x313a30u: goto label_313a30;
        case 0x313a34u: goto label_313a34;
        case 0x313a38u: goto label_313a38;
        case 0x313a3cu: goto label_313a3c;
        case 0x313a40u: goto label_313a40;
        case 0x313a44u: goto label_313a44;
        case 0x313a48u: goto label_313a48;
        case 0x313a4cu: goto label_313a4c;
        case 0x313a50u: goto label_313a50;
        case 0x313a54u: goto label_313a54;
        case 0x313a58u: goto label_313a58;
        case 0x313a5cu: goto label_313a5c;
        case 0x313a60u: goto label_313a60;
        case 0x313a64u: goto label_313a64;
        case 0x313a68u: goto label_313a68;
        case 0x313a6cu: goto label_313a6c;
        case 0x313a70u: goto label_313a70;
        case 0x313a74u: goto label_313a74;
        case 0x313a78u: goto label_313a78;
        case 0x313a7cu: goto label_313a7c;
        case 0x313a80u: goto label_313a80;
        case 0x313a84u: goto label_313a84;
        case 0x313a88u: goto label_313a88;
        case 0x313a8cu: goto label_313a8c;
        case 0x313a90u: goto label_313a90;
        case 0x313a94u: goto label_313a94;
        case 0x313a98u: goto label_313a98;
        case 0x313a9cu: goto label_313a9c;
        case 0x313aa0u: goto label_313aa0;
        case 0x313aa4u: goto label_313aa4;
        case 0x313aa8u: goto label_313aa8;
        case 0x313aacu: goto label_313aac;
        case 0x313ab0u: goto label_313ab0;
        case 0x313ab4u: goto label_313ab4;
        case 0x313ab8u: goto label_313ab8;
        case 0x313abcu: goto label_313abc;
        case 0x313ac0u: goto label_313ac0;
        case 0x313ac4u: goto label_313ac4;
        case 0x313ac8u: goto label_313ac8;
        case 0x313accu: goto label_313acc;
        case 0x313ad0u: goto label_313ad0;
        case 0x313ad4u: goto label_313ad4;
        case 0x313ad8u: goto label_313ad8;
        case 0x313adcu: goto label_313adc;
        case 0x313ae0u: goto label_313ae0;
        case 0x313ae4u: goto label_313ae4;
        case 0x313ae8u: goto label_313ae8;
        case 0x313aecu: goto label_313aec;
        case 0x313af0u: goto label_313af0;
        case 0x313af4u: goto label_313af4;
        case 0x313af8u: goto label_313af8;
        case 0x313afcu: goto label_313afc;
        case 0x313b00u: goto label_313b00;
        case 0x313b04u: goto label_313b04;
        case 0x313b08u: goto label_313b08;
        case 0x313b0cu: goto label_313b0c;
        case 0x313b10u: goto label_313b10;
        case 0x313b14u: goto label_313b14;
        case 0x313b18u: goto label_313b18;
        case 0x313b1cu: goto label_313b1c;
        case 0x313b20u: goto label_313b20;
        case 0x313b24u: goto label_313b24;
        case 0x313b28u: goto label_313b28;
        case 0x313b2cu: goto label_313b2c;
        case 0x313b30u: goto label_313b30;
        case 0x313b34u: goto label_313b34;
        case 0x313b38u: goto label_313b38;
        case 0x313b3cu: goto label_313b3c;
        case 0x313b40u: goto label_313b40;
        case 0x313b44u: goto label_313b44;
        case 0x313b48u: goto label_313b48;
        case 0x313b4cu: goto label_313b4c;
        case 0x313b50u: goto label_313b50;
        case 0x313b54u: goto label_313b54;
        case 0x313b58u: goto label_313b58;
        case 0x313b5cu: goto label_313b5c;
        case 0x313b60u: goto label_313b60;
        case 0x313b64u: goto label_313b64;
        case 0x313b68u: goto label_313b68;
        case 0x313b6cu: goto label_313b6c;
        case 0x313b70u: goto label_313b70;
        case 0x313b74u: goto label_313b74;
        case 0x313b78u: goto label_313b78;
        case 0x313b7cu: goto label_313b7c;
        case 0x313b80u: goto label_313b80;
        case 0x313b84u: goto label_313b84;
        case 0x313b88u: goto label_313b88;
        case 0x313b8cu: goto label_313b8c;
        case 0x313b90u: goto label_313b90;
        case 0x313b94u: goto label_313b94;
        case 0x313b98u: goto label_313b98;
        case 0x313b9cu: goto label_313b9c;
        case 0x313ba0u: goto label_313ba0;
        case 0x313ba4u: goto label_313ba4;
        case 0x313ba8u: goto label_313ba8;
        case 0x313bacu: goto label_313bac;
        case 0x313bb0u: goto label_313bb0;
        case 0x313bb4u: goto label_313bb4;
        case 0x313bb8u: goto label_313bb8;
        case 0x313bbcu: goto label_313bbc;
        case 0x313bc0u: goto label_313bc0;
        case 0x313bc4u: goto label_313bc4;
        case 0x313bc8u: goto label_313bc8;
        case 0x313bccu: goto label_313bcc;
        case 0x313bd0u: goto label_313bd0;
        case 0x313bd4u: goto label_313bd4;
        case 0x313bd8u: goto label_313bd8;
        case 0x313bdcu: goto label_313bdc;
        case 0x313be0u: goto label_313be0;
        case 0x313be4u: goto label_313be4;
        case 0x313be8u: goto label_313be8;
        case 0x313becu: goto label_313bec;
        case 0x313bf0u: goto label_313bf0;
        case 0x313bf4u: goto label_313bf4;
        case 0x313bf8u: goto label_313bf8;
        case 0x313bfcu: goto label_313bfc;
        case 0x313c00u: goto label_313c00;
        case 0x313c04u: goto label_313c04;
        case 0x313c08u: goto label_313c08;
        case 0x313c0cu: goto label_313c0c;
        case 0x313c10u: goto label_313c10;
        case 0x313c14u: goto label_313c14;
        case 0x313c18u: goto label_313c18;
        case 0x313c1cu: goto label_313c1c;
        case 0x313c20u: goto label_313c20;
        case 0x313c24u: goto label_313c24;
        case 0x313c28u: goto label_313c28;
        case 0x313c2cu: goto label_313c2c;
        case 0x313c30u: goto label_313c30;
        case 0x313c34u: goto label_313c34;
        case 0x313c38u: goto label_313c38;
        case 0x313c3cu: goto label_313c3c;
        case 0x313c40u: goto label_313c40;
        case 0x313c44u: goto label_313c44;
        case 0x313c48u: goto label_313c48;
        case 0x313c4cu: goto label_313c4c;
        case 0x313c50u: goto label_313c50;
        case 0x313c54u: goto label_313c54;
        case 0x313c58u: goto label_313c58;
        case 0x313c5cu: goto label_313c5c;
        case 0x313c60u: goto label_313c60;
        case 0x313c64u: goto label_313c64;
        case 0x313c68u: goto label_313c68;
        case 0x313c6cu: goto label_313c6c;
        case 0x313c70u: goto label_313c70;
        case 0x313c74u: goto label_313c74;
        case 0x313c78u: goto label_313c78;
        case 0x313c7cu: goto label_313c7c;
        case 0x313c80u: goto label_313c80;
        case 0x313c84u: goto label_313c84;
        case 0x313c88u: goto label_313c88;
        case 0x313c8cu: goto label_313c8c;
        case 0x313c90u: goto label_313c90;
        case 0x313c94u: goto label_313c94;
        case 0x313c98u: goto label_313c98;
        case 0x313c9cu: goto label_313c9c;
        case 0x313ca0u: goto label_313ca0;
        case 0x313ca4u: goto label_313ca4;
        case 0x313ca8u: goto label_313ca8;
        case 0x313cacu: goto label_313cac;
        case 0x313cb0u: goto label_313cb0;
        case 0x313cb4u: goto label_313cb4;
        case 0x313cb8u: goto label_313cb8;
        case 0x313cbcu: goto label_313cbc;
        case 0x313cc0u: goto label_313cc0;
        case 0x313cc4u: goto label_313cc4;
        case 0x313cc8u: goto label_313cc8;
        case 0x313cccu: goto label_313ccc;
        case 0x313cd0u: goto label_313cd0;
        case 0x313cd4u: goto label_313cd4;
        case 0x313cd8u: goto label_313cd8;
        case 0x313cdcu: goto label_313cdc;
        case 0x313ce0u: goto label_313ce0;
        case 0x313ce4u: goto label_313ce4;
        case 0x313ce8u: goto label_313ce8;
        case 0x313cecu: goto label_313cec;
        case 0x313cf0u: goto label_313cf0;
        case 0x313cf4u: goto label_313cf4;
        case 0x313cf8u: goto label_313cf8;
        case 0x313cfcu: goto label_313cfc;
        case 0x313d00u: goto label_313d00;
        case 0x313d04u: goto label_313d04;
        case 0x313d08u: goto label_313d08;
        case 0x313d0cu: goto label_313d0c;
        case 0x313d10u: goto label_313d10;
        case 0x313d14u: goto label_313d14;
        case 0x313d18u: goto label_313d18;
        case 0x313d1cu: goto label_313d1c;
        case 0x313d20u: goto label_313d20;
        case 0x313d24u: goto label_313d24;
        case 0x313d28u: goto label_313d28;
        case 0x313d2cu: goto label_313d2c;
        case 0x313d30u: goto label_313d30;
        case 0x313d34u: goto label_313d34;
        case 0x313d38u: goto label_313d38;
        case 0x313d3cu: goto label_313d3c;
        case 0x313d40u: goto label_313d40;
        case 0x313d44u: goto label_313d44;
        case 0x313d48u: goto label_313d48;
        case 0x313d4cu: goto label_313d4c;
        case 0x313d50u: goto label_313d50;
        case 0x313d54u: goto label_313d54;
        case 0x313d58u: goto label_313d58;
        case 0x313d5cu: goto label_313d5c;
        case 0x313d60u: goto label_313d60;
        case 0x313d64u: goto label_313d64;
        case 0x313d68u: goto label_313d68;
        case 0x313d6cu: goto label_313d6c;
        case 0x313d70u: goto label_313d70;
        case 0x313d74u: goto label_313d74;
        case 0x313d78u: goto label_313d78;
        case 0x313d7cu: goto label_313d7c;
        case 0x313d80u: goto label_313d80;
        case 0x313d84u: goto label_313d84;
        case 0x313d88u: goto label_313d88;
        case 0x313d8cu: goto label_313d8c;
        case 0x313d90u: goto label_313d90;
        case 0x313d94u: goto label_313d94;
        case 0x313d98u: goto label_313d98;
        case 0x313d9cu: goto label_313d9c;
        case 0x313da0u: goto label_313da0;
        case 0x313da4u: goto label_313da4;
        case 0x313da8u: goto label_313da8;
        case 0x313dacu: goto label_313dac;
        case 0x313db0u: goto label_313db0;
        case 0x313db4u: goto label_313db4;
        case 0x313db8u: goto label_313db8;
        case 0x313dbcu: goto label_313dbc;
        case 0x313dc0u: goto label_313dc0;
        case 0x313dc4u: goto label_313dc4;
        case 0x313dc8u: goto label_313dc8;
        case 0x313dccu: goto label_313dcc;
        case 0x313dd0u: goto label_313dd0;
        case 0x313dd4u: goto label_313dd4;
        case 0x313dd8u: goto label_313dd8;
        case 0x313ddcu: goto label_313ddc;
        case 0x313de0u: goto label_313de0;
        case 0x313de4u: goto label_313de4;
        case 0x313de8u: goto label_313de8;
        case 0x313decu: goto label_313dec;
        case 0x313df0u: goto label_313df0;
        case 0x313df4u: goto label_313df4;
        case 0x313df8u: goto label_313df8;
        case 0x313dfcu: goto label_313dfc;
        case 0x313e00u: goto label_313e00;
        case 0x313e04u: goto label_313e04;
        case 0x313e08u: goto label_313e08;
        case 0x313e0cu: goto label_313e0c;
        case 0x313e10u: goto label_313e10;
        case 0x313e14u: goto label_313e14;
        case 0x313e18u: goto label_313e18;
        case 0x313e1cu: goto label_313e1c;
        case 0x313e20u: goto label_313e20;
        case 0x313e24u: goto label_313e24;
        case 0x313e28u: goto label_313e28;
        case 0x313e2cu: goto label_313e2c;
        case 0x313e30u: goto label_313e30;
        case 0x313e34u: goto label_313e34;
        case 0x313e38u: goto label_313e38;
        case 0x313e3cu: goto label_313e3c;
        case 0x313e40u: goto label_313e40;
        case 0x313e44u: goto label_313e44;
        case 0x313e48u: goto label_313e48;
        case 0x313e4cu: goto label_313e4c;
        case 0x313e50u: goto label_313e50;
        case 0x313e54u: goto label_313e54;
        case 0x313e58u: goto label_313e58;
        case 0x313e5cu: goto label_313e5c;
        case 0x313e60u: goto label_313e60;
        case 0x313e64u: goto label_313e64;
        case 0x313e68u: goto label_313e68;
        case 0x313e6cu: goto label_313e6c;
        case 0x313e70u: goto label_313e70;
        case 0x313e74u: goto label_313e74;
        case 0x313e78u: goto label_313e78;
        case 0x313e7cu: goto label_313e7c;
        case 0x313e80u: goto label_313e80;
        case 0x313e84u: goto label_313e84;
        case 0x313e88u: goto label_313e88;
        case 0x313e8cu: goto label_313e8c;
        case 0x313e90u: goto label_313e90;
        case 0x313e94u: goto label_313e94;
        case 0x313e98u: goto label_313e98;
        case 0x313e9cu: goto label_313e9c;
        case 0x313ea0u: goto label_313ea0;
        case 0x313ea4u: goto label_313ea4;
        case 0x313ea8u: goto label_313ea8;
        case 0x313eacu: goto label_313eac;
        case 0x313eb0u: goto label_313eb0;
        case 0x313eb4u: goto label_313eb4;
        case 0x313eb8u: goto label_313eb8;
        case 0x313ebcu: goto label_313ebc;
        case 0x313ec0u: goto label_313ec0;
        case 0x313ec4u: goto label_313ec4;
        case 0x313ec8u: goto label_313ec8;
        case 0x313eccu: goto label_313ecc;
        case 0x313ed0u: goto label_313ed0;
        case 0x313ed4u: goto label_313ed4;
        case 0x313ed8u: goto label_313ed8;
        case 0x313edcu: goto label_313edc;
        case 0x313ee0u: goto label_313ee0;
        case 0x313ee4u: goto label_313ee4;
        case 0x313ee8u: goto label_313ee8;
        case 0x313eecu: goto label_313eec;
        case 0x313ef0u: goto label_313ef0;
        case 0x313ef4u: goto label_313ef4;
        case 0x313ef8u: goto label_313ef8;
        case 0x313efcu: goto label_313efc;
        case 0x313f00u: goto label_313f00;
        case 0x313f04u: goto label_313f04;
        case 0x313f08u: goto label_313f08;
        case 0x313f0cu: goto label_313f0c;
        case 0x313f10u: goto label_313f10;
        case 0x313f14u: goto label_313f14;
        case 0x313f18u: goto label_313f18;
        case 0x313f1cu: goto label_313f1c;
        case 0x313f20u: goto label_313f20;
        case 0x313f24u: goto label_313f24;
        case 0x313f28u: goto label_313f28;
        case 0x313f2cu: goto label_313f2c;
        case 0x313f30u: goto label_313f30;
        case 0x313f34u: goto label_313f34;
        case 0x313f38u: goto label_313f38;
        case 0x313f3cu: goto label_313f3c;
        case 0x313f40u: goto label_313f40;
        case 0x313f44u: goto label_313f44;
        case 0x313f48u: goto label_313f48;
        case 0x313f4cu: goto label_313f4c;
        case 0x313f50u: goto label_313f50;
        case 0x313f54u: goto label_313f54;
        case 0x313f58u: goto label_313f58;
        case 0x313f5cu: goto label_313f5c;
        case 0x313f60u: goto label_313f60;
        case 0x313f64u: goto label_313f64;
        case 0x313f68u: goto label_313f68;
        case 0x313f6cu: goto label_313f6c;
        case 0x313f70u: goto label_313f70;
        case 0x313f74u: goto label_313f74;
        case 0x313f78u: goto label_313f78;
        case 0x313f7cu: goto label_313f7c;
        case 0x313f80u: goto label_313f80;
        case 0x313f84u: goto label_313f84;
        case 0x313f88u: goto label_313f88;
        case 0x313f8cu: goto label_313f8c;
        case 0x313f90u: goto label_313f90;
        case 0x313f94u: goto label_313f94;
        case 0x313f98u: goto label_313f98;
        case 0x313f9cu: goto label_313f9c;
        case 0x313fa0u: goto label_313fa0;
        case 0x313fa4u: goto label_313fa4;
        case 0x313fa8u: goto label_313fa8;
        case 0x313facu: goto label_313fac;
        case 0x313fb0u: goto label_313fb0;
        case 0x313fb4u: goto label_313fb4;
        case 0x313fb8u: goto label_313fb8;
        case 0x313fbcu: goto label_313fbc;
        case 0x313fc0u: goto label_313fc0;
        case 0x313fc4u: goto label_313fc4;
        case 0x313fc8u: goto label_313fc8;
        case 0x313fccu: goto label_313fcc;
        case 0x313fd0u: goto label_313fd0;
        case 0x313fd4u: goto label_313fd4;
        case 0x313fd8u: goto label_313fd8;
        case 0x313fdcu: goto label_313fdc;
        case 0x313fe0u: goto label_313fe0;
        case 0x313fe4u: goto label_313fe4;
        case 0x313fe8u: goto label_313fe8;
        case 0x313fecu: goto label_313fec;
        case 0x313ff0u: goto label_313ff0;
        case 0x313ff4u: goto label_313ff4;
        case 0x313ff8u: goto label_313ff8;
        case 0x313ffcu: goto label_313ffc;
        case 0x314000u: goto label_314000;
        case 0x314004u: goto label_314004;
        case 0x314008u: goto label_314008;
        case 0x31400cu: goto label_31400c;
        case 0x314010u: goto label_314010;
        case 0x314014u: goto label_314014;
        case 0x314018u: goto label_314018;
        case 0x31401cu: goto label_31401c;
        case 0x314020u: goto label_314020;
        case 0x314024u: goto label_314024;
        case 0x314028u: goto label_314028;
        case 0x31402cu: goto label_31402c;
        case 0x314030u: goto label_314030;
        case 0x314034u: goto label_314034;
        case 0x314038u: goto label_314038;
        case 0x31403cu: goto label_31403c;
        case 0x314040u: goto label_314040;
        case 0x314044u: goto label_314044;
        case 0x314048u: goto label_314048;
        case 0x31404cu: goto label_31404c;
        case 0x314050u: goto label_314050;
        case 0x314054u: goto label_314054;
        default: break;
    }

    ctx->pc = 0x313900u;

label_313900:
    // 0x313900: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x313900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_313904:
    // 0x313904: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x313904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_313908:
    // 0x313908: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x313908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_31390c:
    // 0x31390c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31390cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313910:
    // 0x313910: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x313910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_313914:
    // 0x313914: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x313914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_313918:
    // 0x313918: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x313918u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_31391c:
    // 0x31391c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x31391cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_313920:
    // 0x313920: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x313920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_313924:
    // 0x313924: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x313924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_313928:
    // 0x313928: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x313928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_31392c:
    // 0x31392c: 0x14400128  bnez        $v0, . + 4 + (0x128 << 2)
label_313930:
    if (ctx->pc == 0x313930u) {
        ctx->pc = 0x313930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31392Cu;
        // 0x313930: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313934u;
        goto label_313934;
    }
    ctx->pc = 0x31392Cu;
    {
        const bool branch_taken_0x31392c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31392Cu;
        // 0x313930: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31392c) {
            ctx->pc = 0x313DD0u;
            goto label_313dd0;
        }
    }
    ctx->pc = 0x313934u;
label_313934:
    // 0x313934: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x313934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_313938:
    // 0x313938: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x313938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_31393c:
    // 0x31393c: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
label_313940:
    if (ctx->pc == 0x313940u) {
        ctx->pc = 0x313940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31393Cu;
        // 0x313940: 0x2e0200f0  sltiu       $v0, $s0, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313944u;
        goto label_313944;
    }
    ctx->pc = 0x31393Cu;
    {
        const bool branch_taken_0x31393c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31393Cu;
        // 0x313940: 0x2e0200f0  sltiu       $v0, $s0, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31393c) {
            ctx->pc = 0x313DC8u;
            goto label_313dc8;
        }
    }
    ctx->pc = 0x313944u;
label_313944:
    // 0x313944: 0xc0c4b70  jal         func_312DC0
label_313948:
    if (ctx->pc == 0x313948u) {
        ctx->pc = 0x313948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313944u;
        // 0x313948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31394Cu;
        goto label_31394c;
    }
    ctx->pc = 0x313944u;
    SET_GPR_U32(ctx, 31, 0x31394Cu);
    ctx->pc = 0x313948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313944u;
    // 0x313948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DC0u, 0x313944u, 0x31394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31394Cu;
label_31394c:
    // 0x31394c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_313950:
    // 0x313950: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x313950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_313954:
    // 0x313954: 0xc0c4c04  jal         func_313010
label_313958:
    if (ctx->pc == 0x313958u) {
        ctx->pc = 0x313958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313954u;
        // 0x313958: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31395Cu;
        goto label_31395c;
    }
    ctx->pc = 0x313954u;
    SET_GPR_U32(ctx, 31, 0x31395Cu);
    ctx->pc = 0x313958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313954u;
    // 0x313958: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313010u, 0x313954u, 0x31395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31395Cu;
label_31395c:
    // 0x31395c: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
label_313960:
    if (ctx->pc == 0x313960u) {
        ctx->pc = 0x313960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31395Cu;
        // 0x313960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313964u;
        goto label_313964;
    }
    ctx->pc = 0x31395Cu;
    {
        const bool branch_taken_0x31395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31395Cu;
        // 0x313960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31395c) {
            ctx->pc = 0x313D8Cu;
            goto label_313d8c;
        }
    }
    ctx->pc = 0x313964u;
label_313964:
    // 0x313964: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x313964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_313968:
    // 0x313968: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_31396c:
    if (ctx->pc == 0x31396Cu) {
        ctx->pc = 0x31396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313968u;
        // 0x31396c: 0x3c130062  lui         $s3, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313970u;
        goto label_313970;
    }
    ctx->pc = 0x313968u;
    {
        const bool branch_taken_0x313968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313968u;
        // 0x31396c: 0x3c130062  lui         $s3, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313968) {
            ctx->pc = 0x3139F4u;
            goto label_3139f4;
        }
    }
    ctx->pc = 0x313970u;
label_313970:
    // 0x313970: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x313970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_313974:
    // 0x313974: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x313974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313978:
    // 0x313978: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x313978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31397c:
    // 0x31397c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31397cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313980:
    // 0x313980: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x313980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_313984:
    // 0x313984: 0x0  nop
    ctx->pc = 0x313984u;
    // NOP
label_313988:
    // 0x313988: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x313988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31398c:
    // 0x31398c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x31398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_313990:
    // 0x313990: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x313990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313994:
    // 0x313994: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x313994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_313998:
    // 0x313998: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x313998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31399c:
    // 0x31399c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3139a0:
    // 0x3139a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3139a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3139a4:
    // 0x3139a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3139a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3139a8:
    // 0x3139a8: 0x0  nop
    ctx->pc = 0x3139a8u;
    // NOP
label_3139ac:
    // 0x3139ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3139b0:
    if (ctx->pc == 0x3139B0u) {
        ctx->pc = 0x3139B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139ACu;
        // 0x3139b0: 0xac880004  sw          $t0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139B4u;
        goto label_3139b4;
    }
    ctx->pc = 0x3139ACu;
    {
        const bool branch_taken_0x3139ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3139ac) {
            ctx->pc = 0x3139B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3139ACu;
            // 0x3139b0: 0xac880004  sw          $t0, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3139B4u;
            goto label_3139b4;
        }
    }
    ctx->pc = 0x3139B4u;
label_3139b4:
    // 0x3139b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3139b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3139b8:
    // 0x3139b8: 0x0  nop
    ctx->pc = 0x3139b8u;
    // NOP
label_3139bc:
    // 0x3139bc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_3139c0:
    if (ctx->pc == 0x3139C0u) {
        ctx->pc = 0x3139C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139BCu;
        // 0x3139c0: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139C4u;
        goto label_3139c4;
    }
    ctx->pc = 0x3139BCu;
    {
        const bool branch_taken_0x3139bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3139bc) {
            ctx->pc = 0x3139C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3139BCu;
            // 0x3139c0: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3139E0u;
            goto label_3139e0;
        }
    }
    ctx->pc = 0x3139C4u;
label_3139c4:
    // 0x3139c4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3139c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3139c8:
    // 0x3139c8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3139c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3139cc:
    // 0x3139cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3139ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3139d0:
    // 0x3139d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3139d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3139d4:
    // 0x3139d4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3139d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_3139d8:
    // 0x3139d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3139d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3139dc:
    // 0x3139dc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3139dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3139e0:
    // 0x3139e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3139e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3139e4:
    // 0x3139e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3139e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3139e8:
    // 0x3139e8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3139e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3139ec:
    // 0x3139ec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_3139f0:
    if (ctx->pc == 0x3139F0u) {
        ctx->pc = 0x3139F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139ECu;
        // 0x3139f0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3139F4u;
        goto label_3139f4;
    }
    ctx->pc = 0x3139ECu;
    {
        const bool branch_taken_0x3139ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3139F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139ECu;
        // 0x3139f0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139ec) {
            ctx->pc = 0x313988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313988;
        }
    }
    ctx->pc = 0x3139F4u;
label_3139f4:
    // 0x3139f4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3139f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3139f8:
    // 0x3139f8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3139f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3139fc:
    // 0x3139fc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3139fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_313a00:
    // 0x313a00: 0x3a0702d  daddu       $t6, $sp, $zero
    ctx->pc = 0x313a00u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_313a04:
    // 0x313a04: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x313a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_313a08:
    // 0x313a08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x313a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_313a0c:
    // 0x313a0c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x313a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_313a10:
    // 0x313a10: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x313a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313a14:
    // 0x313a14: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x313a14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_313a18:
    // 0x313a18: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x313a18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_313a1c:
    // 0x313a1c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x313a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_313a20:
    // 0x313a20: 0x46002986  mov.s       $f6, $f5
    ctx->pc = 0x313a20u;
    ctx->f[6] = FPU_MOV_S(ctx->f[5]);
label_313a24:
    // 0x313a24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_313a28:
    // 0x313a28: 0x4800061  bltz        $a0, . + 4 + (0x61 << 2)
label_313a2c:
    if (ctx->pc == 0x313A2Cu) {
        ctx->pc = 0x313A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A28u;
        // 0x313a2c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A30u;
        goto label_313a30;
    }
    ctx->pc = 0x313A28u;
    {
        const bool branch_taken_0x313a28 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x313A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A28u;
        // 0x313a2c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a28) {
            ctx->pc = 0x313BB0u;
            goto label_313bb0;
        }
    }
    ctx->pc = 0x313A30u;
label_313a30:
    // 0x313a30: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x313a30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_313a34:
    // 0x313a34: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x313a34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_313a38:
    // 0x313a38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x313a38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_313a3c:
    // 0x313a3c: 0x248dffff  addiu       $t5, $a0, -0x1
    ctx->pc = 0x313a3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_313a40:
    // 0x313a40: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x313a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_313a44:
    // 0x313a44: 0x24ec0008  addiu       $t4, $a3, 0x8
    ctx->pc = 0x313a44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_313a48:
    // 0x313a48: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x313a48u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_313a4c:
    // 0x313a4c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x313a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_313a50:
    // 0x313a50: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x313a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_313a54:
    // 0x313a54: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x313a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_313a58:
    // 0x313a58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x313a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_313a5c:
    // 0x313a5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x313a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_313a60:
    // 0x313a60: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x313a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_313a64:
    // 0x313a64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313a68:
    // 0x313a68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x313a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_313a6c:
    // 0x313a6c: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x313a6cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_313a70:
    // 0x313a70: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x313a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313a74:
    // 0x313a74: 0x0  nop
    ctx->pc = 0x313a74u;
    // NOP
label_313a78:
    // 0x313a78: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_313a7c:
    if (ctx->pc == 0x313A7Cu) {
        ctx->pc = 0x313A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A78u;
        // 0x313a7c: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A80u;
        goto label_313a80;
    }
    ctx->pc = 0x313A78u;
    {
        const bool branch_taken_0x313a78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A78u;
        // 0x313a7c: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a78) {
            ctx->pc = 0x313A88u;
            goto label_313a88;
        }
    }
    ctx->pc = 0x313A80u;
label_313a80:
    // 0x313a80: 0x10000005  b           . + 4 + (0x5 << 2)
label_313a84:
    if (ctx->pc == 0x313A84u) {
        ctx->pc = 0x313A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A80u;
        // 0x313a84: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A88u;
        goto label_313a88;
    }
    ctx->pc = 0x313A80u;
    {
        const bool branch_taken_0x313a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A80u;
        // 0x313a84: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a80) {
            ctx->pc = 0x313A98u;
            goto label_313a98;
        }
    }
    ctx->pc = 0x313A88u;
label_313a88:
    // 0x313a88: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x313a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313a8c:
    // 0x313a8c: 0x0  nop
    ctx->pc = 0x313a8cu;
    // NOP
label_313a90:
    // 0x313a90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_313a94:
    if (ctx->pc == 0x313A94u) {
        ctx->pc = 0x313A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A90u;
        // 0x313a94: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313A98u;
        goto label_313a98;
    }
    ctx->pc = 0x313A90u;
    {
        const bool branch_taken_0x313a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313a90) {
            ctx->pc = 0x313A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313A90u;
            // 0x313a94: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313A98u;
            goto label_313a98;
        }
    }
    ctx->pc = 0x313A98u;
label_313a98:
    // 0x313a98: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x313a98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_313a9c:
    // 0x313a9c: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x313a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_313aa0:
    // 0x313aa0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x313aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_313aa4:
    // 0x313aa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x313aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_313aa8:
    // 0x313aa8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x313aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_313aac:
    // 0x313aac: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x313aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_313ab0:
    // 0x313ab0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313ab4:
    // 0x313ab4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x313ab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_313ab8:
    // 0x313ab8: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x313ab8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_313abc:
    // 0x313abc: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x313abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313ac0:
    // 0x313ac0: 0x0  nop
    ctx->pc = 0x313ac0u;
    // NOP
label_313ac4:
    // 0x313ac4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_313ac8:
    if (ctx->pc == 0x313AC8u) {
        ctx->pc = 0x313AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AC4u;
        // 0x313ac8: 0xa42824  and         $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313ACCu;
        goto label_313acc;
    }
    ctx->pc = 0x313AC4u;
    {
        const bool branch_taken_0x313ac4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AC4u;
        // 0x313ac8: 0xa42824  and         $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ac4) {
            ctx->pc = 0x313AD4u;
            goto label_313ad4;
        }
    }
    ctx->pc = 0x313ACCu;
label_313acc:
    // 0x313acc: 0x10000005  b           . + 4 + (0x5 << 2)
label_313ad0:
    if (ctx->pc == 0x313AD0u) {
        ctx->pc = 0x313AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313ACCu;
        // 0x313ad0: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313AD4u;
        goto label_313ad4;
    }
    ctx->pc = 0x313ACCu;
    {
        const bool branch_taken_0x313acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313ACCu;
        // 0x313ad0: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313acc) {
            ctx->pc = 0x313AE4u;
            goto label_313ae4;
        }
    }
    ctx->pc = 0x313AD4u;
label_313ad4:
    // 0x313ad4: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x313ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313ad8:
    // 0x313ad8: 0x0  nop
    ctx->pc = 0x313ad8u;
    // NOP
label_313adc:
    // 0x313adc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_313ae0:
    if (ctx->pc == 0x313AE0u) {
        ctx->pc = 0x313AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313ADCu;
        // 0x313ae0: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313AE4u;
        goto label_313ae4;
    }
    ctx->pc = 0x313ADCu;
    {
        const bool branch_taken_0x313adc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313adc) {
            ctx->pc = 0x313AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313ADCu;
            // 0x313ae0: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313AE4u;
            goto label_313ae4;
        }
    }
    ctx->pc = 0x313AE4u;
label_313ae4:
    // 0x313ae4: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x313ae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_313ae8:
    // 0x313ae8: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x313ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_313aec:
    // 0x313aec: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x313aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_313af0:
    // 0x313af0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x313af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_313af4:
    // 0x313af4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x313af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_313af8:
    // 0x313af8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x313af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_313afc:
    // 0x313afc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313b00:
    // 0x313b00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x313b00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_313b04:
    // 0x313b04: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x313b04u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_313b08:
    // 0x313b08: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x313b08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313b0c:
    // 0x313b0c: 0x0  nop
    ctx->pc = 0x313b0cu;
    // NOP
label_313b10:
    // 0x313b10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_313b14:
    if (ctx->pc == 0x313B14u) {
        ctx->pc = 0x313B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B10u;
        // 0x313b14: 0xa42824  and         $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B18u;
        goto label_313b18;
    }
    ctx->pc = 0x313B10u;
    {
        const bool branch_taken_0x313b10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B10u;
        // 0x313b14: 0xa42824  and         $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b10) {
            ctx->pc = 0x313B20u;
            goto label_313b20;
        }
    }
    ctx->pc = 0x313B18u;
label_313b18:
    // 0x313b18: 0x10000005  b           . + 4 + (0x5 << 2)
label_313b1c:
    if (ctx->pc == 0x313B1Cu) {
        ctx->pc = 0x313B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B18u;
        // 0x313b1c: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B20u;
        goto label_313b20;
    }
    ctx->pc = 0x313B18u;
    {
        const bool branch_taken_0x313b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B18u;
        // 0x313b1c: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b18) {
            ctx->pc = 0x313B30u;
            goto label_313b30;
        }
    }
    ctx->pc = 0x313B20u;
label_313b20:
    // 0x313b20: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x313b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313b24:
    // 0x313b24: 0x0  nop
    ctx->pc = 0x313b24u;
    // NOP
label_313b28:
    // 0x313b28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_313b2c:
    if (ctx->pc == 0x313B2Cu) {
        ctx->pc = 0x313B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B28u;
        // 0x313b2c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B30u;
        goto label_313b30;
    }
    ctx->pc = 0x313B28u;
    {
        const bool branch_taken_0x313b28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313b28) {
            ctx->pc = 0x313B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313B28u;
            // 0x313b2c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313B30u;
            goto label_313b30;
        }
    }
    ctx->pc = 0x313B30u;
label_313b30:
    // 0x313b30: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x313b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_313b34:
    // 0x313b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313b38:
    // 0x313b38: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_313b3c:
    if (ctx->pc == 0x313B3Cu) {
        ctx->pc = 0x313B40u;
        goto label_313b40;
    }
    ctx->pc = 0x313B38u;
    {
        const bool branch_taken_0x313b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x313b38) {
            ctx->pc = 0x313B4Cu;
            goto label_313b4c;
        }
    }
    ctx->pc = 0x313B40u;
label_313b40:
    // 0x313b40: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x313b40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_313b44:
    // 0x313b44: 0x10000017  b           . + 4 + (0x17 << 2)
label_313b48:
    if (ctx->pc == 0x313B48u) {
        ctx->pc = 0x313B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B44u;
        // 0x313b48: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B4Cu;
        goto label_313b4c;
    }
    ctx->pc = 0x313B44u;
    {
        const bool branch_taken_0x313b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B44u;
        // 0x313b48: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b44) {
            ctx->pc = 0x313BA4u;
            goto label_313ba4;
        }
    }
    ctx->pc = 0x313B4Cu;
label_313b4c:
    // 0x313b4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_313b50:
    if (ctx->pc == 0x313B50u) {
        ctx->pc = 0x313B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B4Cu;
        // 0x313b50: 0x2c420004  sltiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B54u;
        goto label_313b54;
    }
    ctx->pc = 0x313B4Cu;
    {
        const bool branch_taken_0x313b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B4Cu;
        // 0x313b50: 0x2c420004  sltiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b4c) {
            ctx->pc = 0x313B68u;
            goto label_313b68;
        }
    }
    ctx->pc = 0x313B54u;
label_313b54:
    // 0x313b54: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_313b58:
    if (ctx->pc == 0x313B58u) {
        ctx->pc = 0x313B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B54u;
        // 0x313b58: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B5Cu;
        goto label_313b5c;
    }
    ctx->pc = 0x313B54u;
    {
        const bool branch_taken_0x313b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B54u;
        // 0x313b58: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b54) {
            ctx->pc = 0x313BA8u;
            goto label_313ba8;
        }
    }
    ctx->pc = 0x313B5Cu;
label_313b5c:
    // 0x313b5c: 0xacef0004  sw          $t7, 0x4($a3)
    ctx->pc = 0x313b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 15));
label_313b60:
    // 0x313b60: 0x10000011  b           . + 4 + (0x11 << 2)
label_313b64:
    if (ctx->pc == 0x313B64u) {
        ctx->pc = 0x313B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B60u;
        // 0x313b64: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B68u;
        goto label_313b68;
    }
    ctx->pc = 0x313B60u;
    {
        const bool branch_taken_0x313b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B60u;
        // 0x313b64: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b60) {
            ctx->pc = 0x313BA8u;
            goto label_313ba8;
        }
    }
    ctx->pc = 0x313B68u;
label_313b68:
    // 0x313b68: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x313b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313b6c:
    // 0x313b6c: 0x0  nop
    ctx->pc = 0x313b6cu;
    // NOP
label_313b70:
    // 0x313b70: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_313b74:
    if (ctx->pc == 0x313B74u) {
        ctx->pc = 0x313B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B70u;
        // 0x313b74: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B78u;
        goto label_313b78;
    }
    ctx->pc = 0x313B70u;
    {
        const bool branch_taken_0x313b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x313b70) {
            ctx->pc = 0x313B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313B70u;
            // 0x313b74: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313B90u;
            goto label_313b90;
        }
    }
    ctx->pc = 0x313B78u;
label_313b78:
    // 0x313b78: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x313b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313b7c:
    // 0x313b7c: 0xacef0004  sw          $t7, 0x4($a3)
    ctx->pc = 0x313b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 15));
label_313b80:
    // 0x313b80: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_313b84:
    if (ctx->pc == 0x313B84u) {
        ctx->pc = 0x313B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B80u;
        // 0x313b84: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B88u;
        goto label_313b88;
    }
    ctx->pc = 0x313B80u;
    {
        const bool branch_taken_0x313b80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B80u;
        // 0x313b84: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b80) {
            ctx->pc = 0x313BA4u;
            goto label_313ba4;
        }
    }
    ctx->pc = 0x313B88u;
label_313b88:
    // 0x313b88: 0x10000006  b           . + 4 + (0x6 << 2)
label_313b8c:
    if (ctx->pc == 0x313B8Cu) {
        ctx->pc = 0x313B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B88u;
        // 0x313b8c: 0x46002146  mov.s       $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313B90u;
        goto label_313b90;
    }
    ctx->pc = 0x313B88u;
    {
        const bool branch_taken_0x313b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B88u;
        // 0x313b8c: 0x46002146  mov.s       $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b88) {
            ctx->pc = 0x313BA4u;
            goto label_313ba4;
        }
    }
    ctx->pc = 0x313B90u;
label_313b90:
    // 0x313b90: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x313b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_313b94:
    // 0x313b94: 0x0  nop
    ctx->pc = 0x313b94u;
    // NOP
label_313b98:
    // 0x313b98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_313b9c:
    if (ctx->pc == 0x313B9Cu) {
        ctx->pc = 0x313B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B98u;
        // 0x313b9c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313BA0u;
        goto label_313ba0;
    }
    ctx->pc = 0x313B98u;
    {
        const bool branch_taken_0x313b98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B98u;
        // 0x313b9c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b98) {
            ctx->pc = 0x313BA4u;
            goto label_313ba4;
        }
    }
    ctx->pc = 0x313BA0u;
label_313ba0:
    // 0x313ba0: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x313ba0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
label_313ba4:
    // 0x313ba4: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x313ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_313ba8:
    // 0x313ba8: 0x481ffa3  bgez        $a0, . + 4 + (-0x5D << 2)
label_313bac:
    if (ctx->pc == 0x313BACu) {
        ctx->pc = 0x313BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BA8u;
        // 0x313bac: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313BB0u;
        goto label_313bb0;
    }
    ctx->pc = 0x313BA8u;
    {
        const bool branch_taken_0x313ba8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x313BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BA8u;
        // 0x313bac: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ba8) {
            ctx->pc = 0x313A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313a38;
        }
    }
    ctx->pc = 0x313BB0u;
label_313bb0:
    // 0x313bb0: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x313bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_313bb4:
    // 0x313bb4: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x313bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_313bb8:
    // 0x313bb8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x313bb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_313bbc:
    // 0x313bbc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x313bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_313bc0:
    // 0x313bc0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x313bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_313bc4:
    // 0x313bc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x313bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_313bc8:
    // 0x313bc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x313bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313bcc:
    // 0x313bcc: 0xe5c0000c  swc1        $f0, 0xC($t6)
    ctx->pc = 0x313bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
label_313bd0:
    // 0x313bd0: 0xadca0000  sw          $t2, 0x0($t6)
    ctx->pc = 0x313bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 10));
label_313bd4:
    // 0x313bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x313bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313bd8:
    // 0x313bd8: 0xadcb0004  sw          $t3, 0x4($t6)
    ctx->pc = 0x313bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 11));
label_313bdc:
    // 0x313bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313be0:
    // 0x313be0: 0x10800093  beqz        $a0, . + 4 + (0x93 << 2)
label_313be4:
    if (ctx->pc == 0x313BE4u) {
        ctx->pc = 0x313BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BE0u;
        // 0x313be4: 0xe5c10008  swc1        $f1, 0x8($t6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x313BE8u;
        goto label_313be8;
    }
    ctx->pc = 0x313BE0u;
    {
        const bool branch_taken_0x313be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x313BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BE0u;
        // 0x313be4: 0xe5c10008  swc1        $f1, 0x8($t6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313be0) {
            ctx->pc = 0x313E30u;
            goto label_313e30;
        }
    }
    ctx->pc = 0x313BE8u;
label_313be8:
    // 0x313be8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x313be8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_313bec:
    // 0x313bec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x313becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313bf0:
    // 0x313bf0: 0x31470003  andi        $a3, $t2, 0x3
    ctx->pc = 0x313bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
label_313bf4:
    // 0x313bf4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x313bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_313bf8:
    // 0x313bf8: 0x1940001c  blez        $t2, . + 4 + (0x1C << 2)
label_313bfc:
    if (ctx->pc == 0x313BFCu) {
        ctx->pc = 0x313BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BF8u;
        // 0x313bfc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C00u;
        goto label_313c00;
    }
    ctx->pc = 0x313BF8u;
    {
        const bool branch_taken_0x313bf8 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x313BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BF8u;
        // 0x313bfc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bf8) {
            ctx->pc = 0x313C6Cu;
            goto label_313c6c;
        }
    }
    ctx->pc = 0x313C00u;
label_313c00:
    // 0x313c00: 0x10e0002a  beqz        $a3, . + 4 + (0x2A << 2)
label_313c04:
    if (ctx->pc == 0x313C04u) {
        ctx->pc = 0x313C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C00u;
        // 0x313c04: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C08u;
        goto label_313c08;
    }
    ctx->pc = 0x313C00u;
    {
        const bool branch_taken_0x313c00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C00u;
        // 0x313c04: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c00) {
            ctx->pc = 0x313CACu;
            goto label_313cac;
        }
    }
    ctx->pc = 0x313C08u;
label_313c08:
    // 0x313c08: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_313c0c:
    if (ctx->pc == 0x313C0Cu) {
        ctx->pc = 0x313C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C08u;
        // 0x313c0c: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C10u;
        goto label_313c10;
    }
    ctx->pc = 0x313C08u;
    {
        const bool branch_taken_0x313c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313c08) {
            ctx->pc = 0x313C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313C08u;
            // 0x313c0c: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C70u;
            goto label_313c70;
        }
    }
    ctx->pc = 0x313C10u;
label_313c10:
    // 0x313c10: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x313c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_313c14:
    // 0x313c14: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_313c18:
    if (ctx->pc == 0x313C18u) {
        ctx->pc = 0x313C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C14u;
        // 0x313c18: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C1Cu;
        goto label_313c1c;
    }
    ctx->pc = 0x313C14u;
    {
        const bool branch_taken_0x313c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313c14) {
            ctx->pc = 0x313C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313C14u;
            // 0x313c18: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C38u;
            goto label_313c38;
        }
    }
    ctx->pc = 0x313C1Cu;
label_313c1c:
    // 0x313c1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x313c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_313c20:
    // 0x313c20: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
label_313c24:
    if (ctx->pc == 0x313C24u) {
        ctx->pc = 0x313C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C20u;
        // 0x313c24: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C28u;
        goto label_313c28;
    }
    ctx->pc = 0x313C20u;
    {
        const bool branch_taken_0x313c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x313C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C20u;
        // 0x313c24: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c20) {
            ctx->pc = 0x313C30u;
            goto label_313c30;
        }
    }
    ctx->pc = 0x313C28u;
label_313c28:
    // 0x313c28: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x313c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_313c2c:
    // 0x313c2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x313c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313c30:
    // 0x313c30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x313c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_313c34:
    // 0x313c34: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x313c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_313c38:
    // 0x313c38: 0x5449000b  bnel        $v0, $t1, . + 4 + (0xB << 2)
label_313c3c:
    if (ctx->pc == 0x313C3Cu) {
        ctx->pc = 0x313C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C38u;
        // 0x313c3c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C40u;
        goto label_313c40;
    }
    ctx->pc = 0x313C38u;
    {
        const bool branch_taken_0x313c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x313c38) {
            ctx->pc = 0x313C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313C38u;
            // 0x313c3c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C68u;
            goto label_313c68;
        }
    }
    ctx->pc = 0x313C40u;
label_313c40:
    // 0x313c40: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x313c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_313c44:
    // 0x313c44: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_313c48:
    if (ctx->pc == 0x313C48u) {
        ctx->pc = 0x313C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C44u;
        // 0x313c48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C4Cu;
        goto label_313c4c;
    }
    ctx->pc = 0x313C44u;
    {
        const bool branch_taken_0x313c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313c44) {
            ctx->pc = 0x313C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313C44u;
            // 0x313c48: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C60u;
            goto label_313c60;
        }
    }
    ctx->pc = 0x313C4Cu;
label_313c4c:
    // 0x313c4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x313c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313c50:
    // 0x313c50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x313c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313c54:
    // 0x313c54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x313c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_313c58:
    // 0x313c58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x313c58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_313c5c:
    // 0x313c5c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x313c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_313c60:
    // 0x313c60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x313c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_313c64:
    // 0x313c64: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x313c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_313c68:
    // 0x313c68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x313c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_313c6c:
    // 0x313c6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x313c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_313c70:
    // 0x313c70: 0x5449000b  bnel        $v0, $t1, . + 4 + (0xB << 2)
label_313c74:
    if (ctx->pc == 0x313C74u) {
        ctx->pc = 0x313C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C70u;
        // 0x313c74: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C78u;
        goto label_313c78;
    }
    ctx->pc = 0x313C70u;
    {
        const bool branch_taken_0x313c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x313c70) {
            ctx->pc = 0x313C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313C70u;
            // 0x313c74: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313CA0u;
            goto label_313ca0;
        }
    }
    ctx->pc = 0x313C78u;
label_313c78:
    // 0x313c78: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x313c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_313c7c:
    // 0x313c7c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_313c80:
    if (ctx->pc == 0x313C80u) {
        ctx->pc = 0x313C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C7Cu;
        // 0x313c80: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313C84u;
        goto label_313c84;
    }
    ctx->pc = 0x313C7Cu;
    {
        const bool branch_taken_0x313c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313c7c) {
            ctx->pc = 0x313C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313C7Cu;
            // 0x313c80: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313C98u;
            goto label_313c98;
        }
    }
    ctx->pc = 0x313C84u;
label_313c84:
    // 0x313c84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x313c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313c88:
    // 0x313c88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x313c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313c8c:
    // 0x313c8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x313c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_313c90:
    // 0x313c90: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x313c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_313c94:
    // 0x313c94: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x313c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_313c98:
    // 0x313c98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x313c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_313c9c:
    // 0x313c9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x313c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_313ca0:
    // 0x313ca0: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x313ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_313ca4:
    // 0x313ca4: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_313ca8:
    if (ctx->pc == 0x313CA8u) {
        ctx->pc = 0x313CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CA4u;
        // 0x313ca8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313CACu;
        goto label_313cac;
    }
    ctx->pc = 0x313CA4u;
    {
        const bool branch_taken_0x313ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CA4u;
        // 0x313ca8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ca4) {
            ctx->pc = 0x313E30u;
            goto label_313e30;
        }
    }
    ctx->pc = 0x313CACu;
label_313cac:
    // 0x313cac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x313cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_313cb0:
    // 0x313cb0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x313cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_313cb4:
    // 0x313cb4: 0x5449000b  bnel        $v0, $t1, . + 4 + (0xB << 2)
label_313cb8:
    if (ctx->pc == 0x313CB8u) {
        ctx->pc = 0x313CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CB4u;
        // 0x313cb8: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313CBCu;
        goto label_313cbc;
    }
    ctx->pc = 0x313CB4u;
    {
        const bool branch_taken_0x313cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x313cb4) {
            ctx->pc = 0x313CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313CB4u;
            // 0x313cb8: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313CE4u;
            goto label_313ce4;
        }
    }
    ctx->pc = 0x313CBCu;
label_313cbc:
    // 0x313cbc: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x313cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_313cc0:
    // 0x313cc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_313cc4:
    if (ctx->pc == 0x313CC4u) {
        ctx->pc = 0x313CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CC0u;
        // 0x313cc4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313CC8u;
        goto label_313cc8;
    }
    ctx->pc = 0x313CC0u;
    {
        const bool branch_taken_0x313cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313cc0) {
            ctx->pc = 0x313CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313CC0u;
            // 0x313cc4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313CDCu;
            goto label_313cdc;
        }
    }
    ctx->pc = 0x313CC8u;
label_313cc8:
    // 0x313cc8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x313cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_313ccc:
    // 0x313ccc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x313cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313cd0:
    // 0x313cd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x313cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_313cd4:
    // 0x313cd4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x313cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_313cd8:
    // 0x313cd8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x313cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_313cdc:
    // 0x313cdc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x313cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_313ce0:
    // 0x313ce0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x313ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_313ce4:
    // 0x313ce4: 0x1449000a  bne         $v0, $t1, . + 4 + (0xA << 2)
label_313ce8:
    if (ctx->pc == 0x313CE8u) {
        ctx->pc = 0x313CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CE4u;
        // 0x313ce8: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313CECu;
        goto label_313cec;
    }
    ctx->pc = 0x313CE4u;
    {
        const bool branch_taken_0x313ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x313CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CE4u;
        // 0x313ce8: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ce4) {
            ctx->pc = 0x313D10u;
            goto label_313d10;
        }
    }
    ctx->pc = 0x313CECu;
label_313cec:
    // 0x313cec: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x313cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_313cf0:
    // 0x313cf0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_313cf4:
    if (ctx->pc == 0x313CF4u) {
        ctx->pc = 0x313CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CF0u;
        // 0x313cf4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313CF8u;
        goto label_313cf8;
    }
    ctx->pc = 0x313CF0u;
    {
        const bool branch_taken_0x313cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313cf0) {
            ctx->pc = 0x313CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313CF0u;
            // 0x313cf4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D0Cu;
            goto label_313d0c;
        }
    }
    ctx->pc = 0x313CF8u;
label_313cf8:
    // 0x313cf8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x313cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_313cfc:
    // 0x313cfc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x313cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313d00:
    // 0x313d00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x313d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_313d04:
    // 0x313d04: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x313d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_313d08:
    // 0x313d08: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x313d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_313d0c:
    // 0x313d0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x313d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_313d10:
    // 0x313d10: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x313d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_313d14:
    // 0x313d14: 0x1449000a  bne         $v0, $t1, . + 4 + (0xA << 2)
label_313d18:
    if (ctx->pc == 0x313D18u) {
        ctx->pc = 0x313D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D14u;
        // 0x313d18: 0x24c30002  addiu       $v1, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D1Cu;
        goto label_313d1c;
    }
    ctx->pc = 0x313D14u;
    {
        const bool branch_taken_0x313d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x313D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D14u;
        // 0x313d18: 0x24c30002  addiu       $v1, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d14) {
            ctx->pc = 0x313D40u;
            goto label_313d40;
        }
    }
    ctx->pc = 0x313D1Cu;
label_313d1c:
    // 0x313d1c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x313d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_313d20:
    // 0x313d20: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_313d24:
    if (ctx->pc == 0x313D24u) {
        ctx->pc = 0x313D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D20u;
        // 0x313d24: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D28u;
        goto label_313d28;
    }
    ctx->pc = 0x313D20u;
    {
        const bool branch_taken_0x313d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313d20) {
            ctx->pc = 0x313D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D20u;
            // 0x313d24: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D3Cu;
            goto label_313d3c;
        }
    }
    ctx->pc = 0x313D28u;
label_313d28:
    // 0x313d28: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x313d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_313d2c:
    // 0x313d2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x313d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313d30:
    // 0x313d30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x313d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_313d34:
    // 0x313d34: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x313d34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_313d38:
    // 0x313d38: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x313d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_313d3c:
    // 0x313d3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x313d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_313d40:
    // 0x313d40: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x313d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_313d44:
    // 0x313d44: 0x1449000a  bne         $v0, $t1, . + 4 + (0xA << 2)
label_313d48:
    if (ctx->pc == 0x313D48u) {
        ctx->pc = 0x313D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D44u;
        // 0x313d48: 0x24c30003  addiu       $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D4Cu;
        goto label_313d4c;
    }
    ctx->pc = 0x313D44u;
    {
        const bool branch_taken_0x313d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x313D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D44u;
        // 0x313d48: 0x24c30003  addiu       $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d44) {
            ctx->pc = 0x313D70u;
            goto label_313d70;
        }
    }
    ctx->pc = 0x313D4Cu;
label_313d4c:
    // 0x313d4c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x313d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_313d50:
    // 0x313d50: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_313d54:
    if (ctx->pc == 0x313D54u) {
        ctx->pc = 0x313D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D50u;
        // 0x313d54: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D58u;
        goto label_313d58;
    }
    ctx->pc = 0x313D50u;
    {
        const bool branch_taken_0x313d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313d50) {
            ctx->pc = 0x313D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D50u;
            // 0x313d54: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D6Cu;
            goto label_313d6c;
        }
    }
    ctx->pc = 0x313D58u;
label_313d58:
    // 0x313d58: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x313d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_313d5c:
    // 0x313d5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x313d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313d60:
    // 0x313d60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x313d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_313d64:
    // 0x313d64: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x313d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_313d68:
    // 0x313d68: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x313d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_313d6c:
    // 0x313d6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x313d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_313d70:
    // 0x313d70: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x313d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_313d74:
    // 0x313d74: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x313d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_313d78:
    // 0x313d78: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x313d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_313d7c:
    // 0x313d7c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_313d80:
    if (ctx->pc == 0x313D80u) {
        ctx->pc = 0x313D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D7Cu;
        // 0x313d80: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D84u;
        goto label_313d84;
    }
    ctx->pc = 0x313D7Cu;
    {
        const bool branch_taken_0x313d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D7Cu;
        // 0x313d80: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d7c) {
            ctx->pc = 0x313CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313cb0;
        }
    }
    ctx->pc = 0x313D84u;
label_313d84:
    // 0x313d84: 0x1000002b  b           . + 4 + (0x2B << 2)
label_313d88:
    if (ctx->pc == 0x313D88u) {
        ctx->pc = 0x313D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D84u;
        // 0x313d88: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D8Cu;
        goto label_313d8c;
    }
    ctx->pc = 0x313D84u;
    {
        const bool branch_taken_0x313d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D84u;
        // 0x313d88: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d84) {
            ctx->pc = 0x313E34u;
            goto label_313e34;
        }
    }
    ctx->pc = 0x313D8Cu;
label_313d8c:
    // 0x313d8c: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x313d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_313d90:
    // 0x313d90: 0x2e0200f0  sltiu       $v0, $s0, 0xF0
    ctx->pc = 0x313d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)240) ? 1 : 0);
label_313d94:
    // 0x313d94: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_313d98:
    if (ctx->pc == 0x313D98u) {
        ctx->pc = 0x313D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D94u;
        // 0x313d98: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313D9Cu;
        goto label_313d9c;
    }
    ctx->pc = 0x313D94u;
    {
        const bool branch_taken_0x313d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D94u;
        // 0x313d98: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d94) {
            ctx->pc = 0x313DD0u;
            goto label_313dd0;
        }
    }
    ctx->pc = 0x313D9Cu;
label_313d9c:
    // 0x313d9c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x313d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313da0:
    // 0x313da0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x313da0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_313da4:
    // 0x313da4: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x313da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_313da8:
    // 0x313da8: 0x2031023  subu        $v0, $s0, $v1
    ctx->pc = 0x313da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_313dac:
    // 0x313dac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x313dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_313db0:
    // 0x313db0: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x313db0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_313db4:
    // 0x313db4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x313db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_313db8:
    // 0x313db8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x313db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_313dbc:
    // 0x313dbc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x313dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_313dc0:
    // 0x313dc0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_313dc4:
    if (ctx->pc == 0x313DC4u) {
        ctx->pc = 0x313DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DC0u;
        // 0x313dc4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DC8u;
        goto label_313dc8;
    }
    ctx->pc = 0x313DC0u;
    {
        const bool branch_taken_0x313dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DC0u;
        // 0x313dc4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dc0) {
            ctx->pc = 0x313E30u;
            goto label_313e30;
        }
    }
    ctx->pc = 0x313DC8u;
label_313dc8:
    // 0x313dc8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_313dcc:
    if (ctx->pc == 0x313DCCu) {
        ctx->pc = 0x313DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DC8u;
        // 0x313dcc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DD0u;
        goto label_313dd0;
    }
    ctx->pc = 0x313DC8u;
    {
        const bool branch_taken_0x313dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DC8u;
        // 0x313dcc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313dc8) {
            ctx->pc = 0x313E08u;
            goto label_313e08;
        }
    }
    ctx->pc = 0x313DD0u;
label_313dd0:
    // 0x313dd0: 0x8e310030  lw          $s1, 0x30($s1)
    ctx->pc = 0x313dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_313dd4:
    // 0x313dd4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x313dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_313dd8:
    // 0x313dd8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x313dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_313ddc:
    // 0x313ddc: 0x40f809  jalr        $v0
label_313de0:
    if (ctx->pc == 0x313DE0u) {
        ctx->pc = 0x313DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DDCu;
        // 0x313de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DE4u;
        goto label_313de4;
    }
    ctx->pc = 0x313DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x313DE4u);
        ctx->pc = 0x313DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DDCu;
        // 0x313de0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313DDCu, 0x313DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313DE4u;
label_313de4:
    // 0x313de4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x313de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313de8:
    // 0x313de8: 0x10600092  beqz        $v1, . + 4 + (0x92 << 2)
label_313dec:
    if (ctx->pc == 0x313DECu) {
        ctx->pc = 0x313DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DE8u;
        // 0x313dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313DF0u;
        goto label_313df0;
    }
    ctx->pc = 0x313DE8u;
    {
        const bool branch_taken_0x313de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DE8u;
        // 0x313dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313de8) {
            ctx->pc = 0x314034u;
            goto label_314034;
        }
    }
    ctx->pc = 0x313DF0u;
label_313df0:
    // 0x313df0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x313df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_313df4:
    // 0x313df4: 0xa4700004  sh          $s0, 0x4($v1)
    ctx->pc = 0x313df4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 16));
label_313df8:
    // 0x313df8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x313df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_313dfc:
    // 0x313dfc: 0xa4710006  sh          $s1, 0x6($v1)
    ctx->pc = 0x313dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 17));
label_313e00:
    // 0x313e00: 0x1000008c  b           . + 4 + (0x8C << 2)
label_313e04:
    if (ctx->pc == 0x313E04u) {
        ctx->pc = 0x313E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E00u;
        // 0x313e04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E08u;
        goto label_313e08;
    }
    ctx->pc = 0x313E00u;
    {
        const bool branch_taken_0x313e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E00u;
        // 0x313e04: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e00) {
            ctx->pc = 0x314034u;
            goto label_314034;
        }
    }
    ctx->pc = 0x313E08u;
label_313e08:
    // 0x313e08: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x313e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_313e0c:
    // 0x313e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x313e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313e10:
    // 0x313e10: 0xc1035f6  jal         func_40D7D8
label_313e14:
    if (ctx->pc == 0x313E14u) {
        ctx->pc = 0x313E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E10u;
        // 0x313e14: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E18u;
        goto label_313e18;
    }
    ctx->pc = 0x313E10u;
    SET_GPR_U32(ctx, 31, 0x313E18u);
    ctx->pc = 0x313E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E10u;
    // 0x313e14: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x313E10u, 0x313E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E18u;
label_313e18:
    // 0x313e18: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x313e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_313e1c:
    // 0x313e1c: 0xc103628  jal         func_40D8A0
label_313e20:
    if (ctx->pc == 0x313E20u) {
        ctx->pc = 0x313E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E1Cu;
        // 0x313e20: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E24u;
        goto label_313e24;
    }
    ctx->pc = 0x313E1Cu;
    SET_GPR_U32(ctx, 31, 0x313E24u);
    ctx->pc = 0x313E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E1Cu;
    // 0x313e20: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x313E1Cu, 0x313E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E24u;
label_313e24:
    // 0x313e24: 0x0  nop
    ctx->pc = 0x313e24u;
    // NOP
label_313e28:
    // 0x313e28: 0x10000082  b           . + 4 + (0x82 << 2)
label_313e2c:
    if (ctx->pc == 0x313E2Cu) {
        ctx->pc = 0x313E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E28u;
        // 0x313e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E30u;
        goto label_313e30;
    }
    ctx->pc = 0x313E28u;
    {
        const bool branch_taken_0x313e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E28u;
        // 0x313e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e28) {
            ctx->pc = 0x314034u;
            goto label_314034;
        }
    }
    ctx->pc = 0x313E30u;
label_313e30:
    // 0x313e30: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x313e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_313e34:
    // 0x313e34: 0x2664e880  addiu       $a0, $s3, -0x1780
    ctx->pc = 0x313e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_313e38:
    // 0x313e38: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x313e38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_313e3c:
    // 0x313e3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313e40:
    // 0x313e40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x313e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_313e44:
    // 0x313e44: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x313e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_313e48:
    // 0x313e48: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x313e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_313e4c:
    // 0x313e4c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x313e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_313e50:
    // 0x313e50: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x313e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_313e54:
    // 0x313e54: 0x40f809  jalr        $v0
label_313e58:
    if (ctx->pc == 0x313E58u) {
        ctx->pc = 0x313E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E54u;
        // 0x313e58: 0xc7b5000c  lwc1        $f21, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E5Cu;
        goto label_313e5c;
    }
    ctx->pc = 0x313E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x313E5Cu);
        ctx->pc = 0x313E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E54u;
        // 0x313e58: 0xc7b5000c  lwc1        $f21, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313E54u, 0x313E5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313E5Cu;
label_313e5c:
    // 0x313e5c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_313e60:
    if (ctx->pc == 0x313E60u) {
        ctx->pc = 0x313E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E5Cu;
        // 0x313e60: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E64u;
        goto label_313e64;
    }
    ctx->pc = 0x313E5Cu;
    {
        const bool branch_taken_0x313e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313e5c) {
            ctx->pc = 0x313E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313E5Cu;
            // 0x313e60: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313E6Cu;
            goto label_313e6c;
        }
    }
    ctx->pc = 0x313E64u;
label_313e64:
    // 0x313e64: 0x10000004  b           . + 4 + (0x4 << 2)
label_313e68:
    if (ctx->pc == 0x313E68u) {
        ctx->pc = 0x313E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E64u;
        // 0x313e68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E6Cu;
        goto label_313e6c;
    }
    ctx->pc = 0x313E64u;
    {
        const bool branch_taken_0x313e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E64u;
        // 0x313e68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e64) {
            ctx->pc = 0x313E78u;
            goto label_313e78;
        }
    }
    ctx->pc = 0x313E6Cu;
label_313e6c:
    // 0x313e6c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x313e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_313e70:
    // 0x313e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_313e74:
    // 0x313e74: 0xe4550010  swc1        $f21, 0x10($v0)
    ctx->pc = 0x313e74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_313e78:
    // 0x313e78: 0x1200ffeb  beqz        $s0, . + 4 + (-0x15 << 2)
label_313e7c:
    if (ctx->pc == 0x313E7Cu) {
        ctx->pc = 0x313E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E78u;
        // 0x313e7c: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313E80u;
        goto label_313e80;
    }
    ctx->pc = 0x313E78u;
    {
        const bool branch_taken_0x313e78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E78u;
        // 0x313e7c: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e78) {
            ctx->pc = 0x313E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313e28;
        }
    }
    ctx->pc = 0x313E80u;
label_313e80:
    // 0x313e80: 0x6a240007  ldl         $a0, 0x7($s1)
    ctx->pc = 0x313e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_313e84:
    // 0x313e84: 0x6e240000  ldr         $a0, 0x0($s1)
    ctx->pc = 0x313e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_313e88:
    // 0x313e88: 0x6a25000f  ldl         $a1, 0xF($s1)
    ctx->pc = 0x313e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_313e8c:
    // 0x313e8c: 0x6e250008  ldr         $a1, 0x8($s1)
    ctx->pc = 0x313e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_313e90:
    // 0x313e90: 0x6a220017  ldl         $v0, 0x17($s1)
    ctx->pc = 0x313e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_313e94:
    // 0x313e94: 0x6e220010  ldr         $v0, 0x10($s1)
    ctx->pc = 0x313e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_313e98:
    // 0x313e98: 0x6a23001f  ldl         $v1, 0x1F($s1)
    ctx->pc = 0x313e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_313e9c:
    // 0x313e9c: 0x6e230018  ldr         $v1, 0x18($s1)
    ctx->pc = 0x313e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_313ea0:
    // 0x313ea0: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x313ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ea4:
    // 0x313ea4: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x313ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ea8:
    // 0x313ea8: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x313ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313eac:
    // 0x313eac: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x313eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313eb0:
    // 0x313eb0: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x313eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313eb4:
    // 0x313eb4: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x313eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313eb8:
    // 0x313eb8: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x313eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ebc:
    // 0x313ebc: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x313ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ec0:
    // 0x313ec0: 0x6a240027  ldl         $a0, 0x27($s1)
    ctx->pc = 0x313ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_313ec4:
    // 0x313ec4: 0x6e240020  ldr         $a0, 0x20($s1)
    ctx->pc = 0x313ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_313ec8:
    // 0x313ec8: 0x6a25002f  ldl         $a1, 0x2F($s1)
    ctx->pc = 0x313ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_313ecc:
    // 0x313ecc: 0x6e250028  ldr         $a1, 0x28($s1)
    ctx->pc = 0x313eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_313ed0:
    // 0x313ed0: 0x6a220037  ldl         $v0, 0x37($s1)
    ctx->pc = 0x313ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_313ed4:
    // 0x313ed4: 0x6e220030  ldr         $v0, 0x30($s1)
    ctx->pc = 0x313ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_313ed8:
    // 0x313ed8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x313ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_313edc:
    // 0x313edc: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x313edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ee0:
    // 0x313ee0: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x313ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ee4:
    // 0x313ee4: 0xb3a5004f  sdl         $a1, 0x4F($sp)
    ctx->pc = 0x313ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ee8:
    // 0x313ee8: 0xb7a50048  sdr         $a1, 0x48($sp)
    ctx->pc = 0x313ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313eec:
    // 0x313eec: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x313eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ef0:
    // 0x313ef0: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x313ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313ef4:
    // 0x313ef4: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x313ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_313ef8:
    // 0x313ef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313efc:
    // 0x313efc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x313efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_313f00:
    // 0x313f00: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x313f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_313f04:
    // 0x313f04: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x313f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313f08:
    // 0x313f08: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x313f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_313f0c:
    // 0x313f0c: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x313f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
label_313f10:
    // 0x313f10: 0xc0c4e40  jal         func_313900
label_313f14:
    if (ctx->pc == 0x313F14u) {
        ctx->pc = 0x313F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F10u;
        // 0x313f14: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x313F18u;
        goto label_313f18;
    }
    ctx->pc = 0x313F10u;
    SET_GPR_U32(ctx, 31, 0x313F18u);
    ctx->pc = 0x313F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313F10u;
    // 0x313f14: 0xe4400034  swc1        $f0, 0x34($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x313900u;
    goto label_313900;
    ctx->pc = 0x313F18u;
label_313f18:
    // 0x313f18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_313f1c:
    if (ctx->pc == 0x313F1Cu) {
        ctx->pc = 0x313F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F18u;
        // 0x313f1c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313F20u;
        goto label_313f20;
    }
    ctx->pc = 0x313F18u;
    {
        const bool branch_taken_0x313f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F18u;
        // 0x313f1c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313f18) {
            ctx->pc = 0x313F38u;
            goto label_313f38;
        }
    }
    ctx->pc = 0x313F20u;
label_313f20:
    // 0x313f20: 0x2663e880  addiu       $v1, $s3, -0x1780
    ctx->pc = 0x313f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_313f24:
    // 0x313f24: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x313f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_313f28:
    // 0x313f28: 0x40f809  jalr        $v0
label_313f2c:
    if (ctx->pc == 0x313F2Cu) {
        ctx->pc = 0x313F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F28u;
        // 0x313f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313F30u;
        goto label_313f30;
    }
    ctx->pc = 0x313F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x313F30u);
        ctx->pc = 0x313F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F28u;
        // 0x313f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313F28u, 0x313F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x313F30u;
label_313f30:
    // 0x313f30: 0x10000040  b           . + 4 + (0x40 << 2)
label_313f34:
    if (ctx->pc == 0x313F34u) {
        ctx->pc = 0x313F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F30u;
        // 0x313f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313F38u;
        goto label_313f38;
    }
    ctx->pc = 0x313F30u;
    {
        const bool branch_taken_0x313f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F30u;
        // 0x313f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313f30) {
            ctx->pc = 0x314034u;
            goto label_314034;
        }
    }
    ctx->pc = 0x313F38u;
label_313f38:
    // 0x313f38: 0x6a240007  ldl         $a0, 0x7($s1)
    ctx->pc = 0x313f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_313f3c:
    // 0x313f3c: 0x6e240000  ldr         $a0, 0x0($s1)
    ctx->pc = 0x313f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_313f40:
    // 0x313f40: 0x6a25000f  ldl         $a1, 0xF($s1)
    ctx->pc = 0x313f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_313f44:
    // 0x313f44: 0x6e250008  ldr         $a1, 0x8($s1)
    ctx->pc = 0x313f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_313f48:
    // 0x313f48: 0x6a220017  ldl         $v0, 0x17($s1)
    ctx->pc = 0x313f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_313f4c:
    // 0x313f4c: 0x6e220010  ldr         $v0, 0x10($s1)
    ctx->pc = 0x313f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_313f50:
    // 0x313f50: 0x6a23001f  ldl         $v1, 0x1F($s1)
    ctx->pc = 0x313f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_313f54:
    // 0x313f54: 0x6e230018  ldr         $v1, 0x18($s1)
    ctx->pc = 0x313f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_313f58:
    // 0x313f58: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x313f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f5c:
    // 0x313f5c: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x313f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f60:
    // 0x313f60: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x313f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f64:
    // 0x313f64: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x313f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f68:
    // 0x313f68: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x313f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f6c:
    // 0x313f6c: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x313f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f70:
    // 0x313f70: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x313f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f74:
    // 0x313f74: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x313f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f78:
    // 0x313f78: 0x6a240027  ldl         $a0, 0x27($s1)
    ctx->pc = 0x313f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_313f7c:
    // 0x313f7c: 0x6e240020  ldr         $a0, 0x20($s1)
    ctx->pc = 0x313f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_313f80:
    // 0x313f80: 0x6a25002f  ldl         $a1, 0x2F($s1)
    ctx->pc = 0x313f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_313f84:
    // 0x313f84: 0x6e250028  ldr         $a1, 0x28($s1)
    ctx->pc = 0x313f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_313f88:
    // 0x313f88: 0x6a220037  ldl         $v0, 0x37($s1)
    ctx->pc = 0x313f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_313f8c:
    // 0x313f8c: 0x6e220030  ldr         $v0, 0x30($s1)
    ctx->pc = 0x313f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_313f90:
    // 0x313f90: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x313f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_313f94:
    // 0x313f94: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x313f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f98:
    // 0x313f98: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x313f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313f9c:
    // 0x313f9c: 0xb3a5004f  sdl         $a1, 0x4F($sp)
    ctx->pc = 0x313f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313fa0:
    // 0x313fa0: 0xb7a50048  sdr         $a1, 0x48($sp)
    ctx->pc = 0x313fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313fa4:
    // 0x313fa4: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x313fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_313fa8:
    // 0x313fa8: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x313fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_313fac:
    // 0x313fac: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x313facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_313fb0:
    // 0x313fb0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x313fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_313fb4:
    // 0x313fb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313fb8:
    // 0x313fb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x313fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_313fbc:
    // 0x313fbc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x313fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_313fc0:
    // 0x313fc0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x313fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_313fc4:
    // 0x313fc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x313fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_313fc8:
    // 0x313fc8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x313fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313fcc:
    // 0x313fcc: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x313fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_313fd0:
    // 0x313fd0: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x313fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
label_313fd4:
    // 0x313fd4: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x313fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_313fd8:
    // 0x313fd8: 0xc0c4e40  jal         func_313900
label_313fdc:
    if (ctx->pc == 0x313FDCu) {
        ctx->pc = 0x313FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FD8u;
        // 0x313fdc: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313FE0u;
        goto label_313fe0;
    }
    ctx->pc = 0x313FD8u;
    SET_GPR_U32(ctx, 31, 0x313FE0u);
    ctx->pc = 0x313FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FD8u;
    // 0x313fdc: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313900u;
    goto label_313900;
    ctx->pc = 0x313FE0u;
label_313fe0:
    // 0x313fe0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_313fe4:
    if (ctx->pc == 0x313FE4u) {
        ctx->pc = 0x313FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FE0u;
        // 0x313fe4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313FE8u;
        goto label_313fe8;
    }
    ctx->pc = 0x313FE0u;
    {
        const bool branch_taken_0x313fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FE0u;
        // 0x313fe4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313fe0) {
            ctx->pc = 0x314030u;
            goto label_314030;
        }
    }
    ctx->pc = 0x313FE8u;
label_313fe8:
    // 0x313fe8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x313fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_313fec:
    // 0x313fec: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_313ff0:
    if (ctx->pc == 0x313FF0u) {
        ctx->pc = 0x313FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FECu;
        // 0x313ff0: 0x2663e880  addiu       $v1, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x313FF4u;
        goto label_313ff4;
    }
    ctx->pc = 0x313FECu;
    {
        const bool branch_taken_0x313fec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x313FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FECu;
        // 0x313ff0: 0x2663e880  addiu       $v1, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313fec) {
            ctx->pc = 0x314008u;
            goto label_314008;
        }
    }
    ctx->pc = 0x313FF4u;
label_313ff4:
    // 0x313ff4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x313ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_313ff8:
    // 0x313ff8: 0x40f809  jalr        $v0
label_313ffc:
    if (ctx->pc == 0x313FFCu) {
        ctx->pc = 0x313FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FF8u;
        // 0x313ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314000u;
        goto label_314000;
    }
    ctx->pc = 0x313FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314000u);
        ctx->pc = 0x313FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FF8u;
        // 0x313ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313FF8u, 0x314000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314000u;
label_314000:
    // 0x314000: 0x1000000c  b           . + 4 + (0xC << 2)
label_314004:
    if (ctx->pc == 0x314004u) {
        ctx->pc = 0x314004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314000u;
        // 0x314004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314008u;
        goto label_314008;
    }
    ctx->pc = 0x314000u;
    {
        const bool branch_taken_0x314000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314000u;
        // 0x314004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314000) {
            ctx->pc = 0x314034u;
            goto label_314034;
        }
    }
    ctx->pc = 0x314008u;
label_314008:
    // 0x314008: 0xc0c51e8  jal         func_3147A0
label_31400c:
    if (ctx->pc == 0x31400Cu) {
        ctx->pc = 0x31400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314008u;
        // 0x31400c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314010u;
        goto label_314010;
    }
    ctx->pc = 0x314008u;
    SET_GPR_U32(ctx, 31, 0x314010u);
    ctx->pc = 0x31400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314008u;
    // 0x31400c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3147A0u, 0x314008u, 0x314010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314010u;
label_314010:
    // 0x314010: 0xc0c51e8  jal         func_3147A0
label_314014:
    if (ctx->pc == 0x314014u) {
        ctx->pc = 0x314014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314010u;
        // 0x314014: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314018u;
        goto label_314018;
    }
    ctx->pc = 0x314010u;
    SET_GPR_U32(ctx, 31, 0x314018u);
    ctx->pc = 0x314014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314010u;
    // 0x314014: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3147A0u, 0x314010u, 0x314018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314018u;
label_314018:
    // 0x314018: 0x2663e880  addiu       $v1, $s3, -0x1780
    ctx->pc = 0x314018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_31401c:
    // 0x31401c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x31401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_314020:
    // 0x314020: 0x40f809  jalr        $v0
label_314024:
    if (ctx->pc == 0x314024u) {
        ctx->pc = 0x314024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314020u;
        // 0x314024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314028u;
        goto label_314028;
    }
    ctx->pc = 0x314020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x314028u);
        ctx->pc = 0x314024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314020u;
        // 0x314024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314020u, 0x314028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314028u;
label_314028:
    // 0x314028: 0x10000002  b           . + 4 + (0x2 << 2)
label_31402c:
    if (ctx->pc == 0x31402Cu) {
        ctx->pc = 0x31402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314028u;
        // 0x31402c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314030u;
        goto label_314030;
    }
    ctx->pc = 0x314028u;
    {
        const bool branch_taken_0x314028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314028u;
        // 0x31402c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314028) {
            ctx->pc = 0x314034u;
            goto label_314034;
        }
    }
    ctx->pc = 0x314030u;
label_314030:
    // 0x314030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x314030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314034:
    // 0x314034: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x314034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_314038:
    // 0x314038: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x314038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31403c:
    // 0x31403c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x31403cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_314040:
    // 0x314040: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x314040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_314044:
    // 0x314044: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x314044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_314048:
    // 0x314048: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x314048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31404c:
    // 0x31404c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x31404cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_314050:
    // 0x314050: 0x3e00008  jr          $ra
label_314054:
    if (ctx->pc == 0x314054u) {
        ctx->pc = 0x314054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314050u;
        // 0x314054: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314058u;
        goto label_fallthrough_0x314050;
    }
    ctx->pc = 0x314050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314050u;
        // 0x314054: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x314050:
    ctx->pc = 0x314058u;
}
