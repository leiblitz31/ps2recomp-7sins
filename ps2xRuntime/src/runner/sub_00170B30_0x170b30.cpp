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

// Function: sub_00170B30
// Address: 0x170b30 - 0x1716d0
void sub_00170B30_0x170b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B30_0x170b30");
#endif

    switch (ctx->pc) {
        case 0x170b30u: goto label_170b30;
        case 0x170b34u: goto label_170b34;
        case 0x170b38u: goto label_170b38;
        case 0x170b3cu: goto label_170b3c;
        case 0x170b40u: goto label_170b40;
        case 0x170b44u: goto label_170b44;
        case 0x170b48u: goto label_170b48;
        case 0x170b4cu: goto label_170b4c;
        case 0x170b50u: goto label_170b50;
        case 0x170b54u: goto label_170b54;
        case 0x170b58u: goto label_170b58;
        case 0x170b5cu: goto label_170b5c;
        case 0x170b60u: goto label_170b60;
        case 0x170b64u: goto label_170b64;
        case 0x170b68u: goto label_170b68;
        case 0x170b6cu: goto label_170b6c;
        case 0x170b70u: goto label_170b70;
        case 0x170b74u: goto label_170b74;
        case 0x170b78u: goto label_170b78;
        case 0x170b7cu: goto label_170b7c;
        case 0x170b80u: goto label_170b80;
        case 0x170b84u: goto label_170b84;
        case 0x170b88u: goto label_170b88;
        case 0x170b8cu: goto label_170b8c;
        case 0x170b90u: goto label_170b90;
        case 0x170b94u: goto label_170b94;
        case 0x170b98u: goto label_170b98;
        case 0x170b9cu: goto label_170b9c;
        case 0x170ba0u: goto label_170ba0;
        case 0x170ba4u: goto label_170ba4;
        case 0x170ba8u: goto label_170ba8;
        case 0x170bacu: goto label_170bac;
        case 0x170bb0u: goto label_170bb0;
        case 0x170bb4u: goto label_170bb4;
        case 0x170bb8u: goto label_170bb8;
        case 0x170bbcu: goto label_170bbc;
        case 0x170bc0u: goto label_170bc0;
        case 0x170bc4u: goto label_170bc4;
        case 0x170bc8u: goto label_170bc8;
        case 0x170bccu: goto label_170bcc;
        case 0x170bd0u: goto label_170bd0;
        case 0x170bd4u: goto label_170bd4;
        case 0x170bd8u: goto label_170bd8;
        case 0x170bdcu: goto label_170bdc;
        case 0x170be0u: goto label_170be0;
        case 0x170be4u: goto label_170be4;
        case 0x170be8u: goto label_170be8;
        case 0x170becu: goto label_170bec;
        case 0x170bf0u: goto label_170bf0;
        case 0x170bf4u: goto label_170bf4;
        case 0x170bf8u: goto label_170bf8;
        case 0x170bfcu: goto label_170bfc;
        case 0x170c00u: goto label_170c00;
        case 0x170c04u: goto label_170c04;
        case 0x170c08u: goto label_170c08;
        case 0x170c0cu: goto label_170c0c;
        case 0x170c10u: goto label_170c10;
        case 0x170c14u: goto label_170c14;
        case 0x170c18u: goto label_170c18;
        case 0x170c1cu: goto label_170c1c;
        case 0x170c20u: goto label_170c20;
        case 0x170c24u: goto label_170c24;
        case 0x170c28u: goto label_170c28;
        case 0x170c2cu: goto label_170c2c;
        case 0x170c30u: goto label_170c30;
        case 0x170c34u: goto label_170c34;
        case 0x170c38u: goto label_170c38;
        case 0x170c3cu: goto label_170c3c;
        case 0x170c40u: goto label_170c40;
        case 0x170c44u: goto label_170c44;
        case 0x170c48u: goto label_170c48;
        case 0x170c4cu: goto label_170c4c;
        case 0x170c50u: goto label_170c50;
        case 0x170c54u: goto label_170c54;
        case 0x170c58u: goto label_170c58;
        case 0x170c5cu: goto label_170c5c;
        case 0x170c60u: goto label_170c60;
        case 0x170c64u: goto label_170c64;
        case 0x170c68u: goto label_170c68;
        case 0x170c6cu: goto label_170c6c;
        case 0x170c70u: goto label_170c70;
        case 0x170c74u: goto label_170c74;
        case 0x170c78u: goto label_170c78;
        case 0x170c7cu: goto label_170c7c;
        case 0x170c80u: goto label_170c80;
        case 0x170c84u: goto label_170c84;
        case 0x170c88u: goto label_170c88;
        case 0x170c8cu: goto label_170c8c;
        case 0x170c90u: goto label_170c90;
        case 0x170c94u: goto label_170c94;
        case 0x170c98u: goto label_170c98;
        case 0x170c9cu: goto label_170c9c;
        case 0x170ca0u: goto label_170ca0;
        case 0x170ca4u: goto label_170ca4;
        case 0x170ca8u: goto label_170ca8;
        case 0x170cacu: goto label_170cac;
        case 0x170cb0u: goto label_170cb0;
        case 0x170cb4u: goto label_170cb4;
        case 0x170cb8u: goto label_170cb8;
        case 0x170cbcu: goto label_170cbc;
        case 0x170cc0u: goto label_170cc0;
        case 0x170cc4u: goto label_170cc4;
        case 0x170cc8u: goto label_170cc8;
        case 0x170cccu: goto label_170ccc;
        case 0x170cd0u: goto label_170cd0;
        case 0x170cd4u: goto label_170cd4;
        case 0x170cd8u: goto label_170cd8;
        case 0x170cdcu: goto label_170cdc;
        case 0x170ce0u: goto label_170ce0;
        case 0x170ce4u: goto label_170ce4;
        case 0x170ce8u: goto label_170ce8;
        case 0x170cecu: goto label_170cec;
        case 0x170cf0u: goto label_170cf0;
        case 0x170cf4u: goto label_170cf4;
        case 0x170cf8u: goto label_170cf8;
        case 0x170cfcu: goto label_170cfc;
        case 0x170d00u: goto label_170d00;
        case 0x170d04u: goto label_170d04;
        case 0x170d08u: goto label_170d08;
        case 0x170d0cu: goto label_170d0c;
        case 0x170d10u: goto label_170d10;
        case 0x170d14u: goto label_170d14;
        case 0x170d18u: goto label_170d18;
        case 0x170d1cu: goto label_170d1c;
        case 0x170d20u: goto label_170d20;
        case 0x170d24u: goto label_170d24;
        case 0x170d28u: goto label_170d28;
        case 0x170d2cu: goto label_170d2c;
        case 0x170d30u: goto label_170d30;
        case 0x170d34u: goto label_170d34;
        case 0x170d38u: goto label_170d38;
        case 0x170d3cu: goto label_170d3c;
        case 0x170d40u: goto label_170d40;
        case 0x170d44u: goto label_170d44;
        case 0x170d48u: goto label_170d48;
        case 0x170d4cu: goto label_170d4c;
        case 0x170d50u: goto label_170d50;
        case 0x170d54u: goto label_170d54;
        case 0x170d58u: goto label_170d58;
        case 0x170d5cu: goto label_170d5c;
        case 0x170d60u: goto label_170d60;
        case 0x170d64u: goto label_170d64;
        case 0x170d68u: goto label_170d68;
        case 0x170d6cu: goto label_170d6c;
        case 0x170d70u: goto label_170d70;
        case 0x170d74u: goto label_170d74;
        case 0x170d78u: goto label_170d78;
        case 0x170d7cu: goto label_170d7c;
        case 0x170d80u: goto label_170d80;
        case 0x170d84u: goto label_170d84;
        case 0x170d88u: goto label_170d88;
        case 0x170d8cu: goto label_170d8c;
        case 0x170d90u: goto label_170d90;
        case 0x170d94u: goto label_170d94;
        case 0x170d98u: goto label_170d98;
        case 0x170d9cu: goto label_170d9c;
        case 0x170da0u: goto label_170da0;
        case 0x170da4u: goto label_170da4;
        case 0x170da8u: goto label_170da8;
        case 0x170dacu: goto label_170dac;
        case 0x170db0u: goto label_170db0;
        case 0x170db4u: goto label_170db4;
        case 0x170db8u: goto label_170db8;
        case 0x170dbcu: goto label_170dbc;
        case 0x170dc0u: goto label_170dc0;
        case 0x170dc4u: goto label_170dc4;
        case 0x170dc8u: goto label_170dc8;
        case 0x170dccu: goto label_170dcc;
        case 0x170dd0u: goto label_170dd0;
        case 0x170dd4u: goto label_170dd4;
        case 0x170dd8u: goto label_170dd8;
        case 0x170ddcu: goto label_170ddc;
        case 0x170de0u: goto label_170de0;
        case 0x170de4u: goto label_170de4;
        case 0x170de8u: goto label_170de8;
        case 0x170decu: goto label_170dec;
        case 0x170df0u: goto label_170df0;
        case 0x170df4u: goto label_170df4;
        case 0x170df8u: goto label_170df8;
        case 0x170dfcu: goto label_170dfc;
        case 0x170e00u: goto label_170e00;
        case 0x170e04u: goto label_170e04;
        case 0x170e08u: goto label_170e08;
        case 0x170e0cu: goto label_170e0c;
        case 0x170e10u: goto label_170e10;
        case 0x170e14u: goto label_170e14;
        case 0x170e18u: goto label_170e18;
        case 0x170e1cu: goto label_170e1c;
        case 0x170e20u: goto label_170e20;
        case 0x170e24u: goto label_170e24;
        case 0x170e28u: goto label_170e28;
        case 0x170e2cu: goto label_170e2c;
        case 0x170e30u: goto label_170e30;
        case 0x170e34u: goto label_170e34;
        case 0x170e38u: goto label_170e38;
        case 0x170e3cu: goto label_170e3c;
        case 0x170e40u: goto label_170e40;
        case 0x170e44u: goto label_170e44;
        case 0x170e48u: goto label_170e48;
        case 0x170e4cu: goto label_170e4c;
        case 0x170e50u: goto label_170e50;
        case 0x170e54u: goto label_170e54;
        case 0x170e58u: goto label_170e58;
        case 0x170e5cu: goto label_170e5c;
        case 0x170e60u: goto label_170e60;
        case 0x170e64u: goto label_170e64;
        case 0x170e68u: goto label_170e68;
        case 0x170e6cu: goto label_170e6c;
        case 0x170e70u: goto label_170e70;
        case 0x170e74u: goto label_170e74;
        case 0x170e78u: goto label_170e78;
        case 0x170e7cu: goto label_170e7c;
        case 0x170e80u: goto label_170e80;
        case 0x170e84u: goto label_170e84;
        case 0x170e88u: goto label_170e88;
        case 0x170e8cu: goto label_170e8c;
        case 0x170e90u: goto label_170e90;
        case 0x170e94u: goto label_170e94;
        case 0x170e98u: goto label_170e98;
        case 0x170e9cu: goto label_170e9c;
        case 0x170ea0u: goto label_170ea0;
        case 0x170ea4u: goto label_170ea4;
        case 0x170ea8u: goto label_170ea8;
        case 0x170eacu: goto label_170eac;
        case 0x170eb0u: goto label_170eb0;
        case 0x170eb4u: goto label_170eb4;
        case 0x170eb8u: goto label_170eb8;
        case 0x170ebcu: goto label_170ebc;
        case 0x170ec0u: goto label_170ec0;
        case 0x170ec4u: goto label_170ec4;
        case 0x170ec8u: goto label_170ec8;
        case 0x170eccu: goto label_170ecc;
        case 0x170ed0u: goto label_170ed0;
        case 0x170ed4u: goto label_170ed4;
        case 0x170ed8u: goto label_170ed8;
        case 0x170edcu: goto label_170edc;
        case 0x170ee0u: goto label_170ee0;
        case 0x170ee4u: goto label_170ee4;
        case 0x170ee8u: goto label_170ee8;
        case 0x170eecu: goto label_170eec;
        case 0x170ef0u: goto label_170ef0;
        case 0x170ef4u: goto label_170ef4;
        case 0x170ef8u: goto label_170ef8;
        case 0x170efcu: goto label_170efc;
        case 0x170f00u: goto label_170f00;
        case 0x170f04u: goto label_170f04;
        case 0x170f08u: goto label_170f08;
        case 0x170f0cu: goto label_170f0c;
        case 0x170f10u: goto label_170f10;
        case 0x170f14u: goto label_170f14;
        case 0x170f18u: goto label_170f18;
        case 0x170f1cu: goto label_170f1c;
        case 0x170f20u: goto label_170f20;
        case 0x170f24u: goto label_170f24;
        case 0x170f28u: goto label_170f28;
        case 0x170f2cu: goto label_170f2c;
        case 0x170f30u: goto label_170f30;
        case 0x170f34u: goto label_170f34;
        case 0x170f38u: goto label_170f38;
        case 0x170f3cu: goto label_170f3c;
        case 0x170f40u: goto label_170f40;
        case 0x170f44u: goto label_170f44;
        case 0x170f48u: goto label_170f48;
        case 0x170f4cu: goto label_170f4c;
        case 0x170f50u: goto label_170f50;
        case 0x170f54u: goto label_170f54;
        case 0x170f58u: goto label_170f58;
        case 0x170f5cu: goto label_170f5c;
        case 0x170f60u: goto label_170f60;
        case 0x170f64u: goto label_170f64;
        case 0x170f68u: goto label_170f68;
        case 0x170f6cu: goto label_170f6c;
        case 0x170f70u: goto label_170f70;
        case 0x170f74u: goto label_170f74;
        case 0x170f78u: goto label_170f78;
        case 0x170f7cu: goto label_170f7c;
        case 0x170f80u: goto label_170f80;
        case 0x170f84u: goto label_170f84;
        case 0x170f88u: goto label_170f88;
        case 0x170f8cu: goto label_170f8c;
        case 0x170f90u: goto label_170f90;
        case 0x170f94u: goto label_170f94;
        case 0x170f98u: goto label_170f98;
        case 0x170f9cu: goto label_170f9c;
        case 0x170fa0u: goto label_170fa0;
        case 0x170fa4u: goto label_170fa4;
        case 0x170fa8u: goto label_170fa8;
        case 0x170facu: goto label_170fac;
        case 0x170fb0u: goto label_170fb0;
        case 0x170fb4u: goto label_170fb4;
        case 0x170fb8u: goto label_170fb8;
        case 0x170fbcu: goto label_170fbc;
        case 0x170fc0u: goto label_170fc0;
        case 0x170fc4u: goto label_170fc4;
        case 0x170fc8u: goto label_170fc8;
        case 0x170fccu: goto label_170fcc;
        case 0x170fd0u: goto label_170fd0;
        case 0x170fd4u: goto label_170fd4;
        case 0x170fd8u: goto label_170fd8;
        case 0x170fdcu: goto label_170fdc;
        case 0x170fe0u: goto label_170fe0;
        case 0x170fe4u: goto label_170fe4;
        case 0x170fe8u: goto label_170fe8;
        case 0x170fecu: goto label_170fec;
        case 0x170ff0u: goto label_170ff0;
        case 0x170ff4u: goto label_170ff4;
        case 0x170ff8u: goto label_170ff8;
        case 0x170ffcu: goto label_170ffc;
        case 0x171000u: goto label_171000;
        case 0x171004u: goto label_171004;
        case 0x171008u: goto label_171008;
        case 0x17100cu: goto label_17100c;
        case 0x171010u: goto label_171010;
        case 0x171014u: goto label_171014;
        case 0x171018u: goto label_171018;
        case 0x17101cu: goto label_17101c;
        case 0x171020u: goto label_171020;
        case 0x171024u: goto label_171024;
        case 0x171028u: goto label_171028;
        case 0x17102cu: goto label_17102c;
        case 0x171030u: goto label_171030;
        case 0x171034u: goto label_171034;
        case 0x171038u: goto label_171038;
        case 0x17103cu: goto label_17103c;
        case 0x171040u: goto label_171040;
        case 0x171044u: goto label_171044;
        case 0x171048u: goto label_171048;
        case 0x17104cu: goto label_17104c;
        case 0x171050u: goto label_171050;
        case 0x171054u: goto label_171054;
        case 0x171058u: goto label_171058;
        case 0x17105cu: goto label_17105c;
        case 0x171060u: goto label_171060;
        case 0x171064u: goto label_171064;
        case 0x171068u: goto label_171068;
        case 0x17106cu: goto label_17106c;
        case 0x171070u: goto label_171070;
        case 0x171074u: goto label_171074;
        case 0x171078u: goto label_171078;
        case 0x17107cu: goto label_17107c;
        case 0x171080u: goto label_171080;
        case 0x171084u: goto label_171084;
        case 0x171088u: goto label_171088;
        case 0x17108cu: goto label_17108c;
        case 0x171090u: goto label_171090;
        case 0x171094u: goto label_171094;
        case 0x171098u: goto label_171098;
        case 0x17109cu: goto label_17109c;
        case 0x1710a0u: goto label_1710a0;
        case 0x1710a4u: goto label_1710a4;
        case 0x1710a8u: goto label_1710a8;
        case 0x1710acu: goto label_1710ac;
        case 0x1710b0u: goto label_1710b0;
        case 0x1710b4u: goto label_1710b4;
        case 0x1710b8u: goto label_1710b8;
        case 0x1710bcu: goto label_1710bc;
        case 0x1710c0u: goto label_1710c0;
        case 0x1710c4u: goto label_1710c4;
        case 0x1710c8u: goto label_1710c8;
        case 0x1710ccu: goto label_1710cc;
        case 0x1710d0u: goto label_1710d0;
        case 0x1710d4u: goto label_1710d4;
        case 0x1710d8u: goto label_1710d8;
        case 0x1710dcu: goto label_1710dc;
        case 0x1710e0u: goto label_1710e0;
        case 0x1710e4u: goto label_1710e4;
        case 0x1710e8u: goto label_1710e8;
        case 0x1710ecu: goto label_1710ec;
        case 0x1710f0u: goto label_1710f0;
        case 0x1710f4u: goto label_1710f4;
        case 0x1710f8u: goto label_1710f8;
        case 0x1710fcu: goto label_1710fc;
        case 0x171100u: goto label_171100;
        case 0x171104u: goto label_171104;
        case 0x171108u: goto label_171108;
        case 0x17110cu: goto label_17110c;
        case 0x171110u: goto label_171110;
        case 0x171114u: goto label_171114;
        case 0x171118u: goto label_171118;
        case 0x17111cu: goto label_17111c;
        case 0x171120u: goto label_171120;
        case 0x171124u: goto label_171124;
        case 0x171128u: goto label_171128;
        case 0x17112cu: goto label_17112c;
        case 0x171130u: goto label_171130;
        case 0x171134u: goto label_171134;
        case 0x171138u: goto label_171138;
        case 0x17113cu: goto label_17113c;
        case 0x171140u: goto label_171140;
        case 0x171144u: goto label_171144;
        case 0x171148u: goto label_171148;
        case 0x17114cu: goto label_17114c;
        case 0x171150u: goto label_171150;
        case 0x171154u: goto label_171154;
        case 0x171158u: goto label_171158;
        case 0x17115cu: goto label_17115c;
        case 0x171160u: goto label_171160;
        case 0x171164u: goto label_171164;
        case 0x171168u: goto label_171168;
        case 0x17116cu: goto label_17116c;
        case 0x171170u: goto label_171170;
        case 0x171174u: goto label_171174;
        case 0x171178u: goto label_171178;
        case 0x17117cu: goto label_17117c;
        case 0x171180u: goto label_171180;
        case 0x171184u: goto label_171184;
        case 0x171188u: goto label_171188;
        case 0x17118cu: goto label_17118c;
        case 0x171190u: goto label_171190;
        case 0x171194u: goto label_171194;
        case 0x171198u: goto label_171198;
        case 0x17119cu: goto label_17119c;
        case 0x1711a0u: goto label_1711a0;
        case 0x1711a4u: goto label_1711a4;
        case 0x1711a8u: goto label_1711a8;
        case 0x1711acu: goto label_1711ac;
        case 0x1711b0u: goto label_1711b0;
        case 0x1711b4u: goto label_1711b4;
        case 0x1711b8u: goto label_1711b8;
        case 0x1711bcu: goto label_1711bc;
        case 0x1711c0u: goto label_1711c0;
        case 0x1711c4u: goto label_1711c4;
        case 0x1711c8u: goto label_1711c8;
        case 0x1711ccu: goto label_1711cc;
        case 0x1711d0u: goto label_1711d0;
        case 0x1711d4u: goto label_1711d4;
        case 0x1711d8u: goto label_1711d8;
        case 0x1711dcu: goto label_1711dc;
        case 0x1711e0u: goto label_1711e0;
        case 0x1711e4u: goto label_1711e4;
        case 0x1711e8u: goto label_1711e8;
        case 0x1711ecu: goto label_1711ec;
        case 0x1711f0u: goto label_1711f0;
        case 0x1711f4u: goto label_1711f4;
        case 0x1711f8u: goto label_1711f8;
        case 0x1711fcu: goto label_1711fc;
        case 0x171200u: goto label_171200;
        case 0x171204u: goto label_171204;
        case 0x171208u: goto label_171208;
        case 0x17120cu: goto label_17120c;
        case 0x171210u: goto label_171210;
        case 0x171214u: goto label_171214;
        case 0x171218u: goto label_171218;
        case 0x17121cu: goto label_17121c;
        case 0x171220u: goto label_171220;
        case 0x171224u: goto label_171224;
        case 0x171228u: goto label_171228;
        case 0x17122cu: goto label_17122c;
        case 0x171230u: goto label_171230;
        case 0x171234u: goto label_171234;
        case 0x171238u: goto label_171238;
        case 0x17123cu: goto label_17123c;
        case 0x171240u: goto label_171240;
        case 0x171244u: goto label_171244;
        case 0x171248u: goto label_171248;
        case 0x17124cu: goto label_17124c;
        case 0x171250u: goto label_171250;
        case 0x171254u: goto label_171254;
        case 0x171258u: goto label_171258;
        case 0x17125cu: goto label_17125c;
        case 0x171260u: goto label_171260;
        case 0x171264u: goto label_171264;
        case 0x171268u: goto label_171268;
        case 0x17126cu: goto label_17126c;
        case 0x171270u: goto label_171270;
        case 0x171274u: goto label_171274;
        case 0x171278u: goto label_171278;
        case 0x17127cu: goto label_17127c;
        case 0x171280u: goto label_171280;
        case 0x171284u: goto label_171284;
        case 0x171288u: goto label_171288;
        case 0x17128cu: goto label_17128c;
        case 0x171290u: goto label_171290;
        case 0x171294u: goto label_171294;
        case 0x171298u: goto label_171298;
        case 0x17129cu: goto label_17129c;
        case 0x1712a0u: goto label_1712a0;
        case 0x1712a4u: goto label_1712a4;
        case 0x1712a8u: goto label_1712a8;
        case 0x1712acu: goto label_1712ac;
        case 0x1712b0u: goto label_1712b0;
        case 0x1712b4u: goto label_1712b4;
        case 0x1712b8u: goto label_1712b8;
        case 0x1712bcu: goto label_1712bc;
        case 0x1712c0u: goto label_1712c0;
        case 0x1712c4u: goto label_1712c4;
        case 0x1712c8u: goto label_1712c8;
        case 0x1712ccu: goto label_1712cc;
        case 0x1712d0u: goto label_1712d0;
        case 0x1712d4u: goto label_1712d4;
        case 0x1712d8u: goto label_1712d8;
        case 0x1712dcu: goto label_1712dc;
        case 0x1712e0u: goto label_1712e0;
        case 0x1712e4u: goto label_1712e4;
        case 0x1712e8u: goto label_1712e8;
        case 0x1712ecu: goto label_1712ec;
        case 0x1712f0u: goto label_1712f0;
        case 0x1712f4u: goto label_1712f4;
        case 0x1712f8u: goto label_1712f8;
        case 0x1712fcu: goto label_1712fc;
        case 0x171300u: goto label_171300;
        case 0x171304u: goto label_171304;
        case 0x171308u: goto label_171308;
        case 0x17130cu: goto label_17130c;
        case 0x171310u: goto label_171310;
        case 0x171314u: goto label_171314;
        case 0x171318u: goto label_171318;
        case 0x17131cu: goto label_17131c;
        case 0x171320u: goto label_171320;
        case 0x171324u: goto label_171324;
        case 0x171328u: goto label_171328;
        case 0x17132cu: goto label_17132c;
        case 0x171330u: goto label_171330;
        case 0x171334u: goto label_171334;
        case 0x171338u: goto label_171338;
        case 0x17133cu: goto label_17133c;
        case 0x171340u: goto label_171340;
        case 0x171344u: goto label_171344;
        case 0x171348u: goto label_171348;
        case 0x17134cu: goto label_17134c;
        case 0x171350u: goto label_171350;
        case 0x171354u: goto label_171354;
        case 0x171358u: goto label_171358;
        case 0x17135cu: goto label_17135c;
        case 0x171360u: goto label_171360;
        case 0x171364u: goto label_171364;
        case 0x171368u: goto label_171368;
        case 0x17136cu: goto label_17136c;
        case 0x171370u: goto label_171370;
        case 0x171374u: goto label_171374;
        case 0x171378u: goto label_171378;
        case 0x17137cu: goto label_17137c;
        case 0x171380u: goto label_171380;
        case 0x171384u: goto label_171384;
        case 0x171388u: goto label_171388;
        case 0x17138cu: goto label_17138c;
        case 0x171390u: goto label_171390;
        case 0x171394u: goto label_171394;
        case 0x171398u: goto label_171398;
        case 0x17139cu: goto label_17139c;
        case 0x1713a0u: goto label_1713a0;
        case 0x1713a4u: goto label_1713a4;
        case 0x1713a8u: goto label_1713a8;
        case 0x1713acu: goto label_1713ac;
        case 0x1713b0u: goto label_1713b0;
        case 0x1713b4u: goto label_1713b4;
        case 0x1713b8u: goto label_1713b8;
        case 0x1713bcu: goto label_1713bc;
        case 0x1713c0u: goto label_1713c0;
        case 0x1713c4u: goto label_1713c4;
        case 0x1713c8u: goto label_1713c8;
        case 0x1713ccu: goto label_1713cc;
        case 0x1713d0u: goto label_1713d0;
        case 0x1713d4u: goto label_1713d4;
        case 0x1713d8u: goto label_1713d8;
        case 0x1713dcu: goto label_1713dc;
        case 0x1713e0u: goto label_1713e0;
        case 0x1713e4u: goto label_1713e4;
        case 0x1713e8u: goto label_1713e8;
        case 0x1713ecu: goto label_1713ec;
        case 0x1713f0u: goto label_1713f0;
        case 0x1713f4u: goto label_1713f4;
        case 0x1713f8u: goto label_1713f8;
        case 0x1713fcu: goto label_1713fc;
        case 0x171400u: goto label_171400;
        case 0x171404u: goto label_171404;
        case 0x171408u: goto label_171408;
        case 0x17140cu: goto label_17140c;
        case 0x171410u: goto label_171410;
        case 0x171414u: goto label_171414;
        case 0x171418u: goto label_171418;
        case 0x17141cu: goto label_17141c;
        case 0x171420u: goto label_171420;
        case 0x171424u: goto label_171424;
        case 0x171428u: goto label_171428;
        case 0x17142cu: goto label_17142c;
        case 0x171430u: goto label_171430;
        case 0x171434u: goto label_171434;
        case 0x171438u: goto label_171438;
        case 0x17143cu: goto label_17143c;
        case 0x171440u: goto label_171440;
        case 0x171444u: goto label_171444;
        case 0x171448u: goto label_171448;
        case 0x17144cu: goto label_17144c;
        case 0x171450u: goto label_171450;
        case 0x171454u: goto label_171454;
        case 0x171458u: goto label_171458;
        case 0x17145cu: goto label_17145c;
        case 0x171460u: goto label_171460;
        case 0x171464u: goto label_171464;
        case 0x171468u: goto label_171468;
        case 0x17146cu: goto label_17146c;
        case 0x171470u: goto label_171470;
        case 0x171474u: goto label_171474;
        case 0x171478u: goto label_171478;
        case 0x17147cu: goto label_17147c;
        case 0x171480u: goto label_171480;
        case 0x171484u: goto label_171484;
        case 0x171488u: goto label_171488;
        case 0x17148cu: goto label_17148c;
        case 0x171490u: goto label_171490;
        case 0x171494u: goto label_171494;
        case 0x171498u: goto label_171498;
        case 0x17149cu: goto label_17149c;
        case 0x1714a0u: goto label_1714a0;
        case 0x1714a4u: goto label_1714a4;
        case 0x1714a8u: goto label_1714a8;
        case 0x1714acu: goto label_1714ac;
        case 0x1714b0u: goto label_1714b0;
        case 0x1714b4u: goto label_1714b4;
        case 0x1714b8u: goto label_1714b8;
        case 0x1714bcu: goto label_1714bc;
        case 0x1714c0u: goto label_1714c0;
        case 0x1714c4u: goto label_1714c4;
        case 0x1714c8u: goto label_1714c8;
        case 0x1714ccu: goto label_1714cc;
        case 0x1714d0u: goto label_1714d0;
        case 0x1714d4u: goto label_1714d4;
        case 0x1714d8u: goto label_1714d8;
        case 0x1714dcu: goto label_1714dc;
        case 0x1714e0u: goto label_1714e0;
        case 0x1714e4u: goto label_1714e4;
        case 0x1714e8u: goto label_1714e8;
        case 0x1714ecu: goto label_1714ec;
        case 0x1714f0u: goto label_1714f0;
        case 0x1714f4u: goto label_1714f4;
        case 0x1714f8u: goto label_1714f8;
        case 0x1714fcu: goto label_1714fc;
        case 0x171500u: goto label_171500;
        case 0x171504u: goto label_171504;
        case 0x171508u: goto label_171508;
        case 0x17150cu: goto label_17150c;
        case 0x171510u: goto label_171510;
        case 0x171514u: goto label_171514;
        case 0x171518u: goto label_171518;
        case 0x17151cu: goto label_17151c;
        case 0x171520u: goto label_171520;
        case 0x171524u: goto label_171524;
        case 0x171528u: goto label_171528;
        case 0x17152cu: goto label_17152c;
        case 0x171530u: goto label_171530;
        case 0x171534u: goto label_171534;
        case 0x171538u: goto label_171538;
        case 0x17153cu: goto label_17153c;
        case 0x171540u: goto label_171540;
        case 0x171544u: goto label_171544;
        case 0x171548u: goto label_171548;
        case 0x17154cu: goto label_17154c;
        case 0x171550u: goto label_171550;
        case 0x171554u: goto label_171554;
        case 0x171558u: goto label_171558;
        case 0x17155cu: goto label_17155c;
        case 0x171560u: goto label_171560;
        case 0x171564u: goto label_171564;
        case 0x171568u: goto label_171568;
        case 0x17156cu: goto label_17156c;
        case 0x171570u: goto label_171570;
        case 0x171574u: goto label_171574;
        case 0x171578u: goto label_171578;
        case 0x17157cu: goto label_17157c;
        case 0x171580u: goto label_171580;
        case 0x171584u: goto label_171584;
        case 0x171588u: goto label_171588;
        case 0x17158cu: goto label_17158c;
        case 0x171590u: goto label_171590;
        case 0x171594u: goto label_171594;
        case 0x171598u: goto label_171598;
        case 0x17159cu: goto label_17159c;
        case 0x1715a0u: goto label_1715a0;
        case 0x1715a4u: goto label_1715a4;
        case 0x1715a8u: goto label_1715a8;
        case 0x1715acu: goto label_1715ac;
        case 0x1715b0u: goto label_1715b0;
        case 0x1715b4u: goto label_1715b4;
        case 0x1715b8u: goto label_1715b8;
        case 0x1715bcu: goto label_1715bc;
        case 0x1715c0u: goto label_1715c0;
        case 0x1715c4u: goto label_1715c4;
        case 0x1715c8u: goto label_1715c8;
        case 0x1715ccu: goto label_1715cc;
        case 0x1715d0u: goto label_1715d0;
        case 0x1715d4u: goto label_1715d4;
        case 0x1715d8u: goto label_1715d8;
        case 0x1715dcu: goto label_1715dc;
        case 0x1715e0u: goto label_1715e0;
        case 0x1715e4u: goto label_1715e4;
        case 0x1715e8u: goto label_1715e8;
        case 0x1715ecu: goto label_1715ec;
        case 0x1715f0u: goto label_1715f0;
        case 0x1715f4u: goto label_1715f4;
        case 0x1715f8u: goto label_1715f8;
        case 0x1715fcu: goto label_1715fc;
        case 0x171600u: goto label_171600;
        case 0x171604u: goto label_171604;
        case 0x171608u: goto label_171608;
        case 0x17160cu: goto label_17160c;
        case 0x171610u: goto label_171610;
        case 0x171614u: goto label_171614;
        case 0x171618u: goto label_171618;
        case 0x17161cu: goto label_17161c;
        case 0x171620u: goto label_171620;
        case 0x171624u: goto label_171624;
        case 0x171628u: goto label_171628;
        case 0x17162cu: goto label_17162c;
        case 0x171630u: goto label_171630;
        case 0x171634u: goto label_171634;
        case 0x171638u: goto label_171638;
        case 0x17163cu: goto label_17163c;
        case 0x171640u: goto label_171640;
        case 0x171644u: goto label_171644;
        case 0x171648u: goto label_171648;
        case 0x17164cu: goto label_17164c;
        case 0x171650u: goto label_171650;
        case 0x171654u: goto label_171654;
        case 0x171658u: goto label_171658;
        case 0x17165cu: goto label_17165c;
        case 0x171660u: goto label_171660;
        case 0x171664u: goto label_171664;
        case 0x171668u: goto label_171668;
        case 0x17166cu: goto label_17166c;
        case 0x171670u: goto label_171670;
        case 0x171674u: goto label_171674;
        case 0x171678u: goto label_171678;
        case 0x17167cu: goto label_17167c;
        case 0x171680u: goto label_171680;
        case 0x171684u: goto label_171684;
        case 0x171688u: goto label_171688;
        case 0x17168cu: goto label_17168c;
        case 0x171690u: goto label_171690;
        case 0x171694u: goto label_171694;
        case 0x171698u: goto label_171698;
        case 0x17169cu: goto label_17169c;
        case 0x1716a0u: goto label_1716a0;
        case 0x1716a4u: goto label_1716a4;
        case 0x1716a8u: goto label_1716a8;
        case 0x1716acu: goto label_1716ac;
        case 0x1716b0u: goto label_1716b0;
        case 0x1716b4u: goto label_1716b4;
        case 0x1716b8u: goto label_1716b8;
        case 0x1716bcu: goto label_1716bc;
        case 0x1716c0u: goto label_1716c0;
        case 0x1716c4u: goto label_1716c4;
        case 0x1716c8u: goto label_1716c8;
        case 0x1716ccu: goto label_1716cc;
        default: break;
    }

    ctx->pc = 0x170b30u;

label_170b30:
    // 0x170b30: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x170b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_170b34:
    // 0x170b34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x170b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_170b38:
    // 0x170b38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_170b3c:
    // 0x170b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_170b40:
    // 0x170b40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_170b44:
    // 0x170b44: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x170b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_170b48:
    // 0x170b48: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170b4c:
    // 0x170b4c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170b50:
    // 0x170b50: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x170b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_170b54:
    // 0x170b54: 0x24a54570  addiu       $a1, $a1, 0x4570
    ctx->pc = 0x170b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17776));
label_170b58:
    // 0x170b58: 0xc0552e4  jal         func_154B90
label_170b5c:
    if (ctx->pc == 0x170B5Cu) {
        ctx->pc = 0x170B60u;
        goto label_170b60;
    }
    ctx->pc = 0x170B58u;
    SET_GPR_U32(ctx, 31, 0x170B60u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x170B58u, 0x170B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B60u;
label_170b60:
    // 0x170b60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x170b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170b64:
    // 0x170b64: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x170b64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170b68:
    // 0x170b68: 0x8ce400c4  lw          $a0, 0xC4($a3)
    ctx->pc = 0x170b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_170b6c:
    // 0x170b6c: 0xc0552dc  jal         func_154B70
label_170b70:
    if (ctx->pc == 0x170B70u) {
        ctx->pc = 0x170B74u;
        goto label_170b74;
    }
    ctx->pc = 0x170B6Cu;
    SET_GPR_U32(ctx, 31, 0x170B74u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170B6Cu, 0x170B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B74u;
label_170b74:
    // 0x170b74: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x170b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170b78:
    // 0x170b78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170b7c:
    // 0x170b7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x170b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_170b80:
    // 0x170b80: 0x24660050  addiu       $a2, $v1, 0x50
    ctx->pc = 0x170b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_170b84:
    // 0x170b84: 0xc08c6c8  jal         func_231B20
label_170b88:
    if (ctx->pc == 0x170B88u) {
        ctx->pc = 0x170B8Cu;
        goto label_170b8c;
    }
    ctx->pc = 0x170B84u;
    SET_GPR_U32(ctx, 31, 0x170B8Cu);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x170B84u, 0x170B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170B8Cu;
label_170b8c:
    // 0x170b8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x170b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170b90:
    // 0x170b90: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x170b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170b94:
    // 0x170b94: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x170b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_170b98:
    // 0x170b98: 0xc0552dc  jal         func_154B70
label_170b9c:
    if (ctx->pc == 0x170B9Cu) {
        ctx->pc = 0x170BA0u;
        goto label_170ba0;
    }
    ctx->pc = 0x170B98u;
    SET_GPR_U32(ctx, 31, 0x170BA0u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170B98u, 0x170BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BA0u;
label_170ba0:
    // 0x170ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170ba4:
    // 0x170ba4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x170ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170ba8:
    // 0x170ba8: 0xc08c910  jal         func_232440
label_170bac:
    if (ctx->pc == 0x170BACu) {
        ctx->pc = 0x170BB0u;
        goto label_170bb0;
    }
    ctx->pc = 0x170BA8u;
    SET_GPR_U32(ctx, 31, 0x170BB0u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x170BA8u, 0x170BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BB0u;
label_170bb0:
    // 0x170bb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170bb4:
    // 0x170bb4: 0x0  nop
    ctx->pc = 0x170bb4u;
    // NOP
label_170bb8:
    // 0x170bb8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x170bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_170bbc:
    // 0x170bbc: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x170bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170bc0:
    // 0x170bc0: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x170bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170bc4:
    // 0x170bc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x170bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_170bc8:
    // 0x170bc8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x170bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_170bcc:
    // 0x170bcc: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x170bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170bd0:
    // 0x170bd0: 0x8cc700c4  lw          $a3, 0xC4($a2)
    ctx->pc = 0x170bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_170bd4:
    // 0x170bd4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x170bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_170bd8:
    // 0x170bd8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x170bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_170bdc:
    // 0x170bdc: 0x24a54588  addiu       $a1, $a1, 0x4588
    ctx->pc = 0x170bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17800));
label_170be0:
    // 0x170be0: 0xc05621c  jal         func_158870
label_170be4:
    if (ctx->pc == 0x170BE4u) {
        ctx->pc = 0x170BE8u;
        goto label_170be8;
    }
    ctx->pc = 0x170BE0u;
    SET_GPR_U32(ctx, 31, 0x170BE8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x170BE0u, 0x170BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170BE8u;
label_170be8:
    // 0x170be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170bec:
    // 0x170bec: 0x12000078  beqz        $s0, . + 4 + (0x78 << 2)
label_170bf0:
    if (ctx->pc == 0x170BF0u) {
        ctx->pc = 0x170BF4u;
        goto label_170bf4;
    }
    ctx->pc = 0x170BECu;
    {
        const bool branch_taken_0x170bec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x170bec) {
            ctx->pc = 0x170DD0u;
            goto label_170dd0;
        }
    }
    ctx->pc = 0x170BF4u;
label_170bf4:
    // 0x170bf4: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x170bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_170bf8:
    // 0x170bf8: 0xc0495d4  jal         func_125750
label_170bfc:
    if (ctx->pc == 0x170BFCu) {
        ctx->pc = 0x170C00u;
        goto label_170c00;
    }
    ctx->pc = 0x170BF8u;
    SET_GPR_U32(ctx, 31, 0x170C00u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x170BF8u, 0x170C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C00u;
label_170c00:
    // 0x170c00: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x170c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_170c04:
    // 0x170c04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x170c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_170c08:
    // 0x170c08: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x170c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_170c0c:
    // 0x170c0c: 0x320f809  jalr        $t9
label_170c10:
    if (ctx->pc == 0x170C10u) {
        ctx->pc = 0x170C14u;
        goto label_170c14;
    }
    ctx->pc = 0x170C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170C14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170C0Cu, 0x170C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170C14u;
label_170c14:
    // 0x170c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170c18:
    // 0x170c18: 0xc0986a8  jal         func_261AA0
label_170c1c:
    if (ctx->pc == 0x170C1Cu) {
        ctx->pc = 0x170C20u;
        goto label_170c20;
    }
    ctx->pc = 0x170C18u;
    SET_GPR_U32(ctx, 31, 0x170C20u);
    ctx->pc = 0x261AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261AA0u, 0x170C18u, 0x170C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C20u;
label_170c20:
    // 0x170c20: 0x8f87bbdc  lw          $a3, -0x4424($gp)
    ctx->pc = 0x170c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_170c24:
    // 0x170c24: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x170c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_170c28:
    // 0x170c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x170c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170c2c:
    // 0x170c2c: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x170c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_170c30:
    // 0x170c30: 0xc08e514  jal         func_239450
label_170c34:
    if (ctx->pc == 0x170C34u) {
        ctx->pc = 0x170C38u;
        goto label_170c38;
    }
    ctx->pc = 0x170C30u;
    SET_GPR_U32(ctx, 31, 0x170C38u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x170C30u, 0x170C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C38u;
label_170c38:
    // 0x170c38: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170c3c:
    // 0x170c3c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170c40:
    // 0x170c40: 0xc0552dc  jal         func_154B70
label_170c44:
    if (ctx->pc == 0x170C44u) {
        ctx->pc = 0x170C48u;
        goto label_170c48;
    }
    ctx->pc = 0x170C40u;
    SET_GPR_U32(ctx, 31, 0x170C48u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170C40u, 0x170C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C48u;
label_170c48:
    // 0x170c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170c4c:
    // 0x170c4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170c50:
    // 0x170c50: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x170c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_170c54:
    // 0x170c54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x170c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170c58:
    // 0x170c58: 0xc08c378  jal         func_230DE0
label_170c5c:
    if (ctx->pc == 0x170C5Cu) {
        ctx->pc = 0x170C60u;
        goto label_170c60;
    }
    ctx->pc = 0x170C58u;
    SET_GPR_U32(ctx, 31, 0x170C60u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x170C58u, 0x170C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C60u;
label_170c60:
    // 0x170c60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170c60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170c64:
    // 0x170c64: 0x0  nop
    ctx->pc = 0x170c64u;
    // NOP
label_170c68:
    // 0x170c68: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x170c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_170c6c:
    // 0x170c6c: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x170c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170c70:
    // 0x170c70: 0x8ce800c4  lw          $t0, 0xC4($a3)
    ctx->pc = 0x170c70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
label_170c74:
    // 0x170c74: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x170c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_170c78:
    // 0x170c78: 0xc0552dc  jal         func_154B70
label_170c7c:
    if (ctx->pc == 0x170C7Cu) {
        ctx->pc = 0x170C80u;
        goto label_170c80;
    }
    ctx->pc = 0x170C78u;
    SET_GPR_U32(ctx, 31, 0x170C80u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170C78u, 0x170C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C80u;
label_170c80:
    // 0x170c80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170c84:
    // 0x170c84: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170c88:
    // 0x170c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170c8c:
    // 0x170c8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170c90:
    // 0x170c90: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170c94:
    // 0x170c94: 0x27a70118  addiu       $a3, $sp, 0x118
    ctx->pc = 0x170c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_170c98:
    // 0x170c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170c9c:
    // 0x170c9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170ca0:
    // 0x170ca0: 0xc08b9fc  jal         func_22E7F0
label_170ca4:
    if (ctx->pc == 0x170CA4u) {
        ctx->pc = 0x170CA8u;
        goto label_170ca8;
    }
    ctx->pc = 0x170CA0u;
    SET_GPR_U32(ctx, 31, 0x170CA8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170CA0u, 0x170CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CA8u;
label_170ca8:
    // 0x170ca8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170cac:
    // 0x170cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170cb0:
    // 0x170cb0: 0x0  nop
    ctx->pc = 0x170cb0u;
    // NOP
label_170cb4:
    // 0x170cb4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x170cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_170cb8:
    // 0x170cb8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170cbc:
    // 0x170cbc: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170cc0:
    // 0x170cc0: 0xc0552dc  jal         func_154B70
label_170cc4:
    if (ctx->pc == 0x170CC4u) {
        ctx->pc = 0x170CC8u;
        goto label_170cc8;
    }
    ctx->pc = 0x170CC0u;
    SET_GPR_U32(ctx, 31, 0x170CC8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170CC0u, 0x170CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CC8u;
label_170cc8:
    // 0x170cc8: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x170cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170ccc:
    // 0x170ccc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170cd0:
    // 0x170cd0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x170cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170cd4:
    // 0x170cd4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170cd4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170cd8:
    // 0x170cd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170cdc:
    // 0x170cdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170ce0:
    // 0x170ce0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170ce4:
    // 0x170ce4: 0x27a70118  addiu       $a3, $sp, 0x118
    ctx->pc = 0x170ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_170ce8:
    // 0x170ce8: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x170ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_170cec:
    // 0x170cec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170cf0:
    // 0x170cf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170cf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170cf4:
    // 0x170cf4: 0xc08b9fc  jal         func_22E7F0
label_170cf8:
    if (ctx->pc == 0x170CF8u) {
        ctx->pc = 0x170CFCu;
        goto label_170cfc;
    }
    ctx->pc = 0x170CF4u;
    SET_GPR_U32(ctx, 31, 0x170CFCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170CF4u, 0x170CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170CFCu;
label_170cfc:
    // 0x170cfc: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
label_170d00:
    // 0x170d00: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x170d00u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170d04:
    // 0x170d04: 0x0  nop
    ctx->pc = 0x170d04u;
    // NOP
label_170d08:
    // 0x170d08: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x170d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_170d0c:
    // 0x170d0c: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
label_170d10:
    // 0x170d10: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x170d10u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170d14:
    // 0x170d14: 0x0  nop
    ctx->pc = 0x170d14u;
    // NOP
label_170d18:
    // 0x170d18: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x170d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_170d1c:
    // 0x170d1c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170d20:
    // 0x170d20: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170d24:
    // 0x170d24: 0xc0552dc  jal         func_154B70
label_170d28:
    if (ctx->pc == 0x170D28u) {
        ctx->pc = 0x170D2Cu;
        goto label_170d2c;
    }
    ctx->pc = 0x170D24u;
    SET_GPR_U32(ctx, 31, 0x170D2Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170D24u, 0x170D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D2Cu;
label_170d2c:
    // 0x170d2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170d2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170d30:
    // 0x170d30: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170d34:
    // 0x170d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170d38:
    // 0x170d38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170d3c:
    // 0x170d3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170d40:
    // 0x170d40: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x170d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_170d44:
    // 0x170d44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170d44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d48:
    // 0x170d48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170d48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170d4c:
    // 0x170d4c: 0xc08b9fc  jal         func_22E7F0
label_170d50:
    if (ctx->pc == 0x170D50u) {
        ctx->pc = 0x170D54u;
        goto label_170d54;
    }
    ctx->pc = 0x170D4Cu;
    SET_GPR_U32(ctx, 31, 0x170D54u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170D4Cu, 0x170D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D54u;
label_170d54:
    // 0x170d54: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x170d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_170d58:
    // 0x170d58: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x170d58u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170d5c:
    // 0x170d5c: 0x0  nop
    ctx->pc = 0x170d5cu;
    // NOP
label_170d60:
    // 0x170d60: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x170d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_170d64:
    // 0x170d64: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x170d64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_170d68:
    // 0x170d68: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x170d68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170d6c:
    // 0x170d6c: 0x0  nop
    ctx->pc = 0x170d6cu;
    // NOP
label_170d70:
    // 0x170d70: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x170d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_170d74:
    // 0x170d74: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170d78:
    // 0x170d78: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170d7c:
    // 0x170d7c: 0xc0552dc  jal         func_154B70
label_170d80:
    if (ctx->pc == 0x170D80u) {
        ctx->pc = 0x170D84u;
        goto label_170d84;
    }
    ctx->pc = 0x170D7Cu;
    SET_GPR_U32(ctx, 31, 0x170D84u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170D7Cu, 0x170D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170D84u;
label_170d84:
    // 0x170d84: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x170d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170d88:
    // 0x170d88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170d8c:
    // 0x170d8c: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x170d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170d90:
    // 0x170d90: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170d90u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170d94:
    // 0x170d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170d98:
    // 0x170d98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170d9c:
    // 0x170d9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170da0:
    // 0x170da0: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x170da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_170da4:
    // 0x170da4: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x170da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_170da8:
    // 0x170da8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170dac:
    // 0x170dac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170db0:
    // 0x170db0: 0xc08b9fc  jal         func_22E7F0
label_170db4:
    if (ctx->pc == 0x170DB4u) {
        ctx->pc = 0x170DB8u;
        goto label_170db8;
    }
    ctx->pc = 0x170DB0u;
    SET_GPR_U32(ctx, 31, 0x170DB8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170DB0u, 0x170DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170DB8u;
label_170db8:
    // 0x170db8: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x170db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_170dbc:
    // 0x170dbc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x170dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_170dc0:
    // 0x170dc0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170dc4:
    // 0x170dc4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x170dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_170dc8:
    // 0x170dc8: 0xc0406a0  jal         func_101A80
label_170dcc:
    if (ctx->pc == 0x170DCCu) {
        ctx->pc = 0x170DD0u;
        goto label_170dd0;
    }
    ctx->pc = 0x170DC8u;
    SET_GPR_U32(ctx, 31, 0x170DD0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x170DC8u, 0x170DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170DD0u;
label_170dd0:
    // 0x170dd0: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x170dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_170dd4:
    // 0x170dd4: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x170dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170dd8:
    // 0x170dd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x170dd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_170ddc:
    // 0x170ddc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x170ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_170de0:
    // 0x170de0: 0x8fa90120  lw          $t1, 0x120($sp)
    ctx->pc = 0x170de0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170de4:
    // 0x170de4: 0x8d2400c4  lw          $a0, 0xC4($t1)
    ctx->pc = 0x170de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
label_170de8:
    // 0x170de8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x170de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_170dec:
    // 0x170dec: 0x24a54598  addiu       $a1, $a1, 0x4598
    ctx->pc = 0x170decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17816));
label_170df0:
    // 0x170df0: 0xc05621c  jal         func_158870
label_170df4:
    if (ctx->pc == 0x170DF4u) {
        ctx->pc = 0x170DF8u;
        goto label_170df8;
    }
    ctx->pc = 0x170DF0u;
    SET_GPR_U32(ctx, 31, 0x170DF8u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x170DF0u, 0x170DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170DF8u;
label_170df8:
    // 0x170df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170dfc:
    // 0x170dfc: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
label_170e00:
    if (ctx->pc == 0x170E00u) {
        ctx->pc = 0x170E04u;
        goto label_170e04;
    }
    ctx->pc = 0x170DFCu;
    {
        const bool branch_taken_0x170dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x170dfc) {
            ctx->pc = 0x171040u;
            goto label_171040;
        }
    }
    ctx->pc = 0x170E04u;
label_170e04:
    // 0x170e04: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x170e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_170e08:
    // 0x170e08: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x170e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_170e0c:
    // 0x170e0c: 0x24a545a8  addiu       $a1, $a1, 0x45A8
    ctx->pc = 0x170e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17832));
label_170e10:
    // 0x170e10: 0xc08e57c  jal         func_2395F0
label_170e14:
    if (ctx->pc == 0x170E14u) {
        ctx->pc = 0x170E18u;
        goto label_170e18;
    }
    ctx->pc = 0x170E10u;
    SET_GPR_U32(ctx, 31, 0x170E18u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x170E10u, 0x170E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E18u;
label_170e18:
    // 0x170e18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x170e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_170e1c:
    // 0x170e1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x170e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170e20:
    // 0x170e20: 0xc0406d0  jal         func_101B40
label_170e24:
    if (ctx->pc == 0x170E24u) {
        ctx->pc = 0x170E28u;
        goto label_170e28;
    }
    ctx->pc = 0x170E20u;
    SET_GPR_U32(ctx, 31, 0x170E28u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x170E20u, 0x170E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E28u;
label_170e28:
    // 0x170e28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x170e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_170e2c:
    // 0x170e2c: 0x27859028  addiu       $a1, $gp, -0x6FD8
    ctx->pc = 0x170e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
label_170e30:
    // 0x170e30: 0xc040304  jal         func_100C10
label_170e34:
    if (ctx->pc == 0x170E34u) {
        ctx->pc = 0x170E38u;
        goto label_170e38;
    }
    ctx->pc = 0x170E30u;
    SET_GPR_U32(ctx, 31, 0x170E38u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x170E30u, 0x170E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E38u;
label_170e38:
    // 0x170e38: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x170e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_170e3c:
    // 0x170e3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x170e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_170e40:
    // 0x170e40: 0xc119568  jal         func_4655A0
label_170e44:
    if (ctx->pc == 0x170E44u) {
        ctx->pc = 0x170E48u;
        goto label_170e48;
    }
    ctx->pc = 0x170E40u;
    SET_GPR_U32(ctx, 31, 0x170E48u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x170E40u, 0x170E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E48u;
label_170e48:
    // 0x170e48: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x170e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_170e4c:
    // 0x170e4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170e50:
    // 0x170e50: 0xc0402d4  jal         func_100B50
label_170e54:
    if (ctx->pc == 0x170E54u) {
        ctx->pc = 0x170E58u;
        goto label_170e58;
    }
    ctx->pc = 0x170E50u;
    SET_GPR_U32(ctx, 31, 0x170E58u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x170E50u, 0x170E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E58u;
label_170e58:
    // 0x170e58: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x170e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_170e5c:
    // 0x170e5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x170e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_170e60:
    // 0x170e60: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x170e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_170e64:
    // 0x170e64: 0x320f809  jalr        $t9
label_170e68:
    if (ctx->pc == 0x170E68u) {
        ctx->pc = 0x170E6Cu;
        goto label_170e6c;
    }
    ctx->pc = 0x170E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170E6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170E64u, 0x170E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170E6Cu;
label_170e6c:
    // 0x170e6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x170e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_170e70:
    // 0x170e70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x170e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170e74:
    // 0x170e74: 0xc0406d0  jal         func_101B40
label_170e78:
    if (ctx->pc == 0x170E78u) {
        ctx->pc = 0x170E7Cu;
        goto label_170e7c;
    }
    ctx->pc = 0x170E74u;
    SET_GPR_U32(ctx, 31, 0x170E7Cu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x170E74u, 0x170E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E7Cu;
label_170e7c:
    // 0x170e7c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x170e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_170e80:
    // 0x170e80: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_170e84:
    // 0x170e84: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x170e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_170e88:
    // 0x170e88: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x170e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_170e8c:
    // 0x170e8c: 0xc08e608  jal         func_239820
label_170e90:
    if (ctx->pc == 0x170E90u) {
        ctx->pc = 0x170E94u;
        goto label_170e94;
    }
    ctx->pc = 0x170E8Cu;
    SET_GPR_U32(ctx, 31, 0x170E94u);
    ctx->pc = 0x239820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239820u, 0x170E8Cu, 0x170E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170E94u;
label_170e94:
    // 0x170e94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x170e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_170e98:
    // 0x170e98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x170e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_170e9c:
    // 0x170e9c: 0xc0406a0  jal         func_101A80
label_170ea0:
    if (ctx->pc == 0x170EA0u) {
        ctx->pc = 0x170EA4u;
        goto label_170ea4;
    }
    ctx->pc = 0x170E9Cu;
    SET_GPR_U32(ctx, 31, 0x170EA4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x170E9Cu, 0x170EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EA4u;
label_170ea4:
    // 0x170ea4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170ea8:
    // 0x170ea8: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170eac:
    // 0x170eac: 0xc0552dc  jal         func_154B70
label_170eb0:
    if (ctx->pc == 0x170EB0u) {
        ctx->pc = 0x170EB4u;
        goto label_170eb4;
    }
    ctx->pc = 0x170EACu;
    SET_GPR_U32(ctx, 31, 0x170EB4u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170EACu, 0x170EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EB4u;
label_170eb4:
    // 0x170eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170eb8:
    // 0x170eb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170ebc:
    // 0x170ebc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x170ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_170ec0:
    // 0x170ec0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170ec4:
    // 0x170ec4: 0xc08c378  jal         func_230DE0
label_170ec8:
    if (ctx->pc == 0x170EC8u) {
        ctx->pc = 0x170ECCu;
        goto label_170ecc;
    }
    ctx->pc = 0x170EC4u;
    SET_GPR_U32(ctx, 31, 0x170ECCu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x170EC4u, 0x170ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170ECCu;
label_170ecc:
    // 0x170ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170ed0:
    // 0x170ed0: 0x0  nop
    ctx->pc = 0x170ed0u;
    // NOP
label_170ed4:
    // 0x170ed4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x170ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_170ed8:
    // 0x170ed8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170edc:
    // 0x170edc: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170ee0:
    // 0x170ee0: 0xc0552dc  jal         func_154B70
label_170ee4:
    if (ctx->pc == 0x170EE4u) {
        ctx->pc = 0x170EE8u;
        goto label_170ee8;
    }
    ctx->pc = 0x170EE0u;
    SET_GPR_U32(ctx, 31, 0x170EE8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170EE0u, 0x170EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170EE8u;
label_170ee8:
    // 0x170ee8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170eec:
    // 0x170eec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170ef0:
    // 0x170ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170ef4:
    // 0x170ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170ef8:
    // 0x170ef8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170efc:
    // 0x170efc: 0x27a70114  addiu       $a3, $sp, 0x114
    ctx->pc = 0x170efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_170f00:
    // 0x170f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170f04:
    // 0x170f04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170f08:
    // 0x170f08: 0xc08b9fc  jal         func_22E7F0
label_170f0c:
    if (ctx->pc == 0x170F0Cu) {
        ctx->pc = 0x170F10u;
        goto label_170f10;
    }
    ctx->pc = 0x170F08u;
    SET_GPR_U32(ctx, 31, 0x170F10u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170F08u, 0x170F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F10u;
label_170f10:
    // 0x170f10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170f14:
    // 0x170f14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170f18:
    // 0x170f18: 0x0  nop
    ctx->pc = 0x170f18u;
    // NOP
label_170f1c:
    // 0x170f1c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x170f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_170f20:
    // 0x170f20: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170f24:
    // 0x170f24: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170f28:
    // 0x170f28: 0xc0552dc  jal         func_154B70
label_170f2c:
    if (ctx->pc == 0x170F2Cu) {
        ctx->pc = 0x170F30u;
        goto label_170f30;
    }
    ctx->pc = 0x170F28u;
    SET_GPR_U32(ctx, 31, 0x170F30u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170F28u, 0x170F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F30u;
label_170f30:
    // 0x170f30: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x170f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170f34:
    // 0x170f34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170f38:
    // 0x170f38: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x170f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170f3c:
    // 0x170f3c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170f3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170f40:
    // 0x170f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170f44:
    // 0x170f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170f48:
    // 0x170f48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x170f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170f4c:
    // 0x170f4c: 0x27a70114  addiu       $a3, $sp, 0x114
    ctx->pc = 0x170f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_170f50:
    // 0x170f50: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x170f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_170f54:
    // 0x170f54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170f58:
    // 0x170f58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170f58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170f5c:
    // 0x170f5c: 0xc08b9fc  jal         func_22E7F0
label_170f60:
    if (ctx->pc == 0x170F60u) {
        ctx->pc = 0x170F64u;
        goto label_170f64;
    }
    ctx->pc = 0x170F5Cu;
    SET_GPR_U32(ctx, 31, 0x170F64u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170F5Cu, 0x170F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F64u;
label_170f64:
    // 0x170f64: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x170f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_170f68:
    // 0x170f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170f6c:
    // 0x170f6c: 0x0  nop
    ctx->pc = 0x170f6cu;
    // NOP
label_170f70:
    // 0x170f70: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x170f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_170f74:
    // 0x170f74: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_170f78:
    // 0x170f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170f7c:
    // 0x170f7c: 0x0  nop
    ctx->pc = 0x170f7cu;
    // NOP
label_170f80:
    // 0x170f80: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x170f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_170f84:
    // 0x170f84: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170f88:
    // 0x170f88: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170f8c:
    // 0x170f8c: 0xc0552dc  jal         func_154B70
label_170f90:
    if (ctx->pc == 0x170F90u) {
        ctx->pc = 0x170F94u;
        goto label_170f94;
    }
    ctx->pc = 0x170F8Cu;
    SET_GPR_U32(ctx, 31, 0x170F94u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170F8Cu, 0x170F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F94u;
label_170f94:
    // 0x170f94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x170f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_170f98:
    // 0x170f98: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x170f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_170f9c:
    // 0x170f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170fa0:
    // 0x170fa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170fa4:
    // 0x170fa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x170fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170fa8:
    // 0x170fa8: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x170fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_170fac:
    // 0x170fac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x170facu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170fb0:
    // 0x170fb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x170fb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170fb4:
    // 0x170fb4: 0xc08b9fc  jal         func_22E7F0
label_170fb8:
    if (ctx->pc == 0x170FB8u) {
        ctx->pc = 0x170FBCu;
        goto label_170fbc;
    }
    ctx->pc = 0x170FB4u;
    SET_GPR_U32(ctx, 31, 0x170FBCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x170FB4u, 0x170FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FBCu;
label_170fbc:
    // 0x170fbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170fc0:
    // 0x170fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170fc4:
    // 0x170fc4: 0x0  nop
    ctx->pc = 0x170fc4u;
    // NOP
label_170fc8:
    // 0x170fc8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x170fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_170fcc:
    // 0x170fcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_170fd0:
    // 0x170fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_170fd4:
    // 0x170fd4: 0x0  nop
    ctx->pc = 0x170fd4u;
    // NOP
label_170fd8:
    // 0x170fd8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x170fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_170fdc:
    // 0x170fdc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x170fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_170fe0:
    // 0x170fe0: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_170fe4:
    // 0x170fe4: 0xc0552dc  jal         func_154B70
label_170fe8:
    if (ctx->pc == 0x170FE8u) {
        ctx->pc = 0x170FECu;
        goto label_170fec;
    }
    ctx->pc = 0x170FE4u;
    SET_GPR_U32(ctx, 31, 0x170FECu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x170FE4u, 0x170FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FECu;
label_170fec:
    // 0x170fec: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x170fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_170ff0:
    // 0x170ff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x170ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_170ff4:
    // 0x170ff4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x170ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170ff8:
    // 0x170ff8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x170ff8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_170ffc:
    // 0x170ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x170ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171000:
    // 0x171000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171004:
    // 0x171004: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x171004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171008:
    // 0x171008: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x171008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_17100c:
    // 0x17100c: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x17100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_171010:
    // 0x171010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x171010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171014:
    // 0x171014: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171018:
    // 0x171018: 0xc08b9fc  jal         func_22E7F0
label_17101c:
    if (ctx->pc == 0x17101Cu) {
        ctx->pc = 0x171020u;
        goto label_171020;
    }
    ctx->pc = 0x171018u;
    SET_GPR_U32(ctx, 31, 0x171020u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x171018u, 0x171020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171020u;
label_171020:
    // 0x171020: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x171020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_171024:
    // 0x171024: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x171024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_171028:
    // 0x171028: 0xc0406a0  jal         func_101A80
label_17102c:
    if (ctx->pc == 0x17102Cu) {
        ctx->pc = 0x171030u;
        goto label_171030;
    }
    ctx->pc = 0x171028u;
    SET_GPR_U32(ctx, 31, 0x171030u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x171028u, 0x171030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171030u;
label_171030:
    // 0x171030: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x171030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_171034:
    // 0x171034: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x171034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_171038:
    // 0x171038: 0xc0406a0  jal         func_101A80
label_17103c:
    if (ctx->pc == 0x17103Cu) {
        ctx->pc = 0x171040u;
        goto label_171040;
    }
    ctx->pc = 0x171038u;
    SET_GPR_U32(ctx, 31, 0x171040u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x171038u, 0x171040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171040u;
label_171040:
    // 0x171040: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x171040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171044:
    // 0x171044: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x171044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171048:
    // 0x171048: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17104c:
    // 0x17104c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x17104cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_171050:
    // 0x171050: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x171050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171054:
    // 0x171054: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x171054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_171058:
    // 0x171058: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x171058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17105c:
    // 0x17105c: 0x24a54620  addiu       $a1, $a1, 0x4620
    ctx->pc = 0x17105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17952));
label_171060:
    // 0x171060: 0xc05621c  jal         func_158870
label_171064:
    if (ctx->pc == 0x171064u) {
        ctx->pc = 0x171068u;
        goto label_171068;
    }
    ctx->pc = 0x171060u;
    SET_GPR_U32(ctx, 31, 0x171068u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x171060u, 0x171068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171068u;
label_171068:
    // 0x171068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x171068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17106c:
    // 0x17106c: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
label_171070:
    if (ctx->pc == 0x171070u) {
        ctx->pc = 0x171074u;
        goto label_171074;
    }
    ctx->pc = 0x17106Cu;
    {
        const bool branch_taken_0x17106c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17106c) {
            ctx->pc = 0x1711C8u;
            goto label_1711c8;
        }
    }
    ctx->pc = 0x171074u;
label_171074:
    // 0x171074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171078:
    // 0x171078: 0x0  nop
    ctx->pc = 0x171078u;
    // NOP
label_17107c:
    // 0x17107c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x17107cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_171080:
    // 0x171080: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x171080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171084:
    // 0x171084: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x171084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_171088:
    // 0x171088: 0xc0552dc  jal         func_154B70
label_17108c:
    if (ctx->pc == 0x17108Cu) {
        ctx->pc = 0x171090u;
        goto label_171090;
    }
    ctx->pc = 0x171088u;
    SET_GPR_U32(ctx, 31, 0x171090u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x171088u, 0x171090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171090u;
label_171090:
    // 0x171090: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x171090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171094:
    // 0x171094: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x171094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_171098:
    // 0x171098: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17109c:
    // 0x17109c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17109cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1710a0:
    // 0x1710a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1710a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1710a4:
    // 0x1710a4: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1710a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1710a8:
    // 0x1710a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1710a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1710ac:
    // 0x1710ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1710acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1710b0:
    // 0x1710b0: 0xc08b9fc  jal         func_22E7F0
label_1710b4:
    if (ctx->pc == 0x1710B4u) {
        ctx->pc = 0x1710B8u;
        goto label_1710b8;
    }
    ctx->pc = 0x1710B0u;
    SET_GPR_U32(ctx, 31, 0x1710B8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1710B0u, 0x1710B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710B8u;
label_1710b8:
    // 0x1710b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1710b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1710bc:
    // 0x1710bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1710bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1710c0:
    // 0x1710c0: 0x0  nop
    ctx->pc = 0x1710c0u;
    // NOP
label_1710c4:
    // 0x1710c4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1710c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1710c8:
    // 0x1710c8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1710c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1710cc:
    // 0x1710cc: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1710ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1710d0:
    // 0x1710d0: 0xc0552dc  jal         func_154B70
label_1710d4:
    if (ctx->pc == 0x1710D4u) {
        ctx->pc = 0x1710D8u;
        goto label_1710d8;
    }
    ctx->pc = 0x1710D0u;
    SET_GPR_U32(ctx, 31, 0x1710D8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1710D0u, 0x1710D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710D8u;
label_1710d8:
    // 0x1710d8: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1710d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_1710dc:
    // 0x1710dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1710dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1710e0:
    // 0x1710e0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x1710e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1710e4:
    // 0x1710e4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1710e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1710e8:
    // 0x1710e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1710e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1710ec:
    // 0x1710ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1710ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1710f0:
    // 0x1710f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1710f4:
    // 0x1710f4: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1710f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1710f8:
    // 0x1710f8: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1710f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1710fc:
    // 0x1710fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1710fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171100:
    // 0x171100: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171104:
    // 0x171104: 0xc08b9fc  jal         func_22E7F0
label_171108:
    if (ctx->pc == 0x171108u) {
        ctx->pc = 0x17110Cu;
        goto label_17110c;
    }
    ctx->pc = 0x171104u;
    SET_GPR_U32(ctx, 31, 0x17110Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x171104u, 0x17110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17110Cu;
label_17110c:
    // 0x17110c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x17110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_171110:
    // 0x171110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171114:
    // 0x171114: 0x0  nop
    ctx->pc = 0x171114u;
    // NOP
label_171118:
    // 0x171118: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x171118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_17111c:
    // 0x17111c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x17111cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_171120:
    // 0x171120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171124:
    // 0x171124: 0x0  nop
    ctx->pc = 0x171124u;
    // NOP
label_171128:
    // 0x171128: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x171128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_17112c:
    // 0x17112c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17112cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171130:
    // 0x171130: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x171130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_171134:
    // 0x171134: 0xc0552dc  jal         func_154B70
label_171138:
    if (ctx->pc == 0x171138u) {
        ctx->pc = 0x17113Cu;
        goto label_17113c;
    }
    ctx->pc = 0x171134u;
    SET_GPR_U32(ctx, 31, 0x17113Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x171134u, 0x17113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17113Cu;
label_17113c:
    // 0x17113c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x17113cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171140:
    // 0x171140: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x171140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_171144:
    // 0x171144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171148:
    // 0x171148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17114c:
    // 0x17114c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17114cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171150:
    // 0x171150: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x171150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_171154:
    // 0x171154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x171154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171158:
    // 0x171158: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171158u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17115c:
    // 0x17115c: 0xc08b9fc  jal         func_22E7F0
label_171160:
    if (ctx->pc == 0x171160u) {
        ctx->pc = 0x171164u;
        goto label_171164;
    }
    ctx->pc = 0x17115Cu;
    SET_GPR_U32(ctx, 31, 0x171164u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17115Cu, 0x171164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171164u;
label_171164:
    // 0x171164: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_171168:
    // 0x171168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17116c:
    // 0x17116c: 0x0  nop
    ctx->pc = 0x17116cu;
    // NOP
label_171170:
    // 0x171170: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x171170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_171174:
    // 0x171174: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_171178:
    // 0x171178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17117c:
    // 0x17117c: 0x0  nop
    ctx->pc = 0x17117cu;
    // NOP
label_171180:
    // 0x171180: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x171180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_171184:
    // 0x171184: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x171184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171188:
    // 0x171188: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x171188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17118c:
    // 0x17118c: 0xc0552dc  jal         func_154B70
label_171190:
    if (ctx->pc == 0x171190u) {
        ctx->pc = 0x171194u;
        goto label_171194;
    }
    ctx->pc = 0x17118Cu;
    SET_GPR_U32(ctx, 31, 0x171194u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17118Cu, 0x171194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171194u;
label_171194:
    // 0x171194: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x171194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_171198:
    // 0x171198: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x171198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17119c:
    // 0x17119c: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x17119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1711a0:
    // 0x1711a0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1711a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1711a4:
    // 0x1711a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1711a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1711a8:
    // 0x1711a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1711a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1711ac:
    // 0x1711ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1711acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1711b0:
    // 0x1711b0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1711b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1711b4:
    // 0x1711b4: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1711b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1711b8:
    // 0x1711b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1711b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1711bc:
    // 0x1711bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1711bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1711c0:
    // 0x1711c0: 0xc08b9fc  jal         func_22E7F0
label_1711c4:
    if (ctx->pc == 0x1711C4u) {
        ctx->pc = 0x1711C8u;
        goto label_1711c8;
    }
    ctx->pc = 0x1711C0u;
    SET_GPR_U32(ctx, 31, 0x1711C8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1711C0u, 0x1711C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711C8u;
label_1711c8:
    // 0x1711c8: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x1711c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1711cc:
    // 0x1711cc: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1711ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1711d0:
    // 0x1711d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1711d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1711d4:
    // 0x1711d4: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1711d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1711d8:
    // 0x1711d8: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1711d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1711dc:
    // 0x1711dc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1711dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1711e0:
    // 0x1711e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1711e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1711e4:
    // 0x1711e4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x1711e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1711e8:
    // 0x1711e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1711e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1711ec:
    // 0x1711ec: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x1711ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_1711f0:
    // 0x1711f0: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x1711f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1711f4:
    // 0x1711f4: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x1711f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1711f8:
    // 0x1711f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1711f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1711fc:
    // 0x1711fc: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x1711fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_171200:
    // 0x171200: 0x320f809  jalr        $t9
label_171204:
    if (ctx->pc == 0x171204u) {
        ctx->pc = 0x171208u;
        goto label_171208;
    }
    ctx->pc = 0x171200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x171208u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171200u, 0x171208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x171208u;
label_171208:
    // 0x171208: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x171208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17120c:
    // 0x17120c: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x17120cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171210:
    // 0x171210: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_171214:
    // 0x171214: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x171214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_171218:
    // 0x171218: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x171218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_17121c:
    // 0x17121c: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x17121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_171220:
    // 0x171220: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x171220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_171224:
    // 0x171224: 0x24a54630  addiu       $a1, $a1, 0x4630
    ctx->pc = 0x171224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
label_171228:
    // 0x171228: 0xc05621c  jal         func_158870
label_17122c:
    if (ctx->pc == 0x17122Cu) {
        ctx->pc = 0x171230u;
        goto label_171230;
    }
    ctx->pc = 0x171228u;
    SET_GPR_U32(ctx, 31, 0x171230u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x171228u, 0x171230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171230u;
label_171230:
    // 0x171230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x171230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171234:
    // 0x171234: 0x120000c1  beqz        $s0, . + 4 + (0xC1 << 2)
label_171238:
    if (ctx->pc == 0x171238u) {
        ctx->pc = 0x17123Cu;
        goto label_17123c;
    }
    ctx->pc = 0x171234u;
    {
        const bool branch_taken_0x171234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x171234) {
            ctx->pc = 0x17153Cu;
            goto label_17153c;
        }
    }
    ctx->pc = 0x17123Cu;
label_17123c:
    // 0x17123c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171240:
    // 0x171240: 0xc0495d4  jal         func_125750
label_171244:
    if (ctx->pc == 0x171244u) {
        ctx->pc = 0x171248u;
        goto label_171248;
    }
    ctx->pc = 0x171240u;
    SET_GPR_U32(ctx, 31, 0x171248u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x171240u, 0x171248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171248u;
label_171248:
    // 0x171248: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x171248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_17124c:
    // 0x17124c: 0x24c645f0  addiu       $a2, $a2, 0x45F0
    ctx->pc = 0x17124cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17904));
label_171250:
    // 0x171250: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x171250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_171254:
    // 0x171254: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x171254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_171258:
    // 0x171258: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x171258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17125c:
    // 0x17125c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x17125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_171260:
    // 0x171260: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x171260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_171264:
    // 0x171264: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x171264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_171268:
    // 0x171268: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x171268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_17126c:
    // 0x17126c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x17126cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_171270:
    // 0x171270: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_171274:
    // 0x171274: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_171278:
    if (ctx->pc == 0x171278u) {
        ctx->pc = 0x17127Cu;
        goto label_17127c;
    }
    ctx->pc = 0x171274u;
    {
        const bool branch_taken_0x171274 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x171274) {
            ctx->pc = 0x171258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171258;
        }
    }
    ctx->pc = 0x17127Cu;
label_17127c:
    // 0x17127c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17127cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171280:
    // 0x171280: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x171280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171284:
    // 0x171284: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x171284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_171288:
    // 0x171288: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x171288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17128c:
    // 0x17128c: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_171290:
    if (ctx->pc == 0x171290u) {
        ctx->pc = 0x171294u;
        goto label_171294;
    }
    ctx->pc = 0x17128Cu;
    {
        const bool branch_taken_0x17128c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17128c) {
            ctx->pc = 0x17134Cu;
            goto label_17134c;
        }
    }
    ctx->pc = 0x171294u;
label_171294:
    // 0x171294: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x171294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171298:
    // 0x171298: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_17129c:
    if (ctx->pc == 0x17129Cu) {
        ctx->pc = 0x1712A0u;
        goto label_1712a0;
    }
    ctx->pc = 0x171298u;
    {
        const bool branch_taken_0x171298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x171298) {
            ctx->pc = 0x17131Cu;
            goto label_17131c;
        }
    }
    ctx->pc = 0x1712A0u;
label_1712a0:
    // 0x1712a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1712a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1712a4:
    // 0x1712a4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1712a8:
    if (ctx->pc == 0x1712A8u) {
        ctx->pc = 0x1712ACu;
        goto label_1712ac;
    }
    ctx->pc = 0x1712A4u;
    {
        const bool branch_taken_0x1712a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1712a4) {
            ctx->pc = 0x1712ECu;
            goto label_1712ec;
        }
    }
    ctx->pc = 0x1712ACu;
label_1712ac:
    // 0x1712ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1712b0:
    if (ctx->pc == 0x1712B0u) {
        ctx->pc = 0x1712B4u;
        goto label_1712b4;
    }
    ctx->pc = 0x1712ACu;
    {
        const bool branch_taken_0x1712ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712ac) {
            ctx->pc = 0x1712BCu;
            goto label_1712bc;
        }
    }
    ctx->pc = 0x1712B4u;
label_1712b4:
    // 0x1712b4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1712b8:
    if (ctx->pc == 0x1712B8u) {
        ctx->pc = 0x1712BCu;
        goto label_1712bc;
    }
    ctx->pc = 0x1712B4u;
    {
        const bool branch_taken_0x1712b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712b4) {
            ctx->pc = 0x171374u;
            goto label_171374;
        }
    }
    ctx->pc = 0x1712BCu;
label_1712bc:
    // 0x1712bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1712bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1712c0:
    // 0x1712c0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1712c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1712c4:
    // 0x1712c4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1712c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1712c8:
    // 0x1712c8: 0x24a54640  addiu       $a1, $a1, 0x4640
    ctx->pc = 0x1712c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17984));
label_1712cc:
    // 0x1712cc: 0xc08e57c  jal         func_2395F0
label_1712d0:
    if (ctx->pc == 0x1712D0u) {
        ctx->pc = 0x1712D4u;
        goto label_1712d4;
    }
    ctx->pc = 0x1712CCu;
    SET_GPR_U32(ctx, 31, 0x1712D4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1712CCu, 0x1712D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712D4u;
label_1712d4:
    // 0x1712d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1712d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1712d8:
    // 0x1712d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1712d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1712dc:
    // 0x1712dc: 0xc0477e8  jal         func_11DFA0
label_1712e0:
    if (ctx->pc == 0x1712E0u) {
        ctx->pc = 0x1712E4u;
        goto label_1712e4;
    }
    ctx->pc = 0x1712DCu;
    SET_GPR_U32(ctx, 31, 0x1712E4u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1712DCu, 0x1712E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1712E4u;
label_1712e4:
    // 0x1712e4: 0x10000023  b           . + 4 + (0x23 << 2)
label_1712e8:
    if (ctx->pc == 0x1712E8u) {
        ctx->pc = 0x1712ECu;
        goto label_1712ec;
    }
    ctx->pc = 0x1712E4u;
    {
        const bool branch_taken_0x1712e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1712e4) {
            ctx->pc = 0x171374u;
            goto label_171374;
        }
    }
    ctx->pc = 0x1712ECu;
label_1712ec:
    // 0x1712ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1712ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1712f0:
    // 0x1712f0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1712f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1712f4:
    // 0x1712f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1712f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1712f8:
    // 0x1712f8: 0x24a54640  addiu       $a1, $a1, 0x4640
    ctx->pc = 0x1712f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17984));
label_1712fc:
    // 0x1712fc: 0xc08e57c  jal         func_2395F0
label_171300:
    if (ctx->pc == 0x171300u) {
        ctx->pc = 0x171304u;
        goto label_171304;
    }
    ctx->pc = 0x1712FCu;
    SET_GPR_U32(ctx, 31, 0x171304u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1712FCu, 0x171304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171304u;
label_171304:
    // 0x171304: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x171304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171308:
    // 0x171308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17130c:
    // 0x17130c: 0xc0477e8  jal         func_11DFA0
label_171310:
    if (ctx->pc == 0x171310u) {
        ctx->pc = 0x171314u;
        goto label_171314;
    }
    ctx->pc = 0x17130Cu;
    SET_GPR_U32(ctx, 31, 0x171314u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17130Cu, 0x171314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171314u;
label_171314:
    // 0x171314: 0x10000017  b           . + 4 + (0x17 << 2)
label_171318:
    if (ctx->pc == 0x171318u) {
        ctx->pc = 0x17131Cu;
        goto label_17131c;
    }
    ctx->pc = 0x171314u;
    {
        const bool branch_taken_0x171314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171314) {
            ctx->pc = 0x171374u;
            goto label_171374;
        }
    }
    ctx->pc = 0x17131Cu;
label_17131c:
    // 0x17131c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x17131cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171320:
    // 0x171320: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x171320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_171324:
    // 0x171324: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_171328:
    // 0x171328: 0x24a54650  addiu       $a1, $a1, 0x4650
    ctx->pc = 0x171328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18000));
label_17132c:
    // 0x17132c: 0xc08e57c  jal         func_2395F0
label_171330:
    if (ctx->pc == 0x171330u) {
        ctx->pc = 0x171334u;
        goto label_171334;
    }
    ctx->pc = 0x17132Cu;
    SET_GPR_U32(ctx, 31, 0x171334u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17132Cu, 0x171334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171334u;
label_171334:
    // 0x171334: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171338:
    // 0x171338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17133c:
    // 0x17133c: 0xc0477e8  jal         func_11DFA0
label_171340:
    if (ctx->pc == 0x171340u) {
        ctx->pc = 0x171344u;
        goto label_171344;
    }
    ctx->pc = 0x17133Cu;
    SET_GPR_U32(ctx, 31, 0x171344u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17133Cu, 0x171344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171344u;
label_171344:
    // 0x171344: 0x1000000b  b           . + 4 + (0xB << 2)
label_171348:
    if (ctx->pc == 0x171348u) {
        ctx->pc = 0x17134Cu;
        goto label_17134c;
    }
    ctx->pc = 0x171344u;
    {
        const bool branch_taken_0x171344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171344) {
            ctx->pc = 0x171374u;
            goto label_171374;
        }
    }
    ctx->pc = 0x17134Cu;
label_17134c:
    // 0x17134c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x17134cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171350:
    // 0x171350: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x171350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_171354:
    // 0x171354: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x171354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_171358:
    // 0x171358: 0x24a54660  addiu       $a1, $a1, 0x4660
    ctx->pc = 0x171358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18016));
label_17135c:
    // 0x17135c: 0xc08e57c  jal         func_2395F0
label_171360:
    if (ctx->pc == 0x171360u) {
        ctx->pc = 0x171364u;
        goto label_171364;
    }
    ctx->pc = 0x17135Cu;
    SET_GPR_U32(ctx, 31, 0x171364u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x17135Cu, 0x171364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171364u;
label_171364:
    // 0x171364: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x171364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171368:
    // 0x171368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17136c:
    // 0x17136c: 0xc0477e8  jal         func_11DFA0
label_171370:
    if (ctx->pc == 0x171370u) {
        ctx->pc = 0x171374u;
        goto label_171374;
    }
    ctx->pc = 0x17136Cu;
    SET_GPR_U32(ctx, 31, 0x171374u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17136Cu, 0x171374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171374u;
label_171374:
    // 0x171374: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x171374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171378:
    // 0x171378: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x171378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17137c:
    // 0x17137c: 0xc0552dc  jal         func_154B70
label_171380:
    if (ctx->pc == 0x171380u) {
        ctx->pc = 0x171384u;
        goto label_171384;
    }
    ctx->pc = 0x17137Cu;
    SET_GPR_U32(ctx, 31, 0x171384u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17137Cu, 0x171384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171384u;
label_171384:
    // 0x171384: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171388:
    // 0x171388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17138c:
    // 0x17138c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17138cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171390:
    // 0x171390: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x171390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171394:
    // 0x171394: 0xc08c378  jal         func_230DE0
label_171398:
    if (ctx->pc == 0x171398u) {
        ctx->pc = 0x17139Cu;
        goto label_17139c;
    }
    ctx->pc = 0x171394u;
    SET_GPR_U32(ctx, 31, 0x17139Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x171394u, 0x17139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17139Cu;
label_17139c:
    // 0x17139c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1713a0:
    // 0x1713a0: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x1713a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1713a4:
    // 0x1713a4: 0xc0552dc  jal         func_154B70
label_1713a8:
    if (ctx->pc == 0x1713A8u) {
        ctx->pc = 0x1713ACu;
        goto label_1713ac;
    }
    ctx->pc = 0x1713A4u;
    SET_GPR_U32(ctx, 31, 0x1713ACu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1713A4u, 0x1713ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713ACu;
label_1713ac:
    // 0x1713ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1713acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1713b0:
    // 0x1713b0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1713b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1713b4:
    // 0x1713b4: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x1713b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1713b8:
    // 0x1713b8: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1713b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1713bc:
    // 0x1713bc: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x1713bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1713c0:
    // 0x1713c0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1713c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1713c4:
    // 0x1713c4: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x1713c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1713c8:
    // 0x1713c8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1713c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1713cc:
    // 0x1713cc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1713ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1713d0:
    // 0x1713d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1713d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1713d4:
    // 0x1713d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1713d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1713d8:
    // 0x1713d8: 0xc4ec0040  lwc1        $f12, 0x40($a3)
    ctx->pc = 0x1713d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1713dc:
    // 0x1713dc: 0xc44d0044  lwc1        $f13, 0x44($v0)
    ctx->pc = 0x1713dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1713e0:
    // 0x1713e0: 0xc4ce0048  lwc1        $f14, 0x48($a2)
    ctx->pc = 0x1713e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1713e4:
    // 0x1713e4: 0xc46f004c  lwc1        $f15, 0x4C($v1)
    ctx->pc = 0x1713e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1713e8:
    // 0x1713e8: 0xc08c4d0  jal         func_231340
label_1713ec:
    if (ctx->pc == 0x1713ECu) {
        ctx->pc = 0x1713F0u;
        goto label_1713f0;
    }
    ctx->pc = 0x1713E8u;
    SET_GPR_U32(ctx, 31, 0x1713F0u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1713E8u, 0x1713F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713F0u;
label_1713f0:
    // 0x1713f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1713f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1713f4:
    // 0x1713f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1713f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1713f8:
    // 0x1713f8: 0x0  nop
    ctx->pc = 0x1713f8u;
    // NOP
label_1713fc:
    // 0x1713fc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1713fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_171400:
    // 0x171400: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x171400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171404:
    // 0x171404: 0x8c4500c4  lw          $a1, 0xC4($v0)
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_171408:
    // 0x171408: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x171408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17140c:
    // 0x17140c: 0xc0552dc  jal         func_154B70
label_171410:
    if (ctx->pc == 0x171410u) {
        ctx->pc = 0x171414u;
        goto label_171414;
    }
    ctx->pc = 0x17140Cu;
    SET_GPR_U32(ctx, 31, 0x171414u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17140Cu, 0x171414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171414u;
label_171414:
    // 0x171414: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x171414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_171418:
    // 0x171418: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x171418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_17141c:
    // 0x17141c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17141cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171420:
    // 0x171420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171424:
    // 0x171424: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x171424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171428:
    // 0x171428: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x171428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_17142c:
    // 0x17142c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17142cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171430:
    // 0x171430: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171430u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171434:
    // 0x171434: 0xc08b9fc  jal         func_22E7F0
label_171438:
    if (ctx->pc == 0x171438u) {
        ctx->pc = 0x17143Cu;
        goto label_17143c;
    }
    ctx->pc = 0x171434u;
    SET_GPR_U32(ctx, 31, 0x17143Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x171434u, 0x17143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17143Cu;
label_17143c:
    // 0x17143c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17143cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171440:
    // 0x171440: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x171440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_171444:
    // 0x171444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171448:
    // 0x171448: 0x0  nop
    ctx->pc = 0x171448u;
    // NOP
label_17144c:
    // 0x17144c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x17144cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_171450:
    // 0x171450: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x171450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171454:
    // 0x171454: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x171454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_171458:
    // 0x171458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17145c:
    // 0x17145c: 0xc0552dc  jal         func_154B70
label_171460:
    if (ctx->pc == 0x171460u) {
        ctx->pc = 0x171464u;
        goto label_171464;
    }
    ctx->pc = 0x17145Cu;
    SET_GPR_U32(ctx, 31, 0x171464u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x17145Cu, 0x171464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171464u;
label_171464:
    // 0x171464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171468:
    // 0x171468: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x171468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_17146c:
    // 0x17146c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17146cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_171470:
    // 0x171470: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x171470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171474:
    // 0x171474: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x171474u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_171478:
    // 0x171478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17147c:
    // 0x17147c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171480:
    // 0x171480: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x171480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171484:
    // 0x171484: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x171484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_171488:
    // 0x171488: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x171488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_17148c:
    // 0x17148c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17148cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171490:
    // 0x171490: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171494:
    // 0x171494: 0xc08b9fc  jal         func_22E7F0
label_171498:
    if (ctx->pc == 0x171498u) {
        ctx->pc = 0x17149Cu;
        goto label_17149c;
    }
    ctx->pc = 0x171494u;
    SET_GPR_U32(ctx, 31, 0x17149Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x171494u, 0x17149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17149Cu;
label_17149c:
    // 0x17149c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17149cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1714a0:
    // 0x1714a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1714a4:
    // 0x1714a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1714a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1714a8:
    // 0x1714a8: 0x0  nop
    ctx->pc = 0x1714a8u;
    // NOP
label_1714ac:
    // 0x1714ac: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1714acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1714b0:
    // 0x1714b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1714b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1714b4:
    // 0x1714b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1714b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1714b8:
    // 0x1714b8: 0x0  nop
    ctx->pc = 0x1714b8u;
    // NOP
label_1714bc:
    // 0x1714bc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1714bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1714c0:
    // 0x1714c0: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x1714c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1714c4:
    // 0x1714c4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1714c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1714c8:
    // 0x1714c8: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x1714c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1714cc:
    // 0x1714cc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1714ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1714d0:
    // 0x1714d0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1714d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1714d4:
    // 0x1714d4: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x1714d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_1714d8:
    // 0x1714d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1714d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1714dc:
    // 0x1714dc: 0xc0552dc  jal         func_154B70
label_1714e0:
    if (ctx->pc == 0x1714E0u) {
        ctx->pc = 0x1714E4u;
        goto label_1714e4;
    }
    ctx->pc = 0x1714DCu;
    SET_GPR_U32(ctx, 31, 0x1714E4u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1714DCu, 0x1714E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714E4u;
label_1714e4:
    // 0x1714e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1714e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1714e8:
    // 0x1714e8: 0x3c073e80  lui         $a3, 0x3E80
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16000 << 16));
label_1714ec:
    // 0x1714ec: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1714ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1714f0:
    // 0x1714f0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x1714f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1714f4:
    // 0x1714f4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1714f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1714f8:
    // 0x1714f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1714f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1714fc:
    // 0x1714fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1714fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171500:
    // 0x171500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171504:
    // 0x171504: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x171504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171508:
    // 0x171508: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_17150c:
    // 0x17150c: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x17150cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_171510:
    // 0x171510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171514:
    // 0x171514: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x171514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171518:
    // 0x171518: 0xc08bbf4  jal         func_22EFD0
label_17151c:
    if (ctx->pc == 0x17151Cu) {
        ctx->pc = 0x171520u;
        goto label_171520;
    }
    ctx->pc = 0x171518u;
    SET_GPR_U32(ctx, 31, 0x171520u);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x171518u, 0x171520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171520u;
label_171520:
    // 0x171520: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x171520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171524:
    // 0x171524: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x171524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171528:
    // 0x171528: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x171528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17152c:
    // 0x17152c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_171530:
    // 0x171530: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171534:
    // 0x171534: 0xc0406a0  jal         func_101A80
label_171538:
    if (ctx->pc == 0x171538u) {
        ctx->pc = 0x17153Cu;
        goto label_17153c;
    }
    ctx->pc = 0x171534u;
    SET_GPR_U32(ctx, 31, 0x17153Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x171534u, 0x17153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17153Cu;
label_17153c:
    // 0x17153c: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x17153cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_171540:
    // 0x171540: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x171540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171544:
    // 0x171544: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x171544u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_171548:
    // 0x171548: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x171548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_17154c:
    // 0x17154c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171550:
    // 0x171550: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x171550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_171554:
    // 0x171554: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x171554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_171558:
    // 0x171558: 0x244245d8  addiu       $v0, $v0, 0x45D8
    ctx->pc = 0x171558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17880));
label_17155c:
    // 0x17155c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17155cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171560:
    // 0x171560: 0xc05621c  jal         func_158870
label_171564:
    if (ctx->pc == 0x171564u) {
        ctx->pc = 0x171568u;
        goto label_171568;
    }
    ctx->pc = 0x171560u;
    SET_GPR_U32(ctx, 31, 0x171568u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x171560u, 0x171568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171568u;
label_171568:
    // 0x171568: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x171568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17156c:
    // 0x17156c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x17156cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_171570:
    // 0x171570: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
label_171574:
    if (ctx->pc == 0x171574u) {
        ctx->pc = 0x171578u;
        goto label_171578;
    }
    ctx->pc = 0x171570u;
    {
        const bool branch_taken_0x171570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x171570) {
            ctx->pc = 0x17169Cu;
            goto label_17169c;
        }
    }
    ctx->pc = 0x171578u;
label_171578:
    // 0x171578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17157c:
    // 0x17157c: 0x0  nop
    ctx->pc = 0x17157cu;
    // NOP
label_171580:
    // 0x171580: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x171580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_171584:
    // 0x171584: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x171584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171588:
    // 0x171588: 0x8cc700c4  lw          $a3, 0xC4($a2)
    ctx->pc = 0x171588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_17158c:
    // 0x17158c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x17158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_171590:
    // 0x171590: 0xc0552dc  jal         func_154B70
label_171594:
    if (ctx->pc == 0x171594u) {
        ctx->pc = 0x171598u;
        goto label_171598;
    }
    ctx->pc = 0x171590u;
    SET_GPR_U32(ctx, 31, 0x171598u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x171590u, 0x171598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171598u;
label_171598:
    // 0x171598: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x171598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17159c:
    // 0x17159c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17159cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1715a0:
    // 0x1715a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1715a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1715a4:
    // 0x1715a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1715a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1715a8:
    // 0x1715a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1715a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1715ac:
    // 0x1715ac: 0x27a70108  addiu       $a3, $sp, 0x108
    ctx->pc = 0x1715acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1715b0:
    // 0x1715b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1715b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1715b4:
    // 0x1715b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1715b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1715b8:
    // 0x1715b8: 0xc08b9fc  jal         func_22E7F0
label_1715bc:
    if (ctx->pc == 0x1715BCu) {
        ctx->pc = 0x1715C0u;
        goto label_1715c0;
    }
    ctx->pc = 0x1715B8u;
    SET_GPR_U32(ctx, 31, 0x1715C0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1715B8u, 0x1715C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715C0u;
label_1715c0:
    // 0x1715c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1715c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1715c4:
    // 0x1715c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1715c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1715c8:
    // 0x1715c8: 0x0  nop
    ctx->pc = 0x1715c8u;
    // NOP
label_1715cc:
    // 0x1715cc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1715ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1715d0:
    // 0x1715d0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1715d4:
    // 0x1715d4: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x1715d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1715d8:
    // 0x1715d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1715d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1715dc:
    // 0x1715dc: 0xc0552dc  jal         func_154B70
label_1715e0:
    if (ctx->pc == 0x1715E0u) {
        ctx->pc = 0x1715E4u;
        goto label_1715e4;
    }
    ctx->pc = 0x1715DCu;
    SET_GPR_U32(ctx, 31, 0x1715E4u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1715DCu, 0x1715E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1715E4u;
label_1715e4:
    // 0x1715e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1715e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1715e8:
    // 0x1715e8: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1715e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1715ec:
    // 0x1715ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1715ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1715f0:
    // 0x1715f0: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x1715f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1715f4:
    // 0x1715f4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1715f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1715f8:
    // 0x1715f8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1715f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1715fc:
    // 0x1715fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1715fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171600:
    // 0x171600: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x171600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_171604:
    // 0x171604: 0x27a70108  addiu       $a3, $sp, 0x108
    ctx->pc = 0x171604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_171608:
    // 0x171608: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x171608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_17160c:
    // 0x17160c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17160cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171610:
    // 0x171610: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x171610u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171614:
    // 0x171614: 0xc08b9fc  jal         func_22E7F0
label_171618:
    if (ctx->pc == 0x171618u) {
        ctx->pc = 0x17161Cu;
        goto label_17161c;
    }
    ctx->pc = 0x171614u;
    SET_GPR_U32(ctx, 31, 0x17161Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x171614u, 0x17161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17161Cu;
label_17161c:
    // 0x17161c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x17161cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_171620:
    // 0x171620: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x171620u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171624:
    // 0x171624: 0x0  nop
    ctx->pc = 0x171624u;
    // NOP
label_171628:
    // 0x171628: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x171628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_17162c:
    // 0x17162c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_171630:
    // 0x171630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x171630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_171634:
    // 0x171634: 0x0  nop
    ctx->pc = 0x171634u;
    // NOP
label_171638:
    // 0x171638: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x171638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_17163c:
    // 0x17163c: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x17163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171640:
    // 0x171640: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x171640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_171644:
    // 0x171644: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x171644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171648:
    // 0x171648: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x171648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_17164c:
    // 0x17164c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x17164cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_171650:
    // 0x171650: 0x8c6600c4  lw          $a2, 0xC4($v1)
    ctx->pc = 0x171650u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_171654:
    // 0x171654: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x171654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_171658:
    // 0x171658: 0xc0552dc  jal         func_154B70
label_17165c:
    if (ctx->pc == 0x17165Cu) {
        ctx->pc = 0x171660u;
        goto label_171660;
    }
    ctx->pc = 0x171658u;
    SET_GPR_U32(ctx, 31, 0x171660u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x171658u, 0x171660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171660u;
label_171660:
    // 0x171660: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x171660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171664:
    // 0x171664: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x171664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_171668:
    // 0x171668: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x171668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17166c:
    // 0x17166c: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x17166cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_171670:
    // 0x171670: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x171670u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_171674:
    // 0x171674: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x171674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_171678:
    // 0x171678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17167c:
    // 0x17167c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17167cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171680:
    // 0x171680: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x171680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_171684:
    // 0x171684: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x171684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_171688:
    // 0x171688: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x171688u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17168c:
    // 0x17168c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x17168cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_171690:
    // 0x171690: 0xc08bbf4  jal         func_22EFD0
label_171694:
    if (ctx->pc == 0x171694u) {
        ctx->pc = 0x171698u;
        goto label_171698;
    }
    ctx->pc = 0x171690u;
    SET_GPR_U32(ctx, 31, 0x171698u);
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x171690u, 0x171698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171698u;
label_171698:
    // 0x171698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17169c:
    // 0x17169c: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x17169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1716a0:
    // 0x1716a0: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1716a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1716a4:
    // 0x1716a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1716a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1716a8:
    // 0x1716a8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1716a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1716ac:
    // 0x1716ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1716acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1716b0:
    // 0x1716b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1716b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1716b4:
    // 0x1716b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1716b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1716b8:
    // 0x1716b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1716b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1716bc:
    // 0x1716bc: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1716c0:
    // 0x1716c0: 0x3e00008  jr          $ra
label_1716c4:
    if (ctx->pc == 0x1716C4u) {
        ctx->pc = 0x1716C8u;
        goto label_1716c8;
    }
    ctx->pc = 0x1716C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1716C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1716C8u;
label_1716c8:
    // 0x1716c8: 0x0  nop
    ctx->pc = 0x1716c8u;
    // NOP
label_1716cc:
    // 0x1716cc: 0x0  nop
    ctx->pc = 0x1716ccu;
    // NOP
    ctx->pc = 0x1716d0u;
}
